/*
 * XREFs of ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C0061328
 * Callers:
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C0061590 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0061914 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C00610D4 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0061B94 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::FreeQueuedUpdates(CFlipManager *this)
{
  _QWORD *v2; // rbx
  struct CFlipPresentUpdate *v3; // rdi
  CFlipManager *v4; // rcx
  struct CFlipPresentUpdate *v5; // rdi
  CFlipManager *v6; // rcx

  v2 = (_QWORD *)((char *)this + 120);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v2);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v4, v3);
    if ( v3 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  while ( *((CFlipManager **)this + 17) != (CFlipManager *)((char *)this + 136) )
  {
    v5 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue((_QWORD *)this + 17);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v6, v5);
    if ( v5 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  }
}
