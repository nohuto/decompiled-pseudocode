/*
 * XREFs of RaidpAdapterDpcRoutine @ 0x1C0010540
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pzqqxxtt @ 0x1C0036988 (McTemplateK0pzqqxxtt.c)
 */

void __fastcall RaidpAdapterDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  char v5; // r15
  unsigned int v6; // ebp
  char v7; // di
  bool v8; // r14
  _QWORD *p_Next; // rcx
  PSLIST_ENTRY v10; // rax
  _QWORD *v11; // rsi
  char v12; // di
  LARGE_INTEGER PerformanceCounter; // rax
  USHORT CurrentNodeNumber; // ax
  unsigned __int64 Mask; // rdx
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // cl
  LARGE_INTEGER v18; // rax
  LARGE_INTEGER v19; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rtt
  __int64 v24; // r8
  unsigned __int64 v25; // rtt
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-78h] BYREF
  int v27; // [rsp+68h] [rbp-70h]
  int v28; // [rsp+6Ch] [rbp-6Ch]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-60h]
  LARGE_INTEGER v31; // [rsp+80h] [rbp-58h]
  unsigned __int64 v32; // [rsp+88h] [rbp-50h]
  struct _GROUP_AFFINITY Affinity; // [rsp+90h] [rbp-48h] BYREF

  v4 = DeferredContext[8];
  v31.QuadPart = 0LL;
  v5 = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 264), 1, 0) == 1 )
    return;
  v6 = 0;
  v30 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (byte_1C00617E3 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v31 = PerformanceCounter;
  }
  v7 = 0;
  v8 = *(_QWORD *)(v4 + 256) != 0LL;
  if ( DpcCompletionLimit )
  {
    do
    {
      p_Next = *(_QWORD **)(v4 + 256);
      if ( !p_Next )
      {
        if ( v7 )
          break;
        v10 = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 240));
        *(_QWORD *)(v4 + 256) = v10;
        v7 = 1;
        p_Next = &v10->Next;
        if ( !v10 )
          break;
      }
      v11 = p_Next - 4;
      *(_QWORD *)(v4 + 256) = *p_Next;
      if ( (*((_BYTE *)p_Next - 15) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponent(v4, *((unsigned int *)v11 + 187), 0LL);
        *((_BYTE *)v11 + 17) &= ~1u;
      }
      ((void (__fastcall *)(_QWORD *, _QWORD *, PVOID, PVOID))v11[82])(
        v11,
        DeferredContext,
        SystemArgument1,
        SystemArgument2);
      ++v6;
    }
    while ( v6 < DpcCompletionLimit );
  }
  v12 = *(_QWORD *)(v4 + 256) != 0LL;
  *(_DWORD *)(v4 + 264) = 0;
  if ( v12 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    KeQueryNodeActiveAffinity(CurrentNodeNumber, &Affinity, 0LL);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    Mask = Affinity.Mask;
    v16 = ProcNumber.Number + 1;
    ProcNumber.Number = v16;
    if ( v16 >= 0x40u )
    {
LABEL_33:
      v17 = 0;
      ProcNumber.Number = 0;
      if ( (Affinity.Mask & 1) == 0 )
      {
        do
          ++v17;
        while ( !_bittest64((const __int64 *)&Mask, v17) );
        ProcNumber.Number = v17;
      }
    }
    else
    {
      while ( !_bittest64((const __int64 *)&Mask, v16) )
      {
        ProcNumber.Number = ++v16;
        if ( v16 >= 0x40u )
          goto LABEL_33;
      }
    }
    KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(v4 + 8) + 200LL), &ProcNumber);
  }
  else
  {
    if ( !v8 )
      *(_WORD *)(*(_QWORD *)(v4 + 8) + 202LL) = 0;
    if ( !ExQueryDepthSList((PSLIST_HEADER)(v4 + 240)) && *(_DWORD *)(v4 + 856) < 0xFFFFu )
      goto LABEL_16;
  }
  KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
LABEL_16:
  v28 = MEMORY[0xFFFFF78000000324];
  v27 = MEMORY[0xFFFFF78000000320] - v30;
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v30) > *(_DWORD *)(v4 + 4856) )
  {
    *(_DWORD *)(v4 + 4856) = v27;
    *(_DWORD *)(v4 + 4860) = v6;
  }
  if ( v6 > *(_DWORD *)(v4 + 4852) )
    *(_DWORD *)(v4 + 4852) = v6;
  if ( StorEtwLoggingEnabled && (byte_1C00617E3 & 4) != 0 && v6 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v18.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v18.QuadPart <= 0 || v18.QuadPart >= v31.QuadPart )
      v21 = v18.QuadPart - v31.QuadPart;
    else
      v21 = v18.QuadPart - v31.QuadPart - 1;
    v32 = v21;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      v22 = 0LL;
      if ( PerformanceFrequency.QuadPart && v21 )
      {
        v23 = 1000 * (v21 % PerformanceFrequency.QuadPart);
        v24 = 10000 * (v23 / PerformanceFrequency.QuadPart + 1000 * (v21 / PerformanceFrequency.QuadPart));
        v25 = 10000 * (v23 % PerformanceFrequency.QuadPart);
        v19.QuadPart = v25 % PerformanceFrequency.QuadPart;
        v22 = v25 / PerformanceFrequency.QuadPart + v24;
      }
    }
    else
    {
      v22 = v21;
    }
    v30 = v22;
    if ( (byte_1C00617E3 & 4) != 0 )
    {
      if ( v12 || v8 )
        v5 = 0;
      McTemplateK0pzqqxxtt(
        LowPart,
        v19.LowPart,
        v22,
        (unsigned int)RaidpAdapterDpcRoutine,
        (__int64)L"RaidpAdapterDpcRoutine",
        *(_DWORD *)(v4 + 56),
        v6,
        v21,
        v30,
        v12,
        v5);
    }
  }
}
