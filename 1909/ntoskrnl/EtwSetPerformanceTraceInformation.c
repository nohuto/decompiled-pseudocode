/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x1408F5EF0
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wcsnlen @ 0x1401A2800 (wcsnlen.c)
 *     wcsncpy_s @ 0x1401A6E00 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpGetCurrentSiloState @ 0x1403303B4 (EtwpGetCurrentSiloState.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C43B0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     NtSetIntervalProfile @ 0x1406F9F00 (NtSetIntervalProfile.c)
 *     EtwpUpdateGroupMasks @ 0x140709638 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x140781FFC (EtwpUpdateTagFilter.c)
 *     EtwpCheckSystemTraceAccess @ 0x14078202C (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateStackTracing @ 0x1408F33E4 (EtwpUpdateStackTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1408F4FAC (EtwpSetPmcProfileSource.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F6C60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408F7A14 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408F8378 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x1408F8444 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1408F8578 (EtwpUpdatePmcEvents.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408F8620 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1408FFB34 (EtwpCheckCurrentUserGuidAccess.c)
 *     EtwpEnableStackCaching @ 0x1409002E8 (EtwpEnableStackCaching.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409060E0 (EtwpSetCoverageSamplerInformation.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x14090692C (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1409069EC (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x140906BA0 (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x140906C48 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetSoftRestartInformation @ 0x140907B30 (EtwpSetSoftRestartInformation.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(char *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  unsigned int v4; // esi
  __int64 result; // rax
  int v7; // ebx
  __int64 CurrentSiloState; // rax
  __int64 v9; // r14
  int v10; // ebx
  int v11; // r15d
  unsigned int v12; // r12d
  int v13; // r13d
  int v14; // r14d
  ULONG v15; // edi
  unsigned int v16; // edx
  struct _KTHREAD *v17; // rax
  unsigned int *v18; // rax
  __int64 v19; // rdi
  unsigned int *v20; // rcx
  int updated; // eax
  unsigned int v22; // esi
  unsigned int v24; // esi
  unsigned int v25; // esi
  __int64 v26; // rbx
  unsigned int v27; // edx
  struct _KTHREAD *v28; // rax
  unsigned int *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // edx
  struct _KTHREAD *v32; // rax
  unsigned int *v33; // rax
  unsigned int v34; // edx
  struct _KTHREAD *v35; // rax
  unsigned int *v36; // rax
  unsigned int v37; // esi
  wchar_t *v38; // rax
  wchar_t *v39; // rdi
  wchar_t *v40; // rcx
  unsigned int v41; // r15d
  unsigned int v42; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v44; // rsi
  unsigned int v45; // esi
  unsigned int v46; // esi
  char *v47; // r15
  unsigned int v48; // edx
  struct _KTHREAD *v49; // rax
  unsigned int *v50; // rax
  unsigned int v51; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v53; // rax
  unsigned int v54; // esi
  unsigned int v55; // esi
  unsigned int v56; // edx
  struct _KTHREAD *v57; // rax
  unsigned int *v58; // rax
  unsigned __int16 *v59; // r8
  char v60; // [rsp+30h] [rbp-208h]
  char v61; // [rsp+32h] [rbp-206h]
  int v62; // [rsp+34h] [rbp-204h]
  unsigned int v63; // [rsp+3Ch] [rbp-1FCh]
  unsigned int v64; // [rsp+40h] [rbp-1F8h]
  PVOID P; // [rsp+48h] [rbp-1F0h] BYREF
  _QWORD v66[2]; // [rsp+50h] [rbp-1E8h] BYREF
  wchar_t *Src; // [rsp+60h] [rbp-1D8h]
  int v68; // [rsp+68h] [rbp-1D0h]
  unsigned int v69; // [rsp+6Ch] [rbp-1CCh]
  int v70; // [rsp+70h] [rbp-1C8h]
  ULONG v71; // [rsp+74h] [rbp-1C4h]
  int v72; // [rsp+78h] [rbp-1C0h]
  int v73; // [rsp+7Ch] [rbp-1BCh]
  int v74; // [rsp+80h] [rbp-1B8h]
  __int128 v75; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v76; // [rsp+98h] [rbp-1A0h]
  __int128 v77; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-188h]
  __int64 v79; // [rsp+B8h] [rbp-180h]
  __int64 v80; // [rsp+C0h] [rbp-178h]
  __int64 v81; // [rsp+C8h] [rbp-170h]
  __int64 v82; // [rsp+D0h] [rbp-168h]
  __int64 v83; // [rsp+D8h] [rbp-160h]
  _OWORD v84[2]; // [rsp+E0h] [rbp-158h] BYREF
  _DWORD v85[44]; // [rsp+100h] [rbp-138h] BYREF
  __int64 v86; // [rsp+1B0h] [rbp-88h] BYREF
  int v87; // [rsp+1B8h] [rbp-80h]
  __int64 v88; // [rsp+1C0h] [rbp-78h] BYREF
  int v89; // [rsp+1C8h] [rbp-70h]
  _DWORD v90[4]; // [rsp+1D0h] [rbp-68h] BYREF
  _DWORD v91[8]; // [rsp+1E0h] [rbp-58h] BYREF

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v7 = *(_DWORD *)Address;
  v62 = *(_DWORD *)Address;
  CurrentSiloState = EtwpGetCurrentSiloState();
  v9 = CurrentSiloState;
  if ( v7 > 16 )
  {
    switch ( v7 )
    {
      case 17:
        goto LABEL_143;
      case 18:
        return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
      case 19:
        if ( v4 < 0x18 )
          return 3221225476LL;
        v77 = *(_OWORD *)Address;
        v78 = *((_QWORD *)Address + 2);
        v51 = WORD4(v77);
        if ( WORD4(v77) == 0xFFFF )
          v51 = *(unsigned __int8 *)(CurrentSiloState + 4208);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v53 = EtwpAcquireLoggerContextByLoggerId(v9, v51, 1);
        v19 = (__int64)v53;
        if ( !v53 )
          goto LABEL_36;
        v10 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v53);
        if ( v10 < 0 )
          goto LABEL_86;
        updated = EtwpUpdateLastBranchTracingConfiguration(v19, &v77);
LABEL_85:
        v10 = updated;
        goto LABEL_86;
      case 20:
        goto LABEL_119;
      case 21:
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 - 28 > 0x1FC )
          return 3221225476LL;
        v41 = v4 - 26 + 178;
        v42 = (v4 - 26) >> 1;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v41, 0x50777445u);
        v44 = PoolWithTag;
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          wcsncpy_s(PoolWithTag + 89, v42, (const wchar_t *)Address + 13, v42);
          v88 = *((_QWORD *)Address + 1);
          v89 = *((_DWORD *)Address + 4);
          *(_DWORD *)v44 = *((_DWORD *)Address + 1);
          *((_DWORD *)v44 + 1) = *((_DWORD *)Address + 5);
          *((_BYTE *)v44 + 176) = Address[24];
          v61 = Address[25];
          EtwpGetMicroarchitecturalPmcAffinity(&v88, v44 + 4);
          v10 = ((__int64 (__fastcall *)(__int64, _QWORD, wchar_t *))off_1404267A0[0])(20LL, v41, v44);
          if ( v61 )
            v10 = EtwpAddMicroarchitecturalPmcToRegistry(v44, &v88);
          v40 = v44;
          goto LABEL_118;
        }
        break;
      case 22:
        v66[0] = 0LL;
        v66[1] = 0LL;
        Src = 0LL;
        memset(&v85[1], 0, 0xACuLL);
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 != 20 )
          return 3221225476LL;
        v86 = *((_QWORD *)Address + 1);
        v87 = *((_DWORD *)Address + 4);
        LODWORD(v66[0]) = *((_DWORD *)Address + 1);
        v10 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, PVOID *))off_140426798[0])(1LL, 24LL, v66, &P);
        if ( v10 < 0 )
          return (unsigned int)v10;
        v85[0] = v66[0];
        EtwpGetMicroarchitecturalPmcAffinity(&v86, &v85[2]);
        v37 = wcsnlen(Src, 0xFFuLL);
        v38 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v37 + 1), 0x50777445u);
        v39 = v38;
        if ( v38 )
        {
          wcsncpy_s(v38, v37 + 1, Src, v37);
          v10 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))off_1404267A0[0])(21LL, 176LL, v85);
          EtwpRemoveMicroarchitecturalPmcFromRegistry(v39, v37);
          v40 = v39;
LABEL_118:
          ExFreePoolWithTag(v40, 0x50777445u);
          return (unsigned int)v10;
        }
        break;
      case 23:
        if ( v4 < 0x18 )
          return 3221225476LL;
        v75 = *(_OWORD *)Address;
        v76 = *((_QWORD *)Address + 2);
        v34 = WORD4(v75);
        if ( WORD4(v75) == 0xFFFF )
          v34 = *(unsigned __int8 *)(CurrentSiloState + 4208);
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = EtwpAcquireLoggerContextByLoggerId(v9, v34, 1);
        v19 = (__int64)v36;
        if ( v36 )
        {
          v10 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v36);
          if ( v10 < 0 )
            goto LABEL_86;
          updated = EtwpUpdateProcessorTraceConfiguration(v19, &v75);
          goto LABEL_85;
        }
        goto LABEL_36;
      case 24:
        goto LABEL_119;
      case 25:
        return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, AccessMode);
      default:
        return (unsigned int)-1073741822;
    }
    return 3221225495LL;
  }
  if ( v7 != 16 )
  {
    if ( v7 <= 7 )
    {
      if ( v7 != 7 )
      {
        if ( v7 != 1 )
        {
          switch ( v7 )
          {
            case 3:
              if ( v4 != 8 )
                return 3221225476LL;
              if ( PsIsCurrentThreadInServerSilo() )
                return 3221225506LL;
              v15 = *((_DWORD *)Address + 1);
              v71 = v15;
              KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
              v10 = NtSetIntervalProfile(v15, ProfileTime);
              if ( v10 >= 0 )
                EtwpProfileInterval = v15;
              break;
            case 5:
              if ( ((v4 - 16) & 0xFFFFFFFB) != 0 )
                return 3221225476LL;
              result = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
              v10 = result;
              if ( (int)result < 0 )
                return result;
              if ( PsIsCurrentThreadInServerSilo() )
                return 3221225506LL;
              v11 = *((_DWORD *)Address + 1);
              v68 = v11;
              if ( !v11 )
                return 3221225485LL;
              v12 = *((_DWORD *)Address + 2);
              v69 = v12;
              if ( v12 < 0x3E8 )
                return 3221225485LL;
              v13 = *((_DWORD *)Address + 3);
              v70 = v13;
              if ( !v13 )
                return 3221225485LL;
              v14 = EtwpSpinLockHoldThreshold;
              if ( v4 == 20 )
              {
                v14 = *((_DWORD *)Address + 4);
                if ( (unsigned int)(v14 - 1) <= 0xF423E )
                  return 3221225485LL;
              }
              KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
              EtwpSpinLockHoldThreshold = v14;
              EtwpSpinLockSpinThreshold = v11;
              EtwpSpinLockAcquireSampleRate = v12;
              EtwpSpinLockContentionSampleRate = v13;
              break;
            case 6:
LABEL_119:
              if ( v4 >= 0x10 )
              {
                v45 = v4 - 16;
                if ( (v45 & 3) == 0 )
                {
                  if ( !PsIsCurrentThreadInServerSilo() || (unsigned int)(v7 - 14) > 1 )
                  {
                    v46 = v45 >> 2;
                    v47 = Address + 16;
                    v82 = *((_QWORD *)Address + 1);
                    v48 = (unsigned __int16)v82;
                    if ( (unsigned __int16)v82 == 0xFFFF )
                      v48 = *(unsigned __int8 *)(v9 + 4208);
                    v49 = KeGetCurrentThread();
                    --v49->KernelApcDisable;
                    v50 = EtwpAcquireLoggerContextByLoggerId(v9, v48, 1);
                    v19 = (__int64)v50;
                    if ( v50 )
                    {
                      v10 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v50);
                      if ( v10 < 0 )
                        goto LABEL_86;
                      switch ( v62 )
                      {
                        case 6:
                          updated = EtwpUpdateStackTracing((_RTL_BITMAP *)v19, (__int64)v47, v46);
                          break;
                        case 15:
                          updated = EtwpUpdatePmcCounters(v19, v47, v46);
                          break;
                        case 14:
                          updated = EtwpUpdatePmcEvents(v19, v47, v46);
                          break;
                        case 20:
                          EtwpUpdateLastBranchTracingEvents(v19, v47, v46);
                          goto LABEL_86;
                        default:
                          updated = EtwpUpdateProcessorTraceEvents(v19, v47, v46);
                          break;
                      }
                      goto LABEL_85;
                    }
                    goto LABEL_36;
                  }
                  return 3221225506LL;
                }
                return 3221225485LL;
              }
              return 3221225476LL;
            default:
              return (unsigned int)-1073741822;
          }
LABEL_30:
          KeReleaseMutex(&EtwpGroupMaskMutex, 0);
          return (unsigned int)v10;
        }
        if ( v4 != 48 )
          return 3221225476LL;
        v79 = *((_QWORD *)Address + 1);
        v84[0] = *((_OWORD *)Address + 1);
        v84[1] = *((_OWORD *)Address + 2);
        v16 = (unsigned __int16)v79;
        if ( (unsigned __int16)v79 == 0xFFFF )
          v16 = *(unsigned __int8 *)(CurrentSiloState + 4208);
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v18 = EtwpAcquireLoggerContextByLoggerId(v9, v16, 1);
        v19 = (__int64)v18;
        if ( !v18 )
        {
LABEL_36:
          v10 = -1073741162;
LABEL_39:
          KeLeaveCriticalRegion();
          return (unsigned int)v10;
        }
        v20 = v18;
        if ( (v18[3] & 0x2000000) == 0 )
        {
LABEL_38:
          EtwpReleaseLoggerContext(v20, 1);
          v10 = -1073741811;
          goto LABEL_39;
        }
        v10 = EtwpCheckSystemTraceAccess((__int64)v18, 0x80u);
        if ( v10 >= 0 )
        {
          updated = EtwpUpdateGroupMasks(v19, (__int64)v84);
          goto LABEL_85;
        }
LABEL_86:
        EtwpReleaseLoggerContext((unsigned int *)v19, 1);
        goto LABEL_39;
      }
      if ( v4 != 16 )
        return 3221225476LL;
      result = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
      v10 = result;
      if ( (int)result >= 0 )
      {
        if ( PsIsCurrentThreadInServerSilo() )
          return 3221225506LL;
        v72 = *((_DWORD *)Address + 1);
        v73 = *((_DWORD *)Address + 2);
        v74 = *((_DWORD *)Address + 3);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpExecutiveResourceReleaseSampleRate = v72;
        EtwpExecutiveResourceContentionSampleRate = v73;
        EtwpExecutiveResourceTimeout = v74;
        goto LABEL_30;
      }
      return result;
    }
    if ( v7 != 10 )
    {
      if ( v7 == 11 )
      {
        v60 = 0;
        if ( v4 < 0x10 )
          return 3221225476LL;
        v24 = v4 - 16;
        if ( (v24 & 3) != 0 )
          return 3221225485LL;
        v25 = v24 >> 2;
        if ( v25 > 1 )
          return 3221225485LL;
        v26 = *((_QWORD *)Address + 1);
        v80 = v26;
        if ( v25 )
        {
          if ( *((_DWORD *)Address + 4) != 1316 )
            return 3221225485LL;
          v60 = 1;
        }
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v27 = (unsigned __int16)v26;
          if ( (unsigned __int16)v26 == 0xFFFF )
            v27 = *(unsigned __int8 *)(v9 + 4208);
          v28 = KeGetCurrentThread();
          --v28->KernelApcDisable;
          v29 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v27, 1);
          v19 = (__int64)v29;
          if ( v29 )
          {
            v10 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v29);
            if ( v10 >= 0 )
            {
              if ( v60 )
                _InterlockedOr((volatile signed __int32 *)(v19 + 832), 0x400u);
              else
                _InterlockedAnd((volatile signed __int32 *)(v19 + 832), 0xFFFFFBFF);
            }
            goto LABEL_86;
          }
          KeLeaveCriticalRegion();
          return 3221226134LL;
        }
      }
      else
      {
        if ( v7 != 12 )
        {
          if ( v7 > 13 )
            goto LABEL_119;
          return (unsigned int)-1073741822;
        }
        if ( v4 < 0x10 )
          return 3221225476LL;
        result = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
        if ( (int)result < 0 )
          return result;
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v22 = (v4 - 16) >> 2;
          if ( v22 > 8 )
            return 3221225485LL;
          memmove(v91, Address + 16, 4LL * v22);
          return (unsigned int)EtwpSetPmcProfileSource(v91, v22);
        }
      }
      return 3221225569LL;
    }
LABEL_143:
    if ( v4 < 0x10 )
      return 3221225476LL;
    v54 = v4 - 16;
    if ( (v54 & 3) != 0 )
      return 3221225485LL;
    v55 = v54 >> 2;
    if ( (unsigned __int16)v55 > 4u )
      return 3221225485LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 3221225506LL;
    v83 = *((_QWORD *)Address + 1);
    memmove(v90, Address + 16, 4LL * (unsigned __int16)v55);
    v56 = (unsigned __int16)v83;
    if ( (unsigned __int16)v83 == 0xFFFF )
      v56 = *(unsigned __int8 *)(v9 + 4208);
    v57 = KeGetCurrentThread();
    --v57->KernelApcDisable;
    v58 = EtwpAcquireLoggerContextByLoggerId(v9, v56, 1);
    v19 = (__int64)v58;
    if ( !v58 )
      goto LABEL_36;
    v20 = v58;
    if ( (v58[3] & 0x2000000) != 0 )
    {
      v10 = EtwpCheckSystemTraceAccess((__int64)v58, 0x80u);
      if ( v10 >= 0 )
      {
        v59 = EtwpPoolTagFilter;
        if ( v62 != 10 )
          v59 = (unsigned __int16 *)&EtwpObjectTypeFilter;
        EtwpUpdateTagFilter(v90, v55, (__int64)&v59[10 * *(unsigned __int8 *)(v19 + 834)]);
      }
      goto LABEL_86;
    }
    goto LABEL_38;
  }
  if ( v4 != 32 )
    return 3221225476LL;
  v30 = *((_QWORD *)Address + 1);
  v81 = v30;
  v64 = *((_DWORD *)Address + 5);
  v63 = *((_DWORD *)Address + 6);
  if ( Address[16] )
  {
    v31 = (unsigned __int16)v30;
    if ( (unsigned __int16)v30 == 0xFFFF )
      v31 = *(unsigned __int8 *)(CurrentSiloState + 4208);
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = EtwpAcquireLoggerContextByLoggerId(v9, v31, 1);
    v19 = (__int64)v33;
    if ( !v33 )
      goto LABEL_36;
    v10 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v33);
    if ( v10 >= 0 )
    {
      updated = EtwpEnableStackCaching(v19, v64, v63);
      goto LABEL_85;
    }
    goto LABEL_86;
  }
  return 3221225659LL;
}
