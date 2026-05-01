/*
 * XREFs of ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30
 * Callers:
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180005A94 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x1800069EC (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800223C0 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800229C0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180024040 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800248E0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18002ACA0 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18002BBF0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18002BE24 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18002E36C (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006C7A0 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x1800037C4 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FAC0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FB0C (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180028F40 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     RmpActivityImportanceMergeVectors @ 0x180029B00 (RmpActivityImportanceMergeVectors.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18002AFB4 (-HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@Exec.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18002C308 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18002C7DC (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18003B6E8 (-HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180049ACC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062C74 (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x180069D38 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x18006A7D0 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 */

void __fastcall HampHostUpdateActivityState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // r15
  __int64 v2; // rax
  _QWORD *v3; // rbx
  int v4; // r12d
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  char *v6; // r8
  unsigned int v7; // r13d
  unsigned int v8; // esi
  int v9; // edi
  unsigned __int8 v10; // r14
  char v11; // bl
  __int16 v12; // dx
  unsigned __int16 v13; // cx
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  signed int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  struct _HAM_DEPENDENCY_GROUP *v26; // rcx
  char *v27; // rdi
  int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // r8
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  __int64 v35; // rax
  int v36; // r8d
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rax
  _QWORD *v39; // r12
  __int64 v40; // r14
  __int16 v41; // si
  struct _RM_HAM_ACTIVITY_HOST *v42; // rcx
  unsigned int v43; // ebx
  char v44; // si
  __int64 v45; // rdx
  unsigned int v46; // eax
  int v47; // r8d
  __int64 v48; // rax
  char v49; // cl
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _HOST_ACTIVITY_MANAGER *v52; // rbx
  unsigned __int64 v53; // rcx
  __int64 v54; // r14
  DWORD v55; // edi
  _QWORD *Value; // rbx
  __int64 v57; // rcx
  BOOL v58; // r12d
  unsigned int v59; // ebx
  DWORD v60; // esi
  __int64 v61; // r13
  _QWORD *v62; // rdi
  bool v63; // di
  _QWORD *v64; // rax
  bool v65; // zf
  __int64 v66; // rdx
  int v67; // ecx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  int v70; // r14d
  char v71; // di
  unsigned __int64 v72; // r8
  __int64 v73; // r12
  __int128 v74; // xmm1
  unsigned __int64 v75; // r12
  __int128 v76; // xmm1
  int v77; // r12d
  struct _HAM_ACTIVITY *NextActivity; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // ebx
  __int64 v82; // rax
  ULONG *v83; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // esi
  DWORD v88; // r14d
  __int64 v89; // rbx
  _QWORD *v90; // rdi
  unsigned int v91; // edx
  _QWORD *v92; // rax
  unsigned int v93; // [rsp+30h] [rbp-D0h]
  unsigned int v94; // [rsp+30h] [rbp-D0h]
  unsigned int v95; // [rsp+30h] [rbp-D0h]
  char v96; // [rsp+34h] [rbp-CCh]
  int v97; // [rsp+38h] [rbp-C8h] BYREF
  int v98; // [rsp+3Ch] [rbp-C4h] BYREF
  int v99; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v100; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v101; // [rsp+50h] [rbp-B0h] BYREF
  int v102; // [rsp+58h] [rbp-A8h] BYREF
  int v103; // [rsp+5Ch] [rbp-A4h] BYREF
  int v104; // [rsp+60h] [rbp-A0h] BYREF
  struct _HAM_ACTIVITY *v105; // [rsp+68h] [rbp-98h] BYREF
  struct _HAM_ACTIVITY *v106; // [rsp+70h] [rbp-90h] BYREF
  __int128 v107; // [rsp+78h] [rbp-88h] BYREF
  __int128 v108; // [rsp+88h] [rbp-78h]
  __int128 v109; // [rsp+98h] [rbp-68h] BYREF
  __int128 v110; // [rsp+A8h] [rbp-58h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+B8h] [rbp-48h] BYREF
  char v112[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v113; // [rsp+D8h] [rbp-28h]
  __int64 v114; // [rsp+E0h] [rbp-20h]
  char v115[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v116; // [rsp+F8h] [rbp-8h]
  __int64 v117; // [rsp+100h] [rbp+0h]
  _OWORD Buf2[2]; // [rsp+108h] [rbp+8h] BYREF
  _OWORD Buf1[2]; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v120[2]; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v121[2]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v122[32]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v123[32]; // [rsp+1A8h] [rbp+A8h] BYREF

  v101 = a1;
  v1 = a1;
  if ( (*((_QWORD *)a1 + 79) & 0x10000000000LL) != 0 )
  {
    v93 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v102, (union _RM_OPTIMIZATION_STATE *)&v103);
    if ( (v102 & 0x80u) == 0 || (v103 & 0x80u) != 0 )
    {
      if ( (v102 & 0x100) == 0 || (v103 & 0x100) != 0 )
      {
        v2 = *((_QWORD *)v1 + 79);
        if ( (v2 & 0x800000000LL) != 0 )
        {
          v93 = 0;
        }
        else if ( (v2 & 0x40000000000LL) == 0 || (v93 = 0, (v2 & 0x30000) == 0) )
        {
          v93 = 1;
        }
      }
      else
      {
        v93 = 0;
      }
    }
    else
    {
      v93 = 0;
    }
  }
  v3 = (_QWORD *)((char *)v1 + 584);
  v4 = 0;
  v5 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v1 + 73);
  v6 = 0LL;
  v7 = 0;
  v100 = (_QWORD *)((char *)v1 + 584);
  v8 = 0;
  v9 = 0;
  v10 = 5;
  if ( v5 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)v1 + 584) )
    v6 = (char *)v5 - 96;
  if ( v6 )
  {
    while ( (v6[544] & 0x28) != 0 )
    {
LABEL_49:
      v20 = *((_QWORD *)v6 + 12);
      v21 = *((_QWORD *)v6 + 10);
      v6 = 0LL;
      if ( v20 != v21 + 584 )
        v6 = (char *)(v20 - 96);
      if ( !v6 )
      {
        v1 = v101;
        v3 = v100;
        goto LABEL_53;
      }
    }
    v11 = v6[548];
    if ( v11 == 3 )
    {
      v4 = 1;
    }
    else if ( v11 != 2 )
    {
LABEL_40:
      if ( (v11 == 3 || v11 == 2 && (unsigned __int8)v6[549] >= 2u) && (*((_DWORD *)v6 + 28) & 0x100000) != 0 )
        v8 = 1;
      v18 = v6[549];
      if ( v18 != 5 )
      {
        v19 = v10;
        if ( v10 <= v18 )
          v19 = v6[549];
        v10 = v19;
      }
      goto LABEL_49;
    }
    if ( *((_QWORD *)v6 + 8) && (*((_DWORD *)v6 + 28) & 0x400) != 0 )
    {
      v12 = *((_WORD *)v6 + 212);
      v7 = 1;
      v13 = v12 & 0xE;
      if ( (v12 & 0xC0) == 0xC0 )
        v14 = 2;
      else
        v14 = v13 >= 8u && (v12 & 0x30u) >= 0x20;
      v15 = *((_DWORD *)v6 + 120) & 3;
      v16 = v15;
      if ( v15 <= v14 )
        v16 = v14;
      if ( v9 <= v16 )
      {
        if ( (v12 & 0xC0) == 0xC0 )
          v17 = 2;
        else
          v17 = v13 >= 8u && (v12 & 0x30u) >= 0x20;
        v9 = *((_DWORD *)v6 + 120) & 3;
        if ( v15 <= v17 )
          v9 = v17;
      }
    }
    goto LABEL_40;
  }
LABEL_53:
  v22 = v10;
  v23 = *((_QWORD *)v1 + 79) ^ (*((_QWORD *)v1 + 79) ^ ((__int64)v9 << 32)) & 0x300000000LL;
  v24 = (v23 ^ ((unsigned __int64)v7 << 36)) & 0x1000000000LL ^ v23;
  v25 = v24 ^ (v24 ^ ((unsigned __int64)v8 << 39)) & 0x8000000000LL;
  v26 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)v1 + 83);
  if ( v4 )
    v22 = 5;
  *((_QWORD *)v1 + 79) = v25 ^ ((unsigned int)v25 ^ (v22 << 26)) & 0x1C000000;
  if ( v26 )
  {
    v27 = 0LL;
    if ( (v22 == 0) != (((v25 >> 26) & 7) == 0) )
    {
      if ( !v22 )
      {
        v28 = 1;
        HampDepGroupAddRemoveResourceWaiter(v26, 1);
        goto LABEL_62;
      }
      HampDepGroupAddRemoveResourceWaiter(v26, -1);
    }
  }
  else
  {
    v27 = 0LL;
  }
  v28 = 1;
LABEL_62:
  v29 = *((_QWORD *)v1 + 79);
  if ( (v29 & 0x4000000000LL) == 0 && ((v29 & 0x30000) == 0 || (v29 & 0x8000000000LL) != 0) )
  {
    v30 = 0LL;
    if ( (_QWORD *)*v3 != v3 )
      v30 = *v3 - 96LL;
    if ( v30 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v30 + 544) & 0x28) == 0 )
        {
          v31 = *(_BYTE *)(v30 + 548);
          if ( (v31 == 3 || v31 == 2 && *(_BYTE *)(v30 + 549) >= 2u) && (*(_DWORD *)(v30 + 112) & 0x400) != 0 )
            break;
        }
        v32 = *(_QWORD *)(v30 + 96);
        v33 = *(_QWORD *)(v30 + 80);
        v30 = 0LL;
        if ( v32 != v33 + 584 )
          v30 = v32 - 96;
        if ( !v30 )
          goto LABEL_86;
      }
      FirstActivity = HampHostGetFirstActivity(v1);
      if ( FirstActivity )
      {
        do
        {
          if ( (unsigned __int8)(*((_BYTE *)FirstActivity + 548) - 2) <= 1u
            && (*((_DWORD *)FirstActivity + 30) & 0x100) != 0
            && (*((_DWORD *)FirstActivity + 136) & 0xC0u) < 0xC0 )
          {
            v35 = *((_QWORD *)v1 + 79);
            v36 = 4;
            if ( (v35 & 0x30000) == 0 )
              v36 = 2;
            HampActRequestStop((__int64)FirstActivity, 3u, v36, (unsigned __int16)v35, 0x80u, 0LL);
          }
          FirstActivity = HampHostGetNextActivity(FirstActivity);
        }
        while ( FirstActivity );
        v28 = 1;
      }
    }
  }
LABEL_86:
  v37 = *((_QWORD *)v1 + 79);
  v38 = v37 & 0xFFFFFFBFFFFFFFFFuLL;
  v39 = (_QWORD *)(v37 >> 37);
  v40 = (*((_QWORD *)v1 + 79) >> 44) & 1LL;
  v100 = v39;
  v101 = (struct _RM_HAM_ACTIVITY_HOST *)v40;
  v41 = 1;
  *((_QWORD *)v1 + 79) = v38 & 0xFFFFE0DFFFFFFFFFuLL;
  v42 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v1 + 73);
  v96 = 1;
  v43 = 1;
  if ( v42 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)v1 + 584) )
    v27 = (char *)v42 - 96;
  if ( v27 )
  {
    do
    {
      if ( (v27[544] & 0x28) == 0 )
      {
        v44 = v27[548];
        if ( v44 == 3 || v44 == 2 && v27[549] )
        {
          v45 = *((unsigned int *)v27 + 106);
          if ( v44 == 2 && !*((_QWORD *)v27 + 64) && ((v45 & 0x40) != 0 || ((unsigned __int8)v45 & 0xEu) >= 8) )
            *((_QWORD *)v1 + 79) |= 0x100000000000uLL;
          v46 = RmpActivityImportanceMergeVectors(v43, v45);
          v47 = *((_DWORD *)v27 + 28);
          v43 = v46;
          v48 = *((_QWORD *)v1 + 79);
          if ( (v47 & 0x2000) != 0 )
          {
            v48 |= 0x80000000000uLL;
            *((_QWORD *)v1 + 79) = v48;
          }
          v49 = v27[548];
          if ( v49 == 3 || v49 == 2 && (unsigned __int8)v27[549] >= 2u )
          {
            if ( (v47 & 0x400) != 0 )
            {
              *((_QWORD *)v1 + 79) |= 0x4000000000uLL;
              v48 = *((_QWORD *)v1 + 79);
              v49 = v27[548];
            }
            if ( v49 == 3 || v49 == 2 && (unsigned __int8)v27[549] >= 4u )
            {
              if ( (v47 & 0x400) != 0 )
              {
                v48 |= 0x10000000000uLL;
                *((_QWORD *)v1 + 79) = v48;
              }
              if ( v44 == 3 )
              {
                if ( (v47 & 0x800) != 0 )
                {
                  v48 |= 0x20000000000uLL;
                  *((_QWORD *)v1 + 79) = v48;
                }
                if ( (v47 & 0x1000) != 0 )
                {
                  v48 |= 0x40000000000uLL;
                  *((_QWORD *)v1 + 79) = v48;
                }
                *((_QWORD *)v1 + 79) = v48 | 0x2000000000LL;
              }
            }
          }
        }
      }
      v50 = *((_QWORD *)v27 + 12);
      v51 = *((_QWORD *)v27 + 10);
      v27 = 0LL;
      if ( v50 != v51 + 584 )
        v27 = (char *)(v50 - 96);
    }
    while ( v27 );
    LODWORD(v40) = (_DWORD)v101;
    v28 = 1;
    LOBYTE(v39) = (_BYTE)v100;
    v96 = v43;
    v41 = v43;
  }
  HampHostCheckUpdateSuspendWaitState(v1, v93);
  *((_DWORD *)v1 + 160) = v43;
  if ( (v41 & 0x400) == 0 )
    *((_QWORD *)v1 + 79) &= ~0x8000000000000uLL;
  if ( (v96 & 0x40) != 0 && *((_QWORD *)v1 + 119) )
  {
    v52 = (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 94) + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 168);
    HampManagerAcquireLockExclusive(v52);
    HampManagerTriggerInswapTurn(v52, 1u);
    HampManagerReleaseLockExclusive(v52);
  }
  v53 = *((_QWORD *)v1 + 79);
  if ( (((unsigned __int8)v39 ^ (unsigned __int8)(v53 >> 37)) & 1) != 0 )
  {
    RtlWakeAllConditionVariable((char *)v1 + 16);
    v53 = *((_QWORD *)v1 + 79);
  }
  if ( (v53 & 0x100000000000LL) != 0 && !(_DWORD)v40 && (v53 & 0x30000) != 0 )
    HampHostIssueStopRequests(v1);
  RtlWakeAllConditionVariable((char *)v1 + 656);
  if ( (*((_BYTE *)v1 + 748) & 1) != 0 )
  {
    v54 = *((_QWORD *)v1 + 83);
    if ( v54 )
    {
      v55 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v55) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
          __int2c();
        *Value |= 8uLL;
        ++Value[4];
      }
      RtlAcquireSRWLockExclusive(v54 + 8);
      v97 = 1;
      *(_DWORD *)(v54 + 16) = GetCurrentThreadId();
      v57 = *((_QWORD *)v1 + 83);
      v58 = *(_QWORD *)(v57 + 104) < *((_QWORD *)v1 + 75);
      v94 = *(_DWORD *)(v57 + 92) != 0;
    }
    else
    {
      v58 = 0;
      v94 = 0;
      v97 = 0;
    }
    LOWORD(v59) = 0;
    if ( (*((_BYTE *)v1 + 748) & 1) != 0 )
    {
      RmHamHostGetCurrentState(v1, (union _RM_OPTIMIZATION_STATE *)&v104, (union _RM_OPTIMIZATION_STATE *)&v100);
      v60 = HampLockTrackerId;
      v61 = *(_QWORD *)(*((_QWORD *)v1 + 94) + 88LL);
      if ( HampLockTrackerId != -1 )
      {
        v62 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v60) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
          __int2c();
        *v62 |= 0x40uLL;
        ++v62[7];
      }
      RtlAcquireSRWLockShared(v61 + 304);
      v63 = (*(_DWORD *)(v61 + 340) & 2) != 0;
      if ( HampLockTrackerId != -1 )
      {
        v64 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v64 & 0x40) == 0 )
          __int2c();
        v65 = v64[7]-- == 1LL;
        if ( v65 )
          *v64 &= ~0x40uLL;
      }
      RtlReleaseSRWLockShared(v61 + 304);
      if ( !v63
        || (v66 = *((_QWORD *)v1 + 79), (v66 & 0x20000000000000LL) != 0)
        || ((v104 & 0x80u) != 0 || (char)v100 < 0 ? (v67 = 0, v28 = 1) : (v28 = 1, v67 = 1), (v66 & 0x30000) != 0
                                                                                          || !v67) )
      {
        if ( v58 )
        {
          LOWORD(v59) = v104 & 0x188;
        }
        else
        {
          v68 = *((_QWORD *)v1 + 79);
          if ( (v68 & 0x10000000000LL) != 0 )
          {
            if ( v94 )
              LOWORD(v59) = v104;
          }
          else
          {
            if ( v54 && *(_DWORD *)(v54 + 88) )
              v59 = v104 & 0x100 | 0x80;
            else
              v59 = 384;
            if ( (v68 & 0x80000000000LL) == 0 )
              v59 |= (v59 >> 5) & 8;
          }
        }
        v28 = 1;
      }
    }
    if ( v97 )
    {
      *(_DWORD *)(v54 + 16) = 0;
      RtlReleaseSRWLockExclusive(v54 + 8);
      if ( HampLockTrackerId != -1 )
      {
        v69 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v69 & 8) == 0 )
          __int2c();
        v65 = v69[4]-- == 1LL;
        if ( v65 )
          *v69 &= ~8uLL;
      }
    }
    RmHamHostGetCurrentState(v1, (union _RM_OPTIMIZATION_STATE *)&v98, (union _RM_OPTIMIZATION_STATE *)&v99);
    v70 = v98 & 0x188;
    v71 = v99 & 0x88;
    if ( (v59 & 0x188) != v70 )
      goto LABEL_194;
    RmHamHostGetCurrentState(v1, (union _RM_OPTIMIZATION_STATE *)&v97, (union _RM_OPTIMIZATION_STATE *)&v101);
    v72 = *((_QWORD *)v1 + 79);
    if ( ((v72 >> 16) & 3) != 0 )
    {
      switch ( (*((_QWORD *)v1 + 79) >> 16) & 3LL )
      {
        case 1LL:
          if ( (v97 & 0x80u) != 0 && (char)v101 >= 0 && (v72 & 0x40000000000LL) == 0 )
          {
            NextActivity = HampHostGetFirstActivity(v1);
            if ( !NextActivity )
              goto LABEL_194;
            while ( 1 )
            {
              if ( !HampActIsIgnored(NextActivity) )
              {
                LOBYTE(v79) = 4;
                if ( (unsigned int)HampActIsStartedOrReachedPendState(v80, v79) )
                {
                  if ( (*(_DWORD *)(v80 + 112) & 0x2000) != 0 )
                    break;
                }
              }
              NextActivity = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v80);
              if ( !NextActivity )
                goto LABEL_194;
            }
          }
          break;
        case 2LL:
          if ( (v72 & 0x10000000000000LL) == 0 )
            goto LABEL_194;
          break;
        case 3LL:
          goto LABEL_194;
      }
    }
    if ( (v72 & 0x10000000000000LL) == 0 && (v72 & 0x80000000000000LL) == 0 && (v72 & 0x40000000000000LL) == 0 )
    {
      HampHostComputeStaticEnforcementSettings(
        v1,
        (struct _RM_ENFORCEMENT_SETTINGS *)&v107,
        (struct _RM_COMMIT_THRESHOLDS *)v122,
        (struct _RM_COMMIT_THRESHOLDS *)v112,
        &v105);
      v73 = *((_QWORD *)v1 + 79);
      if ( ((v73 & 0x100000000000000LL) == 0
         || SDWORD2(v108) < 2 && (BYTE12(v108) & 0x70) == 0 && (BYTE12(v108) & 8) == 0)
        && *((struct _HAM_ACTIVITY **)v1 + 122) == v105 )
      {
        v74 = *(_OWORD *)((char *)v1 + 1064);
        Buf1[0] = 0uLL;
        Buf1[1] = v74;
        Buf2[0] = 0uLL;
        Buf2[1] = v108;
        if ( !memcmp_0(Buf1, Buf2, 0x20uLL)
          && v114 == *((_QWORD *)v1 + 103)
          && v113 == *((_QWORD *)v1 + 104)
          && !memcmp_0(v122, (char *)v1 + 848, 0x20uLL) )
        {
          v95 = 0;
LABEL_195:
          if ( (v73 & 0x10000000000000LL) == 0 || (v73 & 0xE0000000) == 0 || (v73 & 0xE0000000) == 0xA0000000LL )
            v28 = 0;
          if ( (v73 & 0x80000000000000LL) != 0
            || (v73 & 0x40000000000000LL) != 0
            || (HampHostComputeStaticEnforcementSettings(
                  v1,
                  (struct _RM_ENFORCEMENT_SETTINGS *)&v109,
                  (struct _RM_COMMIT_THRESHOLDS *)v123,
                  (struct _RM_COMMIT_THRESHOLDS *)v115,
                  &v106),
                v75 = *((_QWORD *)v1 + 79),
                (v75 & 0x100000000000000LL) != 0)
            && (SDWORD2(v110) >= 2 || (BYTE12(v110) & 0x70) != 0 || (BYTE12(v110) & 8) != 0)
            || *((struct _HAM_ACTIVITY **)v1 + 122) != v106
            || (v76 = *(_OWORD *)((char *)v1 + 1064),
                v121[0] = 0uLL,
                v121[1] = v76,
                v120[0] = 0uLL,
                v120[1] = v110,
                memcmp_0(v121, v120, 0x20uLL))
            || v117 != *((_QWORD *)v1 + 103)
            || v116 != *((_QWORD *)v1 + 104)
            || memcmp_0(v123, (char *)v1 + 848, 0x20uLL) )
          {
            v28 = 1;
          }
          else
          {
            if ( (v59 & 0x80u) != 0 || ((v70 | v71) & 0x80u) == 0 )
            {
              if ( (v59 & 8) == 0 && ((v98 & 8) != 0 || (v99 & 8) != 0) )
                v77 = 1;
              else
                v77 = (v75 >> 52) & 1;
            }
            else
            {
              v77 = 1;
            }
            if ( !v28 && !v77 )
            {
              v81 = v95;
LABEL_230:
              if ( v81 )
              {
                v82 = *((_QWORD *)v1 + 79);
                if ( (v82 & 0x400000000LL) == 0 )
                {
                  *((_QWORD *)v1 + 79) = v82 | 0x400000000LL;
                  if ( _InterlockedIncrement64((volatile signed __int64 *)v1 - 6) <= 1 )
                    __fastfail(0xEu);
                  TpPostWork(*((_QWORD *)v1 + 77));
                }
              }
              goto LABEL_241;
            }
          }
          v81 = v95;
          if ( !v95 )
            goto LABEL_241;
          if ( (*((_BYTE *)v1 + 1128) & 0x27) != 0 )
            RmHamEnforcementEmptySignalAbort(v1);
          if ( v28 )
            RtlWakeAllConditionVariable((char *)v1 + 656);
          goto LABEL_230;
        }
      }
    }
LABEL_194:
    v73 = *((_QWORD *)v1 + 79);
    v95 = 1;
    goto LABEL_195;
  }
LABEL_241:
  HampHostCheckQueueTerminateWorker(v1, 0);
  if ( *((_DWORD *)v1 + 140) != 2 )
    return;
  v83 = 0LL;
  v84 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v1 + 73);
  if ( v84 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)v1 + 584) )
    v83 = (ULONG *)((char *)v84 - 96);
  if ( v83 )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v83 + 548) == 3 && (v83[136] & 0x28) == 0 )
      {
        RtlInitializeBitMap(&BitMapHeader, v83 + 124, 0x2Fu);
        if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
          break;
      }
      v85 = *((_QWORD *)v83 + 12);
      v86 = *((_QWORD *)v83 + 10);
      v83 = 0LL;
      if ( v85 != v86 + 584 )
        v83 = (ULONG *)(v85 - 96);
      if ( !v83 )
        goto LABEL_251;
    }
  }
  else
  {
LABEL_251:
    if ( (*((_QWORD *)v1 + 79) & 0x800000000000000LL) == 0
      || !(unsigned int)HampUtilHasExternalResourceAccess(
                          (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 94) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                 + 120)
                                     + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                        + 600,
                          27LL) )
    {
      v87 = 0;
      goto LABEL_255;
    }
  }
  v87 = 1;
LABEL_255:
  v88 = HampLockTrackerId;
  v89 = *((_QWORD *)v1 + 94);
  if ( HampLockTrackerId != -1 )
  {
    v90 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v88) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v90 |= 0x20uLL;
    ++v90[6];
  }
  RtlAcquireSRWLockExclusive(v89 + 576);
  *(_DWORD *)(v89 + 584) = GetCurrentThreadId();
  v91 = (v87 << 21) | *(_DWORD *)(v89 + 608) & 0xFFDFFFFF;
  *(_DWORD *)(v89 + 608) = v91;
  if ( v87 != ((v91 >> 20) & 1) && (v91 & 0x400000) == 0 )
  {
    *(_DWORD *)(v89 + 608) = v91 | 0x400000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v89 + 24)) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*(_QWORD *)(v89 + 560));
  }
  if ( HampLockTrackerId != -1 )
  {
    v92 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v92 & 0x20) == 0 )
      __int2c();
    v65 = v92[6]-- == 1LL;
    if ( v65 )
      *v92 &= ~0x20uLL;
  }
  *(_DWORD *)(v89 + 584) = 0;
  RtlReleaseSRWLockExclusive(v89 + 576);
}
