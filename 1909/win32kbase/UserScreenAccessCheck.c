/*
 * XREFs of UserScreenAccessCheck @ 0x1C002A400
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

__int64 UserScreenAccessCheck()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rax

  v0 = 0;
  v1 = 0LL;
  if ( grpdeskRitInput )
    v1 = ***((_QWORD ***)grpdeskRitInput + 1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = ThreadWin32Thread;
  if ( !v1
    || (v5 = *(_QWORD *)(ThreadWin32Thread + 448)) != 0
    && (v6 = *(_QWORD **)(v5 + 8), v3 = (_QWORD *)*v6, *(_QWORD *)*v6 == v1)
    || (*(_DWORD *)(v4 + 480) & 8) != 0
    || (*(_DWORD *)(v4 + 1224) & 4) != 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 12) & 0x40010) == 0x40010 )
      return 1;
  }
  return v0;
}
