/*
 * XREFs of WerKernelSubmitReportForHungProcess @ 0x1C022E2FC
 * Callers:
 *     ?WerSubmitReportWorker@@YAXPEAX@Z @ 0x1C01FE080 (-WerSubmitReportWorker@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     WerStartSystemErrorHandler @ 0x1C022E62C (WerStartSystemErrorHandler.c)
 *     WerWaitForSystemErrorHandler @ 0x1C022E73C (WerWaitForSystemErrorHandler.c)
 *     WerpAllocateAndInitializeSid @ 0x1C022E7EC (WerpAllocateAndInitializeSid.c)
 */

__int64 __fastcall WerKernelSubmitReportForHungProcess(int a1, int a2, int a3)
{
  int v6; // ebx
  NTSTATUS started; // eax
  __int64 v8; // r9
  const CHAR *v9; // r8
  int v10; // eax
  int v12; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+30h] [rbp-D0h]
  int v16; // [rsp+38h] [rbp-C8h]
  int v17; // [rsp+40h] [rbp-C0h]
  int v18; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  unsigned int SystemInformation; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+90h] [rbp-70h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v30[10]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v31[352]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v32[352]; // [rsp+6A0h] [rbp+5A0h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  P = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(v30, 0, 0x48uLL);
  RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
  memset(v30, 0, 0x48uLL);
  v30[2] = 1400LL;
  v6 = WerpAllocateAndInitializeSid(&IdentifierAuthority, v12, v14, v15, v16, v17, v18, (__int64)&P);
  if ( v6 >= 0 )
  {
    started = WerStartSystemErrorHandler();
    v6 = started;
    if ( started < 0 )
    {
      v8 = 1380LL;
      v9 = "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n";
LABEL_4:
      LODWORD(v13) = started;
      DbgPrintEx(0x96u, 0, v9, v8, v13);
      goto LABEL_21;
    }
    started = ZwQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
    v6 = started;
    if ( started < 0 )
    {
      v8 = 1395LL;
      v9 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n";
      goto LABEL_4;
    }
    started = WerWaitForSystemErrorHandler(SystemInformation);
    v6 = started;
    if ( started < 0 )
    {
      v8 = 1402LL;
      v9 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n";
      goto LABEL_4;
    }
    if ( started == 258 )
    {
      started = -1073740973;
      v9 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n";
      v6 = -1073740973;
      v8 = 1409LL;
      goto LABEL_4;
    }
    v24 = 48;
    v25 = 0LL;
    v27 = 512;
    v26 = 0LL;
    v28 = 0LL;
    started = ZwAlpcConnectPort(&Handle, &DestinationString, &v24, v30, 0x20000, P, 0LL, 0LL, 0LL, 0LL, 0LL);
    v6 = started;
    if ( started < 0 )
    {
      v8 = 1432LL;
      v9 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n";
      goto LABEL_4;
    }
    if ( started == 258 )
    {
      started = -1073740973;
      v9 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n";
      v6 = -1073740973;
      v8 = 1439LL;
      goto LABEL_4;
    }
    memset(v31, 0, 0x578uLL);
    v31[12] = a1;
    v31[0] = 91751760;
    v31[10] = 0x10000000;
    v31[28] = a2;
    v31[66] = -1073741637;
    v31[344] = a3;
    v31[345] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    memset(v32, 0, 0x578uLL);
    v32[0] = 91751760;
    v22 = 1400LL;
    v10 = ZwAlpcSendWaitReceivePort(Handle, 0x20000LL, v31, 0LL, v32, &v22, 0LL, 0LL);
    v6 = v10;
    if ( v10 < 0 || v10 == 258 )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n", 1470);
    }
    else if ( v32[11] >= 0 )
    {
      v6 = 0;
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1476);
      v6 = -1073741823;
    }
  }
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
