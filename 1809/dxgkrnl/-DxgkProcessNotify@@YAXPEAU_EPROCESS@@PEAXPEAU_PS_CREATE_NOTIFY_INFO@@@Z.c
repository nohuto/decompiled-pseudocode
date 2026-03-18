/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0010400
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0010340 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !CreateInfo )
  {
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v6);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(Process);
    v5 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      *((_BYTE *)ProcessDxgProcess + 323) |= 0x20u;
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
      DXGPROCESS::DestroyDxgProcess(v5);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
      DXGPROCESS::ReleaseReference(v5);
    }
    if ( v6[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  }
}
