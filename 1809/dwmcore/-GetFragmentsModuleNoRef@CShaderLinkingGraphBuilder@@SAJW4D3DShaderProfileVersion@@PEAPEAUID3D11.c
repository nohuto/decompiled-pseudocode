/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800E30E8
 * Callers:
 *     LoadShaderBody @ 0x1800E2B0C (LoadShaderBody.c)
 *     UseFragmentsModuleNoRef @ 0x1800E315C (UseFragmentsModuleNoRef.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18022B044 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(__int64 a1, struct ID3D11Module **a2)
{
  unsigned int v2; // ebx
  struct ID3D11Module *v4; // rax
  HRESULT v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !(_BYTE)a1 )
  {
    v4 = qword_18030C5C8;
    if ( qword_18030C5C8 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_1802BFA70, 0x21542uLL, &qword_18030C5C8);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_18030C5C8;
      goto LABEL_4;
    }
    v8 = 292;
    goto LABEL_13;
  }
  if ( (unsigned __int8)a1 != 1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x138u);
    return v2;
  }
  v4 = qword_18030BC30;
  if ( !qword_18030BC30 )
  {
    v6 = D3DLoadModule(&unk_18024C940, 0x29836uLL, &qword_18030BC30);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_18030BC30;
      goto LABEL_4;
    }
    v8 = 304;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v8);
    return v2;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}
