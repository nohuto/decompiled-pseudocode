/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F694
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000F350 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0003714 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0003764 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqq @ 0x1C0033E3C (WPP_IFR_SF_qqq.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003BE6C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003C0F4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003D2CC (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _LIST_ENTRY **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _FX_DRIVER_GLOBALS *v4; // rdi
  _DEVICE_RELATIONS *v5; // rbp
  KIRQL v6; // al
  _LIST_ENTRY *p_m_DescriptionListHead; // r15
  int v8; // ebx
  char v9; // r12
  _LIST_ENTRY *Flink; // r14
  KIRQL v11; // r13
  _LIST_ENTRY *_a3; // r14
  int v13; // r12d
  unsigned __int8 v14; // r15
  KIRQL v15; // al
  KIRQL v16; // bl
  unsigned __int8 v17; // r8
  int v19; // eax
  SIZE_T v20; // r12
  _DEVICE_RELATIONS *PoolWithTag; // rax
  _LIST_ENTRY *v22; // rbx
  _DEVICE_OBJECT *v23; // rbx
  unsigned __int8 CurrentIrql; // al
  _LIST_ENTRY *v25; // rdx
  const void *_a1; // rcx
  _LIST_ENTRY *v27; // rbx
  _LIST_ENTRY *v28; // r12
  _LIST_ENTRY *v29; // rdx
  const void *v30; // rcx
  const void *v31; // rcx
  const void *v32; // rbx
  const void *v33; // rax
  _LIST_ENTRY *v34; // rbx
  int v35; // eax
  _LIST_ENTRY *v36; // rdx
  const void *v37; // rcx
  _LIST_ENTRY *v38; // rdx
  const void *v39; // rcx
  _LIST_ENTRY *v40; // rdx
  const void *v41; // rcx
  _LIST_ENTRY *v42; // rdx
  const void *v43; // rcx
  int v44; // edx
  const void *v45; // rcx
  size_t v46; // r8
  _LIST_ENTRY *v47; // rdx
  const void *v48; // rcx
  _LIST_ENTRY *v49; // rdx
  const void *v50; // rcx
  _LIST_ENTRY *v51; // rdx
  const void *v52; // rcx
  unsigned int i; // ebx
  unsigned __int8 invalidateRelations; // [rsp+40h] [rbp-78h] BYREF
  KIRQL v55; // [rsp+41h] [rbp-77h]
  int v56; // [rsp+44h] [rbp-74h]
  _DEVICE_RELATIONS *v57; // [rsp+48h] [rbp-70h]
  _LIST_ENTRY *v58; // [rsp+50h] [rbp-68h]
  _LIST_ENTRY freeHead; // [rsp+58h] [rbp-60h] BYREF
  char v60; // [rsp+C0h] [rbp+8h]
  _LIST_ENTRY *v61; // [rsp+C0h] [rbp+8h]
  char v63; // [rsp+D0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h]
  KIRQL NewIrqla; // [rsp+D8h] [rbp+20h]

  m_Globals = this->m_Globals;
  v4 = m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      v4 = this->m_Globals;
    }
  }
  v63 = 1;
  v60 = 0;
  invalidateRelations = 0;
  v5 = 0LL;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  NewIrql = 0;
  v8 = 0;
  v55 = v6;
  v9 = 0;
  this->m_State = ListLockedForEnum;
  Flink = this->m_DescriptionListHead.Flink;
  v11 = v6;
  if ( Flink != &this->m_DescriptionListHead )
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
            v9 = 1;
          }
        }
        else
        {
          ++v8;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    v11 = v55;
    NewIrql = v9;
  }
  KeReleaseSpinLock(&this->m_ListLock, v11);
  _a3 = *DeviceRelations;
  v58 = *DeviceRelations;
  if ( v8 )
  {
    if ( _a3 )
      v8 += LODWORD(_a3->Flink);
  }
  else
  {
    if ( !v9 )
    {
      if ( v4->FxVerboseOn )
      {
        v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v31 = 0LL;
        WPP_IFR_SF_q(v4, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, v31);
      }
LABEL_6:
      v63 = 0;
      v13 = -1073741637;
      goto LABEL_7;
    }
    if ( _a3 )
    {
      v27 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        v5 = 0LL;
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
        _a3 = v58;
      }
      goto LABEL_6;
    }
  }
  if ( v8 )
    v20 = 8LL * (unsigned int)(v8 - 1) + 16;
  else
    v20 = 4LL;
  PoolWithTag = (_DEVICE_RELATIONS *)ExAllocatePoolWithTag(PagedPool, v20, v4->Tag);
  v57 = PoolWithTag;
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_IFR_SF_d(v4, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v8);
    ++this->m_EnumRetries;
    v13 = -1073741637;
    v63 = 0;
    v56 = -1073741637;
    if ( this->m_EnumRetries > 3u )
    {
      v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( NewIrql )
      {
        v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v33 = 0LL;
        WPP_IFR_SF_q(v4, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v33);
      }
      if ( !this->m_ObjectSize )
        v32 = 0LL;
      WPP_IFR_SF_qL(v4, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v32, 3u);
    }
    else
    {
      v60 = 1;
    }
    if ( _a3 )
    {
      v34 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v58 = v34->Flink;
          v35 = (int)v34[1].Flink;
          if ( v35 == 2 )
          {
            v38 = v34[4].Flink;
            v39 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v38->Blink) )
              v39 = 0LL;
            WPP_IFR_SF_qqq(v4, 4u, 0xCu, 0x28u, WPP_FxChildList_cpp_Traceguids, v39, v38[9].Flink, _a3);
            NewIrqla = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
            if ( this->m_StaticList )
            {
              v42 = v34[4].Flink;
              v43 = (const void *)((unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v42->Blink) )
                v43 = 0LL;
              WPP_IFR_SF_qq(v4, 3u, 0xCu, 0x2Au, WPP_FxChildList_cpp_Traceguids, v43, v42[9].Flink);
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, (FxDeviceDescriptionEntry *)v34, 1u) )
            {
              v40 = v34[4].Flink;
              v41 = (const void *)((unsigned __int64)v40 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v40->Blink) )
                v41 = 0LL;
              WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x29u, WPP_FxChildList_cpp_Traceguids, v41, v40[9].Flink);
              FxChildList::CloneEntryLocked(this, &freeHead, (FxDeviceDescriptionEntry *)v34, 1u);
            }
            LODWORD(v34[1].Flink) = 3;
            BYTE3(v34[5].Flink) = 1;
            KeReleaseSpinLock(&this->m_ListLock, NewIrqla);
          }
          else if ( v35 == 4 )
          {
            v36 = v34[4].Flink;
            v37 = (const void *)((unsigned __int64)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v36->Blink) )
              v37 = 0LL;
            WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v37, v36[9].Flink);
            LODWORD(v34[1].Flink) = 3;
            BYTE3(v34[5].Flink) = 1;
          }
          v34 = v58;
        }
        while ( v58 != p_m_DescriptionListHead );
        v5 = v57;
        v13 = v56;
      }
    }
    else
    {
      v13 = -1073741670;
    }
    goto LABEL_7;
  }
  memset(PoolWithTag, 0, v20);
  if ( _a3 )
  {
    v44 = (int)_a3->Flink;
    if ( LODWORD(_a3->Flink) )
    {
      if ( v4->FxVerboseOn )
      {
        v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v45 = 0LL;
        WPP_IFR_SF_qid(v4, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v45, (__int64)_a3, v44);
        v44 = (int)_a3->Flink;
      }
      if ( v44 )
        v46 = 8LL * (unsigned int)(v44 - 1) + 16;
      else
        v46 = 4LL;
      memmove(v5, _a3, v46);
    }
  }
  v22 = p_m_DescriptionListHead->Flink;
  v13 = 0;
  v56 = 0;
  if ( v22 == p_m_DescriptionListHead )
  {
LABEL_7:
    v14 = v60;
    goto $Done_6;
  }
  do
  {
    v61 = v22->Flink;
    switch ( LODWORD(v22[1].Flink) )
    {
      case 1:
        if ( v4->FxVerboseOn )
          WPP_IFR_SF_(v4, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
        if ( FxChildList::CreateDevice(this, (FxDeviceDescriptionEntry *)v22, &invalidateRelations) )
        {
          v49 = v22[4].Flink;
          v50 = (const void *)((unsigned __int64)v49 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !WORD1(v49->Blink) )
            v50 = 0LL;
          WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, v50, v49[9].Flink);
LABEL_28:
          if ( v4->FxVerboseOn )
          {
            v51 = v22[4].Flink;
            v52 = (const void *)((unsigned __int64)v51 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v51->Blink) )
              v52 = 0LL;
            WPP_IFR_SF_qq(v4, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v52, v51[9].Flink);
          }
          v23 = (_DEVICE_OBJECT *)v22[4].Flink[9].Flink;
          ObfReferenceObject(v23);
          v5->Objects[v5->Count++] = v23;
        }
        break;
      case 2:
        goto LABEL_28;
      case 4:
        v47 = v22[4].Flink;
        v48 = (const void *)((unsigned __int64)v47 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !WORD1(v47->Blink) )
          v48 = 0LL;
        WPP_IFR_SF_qq(v4, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v48, v47[9].Flink);
        LODWORD(v22[1].Flink) = 3;
        BYTE3(v22[5].Flink) = 1;
        break;
    }
    v22 = v61;
  }
  while ( v61 != p_m_DescriptionListHead );
  v14 = invalidateRelations;
  _a3 = v58;
  v13 = v56;
$Done_6:
  v15 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListUnlocked;
  v16 = v15;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v13 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(&this->m_ListLock, v16);
  if ( v14 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  FxChildList::DrainFreeListHead(this, &freeHead, v17);
  if ( v63 )
  {
    if ( _a3 )
    {
      if ( v4->FxVerboseOn )
        WPP_IFR_SF_q(v4, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, _a3);
      ExFreePoolWithTag(_a3, 0);
    }
    if ( v13 < 0 && v5 )
    {
      for ( i = 0; i < v5->Count; ++i )
        ObfDereferenceObject(v5->Objects[i]);
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    *DeviceRelations = (_LIST_ENTRY *)v5;
  }
  return (unsigned int)v13;
}
