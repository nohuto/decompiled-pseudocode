/*
 * XREFs of AdtpBuildAccessesString @ 0x14092D58C
 * Callers:
 *     AdtpPackageParameters @ 0x1401335A8 (AdtpPackageParameters.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140347E54 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpBuildObjectTypeStrings @ 0x14092DA40 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1406238A0 (RtlIntegerToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AdtpBuildAccessesString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        int a4,
        PUNICODE_STRING DestinationString,
        wchar_t **a6,
        __int64 a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r15d
  __int64 *v10; // r13
  int v11; // r8d
  NTSTATUS appended; // edx
  int v14; // ecx
  int v15; // r9d
  const WCHAR *v16; // r12
  unsigned int v17; // edi
  __int64 v18; // rax
  int v19; // ecx
  wchar_t *PoolWithTag; // rax
  unsigned int v21; // edi
  unsigned int v22; // esi
  _DWORD *v23; // r14
  _DWORD *v24; // rsi
  wchar_t **v25; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v27; // rsi
  char v28; // di
  const UNICODE_STRING *v29; // rbx
  __int64 *v30; // r14
  _QWORD *v31; // rsi
  wchar_t *Buffer; // rax
  char v33; // r15
  const UNICODE_STRING *v34; // r12
  _QWORD *v35; // r14
  int v36; // r14d
  unsigned int v37; // edi
  int v38; // esi
  NTSTATUS v39; // [rsp+20h] [rbp-A9h]
  UNICODE_STRING Destination; // [rsp+28h] [rbp-A1h] BYREF
  int v41; // [rsp+38h] [rbp-91h]
  const WCHAR *v42; // [rsp+40h] [rbp-89h]
  wchar_t **v43; // [rsp+48h] [rbp-81h]
  _QWORD *v44; // [rsp+50h] [rbp-79h]
  PCUNICODE_STRING String2; // [rsp+58h] [rbp-71h]
  PCUNICODE_STRING v46; // [rsp+60h] [rbp-69h]
  wchar_t *v47; // [rsp+68h] [rbp-61h]
  UNICODE_STRING String; // [rsp+70h] [rbp-59h] BYREF
  UNICODE_STRING *v49; // [rsp+80h] [rbp-49h]
  UNICODE_STRING v50; // [rsp+88h] [rbp-41h] BYREF
  UNICODE_STRING v51; // [rsp+98h] [rbp-31h] BYREF
  char v52; // [rsp+A8h] [rbp-21h] BYREF

  v9 = a3;
  v10 = 0LL;
  String2 = a1;
  v41 = a3;
  v11 = 0;
  v46 = a2;
  appended = 0;
  v49 = DestinationString;
  v43 = a6;
  v44 = 0LL;
  *(_QWORD *)&v50.Length = 0LL;
  v50.Buffer = 0LL;
  *(_QWORD *)&v51.Length = 0LL;
  v51.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !v9 )
  {
    if ( a6 )
    {
      a6[1] = (wchar_t *)4;
      *a6 = (wchar_t *)"-";
    }
    else if ( DestinationString )
    {
      RtlInitUnicodeString(DestinationString, L"-");
    }
    return 0LL;
  }
  v14 = v9;
  do
  {
    ++v11;
    v14 &= v14 - 1;
  }
  while ( v14 );
  if ( a4 )
  {
    v15 = a4 - 1;
    if ( !v15 )
    {
      v16 = L"\r\n";
      goto LABEL_15;
    }
    if ( v15 == 1 )
    {
      v16 = L":\t";
      goto LABEL_15;
    }
  }
  v16 = L"\r\n\t\t\t\t";
LABEL_15:
  v42 = v16;
  v17 = 24 * v11 + 1;
  if ( a7 && a8 && (v18 = (unsigned int)*a8, v19 = v18 + v17, (unsigned int)v18 + v17 < 0x400) )
  {
    PoolWithTag = (wchar_t *)(a7 + 2 * v18);
    *a8 = v19;
    v47 = PoolWithTag;
  }
  else
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v17, 0x6B416553u);
    v47 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    *a9 = 1;
    appended = 0;
  }
  Destination.Buffer = PoolWithTag;
  Destination.MaximumLength = 2 * v17;
  v21 = 5;
  if ( (v9 & 0x1F0000) != 0 )
  {
    v22 = 0;
    v23 = &AdtpStandardAccessTypes;
    do
    {
      if ( (v9 & *v23) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"%%");
        RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v22);
        appended = RtlAppendUnicodeToString(&Destination, v16);
      }
      ++v22;
      ++v23;
    }
    while ( v22 < 5 );
  }
  v24 = &unk_1403A42E4;
  do
  {
    if ( (v9 & *v24) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"%%");
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v21);
      appended = RtlAppendUnicodeToString(&Destination, v16);
    }
    ++v21;
    ++v24;
  }
  while ( v21 < 7 );
  v25 = v43;
  v39 = appended;
  if ( (_WORD)v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&AdtpSourceModuleLock, 1u);
    v27 = &AdtpSourceModules;
    v28 = 0;
    if ( AdtpSourceModules )
    {
      v29 = String2;
      do
      {
        if ( v28 )
          break;
        v30 = (__int64 *)*v27;
        if ( RtlEqualUnicodeString((PCUNICODE_STRING)(*v27 + 8), v29, 1u) )
        {
          v28 = 1;
          *v27 = *v30;
          v10 = v30;
          *v30 = AdtpSourceModules;
          AdtpSourceModules = (__int64)v30;
        }
        else
        {
          v27 = v30;
        }
      }
      while ( *v27 );
      v25 = v43;
      if ( v28 == 1 )
      {
        v28 = 0;
        v31 = v10 + 3;
        RtlInitUnicodeString(&v50, L"DS");
        if ( !RtlEqualUnicodeString(String2, &v50, 1u)
          || v46->Length != 78
          || (Buffer = v46->Buffer, *Buffer != 37)
          || Buffer[1] != 123
          || (v33 = 1, Buffer[38] != 125) )
        {
          v33 = 0;
        }
        RtlInitUnicodeString(&v51, L"Directory Service Object");
        if ( v10[3] )
        {
          v34 = v46;
          do
          {
            if ( v28 )
              break;
            if ( v33 && (v35 = (_QWORD *)*v31, RtlEqualUnicodeString((PCUNICODE_STRING)(*v31 + 8LL), &v51, 1u))
              || (v35 = (_QWORD *)*v31, RtlEqualUnicodeString((PCUNICODE_STRING)(*v31 + 8LL), v34, 1u)) )
            {
              v28 = 1;
              v44 = v35;
              *v31 = *v35;
              *v35 = v10[3];
              v10[3] = (__int64)v35;
            }
            else
            {
              v31 = v35;
            }
          }
          while ( *v31 );
          v25 = v43;
          v16 = v42;
        }
        v9 = v41;
      }
    }
    ExReleaseResourceLite(&AdtpSourceModuleLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v28 )
      v36 = *((_DWORD *)v44 + 6);
    else
      v36 = 1552;
    *(_QWORD *)&String.Length = 1310720LL;
    v37 = 0;
    String.Buffer = (wchar_t *)&v52;
    v38 = 1;
    do
    {
      if ( (v38 & v9) != 0 )
      {
        v39 = RtlIntegerToUnicodeString(v36 + v37, 0xAu, &String);
        appended = v39;
        if ( v39 >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"%%");
          RtlAppendUnicodeStringToString(&Destination, &String);
          appended = RtlAppendUnicodeToString(&Destination, v16);
          v39 = appended;
        }
      }
      else
      {
        appended = v39;
      }
      ++v37;
      v38 *= 2;
    }
    while ( v37 < 0x10 );
  }
  if ( appended >= 0 )
  {
    if ( v25 )
    {
      *v25 = v47;
      v25[1] = (wchar_t *)((unsigned int)Destination.Length + 2);
    }
    else
    {
      *v49 = Destination;
    }
  }
  return (unsigned int)appended;
}
