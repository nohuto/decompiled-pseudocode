/*
 * XREFs of MiCompareHotPatchNodes @ 0x140855CD8
 * Callers:
 *     MiFindHotPatchRecord @ 0x1406833C4 (MiFindHotPatchRecord.c)
 *     MiDeleteHotPatchRecord @ 0x140855E2C (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140856AF0 (MiInsertHotPatchRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareHotPatchNodes(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a2 + 24);
  if ( v2 >= v3 )
  {
    if ( v2 > v3 )
      return 1LL;
    v4 = *(_DWORD *)(a1 + 28);
    v5 = *(_DWORD *)(a2 + 28);
    if ( v4 >= v5 )
      return v4 > v5;
  }
  return 0xFFFFFFFFLL;
}
