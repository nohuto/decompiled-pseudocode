/*
 * XREFs of ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x1800470A0
 * Callers:
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180046FAC (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800B8FBC (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 * Callees:
 *     ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x1800470E8 (-HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180047160 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrCheckBufferSize(enum DXGI_FORMAT a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  int v9; // eax
  unsigned int v10; // ebx
  void *v12; // [rsp+28h] [rbp-20h]
  unsigned int v13[6]; // [rsp+30h] [rbp-18h] BYREF

  v13[0] = 0;
  PixelFormatSize = GetPixelFormatSize(a1);
  v9 = HrCalcRequiredBufferSizeWorker(PixelFormatSize, v6, v7, v8, v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x399u, v12);
  }
  else if ( v13[0] > a5 )
  {
    v10 = -2003292276;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292276, 0x39Du, v12);
  }
  return v10;
}
