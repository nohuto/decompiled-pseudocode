/*
 * XREFs of VidSchTerminateAdapter @ 0x1C00CC870
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0085700 (VidSchInitializeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1C00C9C3C (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchIsWorkerThread @ 0x1C00012F0 (VidSchIsWorkerThread.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C00069F0 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiDecrementContextReference @ 0x1C0011460 (VidSchiDecrementContextReference.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002E058 (VidSchiClearPeriodicFrameNotifications.c)
 *     ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C003173C (--1_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     VidSchTerminateHwContext @ 0x1C00384E0 (VidSchTerminateHwContext.c)
 *     VidSchTerminateHwQueue @ 0x1C0038600 (VidSchTerminateHwQueue.c)
 *     VidSchTerminateContext @ 0x1C007BF20 (VidSchTerminateContext.c)
 *     VidSchTerminateDevice @ 0x1C007C000 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncAdapter @ 0x1C007CE40 (VidSchControlVSyncAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C008762C (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00CB190 (VidSchFlushAdapter.c)
 *     VidSchiBlockDriverCallback @ 0x1C00CE17C (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // ebp
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool IsWorkerThread; // bl
  void *v6; // rbx
  _QWORD *v7; // rcx
  unsigned int i; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned int j; // ebx
  __int64 v12; // rdx
  struct VIDSCH_HW_QUEUE **v13; // rcx
  unsigned int k; // ebx
  _QWORD **v15; // rcx
  unsigned int m; // ebx
  __int64 v17; // rcx
  unsigned int n; // ebx
  __int64 *v19; // rsi
  __int64 v20; // rsi
  struct _VIDSCH_CONTEXT *v21; // rcx
  struct _VIDSCH_CONTEXT *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int ii; // ebx
  _QWORD **v26; // rsi
  _QWORD *v27; // rsi
  struct _VIDSCH_CONTEXT *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  _QWORD *v31; // rcx
  unsigned int v32; // ebx
  int jj; // eax
  PVOID *v34; // rcx
  void *v35; // rcx
  void *v36; // rbx
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
    {
      IsWorkerThread = VidSchIsWorkerThread(v4);
      VidSchFlushAdapter(a1, 15LL);
      if ( !IsWorkerThread )
      {
        v6 = (void *)*((_QWORD *)a1 + 19);
        ObfReferenceObject(v6);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v6);
        return 0LL;
      }
      if ( *((_DWORD *)a1 + 433) )
      {
        *((_DWORD *)a1 + 433) = 1;
        VidSchControlVSyncAdapter((__int64)a1, 4LL, 0);
      }
      VidSchiBlockDriverCallback(a1);
      while ( *((_DWORD *)a1 + 448) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v2 = 1;
    }
    v7 = (_QWORD *)*((_QWORD *)a1 + 34);
    if ( v7 )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 16); ++i )
      {
        v7 = (_QWORD *)*((_QWORD *)a1 + 34);
        v9 = v7[i];
        if ( v9 )
        {
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v7[i], v9);
          v7 = (_QWORD *)*((_QWORD *)a1 + 34);
        }
      }
      ExFreePoolWithTag(v7, 0);
      *((_QWORD *)a1 + 34) = 0LL;
    }
    v10 = (_QWORD *)*((_QWORD *)a1 + 31);
    if ( v10 )
    {
      for ( j = 0; j < *((_DWORD *)a1 + 16); ++j )
      {
        v10 = (_QWORD *)*((_QWORD *)a1 + 31);
        v12 = v10[j];
        if ( v12 )
        {
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v10[j], v12);
          v10 = (_QWORD *)*((_QWORD *)a1 + 31);
        }
      }
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)a1 + 31) = 0LL;
    }
    v13 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 33);
    if ( v13 )
    {
      for ( k = 0; k < *((_DWORD *)a1 + 16); ++k )
      {
        v13 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 33);
        if ( v13[k] )
        {
          VidSchTerminateHwQueue(v13[k]);
          v13 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 33);
        }
      }
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)a1 + 33) = 0LL;
    }
    v15 = (_QWORD **)*((_QWORD *)a1 + 32);
    if ( v15 )
    {
      for ( m = 0; m < *((_DWORD *)a1 + 16); ++m )
      {
        v15 = (_QWORD **)*((_QWORD *)a1 + 32);
        if ( v15[m] )
        {
          VidSchTerminateHwContext(v15[m]);
          v15 = (_QWORD **)*((_QWORD *)a1 + 32);
        }
      }
      ExFreePoolWithTag(v15, 0);
      *((_QWORD *)a1 + 32) = 0LL;
    }
    v17 = *((_QWORD *)a1 + 30);
    if ( v17 )
    {
      VidSchTerminateDevice(v17, v3);
      *((_QWORD *)a1 + 30) = 0LL;
    }
    for ( n = 0; n < *((_DWORD *)a1 + 17); ++n )
    {
      v19 = (__int64 *)*((_QWORD *)a1 + 77);
      if ( n < *((_DWORD *)a1 + 172) )
        v19 += n;
      v20 = *v19;
      if ( v20 )
      {
        v21 = *(struct _VIDSCH_CONTEXT **)(v20 + 32);
        if ( v21 )
        {
          VidSchTerminateContext(v21, v3);
          *(_QWORD *)(v20 + 32) = 0LL;
        }
      }
    }
    v22 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 29);
    if ( v22 )
    {
      VidSchTerminateContext(v22, v3);
      *((_QWORD *)a1 + 29) = 0LL;
    }
    v23 = *((_QWORD *)a1 + 28);
    if ( v23 )
    {
      VidSchTerminateDevice(v23, v3);
      *((_QWORD *)a1 + 28) = 0LL;
    }
    v24 = *((_QWORD *)a1 + 21);
    if ( v24 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v24, v3, 0LL, 0LL);
    }
    for ( ii = 0; ii < *((_DWORD *)a1 + 18); *v31 = 0LL )
    {
      v26 = (_QWORD **)*((_QWORD *)a1 + 77);
      if ( ii < *((_DWORD *)a1 + 172) )
        v26 += ii;
      v27 = *v26;
      v28 = (struct _VIDSCH_CONTEXT *)v27[27];
      if ( v28 )
      {
        VidSchiDecrementContextReference(v28, 0);
        v27[27] = 0LL;
      }
      v29 = (void *)v27[23];
      if ( v29 )
        ExFreePoolWithTag(v29, 0);
      v30 = (void *)v27[25];
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      ExFreePoolWithTag(v27, 0);
      v31 = (_QWORD *)*((_QWORD *)a1 + 77);
      if ( ii < *((_DWORD *)a1 + 172) )
        v31 += ii;
      ++ii;
    }
    v32 = 0;
    for ( *((_DWORD *)a1 + 74) = 2; v32 < *((_DWORD *)a1 + 10); ++v32 )
    {
      if ( *((_QWORD *)a1 + v32 + 322) )
      {
        for ( jj = -1; jj != *((_DWORD *)a1 + 35); ++jj )
          ;
        VidSchiClearPeriodicFrameNotifications((__int64)a1, v32);
        v34 = (PVOID *)*((_QWORD *)a1 + v32 + 322);
        if ( v34[15] )
        {
          ExFreePoolWithTag(v34[15], 0);
          v34 = (PVOID *)*((_QWORD *)a1 + v32 + 322);
        }
        ExFreePoolWithTag(v34, 0);
        *((_QWORD *)a1 + v32 + 322) = 0LL;
      }
      v35 = (void *)*((_QWORD *)a1 + v32 + 724);
      if ( v35 )
      {
        ExFreePoolWithTag(v35, 0);
        *((_QWORD *)a1 + v32 + 724) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 2272));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 304));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1008));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 904));
    if ( *((_BYTE *)a1 + 896) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 800));
      *((_BYTE *)a1 + 896) = 0;
    }
    v36 = (void *)*((_QWORD *)a1 + 19);
    _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(a1);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v36);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
