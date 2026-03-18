/*
 * XREFs of VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C00168C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0016974 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 */

__int64 __fastcall VidSchQueryLastCompletedVidPnSourcePresentIdDWM(
        KSPIN_LOCK *a1,
        __int64 a2,
        unsigned int a3,
        struct _D3DKMT_PRESENT_STATS_DWM *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  struct _VIDSCH_DEVICE *v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v11);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 >= *((_DWORD *)a1 + 10) )
  {
    v12 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  _mm_lfence();
  KeAcquireInStackQueuedSpinLock(a1 + 206, &LockHandle);
  v9 = *(struct _VIDSCH_DEVICE **)(a1[v5 + 322] + 16);
  if ( v9 )
    VidSchQueryLastCompletedPresentIdDWMInternal((struct _VIDSCH_GLOBAL *)a1, v9, v5, a3, a4);
  else
    v4 = -1073741811;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
