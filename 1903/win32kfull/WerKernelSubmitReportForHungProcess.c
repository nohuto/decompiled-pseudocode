/*
 * XREFs of WerKernelSubmitReportForHungProcess @ 0x1C025D0E4
 * Callers:
 *     ?WerSubmitReportWorker@@YAXPEAX@Z @ 0x1C023EA80 (-WerSubmitReportWorker@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     WerStartSystemErrorHandler @ 0x1C025D470 (WerStartSystemErrorHandler.c)
 *     WerWaitForSystemErrorHandler @ 0x1C025D5A4 (WerWaitForSystemErrorHandler.c)
 *     WerpAllocateAndInitializeSid @ 0x1C025D674 (WerpAllocateAndInitializeSid.c)
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
  __int64 SystemInformation; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v24[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-40h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v27[10]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v28[352]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v29[352]; // [rsp+6A0h] [rbp+5A0h] BYREF

  Handle = 0LL;
  memset(v28, 0, 0x578uLL);
  memset(v29, 0, 0x578uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v24, 0, sizeof(v24));
  P = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v25 = 0LL;
  SystemInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
  memset(v27, 0, 0x48uLL);
  v27[2] = 1400LL;
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
    started = WerWaitForSystemErrorHandler((unsigned int)SystemInformation);
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
    LODWORD(v24[0]) = 48;
    *((_QWORD *)&v24[0] + 1) = 0LL;
    DWORD2(v24[1]) = 512;
    *(_QWORD *)&v24[1] = 0LL;
    v24[2] = 0LL;
    started = ZwAlpcConnectPort(&Handle, &DestinationString, v24, v27, 0x20000, P, 0LL, 0LL, 0LL, 0LL, 0LL);
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
    v28[0] = 91751760;
    v28[10] = 0x10000000;
    v28[12] = a1;
    v28[28] = a2;
    v28[66] = -1073741637;
    v28[344] = a3;
    v28[345] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    memset(&v29[1], 0, 0x574uLL);
    v22 = 1400LL;
    v29[0] = 91751760;
    v10 = ZwAlpcSendWaitReceivePort(Handle, 0x20000LL, v28, 0LL, v29, &v22, 0LL, 0LL);
    v6 = v10;
    if ( v10 < 0 || v10 == 258 )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n", 1470);
    }
    else if ( v29[11] >= 0 )
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
