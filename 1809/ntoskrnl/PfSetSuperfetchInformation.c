/*
 * XREFs of PfSetSuperfetchInformation @ 0x140666A38
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MmSetTrimWhileAgingState @ 0x14012001C (MmSetTrimWhileAgingState.c)
 *     PfTSetTraceWorkerPriority @ 0x140175B9C (PfTSetTraceWorkerPriority.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14056EC34 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxServiceThreadSet @ 0x140574A7C (PfpScenCtxServiceThreadSet.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 *     PfpRpControlRequest @ 0x14069ED40 (PfpRpControlRequest.c)
 *     PfpPrefetchRequest @ 0x1406A2F7C (PfpPrefetchRequest.c)
 *     MmSetMinimumAgeRate @ 0x1406A5B9C (MmSetMinimumAgeRate.c)
 *     PfpLogEventRequest @ 0x1406E2D34 (PfpLogEventRequest.c)
 *     PfpProcessScenarioPhase @ 0x14071CE5C (PfpProcessScenarioPhase.c)
 *     PfGenerateTrace @ 0x14071D064 (PfGenerateTrace.c)
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 *     PfpSetParameter @ 0x1407532E0 (PfpSetParameter.c)
 *     PfTStart @ 0x140753C6C (PfTStart.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408650E4 (PfpDeprioritizeOldPagesInWs.c)
 *     PfTCleanup @ 0x14086643C (PfTCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, _OWORD *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edi
  int v11; // ecx
  unsigned int v12; // ecx
  const void *v13; // rdi
  unsigned __int64 v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  int v18; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rdx
  _OWORD v23[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v24; // [rsp+50h] [rbp-A8h]
  __int64 v25; // [rsp+58h] [rbp-A0h]
  int v26; // [rsp+60h] [rbp-98h]
  PVOID P; // [rsp+68h] [rbp-90h]
  __int64 v28; // [rsp+70h] [rbp-88h]
  int v29; // [rsp+78h] [rbp-80h]
  void *Src[2]; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+90h] [rbp-68h] BYREF
  int v32; // [rsp+94h] [rbp-64h]
  unsigned __int64 v33; // [rsp+98h] [rbp-60h]
  __int64 v34; // [rsp+A0h] [rbp-58h]
  _OWORD v35[5]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+100h] [rbp+8h]

  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
  {
    v9 = -1073741790;
    goto LABEL_12;
  }
  if ( a3 != 32 )
  {
    v9 = -1073741820;
    goto LABEL_12;
  }
  memset(v23, 0, sizeof(v23));
  v23[0] = *a2;
  v23[1] = a2[1];
  if ( *(_QWORD *)&v23[0] != 0x6B7568430000002DLL )
    goto LABEL_86;
  if ( DWORD2(v23[0]) == 14 )
  {
    LOBYTE(v7) = a4;
    v8 = PfpRpControlRequest(v23, v7);
    goto LABEL_11;
  }
  if ( SDWORD2(v23[0]) > 14 )
  {
    if ( DWORD2(v23[0]) == 15 )
    {
      if ( DWORD2(v23[1]) != 4 )
        goto LABEL_96;
      if ( a4 && (v23[1] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v32 = **(_DWORD **)&v23[1];
      v24 = v32 + dword_14043D15C;
      v9 = PfpSetParameter(KeyHandle, 4u);
      if ( v9 >= 0 )
        dword_14043D15C = v24;
      goto LABEL_12;
    }
    if ( DWORD2(v23[0]) != 18 )
    {
      switch ( DWORD2(v23[0]) )
      {
        case 0x13:
          if ( DWORD2(v23[1]) == 12 )
          {
            v9 = 0;
            if ( a4 && (v23[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v28 = **(_QWORD **)&v23[1];
            v11 = *(_DWORD *)(*(_QWORD *)&v23[1] + 8LL);
            v29 = v11;
            if ( (_DWORD)v28 == 2 && SHIDWORD(v28) < 5 && (unsigned __int8)v29 <= 7u && BYTE1(v11) <= 7u && !HIWORD(v11) )
            {
              LOBYTE(v36) = BYTE4(v28);
              BYTE1(v36) = v29;
              HIWORD(v36) = BYTE1(v11);
              MmSetTrimWhileAgingState(v36);
              goto LABEL_12;
            }
            goto LABEL_86;
          }
          goto LABEL_96;
        case 0x16:
          goto LABEL_10;
        case 0x19:
          if ( DWORD2(v23[1]) == 8 )
          {
            v9 = 0;
            if ( a4 && (v23[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v34 = **(_QWORD **)&v23[1];
            if ( (_DWORD)v34 == 1 )
            {
              MmSetMinimumAgeRate(HIDWORD(v34));
              goto LABEL_12;
            }
            goto LABEL_86;
          }
          goto LABEL_96;
        case 0x1A:
          LOBYTE(v7) = a4;
          v8 = PfpDeprioritizeOldPagesInWs(v23, v7);
          goto LABEL_11;
        case 0x1D:
LABEL_10:
          v8 = PfpPfnPrioRequest((__int64)v23, a4, &v31);
LABEL_11:
          v9 = v8;
          goto LABEL_12;
      }
      goto LABEL_103;
    }
    if ( DWORD2(v23[1]) != 12 )
      goto LABEL_96;
    if ( a4 && (v23[1] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = **(_QWORD **)&v23[1];
    v18 = *(_DWORD *)(*(_QWORD *)&v23[1] + 8LL);
    v26 = v18;
    if ( (_DWORD)v25 == 2 && HIDWORD(v25) < 2 && (v18 & 0xFFFFFFFC) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
      if ( HIDWORD(v25) )
      {
        v21 = dword_14043CC08 & ~v26;
        PfTCleanup(&PfTGlobals);
        PfTInitialize(&PfTGlobals, v22, 1LL);
      }
      else
      {
        v21 = v26 & ~dword_14043CC08;
      }
      v9 = PfTStart(&PfTGlobals, v20, v21);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
      KeAbPostRelease((ULONG_PTR)&PfTGlobals);
      KeLeaveCriticalRegion();
      PfpScenCtxServiceThreadSet((ULONG_PTR)&qword_14043D160, HIDWORD(v25) == 0);
      goto LABEL_12;
    }
LABEL_86:
    v9 = -1073741811;
    goto LABEL_12;
  }
  switch ( DWORD2(v23[0]) )
  {
    case 3:
      v12 = 16;
      if ( DWORD2(v23[1]) != 16 )
        goto LABEL_96;
      if ( a4 && (v23[1] & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)Src = **(_OWORD **)&v23[1];
      v13 = Src[1];
      if ( !Src[1] )
        goto LABEL_86;
      v14 = LODWORD(Src[0]);
      v15 = LODWORD(Src[0]) >> 7;
      if ( !(LODWORD(Src[0]) >> 7) )
        goto LABEL_86;
      v16 = (__int64)Src[0] & 0x1F;
      if ( v16 >= 2 )
      {
        if ( v16 <= 3 )
        {
          v12 = 36;
          goto LABEL_54;
        }
        if ( v16 == 5 )
        {
          v12 = 12;
          goto LABEL_54;
        }
        if ( v16 == 27 )
        {
LABEL_54:
          if ( v15 >= v12 && v15 < 0xFF0 )
          {
            P = ExAllocatePoolWithTag(PagedPool, v15, 0x44456650u);
            if ( P )
            {
              if ( a4 )
              {
                if ( ((unsigned __int8)v13 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v17 = (unsigned __int64)v13 + (v14 >> 7);
                if ( v17 > 0x7FFFFFFF0000LL || v17 < (unsigned __int64)v13 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(P, v13, v14 >> 7);
              Src[1] = P;
              v8 = PfpLogEventRequest(Src);
              goto LABEL_11;
            }
            v9 = -1073741670;
            goto LABEL_12;
          }
          goto LABEL_86;
        }
      }
      v9 = -1073741637;
      goto LABEL_12;
    case 4:
      PfGenerateTrace(&Thread, 0LL);
      v9 = 0;
      goto LABEL_12;
    case 5:
      LOBYTE(v7) = a4;
      v8 = PfpPrefetchRequest(v23, v7);
      goto LABEL_11;
    case 7:
      goto LABEL_10;
    case 0xA:
      if ( DWORD2(v23[1]) == 32 )
      {
        if ( a4 && (v23[1] & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v35[0] = **(_OWORD **)&v23[1];
        v35[1] = *(_OWORD *)(*(_QWORD *)&v23[1] + 16LL);
        LOBYTE(v7) = a4;
        v8 = PfpProcessScenarioPhase(v35, v7);
        goto LABEL_11;
      }
      goto LABEL_96;
  }
  if ( DWORD2(v23[0]) != 11 )
  {
    if ( DWORD2(v23[0]) == 13 )
    {
      if ( DWORD2(v23[1]) == 8 )
      {
        if ( a4 && (v23[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v33 = **(_QWORD **)&v23[1];
        if ( (_WORD)v33 == 1 && (unsigned int)(HIDWORD(v33) - 1) <= 4 )
        {
          v8 = PfpScenCtxPrefetchStateSet(
                 (ULONG_PTR)&qword_14043D160,
                 SHIDWORD(v33),
                 ((unsigned int)(v33 >> 16) & 1) + 1,
                 0);
          goto LABEL_11;
        }
        goto LABEL_86;
      }
LABEL_96:
      v9 = -1073741306;
      goto LABEL_12;
    }
LABEL_103:
    v9 = -1073741821;
    goto LABEL_12;
  }
  if ( DWORD2(v23[1]) != 4 )
    goto LABEL_96;
  if ( a4 && (v23[1] & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = -1073741431;
  if ( (int)PfTSetTraceWorkerPriority(**(_DWORD **)&v23[1]) <= 31 )
    v9 = 0;
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
