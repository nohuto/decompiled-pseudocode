/*
 * XREFs of ?SetHardwareProtection@CHwSurfaceRenderTarget@@UEAAJ_N@Z @ 0x1802011F0
 * Callers:
 *     ?SetHardwareProtection@CHwTextureRenderTarget@@UEAAJ_N@Z @ 0x180203460 (-SetHardwareProtection@CHwTextureRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::SetHardwareProtection(CHwSurfaceRenderTarget *this, char a2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  if ( a2 != (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 144LL))(this) )
  {
    v2 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003304315, 0x39u);
  }
  return v2;
}
