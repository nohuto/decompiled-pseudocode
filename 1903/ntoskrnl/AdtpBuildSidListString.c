/*
 * XREFs of AdtpBuildSidListString @ 0x14092D39C
 * Callers:
 *     AdtpPackageParameters @ 0x140132AB8 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x140667B9C (RtlLengthSidAsUnicodeString.c)
 */

__int64 __fastcall AdtpBuildSidListString(unsigned int *a1, __int64 a2, wchar_t **a3, __int64 a4, _DWORD *a5, char *a6)
{
  wchar_t *PoolWithTag; // rsi
  char v9; // r14
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  void **v12; // rsi
  unsigned int v13; // r13d
  void *v14; // rcx
  unsigned int v15; // ecx
  NTSTATUS appended; // ebx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r15
  unsigned __int16 Length; // ax
  unsigned int v21; // r13d
  PSID *v22; // r15
  ULONG StringLength; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  char *v29; // [rsp+58h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF

  v29 = a6;
  v28 = a4;
  v27 = a5;
  PoolWithTag = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !a1 || (v10 = *a1) == 0 )
  {
    if ( a3 )
    {
      a3[1] = (wchar_t *)4;
      *a3 = (wchar_t *)"-";
    }
    appended = 0;
LABEL_24:
    if ( appended >= 0 )
      goto LABEL_27;
    goto LABEL_25;
  }
  v11 = 1;
  v12 = (void **)(*((_QWORD *)a1 + 1) + 8LL);
  v13 = 0;
  do
  {
    v14 = *v12;
    StringLength = 0;
    RtlLengthSidAsUnicodeString(v14, &StringLength);
    v15 = v11 + (StringLength >> 1) + 7;
    if ( v15 < v11 )
    {
      appended = -1073741675;
      goto LABEL_27;
    }
    ++v13;
    v12 += 2;
    v11 += (StringLength >> 1) + 7;
  }
  while ( v13 < v10 );
  if ( v15 > 0x7FFF )
  {
    appended = -1073741811;
    goto LABEL_27;
  }
  v17 = (unsigned int)*v27;
  v18 = v17 + v15;
  if ( (unsigned int)v17 + v11 >= 0x400 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v11, 0x6B416553u);
    if ( !PoolWithTag )
    {
      appended = -1073741801;
      goto LABEL_27;
    }
    v9 = 1;
  }
  else
  {
    PoolWithTag = (wchar_t *)(v28 + 2 * v17);
    *v27 = v18;
  }
  v19 = *((_QWORD *)a1 + 1);
  Destination.Buffer = PoolWithTag;
  Length = 0;
  Destination.MaximumLength = 2 * v11;
  appended = 0;
  Destination.Length = 0;
  v21 = 0;
  *(_DWORD *)&UnicodeString.Length = 0x2000000;
  UnicodeString.Buffer = (wchar_t *)&v30;
  if ( !*a1 )
  {
LABEL_19:
    if ( a3 )
    {
      *a3 = PoolWithTag;
      a3[1] = (wchar_t *)((unsigned int)Length + 2);
    }
    goto LABEL_24;
  }
  v22 = (PSID *)(v19 + 8);
  while ( 1 )
  {
    appended = RtlConvertSidToUnicodeString(&UnicodeString, *v22, 0);
    if ( appended < 0 )
      break;
    RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    ++v21;
    v22 += 2;
    appended = RtlAppendUnicodeToString(&Destination, L"}");
    if ( v21 >= *a1 )
    {
      Length = Destination.Length;
      goto LABEL_19;
    }
  }
LABEL_25:
  if ( v9 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    v9 = 0;
  }
LABEL_27:
  *v29 = v9;
  return (unsigned int)appended;
}
