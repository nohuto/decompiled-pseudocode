/*
 * XREFs of PfSetSuperfetchInformation @ 0x1406A7D58
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     MmSetTrimWhileAgingState @ 0x1400F9608 (MmSetTrimWhileAgingState.c)
 *     PfTSetTraceWorkerPriority @ 0x14017EF94 (PfTSetTraceWorkerPriority.c)
 *     PfLockExclusiveAcquire @ 0x14019DA14 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x14019E400 (PfLockExclusiveRelease.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14059D640 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxServiceThreadSet @ 0x1405A3144 (PfpScenCtxServiceThreadSet.c)
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PfpRpControlRequest @ 0x1406A8384 (PfpRpControlRequest.c)
 *     PfpPrefetchRequest @ 0x1406A8EA4 (PfpPrefetchRequest.c)
 *     MmSetMinimumAgeRate @ 0x1406AA7C8 (MmSetMinimumAgeRate.c)
 *     PfpLogEventRequest @ 0x14072913C (PfpLogEventRequest.c)
 *     PfpProcessScenarioPhase @ 0x140744520 (PfpProcessScenarioPhase.c)
 *     PfGenerateTrace @ 0x140744728 (PfGenerateTrace.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     PfpSetParameter @ 0x140777860 (PfpSetParameter.c)
 *     PfTStart @ 0x1407781E8 (PfTStart.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408A0988 (PfpDeprioritizeOldPagesInWs.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, _OWORD *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ebx
  int v11; // ecx
  unsigned int v12; // ecx
  const void *v13; // rbx
  unsigned __int64 v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  _OWORD v22[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v23; // [rsp+50h] [rbp-A8h]
  PVOID P; // [rsp+58h] [rbp-A0h]
  __int64 v25; // [rsp+60h] [rbp-98h]
  int v26; // [rsp+68h] [rbp-90h]
  __int64 v27; // [rsp+70h] [rbp-88h]
  int v28; // [rsp+78h] [rbp-80h]
  unsigned int v29; // [rsp+80h] [rbp-78h]
  int v30; // [rsp+84h] [rbp-74h]
  void *Src[2]; // [rsp+88h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp-58h]
  __int64 v34; // [rsp+A8h] [rbp-50h]
  _OWORD v35[4]; // [rsp+B0h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+100h] [rbp+8h]

  memset(v35, 0, 0x20uLL);
  v33 = 0LL;
  v29 = 0;
  v30 = 0;
  v27 = 0LL;
  v28 = 0;
  v25 = 0LL;
  v26 = 0;
  v34 = 0LL;
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
  memset(v22, 0, sizeof(v22));
  v22[0] = *a2;
  v22[1] = a2[1];
  if ( *(_QWORD *)&v22[0] != 0x6B7568430000002DLL )
    goto LABEL_84;
  if ( DWORD2(v22[0]) == 14 )
  {
    LOBYTE(v7) = a4;
    v8 = PfpRpControlRequest(v22, v7);
    goto LABEL_11;
  }
  if ( SDWORD2(v22[0]) > 14 )
  {
    if ( DWORD2(v22[0]) == 15 )
    {
      if ( DWORD2(v22[1]) != 4 )
        goto LABEL_94;
      if ( a4 && (v22[1] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v30 = **(_DWORD **)&v22[1];
      v23 = v30 + dword_140467B5C;
      v9 = PfpSetParameter(KeyHandle, 4u);
      if ( v9 >= 0 )
        dword_140467B5C = v23;
      goto LABEL_12;
    }
    if ( DWORD2(v22[0]) != 18 )
    {
      switch ( DWORD2(v22[0]) )
      {
        case 0x13:
          if ( DWORD2(v22[1]) == 12 )
          {
            v9 = 0;
            if ( a4 && (v22[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v25 = **(_QWORD **)&v22[1];
            v11 = *(_DWORD *)(*(_QWORD *)&v22[1] + 8LL);
            v26 = v11;
            if ( (_DWORD)v25 == 2 && SHIDWORD(v25) < 5 && (unsigned __int8)v26 <= 7u && BYTE1(v11) <= 7u && !HIWORD(v11) )
            {
              LOBYTE(v36) = BYTE4(v25);
              BYTE1(v36) = v26;
              HIWORD(v36) = BYTE1(v11);
              MmSetTrimWhileAgingState(v36);
              goto LABEL_12;
            }
            goto LABEL_84;
          }
          goto LABEL_94;
        case 0x16:
          goto LABEL_10;
        case 0x19:
          if ( DWORD2(v22[1]) == 8 )
          {
            v9 = 0;
            if ( a4 && (v22[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v34 = **(_QWORD **)&v22[1];
            if ( (_DWORD)v34 == 1 )
            {
              MmSetMinimumAgeRate(HIDWORD(v34));
              goto LABEL_12;
            }
            goto LABEL_84;
          }
          goto LABEL_94;
        case 0x1A:
          LOBYTE(v7) = a4;
          v8 = PfpDeprioritizeOldPagesInWs(v22, v7);
          goto LABEL_11;
        case 0x1D:
LABEL_10:
          v8 = PfpPfnPrioRequest((__int64)v22, a4, &v32);
LABEL_11:
          v9 = v8;
          goto LABEL_12;
      }
      goto LABEL_101;
    }
    if ( DWORD2(v22[1]) != 12 )
      goto LABEL_94;
    if ( a4 && (v22[1] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = **(_QWORD **)&v22[1];
    v18 = *(_DWORD *)(*(_QWORD *)&v22[1] + 8LL);
    if ( (_DWORD)v27 == 2 && HIDWORD(v27) < 2 && (v18 & 0xFFFFFFFC) == 0 )
    {
      PfLockExclusiveAcquire((ULONG_PTR)&PfTGlobals);
      if ( HIDWORD(v27) )
      {
        v20 = dword_140467608 & ~v18;
        PfTCleanup(&PfTGlobals);
        PfTInitialize(&PfTGlobals, v21, 1LL);
      }
      else
      {
        v20 = v18 & ~dword_140467608;
      }
      v9 = PfTStart(&PfTGlobals, v19, v20);
      PfLockExclusiveRelease((ULONG_PTR)&PfTGlobals);
      PfpScenCtxServiceThreadSet((ULONG_PTR)&qword_140467B60, HIDWORD(v27) == 0);
      goto LABEL_12;
    }
LABEL_84:
    v9 = -1073741811;
    goto LABEL_12;
  }
  switch ( DWORD2(v22[0]) )
  {
    case 3:
      v12 = 16;
      if ( DWORD2(v22[1]) != 16 )
        goto LABEL_94;
      if ( a4 && (v22[1] & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)Src = **(_OWORD **)&v22[1];
      v13 = Src[1];
      if ( !Src[1] )
        goto LABEL_84;
      v14 = LODWORD(Src[0]);
      v15 = LODWORD(Src[0]) >> 7;
      if ( !(LODWORD(Src[0]) >> 7) )
        goto LABEL_84;
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
          goto LABEL_84;
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
      v8 = PfpPrefetchRequest(v22, v7);
      goto LABEL_11;
    case 7:
      goto LABEL_10;
    case 0xA:
      if ( DWORD2(v22[1]) == 32 )
      {
        if ( a4 && (v22[1] & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v35[0] = **(_OWORD **)&v22[1];
        v35[1] = *(_OWORD *)(*(_QWORD *)&v22[1] + 16LL);
        LOBYTE(v7) = a4;
        v8 = PfpProcessScenarioPhase(v35, v7);
        goto LABEL_11;
      }
      goto LABEL_94;
  }
  if ( DWORD2(v22[0]) != 11 )
  {
    if ( DWORD2(v22[0]) == 13 )
    {
      if ( DWORD2(v22[1]) == 8 )
      {
        if ( a4 && (v22[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v33 = **(_QWORD **)&v22[1];
        if ( (_WORD)v33 == 1 && (unsigned int)(HIDWORD(v33) - 1) <= 4 )
        {
          v8 = PfpScenCtxPrefetchStateSet(
                 (ULONG_PTR)&qword_140467B60,
                 SHIDWORD(v33),
                 ((unsigned int)(v33 >> 16) & 1) + 1,
                 0);
          goto LABEL_11;
        }
        goto LABEL_84;
      }
LABEL_94:
      v9 = -1073741306;
      goto LABEL_12;
    }
LABEL_101:
    v9 = -1073741821;
    goto LABEL_12;
  }
  if ( DWORD2(v22[1]) != 4 )
    goto LABEL_94;
  if ( a4 && (v22[1] & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v29 = **(_DWORD **)&v22[1];
  v9 = -1073741431;
  if ( (int)PfTSetTraceWorkerPriority(v29) <= 31 )
    v9 = 0;
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
