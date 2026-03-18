/*
 * XREFs of VidSchTerminateAdapter @ 0x1C00C9A80
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0081ED0 (VidSchInitializeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1C00C6BC8 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiAcceptsIncomingWork @ 0x1C0005130 (VidSchiAcceptsIncomingWork.c)
 *     VidSchIsWorkerThread @ 0x1C000FCE0 (VidSchIsWorkerThread.c)
 *     VidSchiDecrementContextReference @ 0x1C0010CD0 (VidSchiDecrementContextReference.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002D948 (VidSchiClearPeriodicFrameNotifications.c)
 *     ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C0030F04 (--1_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     VidSchTerminateHwContext @ 0x1C0037AA0 (VidSchTerminateHwContext.c)
 *     VidSchTerminateHwQueue @ 0x1C0037BD0 (VidSchTerminateHwQueue.c)
 *     VidSchTerminateDevice @ 0x1C007AA40 (VidSchTerminateDevice.c)
 *     VidSchTerminateContext @ 0x1C007AB50 (VidSchTerminateContext.c)
 *     VidSchControlVSyncAdapter @ 0x1C007C410 (VidSchControlVSyncAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0083DE8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 *     VidSchiBlockDriverCallback @ 0x1C00CB37C (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // ebp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  bool IsWorkerThread; // bl
  void *v7; // rbx
  _QWORD *v8; // rcx
  unsigned int i; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  unsigned int j; // ebx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned int k; // ebx
  __int64 v16; // rdx
  _QWORD **v17; // rcx
  unsigned int m; // ebx
  char *v19; // rcx
  unsigned int n; // ebx
  __int64 *v21; // rsi
  __int64 v22; // rsi
  struct _VIDSCH_CONTEXT *v23; // rcx
  struct _VIDSCH_CONTEXT *v24; // rcx
  char *v25; // rcx
  __int64 v26; // rcx
  unsigned int ii; // ebx
  _QWORD **v28; // rsi
  _QWORD *v29; // rsi
  struct _VIDSCH_CONTEXT *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  _QWORD *v33; // rcx
  unsigned int v34; // ebx
  PVOID *v35; // rcx
  void *v36; // rcx
  void *v37; // rbx
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
        v7 = (void *)*((_QWORD *)a1 + 19);
        ObfReferenceObject(v7);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v7);
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
    v8 = (_QWORD *)*((_QWORD *)a1 + 34);
    if ( v8 )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 16); ++i )
      {
        v8 = (_QWORD *)*((_QWORD *)a1 + 34);
        v10 = v8[i];
        if ( v10 )
        {
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8[i], v10);
          v8 = (_QWORD *)*((_QWORD *)a1 + 34);
        }
      }
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)a1 + 34) = 0LL;
    }
    v11 = (_QWORD *)*((_QWORD *)a1 + 31);
    if ( v11 )
    {
      for ( j = 0; j < *((_DWORD *)a1 + 16); ++j )
      {
        v11 = (_QWORD *)*((_QWORD *)a1 + 31);
        v13 = v11[j];
        if ( v13 )
        {
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v11[j], v13);
          v11 = (_QWORD *)*((_QWORD *)a1 + 31);
        }
      }
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)a1 + 31) = 0LL;
    }
    v14 = (_QWORD *)*((_QWORD *)a1 + 33);
    if ( v14 )
    {
      for ( k = 0; k < *((_DWORD *)a1 + 16); ++k )
      {
        v14 = (_QWORD *)*((_QWORD *)a1 + 33);
        v16 = v14[k];
        if ( v16 )
        {
          VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v14[k], v16, v5);
          v14 = (_QWORD *)*((_QWORD *)a1 + 33);
        }
      }
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)a1 + 33) = 0LL;
    }
    v17 = (_QWORD **)*((_QWORD *)a1 + 32);
    if ( v17 )
    {
      for ( m = 0; m < *((_DWORD *)a1 + 16); ++m )
      {
        v17 = (_QWORD **)*((_QWORD *)a1 + 32);
        if ( v17[m] )
        {
          VidSchTerminateHwContext(v17[m]);
          v17 = (_QWORD **)*((_QWORD *)a1 + 32);
        }
      }
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)a1 + 32) = 0LL;
    }
    v19 = (char *)*((_QWORD *)a1 + 30);
    if ( v19 )
    {
      VidSchTerminateDevice(v19, v3);
      *((_QWORD *)a1 + 30) = 0LL;
    }
    for ( n = 0; n < *((_DWORD *)a1 + 17); ++n )
    {
      v21 = (__int64 *)*((_QWORD *)a1 + 77);
      if ( n < *((_DWORD *)a1 + 172) )
        v21 += n;
      v22 = *v21;
      if ( v22 )
      {
        v23 = *(struct _VIDSCH_CONTEXT **)(v22 + 32);
        if ( v23 )
        {
          VidSchTerminateContext(v23, v3);
          *(_QWORD *)(v22 + 32) = 0LL;
        }
      }
    }
    v24 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 29);
    if ( v24 )
    {
      VidSchTerminateContext(v24, v3);
      *((_QWORD *)a1 + 29) = 0LL;
    }
    v25 = (char *)*((_QWORD *)a1 + 28);
    if ( v25 )
    {
      VidSchTerminateDevice(v25, v3);
      *((_QWORD *)a1 + 28) = 0LL;
    }
    v26 = *((_QWORD *)a1 + 21);
    if ( v26 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v26, v3, 0LL, 0LL);
    }
    for ( ii = 0; ii < *((_DWORD *)a1 + 18); *v33 = 0LL )
    {
      v28 = (_QWORD **)*((_QWORD *)a1 + 77);
      if ( ii < *((_DWORD *)a1 + 172) )
        v28 += ii;
      v29 = *v28;
      v30 = (struct _VIDSCH_CONTEXT *)v29[27];
      if ( v30 )
      {
        VidSchiDecrementContextReference(v30, 0);
        v29[27] = 0LL;
      }
      v31 = (void *)v29[23];
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      v32 = (void *)v29[25];
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      ExFreePoolWithTag(v29, 0);
      v33 = (_QWORD *)*((_QWORD *)a1 + 77);
      if ( ii < *((_DWORD *)a1 + 172) )
        v33 += ii;
      ++ii;
    }
    v34 = 0;
    for ( *((_DWORD *)a1 + 74) = 2; v34 < *((_DWORD *)a1 + 10); ++v34 )
    {
      if ( *((_QWORD *)a1 + v34 + 322) )
      {
        VidSchiClearPeriodicFrameNotifications((__int64)a1, v34);
        v35 = (PVOID *)*((_QWORD *)a1 + v34 + 322);
        if ( v35[14] )
        {
          ExFreePoolWithTag(v35[14], 0);
          v35 = (PVOID *)*((_QWORD *)a1 + v34 + 322);
        }
        ExFreePoolWithTag(v35, 0);
        *((_QWORD *)a1 + v34 + 322) = 0LL;
      }
      v36 = (void *)*((_QWORD *)a1 + v34 + 724);
      if ( v36 )
      {
        ExFreePoolWithTag(v36, 0);
        *((_QWORD *)a1 + v34 + 724) = 0LL;
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
    v37 = (void *)*((_QWORD *)a1 + 19);
    _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(a1);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v37);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
