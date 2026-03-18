/*
 * XREFs of ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800BB290
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180185618 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Mesh::CopyGraph(const void **a1, struct Mesh::MeshGraph *a2)
{
  if ( (__int64)a1[2] <= 0
    || *((__int64 *)a2 + 2) <= 0
    || (memcpy_0(*((void **)a2 + 3), a1[3], (__int64)*((int *)a1 + 8) << 6), (__int64)a1[5] <= 0)
    || *((__int64 *)a2 + 5) <= 0
    || (memcpy_0(*((void **)a2 + 6), a1[6], 88LL * *((int *)a1 + 14)), *((_QWORD *)a2 + 8) = a1[8], (__int64)a1[9] <= 0)
    || *((__int64 *)a2 + 9) <= 0 )
  {
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x1800BB355LL);
  }
  memcpy_0(*((void **)a2 + 10), a1[10], 88LL * *((int *)a1 + 22));
  *((_DWORD *)a2 + 8) = *((_DWORD *)a1 + 8);
  *((_DWORD *)a2 + 14) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a2 + 22) = *((_DWORD *)a1 + 22);
  *((_DWORD *)a2 + 23) = *((_DWORD *)a1 + 23);
  *((_DWORD *)a2 + 24) = *((_DWORD *)a1 + 24);
  *((_DWORD *)a2 + 25) = *((_DWORD *)a1 + 25);
  *((_DWORD *)a2 + 26) = *((_DWORD *)a1 + 26);
  return 0LL;
}
