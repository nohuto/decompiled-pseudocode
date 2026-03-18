/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180086A40
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180087694 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18007AB80 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     memcpy_s @ 0x180087638 (memcpy_s.c)
 */

bool __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  HANDLE ProcessHeap; // rax
  wil::details *v5; // rax
  wil::details *v6; // rsi
  rsize_t v7; // r14
  void *v8; // rdx
  wil::details *v9; // rcx

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this >= a2 )
  {
LABEL_8:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  ProcessHeap = GetProcessHeap();
  v5 = (wil::details *)HeapAlloc(ProcessHeap, 0, v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v5, v3, *(const void *const *)this, v7);
    v9 = (wil::details *)*((_QWORD *)this + 3);
    if ( v6 != v9 )
    {
      if ( v9 )
        wil::details::FreeProcessHeap(v9, v8);
      *((_QWORD *)this + 3) = v6;
    }
    *(_QWORD *)this = v6;
    *((_QWORD *)this + 1) = (char *)v6 + v7;
    *((_QWORD *)this + 2) = (char *)v6 + v3;
    goto LABEL_8;
  }
  return (char)v5;
}
