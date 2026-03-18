/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x14074A290
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopApplyPolicy @ 0x140749BB8 (PopApplyPolicy.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14076A398 (PopUpdateDiskIdleTimeoutSetting.c)
 */

__int64 __fastcall PopHardDiskPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  int v21; // ebx
  int v22; // eax
  _OWORD v24[15]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v24, 0, 0xE8uLL);
  v6 = *a1;
  v7 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( v7 )
  {
    v8 = *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 - v6;
    if ( *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 == v6 )
      v8 = *(_QWORD *)GUID_DISK_BURST_IGNORE_THRESHOLD.Data4 - a1[1];
    if ( !v8 && a3 == 4 && a2 )
    {
      dword_140443AE4 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock();
  v9 = *((_OWORD *)PopPolicy + 1);
  v24[0] = *(_OWORD *)PopPolicy;
  v10 = *((_OWORD *)PopPolicy + 2);
  v24[1] = v9;
  v11 = *((_OWORD *)PopPolicy + 3);
  v24[2] = v10;
  v12 = *((_OWORD *)PopPolicy + 4);
  v24[3] = v11;
  v13 = *((_OWORD *)PopPolicy + 5);
  v24[4] = v12;
  v14 = *((_OWORD *)PopPolicy + 6);
  v24[5] = v13;
  v24[6] = v14;
  v24[7] = *((_OWORD *)PopPolicy + 7);
  v15 = *((_OWORD *)PopPolicy + 9);
  v24[8] = *((_OWORD *)PopPolicy + 8);
  v16 = *((_OWORD *)PopPolicy + 10);
  v24[9] = v15;
  v17 = *((_OWORD *)PopPolicy + 11);
  v24[10] = v16;
  v18 = *((_OWORD *)PopPolicy + 12);
  v24[11] = v17;
  v19 = *((_OWORD *)PopPolicy + 13);
  v20 = *((_QWORD *)PopPolicy + 28);
  v24[12] = v18;
  v24[13] = v19;
  *(_QWORD *)&v24[14] = v20;
  DWORD1(v24[13]) = *a2;
  v21 = PopApplyPolicy(1, 0, v24, 0xE8u);
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
