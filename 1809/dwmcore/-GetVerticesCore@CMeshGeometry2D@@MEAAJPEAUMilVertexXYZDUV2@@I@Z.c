/*
 * XREFs of ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x1801A7E00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x1801A7DA0 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::GetVerticesCore(
        CMeshGeometry2D *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int VertexCount; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // r10
  float *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // xmm0_8
  int v16; // ecx
  double v17; // xmm0_8
  double v18; // xmm1_8

  v6 = 0;
  VertexCount = CMeshGeometry2D::GetVertexCount(this);
  if ( a3 >= VertexCount )
  {
    if ( VertexCount )
    {
      v9 = 0LL;
      v10 = VertexCount;
      v11 = 0LL;
      v12 = (float *)((char *)a2 + 16);
      v13 = 0LL;
      do
      {
        v14 = *((_QWORD *)this + 15);
        v15 = *(_QWORD *)(v13 + v14);
        v13 += 12LL;
        *((_QWORD *)v12 - 2) = v15;
        *(v12 - 2) = *(float *)(v13 + v14 - 4);
        v16 = *(_DWORD *)(v11 + *((_QWORD *)this + 19));
        v11 += 4LL;
        *((_DWORD *)v12 - 1) = v16;
        v17 = *(double *)(*((_QWORD *)this + 17) + v9);
        v9 += 16LL;
        *v12 = v17;
        v12 += 8;
        v18 = *(double *)(*((_QWORD *)this + 17) + v9 - 8);
        *((_QWORD *)v12 - 3) = 0LL;
        *(v12 - 7) = v18;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x12Du);
  }
  return v6;
}
