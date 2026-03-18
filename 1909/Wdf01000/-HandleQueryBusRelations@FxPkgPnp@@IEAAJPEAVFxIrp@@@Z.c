/*
 * XREFs of ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000F350
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003A84 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000F244 (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qdq @ 0x1C000F138 (WPP_IFR_SF_qdq.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C000F5A8 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F694 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00105C0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C0033E3C (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005D64C (WPP_IFR_SF_qqqq.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusRelations(FxPkgPnp *this, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rdi
  unsigned __int64 v5; // r8
  WDFDEVICE__ *v6; // rcx
  bool v7; // zf
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  char v10; // cl
  FxEnumerationInfo *m_EnumInfo; // r14
  int Status; // ebp
  _DEVICE_RELATIONS *_a3; // r15
  FxWaitLockTransactionedList_vtbl *v14; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxTransactionedList *p_m_ChildListList; // r14
  FxTransactionedList_vtbl *v17; // rax
  __int64 v18; // r8
  _LIST_ENTRY *v19; // rbx
  _LIST_ENTRY *p_m_ListHead; // rsi
  int v21; // eax
  int v22; // r15d
  _LIST_ENTRY *v23; // rbx
  _LIST_ENTRY *v24; // rsi
  _FX_DRIVER_GLOBALS *v25; // rcx
  unsigned int Count; // eax
  unsigned int v27; // ebx
  _FX_DRIVER_GLOBALS *v28; // r11
  FxDeviceBase *v30; // rcx
  unsigned __int64 _a2; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v33; // rcx
  FxDeviceBase *v34; // rdx
  unsigned __int16 v35; // ax
  const void *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // r9d
  char v40; // [rsp+90h] [rbp+8h]
  _LIST_ENTRY **p_Blink; // [rsp+98h] [rbp+10h] BYREF
  _DEVICE_RELATIONS *pRelations; // [rsp+A0h] [rbp+18h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  _a1 = 0LL;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  v6 = 0LL;
  v7 = m_DeviceBase->m_ObjectSize == 0;
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( !v7 )
    v6 = (WDFDEVICE__ *)v5;
  if ( m_Method )
    m_Method(v6, BusRelations);
  v10 = 0;
  m_EnumInfo = this->m_EnumInfo;
  Status = 0;
  v40 = 0;
  _a3 = (_DEVICE_RELATIONS *)Irp->m_Irp->IoStatus.Information;
  pRelations = _a3;
  if ( m_EnumInfo )
  {
    v14 = m_EnumInfo->m_ChildListList.__vftable;
    m_Globals = this->m_Globals;
    p_m_ChildListList = &m_EnumInfo->m_ChildListList;
    v14->AcquireLock((struct FxWaitLockTransactionedList *)p_m_ChildListList, m_Globals, (unsigned __int8 *)&p_Blink);
    v17 = p_m_ChildListList->__vftable;
    v18 = (unsigned __int8)p_Blink;
    ++p_m_ChildListList->m_ListLockedRecursionCount;
    v17->ReleaseLock(p_m_ChildListList, m_Globals, v18);
    v10 = 0;
  }
  else
  {
    p_m_ChildListList = 0LL;
  }
  v19 = 0LL;
  if ( p_m_ChildListList )
  {
    p_m_ListHead = &p_m_ChildListList->m_ListHead;
    while ( 1 )
    {
      do
      {
        if ( !v19 )
          v19 = &p_m_ChildListList->m_ListHead;
        v19 = v19->Flink;
        if ( v19 == p_m_ListHead )
        {
LABEL_39:
          v19 = 0LL;
        }
        else
        {
          while ( LODWORD(v19[2].Flink) != 1 )
          {
            v19 = v19->Flink;
            if ( v19 == p_m_ListHead )
              goto LABEL_39;
          }
        }
        if ( !v19 )
        {
          _a3 = pRelations;
          goto LABEL_18;
        }
        p_Blink = &v19[-8].Blink;
        v21 = FxChildList::ProcessBusRelations((FxChildList *)&v19[-8].Blink, &pRelations);
        v10 = v40;
        v22 = v21;
      }
      while ( v21 == -1073741637 );
      if ( v21 < 0 )
        break;
      v10 = 1;
      v40 = 1;
    }
    v30 = this->m_DeviceBase;
    _a2 = (unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
    m_ObjectSize = v30->m_ObjectSize;
    if ( !*((_WORD *)p_Blink + 5) )
      _a2 = 0LL;
    v33 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v33 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxPkgPnp_cpp_Traceguids, v33, _a2, v22);
    Status = v22;
    _a3 = pRelations;
  }
  else
  {
LABEL_18:
    v23 = 0LL;
    if ( !p_m_ChildListList )
      goto LABEL_28;
    v24 = &p_m_ChildListList->m_ListHead;
    while ( 1 )
    {
      if ( !v23 )
        v23 = &p_m_ChildListList->m_ListHead;
      v23 = v23->Flink;
      if ( v23 == v24 )
      {
LABEL_40:
        v23 = 0LL;
      }
      else
      {
        while ( LODWORD(v23[2].Flink) != 1 )
        {
          v23 = v23->Flink;
          if ( v23 == v24 )
            goto LABEL_40;
        }
      }
      if ( !v23 )
        break;
      FxChildList::InvokeReportedMissingCallback((FxChildList *)&v23[-8].Blink);
    }
  }
  FxTransactionedList::UnlockFromEnum(p_m_ChildListList, this->m_Globals);
  if ( Status < 0 )
    goto LABEL_30;
  v10 = v40;
LABEL_28:
  if ( !v10 )
    Status = Irp->m_Irp->IoStatus.Status;
LABEL_30:
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)_a3;
  Irp->m_Irp->IoStatus.Status = Status;
  v25 = this->m_Globals;
  if ( v25->FxVerboseOn )
  {
    v34 = this->m_DeviceBase;
    v35 = v34->m_ObjectSize;
    v36 = (const void *)((unsigned __int64)v34 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v35 )
      v36 = 0LL;
    WPP_IFR_SF_qL(v25, 5u, 0xCu, 0x17u, WPP_FxPkgPnp_cpp_Traceguids, v36, Status);
  }
  if ( Status >= 0 && _a3 )
  {
    if ( this->m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qdq(this->m_Globals, 4u, 0xCu, 0x18u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a3->Count, _a3);
    Count = _a3->Count;
    if ( _a3->Count )
    {
      v27 = 2;
      do
      {
        v28 = this->m_Globals;
        if ( !v28->FxVerboseOn )
          break;
        v37 = v27 + 1;
        v38 = v27 - 1;
        v39 = v27 - 2;
        if ( (unsigned int)v37 >= Count )
        {
          if ( v27 >= Count )
          {
            if ( (unsigned int)v38 >= Count )
              WPP_IFR_SF_q(v28, 5u, 0xCu, 0x1Cu, WPP_FxPkgPnp_cpp_Traceguids, _a3->Objects[v39]);
            else
              WPP_IFR_SF_qq(v28, 5u, 0xCu, 0x1Bu, WPP_FxPkgPnp_cpp_Traceguids, _a3->Objects[v39], _a3->Objects[v38]);
          }
          else
          {
            WPP_IFR_SF_qqq(
              this->m_Globals,
              5u,
              0xCu,
              0x1Au,
              WPP_FxPkgPnp_cpp_Traceguids,
              _a3->Objects[v39],
              _a3->Objects[v38],
              _a3[v27 / 2].Objects[0]);
          }
        }
        else
        {
          WPP_IFR_SF_qqqq(
            this->m_Globals,
            5u,
            0xCu,
            0x19u,
            WPP_FxPkgPnp_cpp_Traceguids,
            _a3->Objects[v39],
            _a3->Objects[v38],
            _a3[v27 / 2].Objects[0],
            _a3->Objects[v37]);
        }
        Count = _a3->Count;
        v27 += 4;
      }
      while ( v27 - 2 < _a3->Count );
    }
  }
  return (unsigned int)Status;
}
