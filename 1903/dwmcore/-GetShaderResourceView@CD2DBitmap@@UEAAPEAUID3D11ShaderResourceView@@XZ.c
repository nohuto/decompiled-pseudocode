/*
 * XREFs of ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800BE760
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800BE7E0 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct ID3D11ShaderResourceView *__fastcall CD2DBitmap::GetShaderResourceView(CD2DBitmap *this)
{
  struct ID3D11ShaderResourceView **v1; // rdi
  struct ID3D11Resource *v3; // rdx
  bool v4; // cc
  __int64 v5; // rcx
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v6; // r8
  signed int ShaderResourceView; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (struct ID3D11ShaderResourceView **)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
    return *v1;
  v3 = (struct ID3D11Resource *)*((_QWORD *)this + 3);
  v11 = 0uLL;
  v12 = 0LL;
  if ( !v3 )
  {
    v9 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88982F04, 0x248u, 0LL);
    goto LABEL_11;
  }
  v4 = *((_DWORD *)this + 19) <= 1u;
  if ( *((_DWORD *)this + 19) > 1u )
  {
    LODWORD(v11) = *((_DWORD *)this + 20);
    HIDWORD(v11) = *((_DWORD *)this + 18);
    LODWORD(v12) = *((_DWORD *)this + 38);
    *(_QWORD *)((char *)&v11 + 4) = 5LL;
    HIDWORD(v12) = 1;
  }
  v5 = *((_QWORD *)this - 10);
  v6 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v11;
  if ( v4 )
    v6 = 0LL;
  ShaderResourceView = CD3DDeviceLevel1::CreateShaderResourceView(*(CD3DDeviceLevel1 **)(v5 + 24), v3, v6, v1);
  v9 = ShaderResourceView;
  if ( ShaderResourceView < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ShaderResourceView, 0x258u, 0LL);
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\D2DBitmap.h",
      (const char *)v9,
      v10);
  }
  return *v1;
}
