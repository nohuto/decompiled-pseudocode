/*
 * XREFs of ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C005C160
 * Callers:
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C005798C (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C005A9C0 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C005AEE8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C005CEBC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 */

void __fastcall CEndpointResourceStateManager::RemovePoolBufferState(
        CEndpointResourceStateManager *this,
        struct CPoolBufferResourceState *a2)
{
  char *v2; // rdi
  char *i; // rbx

  v2 = (char *)this + 16;
  for ( i = (char *)*((_QWORD *)this + 2); i != v2; i = *(char **)i )
  {
    if ( *(_QWORD *)(((unsigned __int64)(i - 8) & -(__int64)(i != 0LL)) + 0x30) == *((_QWORD *)a2 + 3) )
      CContentResourceState::SetBoundBuffer(
        (CContentResourceState *)((unsigned __int64)(i - 8) & -(__int64)(i != 0LL)),
        0LL);
  }
  (*(void (__fastcall **)(struct CPoolBufferResourceState *))(*(_QWORD *)a2 + 24LL))(a2);
  *((_BYTE *)this + 32) = 1;
}
