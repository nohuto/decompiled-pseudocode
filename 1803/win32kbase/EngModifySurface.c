/*
 * XREFs of EngModifySurface @ 0x1C0066600
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C7DE0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0067BCC (HmgShareLockIgnoreStockBit.c)
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
  __int16 v18; // cx
  __int16 v19; // cx
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx

  v11 = 0LL;
  if ( !hdev
    || (v11 = HmgShareLockIgnoreStockBit(hsurf)) == 0
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
  if ( v13 < 0 && (((_DWORD)hdev[43] & 0x3B5EF) != v15 || ((_DWORD)hdev[10] & 0x400) == 0) )
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
      if ( (flSurface & 1) != 0 )
        v19 = v18 | 0x20;
      else
        v19 = v18 & 0xFFDF;
      *(_WORD *)(v11 + 102) = v19;
      v20 = *(_DWORD *)(v11 + 112);
      if ( (flSurface & 2) != 0 )
        v21 = v20 | 0x200;
      else
        v21 = v20 & 0xFFFFFDFF;
      *(_DWORD *)(v11 + 112) = v21;
      v22 = *(_DWORD *)(v11 + 116);
      if ( (flSurface & 4) != 0 )
        v23 = v22 | 0x100;
      else
        v23 = v22 & 0xFFFFFEFF;
      *(_DWORD *)(v11 + 116) = v23;
      if ( (flSurface & 8) != 0 )
        v24 = v23 | 0x2000;
      else
        v24 = v23 & 0xFFFFDFFF;
      *(_DWORD *)(v11 + 116) = v24;
      *(_QWORD *)(v11 + 24) = dhsurf;
      *(_QWORD *)(v11 + 136) = 0LL;
      *(_QWORD *)(v11 + 48) = hdev;
      *(_QWORD *)(v11 + 40) = *((_QWORD *)hdev + 224);
      *(_DWORD *)(v11 + 112) = v15 | *(_DWORD *)(v11 + 112) & 0xFFFC4A10;
    }
  }
LABEL_23:
  if ( v11 )
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v11, 0LL);
  return v17;
}
