/*
 * XREFs of ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x18007A8B8
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180092E10 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x1801B86C4 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x18007AA20 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800CC96C (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Mesh::PreallocateGraphObjects(Mesh *this, char a2)
{
  int v2; // eax
  void *v4; // rcx
  int v5; // r14d
  Mesh::MeshGraph **v6; // rsi
  Mesh::MeshGraph *v7; // rcx
  __int64 v8; // rax
  SIZE_T v9; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v11; // rax
  void *v12; // rcx
  char v13; // dl
  Mesh::MeshGraph *v14; // rcx
  signed int v15; // ebx
  Mesh::MeshGraph *v16; // rcx
  Mesh::MeshGraph *v17; // rax
  struct Mesh::MeshGraph *v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  Mesh::MeshGraph *v21; // [rsp+80h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 2);
  v21 = 0LL;
  v4 = *(void **)this;
  v5 = v2 + 64;
  if ( !a2 )
    v5 = v2;
  *(_QWORD *)this = 0LL;
  if ( v4 )
    operator delete(v4);
  v6 = (Mesh::MeshGraph **)((char *)this + 16);
  *((_DWORD *)this + 2) = 0;
  v7 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v7 )
    Mesh::MeshGraph::`scalar deleting destructor'(v7, a2);
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_DWORD *)(v8 + 32) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 88) = 0LL;
    *(_QWORD *)(v8 + 96) = 0LL;
    *(_DWORD *)(v8 + 104) = 0;
    *(_DWORD *)(v8 + 128) = 0;
  }
  v9 = 24LL * v5;
  if ( !is_mul_ok(v5, 0x18uLL) )
    v9 = -1LL;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, v9);
  v12 = *(void **)this;
  *(_QWORD *)this = v11;
  if ( v12 )
  {
    operator delete(v12);
    v11 = *(LPVOID *)this;
  }
  if ( v11 )
  {
    *((_DWORD *)this + 2) = v5;
    v19 = 0LL;
    v20 = 1;
    v15 = Mesh::MeshGraph::Create(v5, v5, 2 * v5, 0, &v19);
    if ( v20 )
    {
      v13 = (char)v19;
      v14 = v21;
      v21 = v19;
      if ( v14 )
        Mesh::MeshGraph::`scalar deleting destructor'(v14, (unsigned __int8)v19);
    }
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v15, 0x7Eu, 0LL);
    }
    else
    {
      if ( v6 != &v21 )
      {
        v16 = *v6;
        v17 = v21;
        v21 = 0LL;
        *v6 = v17;
        if ( v16 )
          Mesh::MeshGraph::`scalar deleting destructor'(v16, v13);
      }
      v15 = 0;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, 0x8007000E, 0x7Au, 0LL);
  }
  if ( v21 )
    Mesh::MeshGraph::`scalar deleting destructor'(v21, v13);
  return (unsigned int)v15;
}
