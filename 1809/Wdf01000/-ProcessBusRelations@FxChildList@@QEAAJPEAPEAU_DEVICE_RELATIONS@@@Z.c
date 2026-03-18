/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F704
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000F3C0 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049F8 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003CBFC (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003CE84 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003E040 (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007E428 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _DEVICE_RELATIONS **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxChildList *v3; // rdi
  _FX_DRIVER_GLOBALS *v4; // rsi
  _DEVICE_RELATIONS *v5; // r14
  KIRQL v6; // al
  int v7; // ebx
  char v8; // r13
  _LIST_ENTRY *p_m_DescriptionListHead; // r15
  _LIST_ENTRY *Flink; // r12
  _DWORD *_a3; // r12
  int v12; // r13d
  unsigned __int8 v13; // r15
  KIRQL v14; // al
  KIRQL v15; // bl
  __int64 v16; // r8
  _LIST_ENTRY *v17; // rbx
  int v19; // eax
  SIZE_T v20; // r13
  _DEVICE_RELATIONS *PoolWithTag; // rax
  _LIST_ENTRY *v22; // rbx
  _DEVICE_OBJECT *v23; // rbx
  unsigned __int8 CurrentIrql; // al
  _LIST_ENTRY *v25; // rdx
  const void *_a1; // rcx
  _LIST_ENTRY *v27; // rbx
  _LIST_ENTRY *v28; // r13
  _LIST_ENTRY *v29; // rdx
  const void *v30; // rcx
  const void *v31; // rcx
  bool v32; // cc
  const void *v33; // rbx
  const void *v34; // rax
  _LIST_ENTRY *v35; // rbx
  int v36; // eax
  _LIST_ENTRY *v37; // rdx
  const void *v38; // rcx
  _LIST_ENTRY *v39; // rdx
  const void *v40; // rcx
  _LIST_ENTRY *v41; // rdx
  const void *v42; // rcx
  _LIST_ENTRY *v43; // rdx
  const void *v44; // rcx
  int v45; // edx
  const void *v46; // rcx
  size_t v47; // r8
  _LIST_ENTRY *v48; // rdx
  const void *v49; // rcx
  _LIST_ENTRY *v50; // rdx
  const void *v51; // rcx
  _LIST_ENTRY *v52; // rdx
  const void *v53; // rcx
  unsigned __int64 v54; // rcx
  _LIST_ENTRY *v55; // rax
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *m_EvtAddressDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  _LIST_ENTRY *v58; // r15
  _LIST_ENTRY *v59; // rdx
  unsigned __int64 v60; // rcx
  void (__fastcall *m_EvtIdentificationDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned int i; // ebx
  char v63; // [rsp+40h] [rbp-38h]
  unsigned __int8 invalidateRelations; // [rsp+41h] [rbp-37h] BYREF
  KIRQL v65; // [rsp+42h] [rbp-36h]
  int v66; // [rsp+44h] [rbp-34h]
  _DEVICE_RELATIONS *v67; // [rsp+48h] [rbp-30h]
  _LIST_ENTRY *v68; // [rsp+50h] [rbp-28h]
  _LIST_ENTRY freeHead; // [rsp+58h] [rbp-20h] BYREF
  _DWORD *NewIrqla; // [rsp+C0h] [rbp+48h]
  KIRQL NewIrqlb; // [rsp+C0h] [rbp+48h]
  char v74; // [rsp+D0h] [rbp+58h]
  _LIST_ENTRY *v75; // [rsp+D0h] [rbp+58h]
  char v76; // [rsp+D8h] [rbp+60h]

  m_Globals = this->m_Globals;
  v3 = this;
  v4 = m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      v4 = v3->m_Globals;
    }
  }
  v76 = 1;
  v74 = 0;
  invalidateRelations = 0;
  v5 = 0LL;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  v6 = KeAcquireSpinLockRaiseToDpc(&v3->m_ListLock);
  v7 = 0;
  v63 = 0;
  v8 = 0;
  v65 = v6;
  p_m_DescriptionListHead = &v3->m_DescriptionListHead;
  v3->m_State = ListLockedForEnum;
  Flink = v3->m_DescriptionListHead.Flink;
  if ( Flink != &v3->m_DescriptionListHead )
  {
    do
    {
      v19 = (int)Flink[1].Flink;
      if ( v19 > 0 )
      {
        if ( v19 > 2 )
        {
          if ( v19 == 4 )
          {
            if ( v4->FxVerboseOn )
            {
              v25 = Flink[4].Flink;
              _a1 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v25->Blink) )
                _a1 = 0LL;
              WPP_IFR_SF_qq(v4, 5u, 0xCu, 0x22u, WPP_FxChildList_cpp_Traceguids, _a1, v25[9].Flink);
            }
            v8 = 1;
          }
        }
        else
        {
          ++v7;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    v3 = this;
    v6 = v65;
    v63 = v8;
  }
  KeReleaseSpinLock(&v3->m_ListLock, v6);
  _a3 = *DeviceRelations;
  NewIrqla = *DeviceRelations;
  if ( v7 )
  {
    if ( _a3 )
      v7 += *_a3;
  }
  else
  {
    if ( !v8 )
    {
      if ( v4->FxVerboseOn )
      {
        v31 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v3->m_ObjectSize )
          v31 = 0LL;
        WPP_IFR_SF_q(v4, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, v31);
      }
LABEL_6:
      v76 = 0;
      v12 = -1073741637;
      goto LABEL_7;
    }
    if ( _a3 )
    {
      v27 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v28 = v27->Flink;
          if ( LODWORD(v27[1].Flink) == 4 )
          {
            v29 = v27[4].Flink;
            v30 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v29->Blink) )
              v30 = 0LL;
            WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v30, v29[9].Flink);
            LODWORD(v27[1].Flink) = 3;
            BYTE3(v27[5].Flink) = 1;
          }
          v27 = v28;
        }
        while ( v28 != p_m_DescriptionListHead );
        v5 = 0LL;
        _a3 = NewIrqla;
      }
      goto LABEL_6;
    }
  }
  if ( v7 )
    v20 = 8LL * (unsigned int)(v7 - 1) + 16;
  else
    v20 = 4LL;
  PoolWithTag = (_DEVICE_RELATIONS *)ExAllocatePoolWithTag(PagedPool, v20, v4->Tag);
  v67 = PoolWithTag;
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_IFR_SF_d(v4, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v7);
    v32 = ++v3->m_EnumRetries <= 3u;
    v12 = -1073741637;
    v76 = 0;
    v66 = -1073741637;
    if ( v32 )
    {
      v74 = 1;
    }
    else
    {
      v33 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( v63 )
      {
        v34 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v3->m_ObjectSize )
          v34 = 0LL;
        WPP_IFR_SF_q(v4, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v34);
      }
      if ( !v3->m_ObjectSize )
        v33 = 0LL;
      WPP_IFR_SF_qL(v4, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v33, 3u);
    }
    if ( _a3 )
    {
      v35 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v68 = v35->Flink;
          v36 = (int)v35[1].Flink;
          if ( v36 == 2 )
          {
            v39 = v35[4].Flink;
            v40 = (const void *)((unsigned __int64)v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v39->Blink) )
              v40 = 0LL;
            WPP_IFR_SF_qqq(v4, 4u, 0xCu, 0x28u, WPP_FxChildList_cpp_Traceguids, v40, v39[9].Flink, _a3);
            NewIrqlb = KeAcquireSpinLockRaiseToDpc(&v3->m_ListLock);
            if ( v3->m_StaticList )
            {
              v43 = v35[4].Flink;
              v44 = (const void *)((unsigned __int64)v43 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v43->Blink) )
                v44 = 0LL;
              WPP_IFR_SF_qq(v4, 3u, 0xCu, 0x2Au, WPP_FxChildList_cpp_Traceguids, v44, v43[9].Flink);
            }
            else if ( FxChildList::ReenumerateEntryLocked(v3, (FxDeviceDescriptionEntry *)v35, 1u) )
            {
              v41 = v35[4].Flink;
              v42 = (const void *)((unsigned __int64)v41 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v41->Blink) )
                v42 = 0LL;
              WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x29u, WPP_FxChildList_cpp_Traceguids, v42, v41[9].Flink);
              FxChildList::CloneEntryLocked(v3, &freeHead, (FxDeviceDescriptionEntry *)v35, 1u);
            }
            LODWORD(v35[1].Flink) = 3;
            BYTE3(v35[5].Flink) = 1;
            KeReleaseSpinLock(&v3->m_ListLock, NewIrqlb);
          }
          else if ( v36 == 4 )
          {
            v37 = v35[4].Flink;
            v38 = (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v37->Blink) )
              v38 = 0LL;
            WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v38, v37[9].Flink);
            LODWORD(v35[1].Flink) = 3;
            BYTE3(v35[5].Flink) = 1;
          }
          v35 = v68;
        }
        while ( v68 != p_m_DescriptionListHead );
        v5 = v67;
        v12 = v66;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_7;
  }
  memset(PoolWithTag, 0, v20);
  if ( _a3 )
  {
    v45 = *_a3;
    if ( *_a3 )
    {
      if ( v4->FxVerboseOn )
      {
        v46 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v3->m_ObjectSize )
          v46 = 0LL;
        WPP_IFR_SF_qid(v4, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v46, (__int64)_a3, v45);
        v45 = *_a3;
      }
      if ( v45 )
        v47 = 8LL * (unsigned int)(v45 - 1) + 16;
      else
        v47 = 4LL;
      memmove(v5, _a3, v47);
    }
  }
  v12 = 0;
  v66 = 0;
  v22 = p_m_DescriptionListHead->Flink;
  if ( p_m_DescriptionListHead->Flink == p_m_DescriptionListHead )
  {
LABEL_7:
    v13 = v74;
    goto $Done_6;
  }
  do
  {
    v75 = v22->Flink;
    switch ( LODWORD(v22[1].Flink) )
    {
      case 1:
        if ( v4->FxVerboseOn )
          WPP_IFR_SF_(v4, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
        if ( FxChildList::CreateDevice(v3, (FxDeviceDescriptionEntry *)v22, &invalidateRelations) )
        {
          v50 = v22[4].Flink;
          v51 = (const void *)((unsigned __int64)v50 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !WORD1(v50->Blink) )
            v51 = 0LL;
          WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, v51, v50[9].Flink);
LABEL_29:
          if ( v4->FxVerboseOn )
          {
            v52 = v22[4].Flink;
            v53 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v52->Blink) )
              v53 = 0LL;
            WPP_IFR_SF_qq(v4, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v53, v52[9].Flink);
          }
          v23 = (_DEVICE_OBJECT *)v22[4].Flink[9].Flink;
          ObfReferenceObject(v23);
          v5->Objects[v5->Count++] = v23;
        }
        break;
      case 2:
        goto LABEL_29;
      case 4:
        v48 = v22[4].Flink;
        v49 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !WORD1(v48->Blink) )
          v49 = 0LL;
        WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v49, v48[9].Flink);
        LODWORD(v22[1].Flink) = 3;
        BYTE3(v22[5].Flink) = 1;
        break;
    }
    v22 = v75;
  }
  while ( v75 != p_m_DescriptionListHead );
  v13 = invalidateRelations;
  _a3 = NewIrqla;
  v12 = v66;
$Done_6:
  v14 = KeAcquireSpinLockRaiseToDpc(&v3->m_ListLock);
  v3->m_State = ListUnlocked;
  v15 = v14;
  FxChildList::ProcessModificationsLocked(v3, &freeHead);
  if ( v12 >= 0 )
    v3->m_EnumRetries = 0;
  KeReleaseSpinLock(&v3->m_ListLock, v15);
  if ( v13 )
    IoInvalidateDeviceRelations(v3->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  while ( 1 )
  {
    v17 = freeHead.Flink;
    if ( freeHead.Flink == &freeHead )
      break;
    if ( freeHead.Flink->Blink != &freeHead
      || (v55 = freeHead.Flink->Flink, freeHead.Flink->Flink->Blink != freeHead.Flink) )
    {
      __fastfail(3u);
    }
    freeHead.Flink = freeHead.Flink->Flink;
    v55->Blink = &freeHead;
    v17->Blink = v17;
    v17->Flink = v17;
    if ( v3->m_StaticList && (LODWORD(v17[1].Flink) == 1 || LODWORD(v17[3].Blink) == 5) )
    {
      Blink = v17[1].Blink->Blink;
      if ( LODWORD(v17[3].Blink) == 5 )
        LODWORD(v17[3].Blink) = 0;
      LODWORD(v17[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Blink[40].Blink, PnpEventRemove, v16);
    }
    else
    {
      m_EvtAddressDescriptionCleanup = v3->m_EvtAddressDescriptionCleanup;
      v58 = v17[1].Blink;
      if ( m_EvtAddressDescriptionCleanup )
      {
        v59 = v17[2].Flink;
        if ( v59 )
        {
          v60 = (unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v3->m_ObjectSize )
            v60 = 0LL;
          ((void (__fastcall *)(unsigned __int64, _LIST_ENTRY *, __int64, _QWORD))m_EvtAddressDescriptionCleanup)(
            v60,
            v59,
            v16,
            0LL);
        }
      }
      m_EvtIdentificationDescriptionCleanup = v3->m_EvtIdentificationDescriptionCleanup;
      if ( m_EvtIdentificationDescriptionCleanup && v58 )
      {
        v54 = (unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v3->m_ObjectSize )
          v54 = 0LL;
        m_EvtIdentificationDescriptionCleanup(
          (WDFCHILDLIST__ *)v54,
          (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v58);
      }
      ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v17[4].Blink->Flink[1].Flink)(
        v17[4].Blink,
        v17,
        77LL,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
      FxPoolFree((FX_POOL_TRACKER *)v17);
    }
  }
  if ( v76 )
  {
    if ( _a3 )
    {
      if ( v4->FxVerboseOn )
        WPP_IFR_SF_q(v4, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, _a3);
      ExFreePoolWithTag(_a3, 0);
    }
    if ( v12 < 0 && v5 )
    {
      for ( i = 0; i < v5->Count; ++i )
        ObfDereferenceObject(v5->Objects[i]);
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    *DeviceRelations = v5;
  }
  return (unsigned int)v12;
}
