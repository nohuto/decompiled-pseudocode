/*
 * XREFs of ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800BC3E8
 * Callers:
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1800BC3C0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@.c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000A0B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180059BF0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18005B8B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801B4DA0 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BD4A8 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 */

__int64 __fastcall CRenderingEffect::EmitGeometryImpl(
        struct CD3DBatchExecutionContext *a1,
        const struct CHWDrawListEntry *a2,
        char a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE *v9; // r14
  int v10; // r15d
  signed int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  struct CMILMatrix *v16; // rdx
  float v17; // xmm3_4
  __int64 v18; // r8
  signed int appended; // eax
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  __int64 v23; // [rsp+38h] [rbp-8h]
  __int64 v24; // [rsp+78h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 18);
  v4 = 0;
  if ( *(_DWORD *)(v3 + 8) )
  {
    v7 = *(_QWORD *)(v3 + 56);
    v8 = *(unsigned int *)(v3 + 20);
    v22 = v8;
    v23 = v7;
    if ( !v7 && v8 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v9 = (char *)a1 + 72;
    v10 = (*((_BYTE *)a1 + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)a1 + 19);
    if ( *(_DWORD *)(v3 + 24) )
    {
      appended = AppendInstancedPrimitive((_DWORD)a1, (_DWORD)a2, v3, (unsigned int)&v22, (__int64)v9);
      v4 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, appended, 0xBAu, 0LL);
    }
    else
    {
      v11 = CD3DBatchExecutionContext::AppendGeometry(
              (__int64)a1,
              *(_DWORD *)(v3 + 8),
              0,
              (unsigned int *)&v22,
              &v24,
              0LL);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0x87u, 0LL);
      }
      else
      {
        v15 = *(_DWORD *)(v3 + 12) == 0;
        LODWORD(v23) = v10;
        if ( v15 )
        {
          v22 = v24;
          HIDWORD(v23) = *(_DWORD *)(v3 + 8);
          TransferAliasedVertices(v3, v12, &v22);
        }
        else
        {
          v15 = *v9 == 0;
          v16 = (const struct CHWDrawListEntry *)((char *)a2 + 64);
          v17 = *((float *)a2 + 15);
          HIDWORD(v23) = *(_DWORD *)(v3 + 8);
          if ( v15 )
          {
            v22 = v24;
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v3, (__int64)v16, v14, v17, &v22);
          }
          else
          {
            v18 = v24;
            v22 = v24;
            LOBYTE(v18) = a3;
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
              (CDrawListPrimitive *)v3,
              v16,
              v18,
              v17,
              &v22);
          }
        }
      }
    }
  }
  return v4;
}
