/*
 * XREFs of ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18022A420
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV?$span@$$CBG$0?0@gsl@@IPEAPEAX@Z @ 0x18003A860 (-AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV-$span@$$CBG$0-0@gsl@@IPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180187958 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 *     ?GetVertexSize@VertexFormatDesc@@QEBAIXZ @ 0x180189A80 (-GetVertexSize@VertexFormatDesc@@QEBAIXZ.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::EmitGeometry(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  __int64 v3; // rdi
  VertexFormatDesc *v4; // rbp
  unsigned int v5; // ebx
  __int64 v7; // rax
  gsl::details *v8; // rcx
  int appended; // eax
  __int64 v10; // rcx
  int VertexSize; // eax
  float v12; // xmm2_4
  gsl::details *v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]
  gsl::details *v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a3 + 17);
  v4 = (struct CD3DBatchExecutionContext *)((char *)a2 + 72);
  v5 = 0;
  v7 = *(_QWORD *)(v3 + 48);
  v8 = (gsl::details *)*(unsigned int *)(v3 + 16);
  v14 = v8;
  v15 = v7;
  if ( v7 )
  {
    if ( v8 )
    {
      appended = CD3DBatchExecutionContext::AppendGeometry((__int64)a2, (unsigned int *)&v14, *(_DWORD *)(v3 + 8), &v16);
      v5 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, appended, 0x8Bu);
      }
      else
      {
        v14 = v16;
        VertexSize = VertexFormatDesc::GetVertexSize(v4);
        v12 = *((float *)a3 + 13);
        HIDWORD(v15) = *(_DWORD *)(v3 + 8);
        LODWORD(v15) = VertexSize;
        TransferVertices2DH_UV2(v3, (const struct CBaseDrawListEntry *)((char *)a3 + 56), v12);
      }
    }
  }
  else if ( v8 )
  {
    gsl::details::terminate(v8);
    __debugbreak();
  }
  return v5;
}
