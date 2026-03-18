/*
 * XREFs of ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_ENTRY@@@Z @ 0x1C0063034
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060C9C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBufferFormatInfo@@@Z @ 0x1C0061D98 (--$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBuff.c)
 *     ??$FindProperty@UPresentedSurfaceUpdateFlags@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedSurfaceUpdateFlags@@@Z @ 0x1C0061DF8 (--$FindProperty@UPresentedSurfaceUpdateFlags@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedSurfac.c)
 *     ?PrepareCSMBufferInfo@CEndpointResourceStateManager@@QEAAX_NPEAUFlipManagerObject@@PEAUCSM_BUFFER_INFO@@@Z @ 0x1C006272C (-PrepareCSMBufferInfo@CEndpointResourceStateManager@@QEAAX_NPEAUFlipManagerObject@@PEAUCSM_BUFFE.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C0063B8C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@AEAU_LIST_ENTRY@@@Z @ 0x1C0064074 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@AEAU_LIST_ENT.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareUpdateTokensForDwm(
        CEndpointResourceStateManager **this,
        struct FlipManagerObject *a2,
        struct _LIST_ENTRY *a3)
{
  int v5; // edi
  CEndpointResourceStateManager *v6; // rbx
  unsigned __int8 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  int v13; // eax
  CEndpointResourceStateManager *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rcx
  CContentResource *v17; // rbp
  char v18; // cl
  int UpdateTokens; // eax
  struct _LIST_ENTRY *v21; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  char v24; // [rsp+20h] [rbp-478h]
  int *v25; // [rsp+28h] [rbp-470h] BYREF
  struct FlipManagerObject *v26; // [rsp+30h] [rbp-468h]
  _BYTE v27[1040]; // [rsp+40h] [rbp-458h] BYREF

  v26 = a2;
  v5 = 0;
  memset(v27, 0, sizeof(v27));
  v6 = *this;
  v7 = 0;
  v24 = 0;
  do
  {
    if ( v6 == (CEndpointResourceStateManager *)this )
      break;
    v8 = (__int64)v6 + 16;
    if ( !v6 )
      v8 = 24LL;
    v9 = (__int64)v6 + 24;
    v10 = *(_QWORD *)v8;
    if ( !v6 )
      v9 = 32LL;
    v11 = *(_BYTE *)v9;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v11 |= 4u;
      v24 = 1;
      *(_BYTE *)v9 = v11;
    }
    if ( (v11 & 2) != 0 )
    {
      v24 = 1;
      *(_BYTE *)v9 = v11 | 8;
    }
    if ( !v7 )
    {
      v25 = 0LL;
      v12 = *(_QWORD *)(v10 + 32);
      if ( v12 )
      {
        CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(v12, &v25);
        if ( v25 )
        {
          v13 = *v25;
          if ( *v25 != 10 && v13 != 28 && v13 != 87 )
          {
            if ( v13 == 103 || v13 > 105 && v13 <= 107 )
              v7 = 1;
            else
              v5 = -1073741811;
          }
        }
      }
    }
    v6 = *(CEndpointResourceStateManager **)v6;
  }
  while ( v5 >= 0 );
  v14 = this[2];
  if ( v5 < 0 )
    goto LABEL_49;
  do
  {
    if ( v14 == (CEndpointResourceStateManager *)(this + 2) )
      break;
    v25 = 0LL;
    v16 = *(_QWORD *)((((unsigned __int64)v14 - 8) & -(__int64)(v14 != 0LL)) + 0x28);
    v17 = *(CContentResource **)((((unsigned __int64)v14 - 8) & -(__int64)(v14 != 0LL)) + 0x18);
    if ( v16 )
    {
      CFlipPropertySetBase::FindProperty<PresentedSurfaceUpdateFlags>(v16, &v25);
      if ( v25 )
      {
        if ( v24 || v7 != *((_BYTE *)v17 + 64) )
        {
          CEndpointResourceStateManager::PrepareCSMBufferInfo(this, v7, v26, (struct CSM_BUFFER_INFO *)v27);
          v5 = CContentResource::RebindCompositionSurfaceBuffer(v17, (const struct CSM_BUFFER_INFO *)v27);
        }
        if ( v5 >= 0 )
        {
          v18 = *(_BYTE *)((((unsigned __int64)v14 - 8) & -(__int64)(v14 != 0LL)) + 0x20);
          if ( (v18 & 1) != 0 )
          {
            v18 |= 4u;
            *(_BYTE *)((((unsigned __int64)v14 - 8) & -(__int64)(v14 != 0LL)) + 0x20) = v18;
          }
          if ( (v18 & 2) != 0 )
            *(_BYTE *)((((unsigned __int64)v14 - 8) & -(__int64)(v14 != 0LL)) + 0x20) = v18 | 8;
          if ( (*(_BYTE *)((((unsigned __int64)v14 - 8) & -(__int64)(v14 != 0LL)) + 0x38) & 1) != 0 )
          {
            UpdateTokens = CContentResourceState::CreateUpdateTokens(
                             (CContentResourceState *)(((unsigned __int64)v14 - 8) & -(__int64)(v14 != 0LL)),
                             (struct CEndpointResourceStateManager *)this,
                             a3);
            v15 = ((unsigned __int64)v14 - 8) & -(__int64)(v14 != 0LL);
            *(_BYTE *)(v15 + 56) |= 2u;
            v5 = UpdateTokens;
          }
        }
      }
    }
    v14 = *(CEndpointResourceStateManager **)v14;
  }
  while ( v5 >= 0 );
  if ( v5 < 0 )
  {
LABEL_49:
    while ( 1 )
    {
      Flink = a3->Flink;
      if ( a3->Flink == a3 )
        break;
      v21 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v21;
      v21->Blink = Blink;
      if ( Flink != (struct _LIST_ENTRY *)8 )
        ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
    }
  }
  return (unsigned int)v5;
}
