/*
 * XREFs of ?FromKey@VertexShaderDesc@@SA?AU1@W4Enum@VertexShaderKey@@@Z @ 0x180189A24
 * Callers:
 *     ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x180187BB0 (-SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertexShaderDesc::FromKey(unsigned int a1)
{
  int v1; // eax
  __int64 v3; // [rsp+10h] [rbp+10h]

  LODWORD(v3) = a1 - 3 <= 2;
  if ( a1 > 6 || (v1 = 73, BYTE2(v3) = 0, !_bittest(&v1, a1)) )
    BYTE2(v3) = 1;
  if ( a1 == 2 || (HIDWORD(v3) = 2, a1 == 5) )
    HIDWORD(v3) = 4;
  BYTE1(v3) = a1 - 6 <= 1;
  return v3;
}
