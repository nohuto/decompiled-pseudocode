/*
 * XREFs of ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C008DEC0
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0084F64 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C008DBDC (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::_CreateAndInit(
        FxSelfManagedIoMachine **SelfManagedIoMachine,
        FxPkgPnp *PkgPnp)
{
  _POOL_TYPE v3; // r8d
  FxSelfManagedIoMachine *v5; // rax
  FxSelfManagedIoMachine *v6; // rax
  FxSelfManagedIoMachine *v7; // rdi
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = ExDefaultNonPagedPoolType;
  *SelfManagedIoMachine = 0LL;
  v5 = (FxSelfManagedIoMachine *)FxPoolAllocator(
                                   PkgPnp->m_Globals,
                                   &PkgPnp->m_Globals->FxPoolFrameworks,
                                   v3,
                                   0x110uLL,
                                   PkgPnp->m_Globals->Tag,
                                   retaddr);
  if ( v5 )
  {
    FxSelfManagedIoMachine::FxSelfManagedIoMachine(v5, PkgPnp);
    v7 = v6;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    KeInitializeEvent(&v7->m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    v7->m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
    result = 0LL;
    *SelfManagedIoMachine = v7;
  }
  else
  {
    m_DeviceBase = PkgPnp->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(PkgPnp->m_Globals, 2u, 0xCu, 0xAu, WPP_SelfManagedIoStateMachine_cpp_Traceguids, _a1);
    return 3221225626LL;
  }
  return result;
}
