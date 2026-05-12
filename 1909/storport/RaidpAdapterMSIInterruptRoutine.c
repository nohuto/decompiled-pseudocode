/*
 * XREFs of RaidpAdapterMSIInterruptRoutine @ 0x1C000EF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqx @ 0x1C00334B0 (McTemplateK0pqqx.c)
 */

char __fastcall RaidpAdapterMSIInterruptRoutine(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  LARGE_INTEGER v6; // rbx
  char v7; // si
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v10; // rax
  unsigned __int64 v11; // rax
  char CurrentProcessorNumber; // al
  int v13; // edx
  int v14; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v6.QuadPart = 0LL;
  if ( !*(_BYTE *)(a2 + 107) || *(int *)(a2 + 268) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && (byte_1C0062743 & 8) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v6 = PerformanceCounter;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 456))(*(_QWORD *)(a2 + 536) + 16LL, a3);
  if ( StorEtwLoggingEnabled && (byte_1C0062743 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v10.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v10.QuadPart <= 0 || v10.QuadPart >= v6.QuadPart )
      v11 = v10.QuadPart - v6.QuadPart;
    else
      v11 = v10.QuadPart - v6.QuadPart - 1;
    v16 = v11;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v11 )
        v3 = 10000
           * (1000 * (v11 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v11 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 1000 * (v11 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v3 = v11;
    }
    v16 = v3;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_1C0062743 & 8) != 0 )
      McTemplateK0pqqx(
        v16,
        v13,
        v14,
        (unsigned int)RaidpAdapterMSIInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v16);
  }
  return v7;
}
