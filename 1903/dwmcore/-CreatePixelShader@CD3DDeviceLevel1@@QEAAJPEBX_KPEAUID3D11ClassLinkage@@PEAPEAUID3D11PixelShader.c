/*
 * XREFs of ?CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800CF4E4
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800CF384 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x180162798 (-EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreatePixelShader(
        CD3DDeviceLevel1 *this,
        const void *a2,
        __int64 a3,
        struct ID3D11ClassLinkage *a4,
        struct ID3D11PixelShader **a5)
{
  int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  *a5 = 0LL;
  v6 = *((_DWORD *)this + 220);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v6, 0x5BEu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const void *, __int64, _QWORD, struct ID3D11PixelShader **))(**((_QWORD **)this + 79) + 120LL))(
           *((_QWORD *)this + 79),
           a2,
           a3,
           0LL,
           a5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x5C3u, 0LL);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 0);
}
