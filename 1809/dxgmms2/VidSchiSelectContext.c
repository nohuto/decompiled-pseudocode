/*
 * XREFs of VidSchiSelectContext @ 0x1C002FDD8
 * Callers:
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C00CB3F0 (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C0008BD0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013DC8 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0013E94 (VidSchiStartNodeYield.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C00154D0 (VidSchiUpdateNodeRunningTime.c)
 *     ?VidSchiFindPriorityLevelToSchedule@@YAKPEAU_VIDSCH_NODE@@PEA_N@Z @ 0x1C002A014 (-VidSchiFindPriorityLevelToSchedule@@YAKPEAU_VIDSCH_NODE@@PEA_N@Z.c)
 *     ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002B2E8 (-VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiUpdatePriorityTables @ 0x1C0030DE4 (VidSchiUpdatePriorityTables.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContext(KSPIN_LOCK *a1, int a2)
{
  struct _VIDSCH_CONTEXT *v4; // rsi
  __int64 v5; // r9
  KSPIN_LOCK v6; // rax
  struct _VIDSCH_NODE *v7; // rax
  __int64 v8; // rbx
  unsigned int PriorityLevelToSchedule; // eax
  bool v10; // bp
  CCHAR MostSignificantBit; // al
  __int64 v12; // r9
  LARGE_INTEGER v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  KSPIN_LOCK v17; // rcx
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r9
  LARGE_INTEGER v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  KSPIN_LOCK v25; // rcx
  int v26; // r9d
  __int64 v27; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  bool v30; // [rsp+A8h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+18h] BYREF
  union _LARGE_INTEGER v32; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(a1 + 206, &LockHandle);
  if ( (unsigned int)VidSchiUpdatePriorityTables(a1, 0LL, 0LL) )
  {
    v6 = a1[29];
    if ( v6 && (*(_DWORD *)(v6 + 184) & 1) != 0 )
    {
      v4 = (struct _VIDSCH_CONTEXT *)a1[29];
    }
    else
    {
      v7 = VidSchiSelectReadyNode((struct _VIDSCH_GLOBAL *)a1);
      v8 = (__int64)v7;
      if ( v7 )
      {
        if ( *((_DWORD *)v7 + 439) )
          VidSchiUpdateNodeRunningTime((__int64)v7, 0LL);
        v30 = 0;
        PriorityLevelToSchedule = VidSchiFindPriorityLevelToSchedule((struct _VIDSCH_NODE *)v8, &v30);
        v10 = v30;
        if ( v30 )
        {
          v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, PriorityLevelToSchedule, 1);
          if ( v4 )
          {
            VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v8);
          }
          else
          {
            MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v8 + 1752));
            v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, MostSignificantBit, 0);
            if ( !*(_QWORD *)(v8 + 1984) )
            {
              v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
              v14 = *(unsigned int *)(*((_QWORD *)v4 + 13) + 504LL);
              v15 = 0LL;
              if ( (unsigned int)v14 <= *((_DWORD *)a1 + 10) )
                v15 = (unsigned int)v14;
              v16 = (unsigned int)v15;
              v17 = a1[v15 + 322];
              v18 = *(_DWORD *)(v17 + 70564);
              if ( !v18 )
              {
                v19 = WdLogNewEntry5_WdWarning(v17, v14);
                *(_QWORD *)(v19 + 24) = v16;
                WdLogEvent5_WdWarning(v19);
                v18 = 16;
              }
              VidSchiStartNodeYield(v8, v13.QuadPart, PerformanceFrequency.QuadPart, v18);
            }
            VidSchiProfilePerformanceTick(20LL, (__int64)a1, v8, v12, (__int64)v4, 0LL, 0LL, v10);
          }
        }
        else
        {
          v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, PriorityLevelToSchedule, 0);
          if ( (a1[242] & 4) != 0 && *(_BYTE *)(v8 + 2008) && !*(_QWORD *)(v8 + 1984) )
          {
            v21 = KeQueryPerformanceCounter(&v32);
            v22 = *(unsigned int *)(*((_QWORD *)v4 + 13) + 504LL);
            v23 = 0LL;
            if ( (unsigned int)v22 <= *((_DWORD *)a1 + 10) )
              v23 = (unsigned int)v22;
            v24 = (unsigned int)v23;
            v25 = a1[v23 + 322];
            v26 = *(_DWORD *)(v25 + 70564);
            if ( !v26 )
            {
              v27 = WdLogNewEntry5_WdWarning(v25, v22);
              *(_QWORD *)(v27 + 24) = v24;
              WdLogEvent5_WdWarning(v27);
              v26 = 16;
            }
            VidSchiStartNodeYield(v8, v21.QuadPart, v32.QuadPart, v26);
          }
          VidSchiProfilePerformanceTick(20LL, (__int64)a1, v8, v20, (__int64)v4, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(2LL, (__int64)a1, 0LL, v5, (__int64)v4, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
