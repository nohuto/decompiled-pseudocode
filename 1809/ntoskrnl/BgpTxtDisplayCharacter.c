/*
 * XREFs of BgpTxtDisplayCharacter @ 0x14017A014
 * Callers:
 *     BgpDisplayCharacterEx @ 0x140327A64 (BgpDisplayCharacterEx.c)
 *     AnFwDisplayProgressIndicator @ 0x14095229C (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409523F0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409550A8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     BgpGxDrawRectangle @ 0x14016EF30 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14016F2E0 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14016F4C8 (BgpGxConvertRectangleEx.c)
 *     BgpFoGetTextMetrics @ 0x14016F7E4 (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x14016FA28 (BgpGxFillRectangle.c)
 *     TxtpGetCacheEntry @ 0x14017A250 (TxtpGetCacheEntry.c)
 *     BgpRasPrintGlyph @ 0x14017A2D4 (BgpRasPrintGlyph.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 *     TxtpAddCacheEntry @ 0x140952524 (TxtpAddCacheEntry.c)
 *     BgpGxBlendRectangle @ 0x140955208 (BgpGxBlendRectangle.c)
 *     TxtpJustifyRectangle @ 0x1409557C0 (TxtpJustifyRectangle.c)
 */

__int64 BgpTxtDisplayCharacter(__int64 a1, unsigned __int16 a2, char a3, _DWORD *a4, _DWORD *a5, ...)
{
  int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rcx
  unsigned int *v10; // r8
  char v11; // r15
  int v12; // r13d
  char v13; // r15
  int v14; // edi
  char v15; // r14
  int *v16; // rsi
  __int64 CacheEntry; // rax
  __int64 result; // rax
  __int64 v19; // r14
  int v20; // ecx
  int v21; // eax
  unsigned int BitsPerPixel; // eax
  __int64 v23; // r11
  int v24; // eax
  int v25; // [rsp+58h] [rbp-51h]
  int v26; // [rsp+60h] [rbp-49h] BYREF
  int v27; // [rsp+64h] [rbp-45h]
  int v28; // [rsp+68h] [rbp-41h] BYREF
  __int64 v29; // [rsp+70h] [rbp-39h]
  int v30; // [rsp+78h] [rbp-31h]
  int v31; // [rsp+7Ch] [rbp-2Dh]
  __int64 v32; // [rsp+80h] [rbp-29h] BYREF
  __int64 v33; // [rsp+88h] [rbp-21h] BYREF
  __int64 v34; // [rsp+90h] [rbp-19h]
  __int64 v35; // [rsp+98h] [rbp-11h]
  __int64 v40; // [rsp+120h] [rbp+77h] BYREF
  va_list va; // [rsp+120h] [rbp+77h]
  va_list va1; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v40 = va_arg(va1, _QWORD);
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v35 = *(_QWORD *)(a1 + 24);
  v9 = 0LL;
  v25 = 0;
  v26 = 0;
  v10 = (unsigned int *)(a1 + 40);
  v11 = *(_BYTE *)(a1 + 60);
  v12 = 0;
  v27 = 0;
  v13 = v11 & 1;
  v30 = 0;
  v14 = 0;
  v31 = 0;
  v15 = v13;
  v16 = *(int **)(a1 + 32);
  v29 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  LOBYTE(v40) = 0;
  v34 = a1 + 40;
  v28 = 0;
  if ( a2 < 0x20u )
    goto LABEL_12;
  if ( v13 )
  {
    CacheEntry = TxtpGetCacheEntry(&TxtpTextCache);
    v29 = CacheEntry;
    if ( CacheEntry )
    {
      v7 = *(_QWORD *)(CacheEntry + 48);
      v15 = 0;
      goto LABEL_5;
    }
  }
  BgpGxFillRectangle((__int64)v16, *v10);
  v19 = v34;
  v31 = v16[1];
  v30 = *v16;
  v21 = BgpRasPrintGlyph(v20, v34, a2, v26, v27, 1, (__int64)&v28);
  v14 = v21;
  if ( v21 < 0 )
  {
    DbgPrintEx(0x65u, 0, "BGFX internal font error %x char %x!\n", v21, a2);
    v12 = v28;
    v6 = 0;
    v15 = v13;
    goto LABEL_11;
  }
  v12 = v28;
  if ( !v13 )
  {
    result = BgpFoGetTextMetrics(v19, (__int64)va);
    v14 = result;
    if ( (int)result < 0 )
      return result;
    v25 = HIDWORD(v40);
    *v16 = HIDWORD(v40);
    v16[1] = v12;
    LOBYTE(v40) = 1;
  }
  if ( v35 )
  {
    TxtpJustifyRectangle(a1, a1 + 8, &v26);
    v24 = BgpGxBlendRectangle(v23, v16, &v26, &v32);
    v7 = v32;
    v14 = v24;
    v15 = v13;
    if ( v24 < 0 )
      goto LABEL_10;
  }
  else
  {
    v7 = (__int64)v16;
  }
  v15 = v13;
  if ( !v13 )
    goto LABEL_5;
  BitsPerPixel = BgpGetBitsPerPixel();
  if ( (int *)v7 != v16 && BitsPerPixel == *(_DWORD *)(v7 + 8) )
  {
    v8 = v7;
LABEL_32:
    v15 = v13;
LABEL_5:
    v27 = *(_DWORD *)(a1 + 4);
    v26 += *(_DWORD *)a1;
    if ( (a3 & 1) != 0 || (dword_140406AD0 & 0x1000000) != 0 || (v14 = BgpGxDrawRectangle(v7, (__int64)&v26), v14 >= 0) )
    {
      if ( v15 )
        v14 = TxtpAddCacheEntry(&TxtpTextCache, a2, v34, v8);
    }
    goto LABEL_10;
  }
  v14 = BgpGxConvertRectangleEx(v7, BitsPerPixel, &v33, 0);
  v15 = v13;
  if ( v14 >= 0 )
  {
    if ( (int *)v7 != v16 )
      BgpGxRectangleDestroy(v7);
    v8 = v33;
    v7 = v33;
    goto LABEL_32;
  }
LABEL_10:
  v6 = v25;
LABEL_11:
  v9 = v29;
LABEL_12:
  if ( a4 )
    *a4 = v12;
  if ( a5 )
    *a5 = v6;
  if ( (int *)v7 != v16 && !v9 && (!v15 || v14 < 0) && v7 )
    BgpGxRectangleDestroy(v7);
  if ( (_BYTE)v40 )
  {
    *v16 = v30;
    v16[1] = v31;
  }
  return (unsigned int)v14;
}
