/*
 * XREFs of ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010350
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C001023C (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00105C0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011100 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingDecideS0Wake(FxPkgPnp *This)
{
  FxEnumerationInfo *m_EnumInfo; // rbx
  FxEnumerationInfo *v3; // rcx
  FxEnumerationInfo *v4; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v6; // rax
  _LIST_ENTRY *Flink; // rbx
  FxEnumerationInfo *v8; // rcx
  _LIST_ENTRY *p_m_ListHead; // rax
  FxTransactionedList *p_m_ChildListList; // r8
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *Blink; // rdi
  unsigned __int64 *p_Blink; // rbp
  __int64 *v14; // r14
  KIRQL v15; // r15
  _LIST_ENTRY *i; // rdi
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyOwnerSettings *v18; // rcx
  __int64 result; // rax
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *v21; // rcx
  __int64 m_NextIdleTimeoutHint; // rax
  unsigned __int8 v23; // [rsp+60h] [rbp+8h] BYREF

  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo && This->m_PowerPolicyMachine.m_Owner )
  {
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(m_EnumInfo, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_EnumInfo->m_PowerStateLock.m_OwningThread = KeGetCurrentThread();
    This->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 1;
    v3 = This->m_EnumInfo;
    v3->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v3->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    v4 = This->m_EnumInfo;
    if ( v4 )
    {
      m_Globals = This->m_Globals;
      v4->m_ChildListList.AcquireLock(&v4->m_ChildListList, m_Globals, &v23);
      v6 = v4->m_ChildListList.__vftable;
      ++v4->m_ChildListList.m_ListLockedRecursionCount;
      v6->ReleaseLock(&v4->m_ChildListList, m_Globals, v23);
      Flink = 0LL;
      while ( 1 )
      {
        v8 = This->m_EnumInfo;
        p_m_ListHead = &v8->m_ChildListList.m_ListHead;
        if ( Flink )
          p_m_ListHead = Flink;
        p_m_ChildListList = &v8->m_ChildListList;
        v11 = &v8->m_ChildListList.m_ListHead;
        Flink = p_m_ListHead->Flink;
        if ( p_m_ListHead->Flink == v11 )
        {
LABEL_14:
          Flink = 0LL;
        }
        else
        {
          while ( LODWORD(Flink[2].Flink) != 1 )
          {
            Flink = Flink->Flink;
            if ( Flink == v11 )
              goto LABEL_14;
          }
        }
        if ( !Flink )
          break;
        Blink = Flink[2].Blink;
        p_Blink = (unsigned __int64 *)&Blink[16].Blink;
        v14 = (__int64 *)&Blink[17];
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[16].Blink);
        for ( i = Blink[17].Flink; i != (_LIST_ENTRY *)v14; i = i->Flink )
        {
          if ( !BYTE2(i[5].Flink) )
          {
            v20 = i[4].Flink;
            if ( v20 )
            {
              v21 = v20[40].Blink;
              if ( BYTE4(v21[106].Flink) )
                FxPkgPnp::PowerProcessEvent((FxPkgPnp *)v21, PowerParentToD0, 0);
            }
          }
        }
        KeReleaseSpinLock(p_Blink, v15);
      }
      FxTransactionedList::UnlockFromEnum(p_m_ChildListList, This->m_Globals);
    }
  }
  FxPkgPnp::SaveState(This, 1u);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( (m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    m_NextIdleTimeoutHint = m_Owner->m_PoxInterface.m_NextIdleTimeoutHint;
    if ( (_DWORD)m_NextIdleTimeoutHint != m_Owner->m_PoxInterface.m_CurrentIdleTimeoutHint )
    {
      m_Owner->m_PoxInterface.m_CurrentIdleTimeoutHint = m_NextIdleTimeoutHint;
      PoFxSetDeviceIdleTimeout(m_Owner->m_PoxInterface.m_PoHandle, 10000 * m_NextIdleTimeoutHint);
    }
  }
  v18 = This->m_PowerPolicyMachine.m_Owner;
  if ( !v18->m_IdleSettings.Enabled )
    return 1381LL;
  result = 1285LL;
  if ( v18->m_IdleSettings.WakeFromS0Capable )
    return 1329LL;
  return result;
}
