/*
 * XREFs of WmiQueryTraceInformation @ 0x140717EB0
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140717BF8 (WdipSemWriteSemActionsEvent.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140909890 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140718C1C (EtwQueryTraceHandleByLoggerName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // r15
  __int64 v9; // rdx
  __int32 v10; // ebx
  unsigned int v11; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v13; // rax
  unsigned int v14; // ebx
  __int32 v15; // ebx
  __int32 v16; // ebx
  __int32 v17; // ebx
  int v18; // ebx
  int v19; // ebx
  __int64 *v20; // rax
  __int32 v21; // ebx
  __int32 v22; // ebx
  __int32 v23; // ebx
  __int32 v24; // ebx
  int v25; // ebx
  __int64 v26; // r13
  unsigned int v27; // ebx
  unsigned int j; // r9d
  unsigned int v29; // r14d
  unsigned int *v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // ecx
  NTSTATUS result; // eax
  _QWORD *v34; // rax
  unsigned int *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r12
  unsigned int v45; // ebx
  _QWORD *v46; // rax
  unsigned int *v47; // r10
  unsigned int i; // r8d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v50; // rax
  unsigned int *v51; // rax
  NTSTATUS v52; // [rsp+24h] [rbp-44h]
  unsigned int v53; // [rsp+28h] [rbp-40h]
  unsigned int v54; // [rsp+28h] [rbp-40h]
  __int64 v55; // [rsp+38h] [rbp-30h] BYREF
  __int64 v56; // [rsp+40h] [rbp-28h]

  v6 = TraceInformationLength;
  v52 = 0;
  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( RequiredLength )
    *RequiredLength = 0;
  if ( TraceInformationClass > TraceHandleByNameClass )
  {
    v10 = TraceInformationClass - 8;
    if ( !v10 )
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v11 = *(_DWORD *)Buffer;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      v13 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], v11, 0);
      if ( !v13 )
        return -1073741275;
      v14 = v13[64];
      EtwpReleaseLoggerContext(v13, 0);
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v14;
      goto LABEL_10;
    }
    v15 = v10 - 1;
    if ( !v15 )
    {
      if ( !Buffer )
        return -1073741581;
      if ( !RequiredLength )
        return -1073741582;
      *RequiredLength = 32;
      if ( (unsigned int)v6 < 0x20 )
        return -1073741820;
      if ( !TraceInformation )
        return -1073741584;
      v55 = *(_QWORD *)Buffer;
      v54 = (unsigned __int16)v55;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v50 = PsGetCurrentServerSiloGlobals();
      v51 = EtwpAcquireLoggerContextByLoggerId(v50[108], v54, 0);
      if ( v51 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v51[1];
        *((_DWORD *)TraceInformation + 2) = v51[60];
        *((_DWORD *)TraceInformation + 3) = v51[63];
        *((_DWORD *)TraceInformation + 4) = v51[3];
        *((_DWORD *)TraceInformation + 5) = v51[56];
        *((_DWORD *)TraceInformation + 7) = v51[54];
        *((_DWORD *)TraceInformation + 6) = v51[57];
        EtwpReleaseLoggerContext(v51, 0);
      }
      else
      {
        v52 = -1073741162;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return v52;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( !EtwpInitialized )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v20 = &EtwpDiskIoNotifyRoutines;
        goto LABEL_24;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( RequiredLength )
          *RequiredLength = 120;
        if ( !EtwpInitialized )
          return -1073741661;
        if ( (_DWORD)v6 != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)TraceInformation = *(_OWORD *)EtwpAllNotifyRoutines;
        *((_OWORD *)TraceInformation + 1) = *(_OWORD *)off_14090D1C0;
        *((_OWORD *)TraceInformation + 2) = *(_OWORD *)&off_14090D1D0;
        *((_OWORD *)TraceInformation + 3) = *(_OWORD *)&off_14090D1E0;
        *((_OWORD *)TraceInformation + 4) = *(_OWORD *)off_14090D1F0;
        *((_OWORD *)TraceInformation + 5) = *(_OWORD *)&off_14090D200;
        *((_OWORD *)TraceInformation + 6) = *(_OWORD *)off_14090D210;
        *((_QWORD *)TraceInformation + 14) = EtwpTraceRedirectedIo;
        return 0;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( !EtwpInitialized )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v20 = (__int64 *)&EtwpFltIoNotifyRoutines;
        goto LABEL_24;
      }
      if ( v19 == 2 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( !EtwpInitialized )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v20 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_24:
        *(_QWORD *)TraceInformation = v20;
        return 0;
      }
      return -1073741821;
    }
    v44 = 0LL;
    v56 = 0LL;
    if ( (_DWORD)v6 != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v45 = *(_DWORD *)Buffer;
    v53 = *(_DWORD *)Buffer;
    v46 = PsGetCurrentServerSiloGlobals();
    v47 = EtwpAcquireLoggerContextByLoggerId(v46[108], v45, 0);
    if ( !v47 )
      return -1073741275;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      v44 += *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v47 + 135) + 4136LL) + ((unsigned __int64)i << 6) + 8)
                       + 8LL * v53);
      v56 = v44;
    }
    EtwpReleaseLoggerContext(v47, 0);
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v44;
    goto LABEL_98;
  }
  if ( TraceInformationClass != TraceHandleByNameClass )
  {
    if ( TraceInformationClass == TraceIdClass )
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v41 = *((_QWORD *)Buffer + 1);
      v55 = v41;
      if ( !v41 || v41 == 0xFFFFFFFFLL )
        return -1073741816;
      v38 = (unsigned __int16)v41;
      if ( (unsigned int)(unsigned __int16)v41 >= *(_DWORD *)(v9 + 16) )
        return -1073741816;
      goto LABEL_75;
    }
    v21 = TraceInformationClass - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( (unsigned int)v6 < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v39 = *((_QWORD *)Buffer + 1);
        v55 = v39;
        if ( !v39 || v39 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)TraceInformation = HIDWORD(v39);
        goto LABEL_10;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
            return -1073741821;
          if ( v25 == 1 )
          {
            if ( (unsigned int)v6 < 8 || !TraceInformation )
              return -1073741820;
            v26 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
            v27 = 0;
            for ( j = 1; ; j = v29 + 1 )
            {
              v29 = j;
              if ( j >= *(_DWORD *)(v26 + 16) )
                break;
              v30 = EtwpAcquireLoggerContextByLoggerId(v26, j, 0);
              if ( v30 )
              {
                if ( 8 * (unsigned __int64)(v27 + 1) <= v6 )
                  *((_QWORD *)TraceInformation + v27) = v29;
                EtwpReleaseLoggerContext(v30, 0);
                ++v27;
              }
            }
            v31 = 8LL * v27;
            v32 = 0;
            if ( v31 > v6 )
              v32 = 261;
            v52 = v32;
            if ( RequiredLength )
              *RequiredLength = v31;
            return v52;
          }
          return -1073741821;
        }
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        v34 = PsGetCurrentServerSiloGlobals();
        v35 = EtwpAcquireLoggerContextByLoggerId(v34[108], 1u, 0);
        if ( !v35 )
          return -1073741275;
        v36 = *v35;
        v55 = v36;
        EtwpReleaseLoggerContext(v35, 0);
        if ( TraceInformation )
          *(_QWORD *)TraceInformation = v36;
LABEL_98:
        if ( RequiredLength )
          *RequiredLength = 8;
        return v52;
      }
      if ( (unsigned int)v6 < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v37 = *((_QWORD *)Buffer + 1);
      v55 = v37;
      if ( !v37 || v37 == 0xFFFFFFFFLL )
        return -1073741816;
      v38 = BYTE2(v37);
LABEL_75:
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v38;
LABEL_10:
      if ( RequiredLength )
        *RequiredLength = 4;
      return v52;
    }
    if ( (_DWORD)v6 != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v40 = *(_DWORD *)Buffer;
    if ( *(_DWORD *)Buffer >= *(_DWORD *)(v9 + 16) )
      return -1073741816;
    v55 = 0LL;
    if ( !v40 )
      LOWORD(v40) = -1;
    LOWORD(v55) = v40;
LABEL_96:
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v55;
    goto LABEL_98;
  }
  if ( KeGetCurrentThread()->PreviousMode && *(_WORD *)Buffer )
  {
    v42 = *((_QWORD *)Buffer + 1);
    if ( (v42 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v43 = v42 + *(unsigned __int16 *)Buffer;
    if ( v43 > 0x7FFFFFFF0000LL || v43 < v42 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( (_DWORD)v6 != 8 )
    return -1073741820;
  v55 = 0LL;
  result = EtwQueryTraceHandleByLoggerName(Buffer, &v55);
  v52 = result;
  if ( result >= 0 )
    goto LABEL_96;
  return result;
}
