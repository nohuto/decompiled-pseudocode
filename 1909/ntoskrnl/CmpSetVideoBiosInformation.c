/*
 * XREFs of CmpSetVideoBiosInformation @ 0x140A0C564
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0BE88 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwMapViewOfSection @ 0x1401C1150 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401C1190 (ZwUnmapViewOfSection.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     CmpGetBiosVersion @ 0x140A0CA64 (CmpGetBiosVersion.c)
 *     CmpGetBiosDate @ 0x140A0CC24 (CmpGetBiosDate.c)
 */

void __fastcall CmpSetVideoBiosInformation(HANDLE SectionHandle, HANDLE KeyHandle)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  _WORD *PoolWithTag; // rdi
  _WORD *v8; // rsi
  unsigned int v9; // ebx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-90h] BYREF
  _STRING v14; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  CHAR SourceString[128]; // [rsp+A0h] [rbp-60h] BYREF

  *(_QWORD *)&v14.Length = 0LL;
  v14.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  ViewSize = 4096LL;
  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  v5 = 786432;
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x1000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    v6 = ((*((_DWORD *)BaseAddress + 16) & 0xFFF0) + (*((_DWORD *)BaseAddress + 16) >> 12)) & 0xFFFF8000;
    if ( v6 < 0xC0000 )
      v6 = 786432;
    v5 = v6;
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  BaseAddress = 0LL;
  ViewSize = 0x8000LL;
  SectionOffset.QuadPart = v5;
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x8000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
    if ( (unsigned __int8)CmpGetBiosDate(BaseAddress, 0x8000LL, SourceString, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, L"VideoBiosDate");
      RtlInitAnsiString(&v14, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &v14, 1u) >= 0 )
      {
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( PoolWithTag && (unsigned __int8)CmpGetBiosVersion(BaseAddress, 0x8000LL, SourceString) )
    {
      v8 = PoolWithTag;
      do
      {
        RtlInitAnsiString(&v14, SourceString);
        if ( RtlAnsiStringToUnicodeString(&UnicodeString, &v14, 1u) >= 0 )
        {
          v9 = UnicodeString.Length + 2;
          memmove(v8, UnicodeString.Buffer, v9);
          v4 += v9;
          RtlFreeAnsiString(&UnicodeString);
          if ( (unsigned __int64)v4 + 260 > 0x1000 )
            break;
          v8 = (_WORD *)((char *)v8 + v9);
        }
      }
      while ( (unsigned __int8)CmpGetBiosVersion(0LL, 0LL, SourceString) );
      if ( v4 - 1 <= 0xFFD )
      {
        *v8 = 0;
        RtlInitUnicodeString(&DestinationString, L"VideoBiosVersion");
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 7u, PoolWithTag, v4 + 2);
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
