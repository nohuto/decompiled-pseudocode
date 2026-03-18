/*
 * XREFs of ?SetHardwareProtection@CHwSurfaceRenderTarget@@UEAAJ_N@Z @ 0x1801623D0
 * Callers:
 *     ?SetHardwareProtection@CHwTextureRenderTarget@@UEAAJ_N@Z @ 0x180162430 (-SetHardwareProtection@CHwTextureRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::SetHardwareProtection(CHwSurfaceRenderTarget *this, char a2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  if ( a2 != (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 144LL))(this) )
  {
    v2 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, 0x88980085, 0x39u, 0LL);
  }
  return v2;
}
