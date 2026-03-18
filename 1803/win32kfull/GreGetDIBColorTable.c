/*
 * XREFs of GreGetDIBColorTable @ 0x1C00ACDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0017C7C (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00AB5CC (-bDIBSection@SURFACE@@QEAAHXZ.c)
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
  __int64 v18; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+5Ch] [rbp-24h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+B8h] [rbp+38h] BYREF

  v7 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v14, a1);
  if ( !a4 )
  {
    v13 = 87;
    goto LABEL_18;
  }
  if ( !v14[0] )
  {
    v13 = 6;
LABEL_18:
    EngSetLastError(v13);
    goto LABEL_8;
  }
  v19 = 0;
  v20 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v15 = 0LL;
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v15, (struct XDCOBJ *)v14);
  v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v14);
  if ( !(unsigned int)SURFACE::bDIBSection(v8) && !*(_QWORD *)(v10 + 128)
    || (unsigned int)(*(_DWORD *)(v9 + 96) - 1) > 2 )
  {
    EngSetLastError(6u);
LABEL_7:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v15);
    goto LABEL_8;
  }
  v24 = *(_QWORD *)(v9 + 128);
  v12 = *(_DWORD *)(v24 + 28);
  if ( a2 < v12 )
  {
    if ( a2 + a3 <= v12 )
      v12 = a2 + a3;
    v7 = v12 - a2;
    XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v24, a4, a2, v7);
    goto LABEL_7;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v15);
  v7 = 0;
LABEL_8:
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v7;
}
