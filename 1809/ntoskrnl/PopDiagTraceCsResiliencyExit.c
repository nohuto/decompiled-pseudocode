/*
 * XREFs of PopDiagTraceCsResiliencyExit @ 0x1402DFDBC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE260 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmConvertTime @ 0x1400A7D14 (PpmConvertTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1402DC65C (PopBatteryGetEnergyDrainFromDischage.c)
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

  v12 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v13 = byte_140417428;
  xmmword_140417440 = *(_OWORD *)a8;
  xmmword_140417450 = *(_OWORD *)(a8 + 16);
  v14 = a5;
  qword_140417460 = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(dword_140417424, *(_DWORD *)(a2 + 12));
    LODWORD(v27) = xmmword_140417430 | *(_DWORD *)a4;
    *((_QWORD *)&v27 + 1) = *((_QWORD *)&xmmword_140417430 + 1) - *(_QWORD *)(a4 + 8);
  }
  else
  {
    EnergyDrainFromDischage = 0;
    *((_QWORD *)&v27 + 1) = 0LL;
    LODWORD(v27) = xmmword_140417430;
  }
  v16 = 0;
  if ( byte_140417422 )
    v16 = 2;
  if ( byte_140417421 )
    v16 |= 1u;
  if ( !v13 || !a3 )
    v16 |= 4u;
  if ( byte_140417423 )
    v16 |= 8u;
  *(_DWORD *)a1 = v16;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 32) = EnergyDrainFromDischage;
  v17 = PopQpcFrequency;
  *(_QWORD *)(a1 + 24) = a7;
  *(_QWORD *)(a1 + 8) = v14;
  *(_OWORD *)(a1 + 40) = v27;
  v18 = PpmConvertTime(qword_140417478, v17, 0xF4240uLL);
  v19 = PopQpcFrequency;
  *(_QWORD *)(a1 + 96) = v18;
  v20 = PpmConvertTime(qword_140417480, v19, 0xF4240uLL);
  v21 = PopQpcFrequency;
  *(_QWORD *)(a1 + 104) = v20;
  *(_QWORD *)(a1 + 112) = PpmConvertTime(qword_140417488, v21, 0xF4240uLL);
  v22 = (unsigned __int64 *)&unk_1404174E8;
  v23 = 10LL;
  *(_DWORD *)(a1 + 120) = dword_140417490;
  *(_OWORD *)(a1 + 56) = xmmword_140417440;
  *(_OWORD *)(a1 + 72) = xmmword_140417450;
  *(_QWORD *)(a1 + 88) = qword_140417460;
  v24 = a1 - (_QWORD)&unk_1404174E8;
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
