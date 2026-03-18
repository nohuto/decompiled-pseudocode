/*
 * XREFs of VidSchInitializeAdapter @ 0x1C0081ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00183C0 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z @ 0x1C0018548 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEAAPEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@I@Z @ 0x1C00185D0 (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEA.c)
 *     ??0_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C0018630 (--0_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiInitializeNode @ 0x1C0082BE8 (VidSchiInitializeNode.c)
 *     VidSchiCreateNode @ 0x1C0082CEC (VidSchiCreateNode.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C0082FD0 (VidSchiReadGlobalConfiguration.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0083DE8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchTerminateAdapter @ 0x1C00C9A80 (VidSchTerminateAdapter.c)
 */

_VIDSCH_GLOBAL *__fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  _VIDSCH_GLOBAL *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _VIDSCH_GLOBAL *v10; // rbx
  _VIDSCH_GLOBAL *v11; // rbx
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // r10
  int v18; // ecx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r14
  void *v21; // rcx
  PVOID v22; // rax
  size_t v23; // r15
  void *v24; // rax
  unsigned int v25; // r15d
  PVOID v26; // rax
  void *v27; // rax
  int v28; // ecx
  __int64 v29; // r14
  SIZE_T v30; // r14
  PVOID v31; // rax
  SIZE_T v32; // rsi
  PVOID v33; // rax
  SIZE_T v34; // rsi
  PVOID v35; // rax
  PVOID v36; // rax
  int v37; // eax
  struct _KEVENT *v38; // rsi
  __int64 v39; // r14
  struct _KEVENT *v40; // rsi
  __int64 v41; // r14
  __int64 Timer; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  NTSTATUS v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned int v49; // edx
  unsigned int v50; // r14d
  PVOID v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // r15
  __int64 v56; // r12
  __int64 v57; // r13
  union _SLIST_HEADER *v58; // rcx
  __int64 v59; // r12
  __int64 v60; // r15
  __int64 v61; // r13
  union _SLIST_HEADER *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  void *v65; // rcx
  unsigned int v66; // edx
  __int64 v67; // rcx
  unsigned int i; // r8d
  __int64 v69; // rcx
  _QWORD *v70; // rdx
  unsigned int v71; // esi
  unsigned int v72; // eax
  unsigned int v73; // r14d
  unsigned int v74; // r12d
  unsigned int v75; // eax
  _QWORD *v76; // r13
  _QWORD *v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // r15
  _QWORD *v80; // rax
  unsigned int v81; // r15d
  _QWORD *v82; // r12
  __int64 v83; // r14
  _QWORD *v84; // rax
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rsi
  int v89; // eax
  NTSTATUS v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rsi
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // [rsp+40h] [rbp-89h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-79h] BYREF
  __int64 v105; // [rsp+80h] [rbp-49h] BYREF
  int v106; // [rsp+88h] [rbp-41h]
  const wchar_t *v107; // [rsp+90h] [rbp-39h]
  unsigned int *v108; // [rsp+98h] [rbp-31h]
  int v109; // [rsp+A0h] [rbp-29h]
  int *v110; // [rsp+A8h] [rbp-21h]
  int v111; // [rsp+B0h] [rbp-19h]
  __int64 v112; // [rsp+B8h] [rbp-11h]
  int v113; // [rsp+C0h] [rbp-9h]
  _BYTE v114[40]; // [rsp+C8h] [rbp-1h] BYREF
  unsigned int v115; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v116; // [rsp+148h] [rbp+7Fh]

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    PoolWithTag = (_VIDSCH_GLOBAL *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x1740uLL, 0x30616956u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1740uLL);
      v11 = _VIDSCH_GLOBAL::_VIDSCH_GLOBAL(v10);
      *(_DWORD *)v11 = 811690326;
      *((_DWORD *)v11 + 1) = *(_DWORD *)(v6 + 208);
      *((_QWORD *)v11 + 1) = a1;
      *((_QWORD *)v11 + 2) = v6;
      *((_QWORD *)v11 + 3) = a2;
      *((_DWORD *)v11 + 8) = *(_DWORD *)(v6 + 1860);
      *((_DWORD *)v11 + 9) = 7;
      *((_QWORD *)v11 + 740) = a3;
      v12 = *(_DWORD *)(v6 + 1328);
      *((_DWORD *)v11 + 10) = v12;
      if ( !v12 )
      {
        *((_DWORD *)v11 + 10) = 1;
        *((_BYTE *)v11 + 50) = 1;
      }
      if ( *(_BYTE *)(v6 + 2367) )
        *((_BYTE *)v11 + 51) = 1;
      *((_BYTE *)v11 + 45) = (*(_DWORD *)(v6 + 1888) & 2) != 0;
      *((_BYTE *)v11 + 44) = *(_BYTE *)(v6 + 2362);
      *((_BYTE *)v11 + 46) = (*(_DWORD *)(v6 + 1888) & 0x10) != 0;
      *((_BYTE *)v11 + 47) = (*(_DWORD *)(v6 + 1884) & 0x10) != 0;
      *((_BYTE *)v11 + 48) = (*(_DWORD *)(v6 + 1888) & 0x20) == 0;
      *((_BYTE *)v11 + 49) = (*(_DWORD *)(v6 + 1888) & 0x40) != 0;
      v13 = 14;
      *((_BYTE *)v11 + 53) = (**(_DWORD **)(v6 + 4112) & 0x40) != 0;
      if ( ((*(_DWORD *)(v6 + 1888) >> 7) & 0xF) != 0 && ((*(_DWORD *)(v6 + 1888) >> 7) & 0xFu) < 0xE )
        v13 = (*(_DWORD *)(v6 + 1888) >> 7) & 0xF;
      *((_DWORD *)v11 + 53) = v13;
      v14 = 0LL;
      *((_DWORD *)v11 + 35) = *(_DWORD *)(v6 + 2368);
      *((_BYTE *)v11 + 144) = *(_BYTE *)(v6 + 2466) != 0;
      *((_DWORD *)v11 + 37) = *(_DWORD *)(v6 + 2396);
      v15 = *(_DWORD *)(v6 + 256);
      *((_QWORD *)v11 + 8) = v15;
      if ( v15 )
      {
        v16 = 0LL;
        v17 = v15;
        do
        {
          v18 = *(unsigned __int16 *)(v16 + *(_QWORD *)(v6 + 2416));
          v16 += 352LL;
          v14 = (unsigned int)(v18 + v14);
          *((_DWORD *)v11 + 17) = v14;
          --v17;
        }
        while ( v17 );
      }
      v19 = v15 + (unsigned int)v14;
      *((_DWORD *)v11 + 18) = v19;
      v20 = (v19 + 63) >> 6;
      v21 = (void *)v19;
      if ( (unsigned int)v19 > 8 )
      {
        v14 = 0xFFFFFFFFFFFFFFFFuLL % v19;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 8 )
          goto LABEL_107;
        v23 = 8 * v19;
        v22 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v19, 0x30616956u);
      }
      else
      {
        v22 = (char *)v11 + 624;
        v23 = 8LL * (unsigned int)v19;
      }
      *((_QWORD *)v11 + 77) = v22;
      v21 = (void *)*((_QWORD *)v11 + 77);
      *((_DWORD *)v11 + 172) = v19;
      v24 = v21;
      if ( v21 && (_DWORD)v19 )
      {
        memset(v21, 0, v23);
        v24 = (void *)*((_QWORD *)v11 + 77);
      }
      if ( !v24 )
        goto LABEL_107;
      v25 = *((_DWORD *)v11 + 18);
      if ( v25 > 8 )
      {
        v14 = 0xFFFFFFFFFFFFFFFFuLL % v25;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 4 )
          goto LABEL_107;
        v26 = ExAllocatePoolWithTag((POOL_TYPE)512, 4LL * v25, 0x30616956u);
      }
      else
      {
        v26 = (char *)v11 + 1976;
      }
      *((_QWORD *)v11 + 246) = v26;
      v21 = (void *)*((_QWORD *)v11 + 246);
      *((_DWORD *)v11 + 502) = v25;
      v27 = v21;
      if ( v21 && v25 )
      {
        memset(v21, 0, 4LL * v25);
        v27 = (void *)*((_QWORD *)v11 + 246);
      }
      if ( v27
        && NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((_DWORD *)v11 + 110, v20)
        && NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((_DWORD *)v11 + 122, v20)
        && NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((_DWORD *)v11 + 134, v20)
        && NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((_DWORD *)v11 + 146, v20) )
      {
        RtlInitializeBitMapEx((char *)v11 + 424, *((_QWORD *)v11 + 55), *((unsigned int *)v11 + 18));
        RtlInitializeBitMapEx((char *)v11 + 472, *((_QWORD *)v11 + 61), *((unsigned int *)v11 + 18));
        RtlInitializeBitMapEx((char *)v11 + 520, *((_QWORD *)v11 + 67), *((unsigned int *)v11 + 18));
        RtlInitializeBitMapEx((char *)v11 + 568, *((_QWORD *)v11 + 73), *((unsigned int *)v11 + 18));
        v28 = 31;
        v29 = *((unsigned int *)v11 + 16);
        if ( *(_DWORD *)(v6 + 1880) < 0x1Fu )
          v28 = *(_DWORD *)(v6 + 1880);
        *((_DWORD *)v11 + 504) = v28;
        v30 = 8 * v29;
        *((_DWORD *)v11 + 484) ^= (*((_DWORD *)v11 + 484) ^ *(_DWORD *)(v6 + 1884)) & 8;
        v31 = ExAllocatePoolWithTag((POOL_TYPE)512, v30, 0x30616956u);
        *((_QWORD *)v11 + 31) = v31;
        if ( v31 )
        {
          memset(v31, 0, v30);
          v32 = 8LL * *((unsigned int *)v11 + 16);
          v33 = ExAllocatePoolWithTag((POOL_TYPE)512, v32, 0x30616956u);
          *((_QWORD *)v11 + 32) = v33;
          if ( v33 )
          {
            memset(v33, 0, v32);
            v34 = 8LL * *((unsigned int *)v11 + 16);
            v35 = ExAllocatePoolWithTag((POOL_TYPE)512, v34, 0x30616956u);
            *((_QWORD *)v11 + 33) = v35;
            if ( v35 )
            {
              memset(v35, 0, v34);
              v36 = ExAllocatePoolWithTag((POOL_TYPE)512, v30, 0x30616956u);
              *((_QWORD *)v11 + 34) = v36;
              if ( v36 )
              {
                memset(v36, 0, v30);
                *((_DWORD *)v11 + 74) = 0;
                VidSchiReadGlobalConfiguration(v11);
                v37 = 3;
                if ( (*((_BYTE *)v11 + 1936) & 0x18) != 0x18 )
                  v37 = 1;
                *((_DWORD *)v11 + 485) = v37;
                *((_DWORD *)v11 + 486) = 5;
                if ( !*((_DWORD *)v11 + 487) && (*(_DWORD *)(v6 + 1884) & 0x40) == 0 )
                  *((_DWORD *)v11 + 487) = 1;
                if ( !*((_DWORD *)v11 + 488) )
                  *((_DWORD *)v11 + 488) = ((int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)v11 + 2)) >= 2400) + 1;
                if ( !*((_DWORD *)v11 + 489) )
                  *((_DWORD *)v11 + 489) = 2;
                ExInitializeResourceLite((PERESOURCE)((char *)v11 + 904));
                ExInitializeResourceLite((PERESOURCE)((char *)v11 + 1008));
                ExInitializeResourceLite((PERESOURCE)((char *)v11 + 304));
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 206);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 209);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 207);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 208);
                v38 = (struct _KEVENT *)((char *)v11 + 1112);
                v39 = 4LL;
                do
                {
                  memset(v38, 0, 0x38uLL);
                  KeInitializeEvent(v38, SynchronizationEvent, 0);
                  v38 = (struct _KEVENT *)((char *)v38 + 56);
                  --v39;
                }
                while ( v39 );
                v40 = (struct _KEVENT *)((char *)v11 + 1336);
                v41 = 4LL;
                do
                {
                  memset(v40, 0, 0x38uLL);
                  KeInitializeEvent(v40, SynchronizationEvent, 0);
                  v40 = (struct _KEVENT *)((char *)v40 + 56);
                  --v41;
                }
                while ( v41 );
                Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, v11, 4LL);
                *((_QWORD *)v11 + 21) = Timer;
                if ( !Timer )
                {
LABEL_101:
                  v97 = WdLogNewEntry5_WdWarning(v44, v43);
                  WdLogEvent5_WdWarning(v97);
LABEL_110:
                  VidSchTerminateAdapter(v11);
                  return 0LL;
                }
                *((_QWORD *)v11 + 36) = (char *)v11 + 280;
                *((_QWORD *)v11 + 35) = (char *)v11 + 280;
                InitializeSListHead((PSLIST_HEADER)v11 + 106);
                *((_QWORD *)v11 + 215) = (char *)v11 + 1712;
                *((_QWORD *)v11 + 214) = (char *)v11 + 1712;
                *((_QWORD *)v11 + 196) = (char *)v11 + 1560;
                *((_QWORD *)v11 + 195) = (char *)v11 + 1560;
                *((_QWORD *)v11 + 198) = (char *)v11 + 1576;
                *((_QWORD *)v11 + 197) = (char *)v11 + 1576;
                *((_QWORD *)v11 + 200) = (char *)v11 + 1592;
                *((_QWORD *)v11 + 199) = (char *)v11 + 1592;
                *((_QWORD *)v11 + 202) = (char *)v11 + 1608;
                *((_QWORD *)v11 + 201) = (char *)v11 + 1608;
                *((_QWORD *)v11 + 318) = (char *)v11 + 2536;
                *((_QWORD *)v11 + 317) = (char *)v11 + 2536;
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 319);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 320);
                *((_QWORD *)v11 + 204) = (char *)v11 + 1624;
                *((_QWORD *)v11 + 203) = (char *)v11 + 1624;
                *((_QWORD *)v11 + 94) = (char *)v11 + 744;
                *((_QWORD *)v11 + 93) = (char *)v11 + 744;
                *((_QWORD *)v11 + 96) = (char *)v11 + 760;
                *((_QWORD *)v11 + 95) = (char *)v11 + 760;
                *((_QWORD *)v11 + 98) = (char *)v11 + 776;
                *((_QWORD *)v11 + 97) = (char *)v11 + 776;
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 233);
                ExInitializeResourceLite((PERESOURCE)((char *)v11 + 2272));
                KeInitializeEvent((PRKEVENT)v11 + 99, SynchronizationEvent, 0);
                *((_QWORD *)v11 + 223) = v11;
                *((_QWORD *)v11 + 222) = VidSchiControlVSyncThread;
                *((_QWORD *)v11 + 220) = 0LL;
                *((_QWORD *)v11 + 230) = VidSchiDeferredVisibilityThread;
                *((_QWORD *)v11 + 231) = v6;
                *((_QWORD *)v11 + 228) = 0LL;
                *((_QWORD *)v11 + 360) = (char *)v11 + 2872;
                *((_QWORD *)v11 + 359) = (char *)v11 + 2872;
                v45 = ExInitializeLookasideListEx(
                        (PLOOKASIDE_LIST_EX)((char *)v11 + 800),
                        0LL,
                        0LL,
                        (POOL_TYPE)512,
                        0,
                        *((_DWORD *)v11 + 35)
                      * ((*((_DWORD *)v11 + 16) << 6) + ((8 * *((_DWORD *)v11 + 16) + 191) & 0xFFFFFFF8))
                      + 616
                      + 8 * *((_DWORD *)v11 + 16),
                        0x38616956u,
                        0);
                v48 = v45;
                if ( v45 < 0 )
                {
                  v98 = WdLogNewEntry5_WdAssertion(v47, v46);
                  *(_QWORD *)(v98 + 24) = v11;
                  *(_QWORD *)(v98 + 32) = v48;
LABEL_109:
                  WdLogEvent5_WdAssertion(v98);
                  goto LABEL_110;
                }
                v49 = *((_DWORD *)v11 + 10);
                v50 = 0;
                *((_BYTE *)v11 + 896) = 1;
                if ( v49 )
                {
                  do
                  {
                    v51 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x113B0uLL, 0x39616956u);
                    *((_QWORD *)v11 + v50 + 322) = v51;
                    if ( !v51 )
                      goto LABEL_101;
                    memset(v51, 0, 0x113B0uLL);
                    v52 = 0;
                    **((_DWORD **)v11 + v50 + 322) = 962685270;
                    *(_DWORD *)(*((_QWORD *)v11 + v50 + 322) + 33272LL) = -1;
                    for ( *(_BYTE *)(*((_QWORD *)v11 + v50 + 322) + 66420LL) = 1;
                          v52 < *((_DWORD *)v11 + 35);
                          *(_DWORD *)(216 * v53 + *((_QWORD *)v11 + v50 + 322) + 164) = -1 )
                    {
                      v53 = v52++;
                    }
                    v54 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x39616956u);
                    *((_QWORD *)v11 + v50 + 724) = v54;
                    if ( !v54 )
                      goto LABEL_101;
                    *(_QWORD *)v54 = 0LL;
                    v54[2] = 0;
                    InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v11 + v50 + 322) + 33632LL));
                    v55 = 0LL;
                    v56 = 0LL;
                    v57 = 64LL;
                    do
                    {
                      *(_DWORD *)(v55 + *((_QWORD *)v11 + v50 + 322) + 33648) = 929130838;
                      v58 = (union _SLIST_HEADER *)*((_QWORD *)v11 + v50 + 322);
                      ExpInterlockedPushEntrySList(v58 + 2102, (PSLIST_ENTRY)&v58[v56 + 2104]);
                      v56 += 32LL;
                      v55 += 512LL;
                      --v57;
                    }
                    while ( v57 );
                    v59 = 0LL;
                    *(_QWORD *)(*((_QWORD *)v11 + v50 + 322) + 66432LL) = 0LL;
                    *(_WORD *)(*((_QWORD *)v11 + v50 + 322) + 70560LL) = 0;
                    InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v11 + v50 + 322) + 66448LL));
                    v60 = 0LL;
                    v61 = 64LL;
                    do
                    {
                      *(_DWORD *)(v60 + *((_QWORD *)v11 + v50 + 322) + 66464) = 1650551126;
                      v62 = (union _SLIST_HEADER *)*((_QWORD *)v11 + v50 + 322);
                      ExpInterlockedPushEntrySList(v62 + 4153, (PSLIST_ENTRY)&v62[v59 + 4155]);
                      v59 += 4LL;
                      v60 += 64LL;
                      --v61;
                    }
                    while ( v61 );
                    *(_DWORD *)(*((_QWORD *)v11 + v50 + 322) + 104LL) = *((_DWORD *)v11 + 52);
                    *(_QWORD *)(*((_QWORD *)v11 + v50 + 322) + 112LL) = ExAllocatePoolWithTag(
                                                                          (POOL_TYPE)512,
                                                                          72LL
                                                                        * *(unsigned int *)(*((_QWORD *)v11 + v50 + 322)
                                                                                          + 104LL),
                                                                          0x39616956u);
                    v64 = *((_QWORD *)v11 + v50 + 322);
                    v65 = *(void **)(v64 + 112);
                    if ( !v65 )
                    {
                      v98 = WdLogNewEntry5_WdAssertion(0LL, v63);
                      *(_QWORD *)(v98 + 24) = v50;
                      goto LABEL_109;
                    }
                    memset(v65, 0, 72LL * *(unsigned int *)(v64 + 104));
                    v49 = *((_DWORD *)v11 + 10);
                  }
                  while ( ++v50 < v49 );
                }
                v66 = *((_DWORD *)v11 + 35) * v49;
                if ( !v66 )
                  v66 = 1;
                if ( !NonPagedPoolZeroedArray<_VIDSCH_INDEPENDENT_FLIP_STATE,1,962685270>::AllocateElements(
                        (_DWORD *)v11 + 676,
                        v66) )
                {
                  _InterlockedAdd(&dword_1C004D700, 1u);
                  v99 = WdLogNewEntry5_WdLowResource(v67);
                  *(_QWORD *)(v99 + 24) = 821LL;
                  WdLogEvent5_WdLowResource(v99);
                  goto LABEL_110;
                }
                for ( i = 0; i < *((_DWORD *)v11 + 712); *v70 = v70 )
                {
                  v69 = 136LL * i++;
                  v70 = (_QWORD *)(v69 + *((_QWORD *)v11 + 338) + 120LL);
                  v70[1] = v70;
                }
                *((_DWORD *)v11 + 716) = -1;
                v71 = 0;
                v72 = *((_DWORD *)v11 + 16);
                v73 = 0;
                *((_QWORD *)v11 + 357) = 0LL;
                if ( v72 )
                {
                  while ( 1 )
                  {
                    v74 = 0;
                    v75 = *(unsigned __int16 *)(352LL * v73 + *(_QWORD *)(v6 + 2416));
                    v116 = v75;
                    *((_BYTE *)v11 + v73 + 76) = v71;
                    if ( v75 )
                      break;
LABEL_75:
                    v72 = *((_DWORD *)v11 + 16);
                    if ( ++v73 >= v72 )
                      goto LABEL_76;
                  }
                  while ( 1 )
                  {
                    v76 = (_QWORD *)*((_QWORD *)v11 + 77);
                    if ( v71 < *((_DWORD *)v11 + 172) )
                      v76 += v71;
                    *v76 = VidSchiCreateNode(v11, v73, v74, v71);
                    v77 = (_QWORD *)*((_QWORD *)v11 + 77);
                    v78 = *((unsigned int *)v11 + 172);
                    v79 = v71;
                    v80 = &v77[v79];
                    if ( v71 >= (unsigned int)v78 )
                      v80 = (_QWORD *)*((_QWORD *)v11 + 77);
                    if ( !*v80 )
                      break;
                    if ( v71 < (unsigned int)v78 )
                      v77 = (_QWORD *)((char *)v77 + v79 * 8);
                    if ( (int)VidSchiInitializeNode(*v77) < 0 )
                      goto LABEL_110;
                    ++v71;
                    if ( ++v74 >= v116 )
                      goto LABEL_75;
                  }
                }
                else
                {
LABEL_76:
                  v81 = 0;
                  if ( !v72 )
                  {
LABEL_86:
                    v102 = 1;
                    v107 = L"PageFaultDebugMode";
                    v105 = 0LL;
                    v106 = 288;
                    v108 = &v115;
                    v110 = &v102;
                    v109 = 67108868;
                    v111 = 4;
                    v112 = 0LL;
                    v113 = 0;
                    memset(v114, 0, sizeof(v114));
                    v85 = RtlQueryRegistryValuesEx(
                            0LL,
                            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
                            &v105,
                            0LL,
                            0LL);
                    v88 = v85;
                    if ( v85 < 0 )
                    {
                      v115 = 1;
                      v100 = WdLogNewEntry5_WdWarning(v87, v86);
                      *(_QWORD *)(v100 + 24) = v88;
                      WdLogEvent5_WdWarning(v100);
                    }
                    v89 = v115;
                    if ( v115 > 1 )
                    {
                      v101 = WdLogNewEntry5_WdWarning(v87, v86);
                      *(_QWORD *)(v101 + 24) = v115;
                      WdLogEvent5_WdWarning(v101);
                      v89 = 1;
                      v115 = 1;
                    }
                    g_PageFaultDebugMode = v89;
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 512;
                    ObjectAttributes.ObjectName = 0LL;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    v90 = PsCreateSystemThread(
                            &ThreadHandle,
                            0x1FFFFFu,
                            &ObjectAttributes,
                            0LL,
                            0LL,
                            VidSchiWorkerThread,
                            v11);
                    v93 = v90;
                    if ( v90 >= 0 )
                    {
                      VidSchiRequestSchedulerStatus(v11, 1LL, 1LL);
                      ObfReferenceObject(*((PVOID *)v11 + 19));
                      ZwClose(ThreadHandle);
                      return v11;
                    }
                    v98 = WdLogNewEntry5_WdAssertion(v92, v91);
                    *(_QWORD *)(v98 + 32) = v93;
                    goto LABEL_108;
                  }
                  while ( 1 )
                  {
                    v82 = (_QWORD *)*((_QWORD *)v11 + 77);
                    if ( v71 < *((_DWORD *)v11 + 172) )
                      v82 += v71;
                    *v82 = VidSchiCreateNode(v11, v81, 0x7FFFLL, v71);
                    v77 = (_QWORD *)*((_QWORD *)v11 + 77);
                    v78 = *((unsigned int *)v11 + 172);
                    v83 = v71;
                    v84 = &v77[v83];
                    if ( v71 >= (unsigned int)v78 )
                      v84 = (_QWORD *)*((_QWORD *)v11 + 77);
                    if ( !*v84 )
                      break;
                    if ( v71 < (unsigned int)v78 )
                      v77 = (_QWORD *)((char *)v77 + v83 * 8);
                    if ( (int)VidSchiInitializeNode(*v77) < 0 )
                      goto LABEL_110;
                    ++v71;
                    if ( ++v81 >= *((_DWORD *)v11 + 16) )
                      goto LABEL_86;
                  }
                }
                v98 = WdLogNewEntry5_WdAssertion(v77, v78);
                *(_QWORD *)(v98 + 32) = v71;
LABEL_108:
                *(_QWORD *)(v98 + 24) = v6;
                goto LABEL_109;
              }
            }
          }
        }
      }
LABEL_107:
      v98 = WdLogNewEntry5_WdAssertion(v21, v14);
      goto LABEL_108;
    }
    v96 = WdLogNewEntry5_WdWarning(v9, v8);
    WdLogEvent5_WdWarning(v96);
  }
  else
  {
    v95 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v95);
  }
  return 0LL;
}
