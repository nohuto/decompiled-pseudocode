/*
 * XREFs of EngModifySurface @ 0x1C0092A20
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C01284C0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0081998 (HmgShareLockIgnoreStockBit.c)
 */

BOOL __stdcall EngModifySurface(
        HSURF hsurf,
        HDEV hdev,
        FLONG flHooks,
        FLONG flSurface,
        DHSURF dhsurf,
        PVOID pvScan0,
        LONG lDelta,
        PVOID pvReserved)
{
  __int64 v11; // rax
  _BOOL8 v12; // r10
  int v13; // edx
  HDEV v14; // rcx
  FLONG v15; // ebp
  BOOL v16; // edx
  BOOL v17; // ebx
  __int16 v18; // r8
  __int16 v19; // cx
  __int16 v20; // r8
  int v21; // ecx
  unsigned int v22; // ecx
  int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx

  v11 = 0LL;
  if ( !hdev
    || (v11 = HmgShareLockIgnoreStockBit((unsigned int)hsurf)) == 0
    || (v12 = pvReserved == 0LL, (flSurface & 0xFFFFFFF0) != 0) )
  {
    v17 = 0;
    goto LABEL_23;
  }
  v13 = *(_DWORD *)(v11 + 112);
  if ( (v13 & 0x400000) == 0 && *(_WORD *)(v11 + 100) != 1 )
    LODWORD(v12) = 0;
  v14 = *(HDEV *)(v11 + 48);
  if ( v14 && v14 != hdev )
    LODWORD(v12) = 0;
  v15 = flHooks & 0xFFFFB7FF;
  if ( v13 < 0 && (((_DWORD)hdev[45] & 0x3B5EF) != v15 || ((_DWORD)hdev[10] & 0x400) == 0) )
    LODWORD(v12) = 0;
  if ( !pvScan0 || !lDelta )
  {
    v16 = 0;
    if ( (v15 & 0x29) == 0x29 )
      v16 = v12;
    v17 = dhsurf != 0LL && (flSurface & 1) != 0 && v16;
    if ( v17 )
    {
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_QWORD *)(v11 + 72) = 0LL;
      *(_DWORD *)(v11 + 88) = 0;
      if ( *(_WORD *)(v11 + 100) != 1 )
        *(_WORD *)(v11 + 100) = 3;
    }
    goto LABEL_13;
  }
  v17 = 0;
  if ( (v15 & 0x1000) != 0 || (flSurface & 1) == 0 )
    v17 = v12;
  if ( v17 )
  {
    *(_QWORD *)(v11 + 80) = pvScan0;
    *(_DWORD *)(v11 + 88) = lDelta;
    *(_WORD *)(v11 + 100) = 0;
    if ( lDelta <= 0 )
    {
      *(_QWORD *)(v11 + 72) = (char *)pvScan0 + lDelta * (*(_DWORD *)(v11 + 60) - 1);
      *(_WORD *)(v11 + 102) &= ~1u;
    }
    else
    {
      *(_QWORD *)(v11 + 72) = pvScan0;
      *(_WORD *)(v11 + 102) |= 1u;
    }
LABEL_13:
    if ( v17 )
    {
      v18 = *(_WORD *)(v11 + 102);
      v19 = v18 & 0xFFDF;
      v20 = v18 | 0x20;
      if ( (flSurface & 1) == 0 )
        v20 = v19;
      *(_WORD *)(v11 + 102) = v20;
      v21 = *(_DWORD *)(v11 + 112);
      if ( (flSurface & 2) != 0 )
        v22 = v21 | 0x200;
      else
        v22 = v21 & 0xFFFFFDFF;
      *(_DWORD *)(v11 + 112) = v22;
      v23 = *(_DWORD *)(v11 + 116);
      if ( (flSurface & 4) != 0 )
        v24 = v23 | 0x100;
      else
        v24 = v23 & 0xFFFFFEFF;
      if ( (flSurface & 8) != 0 )
        v25 = v24 | 0x2000;
      else
        v25 = v24 & 0xFFFFDFFF;
      *(_DWORD *)(v11 + 116) = v25;
      *(_QWORD *)(v11 + 24) = dhsurf;
      *(_QWORD *)(v11 + 136) = 0LL;
      *(_QWORD *)(v11 + 48) = hdev;
      *(_QWORD *)(v11 + 40) = *((_QWORD *)hdev + 225);
      *(_DWORD *)(v11 + 112) = v15 | *(_DWORD *)(v11 + 112) & 0xFFFC4A10;
    }
  }
LABEL_23:
  if ( v11 )
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v11, 0LL);
  return v17;
}
