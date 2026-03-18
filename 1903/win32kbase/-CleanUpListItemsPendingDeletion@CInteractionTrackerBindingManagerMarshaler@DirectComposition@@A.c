/*
 * XREFs of ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C01AD8A0
 * Callers:
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AD940 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXI@Z @ 0x1C01ADCB0 (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXI@Z.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AE010 (-SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C0008FDC (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  size_t v7; // r8
  size_t v8; // rdx
  __int128 v9; // xmm1
  _OWORD Src[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *((_QWORD *)this + 10);
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    v5 = 0LL;
    do
    {
      v6 = *((_QWORD *)this + 7);
      v7 = *((_QWORD *)this + 11);
      v8 = v5 * v7;
      if ( *(_DWORD *)(v5 * v7 + v6 + 16) )
      {
        v9 = *(_OWORD *)(v8 + v6 + 16);
        Src[0] = *(_OWORD *)(v8 + v6);
        Src[1] = v9;
        memmove((void *)(v6 + v7 * v2++), Src, v7);
      }
      v1 = *((_QWORD *)this + 10);
      v5 = ++v3;
    }
    while ( v3 < v1 );
  }
  DirectComposition::CDCompDynamicArrayBase::Shrink(
    (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 56),
    v1 - v2);
}
