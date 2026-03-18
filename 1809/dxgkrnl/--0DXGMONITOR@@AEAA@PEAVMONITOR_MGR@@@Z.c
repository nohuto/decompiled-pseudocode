/*
 * XREFs of ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00B6114
 * Callers:
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B43B8 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E310 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 * Callees:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0001D14 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(char *Tag, struct MONITOR_MGR *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  int v8; // ecx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  char *v14; // rdx
  _BYTE *v15; // r8
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v28; // rax
  _OWORD v29[4]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v30[320]; // [rsp+98h] [rbp-70h] BYREF

  *((_QWORD *)Tag + 4) = a2;
  v5 = 0xFFFFFFFFLL;
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
  *((_QWORD *)Tag + 54) = 0LL;
  *((_QWORD *)Tag + 55) = 0LL;
  *((_DWORD *)Tag + 112) = -1;
  *((_DWORD *)Tag + 113) = -1;
  *((_DWORD *)Tag + 114) = -1;
  *(_QWORD *)(Tag + 460) = 0LL;
  Tag[480] = 0;
  *((_QWORD *)Tag + 61) = 0LL;
  *((_DWORD *)Tag + 124) = -1;
  *((_QWORD *)Tag + 63) = 0LL;
  *((_DWORD *)Tag + 128) = 0;
  Tag[516] = 0;
  *((_QWORD *)Tag + 71) = 0LL;
  *((_QWORD *)Tag + 72) = 0LL;
  *((_QWORD *)Tag + 73) = 0LL;
  Tag[592] = 0;
  *((_DWORD *)Tag + 164) = 0;
  *((_DWORD *)Tag + 171) = 1000;
  Tag[688] = 0;
  *((_DWORD *)Tag + 173) = 0;
  *((_WORD *)Tag + 348) = 0;
  Tag[698] = 0;
  *(_QWORD *)(Tag + 740) = 0LL;
  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    WdLogEvent5_WdAssertion(v28);
  }
  v7 = WdLogNewEntry5_WdTrace(v5, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = Tag;
  *(_QWORD *)(v7 + 32) = a2;
  *((_DWORD *)Tag + 10) = 0;
  v8 = *((_BYTE *)a2 + 5) != 0 ? 0x40 : 0;
  *((_QWORD *)Tag + 77) = 0LL;
  *((_DWORD *)Tag + 10) = v8;
  *(_OWORD *)(Tag + 596) = 0u;
  *((_DWORD *)Tag + 153) = 0;
  memset(v29, 0, 0x20uLL);
  v9 = v29[0];
  v10 = v29[1];
  *(_QWORD *)(Tag + 660) = 0LL;
  *((_OWORD *)Tag + 39) = v9;
  *(_QWORD *)(Tag + 668) = 0LL;
  *((_OWORD *)Tag + 40) = v10;
  *(_QWORD *)(Tag + 676) = 0LL;
  memset(&v29[2], 0, 0x20uLL);
  v11 = v29[2];
  *(_QWORD *)(Tag + 732) = 0LL;
  v12 = v29[3];
  *(_OWORD *)(Tag + 700) = v11;
  *(_OWORD *)(Tag + 716) = v12;
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
  memset(v30, 0, 0x13CuLL);
  v13 = 2LL;
  v14 = Tag + 752;
  v15 = v30;
  do
  {
    v16 = *((_OWORD *)v15 + 1);
    *(_OWORD *)v14 = *(_OWORD *)v15;
    v17 = *((_OWORD *)v15 + 2);
    *((_OWORD *)v14 + 1) = v16;
    v18 = *((_OWORD *)v15 + 3);
    *((_OWORD *)v14 + 2) = v17;
    v19 = *((_OWORD *)v15 + 4);
    *((_OWORD *)v14 + 3) = v18;
    v20 = *((_OWORD *)v15 + 5);
    *((_OWORD *)v14 + 4) = v19;
    v21 = *((_OWORD *)v15 + 6);
    *((_OWORD *)v14 + 5) = v20;
    v22 = *((_OWORD *)v15 + 7);
    v15 += 128;
    *((_OWORD *)v14 + 6) = v21;
    v14 += 128;
    *((_OWORD *)v14 - 1) = v22;
    --v13;
  }
  while ( v13 );
  v23 = *((_QWORD *)v15 + 6);
  v24 = *(_OWORD *)v15;
  *((_DWORD *)Tag + 187) = 0;
  v25 = *((_OWORD *)v15 + 1);
  *(_OWORD *)v14 = v24;
  v26 = *((_OWORD *)v15 + 2);
  *((_OWORD *)v14 + 1) = v25;
  *((_OWORD *)v14 + 2) = v26;
  *((_QWORD *)v14 + 6) = v23;
  *((_DWORD *)v14 + 14) = *((_DWORD *)v15 + 14);
  *((_QWORD *)Tag + 1) = MEMORY[0xFFFFF78000000014];
  *Tag = 0;
  DisplayID_Initialize((struct DisplayIDObj *)(Tag + 168), 0LL, 0);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 400), Tag, File, 1u, 0x20u);
  return (DXGMONITOR *)Tag;
}
