/*
 * XREFs of FreeTimer @ 0x1C00DAA90
 * Callers:
 *     DestroyWindowsTimers @ 0x1C0097364 (DestroyWindowsTimers.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00DA35C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyThreadsTimers @ 0x1C00DA8E0 (DestroyThreadsTimers.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00DAF1C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?EntryInList@@YAHQEAU_LIST_ENTRY@@AEBU1@@Z @ 0x1C0164298 (-EntryInList@@YAHQEAU_LIST_ENTRY@@AEBU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall FreeTimer(struct tagTIMER *a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)a1 + 72);
  if ( !*((_QWORD *)a1 + 9) || !(unsigned int)EntryInList((struct _LIST_ENTRY *const)((char *)a1 + 72), gtmrListHead) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCount(a1);
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 )
      goto LABEL_15;
    v5 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v5 != v1
      || (*v5 = v4,
          *(_QWORD *)(v4 + 8) = v5,
          v6 = (_QWORD *)((char *)a1 + 112),
          *v1 = 0LL,
          *((_QWORD *)a1 + 10) = 0LL,
          v7 = *((_QWORD *)a1 + 14),
          *(struct tagTIMER **)(v7 + 8) != (struct tagTIMER *)((char *)a1 + 112))
      || (v8 = (_QWORD *)*((_QWORD *)a1 + 15), (_QWORD *)*v8 != v6) )
    {
LABEL_15:
      __fastfail(3u);
    }
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    *((_QWORD *)a1 + 15) = 0LL;
    if ( !*((_QWORD *)a1 + 11) )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
    HMAssignmentUnlock((char *)a1 + 88);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
    return HMFreeObject(a1);
  }
  return result;
}
