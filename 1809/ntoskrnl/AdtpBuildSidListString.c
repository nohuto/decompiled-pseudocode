/*
 * XREFs of AdtpBuildSidListString @ 0x1408F09E8
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14065BB74 (RtlLengthSidAsUnicodeString.c)
 */

__int64 __fastcall AdtpBuildSidListString(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6)
{
  NTSTATUS appended; // edi
  wchar_t *PoolWithTag; // r15
  char v10; // r13
  unsigned int v11; // r14d
  void **v12; // rcx
  void *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int16 Length; // ax
  unsigned int v20; // r14d
  PSID *v21; // rbx
  ULONG StringLength; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-DCh]
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  void **v28; // [rsp+50h] [rbp-B0h]
  char *v29; // [rsp+58h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF

  *(_QWORD *)&Destination.Length = a4;
  *(_QWORD *)&UnicodeString.Length = a5;
  appended = 0;
  v29 = a6;
  PoolWithTag = 0LL;
  v10 = 0;
  if ( a1 && (v26 = *a1) != 0 )
  {
    v11 = 1;
    v12 = (void **)(*((_QWORD *)a1 + 1) + 8LL);
    v24 = 0;
    v28 = v12;
    while ( 1 )
    {
      v13 = *v12;
      StringLength = 0;
      RtlLengthSidAsUnicodeString(v13, &StringLength);
      v14 = -1;
      v15 = v11;
      v16 = v11 + (StringLength >> 1) + 7;
      if ( v16 >= v11 )
        v14 = v11 + (StringLength >> 1) + 7;
      v11 = v14;
      appended = v16 < v15 ? 0xC0000095 : 0;
      if ( v16 < v15 )
        break;
      v12 = v28 + 2;
      ++v24;
      v28 += 2;
      if ( v24 >= v26 )
      {
        if ( v14 > 0x7FFF )
        {
          appended = -1073741811;
          goto LABEL_27;
        }
        v17 = **(unsigned int **)&UnicodeString.Length;
        if ( (unsigned int)v17 + v11 >= 0x400 )
        {
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v11, 0x6B416553u);
          if ( !PoolWithTag )
          {
            appended = -1073741801;
            goto LABEL_27;
          }
          v10 = 1;
        }
        else
        {
          PoolWithTag = (wchar_t *)(*(_QWORD *)&Destination.Length + 2 * v17);
          **(_DWORD **)&UnicodeString.Length = v17 + v11;
        }
        v18 = *((_QWORD *)a1 + 1);
        Destination.Buffer = PoolWithTag;
        Length = 0;
        Destination.MaximumLength = 2 * v11;
        v20 = 0;
        Destination.Length = 0;
        *(_DWORD *)&UnicodeString.Length = 0x2000000;
        UnicodeString.Buffer = (wchar_t *)&v30;
        if ( !*a1 )
        {
LABEL_20:
          if ( a3 )
          {
            *(_QWORD *)a3 = PoolWithTag;
            *(_DWORD *)(a3 + 8) = Length + 2;
            *(_DWORD *)(a3 + 12) = 0;
          }
          break;
        }
        v21 = (PSID *)(v18 + 8);
        while ( 1 )
        {
          appended = RtlConvertSidToUnicodeString(&UnicodeString, *v21, 0);
          if ( appended < 0 )
            goto LABEL_25;
          RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
          RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
          ++v20;
          v21 += 2;
          appended = RtlAppendUnicodeToString(&Destination, L"}");
          if ( v20 >= *a1 )
          {
            Length = Destination.Length;
            goto LABEL_20;
          }
        }
      }
    }
  }
  else if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = 4LL;
    *(_QWORD *)a3 = "-";
  }
  if ( appended < 0 )
  {
LABEL_25:
    if ( v10 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      v10 = 0;
    }
  }
LABEL_27:
  *v29 = v10;
  return (unsigned int)appended;
}
