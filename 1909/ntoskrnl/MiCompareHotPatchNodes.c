/*
 * XREFs of MiCompareHotPatchNodes @ 0x1405B0CA4
 * Callers:
 *     MiInsertSecureImageActivePatch @ 0x1405B0D64 (MiInsertSecureImageActivePatch.c)
 *     MiFindHotPatchRecord @ 0x140711564 (MiFindHotPatchRecord.c)
 *     MiDeleteHotPatchRecord @ 0x14088D844 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x14088E588 (MiInsertHotPatchRecord.c)
 *     MiUnloadHotPatch @ 0x1408916B0 (MiUnloadHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareHotPatchNodes(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= *(_DWORD *)(a2 + 24) )
  {
    if ( v2 > *(_DWORD *)(a2 + 24) )
      return 1LL;
    v3 = *(_DWORD *)(a1 + 28);
    if ( v3 >= *(_DWORD *)(a2 + 28) )
      return v3 > *(_DWORD *)(a2 + 28);
  }
  return 0xFFFFFFFFLL;
}
