/*
 * XREFs of ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0132854
 * Callers:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C0132818 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229650 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0261D1C (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C01328C8 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SignalFence(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _QWORD *v4; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (_QWORD *)(a1 + 288);
  if ( (*(_DWORD *)(a1 + 196) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(a1 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    v12 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v13 + 24) = 1242LL;
      WdLogEvent5_WdAssertion(v13);
      v12 = (_QWORD *)*v4;
    }
    v4 = v12 - 5;
    if ( v14[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  }
  return DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v4, a1, a2, a3, a4);
}
