/*
 * XREFs of PspQueryJobHierarchyProcessIdList @ 0x1406B89B0
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1405FF128 (PspLockJobShared.c)
 */

__int64 __fastcall PspQueryJobHierarchyProcessIdList(_DWORD *Object, _DWORD *a2, int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int v14; // [rsp+50h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)Object, (__int64)CurrentThread);
  v11 = (__int64)(a2 + 2);
  v12 = a3 - 8;
  v13 = 0;
  v14 = Object[54];
  v9 = PspEnumJobsAndProcessesInJobHierarchy(Object, 0, 0, (int)PspQueryProcessIdListCallback, (__int64)&v11, 1);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    *a4 = 8 * Object[54] + 8;
    *a2 = Object[54];
    a2[1] = v13;
  }
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
  return v9;
}
