/*
 * XREFs of GreSetBrushOrg @ 0x1C009FA48
 * Callers:
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     xxxPaintRect @ 0x1C009F974 (xxxPaintRect.c)
 *     NtGdiSetBrushOrg @ 0x1C00FE7B0 (NtGdiSetBrushOrg.c)
 *     MNEraseBackground @ 0x1C02086EC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C020881C (xxxMNDrawFullNC.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+2Ch] [rbp-Ch]

  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v14, a1);
  v7 = v14;
  if ( v14 )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v14 + 132);
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 80) + 380LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v7 + 80) + 384LL) = a3;
    v9 = *(_DWORD *)(v7 + 40);
    *(_DWORD *)(v7 + 132) = a2;
    *(_DWORD *)(v7 + 136) = a3;
    v10 = v9 & 1;
    if ( v10 )
      v11 = *(_DWORD *)(v7 + 1432);
    else
      v11 = *(_DWORD *)(v7 + 1424);
    *(_DWORD *)(v7 + 1584) = a2 + v11;
    if ( v10 )
      v12 = *(_DWORD *)(v7 + 1436);
    else
      v12 = *(_DWORD *)(v7 + 1428);
    *(_DWORD *)(v7 + 1588) = a3 + v12;
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  if ( v7 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
  return v8;
}
