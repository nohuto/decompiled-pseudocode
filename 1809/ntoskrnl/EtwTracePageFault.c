/*
 * XREFs of EtwTracePageFault @ 0x1403102E0
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpCoverageSamplerPageFault @ 0x140317C54 (EtwpCoverageSamplerPageFault.c)
 */

void __fastcall EtwTracePageFault(int a1, __int64 a2, char a3, __int64 a4)
{
  __int16 v5; // di
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ThreadServerSilo; // rax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 *v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+4Ch] [rbp-2Ch]

  switch ( a1 )
  {
    case 273:
      v5 = 523;
      break;
    case 272:
      v5 = 522;
      break;
    case 274:
      v5 = 524;
      break;
    case 276:
      v5 = 526;
      break;
    case 275:
      v5 = 525;
      break;
    case -1073741819:
      v5 = 527;
      break;
    default:
      return;
  }
  v12 = 0LL;
  v11 = a2;
  if ( a4 )
    v12 = *(_QWORD *)(a4 + 360);
  v15 = 0;
  v13 = &v11;
  v14 = 16;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
  {
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&v13, 1, 0x1000u, v5, 33554690);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    LOBYTE(CurrentThread[1].Queue) |= 0x10u;
    v8 = a3 != 0 ? 33558786 : 50338050;
    v9 = PsGetThreadServerSilo((__int64)CurrentThread);
    EtwTraceSiloKernelEvent(v9, (int)&v13, 1, 0x1000u, v5, v8);
    LOBYTE(CurrentThread[1].Queue) &= ~0x10u;
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( EtwpHostSiloState != -4548 && (*(_DWORD *)(EtwpHostSiloState + 4548) & 0x1000) != 0 )
    {
      LOBYTE(v10) = a3;
      EtwpCoverageSamplerPageFault(v12, v11, v10);
    }
  }
}
