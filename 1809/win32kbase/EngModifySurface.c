/*
 * XREFs of EngModifySurface @ 0x1C007FE60
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00FC080 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0081F54 (HmgShareLockIgnoreStockBit.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
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
  __int64 v12; // rax
  __int64 v13; // r10
  _BOOL8 v14; // r9
  int v15; // ecx
  HDEV v16; // rax
  FLONG v17; // r14d
  BOOL v18; // ecx
  BOOL v19; // ebx
  _BYTE v21[32]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]

  SURFREF::SURFREF((SURFREF *)v21);
  if ( !hdev
    || (v12 = HmgShareLockIgnoreStockBit(hsurf), v22 = v12, (v13 = v12) == 0)
    || (v14 = pvReserved == 0LL, (flSurface & 0xFFFFFFF0) != 0) )
  {
    v19 = 0;
    goto LABEL_24;
  }
  v15 = *(_DWORD *)(v12 + 112);
  if ( (v15 & 0x400000) == 0 && *(_WORD *)(v12 + 100) != 1 )
    LODWORD(v14) = 0;
  v16 = *(HDEV *)(v12 + 48);
  if ( v16 && v16 != hdev )
    LODWORD(v14) = 0;
  v17 = flHooks & 0xFFFFB7FF;
  if ( v15 < 0 && (((_DWORD)hdev[45] & 0x3B5EF) != v17 || ((_DWORD)hdev[10] & 0x400) == 0) )
    LODWORD(v14) = 0;
  if ( !pvScan0 || !lDelta )
  {
    v18 = 0;
    if ( (v17 & 0x29) == 0x29 )
      v18 = v14;
    v19 = dhsurf != 0LL && (flSurface & 1) != 0 && v18;
    if ( !v19 )
      goto LABEL_14;
    *(_QWORD *)(v13 + 80) = 0LL;
    *(_QWORD *)(v22 + 72) = 0LL;
    *(_DWORD *)(v22 + 88) = 0;
    v13 = v22;
    if ( *(_WORD *)(v22 + 100) == 1 )
      goto LABEL_14;
    *(_WORD *)(v22 + 100) = 3;
LABEL_13:
    v13 = v22;
LABEL_14:
    if ( v19 )
    {
      if ( (flSurface & 1) != 0 )
        *(_WORD *)(v13 + 102) |= 0x20u;
      else
        *(_WORD *)(v13 + 102) &= ~0x20u;
      if ( (flSurface & 2) != 0 )
        *(_DWORD *)(v22 + 112) |= 0x200u;
      else
        *(_DWORD *)(v22 + 112) &= ~0x200u;
      if ( (flSurface & 4) != 0 )
        *(_DWORD *)(v22 + 116) |= 0x100u;
      else
        *(_DWORD *)(v22 + 116) &= ~0x100u;
      if ( (flSurface & 8) != 0 )
        *(_DWORD *)(v22 + 116) |= 0x2000u;
      else
        *(_DWORD *)(v22 + 116) &= ~0x2000u;
      *(_QWORD *)(v22 + 24) = dhsurf;
      *(_QWORD *)(v22 + 136) = 0LL;
      *(_QWORD *)(v22 + 48) = hdev;
      *(_QWORD *)(v22 + 40) = *((_QWORD *)hdev + 225);
      *(_DWORD *)(v22 + 112) = v17 | *(_DWORD *)(v22 + 112) & 0xFFFC4A10;
    }
    goto LABEL_24;
  }
  v19 = 0;
  if ( (v17 & 0x1000) != 0 || (flSurface & 1) == 0 )
    v19 = v14;
  if ( v19 )
  {
    *(_QWORD *)(v13 + 80) = pvScan0;
    *(_DWORD *)(v22 + 88) = lDelta;
    *(_WORD *)(v22 + 100) = 0;
    if ( lDelta <= 0 )
    {
      *(_QWORD *)(v22 + 72) = (char *)pvScan0 + lDelta * (*(_DWORD *)(v22 + 60) - 1);
      *(_WORD *)(v22 + 102) &= ~1u;
    }
    else
    {
      *(_QWORD *)(v22 + 72) = pvScan0;
      *(_WORD *)(v22 + 102) |= 1u;
    }
    goto LABEL_13;
  }
LABEL_24:
  SURFREF::~SURFREF((SURFREF *)v21);
  return v19;
}
