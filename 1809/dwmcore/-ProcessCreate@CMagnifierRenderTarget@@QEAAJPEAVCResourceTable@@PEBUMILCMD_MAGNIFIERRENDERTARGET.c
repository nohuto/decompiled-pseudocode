/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x18015D690
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180176404 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_CREATE *a3)
{
  int updated; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _OWORD *v8; // rcx

  *((_QWORD *)this + 44) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((enum DXGI_FORMAT *)a3 + 5));
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x57u);
  }
  else
  {
    v8 = (_OWORD *)((char *)a3 + 16);
    *((_DWORD *)this + 90) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 91) = *((_DWORD *)a3 + 7);
    if ( *((_DWORD *)a3 + 4) <= 6u )
    {
      *((_OWORD *)this + 25) = *v8;
      *((_OWORD *)this + 26) = *((_OWORD *)a3 + 2);
      *((_OWORD *)this + 27) = *((_OWORD *)a3 + 3);
      *((_OWORD *)this + 28) = *((_OWORD *)a3 + 4);
      *((_OWORD *)this + 29) = *((_OWORD *)a3 + 5);
      *((_OWORD *)this + 30) = *((_OWORD *)a3 + 6);
      *((_OWORD *)this + 31) = *((_OWORD *)a3 + 7);
      *((_OWORD *)this + 32) = *((_OWORD *)a3 + 8);
      *((_OWORD *)this + 33) = *((_OWORD *)a3 + 9);
      *((_OWORD *)this + 34) = *((_OWORD *)a3 + 10);
      *((_OWORD *)this + 35) = *((_OWORD *)a3 + 11);
      *((_OWORD *)this + 36) = *((_OWORD *)a3 + 12);
      *((_OWORD *)this + 37) = *((_OWORD *)a3 + 13);
    }
    else
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, -2147024809, 0x5Eu);
    }
  }
  return v7;
}
