/*
 * XREFs of ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x180023DB8
 * Callers:
 *     ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x180023D3C (-IsRenderTarget@CD3DTexture@@AEBA_NXZ.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180264050 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetDXGIResource(CD3DTexture *this, struct IDXGIResource **a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  *a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 32LL))(this) )
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 15))(
           *((_QWORD *)this + 15),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1B8u, 0LL);
  }
  else
  {
    v7 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003292412, 0x1B3u, 0LL);
  }
  return v7;
}
