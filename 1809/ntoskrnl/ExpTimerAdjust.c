/*
 * XREFs of ExpTimerAdjust @ 0x14031CB80
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x1402EA884 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeCancelTimerInternal @ 0x140132214 (KeCancelTimerInternal.c)
 */

char __fastcall ExpTimerAdjust(PKTIMER Timer, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v9; // al
  ULONG v10; // r8d
  char v11; // r15
  __int64 v12; // rdi
  ULONG Dpc; // ecx
  int Dpc_high; // edx
  ULONG v15; // eax
  ULONG v16; // eax
  volatile LONG Lock; // r9d
  char v18; // bl
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+70h] [rbp+8h] BYREF

  KxAcquireSpinLock((PKSPIN_LOCK)&Timer[1]);
  v9 = KeCancelTimerInternal((__int64)Timer, &v20, &v21, (unsigned int *)&Timer[5]);
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    v12 = 0LL;
    if ( v21 == 1 )
    {
      v12 = a4 + a3 + v20 - a5;
      if ( v12 < 0 )
        v12 = a4;
    }
    else if ( (unsigned int)(v21 - 2) <= 1 )
    {
      v12 = a5 - v20 - a3;
      if ( v12 > 0 )
      {
        v12 = -1LL;
        if ( a3 > 0 )
          v12 = a5 - v20;
      }
    }
    Dpc = (ULONG)Timer[3].Dpc;
    Dpc_high = HIDWORD(Timer[3].Dpc);
    if ( Dpc )
    {
      v15 = Dpc - Dpc_high;
      if ( !Dpc_high )
        v15 = (ULONG)Timer[3].Dpc;
      Dpc = v15;
      v16 = v15 + a2 / 0x2710;
      if ( v16 >= Dpc )
      {
        Dpc = v16;
        LODWORD(Timer[3].Dpc) = v16;
        HIDWORD(Timer[3].Dpc) = a2 / 0x2710;
      }
    }
    Lock = Timer[5].Header.Lock;
    v18 = (__int64)Timer[4].Dpc & 1;
    *(_QWORD *)&Timer[4].Processor = v12;
    if ( !v18 )
      v10 = Dpc;
    KeSetCoalescableTimer(
      Timer,
      (LARGE_INTEGER)v12,
      v10,
      Lock,
      (PKDPC)((unsigned __int64)&Timer[2].TimerListEntry & -(__int64)(v18 != 0)));
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&Timer[1]);
  return v11;
}
