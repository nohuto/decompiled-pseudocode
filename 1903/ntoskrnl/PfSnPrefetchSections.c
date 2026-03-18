/*
 * XREFs of PfSnPrefetchSections @ 0x14066AEDC
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x14066AE5C (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x14009AD40 (KeQueryPriorityThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14066B198 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnLogGetReadListsStop @ 0x14066BA2C (PfSnLogGetReadListsStop.c)
 *     PfSnLogGetReadListsStart @ 0x14066BAA4 (PfSnLogGetReadListsStart.c)
 *     MmPrefetchPagesEx @ 0x14066D9A8 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfSnPrefetchSections(__int64 *a1, WORK_QUEUE_TYPE a2, int a3, __int64 a4, KSPIN_LOCK a5)
{
  WORK_QUEUE_TYPE v6; // r12d
  __int64 *v7; // r13
  __int64 v8; // rdi
  int v9; // r15d
  __int64 v10; // r14
  unsigned int v11; // esi
  __int64 v12; // rbx
  unsigned int v13; // ebx
  unsigned int *v14; // rsi
  int v15; // r12d
  unsigned int *v16; // rsi
  WORK_QUEUE_TYPE v17; // r13d
  __int64 v18; // r14
  int v19; // ebx
  __int64 v20; // r8
  __int64 v22; // rax
  char v23; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+50h] [rbp-B8h]
  WORK_QUEUE_TYPE QueueType; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-A8h]
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  WORK_QUEUE_TYPE v31; // [rsp+70h] [rbp-98h]
  int v32; // [rsp+78h] [rbp-90h] BYREF
  WORK_QUEUE_TYPE v33; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+88h] [rbp-80h] BYREF
  KSPIN_LOCK v35; // [rsp+90h] [rbp-78h]
  __int64 *v36; // [rsp+98h] [rbp-70h]
  void *v37; // [rsp+A0h] [rbp-68h]
  __int64 v38; // [rsp+A8h] [rbp-60h] BYREF
  KSPIN_LOCK SpinLock[7]; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]
  __int64 v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  __int64 v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  int *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  WORK_QUEUE_TYPE *p_QueueType; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  char *v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+158h] [rbp+50h] BYREF
  __int64 v55; // [rsp+168h] [rbp+60h]
  int v56; // [rsp+170h] [rbp+68h]
  int v57; // [rsp+174h] [rbp+6Ch]
  __int64 v58; // [rsp+178h] [rbp+70h]
  __int64 v59; // [rsp+180h] [rbp+78h]
  __int64 v60; // [rsp+188h] [rbp+80h]
  __int64 v61; // [rsp+190h] [rbp+88h]
  int *v62; // [rsp+198h] [rbp+90h]
  __int64 v63; // [rsp+1A0h] [rbp+98h]
  WORK_QUEUE_TYPE *v64; // [rsp+1A8h] [rbp+A0h]
  __int64 v65; // [rsp+1B0h] [rbp+A8h]
  __int16 *v66; // [rsp+1B8h] [rbp+B0h]
  __int64 v67; // [rsp+1C0h] [rbp+B8h]
  __int64 *v68; // [rsp+1C8h] [rbp+C0h]
  __int64 v69; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v70; // [rsp+1D8h] [rbp+D0h]
  __int64 v71; // [rsp+1E0h] [rbp+D8h]

  v6 = a2;
  v31 = a2;
  v36 = a1;
  v7 = a1;
  v27 = a3;
  v35 = a5;
  memset(SpinLock, 0, 0x30uLL);
  v8 = *v7;
  v9 = 0;
  v10 = -1LL;
  v30 = a3;
  v29 = 0;
  v11 = 0;
  v23 = 0;
  v12 = v8;
  QueueType = v6;
  if ( v8 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Start) )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)(v8 + 16 + 2 * v22) );
    LOWORD(v25) = v22;
    UserData.Ptr = (ULONGLONG)&v25;
    v42 = 2 * (unsigned __int16)v22;
    v41 = v8 + 16;
    v44 = v8 + 76;
    v46 = v8 + 80;
    v48 = &v30;
    p_QueueType = &QueueType;
    v52 = &v23;
    *(_QWORD *)&UserData.Size = 2LL;
    v43 = 0;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 1LL;
    EtwWrite(RegHandle, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
    v12 = *v7;
  }
  if ( v27 >= 1 << *(_DWORD *)(v12 + 124) )
    goto LABEL_33;
  if ( v6 == CriticalWorkQueue )
    goto LABEL_8;
  if ( v6 != DelayedWorkQueue )
  {
LABEL_33:
    v19 = -1073741811;
    goto LABEL_24;
  }
  v9 = 1;
LABEL_8:
  v13 = *(_DWORD *)(v8 + 88);
  v37 = (void *)v7[8];
  memset(v37, 0, 8LL * v13);
  v14 = (unsigned int *)v7[11];
  memset(v14, 0, 0x600uLL);
  memset(SpinLock, 0, 0x30uLL);
  ExInitializePushLock(SpinLock);
  SpinLock[2] = v35;
  SpinLock[1] = (KSPIN_LOCK)v7;
  LODWORD(SpinLock[4]) = v13;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v13 > 0x20 )
    v13 = 32;
  PfSnLogGetReadListsStart(v8, v13);
  if ( v13 )
  {
    v15 = v27;
    v16 = v14 + 11;
    v17 = QueueType;
    v18 = v13;
    do
    {
      *(v16 - 1) = v15;
      *(_QWORD *)(v16 - 3) = SpinLock;
      *v16 = v9 | *v16 & 0xFFFFFFFE;
      *(_QWORD *)(v16 - 11) = 0LL;
      *(_QWORD *)(v16 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v16 - 5) = v16 - 11;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)SpinLock);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v16 - 11), v17);
      v16 += 12;
      --v18;
    }
    while ( v18 );
    v6 = v31;
    v10 = -1LL;
    v7 = v36;
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SpinLock);
  PfSnLogGetReadListsStop(v8);
  v11 = SpinLock[3];
  v19 = SpinLock[5];
  if ( SLODWORD(SpinLock[5]) >= 0 )
  {
    v29 = HIDWORD(SpinLock[4]);
    if ( !LODWORD(SpinLock[3]) )
    {
      v19 = 0;
      goto LABEL_24;
    }
    if ( HIDWORD(SpinLock[4]) )
    {
      v19 = MmPrefetchPagesEx(LODWORD(SpinLock[3]), v37, v7 + 13);
      if ( v19 >= 0 && !v7[13] )
        v19 = -2147483622;
    }
    else
    {
      v19 = -1073741823;
    }
  }
  if ( v11 )
  {
    v20 = v11;
    if ( v11 > 0x20 )
      v20 = 32LL;
    PfSnPrefetchSectionsCleanup(v7, v11, v20, v35);
  }
LABEL_24:
  v32 = v27;
  v38 = v29;
  v34 = v11;
  LOBYTE(v24) = 0;
  v33 = v6;
  if ( v8 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Stop) )
  {
    do
      ++v10;
    while ( *(_WORD *)(v8 + 16 + 2 * v10) );
    v55 = v8 + 16;
    v54.Ptr = (ULONGLONG)&v26;
    v26 = v10;
    v56 = 2 * (unsigned __int16)v10;
    *(_QWORD *)&v54.Size = 2LL;
    v58 = v8 + 76;
    v60 = v8 + 80;
    v62 = &v32;
    v64 = &v33;
    v66 = &v24;
    v68 = &v38;
    v70 = &v34;
    v57 = 0;
    v59 = 4LL;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 1LL;
    v69 = 8LL;
    v71 = 4LL;
    EtwWrite(RegHandle, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &v54);
  }
  return (unsigned int)v19;
}
