/*
 * XREFs of PfSnPrefetchSections @ 0x140664110
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140664C24 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x1400E17E0 (KeQueryPriorityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406643BC (PfSnPrefetchSectionsCleanup.c)
 *     PfSnLogGetReadListsStop @ 0x140664B30 (PfSnLogGetReadListsStop.c)
 *     PfSnLogGetReadListsStart @ 0x140664BA8 (PfSnLogGetReadListsStart.c)
 */

__int64 __fastcall PfSnPrefetchSections(__int64 *a1, WORK_QUEUE_TYPE a2, int a3, __int64 a4, KSPIN_LOCK a5)
{
  int v5; // r15d
  __int64 *v6; // r13
  __int64 v7; // r14
  WORK_QUEUE_TYPE v8; // r12d
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rbx
  unsigned int v12; // ebx
  unsigned int *v13; // rsi
  int v14; // r14d
  unsigned int *v15; // rsi
  WORK_QUEUE_TYPE v16; // r13d
  __int64 v17; // r12
  int v18; // ebx
  __int64 v19; // r8
  __int64 v21; // rax
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h]
  WORK_QUEUE_TYPE QueueType; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-A8h]
  int v29; // [rsp+68h] [rbp-A0h] BYREF
  WORK_QUEUE_TYPE v30; // [rsp+70h] [rbp-98h]
  int v31; // [rsp+78h] [rbp-90h] BYREF
  WORK_QUEUE_TYPE v32; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-80h] BYREF
  KSPIN_LOCK v34; // [rsp+90h] [rbp-78h]
  __int64 *v35; // [rsp+98h] [rbp-70h]
  void *v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+A8h] [rbp-60h] BYREF
  KSPIN_LOCK SpinLock[7]; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-10h]
  int v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+104h] [rbp-4h]
  __int64 v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int64 v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  int *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  WORK_QUEUE_TYPE *p_QueueType; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  char *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+158h] [rbp+50h] BYREF
  __int64 v54; // [rsp+168h] [rbp+60h]
  int v55; // [rsp+170h] [rbp+68h]
  int v56; // [rsp+174h] [rbp+6Ch]
  __int64 v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  __int64 v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  int *v61; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]
  WORK_QUEUE_TYPE *v63; // [rsp+1A8h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+A8h]
  __int16 *v65; // [rsp+1B8h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+B8h]
  __int64 *v67; // [rsp+1C8h] [rbp+C0h]
  __int64 v68; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v69; // [rsp+1D8h] [rbp+D0h]
  __int64 v70; // [rsp+1E0h] [rbp+D8h]

  v5 = 0;
  v35 = a1;
  v6 = a1;
  v30 = a2;
  v7 = -1LL;
  v26 = a3;
  v8 = a2;
  v34 = a5;
  v9 = *a1;
  v10 = 0;
  v28 = 0;
  v11 = v9;
  v22 = 0;
  QueueType = a2;
  v29 = a3;
  if ( v9 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Start) )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)(v9 + 16 + 2 * v21) );
    LOWORD(v24) = v21;
    UserData.Ptr = (ULONGLONG)&v24;
    v41 = 2 * (unsigned __int16)v21;
    v40 = v9 + 16;
    v43 = v9 + 76;
    v45 = v9 + 80;
    v47 = &v29;
    p_QueueType = &QueueType;
    v51 = &v22;
    *(_QWORD *)&UserData.Size = 2LL;
    v42 = 0;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 1LL;
    EtwWrite(RegHandle, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
    v11 = *v6;
  }
  if ( v26 >= 1 << *(_DWORD *)(v11 + 124) )
    goto LABEL_33;
  if ( v8 == CriticalWorkQueue )
    goto LABEL_8;
  if ( v8 != DelayedWorkQueue )
  {
LABEL_33:
    v18 = -1073741811;
    goto LABEL_24;
  }
  v5 = 1;
LABEL_8:
  v12 = *(_DWORD *)(v9 + 88);
  v36 = (void *)v6[8];
  memset(v36, 0, 8LL * v12);
  v13 = (unsigned int *)v6[11];
  memset(v13, 0, 0x600uLL);
  memset(SpinLock, 0, 0x30uLL);
  ExInitializePushLock(SpinLock);
  SpinLock[2] = v34;
  SpinLock[1] = (KSPIN_LOCK)v6;
  LODWORD(SpinLock[4]) = v12;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v12 > 0x20 )
    v12 = 32;
  PfSnLogGetReadListsStart(v9, v12);
  if ( v12 )
  {
    v14 = v26;
    v15 = v13 + 11;
    v16 = QueueType;
    v17 = v12;
    do
    {
      *(v15 - 1) = v14;
      *(_QWORD *)(v15 - 3) = SpinLock;
      *v15 = v5 | *v15 & 0xFFFFFFFE;
      *(_QWORD *)(v15 - 11) = 0LL;
      *(_QWORD *)(v15 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v15 - 5) = v15 - 11;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)SpinLock);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v15 - 11), v16);
      v15 += 12;
      --v17;
    }
    while ( v17 );
    v8 = v30;
    v7 = -1LL;
    v6 = v35;
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SpinLock);
  PfSnLogGetReadListsStop(v9);
  v10 = SpinLock[3];
  v18 = SpinLock[5];
  if ( SLODWORD(SpinLock[5]) >= 0 )
  {
    v28 = HIDWORD(SpinLock[4]);
    if ( !LODWORD(SpinLock[3]) )
    {
      v18 = 0;
      goto LABEL_24;
    }
    if ( HIDWORD(SpinLock[4]) )
    {
      v18 = MmPrefetchPagesEx(SpinLock[3], (__int64)v36, v6 + 13);
      if ( v18 >= 0 && !v6[13] )
        v18 = -2147483622;
    }
    else
    {
      v18 = -1073741823;
    }
  }
  if ( v10 )
  {
    v19 = v10;
    if ( v10 > 0x20 )
      v19 = 32LL;
    PfSnPrefetchSectionsCleanup(v6, v10, v19, v34);
  }
LABEL_24:
  v31 = v26;
  v37 = v28;
  v33 = v10;
  LOBYTE(v23) = 0;
  v32 = v8;
  if ( v9 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Stop) )
  {
    do
      ++v7;
    while ( *(_WORD *)(v9 + 16 + 2 * v7) );
    v54 = v9 + 16;
    v53.Ptr = (ULONGLONG)&v25;
    v25 = v7;
    v55 = 2 * (unsigned __int16)v7;
    *(_QWORD *)&v53.Size = 2LL;
    v57 = v9 + 76;
    v59 = v9 + 80;
    v61 = &v31;
    v63 = &v32;
    v65 = &v23;
    v67 = &v37;
    v69 = &v33;
    v56 = 0;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 1LL;
    v68 = 8LL;
    v70 = 4LL;
    EtwWrite(RegHandle, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &v53);
  }
  return (unsigned int)v18;
}
