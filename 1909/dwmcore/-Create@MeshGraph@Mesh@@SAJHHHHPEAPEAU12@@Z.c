/*
 * XREFs of ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x18007AA20
 * Callers:
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x18007A8B8 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180092E10 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Mesh::MeshGraph::Create(int a1, int a2, int a3, int a4, struct Mesh::MeshGraph **a5)
{
  void *v5; // rsi
  void *v6; // rbp
  unsigned __int64 v7; // r12
  void *v8; // r15
  unsigned __int64 v9; // r13
  void *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rbx
  SIZE_T v13; // rdi
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rax
  SIZE_T v18; // rbx
  HANDLE v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rcx
  SIZE_T v23; // rbx
  HANDLE v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  HANDLE v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // ebx
  void *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = a4;
  v8 = 0LL;
  v9 = a3;
  v10 = 0LL;
  LODWORD(v11) = a2;
  if ( a1 > 0 )
  {
    v12 = a1;
    v13 = (__int64)a1 << 6;
    if ( !is_mul_ok(a1, 0x40uLL) )
      v13 = -1LL;
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, v13);
    v5 = v15;
    if ( !v15 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v16);
    v17 = v15 + 2;
    do
    {
      *v17 = &Mesh::RadialEdgeList::`vftable';
      v17 += 8;
      --v12;
    }
    while ( v12 );
    LODWORD(v11) = a2;
  }
  if ( (int)v11 > 0 )
  {
    v11 = (int)v11;
    v18 = 88LL * (int)v11;
    if ( !is_mul_ok((int)v11, 0x58uLL) )
      v18 = -1LL;
    v19 = GetProcessHeap();
    v20 = HeapAlloc(v19, 0, v18);
    v6 = v20;
    if ( !v20 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v21);
    v22 = v20 + 5;
    do
    {
      *v22 = &Mesh::LinearEdgeList::`vftable';
      v22 += 11;
      --v11;
    }
    while ( v11 );
    LODWORD(v11) = a2;
  }
  if ( (int)v9 > 0 )
  {
    v23 = 88 * v9;
    if ( !is_mul_ok(v9, 0x58uLL) )
      v23 = -1LL;
    v24 = GetProcessHeap();
    v8 = HeapAlloc(v24, 0, v23);
    if ( !v8 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v25);
  }
  if ( (int)v7 <= 0 || (v10 = operator new(saturated_mul(v7, 2uLL))) != 0LL )
  {
    v27 = GetProcessHeap();
    v28 = HeapAlloc(v27, 0, 0x88uLL);
    if ( !v28 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v29);
    v28[2] = a1;
    if ( a1 < 0LL
      || (v28[3] = v5) == 0LL && a1
      || (v28[5] = (int)v11, (int)v11 < 0)
      || (v28[6] = v6) == 0LL && (_DWORD)v11
      || (v28[9] = v9, (v9 & 0x80000000) != 0LL)
      || (v28[10] = v8) == 0LL && (_DWORD)v9
      || (v28[14] = v7, (v7 & 0x80000000) != 0LL)
      || (v28[15] = v10) == 0LL && (_DWORD)v7 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v28[8] = 0LL;
    v30 = 0;
    *((_DWORD *)v28 + 8) = 0;
    *((_DWORD *)v28 + 14) = 0;
    v28[11] = 0LL;
    v28[12] = 0LL;
    *((_DWORD *)v28 + 26) = 0;
    *((_DWORD *)v28 + 32) = 0;
    *a5 = (struct Mesh::MeshGraph *)v28;
  }
  else
  {
    v30 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, 0x8007000E, 0x11F4u, 0LL);
    operator delete(v5);
    operator delete(v6);
    operator delete(v8);
    operator delete(0LL);
  }
  return v30;
}
