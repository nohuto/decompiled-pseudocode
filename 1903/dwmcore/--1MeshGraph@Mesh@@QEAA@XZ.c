/*
 * XREFs of ??1MeshGraph@Mesh@@QEAA@XZ @ 0x1800917A4
 * Callers:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800CCA88 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::MeshGraph::~MeshGraph(Mesh::MeshGraph *this)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax
  void *v4; // rdi
  HANDLE v5; // rax
  void *v6; // rdi
  HANDLE v7; // rax
  void *v8; // rbx
  HANDLE v9; // rax

  v1 = (void *)*((_QWORD *)this + 3);
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
  }
  v6 = (void *)*((_QWORD *)this + 10);
  if ( v6 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
  v8 = (void *)*((_QWORD *)this + 15);
  if ( v8 )
  {
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v8);
  }
}
