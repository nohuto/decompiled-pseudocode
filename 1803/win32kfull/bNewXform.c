/*
 * XREFs of bNewXform @ 0x1C0222920
 * Callers:
 *     ttfdOpenFontContextInternal @ 0x1C0223254 (ttfdOpenFontContextInternal.c)
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C007F260 (XFORMOBJ_iGetXform.c)
 *     bComputeMaxGlyph @ 0x1C0221F34 (bComputeMaxGlyph.c)
 *     bFloatToL @ 0x1C0222634 (bFloatToL.c)
 *     vCheckForSingularXform @ 0x1C022354C (vCheckForSingularXform.c)
 */

__int64 __fastcall bNewXform(XFORMOBJ *a1, __int64 a2)
{
  int v3; // r8d
  int v4; // r9d
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  XFORMOBJ_iGetXform(a1 + 52, (XFORML *)(a2 + 56));
  if ( !(unsigned int)bFloatToL(*(float *)(a2 + 56), &v9) )
    return 0LL;
  if ( !(unsigned int)bFloatToL(*(float *)(a2 + 68), &v10) )
    return 0LL;
  if ( !(unsigned int)bFloatToL(*(float *)(a2 + 60), &v11) )
    return 0LL;
  if ( !(unsigned int)bFloatToL(*(float *)(a2 + 64), &v12) )
    return 0LL;
  v3 = v11;
  v4 = v9;
  v5 = v12;
  v6 = v10;
  *(_DWORD *)(a2 + 84) = -v11;
  *(_DWORD *)(a2 + 80) = v4;
  *(_DWORD *)(a2 + 92) = -v5;
  *(_DWORD *)(a2 + 96) = v6;
  if ( !(v4 | v3) || !(v4 | v5) || !(v6 | v5) || !(v6 | v3) )
    return 0LL;
  *(_DWORD *)(a2 + 112) = 0x40000000;
  v7 = 0;
  *(_DWORD *)(a2 + 88) = 0;
  *(_QWORD *)(a2 + 100) = 0LL;
  *(_DWORD *)(a2 + 108) = 0;
  *(_DWORD *)(a2 + 116) = 0;
  if ( !v3 && !v5 )
  {
    *(_DWORD *)(a2 + 116) = 1;
    v7 = 1;
  }
  if ( !v4 && !v6 )
    *(_DWORD *)(a2 + 116) = v7 | 2;
  vCheckForSingularXform(a2);
  *(_DWORD *)(a2 + 32) = 1;
  *(_DWORD *)(a2 + 16) = -1;
  *(_DWORD *)(a2 + 20) = -1;
  *(_QWORD *)(a2 + 24) = 0LL;
  return bComputeMaxGlyph(a2);
}
