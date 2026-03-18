/*
 * XREFs of ?SetData@?$CTypedConstantBuffer@V?$array@M$07@std@@@@QEAAXAEBV?$array@M$07@std@@@Z @ 0x18022D1E4
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1800C5830 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexSha.c)
 * Callees:
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 */

int __fastcall CTypedConstantBuffer<std::array<float,8>>::SetData(__int64 a1, _OWORD *a2)
{
  int result; // eax
  __int128 v5; // xmm1

  result = memcmp_0(a2, (const void *)(a1 + 16), 0x20uLL);
  if ( result )
  {
    *(_OWORD *)(a1 + 16) = *a2;
    v5 = a2[1];
    *(_BYTE *)(a1 + 8) = 1;
    *(_OWORD *)(a1 + 32) = v5;
  }
  return result;
}
