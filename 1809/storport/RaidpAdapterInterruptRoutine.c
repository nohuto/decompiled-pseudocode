/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x1C003B5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqx @ 0x1C0036840 (McTemplateK0pqqx.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  LARGE_INTEGER v2; // rbx
  struct _MCGEN_TRACE_CONTEXT *v3; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  char v6; // bp
  LARGE_INTEGER v7; // rax
  unsigned __int64 v8; // rax
  ULONG CurrentProcessorNumber; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  struct _MCGEN_TRACE_CONTEXT *QuadPart; // [rsp+70h] [rbp+18h]
  unsigned __int64 v15; // [rsp+78h] [rbp+20h]

  v2.QuadPart = 0LL;
  v3 = 0LL;
  QuadPart = 0LL;
  if ( !*(_BYTE *)(a2 + 107) || *(int *)(a2 + 284) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && (byte_1C00617E3 & 8) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v2 = PerformanceCounter;
    QuadPart = (struct _MCGEN_TRACE_CONTEXT *)PerformanceCounter.QuadPart;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 544) + 24LL))(*(_QWORD *)(a2 + 552) + 16LL);
  if ( StorEtwLoggingEnabled && (byte_1C00617E3 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v7.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v7.QuadPart <= 0 || v7.QuadPart >= v2.QuadPart )
      v8 = v7.QuadPart - v2.QuadPart;
    else
      v8 = v7.QuadPart - v2.QuadPart - 1;
    v15 = v8;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v8 )
        v3 = (struct _MCGEN_TRACE_CONTEXT *)(10000
                                           * (1000 * (v8 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
                                           / PerformanceFrequency.QuadPart
                                           + 10000
                                           * (1000
                                            * (v8 % PerformanceFrequency.QuadPart)
                                            / PerformanceFrequency.QuadPart
                                            + 1000 * (v8 / PerformanceFrequency.QuadPart)));
    }
    else
    {
      v3 = (struct _MCGEN_TRACE_CONTEXT *)v8;
    }
    QuadPart = v3;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_1C00617E3 & 8) != 0 )
      McTemplateK0pqqx(
        QuadPart,
        v10,
        v11,
        RaidpAdapterInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        QuadPart);
  }
  return v6;
}
