/*
 * XREFs of FreeTimer @ 0x1C00BA430
 * Callers:
 *     DestroyWindowsTimers @ 0x1C0035C74 (DestroyWindowsTimers.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00B9ECC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyThreadsTimers @ 0x1C00BA2A0 (DestroyThreadsTimers.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00186A8 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

__int64 __fastcall FreeTimer(struct tagTIMER *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  struct tagTIMER **v4; // rdx
  __int64 v5; // rdx
  struct tagTIMER **v6; // rcx

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCount(a1);
    v3 = *((_QWORD *)a1 + 9);
    if ( *(struct tagTIMER **)(v3 + 8) != (struct tagTIMER *)((char *)a1 + 72)
      || (v4 = (struct tagTIMER **)*((_QWORD *)a1 + 10), *v4 != (struct tagTIMER *)((char *)a1 + 72)) )
    {
      __fastfail(3u);
    }
    *v4 = (struct tagTIMER *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = *((_QWORD *)a1 + 14);
    if ( *(struct tagTIMER **)(v5 + 8) != (struct tagTIMER *)((char *)a1 + 112)
      || (v6 = (struct tagTIMER **)*((_QWORD *)a1 + 15), *v6 != (struct tagTIMER *)((char *)a1 + 112)) )
    {
      __fastfail(3u);
    }
    *v6 = (struct tagTIMER *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( !*((_QWORD *)a1 + 11) )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 88);
    return HMFreeObject(a1);
  }
  return result;
}
