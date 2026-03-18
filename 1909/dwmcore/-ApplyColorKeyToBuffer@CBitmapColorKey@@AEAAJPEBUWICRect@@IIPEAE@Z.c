/*
 * XREFs of ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x18025FDA4
 * Callers:
 *     ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x18025FB8C (-ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 *     ?CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18025FED0 (-CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ApplyRangeColorKey@TGpCC@@@@YAXPEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x18025F674 (--$ApplyRangeColorKey@TGpCC@@@@YAXPEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@TGpCCR@@@@YAXPEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z @ 0x18025F720 (--$ApplyRangeColorKey@TGpCCR@@@@YAXPEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXPEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x18025F7CC (--$ApplyRangeColorKey@UGpCCRf16@@@@YAXPEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z.c)
 *     ??$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXPEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z @ 0x18025F93C (--$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXPEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBuffer(
        CBitmapColorKey *this,
        const struct WICRect *a2,
        __int64 a3,
        int a4,
        unsigned __int8 *a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  bool v8; // zf
  int *v9; // rdx
  int *v10; // rdx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v6 = 0;
  v7 = *((_DWORD *)this + 10);
  switch ( v7 )
  {
    case 2:
      ApplyRangeColorKey<_D3DCOLORVALUE>((__int64)a2, a3, a3, (__int64)a5, (float *)this + 18, (float *)this + 26);
      break;
    case 10:
      ApplyRangeColorKey<GpCCRf16>(
        (__int64)a2,
        a3,
        a3,
        (__int64)a5,
        (unsigned __int16 *)this + 32,
        (unsigned __int16 *)this + 48);
      break;
    case 28:
      v8 = *((_BYTE *)this + 52) == 0;
      v10 = &v12;
      v12 = -16777216;
      if ( !v8 )
        v10 = 0LL;
      ApplyRangeColorKey<GpCCR>(
        (__int64)a2,
        a3,
        a3,
        (__int64)a5,
        (unsigned __int8 *)this + 60,
        (unsigned __int8 *)this + 92,
        (__int64)v10);
      break;
    default:
      if ( (unsigned int)(v7 - 87) > 1 )
      {
        v6 = -2003292288;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x88982F80, 0x312u, 0LL);
      }
      else
      {
        v8 = *((_BYTE *)this + 52) == 0;
        v9 = &v12;
        v12 = -16777216;
        if ( !v8 )
          v9 = 0LL;
        ApplyRangeColorKey<GpCC>(
          (__int64)a2,
          a3,
          a3,
          (__int64)a5,
          (unsigned __int8 *)this + 56,
          (unsigned __int8 *)this + 88,
          (__int64)v9);
      }
      break;
  }
  return v6;
}
