/*
 * XREFs of GreGetDIBColorTable @ 0x1C0125780
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C01258C4 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C01258E4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0126004 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v12; // ebx
  ULONG v13; // ecx
  _QWORD v14[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h]
  int v17; // [rsp+48h] [rbp-38h]
  _QWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+78h] [rbp-8h]
  __int64 v23; // [rsp+B8h] [rbp+38h] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( !a4 )
  {
    v13 = 87;
    goto LABEL_21;
  }
  if ( !v14[0] )
  {
    v13 = 6;
LABEL_21:
    EngSetLastError(v13);
    goto LABEL_9;
  }
  v18[1] = 0LL;
  v15 = 0LL;
  v19 = 256;
  v16 = 0LL;
  v17 = 0;
  v18[0] = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v15, (struct XDCOBJ *)v14);
  v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v14);
  if ( !(unsigned int)SURFACE::bDIBSection(v8) && !*(_QWORD *)(v10 + 128)
    || (unsigned int)(*(_DWORD *)(v9 + 96) - 1) > 2 )
  {
    EngSetLastError(6u);
LABEL_7:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v15);
    if ( v18[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v18);
    goto LABEL_9;
  }
  v23 = *(_QWORD *)(v9 + 128);
  v12 = *(_DWORD *)(v23 + 28);
  if ( a2 < v12 )
  {
    if ( a2 + a3 <= v12 )
      v12 = a2 + a3;
    v7 = v12 - a2;
    XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v23, a4, a2, v7);
    goto LABEL_7;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v15);
  if ( v18[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v18);
  v7 = 0;
LABEL_9:
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v7;
}
