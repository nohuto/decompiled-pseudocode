/*
 * XREFs of ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800BB4D0
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x1800BB35C (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Mesh::MeshGraph::Create(int a1, int a2, int a3, int a4, struct Mesh::MeshGraph **a5)
{
  char *v5; // rsi
  char *v6; // rbp
  unsigned __int64 v7; // r15
  LPVOID v8; // r14
  unsigned __int64 v9; // r12
  LPVOID v10; // rdi
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  SIZE_T v13; // rax
  char *v14; // rax
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbx
  SIZE_T v17; // rax
  char *v18; // rax
  _QWORD *v19; // rcx
  SIZE_T v20; // rax
  SIZE_T v21; // rax
  gsl::details *v22; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = a4;
  v8 = 0LL;
  v9 = a3;
  v10 = 0LL;
  v11 = a2;
  if ( a1 > 0 )
  {
    v12 = a1;
    v13 = (__int64)a1 << 6;
    if ( !is_mul_ok(a1, 0x40uLL) )
      v13 = -1LL;
    if ( !v13 )
      v13 = 1LL;
    v14 = (char *)HeapAlloc(WPF::g_processHeap, 0, v13);
    v5 = v14;
    if ( !v14 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v15 = v14 + 16;
    do
    {
      *v15 = &Mesh::RadialEdgeList::`vftable';
      v15 += 8;
      --v12;
    }
    while ( v12 );
  }
  if ( (int)v11 > 0 )
  {
    v16 = v11;
    v17 = 88 * v11;
    if ( !is_mul_ok(v11, 0x58uLL) )
      v17 = -1LL;
    if ( !v17 )
      v17 = 1LL;
    v18 = (char *)HeapAlloc(WPF::g_processHeap, 0, v17);
    v6 = v18;
    if ( !v18 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v19 = v18 + 40;
    do
    {
      *v19 = &Mesh::LinearEdgeList::`vftable';
      v19 += 11;
      --v16;
    }
    while ( v16 );
  }
  if ( (int)v9 > 0 )
  {
    v20 = 88 * v9;
    if ( !is_mul_ok(v9, 0x58uLL) )
      v20 = -1LL;
    if ( !v20 )
      v20 = 1LL;
    v8 = HeapAlloc(WPF::g_processHeap, 0, v20);
    if ( !v8 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  if ( (int)v7 > 0 )
  {
    v21 = 2 * v7;
    if ( !is_mul_ok(v7, 2uLL) )
      v21 = -1LL;
    if ( !v21 )
      v21 = 1LL;
    v10 = HeapAlloc(WPF::g_processHeap, 0, v21);
    if ( !v10 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v22 = (gsl::details *)HeapAlloc(WPF::g_processHeap, 0, 0x88uLL);
  if ( !v22 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_QWORD *)v22 + 2) = a1;
  if ( a1 < 0LL
    || (*((_QWORD *)v22 + 3) = v5) == 0LL && a1
    || (*((_QWORD *)v22 + 5) = v11, (v11 & 0x80000000) != 0LL)
    || (*((_QWORD *)v22 + 6) = v6) == 0LL && (_DWORD)v11
    || (*((_QWORD *)v22 + 9) = v9, (v9 & 0x80000000) != 0LL)
    || (*((_QWORD *)v22 + 10) = v8) == 0LL && (_DWORD)v9
    || (*((_QWORD *)v22 + 14) = v7, (v7 & 0x80000000) != 0LL)
    || (*((_QWORD *)v22 + 15) = v10) == 0LL && (_DWORD)v7 )
  {
    gsl::details::terminate(v22);
    JUMPOUT(0x1800BB70ALL);
  }
  *((_QWORD *)v22 + 8) = 0LL;
  *((_DWORD *)v22 + 8) = 0;
  *((_DWORD *)v22 + 14) = 0;
  *((_QWORD *)v22 + 11) = 0LL;
  *((_QWORD *)v22 + 12) = 0LL;
  *((_DWORD *)v22 + 26) = 0;
  *((_DWORD *)v22 + 32) = 0;
  *a5 = v22;
  return 0LL;
}
