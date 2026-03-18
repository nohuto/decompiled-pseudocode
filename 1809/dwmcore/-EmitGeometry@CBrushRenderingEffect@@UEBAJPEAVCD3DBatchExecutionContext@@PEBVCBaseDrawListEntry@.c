/*
 * XREFs of ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18005D080
 * Callers:
 *     <none>
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180007B68 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV?$span@$$CBG$0?0@gsl@@IPEAPEAX@Z @ 0x18003A860 (-AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV-$span@$$CBG$0-0@gsl@@IPEAPEAX@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18003BBF0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::EmitGeometry(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v7; // rax
  int v8; // r15d
  __int64 v9; // rcx
  int v10; // r12d
  int appended; // eax
  unsigned int v12; // ecx
  __int64 v13; // r8
  bool v14; // zf
  Windows::Foundation::Numerics *v15; // rdx
  double v16; // xmm3_8
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h]
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)a3 + 17);
  v7 = *(_QWORD *)(v4 + 48);
  v8 = *(_DWORD *)(*((_QWORD *)this + 2) + 96LL) & 4;
  v9 = *(unsigned int *)(v4 + 16);
  v19 = v9;
  v20 = v7;
  if ( v7 )
  {
    if ( v9 )
    {
      v10 = (*((_BYTE *)a2 + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)a2 + 19);
      appended = CD3DBatchExecutionContext::AppendGeometry((__int64)a2, (unsigned int *)&v19, *(_DWORD *)(v4 + 8), &v21);
      v3 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, appended, 0x31u);
      }
      else
      {
        v14 = *((_BYTE *)a2 + 72) == 0;
        v15 = (const struct CBaseDrawListEntry *)((char *)a3 + 56);
        *(_QWORD *)&v16 = *((unsigned int *)a3 + 13);
        HIDWORD(v20) = *(_DWORD *)(v4 + 8);
        LODWORD(v20) = v10;
        if ( v14 )
        {
          v19 = v21;
          TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v4, (__int64)v15, v13, v16, &v19);
        }
        else
        {
          v18 = (struct Windows::Foundation::Numerics::float4x4 *)v21;
          v19 = v21;
          LOBYTE(v18) = v8 != 0;
          TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
            (CDrawListPrimitive *)v4,
            v15,
            v18,
            *(float *)&v16,
            &v19);
        }
      }
    }
  }
  else if ( v9 )
  {
    gsl::details::terminate((gsl::details *)v9);
    __debugbreak();
  }
  return v3;
}
