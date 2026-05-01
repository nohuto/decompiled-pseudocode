/*
 * XREFs of ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90
 * Callers:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180003184 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000E2C0 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180023A10 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180024350 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180028200 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18002DB40 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180034DA0 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180034E10 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007A99C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007AC10 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800029F4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18000CE24 (-HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@Exec.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000D1C0 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000E0B0 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E230 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180014A00 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180014CD0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x18002BD10 (RmpActivityImportanceMergeVectors.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002BED0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800308B4 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180030900 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18003C038 (-HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18004936C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x1800783B0 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 */

void __fastcall HampHostUpdateActivityState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  _QWORD *v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // rcx
  int v5; // esi
  unsigned int v6; // r15d
  int v7; // ebx
  unsigned __int8 v8; // r13
  BOOL v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // r11
  int v13; // r8d
  __int16 v14; // di
  unsigned __int16 v15; // r8
  unsigned int v16; // r10d
  unsigned int v17; // edx
  signed int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int8 v20; // cl
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 v24; // r8
  __int64 v25; // rdx
  struct _HAM_DEPENDENCY_GROUP *v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  char v31; // bl
  unsigned __int16 v32; // r15
  ULONG SizeOfBitMap; // r13d
  unsigned int v34; // edi
  __int64 v35; // rsi
  char v36; // r15
  __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  int v40; // eax
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r8
  char v43; // cl
  __int64 v44; // rdx
  __int64 v45; // rcx
  char v46; // si
  __int16 v47; // cx
  int v48; // edi
  int v49; // r15d
  DWORD v50; // r12d
  __int64 v51; // r13
  _QWORD *Value; // rsi
  _QWORD *v53; // rax
  bool v54; // zf
  unsigned __int64 v55; // rcx
  int v56; // edx
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  BOOL v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // r15d
  DWORD v65; // edi
  __int64 v66; // rsi
  _QWORD *v67; // rbx
  unsigned int v68; // edx
  _QWORD *v69; // rax
  __int64 v70; // r8
  char v71; // al
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  unsigned int v75; // r11d
  BOOL IsSuspendWaiter; // eax
  unsigned int v77; // ebx
  __int64 v78; // rax
  __int64 v79; // rcx
  struct _HAM_ACTIVITY *NextActivity; // rcx
  int v81; // edx
  __int64 v82; // rax
  int v83; // r8d
  struct _HOST_ACTIVITY_MANAGER *v84; // rdi
  __int64 v85; // [rsp+40h] [rbp-38h]
  unsigned __int64 v86; // [rsp+50h] [rbp-28h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+58h] [rbp-20h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+68h] [rbp-10h] BYREF
  struct _FILETIME v89; // [rsp+C0h] [rbp+48h] BYREF
  int v90; // [rsp+C8h] [rbp+50h] BYREF
  int v91; // [rsp+D0h] [rbp+58h] BYREF
  int v92; // [rsp+D8h] [rbp+60h] BYREF

  if ( (*((_QWORD *)a1 + 81) & 0x10000000000LL) != 0 )
  {
    v89.dwLowDateTime = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v92, (union _RM_OPTIMIZATION_STATE *)&v91);
    if ( (v92 & 0x80u) == 0 || (v91 & 0x80u) != 0 )
    {
      if ( (v92 & 0x100) == 0 || (v91 & 0x100) != 0 )
      {
        v78 = *((_QWORD *)a1 + 81);
        if ( (v78 & 0x800000000LL) != 0 )
        {
          v89.dwLowDateTime = 0;
        }
        else if ( (v78 & 0x40000000000LL) == 0 || (v89.dwLowDateTime = 0, (v78 & 0x30000) == 0) )
        {
          v89.dwLowDateTime = 1;
        }
      }
      else
      {
        v89.dwLowDateTime = 0;
      }
    }
    else
    {
      v89.dwLowDateTime = 0;
    }
  }
  v2 = (_QWORD *)((char *)a1 + 600);
  v3 = 0;
  v4 = *((_QWORD *)a1 + 75);
  v5 = 0;
  v6 = 0;
  v90 = 0;
  v7 = 0;
  v8 = 6;
  v9 = v4 != (_QWORD)a1 + 600;
  v10 = v4 - 96;
  v11 = 0LL;
  if ( v9 )
    v11 = v10;
  if ( v11 )
  {
    while ( (*(_BYTE *)(v11 + 544) & 0x28) != 0 )
    {
LABEL_28:
      v21 = *(_QWORD *)(v11 + 96);
      v22 = *(_QWORD *)(v11 + 80);
      v11 = 0LL;
      if ( v21 != v22 + 600 )
        v11 = v21 - 96;
      if ( !v11 )
      {
        v2 = (_QWORD *)((char *)a1 + 600);
        goto LABEL_32;
      }
    }
    v12 = *(_BYTE *)(v11 + 548);
    if ( v12 == 3 )
    {
      v5 = 1;
    }
    else if ( v12 != 2 )
    {
LABEL_24:
      if ( (v12 == 3 || v12 == 2 && *(_BYTE *)(v11 + 549) >= 3u) && (*(_DWORD *)(v11 + 112) & 0x100000) != 0 )
      {
        v3 = 1;
        v90 = 1;
      }
      v20 = *(_BYTE *)(v11 + 549);
      if ( v20 != 6 && v8 <= v20 )
        v8 = *(_BYTE *)(v11 + 549);
      goto LABEL_28;
    }
    if ( *(_QWORD *)(v11 + 64) )
    {
      v13 = *(_DWORD *)(v11 + 112) >> 13;
      if ( *(_DWORD *)(*(_QWORD *)(v11 + 80) + 560LL) == 2 )
        LOBYTE(v13) = *(_DWORD *)(v11 + 112) >> 10;
      if ( (v13 & 1) != 0 )
      {
        v14 = *(_WORD *)(v11 + 424);
        v15 = v14 & 0xE;
        v6 = 1;
        if ( (v14 & 0xC0) == 0xC0 )
          v16 = 2;
        else
          v16 = v15 >= 8u && (v14 & 0x30u) >= 0x20;
        v17 = *(_DWORD *)(v11 + 480) & 3;
        v18 = v17;
        if ( v17 <= v16 )
          v18 = v16;
        if ( v7 <= v18 )
        {
          if ( (v14 & 0xC0) == 0xC0 )
            v19 = 2;
          else
            v19 = v15 >= 8u && (v14 & 0x30u) >= 0x20;
          v7 = *(_DWORD *)(v11 + 480) & 3;
          if ( v17 <= v19 )
            v7 = v19;
        }
        v3 = v90;
      }
    }
    goto LABEL_24;
  }
LABEL_32:
  v23 = *((_QWORD *)a1 + 81) ^ ((__int64)v7 << 32);
  v24 = v8;
  v25 = v3;
  v26 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 86);
  v27 = (*((_QWORD *)a1 + 81) ^ v23 & 0x300000000LL ^ ((unsigned __int64)v6 << 36)) & 0x1000000000LL ^ *((_QWORD *)a1 + 81) ^ v23 & 0x300000000LL;
  v28 = v27 ^ (v27 ^ (v25 << 39)) & 0x8000000000LL;
  if ( v5 )
    v24 = 6;
  *((_QWORD *)a1 + 81) = v28 ^ ((unsigned int)v28 ^ (v24 << 26)) & 0x1C000000;
  if ( v26 && (v24 == 0) != (((v28 >> 26) & 7) == 0) )
  {
    v81 = 1;
    if ( v24 )
      v81 = -1;
    HampDepGroupAddRemoveResourceWaiter(v26, v81);
    v2 = (_QWORD *)((char *)a1 + 600);
  }
  v29 = *((_QWORD *)a1 + 81);
  if ( (v29 & 0x4000000000LL) == 0 && ((v29 & 0x30000) == 0 || (v29 & 0x8000000000LL) != 0) )
  {
    v70 = 0LL;
    if ( (_QWORD *)*v2 != v2 )
      v70 = *v2 - 96LL;
    if ( v70 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v70 + 544) & 0x28) == 0 )
        {
          v71 = *(_BYTE *)(v70 + 548);
          if ( (v71 == 3 || v71 == 2 && *(_BYTE *)(v70 + 549) >= 3u) && (*(_DWORD *)(v70 + 112) & 0x400) != 0 )
            break;
        }
        v72 = *(_QWORD *)(v70 + 96);
        v73 = *(_QWORD *)(v70 + 80);
        v70 = 0LL;
        if ( v72 != v73 + 600 )
          v70 = v72 - 96;
        if ( !v70 )
          goto LABEL_37;
      }
      FirstActivity = HampHostGetFirstActivity(a1);
      if ( FirstActivity )
      {
        do
        {
          if ( (unsigned __int8)(*((_BYTE *)FirstActivity + 548) - 2) <= 1u
            && (*((_DWORD *)FirstActivity + 30) & 0x100) != 0
            && (v75 & *((_DWORD *)FirstActivity + 136)) < v75 )
          {
            v82 = *((_QWORD *)a1 + 81);
            v83 = 4;
            if ( (v82 & 0x30000) == 0 )
              v83 = 2;
            HampActRequestStopEx((__int64)FirstActivity, 3u, v83, 0, (unsigned __int16)v82, 0x80u, 0LL);
          }
          FirstActivity = HampHostGetNextActivity(FirstActivity);
        }
        while ( FirstActivity );
        v2 = (_QWORD *)((char *)a1 + 600);
      }
    }
  }
LABEL_37:
  v30 = *((_QWORD *)a1 + 81);
  v31 = 0;
  v86 = v30 >> 37;
  v32 = 1;
  v90 = 1;
  SizeOfBitMap = (v30 >> 44) & 1;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = SizeOfBitMap;
  *((_QWORD *)a1 + 81) = v30 & 0x3FFFE09FFFFFFFFFLL;
  v34 = v90;
  v35 = 0LL;
  if ( (_QWORD *)*v2 != v2 )
    v35 = *v2 - 96LL;
  if ( v35 )
  {
    do
    {
      if ( (*(_BYTE *)(v35 + 544) & 0x28) == 0 )
      {
        v36 = *(_BYTE *)(v35 + 548);
        if ( v36 == 3 || v36 == 2 && *(_BYTE *)(v35 + 549) )
        {
          v37 = *(unsigned int *)(v35 + 424);
          if ( v36 == 2 && !*(_QWORD *)(v35 + 512) && ((v37 & 0x40) != 0 || ((unsigned __int8)v37 & 0xEu) >= 8) )
            *((_QWORD *)a1 + 81) |= 0x100000000000uLL;
          v38 = RmpActivityImportanceMergeVectors(v34, v37);
          v39 = *((_QWORD *)a1 + 81);
          v34 = v38;
          v40 = *(_DWORD *)(v35 + 112);
          if ( (v40 & 0x2000) != 0 )
            v39 = *((_QWORD *)a1 + 81) | 0x80000000000LL;
          v41 = ((unsigned __int64)*(unsigned int *)(v35 + 112) >> 23) & 3;
          if ( v41 <= v39 >> 62 )
            v41 = v39 >> 62;
          v42 = v39 & 0x3FFFFFFFFFFFFFFFLL | (v41 << 62);
          *((_QWORD *)a1 + 81) = v42;
          if ( v42 >= 0x4000000000000000LL )
            *((_QWORD *)a1 + 82) |= 3uLL;
          v43 = *(_BYTE *)(v35 + 548);
          if ( v43 == 3 || v43 == 2 && *(_BYTE *)(v35 + 549) >= 3u )
          {
            if ( (v40 & 0x400) != 0 )
            {
              v42 |= 0x4000000000uLL;
              *((_QWORD *)a1 + 81) = v42;
              v43 = *(_BYTE *)(v35 + 548);
            }
            if ( v43 == 3 || v43 == 2 && *(_BYTE *)(v35 + 549) >= 5u )
            {
              if ( (v40 & 0x400) != 0 )
              {
                v42 |= 0x10000000000uLL;
                *((_QWORD *)a1 + 81) = v42;
              }
              if ( v36 == 3 )
              {
                if ( (v40 & 0x800) != 0 )
                  v42 |= 0x20000000000uLL;
                if ( (v40 & 0x1000) != 0 )
                  v42 |= 0x40000000000uLL;
                if ( (v40 & 0x10000) != 0 )
                  v31 = 1;
                *((_QWORD *)a1 + 81) = v42 | 0x2000000000LL;
              }
            }
          }
        }
      }
      v44 = *(_QWORD *)(v35 + 96);
      v45 = *(_QWORD *)(v35 + 80);
      v35 = 0LL;
      if ( v44 != v45 + 600 )
        v35 = v44 - 96;
    }
    while ( v35 );
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v90 = v34;
    v32 = v34;
  }
  HampHostCheckUpdateSuspendWaitState(a1, v89.dwLowDateTime);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v46 = v90;
  v47 = *((_WORD *)a1 + 332) & 0xE;
  v89 = SystemTimeAsFileTime;
  if ( v47 == 8 )
  {
    if ( (v90 & 0xE) == 8 )
      goto LABEL_71;
    *((struct _FILETIME *)a1 + 129) = v89;
  }
  else
  {
    if ( (v90 & 0xE) != 8 )
      goto LABEL_71;
    *((struct _FILETIME *)a1 + 128) = v89;
  }
  v79 = *((_QWORD *)a1 + 97);
  *((_QWORD *)a1 + 81) |= 0x2000000000000000uLL;
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(v79 + 88));
LABEL_71:
  *((_DWORD *)a1 + 166) = v34;
  if ( (v32 & 0x400) == 0 )
    *((_QWORD *)a1 + 81) &= ~0x8000000000000uLL;
  if ( (v46 & 0x40) != 0 && *((_QWORD *)a1 + 122) && *((_QWORD *)a1 + 123) )
  {
    v84 = (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 168);
    HampManagerAcquireLockExclusive(v84);
    HampManagerTriggerInswapTurn(v84, 1u);
    HampManagerReleaseLockExclusive(v84);
  }
  v48 = v32 >> 1;
  v49 = v32 >> 4;
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    v50 = HampLockTrackerId;
    v51 = *((_QWORD *)a1 + 97);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v50) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(v51 + 576);
    *(_DWORD *)(v51 + 584) = GetCurrentThreadId();
    v89.dwLowDateTime = *(_DWORD *)(v51 + 616) & 0xFFFFFEE0 | v48 & 7 | (8 * (v49 & 3 | (32 * (v31 & 1))));
    if ( *(_DWORD *)(v51 + 616) != v89.dwLowDateTime )
      HampAppCommitStateSummary((struct _HAM_APPLICATION *)v51, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v89);
    if ( HampLockTrackerId != -1 )
    {
      v53 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v53 & 0x20) == 0 )
        __int2c();
      v54 = v53[6]-- == 1LL;
      if ( v54 )
        *v53 &= ~0x20uLL;
    }
    *(_DWORD *)(v51 + 584) = 0;
    RtlReleaseSRWLockExclusive(v51 + 576);
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  }
  v55 = *((_QWORD *)a1 + 81);
  if ( (((unsigned __int8)v86 ^ (unsigned __int8)(v55 >> 37)) & 1) != 0 )
  {
    RtlWakeAllConditionVariable((char *)a1 + 16);
    v55 = *((_QWORD *)a1 + 81);
  }
  if ( (v55 & 0x100000000000LL) != 0 && !SizeOfBitMap && (v55 & 0x30000) != 0 )
    HampHostIssueStopRequests((__int64)a1, 2u, 4, 0, 5, 0, 2, 0LL, v85, 0LL);
  RtlWakeAllConditionVariable((char *)a1 + 680);
  HampHostCheckQueueStateWorker(a1, 0);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v90, (union _RM_OPTIMIZATION_STATE *)&v86);
  v57 = *((_QWORD *)a1 + 81);
  if ( ((v57 >> 16) & 3) == 0 )
    goto LABEL_92;
  if ( ((v57 >> 16) & 3) != 1 )
  {
    if ( ((v57 >> 16) & 3) == 2 )
    {
      if ( (v57 & 0x10000000000000LL) != 0 )
        goto LABEL_92;
    }
    else if ( ((v57 >> 16) & 3) != 3 )
    {
      goto LABEL_92;
    }
LABEL_175:
    if ( (v57 & 0x800000000LL) == 0 )
    {
      IsSuspendWaiter = HampHostIsSuspendWaiter(a1, v56);
      *((_QWORD *)a1 + 81) |= 0x800000000uLL;
      v77 = IsSuspendWaiter;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)a1 + 78));
      HampHostCheckUpdateSuspendWaitState(a1, v77);
    }
    goto LABEL_92;
  }
  if ( (v90 & 0x80u) == 0 || (v86 & 0x80u) != 0LL || (v57 & 0x40000000000LL) != 0 )
    goto LABEL_92;
  NextActivity = HampHostGetFirstActivity(a1);
  if ( !NextActivity )
    goto LABEL_175;
  while ( (*((_BYTE *)NextActivity + 544) & 0x28) != 0
       || !HampActIsStartedOrReachedPendState((__int64)NextActivity, 5u)
       || (*((_DWORD *)NextActivity + 28) & 0x2000) == 0 )
  {
    NextActivity = HampHostGetNextActivity(NextActivity);
    if ( !NextActivity )
      goto LABEL_175;
  }
LABEL_92:
  if ( *((_DWORD *)a1 + 140) != 2 )
    return;
  v58 = *((_QWORD *)a1 + 75);
  v59 = v58 != (_QWORD)a1 + 600;
  v60 = v58 - 96;
  v61 = 0LL;
  if ( v59 )
    v61 = v60;
  while ( v61 )
  {
    if ( *(_BYTE *)(v61 + 548) == 3 && (*(_BYTE *)(v61 + 544) & 0x28) == 0 )
    {
      RtlInitializeBitMap(&BitMapHeader, (PULONG)(v61 + 496), 0x2Fu);
      if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
        goto LABEL_104;
    }
    v62 = *(_QWORD *)(v61 + 96);
    v63 = *(_QWORD *)(v61 + 80);
    v61 = 0LL;
    if ( v62 != v63 + 600 )
      v61 = v62 - 96;
  }
  if ( (*((_QWORD *)a1 + 81) & 0x800000000000000LL) != 0
    && (unsigned int)HampUtilHasExternalResourceAccess(
                       (ULONG *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                        + 120)
                                            + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               + 588),
                       27) )
  {
LABEL_104:
    v64 = 1;
    goto LABEL_105;
  }
  v64 = 0;
LABEL_105:
  v65 = HampLockTrackerId;
  v66 = *((_QWORD *)a1 + 97);
  if ( HampLockTrackerId != -1 )
  {
    v67 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v65) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v67 |= 0x20uLL;
    ++v67[6];
  }
  RtlAcquireSRWLockExclusive(v66 + 576);
  *(_DWORD *)(v66 + 584) = GetCurrentThreadId();
  v68 = *(_DWORD *)(v66 + 608) & 0xFFFBFFFF | (v64 << 18);
  *(_DWORD *)(v66 + 608) = v68;
  if ( v64 != ((v68 >> 17) & 1) && (v68 & 0x80000) == 0 )
  {
    *(_DWORD *)(v66 + 608) = v68 | 0x80000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 24)) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*(_QWORD *)(v66 + 560));
  }
  if ( HampLockTrackerId != -1 )
  {
    v69 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v69 & 0x20) == 0 )
      __int2c();
    v54 = v69[6]-- == 1LL;
    if ( v54 )
      *v69 &= ~0x20uLL;
  }
  *(_DWORD *)(v66 + 584) = 0;
  RtlReleaseSRWLockExclusive(v66 + 576);
}
