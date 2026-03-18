/*
 * XREFs of PopDiagTraceCsResiliencyExit @ 0x1402FCE94
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1402F8E18 (PopBatteryGetEnergyDrainFromDischage.c)
 */

__int64 __fastcall PopDiagTraceCsResiliencyExit(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  KIRQL v12; // si
  char v13; // r9
  __int64 v14; // r10
  int EnergyDrainFromDischage; // edx
  int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  __int128 v27; // [rsp+20h] [rbp-28h]

  DWORD1(v27) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v13 = byte_140442D28;
  xmmword_140442D40 = *(_OWORD *)a8;
  xmmword_140442D50 = *(_OWORD *)(a8 + 16);
  v14 = a5;
  qword_140442D60 = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(dword_140442D24, *(_DWORD *)(a2 + 12));
    LODWORD(v27) = xmmword_140442D30 | *(_DWORD *)a4;
    *((_QWORD *)&v27 + 1) = *((_QWORD *)&xmmword_140442D30 + 1) - *(_QWORD *)(a4 + 8);
  }
  else
  {
    EnergyDrainFromDischage = 0;
    *((_QWORD *)&v27 + 1) = 0LL;
    LODWORD(v27) = xmmword_140442D30;
  }
  v16 = 0;
  if ( byte_140442D22 )
    v16 = 2;
  if ( byte_140442D21 )
    v16 |= 1u;
  if ( !v13 || !a3 )
    v16 |= 4u;
  if ( byte_140442D23 )
    v16 |= 8u;
  *(_DWORD *)a1 = v16;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 32) = EnergyDrainFromDischage;
  v17 = PopQpcFrequency;
  *(_QWORD *)(a1 + 24) = a7;
  *(_QWORD *)(a1 + 8) = v14;
  *(_OWORD *)(a1 + 40) = v27;
  v18 = PpmConvertTime(qword_140442D78, v17, 0xF4240uLL);
  v19 = PopQpcFrequency;
  *(_QWORD *)(a1 + 96) = v18;
  v20 = PpmConvertTime(qword_140442D80, v19, 0xF4240uLL);
  v21 = PopQpcFrequency;
  *(_QWORD *)(a1 + 104) = v20;
  *(_QWORD *)(a1 + 112) = PpmConvertTime(qword_140442D88, v21, 0xF4240uLL);
  v22 = (unsigned __int64 *)&unk_140442DE8;
  v23 = 10LL;
  *(_DWORD *)(a1 + 120) = dword_140442D90;
  *(_OWORD *)(a1 + 56) = xmmword_140442D40;
  *(_OWORD *)(a1 + 72) = xmmword_140442D50;
  *(_QWORD *)(a1 + 88) = qword_140442D60;
  v24 = a1 - (_QWORD)&unk_140442DE8;
  do
  {
    *(unsigned __int64 *)((char *)v22 + v24 + 128) = PpmConvertTime(*v22, PopQpcFrequency, 0xF4240uLL);
    ++v22;
    --v23;
  }
  while ( v23 );
  PopCsResiliencyStats[0] = 0;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v12;
  __writecr8(v12);
  return result;
}
