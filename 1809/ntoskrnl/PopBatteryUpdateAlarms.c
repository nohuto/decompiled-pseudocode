/*
 * XREFs of PopBatteryUpdateAlarms @ 0x1407485CC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryAlarmPowerSettingCallback @ 0x1407485A0 (PopBatteryAlarmPowerSettingCallback.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x140003B10 (PopGetPowerSettingValue.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 */

__int64 __fastcall PopBatteryUpdateAlarms(char a1, __int64 a2)
{
  unsigned int v2; // r15d
  char v3; // r14
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 v18; // rdi
  int *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  unsigned int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v31; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v32[6]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v33[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+128h] [rbp+20h]

  v2 = dword_14041918C;
  v3 = a1;
  v4 = 128LL;
  v5 = *((_OWORD *)PopPolicy + 1);
  v32[0] = *(_OWORD *)PopPolicy;
  v6 = *((_OWORD *)PopPolicy + 2);
  v32[1] = v5;
  v7 = *((_OWORD *)PopPolicy + 3);
  v32[2] = v6;
  v8 = *((_OWORD *)PopPolicy + 4);
  v32[3] = v7;
  v9 = *((_OWORD *)PopPolicy + 5);
  v32[4] = v8;
  v10 = *((_OWORD *)PopPolicy + 6);
  v32[5] = v9;
  v33[0] = v10;
  v33[1] = *((_OWORD *)PopPolicy + 7);
  v11 = *((_OWORD *)PopPolicy + 9);
  v33[2] = *((_OWORD *)PopPolicy + 8);
  v12 = *((_OWORD *)PopPolicy + 10);
  v33[3] = v11;
  v13 = *((_OWORD *)PopPolicy + 11);
  v33[4] = v12;
  v14 = *((_OWORD *)PopPolicy + 12);
  v33[5] = v13;
  v15 = *((_OWORD *)PopPolicy + 13);
  v16 = *((_QWORD *)PopPolicy + 28);
  v33[6] = v14;
  v33[7] = v15;
  v34 = v16;
  v17 = a2 + 1;
  if ( v3 )
  {
    v17 = 4;
    a2 = 0LL;
  }
  if ( (unsigned int)a2 < v17 )
  {
    v18 = 8LL * (unsigned int)a2;
    v19 = (int *)v33 + 6 * a2 + 1;
    v20 = v17 - (unsigned int)a2;
    do
    {
      if ( (int)PopGetPowerSettingValue(
                  *(_QWORD *)((char *)&GUIDS_BATTERY_DISCHARGE_ACTION + v18),
                  a2,
                  v2,
                  &v30,
                  v26,
                  &v31) >= 0 )
      {
        v22 = v30;
        if ( v30 <= 6 )
        {
          v19[1] = v30;
          *((_BYTE *)v19 - 4) = v22 != 0;
        }
      }
      if ( (int)PopGetPowerSettingValue(
                  *(_QWORD *)((char *)&GUIDS_BATTERY_DISCHARGE_LEVEL + v18),
                  v21,
                  v2,
                  &v30,
                  v27,
                  &v31) >= 0 )
      {
        v24 = v30;
        if ( v30 > 0x64 )
          v24 = 100;
        *v19 = v24;
      }
      if ( (int)PopGetPowerSettingValue(
                  *(_QWORD *)((char *)&GUIDS_BATTERY_DISCHARGE_FLAGS + v18),
                  v23,
                  v2,
                  &v30,
                  v28,
                  &v31) >= 0 )
        v19[3] = v30 & 7;
      v19 += 6;
      v18 += 8LL;
      --v20;
    }
    while ( v20 );
    v3 = a1;
  }
  LOBYTE(a2) = v3;
  LOBYTE(v4) = 1;
  return PopApplyPolicy(v4, a2, v32, 232LL);
}
