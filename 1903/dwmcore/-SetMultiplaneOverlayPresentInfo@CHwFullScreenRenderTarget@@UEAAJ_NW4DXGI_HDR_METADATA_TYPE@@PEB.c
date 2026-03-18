/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x1800BD160
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetMultiplaneOverlayPresentInfo(
        CHwFullScreenRenderTarget *this,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  signed int v12; // eax
  __int64 v13; // rcx

  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 32LL))((char *)this - 144) )
  {
    LOBYTE(v11) = a2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const void *, unsigned int, struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *))(**((_QWORD **)this + 4) + 224LL))(
            *((_QWORD *)this + 4),
            v11,
            a3,
            a4,
            a5,
            a6);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x22Fu, 0LL);
  }
  return v10;
}
