/*
 * XREFs of ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C01798E4
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179630 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7908 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0021D2C (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(char *Tag, struct MONITOR_MGR *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // cf
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  char *v12; // rcx
  _BYTE *v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v27; // rax
  _OWORD v28[4]; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v29[320]; // [rsp+90h] [rbp-148h] BYREF

  *((_QWORD *)Tag + 4) = a2;
  *((_DWORD *)Tag + 11) = -1;
  *((_DWORD *)Tag + 12) = -2;
  *((_QWORD *)Tag + 7) = 0LL;
  *((_QWORD *)Tag + 8) = 0LL;
  *((_QWORD *)Tag + 9) = 0LL;
  *((_QWORD *)Tag + 10) = 0LL;
  *((_DWORD *)Tag + 30) = 3;
  *(_QWORD *)(Tag + 124) = 1LL;
  *((_DWORD *)Tag + 33) = 0;
  *((_QWORD *)Tag + 17) = 0LL;
  *((_QWORD *)Tag + 18) = 0LL;
  *((_DWORD *)Tag + 38) = 0;
  *((_QWORD *)Tag + 20) = 0LL;
  *((_QWORD *)Tag + 25) = Tag + 192;
  *((_QWORD *)Tag + 24) = Tag + 192;
  *((_DWORD *)Tag + 52) = 0;
  *((_DWORD *)Tag + 53) = 1024;
  *((_QWORD *)Tag + 28) = Tag + 216;
  *((_QWORD *)Tag + 27) = Tag + 216;
  *((_QWORD *)Tag + 29) = 0LL;
  *((_QWORD *)Tag + 31) = Tag + 240;
  *((_QWORD *)Tag + 30) = Tag + 240;
  *((_DWORD *)Tag + 64) = 0;
  *((_QWORD *)Tag + 34) = Tag + 264;
  *((_QWORD *)Tag + 33) = Tag + 264;
  *((_QWORD *)Tag + 36) = Tag + 280;
  *((_QWORD *)Tag + 35) = Tag + 280;
  *((_DWORD *)Tag + 112) = -1;
  *((_DWORD *)Tag + 113) = -1;
  *((_DWORD *)Tag + 114) = -1;
  *((_DWORD *)Tag + 124) = -1;
  *((_QWORD *)Tag + 54) = 0LL;
  *((_QWORD *)Tag + 55) = 0LL;
  *(_QWORD *)(Tag + 460) = 0LL;
  Tag[480] = 0;
  *((_QWORD *)Tag + 61) = 0LL;
  *((_QWORD *)Tag + 63) = 0LL;
  *((_DWORD *)Tag + 128) = 0;
  Tag[516] = 0;
  *((_QWORD *)Tag + 71) = 0LL;
  *((_QWORD *)Tag + 72) = 0LL;
  *((_QWORD *)Tag + 73) = 0LL;
  *((_DWORD *)Tag + 148) = 0;
  Tag[596] = 0;
  *((_DWORD *)Tag + 165) = 0;
  *((_DWORD *)Tag + 172) = 1000;
  Tag[692] = 0;
  *((_DWORD *)Tag + 174) = 0;
  *((_WORD *)Tag + 350) = 0;
  Tag[702] = 0;
  *((_QWORD *)Tag + 93) = 0LL;
  memset(Tag + 1080, 0, 0x40uLL);
  *((_QWORD *)Tag + 150) = 0LL;
  *((_QWORD *)Tag + 158) = 0LL;
  *((_QWORD *)Tag + 159) = 0LL;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v27);
  }
  v6 = WdLogNewEntry5_WdTrace(v5, v4);
  *(_QWORD *)(v6 + 24) = Tag;
  *(_QWORD *)(v6 + 32) = a2;
  *((_DWORD *)Tag + 10) = 0;
  v7 = *((_BYTE *)a2 + 5) != 0;
  *(_QWORD *)(Tag + 620) = 0LL;
  *((_DWORD *)Tag + 10) = v7 ? 0x40 : 0;
  *(_OWORD *)(Tag + 600) = 0uLL;
  *((_DWORD *)Tag + 154) = 0;
  memset(v28, 0, 0x20uLL);
  v8 = v28[0];
  v9 = v28[1];
  *((_QWORD *)Tag + 83) = 0LL;
  *(_OWORD *)(Tag + 628) = v8;
  *((_QWORD *)Tag + 84) = 0LL;
  *(_OWORD *)(Tag + 644) = v9;
  *((_QWORD *)Tag + 85) = 0LL;
  memset(&v28[2], 0, 0x20uLL);
  v10 = v28[2];
  *((_QWORD *)Tag + 92) = 0LL;
  v11 = v28[3];
  *(_QWORD *)(Tag + 756) = 0LL;
  *((_OWORD *)Tag + 44) = v10;
  *((_OWORD *)Tag + 45) = v11;
  *((_QWORD *)Tag + 3) = Tag + 16;
  *((_QWORD *)Tag + 2) = Tag + 16;
  ExInitializeResourceLite((PERESOURCE)(Tag + 296));
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 400), 0x4D677844u, 0, 0, 0x20u);
  *((_QWORD *)Tag + 12) = 0LL;
  *((_DWORD *)Tag + 22) = 0;
  *((_QWORD *)Tag + 14) = 0LL;
  *((_DWORD *)Tag + 26) = 0;
  *((_QWORD *)Tag + 66) = 0LL;
  *((_DWORD *)Tag + 130) = 0;
  *((_QWORD *)Tag + 68) = 0LL;
  *((_DWORD *)Tag + 134) = 0;
  *((_QWORD *)Tag + 70) = 0LL;
  *((_DWORD *)Tag + 138) = 0;
  memset(v29, 0, 0x13CuLL);
  v12 = Tag + 764;
  v13 = v29;
  v14 = 2LL;
  do
  {
    v15 = *((_OWORD *)v13 + 1);
    *(_OWORD *)v12 = *(_OWORD *)v13;
    v16 = *((_OWORD *)v13 + 2);
    *((_OWORD *)v12 + 1) = v15;
    v17 = *((_OWORD *)v13 + 3);
    *((_OWORD *)v12 + 2) = v16;
    v18 = *((_OWORD *)v13 + 4);
    *((_OWORD *)v12 + 3) = v17;
    v19 = *((_OWORD *)v13 + 5);
    *((_OWORD *)v12 + 4) = v18;
    v20 = *((_OWORD *)v13 + 6);
    *((_OWORD *)v12 + 5) = v19;
    v21 = *((_OWORD *)v13 + 7);
    v13 += 128;
    *((_OWORD *)v12 + 6) = v20;
    v12 += 128;
    *((_OWORD *)v12 - 1) = v21;
    --v14;
  }
  while ( v14 );
  v22 = *(_OWORD *)v13;
  v23 = *((_QWORD *)v13 + 6);
  v24 = *((_OWORD *)v13 + 1);
  *((_DWORD *)Tag + 188) = 0;
  *(_OWORD *)v12 = v22;
  v25 = *((_OWORD *)v13 + 2);
  *((_OWORD *)v12 + 1) = v24;
  *((_OWORD *)v12 + 2) = v25;
  *((_QWORD *)v12 + 6) = v23;
  *((_DWORD *)v12 + 14) = *((_DWORD *)v13 + 14);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)(Tag + 1144));
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)(Tag + 1208));
  *((_QWORD *)Tag + 1) = MEMORY[0xFFFFF78000000014];
  *Tag = 0;
  DisplayID_Initialize((struct DisplayIDObj *)(Tag + 168), 0LL, 0);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 400), Tag, File, 1u, 0x20u);
  return (DXGMONITOR *)Tag;
}
