/*
 * XREFs of VidSchiSelectContext @ 0x1C00085C0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0008280 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C00CDE90 (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00088B0 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C0009AC0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0014954 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0014A08 (VidSchiStartNodeYield.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContext(__int64 a1, int a2, __int64 a3, int a4)
{
  struct _VIDSCH_CONTEXT *v6; // rdi
  __int64 v7; // rax
  __int64 SetBits; // rax
  __int64 *v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  CCHAR v14; // al
  int v15; // r9d
  CCHAR MostSignificantBit; // al
  CCHAR v18; // al
  int v19; // r9d
  LARGE_INTEGER v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  LARGE_INTEGER v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-78h] BYREF
  __int64 v35; // [rsp+58h] [rbp-60h] BYREF
  __int128 v36; // [rsp+60h] [rbp-58h]
  __int64 v37; // [rsp+70h] [rbp-48h]
  union _LARGE_INTEGER v38; // [rsp+C0h] [rbp+8h] BYREF
  char v39; // [rsp+C8h] [rbp+10h] BYREF
  union _LARGE_INTEGER v40; // [rsp+D0h] [rbp+18h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D8h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  if ( *(_DWORD *)(a1 + 704) )
  {
    v7 = *(_QWORD *)(a1 + 232);
    if ( v7 && (*(_DWORD *)(v7 + 184) & 1) != 0 )
    {
      v6 = *(struct _VIDSCH_CONTEXT **)(a1 + 232);
      goto LABEL_19;
    }
    if ( *(_DWORD *)(a1 + 68) == 1 )
    {
      v10 = **(_QWORD **)(a1 + 616);
      if ( !*(_DWORD *)(v10 + 1752) )
        goto LABEL_19;
      goto LABEL_13;
    }
    RtlCopyBitMapEx(a1 + 424, a1 + 520, 0LL);
    RtlIntersectBitMapsEx(a1 + 520, a1 + 472);
    if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 520, 0LL, *(_QWORD *)(a1 + 520)) )
      RtlCopyBitMapEx(a1 + 424, a1 + 520, 0LL);
    SetBits = RtlFindSetBitsEx(a1 + 520, 1LL, (unsigned int)(*(_DWORD *)(a1 + 696) + 1));
    if ( SetBits != -1 )
    {
      v9 = *(__int64 **)(a1 + 616);
      if ( (unsigned int)SetBits < *(_DWORD *)(a1 + 688) )
        v9 += (unsigned int)SetBits;
      v10 = *v9;
      *(_DWORD *)(a1 + 696) = SetBits;
LABEL_13:
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 1756) )
        {
          v11 = *(_QWORD *)(v10 + 24);
          v39 = 0;
          v37 = 0LL;
          v35 = v10;
          v36 = 0LL;
          DpSynchronizeExecution(
            *(_QWORD *)(v11 + 24),
            VidSchiUpdateNodeRunningTimeAtISR,
            &v35,
            *(unsigned int *)(v11 + 32),
            &v39);
        }
        v12 = *(_QWORD *)(v10 + 24);
        PerformanceFrequency.QuadPart = 0LL;
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v13 = *(unsigned int *)(v10 + 1752);
        if ( *(_BYTE *)(v10 + 2008)
          && (v13 & 0xC0000000) == 0
          && (v13 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v12 + 184)))) != 0 )
        {
          MostSignificantBit = RtlFindMostSignificantBit(v13 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v12 + 184))));
          v6 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v10, MostSignificantBit, 1);
          if ( v6 )
          {
            VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v10);
          }
          else
          {
            v18 = RtlFindMostSignificantBit(*(unsigned int *)(v10 + 1752));
            v6 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v10, v18, 0);
            if ( !*(_QWORD *)(v10 + 1984) )
            {
              v38.QuadPart = 0LL;
              v20 = KeQueryPerformanceCounter(&v38);
              v21 = *(unsigned int *)(*((_QWORD *)v6 + 13) + 504LL);
              v22 = 0LL;
              if ( (unsigned int)v21 <= *(_DWORD *)(a1 + 40) )
                v22 = (unsigned int)v21;
              v23 = (unsigned int)v22;
              v24 = *(_QWORD *)(a1 + 8 * v22 + 2576);
              v25 = *(unsigned int *)(v24 + 70580);
              if ( !(_DWORD)v25 )
              {
                v26 = WdLogNewEntry5_WdWarning(v24, v21);
                *(_QWORD *)(v26 + 24) = v23;
                WdLogEvent5_WdWarning(v26);
                v25 = 16LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                v10,
                (LARGE_INTEGER)v20.QuadPart,
                (union _LARGE_INTEGER)v38.QuadPart,
                v25);
            }
            VidSchiProfilePerformanceTick(20, a1, v10, v19, (__int64)v6, 0LL, 0LL, 1LL);
          }
        }
        else
        {
          v14 = RtlFindMostSignificantBit(*(unsigned int *)(v10 + 1752));
          v6 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v10, v14, 0);
          if ( (*(_DWORD *)(a1 + 1936) & 4) != 0 && *(_BYTE *)(v10 + 2008) && !*(_QWORD *)(v10 + 1984) )
          {
            v40.QuadPart = 0LL;
            v27 = KeQueryPerformanceCounter(&v40);
            v28 = *(unsigned int *)(*((_QWORD *)v6 + 13) + 504LL);
            v29 = 0LL;
            if ( (unsigned int)v28 <= *(_DWORD *)(a1 + 40) )
              v29 = (unsigned int)v28;
            v30 = (unsigned int)v29;
            v31 = *(_QWORD *)(a1 + 8 * v29 + 2576);
            v32 = *(unsigned int *)(v31 + 70580);
            if ( !(_DWORD)v32 )
            {
              v33 = WdLogNewEntry5_WdWarning(v31, v28);
              *(_QWORD *)(v33 + 24) = v30;
              WdLogEvent5_WdWarning(v33);
              v32 = 16LL;
            }
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
              v10,
              (LARGE_INTEGER)v27.QuadPart,
              (union _LARGE_INTEGER)v40.QuadPart,
              v32);
          }
          VidSchiProfilePerformanceTick(20, a1, v10, v15, (__int64)v6, 0LL, 0LL, 0LL);
        }
      }
    }
  }
LABEL_19:
  VidSchiProfilePerformanceTick(2, a1, 0, a4, (__int64)v6, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v6;
}
