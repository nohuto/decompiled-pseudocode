/*
 * XREFs of ?PeekNextMessage@CChannel@@UEAAHPEAUMIL_MESSAGE@@_K@Z @ 0x180072EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CChannel::PeekNextMessage(CChannel *this, struct MIL_MESSAGE *a2, size_t a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebp
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v8 = (_QWORD *)((char *)this + 64);
  v9 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v9 == v8 )
  {
    if ( a3 >= 0x1C )
      a3 = 28LL;
    memset_0(a2, 0, a3);
  }
  else
  {
    if ( (_QWORD *)v9[1] != v8 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    if ( a3 >= 0x1C )
      a3 = 28LL;
    memcpy_0(a2, v9 + 2, a3);
    WPF::ProcessHeapImpl::Free(v9);
    v7 = 1;
  }
  LeaveCriticalSection(v3);
  return v7;
}
