/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C004E698
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C0203900 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C004BD58 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C004BE20 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C004C32C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF50 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0pxzqq @ 0x1C004F7C4 (McTemplateK0pxzqq.c)
 *     McTemplateK0qqqz @ 0x1C004F8A4 (McTemplateK0qqqz.c)
 *     McTemplateK0qqz @ 0x1C004F974 (McTemplateK0qqz.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0052B6C (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C00533AC (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0153394 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C02A40D8 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C02A44D8 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C02A4584 (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02A46D4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02A4A1C (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C02A5248 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C02A55AC (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(__int64 a1, struct _KEVENT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  int v6; // r14d
  _DWORD *v7; // r13
  unsigned int v8; // r15d
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 DeviceContextFromName; // rdi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  char v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // r12d
  _DWORD *PoolWithTag; // rax
  char *v23; // rax
  int DisplayAdapterFdo; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  MIRACAST_CHUNK_LIST *v29; // rcx
  MIRACAST_CHUNK_LIST *v30; // rcx
  MIRACAST_CHUNK_LIST *v31; // rcx
  MIRACAST_CHUNK_LIST *v32; // rcx
  MIRACAST_CHUNK_LIST *v33; // rcx
  MIRACAST_CHUNK_LIST *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  void *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  char v47; // cl
  char v48; // dl
  char v49; // r9
  int v50; // ecx
  int v51; // r10d
  int v52; // edx
  int v53; // edx
  int v54; // eax
  char v55; // al
  unsigned int v56; // eax
  char v57; // al
  _DWORD *v58; // r12
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  const GUID *v62; // r8
  __int64 v63; // rax
  int v64; // eax
  _DWORD *v65; // rax
  int v66; // ecx
  _DWORD *v67; // rax
  int v68; // ecx
  _DWORD *v69; // rax
  int v70; // ecx
  _DWORD *v71; // rax
  MIRACAST_CHUNK_LIST *v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  _DWORD *v75; // rdx
  __int64 v76; // rax
  _QWORD *v77; // rax
  MIRACAST_CHUNK_LIST *v78; // rax
  size_t v79; // rbx
  _QWORD *v80; // r12
  int v81; // eax
  struct _KEVENT *v82; // rsi
  __int64 *v83; // rax
  int v84; // edx
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // rax
  PRKEVENT v92; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  _QWORD *v95; // [rsp+30h] [rbp-D0h]
  __int64 v96; // [rsp+38h] [rbp-C8h]
  char v97; // [rsp+60h] [rbp-A0h]
  char v98; // [rsp+61h] [rbp-9Fh]
  char v99; // [rsp+62h] [rbp-9Eh]
  char v100; // [rsp+63h] [rbp-9Dh] BYREF
  char DeviceObject; // [rsp+64h] [rbp-9Ch] BYREF
  char v102; // [rsp+65h] [rbp-9Bh]
  char v103; // [rsp+66h] [rbp-9Ah]
  __int64 v104; // [rsp+68h] [rbp-98h] BYREF
  __int64 v105; // [rsp+70h] [rbp-90h]
  __int64 *v106; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  _QWORD v108[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v109; // [rsp+A0h] [rbp-60h] BYREF
  __int64 (__fastcall *v110)(PVOID, size_t, int, int, __int64, __int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v111)(_DWORD *, struct DXGK_MIRACAST_CHUNK_INFO *, void *, int); // [rsp+B0h] [rbp-50h]
  void *Src; // [rsp+B8h] [rbp-48h]
  _DWORD *v113; // [rsp+C0h] [rbp-40h]
  _QWORD v114[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v116; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v117[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v118; // [rsp+108h] [rbp+8h]
  __int128 v119; // [rsp+110h] [rbp+10h]
  __int64 v120; // [rsp+120h] [rbp+20h]
  __int64 v121; // [rsp+128h] [rbp+28h]
  int v122; // [rsp+130h] [rbp+30h]
  int v123; // [rsp+134h] [rbp+34h]
  int v124; // [rsp+138h] [rbp+38h]
  unsigned int v125; // [rsp+13Ch] [rbp+3Ch]

  LOWORD(v3) = 0;
  v105 = a1;
  v113 = a3;
  memset(v108, 0, 20);
  v5 = 0LL;
  v6 = 2;
  v109 = 0LL;
  v7 = 0LL;
  v110 = 0LL;
  v8 = 0;
  v111 = 0LL;
  v9 = *(_OWORD *)(a1 + 536);
  Event = a2;
  v104 = 0LL;
  v116 = v9;
  v100 = 0;
  v99 = 0;
  v97 = 0;
  v102 = 0;
  v98 = 0;
  v103 = 0;
  DeviceObject = 0;
  Src = (void *)(a1 + 536);
  TraceLoggingWriteMiracastStartSessionEntry(&v116);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  if ( !DeviceContextFromName )
  {
    LODWORD(v14) = -1073741275;
    v8 = 2;
    v6 = -2147483642;
    v15 = WdLogNewEntry5_WdError(v11, v10, v13);
    *(_QWORD *)(v15 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v15);
LABEL_148:
    v92 = Event;
    if ( Event )
    {
      KeSetEvent(Event, 0, 0);
      ObfDereferenceObject(v92);
    }
    goto LABEL_150;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v108) >= 0 && !LOBYTE(v108[1]) )
  {
    v114[0] = 0LL;
    v114[1] = 0LL;
    v95 = v114;
    LODWORD(v14) = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( (int)v14 < 0 )
    {
      AcquireMiniportListMutex();
      v8 = 17;
      v6 = -2147483647;
      v17 = 0;
      goto LABEL_27;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *(_DWORD *)(a1 + 524);
  v18 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(v18 + 2 * v19) );
  }
  else
  {
    LOWORD(v19) = 0;
  }
  v20 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v20 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v20 + 2 * v3) );
  }
  v21 = 2 * ((unsigned __int16)v19 + (unsigned __int16)v3) + 68;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x74727044u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v21);
    v7[1] = v21;
    *v7 = 19;
    v7[10] = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    v23 = (char *)(v7 + 16);
    *((_WORD *)v7 + 30) = v19;
    *((_WORD *)v7 + 31) = v3;
    if ( (_WORD)v19 )
    {
      memmove(v7 + 16, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v19);
      v23 = (char *)(v7 + 16);
    }
    if ( (_WORD)v3 )
      memmove(
        &v23[2 * (unsigned __int16)v19 + 2],
        *(const void **)(DeviceContextFromName + 344),
        2LL * (unsigned __int16)v3);
  }
  DisplayAdapterFdo = DpiMiracastFindDisplayAdapterFdo(*(_QWORD *)(DeviceContextFromName + 184), &v104, &v100);
  v5 = v104;
  if ( DisplayAdapterFdo >= 0 && v104 )
  {
    v99 = 1;
    v106 = (__int64 *)(v104 + 3232);
    if ( *(_QWORD *)(v104 + 3232) )
    {
      LODWORD(v14) = -1073741637;
      v8 = 6;
LABEL_25:
      v6 = -2147483647;
      v28 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = -2147483647LL;
      WdLogEvent5_WdError(v28);
LABEL_26:
      v17 = v97;
      goto LABEL_27;
    }
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v104 + 64), (PVOID)DeviceContextFromName, File, 1u, 0x20u);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
    v17 = 1;
    *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
    v97 = 1;
    if ( *(_DWORD *)(DeviceContextFromName + 408) )
    {
      LODWORD(v14) = -1073741661;
      v6 = -2147483647;
      v8 = 6;
      v40 = WdLogNewEntry5_WdError(v38, v37, v39);
      *(_QWORD *)(v40 + 24) = DeviceContextFromName;
      *(_QWORD *)(v40 + 32) = -2147483647LL;
      WdLogEvent5_WdError(v40);
LABEL_54:
      v5 = v104;
      goto LABEL_27;
    }
    if ( !*(_QWORD *)(DeviceContextFromName + 400) )
    {
      LODWORD(v14) = -1073741275;
      v6 = -2147483642;
      v8 = 2;
      v41 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v41 + 24) = DeviceContextFromName;
      WdLogEvent5_WdEvent(v41);
      goto LABEL_54;
    }
    *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
    *(_DWORD *)(DeviceContextFromName + 656) = 0;
    *(_BYTE *)(DeviceContextFromName + 590) = 0;
    *(_DWORD *)(DeviceContextFromName + 652) = 0;
    *(_DWORD *)(DeviceContextFromName + 664) = 0;
    *(_DWORD *)(DeviceContextFromName + 672) = dword_1C00A2B70;
    v42 = v105;
    *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
    *(_DWORD *)(DeviceContextFromName + 648) = 0;
    *(_BYTE *)(DeviceContextFromName + 591) = 0;
    *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
    *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
    *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
    LODWORD(v42) = *(_DWORD *)(v42 + 524);
    *(_DWORD *)(DeviceContextFromName + 700) = -1;
    *(_DWORD *)(DeviceContextFromName + 788) = v42;
    *(_DWORD *)(DeviceContextFromName + 704) = 0;
    v98 = 1;
    memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
    v43 = Src;
    *(_DWORD *)(DeviceContextFromName + 776) = 256;
    memmove((void *)(DeviceContextFromName + 112), v43, 0x10uLL);
    ++*(_DWORD *)(DeviceContextFromName + 440);
    v5 = v104;
    *(_DWORD *)(DeviceContextFromName + 440) &= -(*(_DWORD *)(DeviceContextFromName + 440) < 0xFFFFFFFE);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
      McTemplateK0pxzqq(
        v44,
        &EventMiracastStartMiracastSession,
        v45,
        *(_QWORD *)(v5 + 48),
        *(_QWORD *)(DeviceContextFromName + 96),
        *(_QWORD *)(DeviceContextFromName + 152),
        *(_DWORD *)(DeviceContextFromName + 656),
        *(_DWORD *)(DeviceContextFromName + 664));
    *(_DWORD *)(DeviceContextFromName + 192) = *(_DWORD *)(v5 + 1124);
    *(_DWORD *)(DeviceContextFromName + 196) = *(_DWORD *)(v5 + 1128);
    v46 = *(_DWORD *)(v5 + 1120);
    if ( v46 == 1 )
    {
      v44 = (unsigned __int16)*(_DWORD *)(v5 + 1128);
      *(_DWORD *)(DeviceContextFromName + 200) = v44 | (*(_DWORD *)(v5 + 1124) << 16);
    }
    else if ( v46 == 2 )
    {
      v47 = *(_BYTE *)(v5 + 1128);
      if ( ((unsigned __int8)(v47 - 48) <= 9u || (unsigned __int8)((v47 | 0x20) - 97) <= 5u)
        && ((v48 = *(_BYTE *)(v5 + 1129), (unsigned __int8)(v48 - 48) <= 9u)
         || (unsigned __int8)((v48 | 0x20) - 97) <= 5u)
        && ((LOBYTE(v45) = *(_BYTE *)(v5 + 1130), (unsigned __int8)(v45 - 48) <= 9u)
         || (unsigned __int8)((v45 | 0x20) - 97) <= 5u)
        && ((v49 = *(_BYTE *)(v5 + 1131), (unsigned __int8)(v49 - 48) <= 9u)
         || (unsigned __int8)((v49 | 0x20) - 97) <= 5u) )
      {
        if ( (unsigned __int8)(v47 - 48) > 9u )
          v50 = (v47 - 7) & 0xF;
        else
          v50 = v47 - 48;
        if ( (unsigned __int8)(v48 - 48) > 9u )
          v51 = (v48 - 7) & 0xF;
        else
          v51 = v48 - 48;
        v52 = (char)v45;
        LOBYTE(v45) = v45 - 48;
        if ( (unsigned __int8)v45 > 9u )
          v53 = ((_BYTE)v52 - 7) & 0xF;
        else
          v53 = v52 - 48;
        if ( (unsigned __int8)(v49 - 48) > 9u )
          v54 = (v49 - 7) & 0xF;
        else
          v54 = v49 - 48;
        v44 = v54 | (16 * (v53 | (16 * (v51 | (unsigned int)(16 * v50)))));
      }
      else
      {
        v44 = *(unsigned __int16 *)(v5 + 1130);
      }
      v55 = *(_BYTE *)(v5 + 1124);
      if ( v55 == 32 || v55 == 95 )
      {
        v57 = *(_BYTE *)(v5 + 1125);
        if ( v57 == 32 || v57 == 95 )
          v56 = *(_DWORD *)(v5 + 1124) & 0xFFFF0000;
        else
          v56 = (*(_DWORD *)(v5 + 1124) & 0xFFFFFF00) << 8;
      }
      else
      {
        v56 = *(_DWORD *)(v5 + 1124) << 16;
      }
      *(_DWORD *)(DeviceContextFromName + 200) = v44 | v56;
    }
    else
    {
      *(_DWORD *)(DeviceContextFromName + 200) = 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
      McTemplateK0qqz(
        v44,
        &EventMiracastPerfTrackStartMiracastSession,
        v45,
        *(unsigned int *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352),
        v95,
        v96);
    *(_BYTE *)(DeviceContextFromName + 589) = 0;
    v110 = DpiMiracastCbSendUserModeMessage;
    v58 = (_DWORD *)(DeviceContextFromName + 456);
    v109 = DeviceContextFromName;
    v111 = DpiMiracastCbReportChunkInfo;
    v59 = DpiMiracastDdiMiracastCreateContext(v5, &v109, DeviceContextFromName + 448, DeviceContextFromName + 456);
    v14 = v59;
    if ( v59 < 0 )
    {
      if ( v59 == -1073740024 )
      {
        v8 = 7;
        v6 = -2147483646;
      }
      else
      {
        v8 = 8;
        v6 = -2147483647;
      }
      v63 = WdLogNewEntry5_WdError(v61, v60, v62);
      *(_QWORD *)(v63 + 24) = v14;
      WdLogEvent5_WdError(v63);
      *v58 = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
      goto LABEL_140;
    }
    DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v62);
    v64 = *(_DWORD *)(v5 + 3224);
    v102 = 1;
    if ( *v58 != v64 )
    {
      LODWORD(v14) = -1073741811;
      v8 = 9;
      goto LABEL_25;
    }
    *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId(v26, v25);
    *(_BYTE *)(DeviceContextFromName + 588) = 0;
    *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
    *(_WORD *)(v5 + 3248) = 0;
    *(_DWORD *)(v5 + 3252) = 0;
    v65 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v65 )
    {
      v66 = *(_DWORD *)(v5 + 3216);
      v65[4] = 0;
      v65[5] = v66;
      *((_QWORD *)v65 + 1) = v65;
      *(_QWORD *)v65 = v65;
    }
    else
    {
      v65 = 0LL;
    }
    *(_QWORD *)(DeviceContextFromName + 488) = v65;
    v67 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v67 )
    {
      v68 = *(_DWORD *)(v5 + 3216);
      v67[4] = 0;
      v67[5] = v68;
      *((_QWORD *)v67 + 1) = v67;
      *(_QWORD *)v67 = v67;
    }
    else
    {
      v67 = 0LL;
    }
    *(_QWORD *)(v5 + 3256) = v67;
    v69 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v69 )
    {
      v70 = *(_DWORD *)(v5 + 3216);
      v69[4] = 0;
      v69[5] = v70;
      *((_QWORD *)v69 + 1) = v69;
      *(_QWORD *)v69 = v69;
    }
    else
    {
      v69 = 0LL;
    }
    *(_QWORD *)(v5 + 3264) = v69;
    v71 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    v75 = v71;
    if ( v71 )
    {
      v72 = (MIRACAST_CHUNK_LIST *)*(unsigned int *)(v5 + 3216);
      v71[4] = 0;
      v71[5] = (_DWORD)v72;
      *((_QWORD *)v71 + 1) = v71;
      *(_QWORD *)v71 = v71;
    }
    else
    {
      v75 = 0LL;
    }
    *(_QWORD *)(v5 + 3272) = v75;
    if ( *(_QWORD *)(DeviceContextFromName + 488) )
    {
      v72 = *(MIRACAST_CHUNK_LIST **)(v5 + 3256);
      if ( v72 )
      {
        if ( *(_QWORD *)(v5 + 3264) && v75 )
        {
          if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v72, 0x14u) )
          {
LABEL_119:
            v8 = 11;
LABEL_120:
            LODWORD(v14) = -1073741801;
            v6 = -2147483647;
            v76 = WdLogNewEntry5_WdLowResource(v72, v75, v73, v74);
            *(_QWORD *)(v76 + 24) = -2147483647LL;
            WdLogEvent5_WdLowResource(v76);
            goto LABEL_26;
          }
          *(_DWORD *)(v5 + 3252) = 20;
          v77 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
          if ( v77 )
          {
            v77[2] = 0LL;
            v77[1] = v77;
            *v77 = v77;
          }
          else
          {
            v77 = 0LL;
          }
          *(_QWORD *)(DeviceContextFromName + 504) = v77;
          v78 = (MIRACAST_CHUNK_LIST *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
          v72 = v78;
          if ( v78 )
          {
            *((_QWORD *)v78 + 2) = 0LL;
            *((_QWORD *)v78 + 1) = v78;
            *(_QWORD *)v78 = v78;
          }
          else
          {
            v72 = 0LL;
          }
          *(_QWORD *)(DeviceContextFromName + 512) = v72;
          if ( *(_QWORD *)(DeviceContextFromName + 504) && v72 )
          {
            if ( MIRACAST_CHUNK_LIST::AllocateNewChunks(v72, 0x14u) )
            {
              KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
              *(_QWORD *)(DeviceContextFromName + 432) = *(_QWORD *)(v5 + 24);
              *v106 = DeviceContextFromName;
              *(_QWORD *)(v5 + 3240) = *(_QWORD *)(DeviceContextFromName + 96);
              *(_QWORD *)(DeviceContextFromName + 376) = *(_QWORD *)(v5 + 4888);
              *(_QWORD *)(DeviceContextFromName + 384) = *(_QWORD *)(v5 + 4896);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v103 = 1;
              v106 = (__int64 *)(v5 + 4920);
              LODWORD(v105) = *(unsigned __int16 *)(v5 + 4920) + 72;
              v79 = (unsigned int)v105;
              v80 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v105, 0x74727044u);
              if ( v80 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(DeviceContextFromName + 24));
                _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
                v81 = *(_DWORD *)(DeviceContextFromName + 408);
                v82 = Event;
                *(_QWORD *)(DeviceContextFromName + 472) = Event;
                *(_DWORD *)(DeviceContextFromName + 412) = v81;
                *(_DWORD *)(DeviceContextFromName + 408) = 1;
                ++dword_1C00A2B58;
                KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
                if ( v82 )
                  KeClearEvent(v82);
                memset(v80, 0, v79);
                v5 = v104;
                *v80 = DeviceContextFromName;
                *((_DWORD *)v80 + 2) = *(_DWORD *)(DeviceContextFromName + 440);
                *(_QWORD *)((char *)v80 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
                *(_QWORD *)((char *)v80 + 20) = *(_QWORD *)(v5 + 2672);
                *(_QWORD *)((char *)v80 + 28) = *(_QWORD *)((char *)&v108[1] + 4);
                *((_DWORD *)v80 + 9) = *(_DWORD *)(DeviceContextFromName + 440);
                *((_DWORD *)v80 + 10) = dword_1C00A2B5C;
                *((_BYTE *)v80 + 44) = v100;
                v83 = v106;
                *((_OWORD *)v80 + 3) = *(_OWORD *)(DeviceContextFromName + 112);
                memmove(v80 + 8, *(const void **)(v5 + 4928), *(unsigned __int16 *)v83);
                RemlockSize[0] = v105 - 12;
                v85 = DpiMiracastSendAsyncUserModeRequest(
                        DeviceContextFromName,
                        v84,
                        2295812,
                        (int)v80 + 12,
                        *(size_t *)RemlockSize,
                        0LL,
                        0,
                        (__int64)DpiMiracastStartSessionRequestCallback,
                        (__int64)v80,
                        (PDEVICE_OBJECT)&DeviceObject,
                        DeviceContextFromName + 424);
                v14 = v85;
                if ( v85 >= 0 )
                {
                  *(_DWORD *)(DeviceContextFromName + 416) = 2;
                  DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_50:
                  *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
                  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
                  if ( v6 < 0 )
                    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), (PVOID)DeviceContextFromName, 0x20u);
                  goto LABEL_141;
                }
                v6 = -2147483647;
                v8 = 13;
                v89 = WdLogNewEntry5_WdError(v87, v86, v88);
                *(_QWORD *)(v89 + 24) = v14;
                WdLogEvent5_WdError(v89);
                *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
                --dword_1C00A2B58;
                if ( !DeviceObject )
                {
                  ExFreePoolWithTag(v80, 0);
                  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName, v90);
                }
                goto LABEL_26;
              }
              v8 = 12;
              goto LABEL_120;
            }
            goto LABEL_119;
          }
        }
      }
    }
    v8 = 10;
    goto LABEL_120;
  }
  LODWORD(v14) = -1073741637;
  v6 = -2147483647;
  v8 = 4;
  v91 = WdLogNewEntry5_WdError(v26, v25, v27);
  *(_QWORD *)(v91 + 24) = -2147483647LL;
  WdLogEvent5_WdError(v91);
LABEL_140:
  v17 = v99;
  v98 = v99;
LABEL_27:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    McTemplateK0qqqz(
      *(unsigned int *)(DeviceContextFromName + 200),
      &EventMiracastStartMiracastSessionFail,
      v16,
      v8,
      v14,
      *(_DWORD *)(DeviceContextFromName + 200),
      *(_QWORD *)(DeviceContextFromName + 352));
  if ( v98 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = v6;
    *(_DWORD *)(DeviceContextFromName + 784) = v8;
    if ( v102 )
    {
      DpiMiracastDdiMiracastDestroyContext(v5, *(_QWORD *)(DeviceContextFromName + 448));
      *(_DWORD *)(DeviceContextFromName + 456) = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    }
    if ( v103 )
    {
      *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
      *(_QWORD *)(v5 + 3232) = 0LL;
      *(_QWORD *)(v5 + 3240) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeFlushQueuedDpcs();
    }
    v29 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
    if ( v29 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v29);
      *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
    }
    v30 = *(MIRACAST_CHUNK_LIST **)(v5 + 3256);
    if ( v30 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v30);
      *(_QWORD *)(v5 + 3256) = 0LL;
    }
    v31 = *(MIRACAST_CHUNK_LIST **)(v5 + 3264);
    if ( v31 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v31);
      *(_QWORD *)(v5 + 3264) = 0LL;
    }
    v32 = *(MIRACAST_CHUNK_LIST **)(v5 + 3272);
    if ( v32 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v32);
      *(_QWORD *)(v5 + 3272) = 0LL;
    }
    v33 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
    if ( v33 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v33);
      *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
    }
    v34 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
    if ( v34 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v34);
      *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
      McTemplateK0qqz(
        v35,
        &EventMiracastPerfTrackStartMiracastSessionFailed,
        v36,
        *(unsigned int *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352),
        v95,
        v96);
    TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
  }
  if ( v17 )
    goto LABEL_50;
LABEL_141:
  if ( v99 )
  {
    if ( *(_BYTE *)(v5 + 484) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 4096LL));
      v5 = v104;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), (PVOID)v5, 0x20u);
  }
  if ( v6 < 0 )
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName, v16);
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v6 < 0 )
    goto LABEL_148;
LABEL_150:
  *v113 = v14;
  if ( v7 )
  {
    v7[12] = v14;
    v7[13] = v6;
    v7[14] = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7, 0x200000000uLL);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v121 = 0LL;
    v117[0] = 6;
    v117[1] = 64;
    v119 = 0uLL;
    v120 = 0LL;
    v118 = 0LL;
    v122 = 69;
    v123 = v14;
    v124 = v6;
    v125 = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v117, 0x200000000uLL);
  }
  return (unsigned int)v6;
}
