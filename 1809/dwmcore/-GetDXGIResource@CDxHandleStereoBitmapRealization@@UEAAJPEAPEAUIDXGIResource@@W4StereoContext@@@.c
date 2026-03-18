/*
 * XREFs of ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180228310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18001F7E0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18001F844 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180228170 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x180228698 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDXGIResource(
        CD2DBitmap **a1,
        struct IDXGIResource **a2,
        unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  int DXGIResource; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(a1, a3) )
  {
    DXGIResource = CDxHandleBitmapRealization::GetDXGIResource(a1, a2);
    v9 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DXGIResource, 0xD4u);
  }
  else
  {
    v10 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(a1, v5, v6);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xD8u);
    }
    else
    {
      v12 = CD2DBitmap::GetDXGIResource(a1[54], a2);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xDAu);
    }
  }
  return v9;
}
