/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x14056C040
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     RtlWriteAcquireTickLock @ 0x140117AE0 (RtlWriteAcquireTickLock.c)
 *     KeRemoveQueueDpc @ 0x140132AB0 (KeRemoveQueueDpc.c)
 *     KiPollFreezeExecution @ 0x14013B8A4 (KiPollFreezeExecution.c)
 *     KeRebaselineInterruptTime @ 0x140144748 (KeRebaselineInterruptTime.c)
 *     KiUpdateSystemTime @ 0x14016AE28 (KiUpdateSystemTime.c)
 *     KiSelectActiveTimerTable @ 0x14016FCBC (KiSelectActiveTimerTable.c)
 *     RtlWriteReleaseTickLock @ 0x1401780E8 (RtlWriteReleaseTickLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v3; // r14d
  char v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  LARGE_INTEGER v8; // r9
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  unsigned __int64 v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-78h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-70h] BYREF
  int v18; // [rsp+40h] [rbp-68h]
  unsigned __int64 v19; // [rsp+48h] [rbp-60h]
  unsigned __int64 v20; // [rsp+50h] [rbp-58h]
  LARGE_INTEGER v21; // [rsp+58h] [rbp-50h] BYREF
  LARGE_INTEGER *v22; // [rsp+60h] [rbp-48h] BYREF
  int v23; // [rsp+68h] [rbp-40h]
  int v24; // [rsp+6Ch] [rbp-3Ch]
  unsigned int v25; // [rsp+A0h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Number == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    v6 = *(_QWORD *)(Argument + 8);
    v3 = v25 >> 9;
    v7 = MEMORY[0xFFFFF78000000008] + v6;
    v19 = MEMORY[0xFFFFF78000000008] + v6;
    v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      LODWORD(v16) = (v6 * PerformanceFrequency.QuadPart) >> 32;
      HIDWORD(v16) = ((HIDWORD(v6) * PerformanceFrequency.LowPart
                     + (((unsigned int)v6 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)
                     + (unsigned int)v6 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart) >> 32)
                   + PerformanceFrequency.HighPart * HIDWORD(v6);
      v9 = v16;
      LODWORD(v16) = v6 * PerformanceFrequency.LowPart;
      *(_DWORD *)(Argument + 20) = v9 / 0x989680;
      HIDWORD(v16) = v9 % 0x989680;
      *(_DWORD *)(Argument + 16) = v16 / 0x989680;
      *(_QWORD *)(Argument + 16) += v8.QuadPart;
    }
    v20 = v7 / KeMaximumIncrement;
    v10 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v7 % KeMaximumIncrement;
    MEMORY[0xFFFFF780000003B0] += v10;
    v18 = v7 % KeMaximumIncrement;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
    MEMORY[0xFFFFF78000000010] = HIDWORD(v19);
    MEMORY[0xFFFFF78000000008] = v7;
    MEMORY[0xFFFFF78000000328] = HIDWORD(v20);
    MEMORY[0xFFFFF78000000320] = v11;
    MEMORY[0xFFFFF78000000350] = v12;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock(v13);
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v3 = v25 >> 9;
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  v4 = v3 & 1;
  if ( KiSelectActiveTimerTable((__int64)CurrentPrcb, 1) )
  {
    v14 = MEMORY[0xFFFFF78000000008];
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)((unsigned int)(v14 >> 18) - 256), 0LL);
  }
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v5 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter(Argument + 24, *(_QWORD *)(Argument + 16));
    KeRebaselineInterruptTime();
    if ( (xmmword_140542350 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v24 = 0;
      v21 = PerformanceCounter;
      v23 = 8;
      v22 = &v21;
      EtwTraceKernelEvent((__int64)&v22, 1u, 0x80008000, 0x1232u, 0x401802u);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    KiUpdateSystemTime(v5, 0LL, 3);
  if ( v4 )
    _enable();
}
