/*
 * XREFs of ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006C650
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180044D80 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006A51C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006A870 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006A954 (-RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x1800737F8 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 */

__int64 __fastcall RmpGameModeTryApplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v4; // ebx
  UINT32 cData; // esi
  char v6; // r15
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v7; // r14
  unsigned int v8; // esi
  int v9; // esi
  NTSTATUS v10; // eax
  __int64 v11; // r9
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v24[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h]
  __int128 v26; // [rsp+60h] [rbp-A0h]
  __int128 v27; // [rsp+70h] [rbp-90h]
  __int128 v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  __int128 v32; // [rsp+C0h] [rbp-40h]
  __int128 v33; // [rsp+D0h] [rbp-30h]
  __int128 v34; // [rsp+E0h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  PVOID *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  PVOID *p_P; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]

  P = 0LL;
  v4 = 0;
  cData = 4;
  if ( *((_DWORD *)a2 + 26) && (*((_BYTE *)a2 + 144) & 2) == 0 )
  {
    v22 = 255;
    goto LABEL_35;
  }
  v6 = 1;
  RmpAcquireGlobalLock();
  v22 = RmpCpuSetManagerRegisterProcessWithAllocation(
          *((struct _RM_CPU_SET_MANAGER ***)a1 + 5),
          *((void **)a2 + 5),
          *((struct _RM_CPU_SET_ALLOCATION **)a1 + 15),
          &P);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v37 = 4LL;
    v36 = &v22;
    v24[0] = *((_DWORD *)a2 + 27);
    v38 = (PVOID *)v24;
    v39 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094AD7, 0LL, 0LL, 4u, &pData);
  }
  v7 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)P;
  if ( v22 >= 0 )
  {
    v8 = *((_DWORD *)a2 + 35);
    if ( (v8 & 2) != 0 || (v8 & 1) != 0 && (*((_BYTE *)a2 + 171) & 2) == 0 )
    {
      v9 = (v8 >> 3) & 1;
      v10 = RmpCpuSetManagerSetProcessDefaultMaskForGameMode((struct _RM_CPU_SET_PROCESS_REGISTRATION *)P, v9);
      LODWORD(v11) = 4;
      v22 = v10;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        LODWORD(P) = v9;
        v36 = &v22;
        cData = v11;
        v24[0] = *((_DWORD *)a2 + 27);
        v38 = (PVOID *)v24;
        p_P = &P;
        v37 = v11;
        v39 = v11;
        v41 = (unsigned int)v11;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094A90, 0LL, 0LL, 5u, &pData);
      }
      else
      {
        cData = v11;
      }
      if ( v22 < 0 )
        goto LABEL_27;
      v4 = 1;
    }
    v12 = *((_QWORD *)a1 + 15);
    v13 = *(_OWORD *)(v12 + 120);
    v25 = *(_OWORD *)(v12 + 104);
    v14 = *(_OWORD *)(v12 + 136);
    v26 = v13;
    v15 = *(_OWORD *)(v12 + 152);
    v27 = v14;
    v16 = *(_OWORD *)(v12 + 168);
    v28 = v15;
    v17 = *(_OWORD *)(v12 + 184);
    v29 = v16;
    v18 = *(_OWORD *)(v12 + 200);
    v30 = v17;
    v19 = *(_OWORD *)(v12 + 232);
    v31 = v18;
    v32 = *(_OWORD *)(v12 + 216);
    v20 = *(_OWORD *)(v12 + 248);
    v33 = v19;
    v34 = v20;
    RmpReleaseGlobalLock();
    v6 = 0;
    if ( (*((_BYTE *)a2 + 140) & 0x10) != 0 )
    {
      cData = 4;
      v22 = RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 1u);
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v37 = 4LL;
        v36 = &v22;
        LODWORD(P) = *((_DWORD *)a2 + 27);
        v38 = &P;
        v39 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800948FD, 0LL, 0LL, 4u, &pData);
      }
      if ( v22 < 0 )
        goto LABEL_27;
    }
    else
    {
      cData = 4;
    }
    if ( *((_DWORD *)a2 + 26) != 1 )
      *((_QWORD *)a2 + 15) = v25;
    *((_BYTE *)a2 + 171) |= 2u;
    v4 = 0;
    *((_QWORD *)a2 + 19) = v7;
    v7 = 0LL;
    v22 = 0;
  }
LABEL_27:
  if ( v7 )
  {
    if ( !v6 )
    {
      v6 = 1;
      RmpAcquireGlobalLock();
    }
    RmpCpuSetManagerReleaseProcessRegistrationEx((struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 680LL), v7, 1);
  }
  if ( v6 )
    RmpReleaseGlobalLock();
  if ( v4 )
    v22 = RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
LABEL_35:
  if ( hProvider > cData && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v37 = 4LL;
    v36 = &v22;
    LODWORD(P) = *((_DWORD *)a2 + 27);
    v38 = &P;
    v39 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094A59, 0LL, 0LL, cData, &pData);
  }
  return (unsigned int)v22;
}
