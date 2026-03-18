/*
 * XREFs of ?Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x1801850F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::LinearEdgeList::Compare(
        Mesh::LinearEdgeList *this,
        float **a2,
        const struct Mesh::MeshEdge *a3)
{
  float *v3; // r8
  float *v4; // rcx
  float *v5; // rax
  float v6; // xmm2_4
  float v7; // xmm3_4
  unsigned int v8; // edx
  float v9; // xmm1_4
  unsigned int v10; // ecx

  v3 = *(float **)(*(_QWORD *)a3 + 8LL);
  v4 = (float *)*((_QWORD *)*a2 + 1);
  v5 = a2[1];
  v6 = *v4 - *v3;
  v7 = v4[1] - v3[1];
  if ( *(float *)(*(_QWORD *)v5 + 8LL) < (float)((float)(v6 * v6) + (float)(v7 * v7)) )
  {
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
    v8 = 1;
    if ( **(float **)v5 <= v9 )
    {
      if ( v6 < 0.0 )
        return (unsigned int)-1;
    }
    else
    {
      if ( v7 < 0.0 )
        v8 = -1;
      v10 = v8;
      v8 = -v8;
      if ( v5[5] >= 0.0 )
        return v10;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
