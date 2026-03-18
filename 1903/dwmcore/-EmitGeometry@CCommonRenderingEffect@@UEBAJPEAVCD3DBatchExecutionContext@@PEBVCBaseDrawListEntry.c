/*
 * XREFs of ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180059AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000A0B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180059BF0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18005B8B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801B4DA0 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BD4A8 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 */

__int64 __fastcall CCommonRenderingEffect::EmitGeometry(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // r14
  int v11; // r15d
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  bool v17; // zf
  struct CMILMatrix *v18; // rdx
  float v19; // xmm3_4
  int appended; // eax
  unsigned int v22; // ecx
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a3 + 18);
  v5 = 0;
  v7 = *(_DWORD *)(v3 + 8);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v3 + 56);
    v9 = *(unsigned int *)(v3 + 20);
    v23 = v9;
    v24 = v8;
    if ( !v8 && v9 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v10 = (char *)a2 + 72;
    v11 = (*((_BYTE *)a2 + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)a2 + 19);
    if ( *(_DWORD *)(v3 + 24) )
    {
      appended = AppendInstancedPrimitive((_DWORD)a2, (_DWORD)a3, v3, (unsigned int)&v23, (__int64)a2 + 72);
      v5 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, appended, 0xBAu, 0LL);
    }
    else
    {
      v12 = CD3DBatchExecutionContext::AppendGeometry((_DWORD)a2, v7, 0, (unsigned int)&v23, (__int64)&v25, 0LL);
      v5 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0x87u, 0LL);
      }
      else
      {
        v17 = *(_DWORD *)(v3 + 12) == 0;
        LODWORD(v24) = v11;
        if ( v17 )
        {
          v23 = v25;
          HIDWORD(v24) = *(_DWORD *)(v3 + 8);
          TransferAliasedVertices(v3, v13, &v23);
        }
        else
        {
          v17 = *v10 == 0;
          v18 = (const struct CBaseDrawListEntry *)((char *)a3 + 64);
          v19 = *((float *)a3 + 15);
          HIDWORD(v24) = *(_DWORD *)(v3 + 8);
          v23 = v25;
          if ( v17 )
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v3, (_DWORD)v18, v15, v16, (__int64)&v23);
          else
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
              (CDrawListPrimitive *)v3,
              v18,
              0LL,
              v19,
              &v23);
        }
      }
    }
  }
  return v5;
}
