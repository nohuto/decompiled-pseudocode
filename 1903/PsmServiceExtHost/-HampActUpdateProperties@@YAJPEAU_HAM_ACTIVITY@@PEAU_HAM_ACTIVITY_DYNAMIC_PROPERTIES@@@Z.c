/*
 * XREFs of ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180024350
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800358C0 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 * Callees:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001DAA0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001DD90 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180022810 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800257B8 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180035404 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CAE8 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActUpdateProperties(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a2)
{
  DWORD v3; // esi
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  _QWORD *Value; // rdi
  unsigned int v8; // edx
  int v9; // eax
  int v10; // ebp
  char v11; // di
  int v12; // esi
  int v13; // eax
  struct _RM_HAM_ACTIVITY_HOST *v14; // rdi
  int v15; // eax
  int v16; // edx
  struct _HAM_DEPENDENCY_GROUP *v17; // rsi
  __int64 v18; // rdi
  _QWORD *v19; // rax
  bool v20; // zf
  DWORD v21; // ebp
  __int64 v22; // rdi
  _QWORD *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  DWORD v27; // esi
  _QWORD *v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  unsigned int v32; // edi
  int v33; // [rsp+40h] [rbp+8h]

  v3 = HampLockTrackerId;
  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( *((_BYTE *)a1 + 548) == 4 )
  {
    v32 = -1073741275;
LABEL_57:
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), v8);
    return v32;
  }
  if ( (*((_BYTE *)a1 + 544) & 8) != 0 )
  {
    v32 = -1058275327;
    goto LABEL_57;
  }
  v9 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 106));
  v10 = *((_DWORD *)a1 + 120) & 3;
  v11 = *(_DWORD *)a2;
  if ( v10 <= v9 )
    v10 = v9;
  v12 = HIWORD(*(_DWORD *)a2);
  if ( (v12 & 1) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~0x200u;
    *((_DWORD *)a1 + 28) |= (v11 & 1) << 9;
  }
  if ( (v12 & 4) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~0x4000u;
    *((_DWORD *)a1 + 28) |= (v11 & 8) << 11;
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)(v4 + 120), 0);
  }
  if ( (v12 & 2) != 0 )
  {
    *((_DWORD *)a1 + 28) &= 0xFFFFFE7F;
    *((_DWORD *)a1 + 28) |= (v11 & 6) << 6;
  }
  v13 = *((_DWORD *)a2 + 1);
  v14 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  v33 = v13;
  if ( (v13 & 1) != 0 )
  {
    if ( !HIBYTE(v13) )
    {
      HIBYTE(v33) = *((_BYTE *)a1 + 427);
      v13 = v33;
    }
    *((_DWORD *)a1 + 106) = v13;
    HampHostUpdateActivityState(v14);
  }
  v15 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 106));
  v16 = *((_DWORD *)a1 + 120) & 3;
  if ( v16 <= v15 )
    v16 = v15;
  if ( v10 == v16 || (unsigned __int8)(*((_BYTE *)a1 + 548) - 2) > 1u )
    v17 = 0LL;
  else
    v17 = HampHostCheckEnterDependencyWorker(v14);
  v18 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v19 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v19 & 2) == 0 )
      __int2c();
    v20 = v19[2]-- == 1LL;
    if ( v20 )
      *v19 &= ~2uLL;
  }
  *(_DWORD *)(v18 + 8) = 0;
  RtlReleaseSRWLockExclusive(v18);
  if ( v17 )
    HampDepGroupRunStateChangeWorker(v17);
  v21 = HampLockTrackerId;
  v22 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v23 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v21) )
      __int2c();
    *v23 |= 1uLL;
    ++v23[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800AC208 = GetCurrentThreadId();
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)(v22 - 64), 2);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)(v22 - 64), 2);
  QueryUnbiasedInterruptTime((PULONGLONG)(v22 + 1392));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)(v22 - 64)) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v22 - 8) + 88LL));
  v24 = *(_QWORD *)(v22 - 16);
  *(_QWORD *)(v22 + 1144) = 0LL;
  v25 = *(_QWORD *)(v24 + 2624);
  v26 = *(_DWORD *)(v25 + 160);
  if ( (v26 & 3) == 0 )
  {
    *(_DWORD *)(v25 + 160) = v26 | 1;
    TpPostWork(*(_QWORD *)(v25 + 144));
  }
  v27 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v28 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v27) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v28 |= 2uLL;
    ++v28[2];
  }
  RtlAcquireSRWLockExclusive(v22);
  *(_DWORD *)(v22 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v22, 0);
  if ( HampLockTrackerId != -1 )
  {
    v29 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v29 & 2) == 0 )
      __int2c();
    v20 = v29[2]-- == 1LL;
    if ( v20 )
      *v29 &= ~2uLL;
  }
  *(_DWORD *)(v22 + 8) = 0;
  RtlReleaseSRWLockExclusive(v22);
  dword_1800AC208 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v30 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v30 & 1) == 0 )
      __int2c();
    v20 = v30[1]-- == 1LL;
    if ( v20 )
      *v30 &= ~1uLL;
  }
  return 0LL;
}
