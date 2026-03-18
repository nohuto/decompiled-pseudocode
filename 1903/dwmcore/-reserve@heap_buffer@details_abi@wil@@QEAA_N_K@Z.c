/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800AB948
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800ABEAC (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800ABE50 (memcpy_s.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800D7E78 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

bool __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rsi
  rsize_t v7; // r14
  void *v8; // rdx
  wil::details *v9; // rcx

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this >= a2 )
  {
LABEL_6:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v5, v3, *(const void *const *)this, v7);
    v9 = (wil::details *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v6;
    if ( v9 )
      wil::details::FreeProcessHeap(v9, v8);
    *(_QWORD *)this = v6;
    *((_QWORD *)this + 1) = &v6[v7];
    *((_QWORD *)this + 2) = &v6[v3];
    goto LABEL_6;
  }
  return (char)v5;
}
