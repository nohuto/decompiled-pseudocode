/*
 * XREFs of ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C005A2FC
 * Callers:
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C005A570 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C005A90C (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C005A0B4 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005AB98 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::FreeQueuedUpdates(CFlipManager *this)
{
  _QWORD *v2; // rbx
  struct CFlipPresentUpdate *v3; // rdi
  CFlipManager *v4; // rcx
  struct CFlipPresentUpdate *v5; // rdi
  CFlipManager *v6; // rcx

  v2 = (_QWORD *)((char *)this + 136);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v2);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v4, v3);
    if ( v3 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  while ( *((CFlipManager **)this + 19) != (CFlipManager *)((char *)this + 152) )
  {
    v5 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue((_QWORD *)this + 19);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v6, v5);
    if ( v5 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  }
}
