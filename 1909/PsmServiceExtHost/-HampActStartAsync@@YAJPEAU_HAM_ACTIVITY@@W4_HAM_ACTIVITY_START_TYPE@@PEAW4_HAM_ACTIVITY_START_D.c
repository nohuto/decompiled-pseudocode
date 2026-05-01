/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0
 * Callers:
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180034C30 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180036CC0 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 * Callees:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B024 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18000EF50 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18001D61C (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001DD90 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180022810 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x1800269A0 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180033730 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180034E10 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180034FC0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003538C (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180035404 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z @ 0x180039190 (-HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HampActStartAsync(__int64 a1, int a2, int *a3, __int64 *a4)
{
  PVOID Heap; // rax
  void *v8; // rsi
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  HKEY v12; // rbp
  signed int v13; // edi
  int v14; // eax
  const WCHAR *v15; // rdx
  LSTATUS v16; // eax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbp
  int v19; // edi
  struct _RM_HAM_ACTIVITY_HOST *v20; // rcx
  unsigned int v21; // edx
  int CanBeStarted; // eax
  int v23; // r12d
  int v24; // r8d
  struct _HAM_HOST_DEPENDENCY *v25; // r14
  __int64 CommitRequest; // rbp
  __int64 v27; // rdi
  _QWORD *Value; // rax
  bool v29; // zf
  DWORD v30; // esi
  __int64 v31; // rbp
  _QWORD *v32; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v33; // rcx
  char v34; // al
  BOOL v35; // r15d
  __int64 v36; // rcx
  struct _HAM_DEPENDENCY_GROUP *v37; // rsi
  int v38; // edi
  __int64 v39; // rbp
  _QWORD *v40; // rax
  __int64 v41; // rbp
  DWORD v42; // edi
  __int64 v43; // rsi
  _QWORD *v44; // rbx
  unsigned __int16 v45; // r11
  __int16 v46; // bx
  __int64 v47; // r10
  __int64 v48; // r10
  __int64 v49; // rdi
  __int64 v50; // r15
  char v51; // r8
  unsigned __int64 v52; // rdx
  __int16 v53; // cx
  __int16 v54; // r9
  __int16 v55; // ax
  int v56; // eax
  char v57; // al
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int16 v63; // r11
  int v64; // ebx
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // eax
  DWORD v68; // edi
  _QWORD *v69; // rbx
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  DWORD cbData; // [rsp+30h] [rbp-58h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-50h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-48h] BYREF
  int *v76; // [rsp+48h] [rbp-40h]

  v76 = a3;
  if ( a2 == 1 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
  {
    v19 = -1073741776;
    v23 = 15;
    goto LABEL_103;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v8 = Heap;
  if ( !Heap )
  {
    v19 = -1073741801;
    v23 = 15;
    goto LABEL_103;
  }
  memset_0(Heap, 0, 0x30uLL);
  RtlQueryPerformanceCounter(v8);
  v9 = *(_QWORD *)(a1 + 80);
  hKey = 0LL;
  v10 = HampUtilOpenApplicationHistoryKey((struct _RM_HAM_ACTIVITY_HOST *)v9, 0, &hKey);
  v12 = hKey;
  v13 = v10;
  if ( v10 < 0 )
    goto LABEL_111;
  v14 = *(_DWORD *)(v9 + 560);
  switch ( v14 )
  {
    case 2:
      v15 = L"Mixed";
      break;
    case 4:
      v15 = L"Pure";
      break;
    case 8:
      v15 = L"System";
      break;
    default:
      __int2c();
      v15 = 0LL;
      break;
  }
  cbData = 8;
  v16 = RegQueryValueExW(hKey, v15, 0LL, 0LL, Data, &cbData);
  v13 = v16;
  if ( v16 > 0 )
    v13 = (unsigned __int16)v16 | 0xC0070000;
  if ( v13 < 0 )
  {
LABEL_111:
    v17 = *(_QWORD *)Data;
  }
  else
  {
    v17 = *(_QWORD *)Data;
    if ( cbData == 8 )
      v13 = 0;
    else
      v13 = -1073739509;
  }
  if ( v12 )
    RegCloseKey(v12);
  v18 = 0LL;
  LOBYTE(v11) = 2;
  if ( v13 >= 0 )
    v18 = v17;
  v19 = HampActBeginStateChange(a1, v11);
  if ( v19 < 0 )
  {
    v23 = 15;
    goto LABEL_127;
  }
  v20 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_BYTE *)(a1 + 549) = 0;
  HampHostUpdateActivityState(v20);
  if ( *(_QWORD *)(a1 + 512) && a2 == 1 )
  {
    v19 = -1073741776;
    v23 = 15;
LABEL_123:
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80), v21);
LABEL_126:
    HampActEndStateChange((struct _HAM_ACTIVITY *)a1, 1u);
LABEL_127:
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    goto LABEL_103;
  }
  CanBeStarted = HampActCanBeStarted(a1);
  v23 = CanBeStarted;
  if ( CanBeStarted == 14 )
  {
    v19 = -1058275327;
    goto LABEL_123;
  }
  if ( (unsigned int)(CanBeStarted - 1) <= 6 )
  {
    v19 = -1058275328;
    goto LABEL_123;
  }
  if ( (unsigned int)(CanBeStarted - 8) <= 5 )
  {
    v19 = -1058275324;
    goto LABEL_123;
  }
  v24 = *(_DWORD *)(a1 + 544) | 4;
  *(_QWORD *)(a1 + 520) = v8;
  v8 = 0LL;
  *(_DWORD *)(a1 + 544) = v24;
  if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
    *(_QWORD *)(a1 + 512) = *(_QWORD *)(v9 + 800);
  if ( a2 == 1 )
  {
    v25 = 0LL;
    HampHostQueueTerminateEx(v9, 1u, 5376, *(_QWORD *)(a1 + 64), ((v24 & 2) == 0) | 2, 0);
  }
  else
  {
    v25 = 0LL;
  }
  CommitRequest = HampActGetCommitRequest((struct _HAM_ACTIVITY *)a1, v18);
  v27 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 2) == 0 )
      __int2c();
    v29 = Value[2]-- == 1LL;
    if ( v29 )
      *Value &= ~2uLL;
  }
  *(_DWORD *)(v27 + 8) = 0;
  RtlReleaseSRWLockExclusive(v27);
  if ( a4 )
    *a4 = CommitRequest;
  v19 = HampRmContextAcquireResourceSet(*(struct HAM_ACTIVITY_RM_CONTEXT **)(a1 + 88), CommitRequest);
  if ( v19 < 0 )
  {
    v23 = 15;
    goto LABEL_126;
  }
  v30 = HampLockTrackerId;
  v31 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v32 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v30) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v32 |= 2uLL;
    ++v32[2];
  }
  RtlAcquireSRWLockExclusive(v31);
  *(_DWORD *)(v31 + 8) = GetCurrentThreadId();
  v33 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_DWORD *)(a1 + 544) &= ~1u;
  HampHostUpdateActivityState(v33);
  v34 = *(_BYTE *)(a1 + 548);
  v35 = (v34 == 1 || v34 == 4) && ((*(_BYTE *)(a1 + 120) & 0xC) != 0 || (*(_DWORD *)(a1 + 112) & 0x4000) != 0);
  v36 = *(_QWORD *)(a1 + 80);
  v37 = *(struct _HAM_DEPENDENCY_GROUP **)(v36 + 688);
  if ( v37 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v38 = (*(_DWORD *)(a1 + 544) >> 1) & 1;
    *(_DWORD *)(a1 + 544) &= ~2u;
  }
  else
  {
    v38 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v36, 0);
  }
  if ( !v38 )
    v37 = 0LL;
  if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v25 = *(struct _HAM_HOST_DEPENDENCY **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v39 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v40 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v40 & 2) == 0 )
      __int2c();
    v29 = v40[2]-- == 1LL;
    if ( v29 )
      *v40 &= ~2uLL;
  }
  *(_DWORD *)(v39 + 8) = 0;
  RtlReleaseSRWLockExclusive(v39);
  if ( v25 )
    HampHostDepDestroy(v25);
  if ( v35 )
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v38 )
    HampDepGroupRunStateChangeWorker(v37);
  v41 = *(_QWORD *)(a1 + 80);
  v42 = HampLockTrackerId;
  v43 = v41 - 64;
  if ( HampLockTrackerId != -1 )
  {
    v44 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v42) )
      __int2c();
    *v44 |= 1uLL;
    ++v44[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800AC208 = GetCurrentThreadId();
  v45 = 102;
  v46 = *(_WORD *)(v43 + 1162);
  v47 = *(_QWORD *)(v43 + 1136);
  if ( v47 != v43 + 1136 )
  {
    v48 = v47 - 1296;
    if ( v48 )
    {
      v49 = 0x8800001000LL;
      v50 = 0x11000002000LL;
      do
      {
        if ( *(_DWORD *)(v48 + 1280) == 2 || (*(_BYTE *)(v48 + 1332) & 4) != 0 )
        {
          v51 = *(_BYTE *)(v48 + 1378);
          if ( (v51 & 8) != 0 || (v52 = *(int *)(v48 + 1336), (unsigned int)v52 <= 0x27) && _bittest64(&v49, v52) )
          {
            v55 = *(_WORD *)(v48 + 1376);
            v54 = 2;
            LOBYTE(v53) = v55;
          }
          else
          {
            v53 = *(_WORD *)(v48 + 1376);
            if ( (v53 & 0x10) != 0 || (unsigned int)v52 <= 0x28 && _bittest64(&v50, v52) )
            {
              v54 = 4;
              LOBYTE(v55) = *(_WORD *)(v48 + 1376);
            }
            else
            {
              v54 = 1;
              LOBYTE(v55) = *(_WORD *)(v48 + 1376);
            }
          }
          if ( (v55 & 0x10) == 0 && (v56 = *(_DWORD *)(v48 + 1336), v56 != 13) && v56 != 36 && v56 != 40
            || (v57 = v53, (v51 & 0x40) != 0) )
          {
            v54 |= 8u;
            v57 = v53;
          }
          v58 = *(_DWORD *)(v48 + 1332) >> 3;
          LOWORD(v58) = v54 | (8 * (v57 & 8 | (2 * (v57 & 3 | (8 * (((*(_DWORD *)(v48 + 1332) & 8) != 0) | 2))))));
          v45 = RmpPolicyDigestMerge(v45, v58);
        }
        v59 = *(_QWORD *)(v48 + 1296);
        v60 = *(int *)(v48 + 1328);
        v61 = *(_QWORD *)(v48 + 1320);
        v48 = 0LL;
        if ( v59 != v61 + 1112 + 24 * v60 )
          v48 = v59 - 1296;
      }
      while ( v48 );
      v43 = v41 - 64;
    }
  }
  *(_WORD *)(v43 + 1162) = v45;
  v62 = *(_QWORD *)(v43 + 56);
  v63 = v45 & 0x80;
  v64 = v46 & 0x80;
  if ( v64 && !v63 )
  {
    --*(_DWORD *)(v62 + 196);
  }
  else if ( !v64 && v63 )
  {
    ++*(_DWORD *)(v62 + 196);
  }
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v43, 2);
  QueryUnbiasedInterruptTime((PULONGLONG)(v43 + 1456));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v43) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v43 + 56) + 88LL));
  v65 = *(_QWORD *)(v43 + 48);
  *(_QWORD *)(v43 + 1208) = 0LL;
  v66 = *(_QWORD *)(v65 + 2624);
  v67 = *(_DWORD *)(v66 + 160);
  if ( (v67 & 3) == 0 )
  {
    *(_DWORD *)(v66 + 160) = v67 | 1;
    TpPostWork(*(_QWORD *)(v66 + 144));
  }
  v68 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v69 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v68) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v69 |= 2uLL;
    ++v69[2];
  }
  RtlAcquireSRWLockExclusive(v41);
  *(_DWORD *)(v41 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v41, 0);
  if ( HampLockTrackerId != -1 )
  {
    v70 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v70 & 2) == 0 )
      __int2c();
    v29 = v70[2]-- == 1LL;
    if ( v29 )
      *v70 &= ~2uLL;
  }
  *(_DWORD *)(v41 + 8) = 0;
  RtlReleaseSRWLockExclusive(v41);
  dword_1800AC208 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v71 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v71 & 1) == 0 )
      __int2c();
    v29 = v71[1]-- == 1LL;
    if ( v29 )
      *v71 &= ~1uLL;
  }
  v19 = 0;
LABEL_103:
  *v76 = v23;
  return (unsigned int)v19;
}
