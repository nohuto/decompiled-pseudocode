/*
 * XREFs of ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x1C025D6BC
 * Callers:
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C025AB70 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendWnfToDwm(DXGSESSIONDATA *this, int a2)
{
  __int64 v3; // rdi
  struct _KPROCESS *v4; // rcx
  HANDLE ProcessId; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _CLIENT_ID ClientId; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v11[16]; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+67h] BYREF
  int v14; // [rsp+B0h] [rbp+6Fh] BYREF

  v14 = a2;
  LODWORD(v3) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONDATA *)((char *)this + 18640), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = (struct _KPROCESS *)*((_QWORD *)this + 2335);
  if ( v4 )
  {
    ClientId.UniqueThread = 0LL;
    ProcessId = PsGetProcessId(v4);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ClientId.UniqueProcess = ProcessId;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
    v3 = v6;
    if ( v6 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = ClientId.UniqueProcess;
      *(_QWORD *)(v8 + 32) = v3;
      WdLogEvent5_WdError(v8);
    }
    else
    {
      LODWORD(v3) = ZwUpdateWnfStateData(&WNF_DX_VAIL_CHANGE_NOTIFICATION, &v14, 4LL, 0LL, ProcessHandle, 0, 0);
      ZwClose(ProcessHandle);
    }
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return (unsigned int)v3;
}
