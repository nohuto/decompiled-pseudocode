/*
 * XREFs of ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x1801B89D8
 * Callers:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1801B87C8 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800BCF14 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 *     ??A?$span@UMeshLine@Mesh@@$0?0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z @ 0x1801B789C (--A-$span@UMeshLine@Mesh@@$0-0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z.c)
 */

__int64 __fastcall Mesh::RestoreCachedGraph(struct Mesh::MeshGraph **this, const struct Mesh::MeshGraph *a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct Mesh::MeshGraph *v6; // rax
  int i; // ebx
  __int64 v8; // rax

  v3 = Mesh::CopyGraph(a2, this[2]);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x49Du, 0LL);
  }
  else
  {
    v6 = this[2];
    for ( i = 0; i < *((_DWORD *)v6 + 14); v6 = this[2] )
    {
      v8 = gsl::span<Mesh::MeshLine,-1>::operator[]((unsigned __int64 *)v6 + 5, i++);
      *(_QWORD *)(v8 + 8) = **(_QWORD **)(**(_QWORD **)(v8 + 48) + 8LL);
    }
    return 0;
  }
  return v5;
}
