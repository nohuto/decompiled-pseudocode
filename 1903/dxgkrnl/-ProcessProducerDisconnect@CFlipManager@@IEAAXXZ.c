/*
 * XREFs of ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C00619C8
 * Callers:
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C005E7D4 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C00609E0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C005E998 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C0061080 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C00632F0 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 */

void __fastcall CFlipManager::ProcessProducerDisconnect(CFlipManager *this)
{
  CEndpointResourceStateManager *v1; // rdi
  char *v3; // r14
  char *v4; // rcx
  char *v5; // rbx
  CEndpointResourceStateManager **v6; // rdx
  CEndpointResourceStateManager *v7; // rbx
  CFlipPropertySetBase *v8; // rax

  v1 = (CFlipManager *)((char *)this + 56);
  v3 = (char *)this + 72;
  v4 = (char *)*((_QWORD *)this + 9);
  if ( v4 != v3 )
  {
    do
    {
      v5 = *(char **)v4;
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v4 - 1) + 24LL))((_QWORD *)v4 - 1);
      v4 = v5;
    }
    while ( v5 != v3 );
  }
  v6 = *(CEndpointResourceStateManager ***)v1;
  if ( *(CEndpointResourceStateManager **)v1 != v1 )
  {
    do
    {
      v7 = *v6;
      CEndpointResourceStateManager::RemovePoolBufferState(v1, (struct CPoolBufferResourceState *)(v6 - 1));
      v6 = (CEndpointResourceStateManager **)v7;
    }
    while ( v7 != v1 );
  }
  while ( *((CFlipManager **)this + 21) != (CFlipManager *)((char *)this + 168) )
  {
    v8 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue((_QWORD *)this + 21);
    CFlipPropertySetBase::Release(v8);
  }
  KeResetEvent(*((PRKEVENT *)this + 28));
  *((_QWORD *)this + 5) = 0LL;
}
