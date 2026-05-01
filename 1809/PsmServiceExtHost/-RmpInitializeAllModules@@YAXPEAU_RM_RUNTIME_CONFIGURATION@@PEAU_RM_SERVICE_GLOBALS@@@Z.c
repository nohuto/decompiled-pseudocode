/*
 * XREFs of ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800415FC
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180041F48 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     CrmGlobalsInitialize @ 0x1800418B4 (CrmGlobalsInitialize.c)
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180041954 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180041CBC (-RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180041E1C (-RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180041F2C (-RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x18006622C (-RmpSystemEnableAsyncInSwap@@YAXXZ.c)
 */

void __fastcall RmpInitializeAllModules(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // zf
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-50h]

  memset_0(a2, 0, 0xB40uLL);
  v4 = *((_OWORD *)a1 + 1);
  *(_OWORD *)((char *)a2 + 2696) = *(_OWORD *)a1;
  v5 = *((_OWORD *)a1 + 2);
  *(_OWORD *)((char *)a2 + 2712) = v4;
  v6 = *((_OWORD *)a1 + 3);
  *(_OWORD *)((char *)a2 + 2728) = v5;
  v7 = *((_OWORD *)a1 + 4);
  *(_OWORD *)((char *)a2 + 2744) = v6;
  v8 = *((_OWORD *)a1 + 5);
  *(_OWORD *)((char *)a2 + 2760) = v7;
  v9 = *((_OWORD *)a1 + 6);
  *(_OWORD *)((char *)a2 + 2776) = v8;
  v10 = *((_OWORD *)a1 + 8);
  *(_OWORD *)((char *)a2 + 2792) = v9;
  v11 = (*(_BYTE *)a1 & 8) == 0;
  *(_OWORD *)((char *)a2 + 2808) = *((_OWORD *)a1 + 7);
  v12 = *((_OWORD *)a1 + 9);
  *(_OWORD *)((char *)a2 + 2824) = v10;
  v13 = *((_OWORD *)a1 + 10);
  *(_OWORD *)((char *)a2 + 2840) = v12;
  *(_OWORD *)((char *)a2 + 2856) = v13;
  if ( !v11 )
    RmpSystemEnableAsyncInSwap();
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  RmpPageSize = v20;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 16));
  *((_DWORD *)a2 + 608) = 0;
  *((_QWORD *)a2 + 305) = 0LL;
  *((_DWORD *)a2 + 609) = 0;
  *((_DWORD *)a2 + 612) = 0;
  *((_QWORD *)a2 + 307) = 0LL;
  *((_DWORD *)a2 + 613) = 0;
  memset_0((char *)a2 + 680, 0, 0x308uLL);
  *((_QWORD *)a2 + 85) = a2;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 704));
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 728));
  *((_DWORD *)a2 + 188) = 0;
  *((_QWORD *)a2 + 95) = 0LL;
  *((_DWORD *)a2 + 189) = 0;
  *((_QWORD *)a2 + 87) = (char *)a2 + 688;
  *((_QWORD *)a2 + 86) = (char *)a2 + 688;
  *((_QWORD *)a2 + 177) = (char *)a2 + 1408;
  *((_QWORD *)a2 + 176) = (char *)a2 + 1408;
  *((_DWORD *)a2 + 358) = -1;
  RmpEnforcerContextInitialize(a1, a2);
  RmpGameModeInitialize(a2, (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 1456));
  memset_0((char *)a2 + 312, 0, 0x58uLL);
  *((_QWORD *)a2 + 42) = (char *)a2 + 328;
  *((_QWORD *)a2 + 41) = (char *)a2 + 328;
  RtlInitializeConditionVariable((char *)a2 + 344);
  *((_QWORD *)a2 + 39) = 0LL;
  *((_QWORD *)a2 + 40) = 0LL;
  RtlInitializeSRWLock((char *)a2 + 312);
  *((_DWORD *)a2 + 80) = 0;
  *((_QWORD *)a2 + 46) = 1LL;
  HampManagerInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 1608));
  memset_0((char *)a2 + 400, 0, 0x88uLL);
  v14 = *((_OWORD *)a1 + 2);
  *((_OWORD *)a2 + 25) = *((_OWORD *)a1 + 1);
  v15 = *((_OWORD *)a1 + 3);
  *((_OWORD *)a2 + 26) = v14;
  *(_QWORD *)&v14 = *((_QWORD *)a1 + 8);
  *((_OWORD *)a2 + 27) = v15;
  v16 = *(_OWORD *)((char *)a1 + 72);
  *((_QWORD *)a2 + 56) = v14;
  v17 = *(_OWORD *)((char *)a1 + 88);
  *(_OWORD *)((char *)a2 + 456) = v16;
  v18 = *(_OWORD *)((char *)a1 + 104);
  *(_OWORD *)((char *)a2 + 472) = v17;
  *(_OWORD *)((char *)a2 + 488) = v18;
  *((_DWORD *)a2 + 126) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 127) = *((_DWORD *)a1 + 1);
  *((_BYTE *)a2 + 512) = *((_BYTE *)a1 + 8);
  *((_DWORD *)a2 + 132) = *((_DWORD *)a1 + 31);
  *((_DWORD *)a2 + 131) = *((_DWORD *)a1 + 32);
  *((_DWORD *)a2 + 129) = *((_DWORD *)a1 + 30);
  *((_DWORD *)a2 + 130) = 60;
  memset_0((char *)a2 + 576, 0, 0x58uLL);
  RtlInitializeSRWLock((char *)a2 + 592);
  *((_QWORD *)a2 + 70) = 0LL;
  *((_QWORD *)a2 + 71) = 0LL;
  *((_QWORD *)a2 + 83) = 0LL;
  *((_QWORD *)a2 + 84) = 0LL;
  CrmGlobalsInitialize();
}
