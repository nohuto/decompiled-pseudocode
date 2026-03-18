/*
 * XREFs of ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800624C8
 * Callers:
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1800624A0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@.c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800088D0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800639D0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180064340 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801B3500 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BBD08 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
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
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  bool v16; // zf
  struct CMILMatrix *v17; // rdx
  float v18; // xmm3_4
  __int64 v19; // r8
  int appended; // eax
  unsigned int v22; // ecx
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h]
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 18);
  v4 = 0;
  if ( *(_DWORD *)(v3 + 8) )
  {
    v7 = *(_QWORD *)(v3 + 56);
    v8 = *(unsigned int *)(v3 + 20);
    v23 = v8;
    v24 = v7;
    if ( !v7 && v8 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v9 = (char *)a1 + 72;
    v10 = (*((_BYTE *)a1 + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)a1 + 19);
    if ( *(_DWORD *)(v3 + 24) )
    {
      appended = AppendInstancedPrimitive((_DWORD)a1, (_DWORD)a2, v3, (unsigned int)&v23, (__int64)v9);
      v4 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, appended, 0xBAu, 0LL);
    }
    else
    {
      v11 = CD3DBatchExecutionContext::AppendGeometry(
              (_DWORD)a1,
              *(_DWORD *)(v3 + 8),
              0,
              (unsigned int)&v23,
              (__int64)&v25,
              0LL);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0x87u, 0LL);
      }
      else
      {
        v16 = *(_DWORD *)(v3 + 12) == 0;
        LODWORD(v24) = v10;
        if ( v16 )
        {
          v23 = v25;
          HIDWORD(v24) = *(_DWORD *)(v3 + 8);
          TransferAliasedVertices(v3, v12, &v23);
        }
        else
        {
          v16 = *v9 == 0;
          v17 = (const struct CHWDrawListEntry *)((char *)a2 + 64);
          v18 = *((float *)a2 + 15);
          HIDWORD(v24) = *(_DWORD *)(v3 + 8);
          if ( v16 )
          {
            v23 = v25;
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v3, (_DWORD)v17, v14, v15, (__int64)&v23);
          }
          else
          {
            v19 = v25;
            v23 = v25;
            LOBYTE(v19) = a3;
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
              (CDrawListPrimitive *)v3,
              v17,
              v19,
              v18,
              &v23);
          }
        }
      }
    }
  }
  return v4;
}
