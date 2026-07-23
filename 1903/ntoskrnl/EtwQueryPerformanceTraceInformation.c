/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x1408F5EB8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     RtlNumberOfSetBits @ 0x1400839F0 (RtlNumberOfSetBits.c)
 *     RtlFindSetBits @ 0x1400898D0 (RtlFindSetBits.c)
 *     ExUnlockUserBuffer @ 0x140116740 (ExUnlockUserBuffer.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     EtwpGetCurrentSiloState @ 0x140330954 (EtwpGetCurrentSiloState.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C3EE0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1405C3F34 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1405C3F88 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14064ED90 (SeQuerySecurityDescriptorInfo.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     EtwpMapEnableFlags @ 0x1406EB3DC (EtwpMapEnableFlags.c)
 *     PsQuitNextProcessThread @ 0x14071EDA0 (PsQuitNextProcessThread.c)
 *     EtwpCheckSystemTraceAccess @ 0x14077F60C (EtwpCheckSystemTraceAccess.c)
 *     EtwpUMGLEnabled @ 0x1408F25DC (EtwpUMGLEnabled.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x14090667C (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140907338 (EtwpGetSoftRestartInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        unsigned int *a4)
{
  DWORD SetBits; // r15d
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // r8
  __int64 CurrentSiloState; // r13
  unsigned int v13; // edx
  struct _KTHREAD *v14; // rax
  unsigned int *v15; // rax
  __int64 v16; // r13
  void *v17; // rbx
  char v18; // dl
  unsigned int *p_SizeOfBitMap; // rcx
  unsigned int v20; // edx
  struct _KTHREAD *v21; // rax
  unsigned int *v22; // rax
  unsigned int *v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // r14d
  unsigned int v26; // edx
  struct _KTHREAD *v27; // rax
  unsigned int *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // r13d
  unsigned int v32; // r14d
  struct _KPROCESS *j; // rcx
  ULONG_PTR NextProcess; // rax
  struct _KPROCESS *v35; // rdi
  unsigned int ProcessId; // ecx
  ULONG v37; // ebx
  unsigned int v38; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v40; // rax
  _RTL_BITMAP *v41; // rsi
  unsigned int v42; // eax
  ULONG v43; // ebx
  __int64 i; // r12
  ULONG Length; // [rsp+30h] [rbp-78h] BYREF
  DWORD SecurityInformation; // [rsp+34h] [rbp-74h] BYREF
  ULONG_PTR v48; // [rsp+38h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-68h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+48h] [rbp-60h] BYREF
  __int64 v51; // [rsp+50h] [rbp-58h]
  int v52; // [rsp+58h] [rbp-50h]
  __int64 v53; // [rsp+60h] [rbp-48h]
  __int64 v54; // [rsp+68h] [rbp-40h]
  __int64 v55; // [rsp+70h] [rbp-38h]
  __int64 v56; // [rsp+78h] [rbp-30h]
  ULONG v57; // [rsp+B8h] [rbp+10h]

  SetBits = 0;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  v52 = *(_DWORD *)a1;
  v10 = v52;
  CurrentSiloState = EtwpGetCurrentSiloState();
  if ( v52 > 18 )
  {
    if ( v52 != 25 )
      return (unsigned int)-1073741822;
    LOBYTE(v11) = a3;
    return (unsigned int)EtwpQueryCoverageSamplerInformation(a1, a2, v11, a4);
  }
  if ( v52 == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation(a1, a2, a4);
  if ( v52 > 5 )
  {
    if ( v52 == 6 )
    {
      v37 = 0;
      v57 = 0;
      v51 = a1 + 16;
      if ( a2 < 0x10 )
        return 3221225476LL;
      v56 = *(_QWORD *)(a1 + 8);
      v38 = (unsigned __int16)v56;
      if ( (unsigned __int16)v56 == 0xFFFF )
        v38 = *(unsigned __int8 *)(CurrentSiloState + 4208);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v40 = EtwpAcquireLoggerContextByLoggerId(CurrentSiloState, v38, 1);
      v41 = (_RTL_BITMAP *)v40;
      P = v40;
      if ( v40 )
      {
        v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v40);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( (v41[52].SizeOfBitMap & 0x80u) != 0 )
          {
            v37 = RtlNumberOfSetBits(v41 + 61);
            v57 = v37;
          }
          v42 = 4 * v37 + 16;
          *a4 = v42;
          if ( v42 > a2 )
          {
            v8 = -1073741789;
          }
          else
          {
            v43 = 0;
            for ( i = v51; ; *(_DWORD *)(i + 4LL * v43++) = SetBits )
            {
              Length = v43;
              if ( v43 >= v57 )
                break;
              SetBits = RtlFindSetBits(v41 + 61, 1u, SetBits + 1);
              SecurityInformation = SetBits;
            }
          }
        }
        p_SizeOfBitMap = &v41->SizeOfBitMap;
        goto LABEL_78;
      }
      goto LABEL_75;
    }
    if ( v52 == 7 )
    {
      *a4 = 16;
      if ( a2 != 16 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
      *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
      *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
      return v8;
    }
    if ( v52 <= 9 )
    {
      v31 = 0;
      if ( a2 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v32 = (a2 - 4) >> 2;
        for ( j = 0LL; ; j = v35 )
        {
          NextProcess = PsGetNextProcess(j);
          v35 = (struct _KPROCESS *)NextProcess;
          v48 = NextProcess;
          if ( !NextProcess )
            break;
          if ( (*(_DWORD *)(NextProcess + 1788) & 0x1000) == 0 && (v10 == 9 || EtwpUMGLEnabled(NextProcess)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v35);
            if ( v31 < v32 )
              *(_DWORD *)(a1 + 4LL * v31 + 4) = ProcessId;
            ++v31;
          }
        }
        *a4 = 4 * v31 + 4;
        return v32 < v31 ? 0xC0000023 : 0;
      }
    }
    else
    {
      if ( v52 != 10 )
      {
        if ( v52 == 13 )
        {
          if ( a2 >= 0x28 )
          {
            v25 = a2 - 8;
            result = ExLockUserBuffer(a1 + 8, v25, a3, IoWriteAccess, &v48, (struct _MDL **)&P);
            if ( (int)result < 0 )
              return result;
            v8 = ((__int64 (__fastcall *)(__int64, _QWORD, ULONG_PTR, unsigned int *))off_140426798[0])(
                   20LL,
                   v25,
                   v48,
                   a4);
            if ( v48 )
              ExUnlockUserBuffer((struct _MDL *)P);
            return v8;
          }
          return 3221225476LL;
        }
        return (unsigned int)-1073741822;
      }
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v55 = *(_QWORD *)(a1 + 8);
        v26 = (unsigned __int16)v55;
        if ( (unsigned __int16)v55 == 0xFFFF )
          v26 = *(unsigned __int8 *)(CurrentSiloState + 4208);
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        v28 = EtwpAcquireLoggerContextByLoggerId(CurrentSiloState, v26, 1);
        v23 = v28;
        P = v28;
        if ( v28 )
        {
          if ( (v28[3] & 0x2000000) == 0 )
          {
            EtwpReleaseLoggerContext(v28, 1);
            v8 = -1073741811;
LABEL_80:
            KeLeaveCriticalRegion();
            return v8;
          }
          v8 = EtwpCheckSystemTraceAccess((__int64)v28, 1u);
          if ( (v8 & 0x80000000) == 0 )
          {
            v29 = 5LL * *((unsigned __int8 *)v23 + 834);
            v30 = 4 * EtwpPoolTagFilter[10 * *((unsigned __int8 *)v23 + 834)] + 16;
            *a4 = v30;
            if ( v30 > a2 )
              v8 = -1073741789;
            else
              memmove((void *)(a1 + 16), &EtwpPoolTagFilter[2 * v29 + 2], 4LL * EtwpPoolTagFilter[2 * v29]);
          }
          goto LABEL_53;
        }
LABEL_75:
        v8 = -1073741162;
        goto LABEL_80;
      }
    }
    return 3221225506LL;
  }
  switch ( v52 )
  {
    case 5:
      *a4 = 20;
      if ( ((a2 - 16) & 0xFFFFFFFB) == 0 )
      {
        *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
        *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
        if ( a2 == 20 )
          *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
        return v8;
      }
      return 3221225476LL;
    case 0:
      *a4 = 8;
      if ( a2 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = 70;
      return v8;
    case 1:
      *a4 = 48;
      if ( a2 != 48 )
        return 3221225476LL;
      v54 = *(_QWORD *)(a1 + 8);
      v20 = (unsigned __int16)v54;
      if ( (unsigned __int16)v54 == 0xFFFF )
        v20 = *(unsigned __int8 *)(CurrentSiloState + 4208);
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      v22 = EtwpAcquireLoggerContextByLoggerId(CurrentSiloState, v20, 1);
      v23 = v22;
      ObjectsSecurityDescriptor = v22;
      if ( v22 )
      {
        if ( (v22[3] & 0x2000000) == 0 )
        {
          EtwpReleaseLoggerContext(v22, 1);
          KeLeaveCriticalRegion();
          return 3221225485LL;
        }
        v24 = 32LL * *((unsigned __int8 *)v22 + 834);
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(v24 + CurrentSiloState + 4260);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(v24 + CurrentSiloState + 4276);
        EtwpMapEnableFlags(a1 + 16, 0);
LABEL_53:
        p_SizeOfBitMap = v23;
LABEL_78:
        v18 = 1;
        goto LABEL_79;
      }
      goto LABEL_75;
    case 2:
      *a4 = 16;
      if ( a2 != 16 )
        return 3221225476LL;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(EtwpGetCurrentSiloState() + 4128);
      break;
    case 3:
      *a4 = 8;
      if ( a2 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
      break;
    case 4:
      *a4 = 24;
      if ( a2 >= 0x18 )
      {
        v53 = *(_QWORD *)(a1 + 8);
        SecurityInformation = *(_DWORD *)(a1 + 4);
        v13 = (unsigned __int16)v53;
        if ( (unsigned __int16)v53 == 0xFFFF )
          v13 = *(unsigned __int8 *)(CurrentSiloState + 4208);
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        v15 = EtwpAcquireLoggerContextByLoggerId(CurrentSiloState, v13, 0);
        v16 = (__int64)v15;
        if ( v15 )
        {
          v17 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v15);
          ObjectsSecurityDescriptor = v17;
          Length = a2 - 16;
          v8 = SeQuerySecurityDescriptorInfo(
                 &SecurityInformation,
                 (PSECURITY_DESCRIPTOR)(a1 + 16),
                 &Length,
                 &ObjectsSecurityDescriptor);
          *a4 = Length + 16;
          EtwpDereferenceLoggerSecurityDescriptor(v16, (__int64)v17);
          v18 = 0;
          p_SizeOfBitMap = (unsigned int *)v16;
LABEL_79:
          EtwpReleaseLoggerContext(p_SizeOfBitMap, v18);
          goto LABEL_80;
        }
        goto LABEL_75;
      }
      return 3221225476LL;
    default:
      return (unsigned int)-1073741822;
  }
  return v8;
}
