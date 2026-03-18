/*
 * XREFs of ??0?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitive@@M_NAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801B346C
 * Callers:
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BBD08 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>::CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        float a3,
        char a4,
        __int64 a5)
{
  int v5; // esi
  __int64 v6; // rbx
  int v7; // r11d
  __int64 v8; // r8
  int v9; // edi
  int v10; // r10d

  v5 = *(_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = 8 * v5 + 16;
  v10 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 20) = v10;
  *(_QWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 32) = v9;
  *(_DWORD *)(a1 + 36) = v7;
  *(_DWORD *)(a1 + 40) = v5;
  *(float *)(a1 + 44) = a3;
  *(_BYTE *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)a5;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a5 + 12);
  return a1;
}
