/*
 * XREFs of ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C000EDB8 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0010B10 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingDecideS0Wake(FxPkgPnp *This)
{
  FxEnumerationInfo *m_EnumInfo; // rbx
  FxEnumerationInfo *v3; // rcx
  FxEnumerationInfo *v4; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v6; // rax
  FxEnumerationInfo *Flink; // rbx
  FxEnumerationInfo *v8; // rcx
  _LIST_ENTRY *p_m_ListHead; // rax
  FxWaitLockTransactionedList_vtbl *v10; // rdi
  unsigned __int64 *p_EntryAdded; // rbp
  void (__fastcall **p_EntryRemoved)(struct FxWaitLockTransactionedList *, FxTransactionedEntry *); // r14
  KIRQL v13; // r15
  void (__fastcall *i)(struct FxWaitLockTransactionedList *, FxTransactionedEntry *); // rdi
  _FX_DRIVER_GLOBALS *v15; // rbp
  FxWaitLockTransactionedList *p_m_ChildListList; // rbx
  _KEVENT *p_m_Event; // r14
  bool v18; // zf
  unsigned int m_ListLockedRecursionCount; // eax
  _LIST_ENTRY *p_m_TransactionHead; // rdi
  _LIST_ENTRY *v21; // rax
  __int64 *v22; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyOwnerSettings *v24; // rcx
  __int64 result; // rax
  __int64 v26; // rcx
  __int64 m_NextIdleTimeoutHint; // rax
  _LIST_ENTRY *v28; // rcx
  FxTransactionedEntry *v29; // r15
  int v30; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v32; // rcx
  _LIST_ENTRY *v33; // rdx
  _LIST_ENTRY **p_Flink; // rcx
  __int64 *v35; // rcx
  __int64 *v36; // rdi
  __int64 *v37; // [rsp+30h] [rbp-38h] BYREF
  _LIST_ENTRY *v38; // [rsp+38h] [rbp-30h]
  unsigned __int8 v39; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v40; // [rsp+78h] [rbp+10h] BYREF

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
      v4->m_ChildListList.AcquireLock(&v4->m_ChildListList, m_Globals, &v39);
      v6 = v4->m_ChildListList.__vftable;
      ++v4->m_ChildListList.m_ListLockedRecursionCount;
      v6->ReleaseLock(&v4->m_ChildListList, m_Globals, v39);
      Flink = 0LL;
      while ( 1 )
      {
        v8 = This->m_EnumInfo;
        p_m_ListHead = &v8->m_ChildListList.m_ListHead;
        if ( Flink )
          p_m_ListHead = (_LIST_ENTRY *)Flink;
        Flink = (FxEnumerationInfo *)p_m_ListHead->Flink;
        if ( p_m_ListHead->Flink == &v8->m_ChildListList.m_ListHead )
        {
LABEL_14:
          Flink = 0LL;
        }
        else
        {
          while ( LODWORD(Flink->m_PowerStateLock.m_OwningThread) != 1 )
          {
            Flink = *(FxEnumerationInfo **)&Flink->m_PowerStateLock.m_Event.m_Event.Header.Lock;
            if ( Flink == (FxEnumerationInfo *)&v8->m_ChildListList.m_ListHead )
              goto LABEL_14;
          }
        }
        if ( !Flink )
          break;
        v10 = Flink->m_ChildListList.__vftable;
        p_EntryAdded = (unsigned __int64 *)&v10[5].EntryAdded;
        p_EntryRemoved = &v10[5].EntryRemoved;
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v10[5].EntryAdded);
        for ( i = v10[5].EntryRemoved;
              (char *)i != (char *)p_EntryRemoved;
              i = *(void (__fastcall **)(struct FxWaitLockTransactionedList *, FxTransactionedEntry *))i )
        {
          if ( !*((_BYTE *)i + 82) )
          {
            v26 = *((_QWORD *)i + 8);
            if ( v26 )
              FxPkgPnp::PowerProcessEvent(*(FxPkgPnp **)(v26 + 648), PowerParentToD0, 0);
          }
        }
        KeReleaseSpinLock(p_EntryAdded, v13);
      }
      v15 = This->m_Globals;
      p_m_ChildListList = &v8->m_ChildListList;
      v38 = (_LIST_ENTRY *)&v37;
      v37 = (__int64 *)&v37;
      p_m_Event = 0LL;
      p_m_ChildListList->AcquireLock(p_m_ChildListList, v15, &v40);
      v18 = p_m_ChildListList->m_ListLockedRecursionCount-- == 1;
      m_ListLockedRecursionCount = p_m_ChildListList->m_ListLockedRecursionCount;
      if ( v18 )
      {
        p_m_TransactionHead = &p_m_ChildListList->m_TransactionHead;
        while ( 1 )
        {
          v21 = p_m_TransactionHead->Flink;
          if ( p_m_TransactionHead->Flink == p_m_TransactionHead )
            break;
          if ( v21->Blink != p_m_TransactionHead || (v28 = v21->Flink, v21->Flink->Blink != v21) )
LABEL_57:
            __fastfail(3u);
          p_m_TransactionHead->Flink = v28;
          v29 = (FxTransactionedEntry *)&v21[-1];
          v28->Blink = p_m_TransactionHead;
          v21->Blink = v21;
          v21->Flink = v21;
          v30 = (int)v21[1].Flink;
          if ( v30 == 2 )
          {
            Blink = p_m_ChildListList->m_ListHead.Blink;
            if ( Blink->Flink != &p_m_ChildListList->m_ListHead )
              goto LABEL_57;
            v29->m_ListLink.Flink = &p_m_ChildListList->m_ListHead;
            v29->m_ListLink.Blink = Blink;
            Blink->Flink = &v29->m_ListLink;
            p_m_ChildListList->m_ListHead.Blink = &v29->m_ListLink;
            p_m_ChildListList->EntryAdded(p_m_ChildListList, v29);
          }
          else if ( v30 == 3 )
          {
            v32 = v29->m_ListLink.Flink;
            if ( (FxTransactionedEntry *)v29->m_ListLink.Flink->Blink != v29 )
              goto LABEL_57;
            v33 = v29->m_ListLink.Blink;
            if ( (FxTransactionedEntry *)v33->Flink != v29 )
              goto LABEL_57;
            v33->Flink = v32;
            v32->Blink = v33;
            p_Flink = &v38->Flink;
            if ( (__int64 **)v38->Flink != &v37 )
              goto LABEL_57;
            v21->Blink = v38;
            v21->Flink = (_LIST_ENTRY *)&v37;
            *p_Flink = v21;
            v38 = v21;
            p_m_ChildListList->EntryRemoved(p_m_ChildListList, v29);
          }
          v29->m_Transaction = FxTransactionActionNothing;
        }
        m_ListLockedRecursionCount = p_m_ChildListList->m_ListLockedRecursionCount;
      }
      if ( !m_ListLockedRecursionCount && p_m_ChildListList->m_Deleting )
      {
        p_m_Event = &p_m_ChildListList->m_DeletingDoneEvent->m_Event;
        p_m_ChildListList->m_DeletingDoneEvent = 0LL;
      }
      p_m_ChildListList->ReleaseLock(p_m_ChildListList, v15, v40);
      while ( 1 )
      {
        v22 = v37;
        if ( v37 == (__int64 *)&v37 )
          break;
        if ( (__int64 **)v37[1] != &v37 )
          goto LABEL_57;
        v35 = (__int64 *)*v37;
        if ( *(__int64 **)(*v37 + 8) != v37 )
          goto LABEL_57;
        v37 = (__int64 *)*v37;
        v36 = v22 - 2;
        v35[1] = (__int64)&v37;
        v22[1] = (__int64)v22;
        *v22 = (__int64)v22;
        (*(void (__fastcall **)(__int64, __int64 *, __int64, const char *))(*(_QWORD *)v22[3] + 16LL))(
          v22[3],
          v22 - 2,
          226LL,
          "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
        if ( p_m_ChildListList->m_DeleteOnRemove )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36[5] + 48LL))(v36[5]);
      }
      if ( p_m_Event )
        KeSetEvent(p_m_Event, 0, 0);
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
  v24 = This->m_PowerPolicyMachine.m_Owner;
  if ( !v24->m_IdleSettings.Enabled )
    return 1381LL;
  result = 1285LL;
  if ( v24->m_IdleSettings.WakeFromS0Capable )
    return 1329LL;
  return result;
}
