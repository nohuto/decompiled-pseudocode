/*
 * XREFs of ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800248E0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18002ACA0 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CDD4 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000B764 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800223C0 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002298C (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180028F40 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18002F714 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x1800394F8 (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CBE0 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180049ACC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180072D94 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampActTryStart(__int64 a1)
{
  __int64 v1; // rdi
  DWORD v3; // r14d
  __int64 v4; // r15
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  DWORD v7; // ecx
  bool v8; // r14
  _QWORD *v9; // rax
  bool v10; // zf
  unsigned int v11; // r12d
  DWORD v12; // r14d
  __int64 v13; // r15
  _QWORD *v14; // rsi
  char v15; // si
  char *v16; // rax
  struct _RM_HAM_ACTIVITY_HOST *v17; // rcx
  int v18; // eax
  int v19; // edx
  unsigned __int64 v20; // rcx
  int v21; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v22; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v23; // rcx
  __int64 v24; // rax
  __int128 v25; // xmm1
  unsigned int v26; // edi
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct _HAM_ACTIVITY **v31; // [rsp+20h] [rbp-E0h]
  char v32[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v33[4]; // [rsp+44h] [rbp-BCh] BYREF
  struct _HAM_ACTIVITY *v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h]
  char v37[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  _DWORD v40[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h]
  _OWORD Buf2[2]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD Buf1[2]; // [rsp+E8h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( (*(_QWORD *)(v1 + 632) & 0x20000000000000LL) != 0 && (*(_DWORD *)(a1 + 112) & 0x400) != 0 )
    return 13;
  v3 = HampLockTrackerId;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 752) + 88LL) + 88LL) + 160LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v4 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v7 = HampLockTrackerId;
  *(_DWORD *)(v4 + 104) = CurrentThreadId;
  v8 = (*(_DWORD *)(v4 + 132) & 2) != 0;
  if ( v7 != -1 )
  {
    v9 = TlsGetValue(v7);
    if ( (*(_DWORD *)v9 & 0x100LL) == 0 )
      __int2c();
    v10 = v9[9]-- == 1LL;
    if ( v10 )
      *v9 &= ~0x100uLL;
  }
  v11 = 0;
  *(_DWORD *)(v4 + 104) = 0;
  RtlReleaseSRWLockExclusive(v4 + 96);
  if ( v8 )
    return 7;
  v12 = HampLockTrackerId;
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 752) + 88LL) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    v14 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v14 |= 0x80uLL;
    ++v14[8];
  }
  RtlAcquireSRWLockShared(v13 + 168);
  v15 = *(_BYTE *)(v13 + 184) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v16 = (char *)TlsGetValue(HampLockTrackerId);
    if ( *v16 >= 0 )
      __int2c();
    v10 = (*((_QWORD *)v16 + 8))-- == 1LL;
    if ( v10 )
      *(_QWORD *)v16 &= ~0x80uLL;
  }
  RtlReleaseSRWLockShared(v13 + 168);
  if ( v15 )
    return 7;
  if ( (*(_DWORD *)(a1 + 544) & 8) != 0 )
    return 6;
  if ( (*(_DWORD *)(a1 + 544) & 0xC0u) >= 0x40 )
    return 5;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)v1,
    (union _RM_OPTIMIZATION_STATE *)v32,
    (union _RM_OPTIMIZATION_STATE *)v33);
  if ( ((v32[0] & 8) != 0 || (v33[0] & 8) != 0) && (*(_QWORD *)(v1 + 632) & 0x80000000000LL) != 0 )
    return 8;
  if ( *(_BYTE *)(a1 + 549) < 2u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 16LL);
    v17 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 2;
    HampHostUpdateActivityState(v17);
  }
  if ( (*(_DWORD *)(a1 + 544) & 0x10) == 0 )
  {
    v18 = RmpImportanceToRequiredExecutionSpeed(*(_DWORD *)(a1 + 424));
    v20 = *(_DWORD *)(a1 + 480) & 3;
    if ( (int)v20 <= v18 )
      v20 = (unsigned int)v18;
    if ( (int)v20 >= 2 )
    {
      if ( (*(_QWORD *)(v1 + 632) & 0x2000000000000LL) != 0 )
      {
        if ( HampHostIsResumed((struct _RM_HAM_ACTIVITY_HOST *)v1) )
          goto LABEL_32;
        v19 = *(_DWORD *)(a1 + 544);
        v28 = 500;
      }
      else
      {
        v28 = 2000;
      }
      *(_DWORD *)(a1 + 544) = v19 | 0x10;
      if ( (int)RmpPowerBoostStartTimedBoost((struct _RM_SERVICE_GLOBALS *)v20, v28) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
    }
  }
LABEL_32:
  v21 = *(_DWORD *)(a1 + 112);
  if ( (v21 & 0x400) != 0 && v33[0] < 0 && v32[0] >= 0 )
    return 10;
  if ( *(_BYTE *)(a1 + 549) < 3u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 24LL);
    v22 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 3;
    HampHostUpdateActivityState(v22);
    v21 = *(_DWORD *)(a1 + 112);
  }
  if ( (v21 & 0x1800) == 0 && (*(_DWORD *)(v1 + 632) & 0x30000) != 0 )
    return 9;
  if ( *(_BYTE *)(a1 + 549) < 4u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 32LL);
    v23 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 4;
    HampHostUpdateActivityState(v23);
    v21 = *(_DWORD *)(a1 + 112);
  }
  if ( (v21 & 0x400) != 0 )
  {
    if ( v32[0] < 0 )
      return 11;
  }
  else if ( (v21 & 0x800) != 0
         && (((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 632LL) & 0xE0000000) - 0x80000000LL) & 0xFFFFFFFFDFFFFFFFuLL) == 0 )
  {
    HampActInvalidateAndNotify(a1, 6656LL);
    return 3;
  }
  v24 = *(_QWORD *)(v1 + 632);
  if ( (v24 & 0x80000000000000LL) == 0
    && (v24 & 0x40000000000000LL) == 0
    && ((HampHostComputeStaticEnforcementSettings(
           (struct _RM_HAM_ACTIVITY_HOST *)v1,
           (struct _RM_ENFORCEMENT_SETTINGS *)&v35,
           (struct _RM_COMMIT_THRESHOLDS *)v40,
           (struct _RM_COMMIT_THRESHOLDS *)v37,
           v34),
         (*(_BYTE *)(v1 + 639) & 1) == 0)
     || SDWORD2(v36) < 2 && (BYTE12(v36) & 0x70) == 0 && (BYTE12(v36) & 8) == 0)
    && *(struct _HAM_ACTIVITY **)(v1 + 976) == v34[0]
    && (v25 = *(_OWORD *)(v1 + 1064),
        Buf1[0] = 0uLL,
        Buf1[1] = v25,
        Buf2[0] = 0uLL,
        Buf2[1] = v36,
        !memcmp_0(Buf1, Buf2, 0x20uLL))
    && v39 == *(_QWORD *)(v1 + 824)
    && v38 == *(_QWORD *)(v1 + 832)
    && !memcmp_0(v40, (const void *)(v1 + 848), 0x20uLL)
    || (*(_DWORD *)(a1 + 112) & 0x1000) != 0 )
  {
    v26 = *(_DWORD *)(a1 + 380);
    if ( v26 != 5 )
    {
      memset_0(v40, 0, 0x28uLL);
      v29 = *(_QWORD *)(a1 + 32);
      v40[1] = *(_DWORD *)(a1 + 384);
      v41 = a1 + 124;
      v30 = *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFFCuLL) + 152);
      v31 = (struct _HAM_ACTIVITY **)(*(_QWORD *)(a1 + 80) + 24LL);
      v40[0] = 1;
      if ( (int)HampSystemActivationClientActivate(v30, v40, a1, v26, v31) < 0 )
      {
        HampActInvalidateAndNotify(a1, 6656LL);
        return 2;
      }
      *(struct _HAM_ACTIVITY **)(a1 + 504) = v34[1];
    }
    HampActStart((struct _HAM_ACTIVITY *)a1);
  }
  else
  {
    return 12;
  }
  return v11;
}
