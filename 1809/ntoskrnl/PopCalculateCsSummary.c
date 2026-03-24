/*
 * XREFs of PopCalculateCsSummary @ 0x1402DEB58
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14008BAA0 (RtlGetInterruptTimePrecise.c)
 *     PpmConvertTime @ 0x1400A7D14 (PpmConvertTime.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1402D4038 (PpmGetPlatformSelectionVetoCounts.c)
 *     PopBatteryCapacityToRate @ 0x1402DC638 (PopBatteryCapacityToRate.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1402DC65C (PopBatteryGetEnergyDrainFromDischage.c)
 *     PopCalculateIdleInformation @ 0x1402DEFA8 (PopCalculateIdleInformation.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1402DF0BC (PopCalculateTotalHwDripsResidency.c)
 *     PopCurrentPowerState @ 0x14058DED4 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x14086DB74 (PopMeasureEnergyChange.c)
 *     PopQueryInputSuppressionCount @ 0x14086DEE0 (PopQueryInputSuppressionCount.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  __int64 InterruptTimePrecise; // rsi
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned int EnergyDrainFromDischage; // eax
  unsigned int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // r10d
  int v20; // ecx
  __int128 v21; // xmm0
  __int64 result; // rax
  __int64 v23; // [rsp+20h] [rbp-99h] BYREF
  __int64 v24; // [rsp+28h] [rbp-91h] BYREF
  int v25; // [rsp+30h] [rbp-89h]
  int v26; // [rsp+34h] [rbp-85h]
  int v27; // [rsp+38h] [rbp-81h]
  int v28; // [rsp+3Ch] [rbp-7Dh]
  __int64 v29; // [rsp+40h] [rbp-79h]
  unsigned __int64 v30; // [rsp+48h] [rbp-71h]
  __int64 v31; // [rsp+50h] [rbp-69h]
  unsigned __int64 v32; // [rsp+58h] [rbp-61h]
  unsigned __int64 v33; // [rsp+60h] [rbp-59h]
  unsigned __int64 v34; // [rsp+68h] [rbp-51h]
  __int64 v35; // [rsp+70h] [rbp-49h]
  _QWORD v36[3]; // [rsp+78h] [rbp-41h] BYREF
  int v37; // [rsp+90h] [rbp-29h]
  LARGE_INTEGER v38; // [rsp+98h] [rbp-21h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v40[8]; // [rsp+B0h] [rbp-9h] BYREF
  int v41; // [rsp+B8h] [rbp-1h]
  unsigned int v42; // [rsp+BCh] [rbp+3h]
  char v43; // [rsp+120h] [rbp+67h]
  int v44; // [rsp+128h] [rbp+6Fh]
  int v45; // [rsp+130h] [rbp+77h] BYREF
  int v46; // [rsp+138h] [rbp+7Fh]

  LOBYTE(v30) = 0;
  PopCalculateIdleInformation(v36);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v38);
  v5 = InterruptTimePrecise - qword_14043C388;
  v6 = (InterruptTimePrecise - qword_14043C388) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_14043C388 )
    v7 = 0LL;
  else
    v7 = (InterruptTimePrecise - PopPdcLastCsExitTime) / 0xAuLL;
  PopCurrentPowerState(v40);
  if ( v6 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(PopCsConsumption, v42);
    v44 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v5 / 0xA);
  }
  else
  {
    v44 = 0;
  }
  PopMeasureEnergyChange(&v39, &CsSessionEnergyCounter);
  v46 = HIDWORD(xmmword_140417954);
  if ( HIDWORD(xmmword_140417954) )
    v9 = (unsigned int)(100 * xmmword_140417964) / HIDWORD(xmmword_140417954);
  else
    LOBYTE(v9) = 0;
  v10 = 0;
  if ( (xmmword_140417954 & 0x40000000) == 0 )
    v10 = xmmword_140417964;
  v43 = v9;
  v31 = v36[1] - qword_14043C390;
  v25 = v10;
  v26 = v37 - dword_14043C3A0;
  v11 = PopCalculateTotalHwDripsResidency(qword_14043C428, v36[2], v5 / 0xA);
  v12 = v6 + qword_14043C398 - v36[0];
  v35 = v11;
  v13 = _InterlockedExchangeAdd64(&qword_14043C480, 0LL);
  if ( v13 )
    v13 = (v13 - qword_14043C388) / 0xA;
  v29 = qword_14043C3D0;
  v29 -= PpmConvertTime(qword_14043C3C0, PopQpcFrequency, 0xF4240uLL);
  v14 = qword_14043C3E0;
  v34 = v6 - qword_14043C3D0;
  if ( qword_14043C3D8 )
  {
    if ( qword_14043C388 <= (unsigned __int64)qword_14043C3D8 )
      v15 = InterruptTimePrecise - qword_14043C3D8;
    else
      v15 = InterruptTimePrecise - qword_14043C388;
    v14 = v15 + qword_14043C3E0;
  }
  v16 = v14 / 0xA;
  v32 = PpmConvertTime(qword_14043C3F0, PopQpcFrequency, 0xF4240uLL);
  v17 = PpmConvertTime(qword_14043C400, PopQpcFrequency, 0xF4240uLL);
  v28 = (unsigned __int8)byte_14043C450;
  v33 = v17;
  v27 = PopPdcLastCsExitReason;
  v23 = 0LL;
  v24 = 0LL;
  PpmGetPlatformSelectionVetoCounts(dword_14043C4C0, &v23, &v24);
  v23 -= qword_14043C430;
  v24 -= qword_14043C438;
  if ( qword_14043C3A8 )
  {
    v18 = 100 * qword_14043C3B0 % (unsigned __int64)qword_14043C3A8;
    v30 = 100 * qword_14043C3B0 / (unsigned __int64)qword_14043C3A8;
  }
  v45 = v19;
  PopQueryInputSuppressionCount(&v45, v18);
  v20 = v46;
  *(_DWORD *)a1 = v44;
  v21 = v39;
  *(_DWORD *)(a1 + 56) = v26;
  *(_QWORD *)(a1 + 72) = v29;
  *(_QWORD *)(a1 + 96) = v32;
  *(_QWORD *)(a1 + 104) = v33;
  *(_QWORD *)(a1 + 80) = v34;
  *(_DWORD *)(a1 + 116) = v27;
  *(_QWORD *)(a1 + 128) = v35;
  *(_QWORD *)(a1 + 136) = v23;
  *(_QWORD *)(a1 + 144) = v24;
  *(_BYTE *)(a1 + 160) = v30;
  *(_DWORD *)(a1 + 24) = v20;
  *(_DWORD *)(a1 + 28) = v25;
  *(_QWORD *)(a1 + 40) = v31;
  LOBYTE(v20) = v28;
  *(_OWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 48) = v12;
  *(_BYTE *)(a1 + 124) = v20 & 1 ^ (2 * v43);
  *(_QWORD *)(a1 + 64) = v13;
  *(_QWORD *)(a1 + 88) = v16;
  *(_DWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 152) = v7;
  *(_BYTE *)(a1 + 125) ^= (*(_BYTE *)(a1 + 125) ^ byte_14043C451) & 1;
  LOBYTE(v20) = *(_BYTE *)(a1 + 125) ^ (byte_14043C451 ^ *(_BYTE *)(a1 + 125)) & 2;
  *(_BYTE *)(a1 + 125) = v20;
  *(_BYTE *)(a1 + 125) = v20 ^ (byte_14043C451 ^ v20) & 4;
  *(_DWORD *)(a1 + 164) = dword_14043C440;
  *(_DWORD *)(a1 + 168) = dword_14043C444;
  *(_BYTE *)(a1 + 172) = byte_14043C448;
  *(_DWORD *)(a1 + 176) = dword_14043C44C;
  *(_DWORD *)(a1 + 180) = dword_14043C454;
  *(_DWORD *)(a1 + 184) = dword_14043C458;
  *(_BYTE *)(a1 + 188) = byte_14043C45C;
  *(_DWORD *)(a1 + 192) = v42;
  *(_DWORD *)(a1 + 196) = v41;
  *(_BYTE *)(a1 + 204) = byte_14043C464;
  *(_DWORD *)(a1 + 208) = dword_14043C468;
  *(_DWORD *)(a1 + 212) = dword_14043C46C;
  *(_DWORD *)(a1 + 216) = v45;
  *(_QWORD *)(a1 + 224) = qword_14043C410;
  result = qword_14043C420;
  *(_QWORD *)(a1 + 232) = qword_14043C420;
  return result;
}
