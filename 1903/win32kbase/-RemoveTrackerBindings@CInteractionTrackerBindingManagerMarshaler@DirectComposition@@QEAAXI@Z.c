/*
 * XREFs of ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXI@Z @ 0x1C01ADCB0
 * Callers:
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AC8E0 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 * Callees:
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C01AD8A0 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveTrackerBindings(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  size_t v6; // r8
  __int128 *v7; // rcx
  __int128 v8; // xmm0
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( *((_QWORD *)this + 10) )
  {
    v5 = 0LL;
    do
    {
      v6 = *((_QWORD *)this + 11);
      v7 = (__int128 *)(*((_QWORD *)this + 7) + v5 * v6);
      v8 = v7[1];
      Src = *v7;
      v10 = v8;
      if ( *(_DWORD *)(Src + 24) == a2 || *(_DWORD *)(*((_QWORD *)&Src + 1) + 24LL) == a2 )
      {
        LODWORD(v10) = 0;
        memmove(v7, &Src, v6);
      }
      v5 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 10) );
  }
  DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this);
}
