/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x1408BAD0C
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsnlen @ 0x1401979D0 (wcsnlen.c)
 *     wcsncpy_s @ 0x14019BFB0 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C2E98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckGuidAccess @ 0x140657EC4 (EtwpCheckGuidAccess.c)
 *     NtSetIntervalProfile @ 0x1406D7F10 (NtSetIntervalProfile.c)
 *     EtwpUpdateGroupMasks @ 0x1407270E8 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x14072812C (EtwpUpdateTagFilter.c)
 *     EtwpCheckSystemTraceAccess @ 0x14072815C (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateStackTracing @ 0x1408B8390 (EtwpUpdateStackTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1408B9DB8 (EtwpSetPmcProfileSource.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BBA60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408BC73C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BD034 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x1408BD100 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1408BD224 (EtwpUpdatePmcEvents.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408BD2CC (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpEnableStackCaching @ 0x1408C4A28 (EtwpEnableStackCaching.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1408CA57C (EtwpSetCoverageSamplerInformation.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1408CAD58 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1408CAE18 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1408CAF5C (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1408CB004 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CBCA4 (EtwpSetSoftRestartInformation.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(char *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  unsigned int v4; // esi
  int v6; // ebx
  __int64 v7; // r14
  __int64 result; // rax
  int v9; // ebx
  int v10; // r15d
  unsigned int v11; // r12d
  int v12; // r13d
  int v13; // r14d
  ULONG v14; // edi
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // rdi
  unsigned int *v19; // rcx
  int updated; // eax
  unsigned int v21; // esi
  unsigned int v23; // esi
  unsigned int v24; // esi
  __int64 v25; // rbx
  unsigned int v26; // edx
  struct _KTHREAD *v27; // rax
  unsigned int *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // edx
  struct _KTHREAD *v31; // rax
  unsigned int *v32; // rax
  unsigned int v33; // edx
  struct _KTHREAD *v34; // rax
  unsigned int *v35; // rax
  unsigned int v36; // esi
  wchar_t *v37; // rax
  wchar_t *v38; // rdi
  wchar_t *v39; // rcx
  unsigned int v40; // r15d
  unsigned int v41; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v43; // rsi
  unsigned int v44; // esi
  unsigned int v45; // esi
  char *v46; // r15
  unsigned int v47; // edx
  struct _KTHREAD *v48; // rax
  unsigned int *v49; // rax
  unsigned int v50; // edx
  struct _KTHREAD *v51; // rax
  unsigned int *v52; // rax
  unsigned int v53; // esi
  unsigned int v54; // esi
  unsigned int v55; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v57; // rax
  unsigned __int16 *v58; // rax
  char v59; // [rsp+30h] [rbp-208h]
  char v60; // [rsp+32h] [rbp-206h]
  int v61; // [rsp+34h] [rbp-204h]
  unsigned int v62; // [rsp+3Ch] [rbp-1FCh]
  unsigned int v63; // [rsp+40h] [rbp-1F8h]
  PVOID P; // [rsp+48h] [rbp-1F0h] BYREF
  int v65; // [rsp+50h] [rbp-1E8h]
  unsigned int v66; // [rsp+54h] [rbp-1E4h]
  int v67; // [rsp+58h] [rbp-1E0h]
  ULONG v68; // [rsp+5Ch] [rbp-1DCh]
  int v69; // [rsp+60h] [rbp-1D8h]
  int v70; // [rsp+64h] [rbp-1D4h]
  int v71; // [rsp+68h] [rbp-1D0h]
  int v72[4]; // [rsp+70h] [rbp-1C8h] BYREF
  wchar_t *Src; // [rsp+80h] [rbp-1B8h]
  __int128 v74; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v75; // [rsp+98h] [rbp-1A0h]
  __int128 v76; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-188h]
  __int64 v78; // [rsp+B8h] [rbp-180h]
  __int64 v79; // [rsp+C0h] [rbp-178h]
  __int64 v80; // [rsp+C8h] [rbp-170h]
  __int64 v81; // [rsp+D0h] [rbp-168h]
  __int64 v82; // [rsp+D8h] [rbp-160h]
  _OWORD v83[2]; // [rsp+E0h] [rbp-158h] BYREF
  int v84; // [rsp+100h] [rbp-138h] BYREF
  char v85[168]; // [rsp+108h] [rbp-130h] BYREF
  __int64 v86; // [rsp+1B0h] [rbp-88h] BYREF
  int v87; // [rsp+1B8h] [rbp-80h]
  __int64 v88; // [rsp+1C0h] [rbp-78h] BYREF
  int v89; // [rsp+1C8h] [rbp-70h]
  _DWORD v90[4]; // [rsp+1D0h] [rbp-68h] BYREF
  _DWORD v91[8]; // [rsp+1E0h] [rbp-58h] BYREF

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v6 = *(_DWORD *)Address;
  v61 = *(_DWORD *)Address;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v6 > 16 )
  {
    switch ( v6 )
    {
      case 17:
LABEL_140:
        if ( v4 < 0x10 )
          return 3221225476LL;
        v53 = v4 - 16;
        if ( (v53 & 3) == 0 )
        {
          v54 = v53 >> 2;
          if ( (unsigned __int16)v54 <= 4u )
          {
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v82 = *((_QWORD *)Address + 1);
            memmove(v90, Address + 16, 4LL * (unsigned __int16)v54);
            v55 = (unsigned __int16)v82;
            if ( (unsigned __int16)v82 == 0xFFFF )
              v55 = *(unsigned __int8 *)(v7 + 4208);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v57 = EtwpAcquireLoggerContextByLoggerId(v7, v55, 1);
            v18 = (__int64)v57;
            if ( !v57 )
              goto LABEL_33;
            v19 = v57;
            if ( (v57[3] & 0x2000000) != 0 )
            {
              v9 = EtwpCheckSystemTraceAccess((__int64)v57, 0x80u);
              if ( v9 >= 0 )
              {
                v58 = EtwpPoolTagFilter;
                if ( v61 != 10 )
                  v58 = (unsigned __int16 *)&EtwpObjectTypeFilter;
                EtwpUpdateTagFilter(v90, v54, (__int64)&v58[10 * *(unsigned __int8 *)(v18 + 834)]);
              }
              goto LABEL_83;
            }
            goto LABEL_35;
          }
        }
        return 3221225485LL;
      case 18:
        return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
      case 19:
        if ( v4 < 0x18 )
          return 3221225476LL;
        v76 = *(_OWORD *)Address;
        v77 = *((_QWORD *)Address + 2);
        v50 = WORD4(v76);
        if ( WORD4(v76) == 0xFFFF )
          v50 = *(unsigned __int8 *)(v7 + 4208);
        v51 = KeGetCurrentThread();
        --v51->KernelApcDisable;
        v52 = EtwpAcquireLoggerContextByLoggerId(v7, v50, 1);
        v18 = (__int64)v52;
        if ( !v52 )
          goto LABEL_33;
        v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v52);
        if ( v9 < 0 )
          goto LABEL_83;
        updated = EtwpUpdateLastBranchTracingConfiguration(v18, &v76);
LABEL_82:
        v9 = updated;
        goto LABEL_83;
      case 20:
        goto LABEL_116;
      case 21:
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 - 28 > 0x1FC )
          return 3221225476LL;
        v40 = v4 - 26 + 178;
        v41 = (v4 - 26) >> 1;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v40, 0x50777445u);
        v43 = PoolWithTag;
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          wcsncpy_s(PoolWithTag + 89, v41, (const wchar_t *)Address + 13, v41);
          v88 = *((_QWORD *)Address + 1);
          v89 = *((_DWORD *)Address + 4);
          *(_DWORD *)v43 = *((_DWORD *)Address + 1);
          *((_DWORD *)v43 + 1) = *((_DWORD *)Address + 5);
          *((_BYTE *)v43 + 176) = Address[24];
          v60 = Address[25];
          EtwpGetMicroarchitecturalPmcAffinity(&v88, v43 + 4);
          v9 = ((__int64 (__fastcall *)(__int64, _QWORD, wchar_t *))off_140401460[0])(20LL, v40, v43);
          if ( v60 )
            v9 = EtwpAddMicroarchitecturalPmcToRegistry(v43, &v88);
          v39 = v43;
          goto LABEL_115;
        }
        break;
      case 22:
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 != 20 )
          return 3221225476LL;
        v86 = *((_QWORD *)Address + 1);
        v87 = *((_DWORD *)Address + 4);
        v72[0] = *((_DWORD *)Address + 1);
        v9 = ((__int64 (__fastcall *)(__int64, __int64, int *, PVOID *))off_140401458[0])(1LL, 24LL, v72, &P);
        if ( v9 < 0 )
          return (unsigned int)v9;
        v84 = v72[0];
        EtwpGetMicroarchitecturalPmcAffinity(&v86, v85);
        v36 = wcsnlen(Src, 0xFFuLL);
        v37 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v36 + 1), 0x50777445u);
        v38 = v37;
        if ( v37 )
        {
          wcsncpy_s(v37, v36 + 1, Src, v36);
          v9 = ((__int64 (__fastcall *)(__int64, __int64, int *))off_140401460[0])(21LL, 176LL, &v84);
          EtwpRemoveMicroarchitecturalPmcFromRegistry(v38, v36);
          v39 = v38;
LABEL_115:
          ExFreePoolWithTag(v39, 0x50777445u);
          return (unsigned int)v9;
        }
        break;
      case 23:
        if ( v4 < 0x18 )
          return 3221225476LL;
        v74 = *(_OWORD *)Address;
        v75 = *((_QWORD *)Address + 2);
        v33 = WORD4(v74);
        if ( WORD4(v74) == 0xFFFF )
          v33 = *(unsigned __int8 *)(v7 + 4208);
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        v35 = EtwpAcquireLoggerContextByLoggerId(v7, v33, 1);
        v18 = (__int64)v35;
        if ( v35 )
        {
          v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v35);
          if ( v9 < 0 )
            goto LABEL_83;
          updated = EtwpUpdateProcessorTraceConfiguration(v18, &v74);
          goto LABEL_82;
        }
        goto LABEL_33;
      case 24:
        goto LABEL_116;
      case 25:
        return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, AccessMode);
      default:
        return (unsigned int)-1073741822;
    }
    return 3221225495LL;
  }
  if ( v6 == 16 )
  {
    if ( v4 != 32 )
      return 3221225476LL;
    v29 = *((_QWORD *)Address + 1);
    v80 = v29;
    v63 = *((_DWORD *)Address + 5);
    v62 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v30 = (unsigned __int16)v29;
    if ( (unsigned __int16)v29 == 0xFFFF )
      v30 = *(unsigned __int8 *)(v7 + 4208);
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    v32 = EtwpAcquireLoggerContextByLoggerId(v7, v30, 1);
    v18 = (__int64)v32;
    if ( !v32 )
      goto LABEL_33;
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v32);
    if ( v9 >= 0 )
    {
      updated = EtwpEnableStackCaching(v18, v63, v62);
      goto LABEL_82;
    }
    goto LABEL_83;
  }
  if ( v6 <= 7 )
  {
    if ( v6 == 7 )
    {
      if ( v4 != 16 )
        return 3221225476LL;
      result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
      v9 = result;
      if ( (int)result < 0 )
        return result;
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      v69 = *((_DWORD *)Address + 1);
      v70 = *((_DWORD *)Address + 2);
      v71 = *((_DWORD *)Address + 3);
      KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
      EtwpExecutiveResourceReleaseSampleRate = v69;
      EtwpExecutiveResourceContentionSampleRate = v70;
      EtwpExecutiveResourceTimeout = v71;
      goto LABEL_28;
    }
    if ( v6 != 1 )
    {
      if ( v6 != 3 )
      {
        if ( v6 != 5 )
        {
          if ( v6 != 6 )
            return (unsigned int)-1073741822;
LABEL_116:
          if ( v4 >= 0x10 )
          {
            v44 = v4 - 16;
            if ( (v44 & 3) == 0 )
            {
              if ( !PsIsCurrentThreadInServerSilo() || (unsigned int)(v6 - 14) > 1 )
              {
                v45 = v44 >> 2;
                v46 = Address + 16;
                v81 = *((_QWORD *)Address + 1);
                v47 = (unsigned __int16)v81;
                if ( (unsigned __int16)v81 == 0xFFFF )
                  v47 = *(unsigned __int8 *)(v7 + 4208);
                v48 = KeGetCurrentThread();
                --v48->KernelApcDisable;
                v49 = EtwpAcquireLoggerContextByLoggerId(v7, v47, 1);
                v18 = (__int64)v49;
                if ( v49 )
                {
                  v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v49);
                  if ( v9 < 0 )
                    goto LABEL_83;
                  switch ( v61 )
                  {
                    case 6:
                      updated = EtwpUpdateStackTracing((_RTL_BITMAP *)v18, (__int64)v46, v45);
                      break;
                    case 15:
                      updated = EtwpUpdatePmcCounters(v18, v46, v45);
                      break;
                    case 14:
                      updated = EtwpUpdatePmcEvents(v18, v46, v45);
                      break;
                    case 20:
                      EtwpUpdateLastBranchTracingEvents(v18, v46, v45);
                      goto LABEL_83;
                    default:
                      updated = EtwpUpdateProcessorTraceEvents(v18, v46, v45);
                      break;
                  }
                  goto LABEL_82;
                }
                goto LABEL_33;
              }
              return 3221225506LL;
            }
            return 3221225485LL;
          }
          return 3221225476LL;
        }
        if ( ((v4 - 16) & 0xFFFFFFFB) != 0 )
          return 3221225476LL;
        result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
        v9 = result;
        if ( (int)result < 0 )
          return result;
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          v10 = *((_DWORD *)Address + 1);
          v65 = v10;
          if ( !v10 )
            return 3221225485LL;
          v11 = *((_DWORD *)Address + 2);
          v66 = v11;
          if ( v11 < 0x3E8 )
            return 3221225485LL;
          v12 = *((_DWORD *)Address + 3);
          v67 = v12;
          if ( !v12 )
            return 3221225485LL;
          v13 = EtwpSpinLockHoldThreshold;
          if ( v4 == 20 )
          {
            v13 = *((_DWORD *)Address + 4);
            if ( (unsigned int)(v13 - 1) <= 0xF423E )
              return 3221225485LL;
          }
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          EtwpSpinLockHoldThreshold = v13;
          EtwpSpinLockSpinThreshold = v10;
          EtwpSpinLockAcquireSampleRate = v11;
          EtwpSpinLockContentionSampleRate = v12;
          goto LABEL_28;
        }
        return 3221225506LL;
      }
      if ( v4 != 8 )
        return 3221225476LL;
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      v14 = *((_DWORD *)Address + 1);
      v68 = v14;
      KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
      v9 = NtSetIntervalProfile(v14, ProfileTime);
      if ( v9 >= 0 )
        EtwpProfileInterval = v14;
LABEL_28:
      KeReleaseMutex(&EtwpGroupMaskMutex, 0);
      return (unsigned int)v9;
    }
    if ( v4 != 48 )
      return 3221225476LL;
    v78 = *((_QWORD *)Address + 1);
    v83[0] = *((_OWORD *)Address + 1);
    v83[1] = *((_OWORD *)Address + 2);
    v15 = (unsigned __int16)v78;
    if ( (unsigned __int16)v78 == 0xFFFF )
      v15 = *(unsigned __int8 *)(v7 + 4208);
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = EtwpAcquireLoggerContextByLoggerId(v7, v15, 1);
    v18 = (__int64)v17;
    if ( !v17 )
    {
LABEL_33:
      v9 = -1073741162;
LABEL_36:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)v9;
    }
    v19 = v17;
    if ( (v17[3] & 0x2000000) == 0 )
    {
LABEL_35:
      EtwpReleaseLoggerContext(v19, 1);
      v9 = -1073741811;
      goto LABEL_36;
    }
    v9 = EtwpCheckSystemTraceAccess((__int64)v17, 0x80u);
    if ( v9 >= 0 )
    {
      updated = EtwpUpdateGroupMasks(v18, (__int64)v83);
      goto LABEL_82;
    }
LABEL_83:
    EtwpReleaseLoggerContext((unsigned int *)v18, 1);
    goto LABEL_36;
  }
  if ( v6 == 10 )
    goto LABEL_140;
  if ( v6 != 11 )
  {
    if ( v6 != 12 )
    {
      if ( v6 > 13 )
        goto LABEL_116;
      return (unsigned int)-1073741822;
    }
    if ( v4 < 0x10 )
      return 3221225476LL;
    result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
    if ( (int)result < 0 )
      return result;
    if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
    {
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      v21 = (v4 - 16) >> 2;
      if ( v21 <= 8 )
      {
        memmove(v91, Address + 16, 4LL * v21);
        return (unsigned int)EtwpSetPmcProfileSource(v91, v21);
      }
      return 3221225485LL;
    }
    return 3221225569LL;
  }
  v59 = 0;
  if ( v4 < 0x10 )
    return 3221225476LL;
  v23 = v4 - 16;
  if ( (v23 & 3) != 0 )
    return 3221225485LL;
  v24 = v23 >> 2;
  if ( v24 > 1 )
    return 3221225485LL;
  v25 = *((_QWORD *)Address + 1);
  v79 = v25;
  if ( v24 )
  {
    if ( *((_DWORD *)Address + 4) != 1316 )
      return 3221225485LL;
    v59 = 1;
  }
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
    return 3221225569LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225506LL;
  v26 = (unsigned __int16)v25;
  if ( (unsigned __int16)v25 == 0xFFFF )
    v26 = *(unsigned __int8 *)(v7 + 4208);
  v27 = KeGetCurrentThread();
  --v27->KernelApcDisable;
  v28 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v26, 1);
  v18 = (__int64)v28;
  if ( v28 )
  {
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v28);
    if ( v9 >= 0 )
    {
      if ( v59 )
        _InterlockedOr((volatile signed __int32 *)(v18 + 832), 0x400u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v18 + 832), 0xFFFFFBFF);
    }
    goto LABEL_83;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 3221226134LL;
}
