/*
 * XREFs of NtGdiEngMarkBandingSurface @ 0x1C0112070
 * Callers:
 *     <none>
 * Callees:
 *     EngMarkBandingSurface @ 0x1C0112120 (EngMarkBandingSurface.c)
 */

__int64 __fastcall NtGdiEngMarkBandingSurface(HSURF hsurf, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edi
  BOOL v8; // esi

  LOBYTE(a2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, a2);
  LOBYTE(v4) = 5;
  v5 = v3;
  v6 = HmgShareLockCheck(hsurf, v4);
  v7 = 1;
  v8 = v6 && (*(_DWORD *)(v6 + 112) & 0x40000) != 0;
  if ( v6 )
    DEC_SHARE_REF_CNT(v6);
  if ( !v8 || !EngMarkBandingSurface(hsurf) )
    v7 = 0;
  if ( v5 )
    DEC_SHARE_REF_CNT(v5);
  return v7;
}
