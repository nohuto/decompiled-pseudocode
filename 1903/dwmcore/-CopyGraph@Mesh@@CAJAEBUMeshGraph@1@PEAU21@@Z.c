/*
 * XREFs of ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800BAD68
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180057590 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x1801BA278 (-RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::CopyGraph(const struct Mesh::MeshGraph *a1, struct Mesh::MeshGraph *a2)
{
  if ( !*((_QWORD *)a1 + 2)
    || !*((_QWORD *)a2 + 2)
    || (memcpy_0(*((void **)a2 + 3), *((const void **)a1 + 3), (__int64)*((int *)a1 + 8) << 6), !*((_QWORD *)a1 + 5))
    || !*((_QWORD *)a2 + 5)
    || (memcpy_0(*((void **)a2 + 6), *((const void **)a1 + 6), 88LL * *((int *)a1 + 14)),
        *((_QWORD *)a2 + 8) = *((_QWORD *)a1 + 8),
        !*((_QWORD *)a1 + 9))
    || !*((_QWORD *)a2 + 9) )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  memcpy_0(*((void **)a2 + 10), *((const void **)a1 + 10), 88LL * *((int *)a1 + 22));
  *((_DWORD *)a2 + 8) = *((_DWORD *)a1 + 8);
  *((_DWORD *)a2 + 14) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a2 + 22) = *((_DWORD *)a1 + 22);
  *((_DWORD *)a2 + 23) = *((_DWORD *)a1 + 23);
  *((_DWORD *)a2 + 24) = *((_DWORD *)a1 + 24);
  *((_DWORD *)a2 + 25) = *((_DWORD *)a1 + 25);
  *((_DWORD *)a2 + 26) = *((_DWORD *)a1 + 26);
  return 0LL;
}
