/*
 * XREFs of ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x1800BB35C
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180185518 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x18006019C (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800BB4D0 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$reset@PEAUMeshVertexData@Mesh@@X@?$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U?$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std@@@std@@QEAAXPEAUMeshVertexData@Mesh@@@Z @ 0x1800EF024 (--$reset@PEAUMeshVertexData@Mesh@@X@-$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U-$default_delete@.c)
 *     ?reset@?$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U?$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std@@@std@@QEAAX$$T@Z @ 0x1800EF048 (-reset@-$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U-$default_delete@$$BY0A@UMeshVertexData@Mesh@@.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E8C30 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Mesh::PreallocateGraphObjects(Mesh *this, char a2)
{
  int v2; // eax
  int v4; // esi
  Mesh::MeshGraph **v5; // rdi
  Mesh::MeshGraph *v6; // rcx
  __int64 v7; // rax
  unsigned __int128 v8; // rax
  void *v9; // rax
  unsigned int v10; // ecx
  int v11; // ebx
  Mesh::MeshGraph *v12; // rcx
  Mesh::MeshGraph *v13; // rcx
  Mesh::MeshGraph *v14; // rax
  Mesh::MeshGraph *v16; // [rsp+30h] [rbp-20h] BYREF
  Mesh::MeshGraph **v17; // [rsp+38h] [rbp-18h]
  struct Mesh::MeshGraph *v18; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+48h] [rbp-8h]

  v2 = *((_DWORD *)this + 2);
  v16 = 0LL;
  v4 = v2 + 64;
  if ( !a2 )
    v4 = v2;
  std::unique_ptr<Mesh::MeshVertexData [0]>::reset();
  v5 = (Mesh::MeshGraph **)((char *)this + 16);
  *((_DWORD *)this + 2) = 0;
  v6 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v6 )
    Mesh::MeshGraph::`scalar deleting destructor'(v6);
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_DWORD *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_DWORD *)(v7 + 104) = 0;
    *(_DWORD *)(v7 + 128) = 0;
  }
  v8 = (unsigned __int64)v4 * (unsigned __int128)0x18uLL;
  if ( !is_mul_ok(v4, 0x18uLL) )
    *(_QWORD *)&v8 = -1LL;
  v9 = operator new[](v8, *((const struct std::nothrow_t **)&v8 + 1));
  std::unique_ptr<Mesh::MeshVertexData [0]>::reset<Mesh::MeshVertexData *,void>(this, v9);
  if ( *(_QWORD *)this )
  {
    *((_DWORD *)this + 2) = v4;
    v17 = &v16;
    v18 = 0LL;
    v19 = 1;
    v11 = Mesh::MeshGraph::Create(v4, v4, 2 * v4, 0, &v18);
    if ( v19 )
    {
      v12 = *v17;
      *v17 = v18;
      if ( v12 )
        Mesh::MeshGraph::`scalar deleting destructor'(v12);
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v11, 0x7Eu);
    }
    else
    {
      if ( v5 != &v16 )
      {
        v13 = *v5;
        v14 = v16;
        v16 = 0LL;
        *v5 = v14;
        if ( v13 )
          Mesh::MeshGraph::`scalar deleting destructor'(v13);
      }
      v11 = 0;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x7Au);
  }
  if ( v16 )
    Mesh::MeshGraph::`scalar deleting destructor'(v16);
  return (unsigned int)v11;
}
