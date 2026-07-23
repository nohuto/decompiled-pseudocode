/*
 * XREFs of PopCalculateCsSummary @ 0x1402FB520
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1402EE47C (PpmGetPlatformSelectionVetoCounts.c)
 *     PopBatteryCapacityToRate @ 0x1402F88A4 (PopBatteryCapacityToRate.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1402F88C8 (PopBatteryGetEnergyDrainFromDischage.c)
 *     PopCalculateIdleInformation @ 0x1402FBA58 (PopCalculateIdleInformation.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1402FBB6C (PopCalculateTotalHwDripsResidency.c)
 *     PopCurrentPowerState @ 0x14069B760 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x1408A9F24 (PopMeasureEnergyChange.c)
 *     PopQueryInputSuppressionCount @ 0x1408AA2A8 (PopQueryInputSuppressionCount.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rsi
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned int EnergyDrainFromDischage; // eax
  unsigned int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  LONGLONG v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // r10d
  __int64 v19; // rsi
  int v20; // ecx
  __int128 v21; // xmm0
  char v22; // al
  KIRQL v23; // al
  KIRQL v24; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  __int64 v27; // [rsp+20h] [rbp-A9h] BYREF
  int v28; // [rsp+28h] [rbp-A1h]
  int v29; // [rsp+2Ch] [rbp-9Dh]
  int v30; // [rsp+30h] [rbp-99h]
  int v31; // [rsp+34h] [rbp-95h]
  __int64 v32; // [rsp+38h] [rbp-91h] BYREF
  __int64 v33; // [rsp+40h] [rbp-89h]
  unsigned __int64 v34; // [rsp+48h] [rbp-81h]
  __int64 v35; // [rsp+50h] [rbp-79h]
  unsigned __int64 v36; // [rsp+58h] [rbp-71h]
  unsigned __int64 v37; // [rsp+60h] [rbp-69h]
  unsigned __int64 v38; // [rsp+68h] [rbp-61h]
  unsigned __int64 v39; // [rsp+70h] [rbp-59h]
  __int64 v40; // [rsp+78h] [rbp-51h]
  __int128 v41; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v42[4]; // [rsp+90h] [rbp-39h] BYREF
  _DWORD v43[8]; // [rsp+B0h] [rbp-19h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+D0h] [rbp+7h] BYREF
  char v45; // [rsp+130h] [rbp+67h]
  int v46; // [rsp+138h] [rbp+6Fh]
  int v47; // [rsp+140h] [rbp+77h] BYREF
  int v48; // [rsp+148h] [rbp+7Fh]

  memset(v43, 0, sizeof(v43));
  v41 = 0uLL;
  memset(v42, 0, sizeof(v42));
  LOBYTE(v34) = 0;
  PopCalculateIdleInformation(v42);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = InterruptTimePrecise.QuadPart - qword_140467B88;
  v6 = (InterruptTimePrecise.QuadPart - qword_140467B88) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_140467B88 )
    v7 = 0LL;
  else
    v7 = (InterruptTimePrecise.QuadPart - PopPdcLastCsExitTime) / 0xAuLL;
  PopCurrentPowerState(v43);
  if ( v6 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(PopCsConsumption, v43[3]);
    v46 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v5 / 0xA);
  }
  else
  {
    v46 = 0;
  }
  PopMeasureEnergyChange(&v41, &CsSessionEnergyCounter);
  v48 = HIDWORD(xmmword_1404431D4);
  if ( HIDWORD(xmmword_1404431D4) )
    v9 = (unsigned int)(100 * xmmword_1404431E4) / HIDWORD(xmmword_1404431D4);
  else
    LOBYTE(v9) = 0;
  v10 = 0;
  if ( (xmmword_1404431D4 & 0x40000000) == 0 )
    v10 = xmmword_1404431E4;
  v45 = v9;
  v35 = v42[1] - qword_140467B90;
  v28 = v10;
  v29 = LODWORD(v42[3]) - dword_140467BA0;
  v11 = PopCalculateTotalHwDripsResidency(qword_140467C28, v42[2], v5 / 0xA);
  v12 = v6 + qword_140467B98 - v42[0];
  v40 = v11;
  v13 = _InterlockedExchangeAdd64(&qword_140467CC0, 0LL);
  if ( v13 )
    v13 = (v13 - qword_140467B88) / 0xA;
  v33 = qword_140467BD0;
  v33 -= PpmConvertTime(qword_140467BC0, PopQpcFrequency, 0xF4240uLL);
  v14 = qword_140467BE0;
  v39 = v6 - qword_140467BD0;
  if ( qword_140467BD8 )
  {
    if ( qword_140467B88 <= (unsigned __int64)qword_140467BD8 )
      v15 = InterruptTimePrecise.QuadPart - qword_140467BD8;
    else
      v15 = InterruptTimePrecise.QuadPart - qword_140467B88;
    v14 = v15 + qword_140467BE0;
  }
  v36 = v14 / 0xA;
  v37 = PpmConvertTime(qword_140467BF0, PopQpcFrequency, 0xF4240uLL);
  v16 = PpmConvertTime(qword_140467C00, PopQpcFrequency, 0xF4240uLL);
  v31 = (unsigned __int8)byte_140467C50;
  v38 = v16;
  v30 = PopPdcLastCsExitReason;
  v32 = 0LL;
  v27 = 0LL;
  PpmGetPlatformSelectionVetoCounts(dword_140467D00, &v32, &v27);
  v19 = v32 - qword_140467C30;
  v32 -= qword_140467C30;
  v27 -= qword_140467C38;
  if ( qword_140467BA8 )
  {
    v17 = 100 * qword_140467BB0 % (unsigned __int64)qword_140467BA8;
    v34 = 100 * qword_140467BB0 / (unsigned __int64)qword_140467BA8;
  }
  v47 = v18;
  PopQueryInputSuppressionCount(&v47, v17);
  v20 = v48;
  *(_DWORD *)a1 = v46;
  v21 = v41;
  *(_DWORD *)(a1 + 56) = v29;
  *(_QWORD *)(a1 + 72) = v33;
  *(_QWORD *)(a1 + 88) = v36;
  *(_QWORD *)(a1 + 96) = v37;
  *(_QWORD *)(a1 + 104) = v38;
  *(_QWORD *)(a1 + 80) = v39;
  *(_DWORD *)(a1 + 116) = v30;
  *(_QWORD *)(a1 + 128) = v40;
  *(_QWORD *)(a1 + 144) = v27;
  *(_BYTE *)(a1 + 160) = v34;
  *(_DWORD *)(a1 + 24) = v20;
  *(_DWORD *)(a1 + 28) = v28;
  *(_QWORD *)(a1 + 40) = v35;
  LOBYTE(v20) = v31;
  *(_QWORD *)(a1 + 136) = v19;
  *(_QWORD *)(a1 + 64) = v13;
  *(_QWORD *)(a1 + 32) = v6;
  *(_BYTE *)(a1 + 124) = v20 & 1 ^ (2 * v45);
  v22 = *(_BYTE *)(a1 + 125);
  *(_OWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 48) = v12;
  *(_DWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 152) = v7;
  *(_BYTE *)(a1 + 125) ^= (byte_140467C51 ^ v22) & 1;
  LOBYTE(v20) = *(_BYTE *)(a1 + 125) ^ (byte_140467C51 ^ *(_BYTE *)(a1 + 125)) & 2;
  *(_BYTE *)(a1 + 125) = v20;
  *(_BYTE *)(a1 + 125) = v20 ^ (byte_140467C51 ^ v20) & 4;
  *(_DWORD *)(a1 + 164) = dword_140467C40;
  *(_DWORD *)(a1 + 168) = dword_140467C44;
  *(_BYTE *)(a1 + 172) = byte_140467C48;
  *(_DWORD *)(a1 + 176) = dword_140467C4C;
  *(_DWORD *)(a1 + 180) = dword_140467C54;
  *(_DWORD *)(a1 + 184) = dword_140467C58;
  *(_BYTE *)(a1 + 188) = byte_140467C5C;
  *(_DWORD *)(a1 + 192) = v43[3];
  *(_DWORD *)(a1 + 196) = v43[2];
  *(_BYTE *)(a1 + 204) = byte_140467C64;
  *(_BYTE *)(a1 + 205) = byte_140467C65;
  *(_DWORD *)(a1 + 208) = dword_140467C68;
  *(_DWORD *)(a1 + 212) = dword_140467C6C;
  *(_DWORD *)(a1 + 216) = v47;
  *(_QWORD *)(a1 + 224) = qword_140467C10;
  *(_QWORD *)(a1 + 232) = qword_140467C20;
  *(_DWORD *)(a1 + 264) = dword_140467C88;
  *(_DWORD *)(a1 + 268) = dword_140467C8C;
  v23 = KeAcquireSpinLockRaiseToDpc(&qword_140442BB8);
  *(_QWORD *)(a1 + 248) = qword_140442BA8;
  v24 = v23;
  *(_QWORD *)(a1 + 240) = qword_140442BB0;
  *(_QWORD *)(a1 + 256) = PopDisplayOnPerformance;
  KxReleaseSpinLock(&qword_140442BB8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v24;
  __writecr8(v24);
  return result;
}
