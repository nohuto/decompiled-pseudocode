/*
 * XREFs of ?SetExistingSysMemStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAX@Z @ 0x1C00AF71C
 * Callers:
 *     VidMmSetExistingSysMemStore @ 0x1C0024C70 (VidMmSetExistingSysMemStore.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::SetExistingSysMemStore(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2, void *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  v4 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v4 + 80) & 0x8000) != 0 )
  {
    *(_QWORD *)(v4 + 544) = a3;
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v5 + 24) = a2;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}
