/*
 * XREFs of ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0069364
 * Callers:
 *     imp_WdfIoTargetClose @ 0x1C0065B30 (imp_WdfIoTargetClose.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x1C0065BC0 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0069844 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C0069E30 (-Remove@FxIoTargetRemote@@UEAAXXZ.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C006ABF0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C006717C (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C00689F0 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0069240 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C006A23C (WPP_IFR_SF_qqqqi.c)
 *     ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C006ABAC (-UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z.c)
 */

void __fastcall FxIoTargetRemote::Close(FxIoTargetRemote *this, unsigned int Reason, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *v6; // rdi
  const void *_a1; // rax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  unsigned __int8 m_OpenState; // cl
  const void *v12; // rcx
  unsigned __int8 FxVerboseOn; // al
  int v14; // r15d
  const void *v15; // rax
  const void *v16; // rax
  const void *v17; // rax
  const void *v18; // rax
  void *m_TargetNotifyHandle; // r12
  const void *v20; // rcx
  unsigned __int8 v21; // r8
  FxIoTargetRemote *v22; // rcx
  const void *v23; // rax
  unsigned int v24; // r14d
  const void *v25; // rcx
  const void *v26; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-30h] BYREF
  FxIoTargetClearedPointers pointers; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 wait; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+C8h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sent; // [rsp+D0h] [rbp+50h] BYREF

  m_Globals = this->m_Globals;
  v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, Reason);
  }
  sent.Next = 0LL;
  memset(&pointers, 0, sizeof(pointers));
  pended.Blink = &pended;
  pended.Flink = &pended;
  wait = 0;
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    m_OpenState = this->m_OpenState;
    if ( m_OpenState != 2 )
      break;
    FxNonPagedObject::Unlock(this, irql, v9);
    if ( m_Globals->FxVerboseOn )
    {
      v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v12 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x17u, WPP_FxIoTargetRemote_cpp_Traceguids, v12, &this->m_OpenedEvent);
    }
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_OpenedEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  FxVerboseOn = m_Globals->FxVerboseOn;
  v14 = 3;
  if ( Reason == 3 )
  {
    if ( FxVerboseOn )
    {
      v15 = v6;
      if ( !this->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetRemote_cpp_Traceguids, v15);
    }
    v14 = 5;
  }
  else if ( m_OpenState == 3 )
  {
    if ( Reason == 1 )
    {
      if ( FxVerboseOn )
      {
        v16 = v6;
        if ( !this->m_ObjectSize )
          v16 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetRemote_cpp_Traceguids, v16);
      }
    }
    else
    {
      if ( FxVerboseOn )
      {
        v17 = v6;
        if ( !this->m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetRemote_cpp_Traceguids, v17);
      }
      v14 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 9u) + 3;
    }
    this->m_OpenState = 1;
  }
  else
  {
    if ( FxVerboseOn )
    {
      v18 = v6;
      if ( !this->m_ObjectSize )
        v18 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxIoTargetRemote_cpp_Traceguids, v18);
    }
    v14 = 4;
  }
  m_TargetNotifyHandle = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    v20 = v6;
    if ( !this->m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qqqqi(
      m_Globals,
      v8,
      v9,
      v10,
      traceGuid,
      v20,
      this->m_TargetFileObject,
      this->m_TargetDevice,
      this->m_TargetHandle,
      (__int64)this->m_TargetNotifyHandle);
  }
  if ( Reason != 1 )
  {
    m_TargetNotifyHandle = this->m_TargetNotifyHandle;
    this->m_TargetNotifyHandle = 0LL;
  }
  this->m_ClearedPointers = &pointers;
  LOBYTE(traceGuid) = 0;
  this->GotoRemoveState(this, (_WDF_IO_TARGET_STATE)v14, &pended, &sent, (unsigned __int8)traceGuid, &wait);
  FxNonPagedObject::Unlock(this, irql, v21);
  FxIoTargetRemote::UnregisterForPnpNotification(v22, m_TargetNotifyHandle);
  FxIoTarget::CompletePendedRequestList(this, &pended);
  FxIoTarget::_CancelSentRequests(&sent);
  if ( wait )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v23 = v6;
      if ( !this->m_ObjectSize )
        v23 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxIoTargetRemote_cpp_Traceguids, v23);
    }
    else
    {
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    }
    this->WaitForSentIoToComplete(this);
  }
  else
  {
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  }
  v24 = Reason - 1;
  if ( v24 )
  {
    if ( v24 == 2 )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    else
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  }
  if ( v14 == 5 )
    this->WaitForDisposeEvent(this);
  if ( pointers.TargetPdo )
  {
    v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Eu, WPP_FxIoTargetRemote_cpp_Traceguids, v25, pointers.TargetPdo);
    ObfDereferenceObject(pointers.TargetPdo);
  }
  if ( pointers.TargetFileObject )
  {
    v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v26 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTargetRemote_cpp_Traceguids, v26, pointers.TargetFileObject);
    ObfDereferenceObject(pointers.TargetFileObject);
  }
  if ( pointers.TargetHandle )
  {
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTargetRemote_cpp_Traceguids, v6, pointers.TargetHandle);
    ZwClose(pointers.TargetHandle);
  }
}
