/*
 * XREFs of ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800B7A44
 * Callers:
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800B7010 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x1801B834C (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::Line2d::SetDirection(Mesh::Line2d *this, const struct D2D_VECTOR_2F *a2)
{
  float v2; // xmm1_4
  float v3; // xmm1_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2->x) & _xmm);
  if ( v2 >= 0.0000011920929 )
  {
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2->y) & _xmm);
    *((_BYTE *)this + 16) = 0;
    if ( v3 >= 0.0000011920929 )
    {
      *((_BYTE *)this + 17) = 0;
      *((struct D2D_VECTOR_2F *)this + 1) = *a2;
    }
    else
    {
      *((_BYTE *)this + 17) = 1;
      *((_QWORD *)this + 1) = 1065353216LL;
    }
  }
  else
  {
    *((_WORD *)this + 8) = 1;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 1065353216;
  }
}
