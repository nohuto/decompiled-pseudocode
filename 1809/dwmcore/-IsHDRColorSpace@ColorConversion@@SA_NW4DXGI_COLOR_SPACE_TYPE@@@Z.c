/*
 * XREFs of ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180187F74
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1800C6300 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexSh.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x180187D50 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ColorConversion::IsHDRColorSpace(enum DXGI_COLOR_SPACE_TYPE a1)
{
  const char *v1; // rax

  v1 = (const char *)&unk_180280F00;
  do
  {
    if ( *(_DWORD *)v1 == a1 )
      break;
    v1 += 4;
  }
  while ( v1 != "NoOp" );
  return v1 != "NoOp";
}
