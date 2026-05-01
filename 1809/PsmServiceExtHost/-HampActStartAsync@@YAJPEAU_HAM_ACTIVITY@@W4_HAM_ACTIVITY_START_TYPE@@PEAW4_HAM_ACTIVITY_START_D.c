/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180024040
 * Callers:
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002D5E4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180035E50 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 * Callees:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18000D5E8 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18001ACB8 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B450 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180020460 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x180024760 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18002BBF0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18002BEF0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002C334 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002CE60 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18002F140 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z @ 0x1800382D0 (-HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003B2C8 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
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
  int CanBeStarted; // eax
  int v22; // r12d
  int v23; // r8d
  struct _HAM_HOST_DEPENDENCY *v24; // r14
  __int64 CommitRequest; // rbp
  __int64 v26; // rdi
  _QWORD *Value; // rax
  bool v28; // zf
  DWORD v29; // esi
  __int64 v30; // rbp
  _QWORD *v31; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v32; // rcx
  char v33; // al
  BOOL v34; // r15d
  __int64 v35; // rcx
  struct _HAM_DEPENDENCY_GROUP *v36; // rsi
  int v37; // edi
  __int64 v38; // rbp
  _QWORD *v39; // rax
  __int64 v40; // rbp
  DWORD v41; // esi
  __int64 v42; // rdi
  _QWORD *v43; // rbx
  unsigned __int16 v44; // r11
  __int16 v45; // bx
  __int64 v46; // r10
  __int64 v47; // r10
  __int64 v48; // r15
  __int64 v49; // r14
  char v50; // r8
  unsigned __int64 v51; // rcx
  __int16 v52; // dx
  __int16 v53; // r9
  unsigned __int64 v54; // rax
  bool v55; // r8
  __int16 v56; // ax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int16 v62; // r11
  int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // eax
  DWORD v67; // edi
  _QWORD *v68; // rbx
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  DWORD cbData; // [rsp+30h] [rbp-58h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-50h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-48h] BYREF
  int *v75; // [rsp+48h] [rbp-40h]

  v75 = a3;
  if ( a2 == 1 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
  {
    v19 = -1073741776;
    v22 = 15;
    goto LABEL_104;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v8 = Heap;
  if ( !Heap )
  {
    v19 = -1073741801;
    v22 = 15;
    goto LABEL_104;
  }
  memset_0(Heap, 0, 0x28uLL);
  RtlQueryPerformanceCounter(v8);
  v9 = *(_QWORD *)(a1 + 80);
  hKey = 0LL;
  v10 = HampUtilOpenApplicationHistoryKey((struct _RM_HAM_ACTIVITY_HOST *)v9, 0, &hKey);
  v12 = hKey;
  v13 = v10;
  if ( v10 < 0 )
    goto LABEL_115;
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
LABEL_115:
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
    v22 = 15;
LABEL_121:
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    goto LABEL_104;
  }
  v20 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_BYTE *)(a1 + 549) = 0;
  HampHostUpdateActivityState(v20);
  if ( *(_QWORD *)(a1 + 512) && a2 == 1 )
  {
    v19 = -1073741776;
    v22 = 15;
LABEL_119:
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
LABEL_120:
    HampActEndStateChange((struct _HAM_ACTIVITY *)a1, 1u);
    goto LABEL_121;
  }
  CanBeStarted = HampActCanBeStarted(a1);
  v22 = CanBeStarted;
  if ( CanBeStarted == 14 )
  {
    v19 = -1058275327;
    goto LABEL_119;
  }
  if ( (unsigned int)(CanBeStarted - 1) <= 6 )
  {
    v19 = -1058275328;
    goto LABEL_119;
  }
  if ( (unsigned int)(CanBeStarted - 8) <= 5 )
  {
    v19 = -1058275324;
    goto LABEL_119;
  }
  v23 = *(_DWORD *)(a1 + 544) | 4;
  *(_QWORD *)(a1 + 520) = v8;
  v8 = 0LL;
  *(_DWORD *)(a1 + 544) = v23;
  if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
    *(_QWORD *)(a1 + 512) = *(_QWORD *)(v9 + 776);
  if ( a2 == 1 )
  {
    v24 = 0LL;
    HampHostQueueTerminateEx(v9, 1LL, 5376LL);
  }
  else
  {
    v24 = 0LL;
  }
  CommitRequest = HampActGetCommitRequest((struct _HAM_ACTIVITY *)a1, v18);
  v26 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 2) == 0 )
      __int2c();
    v28 = Value[2]-- == 1LL;
    if ( v28 )
      *Value &= ~2uLL;
  }
  *(_DWORD *)(v26 + 8) = 0;
  RtlReleaseSRWLockExclusive(v26);
  if ( a4 )
    *a4 = CommitRequest;
  v19 = HampRmContextAcquireResourceSet(*(struct HAM_ACTIVITY_RM_CONTEXT **)(a1 + 88), CommitRequest);
  if ( v19 < 0 )
  {
    v22 = 15;
    goto LABEL_120;
  }
  v29 = HampLockTrackerId;
  v30 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v31 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v29) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v31 |= 2uLL;
    ++v31[2];
  }
  RtlAcquireSRWLockExclusive(v30);
  *(_DWORD *)(v30 + 8) = GetCurrentThreadId();
  v32 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_DWORD *)(a1 + 544) &= ~1u;
  HampHostUpdateActivityState(v32);
  v33 = *(_BYTE *)(a1 + 548);
  v34 = (v33 == 1 || v33 == 4) && ((*(_BYTE *)(a1 + 120) & 0xC) != 0 || (*(_DWORD *)(a1 + 112) & 0x4000) != 0);
  v35 = *(_QWORD *)(a1 + 80);
  v36 = *(struct _HAM_DEPENDENCY_GROUP **)(v35 + 664);
  if ( v36 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v37 = (*(_DWORD *)(a1 + 544) >> 1) & 1;
    *(_DWORD *)(a1 + 544) &= ~2u;
  }
  else
  {
    v37 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v35, 0);
  }
  if ( !v37 )
    v36 = 0LL;
  if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v24 = *(struct _HAM_HOST_DEPENDENCY **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v38 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v39 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v39 & 2) == 0 )
      __int2c();
    v28 = v39[2]-- == 1LL;
    if ( v28 )
      *v39 &= ~2uLL;
  }
  *(_DWORD *)(v38 + 8) = 0;
  RtlReleaseSRWLockExclusive(v38);
  if ( v24 )
    HampHostDepDestroy(v24);
  if ( v34 )
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 136), 0);
  if ( v37 )
    HampDepGroupRunStateChangeWorker(v36);
  v40 = *(_QWORD *)(a1 + 80);
  v41 = HampLockTrackerId;
  v42 = v40 - 64;
  if ( HampLockTrackerId != -1 )
  {
    v43 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v41) )
      __int2c();
    *v43 |= 1uLL;
    ++v43[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_18009BF18 = GetCurrentThreadId();
  v44 = 102;
  v45 = *(_WORD *)(v42 + 1106);
  v46 = *(_QWORD *)(v42 + 1080);
  if ( v46 != v42 + 1080 )
  {
    v47 = v46 - 1416;
    if ( v47 )
    {
      v48 = 0x8800001000LL;
      v49 = 0x11000002000LL;
      do
      {
        if ( *(_DWORD *)(v47 + 1400) == 2 || (*(_BYTE *)(v47 + 1452) & 4) != 0 )
        {
          v50 = *(_BYTE *)(v47 + 1498);
          if ( (v50 & 8) != 0 || (v51 = *(int *)(v47 + 1456), (unsigned int)v51 <= 0x27) && _bittest64(&v48, v51) )
          {
            v52 = *(_WORD *)(v47 + 1496);
            v53 = 2;
          }
          else
          {
            v52 = *(_WORD *)(v47 + 1496);
            if ( (v52 & 0x10) != 0 || (unsigned int)v51 <= 0x28 && _bittest64(&v49, v51) )
              v53 = 4;
            else
              v53 = 1;
          }
          v55 = ((v52 & 0x10) != 0 || (v54 = *(int *)(v47 + 1456), (unsigned int)v54 <= 0x28) && _bittest64(&v49, v54))
             && (v50 & 0x40) == 0;
          v57 = *(_DWORD *)(v47 + 1452) >> 3;
          v56 = v53 | 8;
          LOWORD(v57) = 8
                      * (*(_WORD *)(v47 + 1496) & 8 | (2
                                                     * (*(_WORD *)(v47 + 1496) & 3 | (8
                                                                                    * (((*(_DWORD *)(v47 + 1452) & 8) != 0) | 2)))));
          if ( v55 )
            v56 = v53;
          LOWORD(v57) = v56 | v57;
          v44 = RmpPolicyDigestMerge(v44, v57);
        }
        v58 = *(_QWORD *)(v47 + 1416);
        v59 = 3 * (*(int *)(v47 + 1448) + 44LL);
        v60 = *(_QWORD *)(v47 + 1440);
        v47 = 0LL;
        if ( v58 != v60 + 8 * v59 )
          v47 = v58 - 1416;
      }
      while ( v47 );
      v42 = v40 - 64;
    }
  }
  *(_WORD *)(v42 + 1106) = v44;
  v61 = *(_QWORD *)(v42 + 56);
  v62 = v44 & 0x80;
  v63 = v45 & 0x80;
  if ( v63 && !v62 )
  {
    --*(_DWORD *)(v61 + 196);
  }
  else if ( !v63 && v62 )
  {
    ++*(_DWORD *)(v61 + 196);
  }
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v42, 2);
  QueryUnbiasedInterruptTime((PULONGLONG)(v42 + 1400));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v42) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v42 + 56) + 88LL));
  v64 = *(_QWORD *)(v42 + 48);
  *(_QWORD *)(v42 + 1152) = 0LL;
  v65 = *(_QWORD *)(v64 + 2688);
  v66 = *(_DWORD *)(v65 + 184);
  if ( (v66 & 3) == 0 )
  {
    *(_DWORD *)(v65 + 184) = v66 | 1;
    TpPostWork(*(_QWORD *)(v65 + 168));
  }
  v67 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v68 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v67) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v68 |= 2uLL;
    ++v68[2];
  }
  RtlAcquireSRWLockExclusive(v40);
  *(_DWORD *)(v40 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v40, 0);
  if ( HampLockTrackerId != -1 )
  {
    v69 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v69 & 2) == 0 )
      __int2c();
    v28 = v69[2]-- == 1LL;
    if ( v28 )
      *v69 &= ~2uLL;
  }
  *(_DWORD *)(v40 + 8) = 0;
  RtlReleaseSRWLockExclusive(v40);
  dword_18009BF18 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v70 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v70 & 1) == 0 )
      __int2c();
    v28 = v70[1]-- == 1LL;
    if ( v28 )
      *v70 &= ~1uLL;
  }
  v19 = 0;
LABEL_104:
  *v75 = v22;
  return (unsigned int)v19;
}
