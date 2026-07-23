/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x140747F90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140749198 (PopUpdateDiskIdleTimeoutSetting.c)
 */

__int64 __fastcall PopHardDiskPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  int v21; // ebx
  int v22; // eax
  _OWORD v24[8]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v25[5]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v26; // [rsp+F0h] [rbp-28h]
  __int64 v27; // [rsp+100h] [rbp-18h]

  v4 = *a1;
  v6 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( v6 )
  {
    v7 = *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 - v4;
    if ( *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 == v4 )
      v7 = *(_QWORD *)GUID_DISK_BURST_IGNORE_THRESHOLD.Data4 - a1[1];
    if ( !v7 && a3 == 4 && a2 )
    {
      dword_1404191A4 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock();
  v8 = *((_OWORD *)PopPolicy + 1);
  v24[0] = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v24[1] = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v24[2] = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v24[3] = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v24[4] = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v24[5] = v12;
  v24[6] = v13;
  v14 = v25;
  v24[7] = *((_OWORD *)PopPolicy + 7);
  v15 = *((_OWORD *)PopPolicy + 9);
  v25[0] = *((_OWORD *)PopPolicy + 8);
  v16 = *((_OWORD *)PopPolicy + 10);
  v25[1] = v15;
  v17 = *((_OWORD *)PopPolicy + 11);
  v25[2] = v16;
  v18 = *((_OWORD *)PopPolicy + 12);
  v25[3] = v17;
  v19 = *((_OWORD *)PopPolicy + 13);
  v20 = *((_QWORD *)PopPolicy + 28);
  v25[4] = v18;
  v26 = v19;
  v27 = v20;
  LOBYTE(v14) = 1;
  DWORD1(v26) = *a2;
  v21 = PopApplyPolicy(v14, 0LL, v24, 232LL);
  v22 = 1000 * *a2;
  if ( !v22 )
    v22 = -1;
  if ( v22 != PopDiskIdleTimeout )
  {
    PopDiskIdleTimeout = v22;
    PopUpdateDiskIdleTimeoutSetting();
  }
  PopReleasePolicyLock();
  if ( v21 >= 0 )
    return 0;
  return (unsigned int)v21;
}
