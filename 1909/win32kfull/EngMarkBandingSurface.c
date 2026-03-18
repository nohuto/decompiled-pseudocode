/*
 * XREFs of EngMarkBandingSurface @ 0x1C0112120
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C0112070 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634 (--1EPALOBJ@@QEAA@XZ.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  char v1; // dl
  __int64 v2; // rax
  BOOL v3; // ebx
  int v4; // ecx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 5;
  v2 = HmgShareLockCheckIgnoreStockBit(hsurf, v1);
  v3 = 0;
  v6 = v2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 112);
    if ( (v4 & 0x200000) != 0 )
    {
      v3 = 1;
      *(_DWORD *)(v2 + 112) = v4 | 0x2000000;
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  return v3;
}
