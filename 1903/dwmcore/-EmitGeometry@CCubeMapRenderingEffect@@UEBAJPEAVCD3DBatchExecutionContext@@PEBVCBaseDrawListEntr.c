/*
 * XREFs of ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180258760
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180059BF0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BD560 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::EmitGeometry(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  signed int appended; // eax
  __int64 v10; // rcx
  int v11; // edx
  int v12; // eax
  float v13; // xmm2_4
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a3 + 18);
  v4 = 0;
  v7 = *(_QWORD *)(v3 + 56);
  v8 = *(unsigned int *)(v3 + 20);
  v15 = v8;
  v16 = v7;
  if ( v7 )
  {
    if ( v8 )
    {
      appended = CD3DBatchExecutionContext::AppendGeometry(
                   (__int64)a2,
                   *(_DWORD *)(v3 + 8),
                   0,
                   (unsigned int *)&v15,
                   &v17,
                   0LL);
      v4 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, appended, 0x89u, 0LL);
      }
      else
      {
        v11 = *(_DWORD *)(v3 + 8);
        v12 = 8 * *((_DWORD *)a2 + 19);
        if ( *((_BYTE *)a2 + 72) )
          LODWORD(v16) = v12 + 48;
        else
          LODWORD(v16) = v12 + 16;
        v13 = *((float *)a3 + 15);
        HIDWORD(v16) = v11;
        v15 = v17;
        TransferVertices2DH_UV2(v3, (const struct CBaseDrawListEntry *)((char *)a3 + 64), v13);
      }
    }
  }
  else if ( v8 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return v4;
}
