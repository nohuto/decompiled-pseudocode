/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x14075A890
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140758BD0 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopApplyPolicy @ 0x14075B258 (PopApplyPolicy.c)
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
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  int v22; // ebx
  int v23; // eax
  _OWORD v25[15]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v25, 0, 0xE8uLL);
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
      dword_140443A44 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock();
  v9 = *((_OWORD *)PopPolicy + 1);
  v25[0] = *(_OWORD *)PopPolicy;
  v10 = *((_OWORD *)PopPolicy + 2);
  v25[1] = v9;
  v11 = *((_OWORD *)PopPolicy + 3);
  v25[2] = v10;
  v12 = *((_OWORD *)PopPolicy + 4);
  v25[3] = v11;
  v13 = *((_OWORD *)PopPolicy + 5);
  v25[4] = v12;
  v14 = *((_OWORD *)PopPolicy + 6);
  v25[5] = v13;
  v25[6] = v14;
  v15 = &v25[8];
  v25[7] = *((_OWORD *)PopPolicy + 7);
  v16 = *((_OWORD *)PopPolicy + 9);
  v25[8] = *((_OWORD *)PopPolicy + 8);
  v17 = *((_OWORD *)PopPolicy + 10);
  v25[9] = v16;
  v18 = *((_OWORD *)PopPolicy + 11);
  v25[10] = v17;
  v19 = *((_OWORD *)PopPolicy + 12);
  v25[11] = v18;
  v20 = *((_OWORD *)PopPolicy + 13);
  v21 = *((_QWORD *)PopPolicy + 28);
  v25[12] = v19;
  v25[13] = v20;
  *(_QWORD *)&v25[14] = v21;
  LOBYTE(v15) = 1;
  DWORD1(v25[13]) = *a2;
  v22 = PopApplyPolicy(v15, 0LL, v25, 232LL);
  v23 = 1000 * *a2;
  if ( !v23 )
    v23 = -1;
  if ( v23 != PopDiskIdleTimeout )
  {
    PopDiskIdleTimeout = v23;
    PopUpdateDiskIdleTimeoutSetting();
  }
  PopReleasePolicyLock();
  if ( v22 >= 0 )
    return 0;
  return (unsigned int)v22;
}
