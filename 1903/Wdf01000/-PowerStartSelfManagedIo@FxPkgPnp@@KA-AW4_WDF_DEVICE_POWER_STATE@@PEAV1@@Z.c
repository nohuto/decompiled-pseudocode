/*
 * XREFs of ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010A80
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0012380 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C001772C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIo(FxPkgPnp *This)
{
  _LIST_ENTRY *Blink; // rsi
  const void *_a1; // rax
  unsigned __int8 v4; // r8
  _LIST_ENTRY *v5; // rbx
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  _LIST_ENTRY *v8; // rdi
  unsigned int v9; // edx
  char v10; // al
  unsigned __int8 v11; // r8
  _LIST_ENTRY *i; // rdi
  _LIST_ENTRY *v13; // rsi
  unsigned __int8 v14; // al
  unsigned __int8 v15; // r8
  unsigned __int16 v16; // r9
  FxIoQueue *v17; // rcx
  _LIST_ENTRY *v18; // rsi
  _LIST_ENTRY *v19; // rdi
  unsigned __int16 v20; // r9
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int8 v23; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  KIRQL v25; // bl
  __int64 v26; // rdx
  __int64 result; // rax
  FxVerifierLock *v28; // rcx
  FxTagTracker *v29; // rcx
  FxVerifierLock *v30; // rcx
  FxVerifierLock *v31; // rcx
  FxVerifierLock *v32; // rcx
  _LIST_ENTRY **p_Blink; // [rsp+30h] [rbp-48h]
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 v35; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v36; // [rsp+90h] [rbp+18h] BYREF
  FxCxCallbackProgress progress; // [rsp+98h] [rbp+20h] BYREF

  Blink = This->m_DeviceBase[3].m_ChildListHead.Blink;
  _a1 = 0LL;
  if ( WORD1(Blink[6].Flink->Blink) )
    _a1 = (const void *)((unsigned __int64)Blink[6].Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
  WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)Blink[1].Flink, 4u, 0xDu, 0x1Fu, WPP_FxPkgIo_cpp_Traceguids, _a1);
  v5 = 0LL;
  p_Blink = 0LL;
  if ( SLOBYTE(Blink[1].Blink) < 0 && (v28 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
  {
    FxVerifierLock::Lock(v28, &PreviousIrql, v4);
    v6 = PreviousIrql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
    PreviousIrql = v6;
  }
  v8 = Blink[8].Blink;
  if ( v8 != &Blink[8] )
  {
    do
    {
      if ( LODWORD(v8[1].Flink) == 1 )
      {
        v8[1].Blink = v5;
        p_Blink = &v8[1].Blink;
        v9 = _InterlockedIncrement((volatile signed __int32 *)&v8[-56].Flink + 1);
        if ( SLOBYTE(v8[-55].Flink) < 0 )
        {
          v29 = (FxTagTracker *)v8[-60].Blink;
          if ( v29 )
            FxTagTracker::UpdateTagHistory(
              v29,
              (void *)0x65776F70,
              1478,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              v9);
        }
        v5 = (_LIST_ENTRY *)((char *)v8 + 24);
      }
      v8 = v8->Blink;
    }
    while ( v8 != &Blink[8] );
    v6 = PreviousIrql;
  }
  v10 = (char)Blink[1].Blink;
  *(_WORD *)((char *)&Blink[23].Flink + 5) = 1;
  if ( v10 < 0 && (v30 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
    FxVerifierLock::Unlock(v30, v6, v7);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v6);
  for ( i = v5; i; i = i->Flink )
  {
    v13 = i - 58;
    if ( BYTE2(i[-50].Blink) )
    {
      if ( SLOBYTE(v13[1].Blink) < 0 && (v31 = (FxVerifierLock *)i[-61].Blink) != 0LL )
      {
        FxVerifierLock::Lock(v31, &v35, v11);
        v14 = v35;
      }
      else
      {
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v13[7]);
        v35 = v14;
      }
      v17 = (FxIoQueue *)&i[-58];
      if ( LODWORD(v13[11].Flink) == 1 )
      {
        FxNonPagedObject::Unlock(v17, v14, v15);
      }
      else
      {
        LODWORD(v13[11].Flink) = 10;
        FxIoQueue::DispatchEvents(v17, v14, 0LL, v16);
      }
    }
  }
  v18 = v5;
  if ( v5 )
  {
    v5 = v5->Flink;
    p_Blink = &v5->Flink;
  }
  while ( v18 )
  {
    v19 = v18 - 58;
    if ( BYTE2(v18[-50].Blink) )
    {
      if ( SLOBYTE(v19[1].Blink) < 0 && (v32 = (FxVerifierLock *)v18[-61].Blink) != 0LL )
        FxVerifierLock::Lock(v32, &v36, v11);
      else
        v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v19[7]);
      if ( SLODWORD(v19[14].Flink) > 0 )
      {
        BYTE4(v19[23].Flink) = 1;
        BYTE5(v19[23].Flink) = 0;
      }
      FxIoQueue::DispatchEvents((FxIoQueue *)&v18[-58], v36, 0LL, v20);
      v5 = (_LIST_ENTRY *)p_Blink;
    }
    v18->Flink = 0LL;
    ((void (__fastcall *)(_LIST_ENTRY **, __int64, __int64, const char *))v19->Flink[1].Flink)(
      &v18[-58].Flink,
      1702326128LL,
      1327LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v18 = v5;
    if ( v5 )
    {
      v5 = v5->Flink;
      p_Blink = &v5->Flink;
    }
  }
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
  {
    result = 813LL;
    if ( (unsigned __int8)progress >= FxCxCallbackProgressClientSucceeded )
      return 865LL;
  }
  else
  {
    m_DeviceBase = This->m_DeviceBase;
    This->m_DevicePowerStateOld = This->m_DevicePowerState;
    This->m_DevicePowerState = 1;
    This->m_SystemPowerAction = 0;
    PoSetPowerState(m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, (POWER_STATE)1);
    m_Owner = This->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner )
    {
      v25 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
      FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerUpComplete);
      KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v25);
    }
    FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolPowerUp, v23);
    LOBYTE(v26) = 1;
    This->PowerReleasePendingDeviceIrp(This, v26);
    result = 775LL;
    if ( This->m_SharedPower.m_WaitWakeOwner )
      return 777LL;
  }
  return result;
}
