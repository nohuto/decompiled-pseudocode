/*
 * XREFs of ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00691B4
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x1C00658B0 (imp_WdfIoTargetOpen.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C006A540 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0063DE0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C0066E90 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0067F38 (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0068BC0 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0068CE4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK@Z @ 0x1C00697BC (-Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C006A158 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C006A294 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x1C006A4B4 (-RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ.c)
 *     ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C006A508 (-UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::Open(FxIoTargetRemote *this, _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v4; // r8
  _WDF_IO_TARGET_OPEN_TYPE Type; // r13d
  int TargetDeviceRelations; // edi
  unsigned __int8 v7; // r12
  const void *v8; // rcx
  int v9; // r14d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v11; // rdx
  unsigned __int8 v12; // r8
  unsigned int EaBufferLength; // edx
  FX_POOL_TRACKER *v14; // rdi
  unsigned __int16 m_ObjectSize; // cx
  const void *v16; // rbx
  void *EaBuffer; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int16 v19; // r9
  _FX_DRIVER_GLOBALS *v20; // rcx
  unsigned __int8 m_OpenState; // al
  _FX_DRIVER_GLOBALS *v22; // r10
  unsigned __int64 v23; // rdx
  unsigned __int8 v24; // r8
  const void *v25; // rcx
  FxIoTargetRemote *v26; // rcx
  unsigned __int8 v27; // r8
  int v28; // r14d
  int v29; // r14d
  FxIoTargetRemoveOpenParams *v30; // rcx
  signed int v31; // eax
  _FX_DRIVER_GLOBALS *v32; // rcx
  const void *v33; // rdx
  FxIoTargetRemote_vtbl *v34; // rax
  signed int v35; // eax
  _FX_DRIVER_GLOBALS *v36; // rcx
  const void *v37; // r8
  _FILE_OBJECT *TargetFileObject; // rcx
  unsigned __int8 v39; // r8
  void *_a1; // [rsp+28h] [rbp-71h]
  unsigned int _a2; // [rsp+30h] [rbp-69h]
  FX_POOL_TRACKER *Ea; // [rsp+40h] [rbp-59h]
  FxIoTargetRemoveOpenParams *pParams; // [rsp+48h] [rbp-51h]
  _UNICODE_STRING name; // [rsp+50h] [rbp-49h] BYREF
  _LIST_ENTRY pended; // [rsp+60h] [rbp-39h] BYREF
  FxIoTargetRemoveOpenParams params; // [rsp+70h] [rbp-29h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned __int8 close; // [rsp+108h] [rbp+6Fh] BYREF
  _FX_DRIVER_GLOBALS **irql; // [rsp+110h] [rbp+77h] BYREF
  unsigned int EaLength; // [rsp+118h] [rbp+7Fh]

  memset(&params, 0, sizeof(params));
  Type = OpenParams->Type;
  TargetDeviceRelations = 0;
  close = 0;
  *(_QWORD *)&name.Length = 0LL;
  v7 = 0;
  name.Buffer = 0LL;
  Ea = 0LL;
  EaLength = 0;
  if ( Type == WdfIoTargetOpenReopen )
  {
    if ( this->m_OpenParams.OpenType != WdfIoTargetOpenByName )
    {
      v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v8 = 0LL;
      TargetDeviceRelations = -1073741808;
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetRemote_cpp_Traceguids, v8, 0xC0000010);
      return (unsigned int)TargetDeviceRelations;
    }
    v9 = 2;
    pParams = &this->m_OpenParams;
LABEL_19:
    TargetDeviceRelations = 0;
    goto LABEL_20;
  }
  v9 = Type;
  pParams = &params;
  if ( Type == WdfIoTargetOpenByName )
  {
    m_Globals = this->m_Globals;
    irql = &this->m_Globals;
    TargetDeviceRelations = FxDuplicateUnicodeString(m_Globals, &OpenParams->TargetDeviceName, &name);
    if ( TargetDeviceRelations < 0 )
    {
      v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v11 = 0LL;
      WPP_IFR_SF_q(*irql, 2u, 0xEu, 0xFu, WPP_FxIoTargetRemote_cpp_Traceguids, v11);
      goto $Done_40;
    }
    TargetDeviceRelations = 0;
    if ( OpenParams->EaBuffer )
    {
      EaBufferLength = OpenParams->EaBufferLength;
      if ( EaBufferLength )
      {
        v14 = (FX_POOL_TRACKER *)FxPoolAllocator(
                                   this->m_Globals,
                                   &this->m_Globals->FxPoolFrameworks,
                                   1u,
                                   EaBufferLength,
                                   this->m_Globals->Tag,
                                   retaddr);
        Ea = v14;
        if ( !v14 )
        {
          m_ObjectSize = this->m_ObjectSize;
          v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v16 = 0LL;
          WPP_IFR_SF_q(*irql, 2u, 0xEu, 0x10u, WPP_FxIoTargetRemote_cpp_Traceguids, v16);
          TargetDeviceRelations = -1073741670;
          goto LABEL_74;
        }
        EaBuffer = OpenParams->EaBuffer;
        EaLength = OpenParams->EaBufferLength;
        memmove(v14, EaBuffer, EaLength);
        goto LABEL_19;
      }
    }
  }
LABEL_20:
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, v4);
  if ( this->m_State == WdfIoTargetDeleted )
  {
    _a2 = 5;
    v18 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v19 = 17;
    if ( !this->m_ObjectSize )
      v18 = 0LL;
    _a1 = (void *)v18;
    v20 = this->m_Globals;
LABEL_28:
    WPP_IFR_SF_qL(v20, 2u, 0xEu, v19, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, _a2);
    TargetDeviceRelations = -1073741436;
    goto LABEL_34;
  }
  m_OpenState = this->m_OpenState;
  v22 = this->m_Globals;
  if ( m_OpenState != 1 )
  {
    v23 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = m_OpenState;
    v19 = 18;
    v20 = this->m_Globals;
    if ( !this->m_ObjectSize )
      v23 = 0LL;
    _a1 = (void *)v23;
    goto LABEL_28;
  }
  if ( v22->FxVerboseOn )
  {
    v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_q(v22, 5u, 0xEu, 0x13u, WPP_FxIoTargetRemote_cpp_Traceguids, v25);
  }
  KeClearEvent(&this->m_OpenedEvent.m_Event.m_Event);
  this->m_OpenState = 2;
LABEL_34:
  FxNonPagedObject::Unlock(this, (unsigned __int8)irql, v24);
  if ( TargetDeviceRelations >= 0 )
  {
    FxIoTargetRemote::UnregisterForPnpNotification(v26, this->m_TargetNotifyHandle);
    this->m_TargetNotifyHandle = 0LL;
    if ( Type != WdfIoTargetOpenReopen )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    v28 = v9 - 1;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( !v29 )
      {
        v30 = pParams;
        if ( Type != WdfIoTargetOpenReopen )
          FxIoTargetRemoveOpenParams::Set(pParams, OpenParams, &name, Ea, EaLength);
        TargetDeviceRelations = FxIoTargetRemote::OpenTargetHandle(this, OpenParams, v30);
        if ( TargetDeviceRelations < 0 )
        {
          v7 = 1;
          close = 1;
        }
        else if ( Type != WdfIoTargetOpenReopen )
        {
          FxIoTargetRemoveOpenParams::Set(&this->m_OpenParams, OpenParams, &name, Ea, EaLength);
          Ea = 0LL;
          name.Buffer = 0LL;
        }
        goto LABEL_47;
      }
      if ( v29 != 2 )
      {
LABEL_47:
        pended.Blink = &pended;
        pended.Flink = &pended;
        if ( TargetDeviceRelations >= 0 )
        {
          TargetDeviceRelations = FxIoTargetRemote::GetTargetDeviceRelations(this, &close);
          if ( TargetDeviceRelations >= 0 && this->m_TargetFileObject )
          {
            if ( Type != WdfIoTargetOpenReopen )
            {
              this->m_EvtQueryRemove.m_Method = OpenParams->EvtIoTargetQueryRemove;
              this->m_EvtRemoveCanceled.m_Method = OpenParams->EvtIoTargetRemoveCanceled;
              this->m_EvtRemoveComplete.m_Method = OpenParams->EvtIoTargetRemoveComplete;
            }
            v31 = FxIoTargetRemote::RegisterForPnpNotification(this);
            TargetDeviceRelations = v31;
            if ( v31 < 0 )
            {
              v32 = this->m_Globals;
              if ( v32->FxVerboseOn )
              {
                v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !this->m_ObjectSize )
                  v33 = 0LL;
                WPP_IFR_SF_qL(v32, 5u, 0xEu, 0x14u, WPP_FxIoTargetRemote_cpp_Traceguids, v33, v31);
              }
              this->m_EvtQueryRemove.m_Method = 0LL;
              TargetDeviceRelations = 0;
              this->m_EvtRemoveCanceled.m_Method = 0LL;
              this->m_EvtRemoveComplete.m_Method = 0LL;
            }
          }
          v7 = close;
        }
        FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, v27);
        if ( TargetDeviceRelations < 0 )
        {
          this->m_OpenState = 1;
        }
        else
        {
          this->m_TargetStackSize = this->m_TargetDevice->StackSize;
          this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
          v34 = this->__vftable;
          this->m_OpenState = 3;
          v35 = v34->GotoStartState(this, &pended, 0);
          TargetDeviceRelations = v35;
          if ( v35 < 0 )
          {
            v36 = this->m_Globals;
            if ( v36->FxVerboseOn )
            {
              v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v37 = 0LL;
              WPP_IFR_SF_qL(v36, 5u, 0xEu, 0x15u, WPP_FxIoTargetRemote_cpp_Traceguids, v37, v35);
            }
            v7 = 1;
          }
        }
        KeSetEvent(&this->m_OpenedEvent.m_Event.m_Event, 0, 0);
        FxNonPagedObject::Unlock(this, (unsigned __int8)irql, v39);
$Done_40:
        if ( TargetDeviceRelations < 0 )
        {
          if ( v7 )
            FxIoTargetRemote::Close(this, 2u, v12);
        }
        else
        {
          FxIoTarget::SubmitPendedRequests(this, &pended);
        }
        goto LABEL_74;
      }
    }
    else
    {
      this->m_TargetDevice = OpenParams->TargetDeviceObject;
      TargetFileObject = OpenParams->TargetFileObject;
      this->m_TargetFileObject = TargetFileObject;
      this->m_TargetHandle = 0LL;
      if ( TargetFileObject )
        ObfReferenceObject(TargetFileObject);
    }
    TargetDeviceRelations = 0;
    goto LABEL_47;
  }
LABEL_74:
  if ( name.Buffer )
    FxPoolFree((FX_POOL_TRACKER *)name.Buffer);
  if ( Ea )
    FxPoolFree(Ea);
  return (unsigned int)TargetDeviceRelations;
}
