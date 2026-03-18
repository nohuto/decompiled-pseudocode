/*
 * XREFs of ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C00BE2EC
 * Callers:
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AAC00 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 * Callees:
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BE098 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveTrackerBindings(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  size_t v8; // r8
  __int128 *v9; // rcx
  __int128 v10; // xmm0
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)this + 49) )
  {
    v6 = 0;
    if ( *((_QWORD *)this + 10) )
    {
      v7 = 0LL;
      do
      {
        v8 = *((_QWORD *)this + 11);
        v9 = (__int128 *)(*((_QWORD *)this + 7) + v7 * v8);
        v10 = v9[1];
        Src = *v9;
        v12 = v10;
        if ( *(_DWORD *)(Src + 24) == a3 || *(_DWORD *)(*((_QWORD *)&Src + 1) + 24LL) == a3 )
        {
          LODWORD(v12) = 0;
          memmove(v9, &Src, v8);
        }
        v7 = ++v6;
      }
      while ( (unsigned __int64)v6 < *((_QWORD *)this + 10) );
    }
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this, a2);
  }
}
