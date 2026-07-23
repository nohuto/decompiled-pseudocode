/*
 * XREFs of PspCallJobHierarchyCallbacks @ 0x1405FEBF8
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x1405FF128 (PspLockJobShared.c)
 */

__int64 __fastcall PspCallJobHierarchyCallbacks(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        unsigned int (__fastcall *a3)(__int64, __int64),
        __int64 (__fastcall *a4)(_QWORD *, __int64),
        __int64 a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v7; // ebx
  unsigned int (__fastcall *v9)(__int64, __int64); // r14
  int v12; // edi
  _QWORD *i; // rsi

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v9 = a3;
  v12 = 0;
  if ( !a2 && !a4 )
    goto LABEL_14;
  if ( (a6 & 1) == 0 )
  {
    if ( (a6 & 4) != 0 )
      PspLockJobExclusive(a1, CurrentThread);
    else
      PspLockJobShared(a1, CurrentThread);
  }
  if ( !a2 || (v12 = a2(a1, a5), v12 >= 0) )
  {
    if ( a4 )
    {
      for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
      {
        v12 = a4(i - 142, a5);
        if ( v12 < 0 )
          break;
      }
      v9 = a3;
    }
  }
  if ( (a6 & 1) == 0 )
    PspUnlockJob(a1, CurrentThread);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741536 )
      return (unsigned int)v12;
    return v7;
  }
  else
  {
LABEL_14:
    if ( v9 )
      return v9(a1, a5);
  }
  return (unsigned int)v12;
}
