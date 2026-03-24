/*
 * XREFs of BgpGxParseBitmap @ 0x14094E848
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140192C14 (BgpGxProcessQrCodeBitmap.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     BgpGxDrawBitmapImage @ 0x140954520 (BgpGxDrawBitmapImage.c)
 * Callees:
 *     BgpGxCopyBitmapToRectangle @ 0x14094E8EC (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxRectangleDestroy @ 0x14094F21C (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x14095021C (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxParseBitmap(__int64 a1, _QWORD *a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  _DWORD *v6; // rdx
  __int64 v7; // rbx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 2) < 0x30u )
    return (unsigned int)-1073741811;
  v3 = (_DWORD *)(a1 + 14);
  if ( *(_WORD *)a1 != 19778 || *(_DWORD *)(a1 + 30) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = *(unsigned __int16 *)(a1 + 28);
    if ( (((_DWORD)v4 - 24) & 0xFFFFFFF7) != 0 || *v3 != 40 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      v9[0] = *(_DWORD *)(a1 + 18);
      v9[1] = *(_DWORD *)(a1 + 22);
      v5 = BgpGxRectangleCreate(v9, v4, &v10);
      if ( v5 < 0 )
      {
        if ( v10 )
          BgpGxRectangleDestroy(v10);
      }
      else
      {
        v6 = v3;
        v7 = v10;
        BgpGxCopyBitmapToRectangle(v10, v6);
        *a2 = v7;
      }
    }
  }
  return (unsigned int)v5;
}
