/*
 * XREFs of lQueryTTOutline @ 0x1C021DB14
 * Callers:
 *     lQueryTrueTypeOutlineVertical @ 0x1C021DD38 (lQueryTrueTypeOutlineVertical.c)
 *     ttfdQueryGlyphOutline @ 0x1C021DE2C (ttfdQueryGlyphOutline.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C021DF80 (ttfdQueryQuadTrueTypeOutline.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     cjFillPolygon @ 0x1C021D6BC (cjFillPolygon.c)
 *     lQuerySingularTrueTypeOutline @ 0x1C021DA94 (lQuerySingularTrueTypeOutline.c)
 *     bGetGlyphOutline @ 0x1C021E60C (bGetGlyphOutline.c)
 *     vFillGLYPHDATA @ 0x1C0221048 (vFillGLYPHDATA.c)
 *     vShiftBitmapInfo @ 0x1C02241C8 (vShiftBitmapInfo.c)
 *     vShiftOutlineInfo @ 0x1C0224288 (vShiftOutlineInfo.c)
 *     fs_FindBitMapSize @ 0x1C02B0CCC (fs_FindBitMapSize.c)
 */

__int64 __fastcall lQueryTTOutline(
        __int64 a1,
        int a2,
        unsigned int a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        _WORD *a8)
{
  int v8; // eax
  int v10; // esi
  int v11; // edi
  unsigned int v14; // eax
  unsigned int v15; // ebp
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  _BYTE *v22; // r9
  int v23; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-134h]
  _BYTE v25[8]; // [rsp+48h] [rbp-130h] BYREF
  _BYTE v26[240]; // [rsp+50h] [rbp-128h] BYREF

  v8 = *(_DWORD *)(a1 + 116);
  v10 = *(_DWORD *)(a1 + 20);
  v11 = a3;
  v24 = a2;
  v23 = v10;
  if ( (v8 & 8) != 0 )
    return lQuerySingularTrueTypeOutline(a1, a3, a6);
  if ( *(_DWORD *)(a1 + 16) != a3 || a5 || *(_DWORD *)(a1 + 32) )
  {
    if ( !(unsigned int)bGetGlyphOutline(a1, a3, (unsigned int)&v23, a5 != 0 ? 2 : 0, (__int64)v25) )
      return 0xFFFFFFFFLL;
    v10 = v23;
    a2 = v24;
    *(_DWORD *)(a1 + 32) = 0;
  }
  if ( (a4 & 1) != 0 )
  {
    v15 = 0;
  }
  else
  {
    v14 = cjFillPolygon(a1, a2, a8, a7);
    v15 = v14;
    if ( v14 == -1 )
      return 0xFFFFFFFFLL;
    if ( v14 && a8 && *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
    {
      v16 = *(_DWORD *)(a1 + 20);
      v17 = *(_QWORD *)(a1 + 184);
      v18 = *(_QWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 20) = v10;
      *(_DWORD *)(a1 + 32) = 1;
      if ( (unsigned int)fs_FindBitMapSize(v18, v17) )
      {
LABEL_16:
        EngSetLastError(0x3EBu);
        return 0xFFFFFFFFLL;
      }
      vShiftOutlineInfo(a1, v24, a8, v15);
      *(_DWORD *)(a1 + 20) = v16;
    }
  }
  if ( a6 )
  {
    if ( !*(_DWORD *)(a1 + 32) )
    {
      v19 = *(_QWORD *)(a1 + 184);
      v20 = *(_QWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 32) = 1;
      if ( (unsigned int)fs_FindBitMapSize(v20, v19) )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
    {
      vShiftBitmapInfo(a1, v26, *(_QWORD *)(a1 + 184));
      v21 = *(_DWORD *)(a1 + 312);
      v22 = v26;
    }
    else
    {
      v22 = *(_BYTE **)(a1 + 184);
      v21 = v11;
    }
    vFillGLYPHDATA(v21, v10, a1, (_DWORD)v22, a6, 0LL, 0LL);
  }
  if ( a5 )
  {
    *(_DWORD *)(a1 + 32) = 1;
    *(_DWORD *)(a1 + 20) = -1;
    v11 = -1;
  }
  else
  {
    *(_DWORD *)(a1 + 20) = v10;
  }
  *(_DWORD *)(a1 + 16) = v11;
  return v15;
}
