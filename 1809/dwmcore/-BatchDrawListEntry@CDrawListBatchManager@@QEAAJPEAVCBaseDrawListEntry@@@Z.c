/*
 * XREFs of ?BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z @ 0x180189D1C
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180024C90 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x180189CE0 (-AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z @ 0x18002551C (-AddMultipleAndSet@-$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBatchManager::BatchDrawListEntry(
        CDrawListBatchManager *this,
        struct CBaseDrawListEntry *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct CBaseDrawListEntry *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = DynArray<CBaseDrawListEntry *,0>::AddMultipleAndSet((__int64)this, &v6, 1u);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x8Au);
  }
  else
  {
    (**(void (__fastcall ***)(struct CBaseDrawListEntry *))v6)(v6);
    ++*((_DWORD *)v6 + 4);
  }
  return v4;
}
