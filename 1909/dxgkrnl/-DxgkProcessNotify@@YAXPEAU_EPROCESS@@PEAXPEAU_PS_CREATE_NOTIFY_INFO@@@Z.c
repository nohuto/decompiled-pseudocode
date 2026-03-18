/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0008B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018D50 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018DCC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00FA5F0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  DXGFASTMUTEX *v11; // [rsp+20h] [rbp-10h] BYREF
  char v12; // [rsp+28h] [rbp-8h]

  if ( !CreateInfo )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v7 = WdLogNewEntry5_WdAssertion(Process, ProcessId);
      *(_QWORD *)(v7 + 24) = 2201LL;
      WdLogEvent5_WdAssertion(v7);
    }
    v12 = 0;
    v11 = (DXGFASTMUTEX *)((char *)DXGGLOBAL::m_pGlobal + 208);
    if ( DXGGLOBAL::m_pGlobal == (PVOID)-208LL )
    {
      v8 = WdLogNewEntry5_WdAssertion(Process, ProcessId);
      *(_QWORD *)(v8 + 24) = 660LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v11 + 2) == CurrentThread )
    {
      v9 = WdLogNewEntry5_WdAssertion(CurrentThread, ProcessId);
      *(_QWORD *)(v9 + 24) = 667LL;
      WdLogEvent5_WdAssertion(v9);
    }
    if ( v12 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, ProcessId);
      v10[5] = &v11;
      v10[3] = 275LL;
      v10[4] = 4LL;
      v10[6] = 0LL;
      v10[7] = 0LL;
      WdLogEvent5_WdCriticalError(v10);
    }
    DXGFASTMUTEX::Acquire(v11);
    v12 = 1;
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(Process);
    v6 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      *((_BYTE *)ProcessDxgProcess + 299) |= 0x20u;
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v11);
      DXGPROCESS::DestroyDxgProcess(v6);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v11);
      DXGPROCESS::ReleaseReference(v6);
    }
    if ( v12 )
    {
      v12 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v11);
    }
  }
}
