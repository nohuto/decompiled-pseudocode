/*
 * XREFs of ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x1C0293834
 * Callers:
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0290E50 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendWnfToDwm(DXGSESSIONDATA *this, int a2)
{
  __int64 v3; // rdi
  struct _KPROCESS *v4; // rcx
  HANDLE ProcessId; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  struct _CLIENT_ID ClientId; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v13[16]; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+67h] BYREF
  int v16; // [rsp+B0h] [rbp+6Fh] BYREF

  v16 = a2;
  LODWORD(v3) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGSESSIONDATA *)((char *)this + 18640), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v4 = (struct _KPROCESS *)*((_QWORD *)this + 2335);
  if ( v4 )
  {
    ClientId.UniqueThread = 0LL;
    ProcessId = PsGetProcessId(v4);
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ClientId.UniqueProcess = ProcessId;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v6 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
    v3 = v6;
    if ( v6 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v8, v7, v9);
      *(_QWORD *)(v10 + 24) = ClientId.UniqueProcess;
      *(_QWORD *)(v10 + 32) = v3;
      WdLogEvent5_WdError(v10);
    }
    else
    {
      LODWORD(v3) = ZwUpdateWnfStateData(&WNF_DX_VAIL_CHANGE_NOTIFICATION, &v16, 4LL, 0LL, ProcessHandle, 0, 0);
      ZwClose(ProcessHandle);
    }
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return (unsigned int)v3;
}
