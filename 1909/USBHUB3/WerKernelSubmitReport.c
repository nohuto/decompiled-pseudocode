/*
 * XREFs of WerKernelSubmitReport @ 0x1C0040ADC
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C00833C4 (TelemetryData_SubmitReport.c)
 * Callees:
 *     WerpGetRegistryKey @ 0x1C00401C8 (WerpGetRegistryKey.c)
 *     WerpAllocateAndInitializeSid @ 0x1C00402C0 (WerpAllocateAndInitializeSid.c)
 *     WerpParseKeyName @ 0x1C00403CC (WerpParseKeyName.c)
 *     WerStartSystemErrorHandler @ 0x1C00408E0 (WerStartSystemErrorHandler.c)
 *     WerWaitForSystemErrorHandler @ 0x1C0040A10 (WerWaitForSystemErrorHandler.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall WerKernelSubmitReport(HANDLE KeyHandle)
{
  __int64 v2; // r14
  __int64 v3; // r12
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // r8
  int RegistryKey; // eax
  int v10; // ebx
  NTSTATUS Key; // eax
  _DWORD *PoolWithTag; // rsi
  int started; // eax
  __int64 v14; // r9
  const CHAR *v15; // r8
  int v16; // eax
  ULONG v17; // eax
  __int64 *v18; // rdi
  unsigned __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r14
  _WORD *v23; // rcx
  __int16 v24; // ax
  _WORD *v25; // rax
  __int64 v26; // r9
  const CHAR *v27; // r8
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r12
  _WORD *v31; // rcx
  __int16 v32; // ax
  _WORD *v33; // rax
  int v34; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  ULONG Length[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandlea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  __int64 SystemInformation; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v42; // [rsp+98h] [rbp-70h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v47[3]; // [rsp+C8h] [rbp-40h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v49[10]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v50[352]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v51[352]; // [rsp+6D8h] [rbp+5D0h] BYREF

  Handle = 0LL;
  memset(v50, 0, 0x578uLL);
  memset(v51, 0, 0x578uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v47, 0, sizeof(v47));
  P = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v44 = 0LL;
  v2 = 0LL;
  v42 = 0LL;
  v3 = 0LL;
  v43 = 0LL;
  v4 = 0;
  v38 = 0LL;
  v5 = 0;
  KeyHandlea = 0LL;
  memset(v49, 0, 0x48uLL);
  SystemInformation = 0LL;
  if ( !KeyHandle )
    return 3221225485LL;
  RegistryKey = WerpGetRegistryKey(KeyHandle, v6, v7, &KeyHandlea);
  if ( RegistryKey >= 0 )
  {
    ZwDeleteKey(KeyHandlea);
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
    Key = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, Length);
    v10 = Key;
    if ( Key != -2147483643 && Key != -1073741789 )
    {
      DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n",
        1008,
        Key);
      goto LABEL_68;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (int)Length[0], 0x7765726Bu);
    if ( !PoolWithTag )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 1016);
      v10 = -1073741801;
      goto LABEL_68;
    }
    started = ZwQueryKey(KeyHandle, KeyNameInformation, PoolWithTag, Length[0], Length);
    v10 = started;
    if ( started < 0 )
    {
      v14 = 1034LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n";
LABEL_12:
      LODWORD(ResultLength) = started;
      DbgPrintEx(0x96u, 0, v15, v14, ResultLength);
      goto LABEL_67;
    }
    if ( PoolWithTag == (_DWORD *)-4LL )
    {
      v10 = -1073741811;
    }
    else
    {
      v16 = WerpParseKeyName(
              (unsigned __int64)(PoolWithTag + 1),
              *PoolWithTag >> 1,
              &v42,
              &v38,
              &v43,
              (_DWORD *)&v38 + 1);
      v2 = v42;
      v10 = v16;
      v3 = v43;
      v4 = v38;
      v5 = HIDWORD(v38);
    }
    if ( v10 < 0 )
    {
      LODWORD(ResultLength) = v10;
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ParseKeyName failed with 0x%x\n", 1047LL, ResultLength);
LABEL_67:
      ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_68;
    }
    RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
    v49[2] = 1400LL;
    v17 = RtlLengthRequiredSid(1u);
    v10 = WerpAllocateAndInitializeSid(&IdentifierAuthority, &P, v17);
    if ( v10 < 0 )
      goto LABEL_67;
    started = WerStartSystemErrorHandler();
    v10 = started;
    if ( started < 0 )
    {
      v14 = 1080LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n";
      goto LABEL_12;
    }
    started = ZwQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
    v10 = started;
    if ( started < 0 )
    {
      v14 = 1094LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n";
      goto LABEL_12;
    }
    started = WerWaitForSystemErrorHandler(SystemInformation);
    v10 = started;
    if ( started < 0 )
    {
      v14 = 1101LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n";
      goto LABEL_12;
    }
    if ( started == 258 )
    {
      started = -1073740973;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n";
      v10 = -1073740973;
      v14 = 1108LL;
      goto LABEL_12;
    }
    LODWORD(v47[0]) = 48;
    *((_QWORD *)&v47[0] + 1) = 0LL;
    DWORD2(v47[1]) = 512;
    *(_QWORD *)&v47[1] = 0LL;
    v47[2] = 0LL;
    if ( HIDWORD(SystemInformation) != -1 )
      v44 = -10000LL * SHIDWORD(SystemInformation);
    v18 = &v44;
    if ( HIDWORD(SystemInformation) == -1 )
      v18 = 0LL;
    started = ZwAlpcConnectPort(&Handle, &DestinationString, v47, v49, 0x20000, P, 0LL, 0LL, 0LL, 0LL, v18);
    v10 = started;
    if ( started < 0 )
    {
      v14 = 1138LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n";
      goto LABEL_12;
    }
    if ( started == 258 )
    {
      started = -1073740973;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n";
      v10 = -1073740973;
      v14 = 1145LL;
      goto LABEL_12;
    }
    v19 = v4;
    v50[0] = 91751760;
    v50[10] = 1610612736;
    if ( v4 > 0xF )
      v19 = 15LL;
    LOWORD(v50[1]) = 0;
    v50[12] = 0;
    if ( v19 <= 0x7FFFFFFE )
    {
      v21 = 16LL;
      v22 = v2 - (_QWORD)&v50[14];
      v23 = &v50[14];
      do
      {
        if ( !(v19 + v21 - 16) )
          break;
        v24 = *(_WORD *)((char *)v23 + v22);
        if ( !v24 )
          break;
        *v23++ = v24;
        --v21;
      }
      while ( v21 );
      v25 = v23 - 1;
      if ( v21 )
        v25 = v23;
      *v25 = 0;
      v20 = v21 == 0 ? 0x8007007A : 0;
      if ( v21 )
      {
        v28 = v5;
        if ( v5 > 0x1F )
          v28 = 31LL;
        if ( v28 <= 0x7FFFFFFE )
        {
          v29 = 32LL;
          v30 = v3 - (_QWORD)&v50[22];
          v31 = &v50[22];
          do
          {
            if ( !(v28 + v29 - 32) )
              break;
            v32 = *(_WORD *)((char *)v31 + v30);
            if ( !v32 )
              break;
            *v31++ = v32;
            --v29;
          }
          while ( v29 );
          v33 = v31 - 1;
          if ( v29 )
            v33 = v31;
          *v33 = 0;
          v20 = v29 == 0 ? 0x8007007A : 0;
          if ( v29 )
          {
            memset(&v51[1], 0, 0x574uLL);
            v45 = 1400LL;
            v51[0] = 91751760;
            v34 = ZwAlpcSendWaitReceivePort(Handle, 0LL, v50, 0LL, v51, &v45, 0LL, v18);
            v10 = v34;
            if ( v34 < 0 || v34 == 258 )
            {
              DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n", 1205);
            }
            else if ( v51[11] >= 0 )
            {
              v10 = 0;
            }
            else
            {
              DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1211);
              v10 = -1073741823;
            }
            goto LABEL_67;
          }
        }
        else
        {
          v20 = -2147024809;
          LOWORD(v50[22]) = 0;
        }
        v26 = 1184LL;
        v27 = "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for id with 0x%x\n";
        goto LABEL_48;
      }
    }
    else
    {
      v20 = -2147024809;
      LOWORD(v50[14]) = 0;
    }
    v26 = 1170LL;
    v27 = "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for key with 0x%x\n";
LABEL_48:
    LODWORD(ResultLength) = v20;
    DbgPrintEx(0x96u, 0, v27, v26, ResultLength);
    v10 = v20 | 0x80070000;
    goto LABEL_67;
  }
  DbgPrintEx(
    0x96u,
    0,
    "WERLIVEKERNELREPORTING:%u: ERROR WerpGetRegistryKey failed for the busy key 0x%x\n",
    985,
    RegistryKey);
  v10 = -2147019873;
LABEL_68:
  if ( KeyHandlea )
  {
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v10;
}
