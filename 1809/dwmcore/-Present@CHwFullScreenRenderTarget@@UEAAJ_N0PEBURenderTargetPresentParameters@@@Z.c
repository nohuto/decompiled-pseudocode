/*
 * XREFs of ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007CC80
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180209480 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?UpdateBackBuffer@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x18007CD68 (-UpdateBackBuffer@CHwFullScreenRenderTarget@@IEAAJXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007CE04 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Present(
        CHwFullScreenRenderTarget *this,
        _BOOL8 a2,
        bool a3,
        const struct RenderTargetPresentParameters *a4)
{
  CHwFullScreenRenderTarget *v4; // rsi
  bool v8; // bp
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // edi
  int updated; // eax
  unsigned int v16; // ecx
  int v17; // edi
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF
  char v20; // [rsp+60h] [rbp+8h] BYREF

  v4 = (CHwFullScreenRenderTarget *)((char *)this - 208);
  v8 = a2;
  v9 = 0;
  if ( (*(int (__fastcall **)(char *, _BOOL8, char *, _BYTE *))(*((_QWORD *)this - 26) + 272LL))(
         (char *)this - 208,
         a2,
         &v20,
         v19) >= 0 )
  {
    if ( v20 )
    {
      if ( (v19[0] & 2) == 0 && !*((_BYTE *)this + 355) )
      {
        v10 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 248LL))(this);
        v9 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x8Cu);
      }
    }
  }
  v12 = CHwDisplayRenderTarget::Present(this, v8, a3, a4);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA0u);
  if ( !v9 || v9 >= 0 && v14 < 0 )
    v9 = v14;
  updated = CHwFullScreenRenderTarget::UpdateBackBuffer(v4);
  v17 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0xA2u);
  if ( !v9 || v9 >= 0 && v17 < 0 )
    return (unsigned int)v17;
  return (unsigned int)v9;
}
