/*
 * XREFs of ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_ENTRY@@@Z @ 0x1C005BECC
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0059BD4 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C005C8D4 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@AEAU_LIST_ENTRY@@@Z @ 0x1C005CE04 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@AEAU_LIST_ENT.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareUpdateTokensForDwm(
        CEndpointResourceStateManager **this,
        struct FlipManagerObject *a2,
        struct _LIST_ENTRY *a3)
{
  int v6; // ebp
  CEndpointResourceStateManager *v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax
  CEndpointResourceStateManager *v15; // rdi
  __int64 v16; // rbx
  char v17; // cl
  int UpdateTokens; // eax
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  _QWORD v23[130]; // [rsp+20h] [rbp-448h] BYREF

  v6 = 0;
  memset(v23, 0, sizeof(v23));
  if ( *((_BYTE *)this + 32) )
  {
    v7 = *this;
    LODWORD(v23[0]) = 3;
    LODWORD(v23[17]) = 2;
    v23[111] = a2;
    if ( v7 != (CEndpointResourceStateManager *)this )
    {
      v8 = HIDWORD(v23[17]);
      do
      {
        v9 = (__int64)v7 + 16;
        if ( !v7 )
          v9 = 24LL;
        v10 = (__int64)v7 + 24;
        v11 = *(_QWORD *)v9;
        if ( !v7 )
          v10 = 32LL;
        v12 = *(_BYTE *)v10;
        if ( (*(_BYTE *)v10 & 1) != 0 )
        {
          v12 |= 4u;
          *(_BYTE *)v10 = v12;
        }
        if ( (v12 & 2) != 0 )
        {
          *(_BYTE *)v10 = v12 | 8;
        }
        else
        {
          v13 = 3LL * v8;
          v14 = *(_QWORD *)(v11 + 48);
          LODWORD(v23[v13 + 20]) = 0;
          v23[v13 + 18] = v14;
          v23[v13 + 19] = *(_QWORD *)(v11 + 64);
          v8 = ++HIDWORD(v23[17]);
        }
        v7 = *(CEndpointResourceStateManager **)v7;
      }
      while ( v7 != (CEndpointResourceStateManager *)this );
    }
  }
  v15 = this[2];
  do
  {
    if ( v15 == (CEndpointResourceStateManager *)(this + 2) )
      break;
    if ( *((_BYTE *)this + 32) )
      v6 = CContentResource::RebindCompositionSurfaceBuffer(
             *(CContentResource **)((((unsigned __int64)v15 - 8) & -(__int64)(v15 != 0LL)) + 0x18),
             (const struct CSM_BUFFER_INFO *)v23);
    if ( v6 >= 0 )
    {
      v17 = *(_BYTE *)((((unsigned __int64)v15 - 8) & -(__int64)(v15 != 0LL)) + 0x20);
      if ( (v17 & 1) != 0 )
      {
        v17 |= 4u;
        *(_BYTE *)((((unsigned __int64)v15 - 8) & -(__int64)(v15 != 0LL)) + 0x20) = v17;
      }
      if ( (v17 & 2) != 0 )
        *(_BYTE *)((((unsigned __int64)v15 - 8) & -(__int64)(v15 != 0LL)) + 0x20) = v17 | 8;
      if ( (*(_BYTE *)((((unsigned __int64)v15 - 8) & -(__int64)(v15 != 0LL)) + 0x38) & 1) != 0 )
      {
        UpdateTokens = CContentResourceState::CreateUpdateTokens(
                         (CContentResourceState *)(((unsigned __int64)v15 - 8) & -(__int64)(v15 != 0LL)),
                         (struct CEndpointResourceStateManager *)this,
                         a3);
        v16 = ((unsigned __int64)v15 - 8) & -(__int64)(v15 != 0LL);
        *(_BYTE *)(v16 + 56) |= 2u;
        v6 = UpdateTokens;
      }
    }
    v15 = *(CEndpointResourceStateManager **)v15;
  }
  while ( v6 >= 0 );
  if ( v6 < 0 )
  {
    while ( 1 )
    {
      Flink = a3->Flink;
      if ( a3->Flink == a3 )
        break;
      v20 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v20;
      v20->Blink = Blink;
      if ( Flink != (struct _LIST_ENTRY *)8 )
        ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
    }
  }
  return (unsigned int)v6;
}
