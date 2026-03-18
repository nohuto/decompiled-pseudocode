/*
 * XREFs of ?PowerGotoDNotZero@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00101EC (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C00102EC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C00103F0 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     WPP_IFR_SF_Lq @ 0x1C00107B4 (WPP_IFR_SF_Lq.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0010E80 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C00178E0 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDNotZero(FxPkgPnp *This, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxPkgIo *Blink; // rbx
  const void *id; // rax
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *i; // rdi
  _SINGLE_LIST_ENTRY *v13; // rsi
  int v15; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  unsigned __int8 PreviousIrql; // [rsp+60h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY SListHead; // [rsp+68h] [rbp+10h] BYREF

  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    v15 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
    if ( v15 < 0 )
    {
      WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x13u, WPP_PowerStateMachine_cpp_Traceguids, v15);
      This->m_PowerMachine.m_IoCallbackFailure = 1;
    }
  }
  Blink = (FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink;
  id = 0LL;
  if ( Blink->m_DeviceBase->m_ObjectSize )
    id = (const void *)((unsigned __int64)Blink->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  WPP_IFR_SF_Lq(Blink->m_Globals, LOBYTE(Blink->m_DeviceBase) ^ 0xF8, a3, a4, traceGuid, 1u, id);
  SListHead.Next = 0LL;
  FxNonPagedObject::Lock(Blink, &PreviousIrql, v8);
  Blink->m_PowerStateOn = 0;
  FxPkgIo::GetIoQueueListLocked(Blink, &SListHead, FxIoQueueIteratorListPowerOff);
  FxNonPagedObject::Unlock(Blink, PreviousIrql, v9);
  Next = SListHead.Next;
  for ( i = SListHead.Next; i; i = i->Next )
    FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&i[-116]);
  v13 = Next;
  if ( Next )
    Next = Next->Next;
  while ( v13 )
  {
    FxIoQueue::StopProcessingForPower((FxIoQueue *)&v13[-116], FxIoStopProcessingForPowerHold);
    v13->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v13[-116].Next[2].Next)(
      &v13[-116].Next,
      1702326128LL,
      1248LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v13 = Next;
    if ( Next )
      Next = Next->Next;
  }
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolPowerDownIoStopped, v10);
  return 867LL;
}
