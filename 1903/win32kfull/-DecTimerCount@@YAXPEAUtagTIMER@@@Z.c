/*
 * XREFs of ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00DAF1C
 * Callers:
 *     InternalSetTimer @ 0x1C00AB650 (InternalSetTimer.c)
 *     FreeTimer @ 0x1C00DAA90 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C00DABB0 (NtUserKillTimer.c)
 * Callees:
 *     <none>
 */

void __fastcall DecTimerCount(struct tagTIMER *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  __int64 v3; // r9
  _QWORD *v4; // r8

  v1 = *((_QWORD *)a1 + 3);
  v2 = (_QWORD *)((char *)a1 + 56);
  v3 = *((_QWORD *)a1 + 7);
  if ( *(struct tagTIMER **)(v3 + 8) != (struct tagTIMER *)((char *)a1 + 56)
    || (v4 = (_QWORD *)*((_QWORD *)a1 + 8), (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  if ( (*(_DWORD *)(v1 + 596))-- == 1 )
    *(_WORD *)(*(_QWORD *)(v1 + 440) + 6LL) &= ~0x10u;
}
