/*
 * XREFs of ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044C18
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044904 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x180044CE4 (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerApplySystemAllowedMask(struct _RM_CPU_SET_MANAGER *a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  __int16 v11; // dx
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+68h] [rbp-98h]
  int v17; // [rsp+6Ch] [rbp-94h]
  __int16 *v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  int v20; // [rsp+7Ch] [rbp-84h]
  _OWORD *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+8Ch] [rbp-74h]
  _OWORD SystemInformation[10]; // [rsp+90h] [rbp-70h] BYREF

  if ( *((_DWORD *)a1 + 190) >= *((_DWORD *)a1 + 189) && *((_DWORD *)a1 + 188) == -1 )
  {
    v12 = RmpSystemSetSystemAllowedCpuSets(0LL);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v17 = 0;
      v15 = &v12;
      v16 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094443, 0LL, 0LL, 3u, &pData);
    }
  }
  else
  {
    v2 = *(_OWORD *)((char *)a1 + 264);
    SystemInformation[0] = *(_OWORD *)((char *)a1 + 248);
    v3 = *(_OWORD *)((char *)a1 + 280);
    SystemInformation[1] = v2;
    v4 = *(_OWORD *)((char *)a1 + 296);
    SystemInformation[2] = v3;
    v5 = *(_OWORD *)((char *)a1 + 312);
    SystemInformation[3] = v4;
    v6 = *(_OWORD *)((char *)a1 + 328);
    SystemInformation[4] = v5;
    v7 = *(_OWORD *)((char *)a1 + 344);
    SystemInformation[5] = v6;
    v8 = *(_OWORD *)((char *)a1 + 376);
    SystemInformation[6] = v7;
    SystemInformation[7] = *(_OWORD *)((char *)a1 + 360);
    v9 = *(_OWORD *)((char *)a1 + 392);
    v10 = *((_DWORD *)a1 + 188);
    SystemInformation[8] = v8;
    SystemInformation[9] = v9;
    if ( v10 != -1 )
      *((_QWORD *)SystemInformation + ((unsigned __int64)(unsigned int)(v10 - 256) >> 16)) &= ~(1LL << v10);
    v12 = RmpSystemSetSystemAllowedCpuSets(SystemInformation);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = &v12;
      v13 = v11 + 19;
      v18 = &v13;
      v21 = SystemInformation;
      v16 = 4;
      v19 = 2;
      v22 = 160;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800945C6, 0LL, 0LL, 5u, &pData);
    }
  }
  return v12;
}
