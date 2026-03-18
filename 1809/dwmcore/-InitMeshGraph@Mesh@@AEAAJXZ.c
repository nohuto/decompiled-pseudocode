/*
 * XREFs of ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180185618
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18003B8B8 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800B8FDC (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 * Callees:
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800BB290 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800BB720 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??A?$span@UMeshLine@Mesh@@$0?0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z @ 0x1801847F4 (--A-$span@UMeshLine@Mesh@@$0-0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z.c)
 */

__int64 __fastcall Mesh::InitMeshGraph(Mesh *this, __int64 a2)
{
  const void **v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int i; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  char v12; // cl
  __int64 v13; // rdx
  int *v14; // rcx
  int v15; // eax

  if ( (*((_BYTE *)this + 76) & 2) != 0 )
  {
    v3 = (const void **)*((_QWORD *)this + 3);
    if ( v3 )
    {
      v4 = Mesh::CopyGraph(v3, *((struct Mesh::MeshGraph **)this + 2));
      v6 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x49Du);
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v6, 0x19Bu);
        return v6;
      }
      for ( i = 0;
            i < *(_DWORD *)(*((_QWORD *)this + 2) + 56LL);
            *(_QWORD *)(v8 + 8) = **(_QWORD **)(**(_QWORD **)(v8 + 48) + 8LL) )
      {
        v8 = gsl::span<Mesh::MeshLine,-1>::operator[]((__int64 *)(*((_QWORD *)this + 2) + 40LL), i++);
      }
    }
    else
    {
      v10 = Mesh::BuildGrid(this, a2, *((_DWORD *)this + 12), *((_DWORD *)this + 13));
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19Fu);
        return v6;
      }
    }
    v12 = *((_BYTE *)this + 76);
    if ( (v12 & 0x40) != 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
      if ( v13 )
      {
        v14 = (int *)((char *)this + 60);
        do
        {
          v15 = *v14++;
          *(_DWORD *)(v13 + 28) |= v15;
          v13 = *(_QWORD *)(v13 + 80);
        }
        while ( v13 != *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) && v13 );
        v12 = *((_BYTE *)this + 76);
      }
    }
    *((_BYTE *)this + 76) = v12 & 0xFD;
  }
  return 0;
}
