/*
 * XREFs of ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18003ADA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180007B68 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV?$span@$$CBG$0?0@gsl@@IPEAPEAX@Z @ 0x18003A860 (-AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV-$span@$$CBG$0-0@gsl@@IPEAPEAX@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18003BBF0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CCommonRenderingEffect::EmitGeometry(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r14d
  int appended; // eax
  unsigned int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  bool v15; // zf
  Windows::Foundation::Numerics *v16; // rdx
  float v17; // xmm3_4
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v3 = *((_QWORD *)a3 + 17);
  v4 = 0;
  v7 = *(_QWORD *)(v3 + 48);
  v8 = *(unsigned int *)(v3 + 16);
  v19 = v8;
  v20 = v7;
  if ( v7 )
  {
    if ( v8 )
    {
      v9 = 16;
      if ( *((_BYTE *)a2 + 72) )
        v9 = 48;
      v10 = v9 + 8 * *((_DWORD *)a2 + 19);
      appended = CD3DBatchExecutionContext::AppendGeometry((__int64)a2, (unsigned int *)&v19, *(_DWORD *)(v3 + 8), &v21);
      v4 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, appended, 0x31u);
      }
      else
      {
        v15 = *((_BYTE *)a2 + 72) == 0;
        v16 = (const struct CBaseDrawListEntry *)((char *)a3 + 56);
        v17 = *((float *)a3 + 13);
        HIDWORD(v20) = *(_DWORD *)(v3 + 8);
        LODWORD(v20) = v10;
        v19 = v21;
        if ( v15 )
          TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v3, (_DWORD)v16, v13, v14, (__int64)&v19);
        else
          TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
            (CDrawListPrimitive *)v3,
            v16,
            0LL,
            v17,
            &v19);
      }
    }
  }
  else if ( v8 )
  {
    gsl::details::terminate((gsl::details *)v8);
    __debugbreak();
  }
  return v4;
}
