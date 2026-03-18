/*
 * XREFs of DpiRectContainsRectWithSubpixel @ 0x1C01E6C70
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00C4E50 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z @ 0x1C01E58A4 (-GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z.c)
 */

_BOOL8 __fastcall DpiRectContainsRectWithSubpixel(
        __m128i *a1,
        float *a2,
        struct tagWND *a3,
        __m128i *a4,
        float *a5,
        struct tagWND *a6)
{
  _BOOL8 result; // rax
  float v8; // [rsp+40h] [rbp-20h] BYREF
  float v9; // [rsp+44h] [rbp-1Ch] BYREF
  float v10; // [rsp+48h] [rbp-18h] BYREF
  float v11; // [rsp+4Ch] [rbp-14h] BYREF
  float v12; // [rsp+50h] [rbp-10h] BYREF
  float v13; // [rsp+54h] [rbp-Ch] BYREF
  float v14; // [rsp+58h] [rbp-8h] BYREF
  float v15; // [rsp+5Ch] [rbp-4h] BYREF

  GetDpiRectWithSubpixel(a1, a2, a6, a3, &v8, &v10, &v12, &v14);
  GetDpiRectWithSubpixel(a4, a5, a6, a6, &v9, &v11, &v13, &v15);
  result = 0LL;
  if ( v9 >= (float)(v8 - 0.001) && v11 >= (float)(v10 - 0.001) && (float)(v12 + 0.001) >= v13 )
    return (float)(v14 + 0.001) >= v15;
  return result;
}
