/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C0047BF4
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C01D5AD0 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C0045290 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C0045358 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C004585C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0046480 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0pxzqq @ 0x1C0048D28 (McTemplateK0pxzqq.c)
 *     McTemplateK0qqqz @ 0x1C0048E08 (McTemplateK0qqqz.c)
 *     McTemplateK0qqz @ 0x1C0048ED8 (McTemplateK0qqz.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C004B91C (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C004C15C (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01416F0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0268CD0 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C02690C0 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C026916C (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02692BC (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C0269634 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C0269E48 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C026A1B4 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(__int64 a1, struct _KEVENT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  struct _IO_REMOVE_LOCK *v5; // rsi
  int v6; // r14d
  __int128 v7; // xmm0
  _DWORD *v8; // r13
  unsigned int v9; // r15d
  __int64 v10; // rcx
  __int64 DeviceContextFromName; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  char v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r12d
  _DWORD *PoolWithTag; // rax
  char *v21; // rax
  int DisplayAdapterFdo; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  MIRACAST_CHUNK_LIST *v25; // rcx
  MIRACAST_CHUNK_LIST *v26; // rcx
  MIRACAST_CHUNK_LIST *v27; // rcx
  MIRACAST_CHUNK_LIST *v28; // rcx
  MIRACAST_CHUNK_LIST *v29; // rcx
  MIRACAST_CHUNK_LIST *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int Blink; // eax
  signed __int8 Removed; // cl
  signed __int8 v42; // dl
  signed __int8 v43; // r9
  int v44; // ecx
  int v45; // r10d
  int v46; // edx
  int v47; // edx
  int v48; // eax
  char v49; // al
  unsigned int v50; // eax
  char v51; // al
  _DWORD *v52; // r12
  int Context; // eax
  __int64 v54; // rcx
  const GUID *v55; // r8
  __int64 v56; // rax
  int Flink; // eax
  _DWORD *v58; // rax
  volatile LONG Lock; // ecx
  struct _LIST_ENTRY *v60; // rax
  volatile LONG v61; // ecx
  struct _LIST_ENTRY *v62; // rax
  volatile LONG v63; // ecx
  _DWORD *v64; // rax
  MIRACAST_CHUNK_LIST *v65; // rcx
  _DWORD *v66; // rdx
  __int64 v67; // rax
  _QWORD *v68; // rax
  MIRACAST_CHUNK_LIST *v69; // rax
  size_t v70; // rbx
  _QWORD *v71; // r12
  int v72; // eax
  struct _KEVENT *v73; // rsi
  unsigned __int16 *v74; // rax
  int v75; // edx
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  PRKEVENT v80; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  ULONG RemlockSizea[2]; // [rsp+20h] [rbp-E0h]
  __int64 v84; // [rsp+28h] [rbp-D8h]
  _QWORD *v85; // [rsp+30h] [rbp-D0h]
  __int64 v86; // [rsp+38h] [rbp-C8h]
  char v87; // [rsp+60h] [rbp-A0h]
  char v88; // [rsp+61h] [rbp-9Fh]
  char v89; // [rsp+62h] [rbp-9Eh]
  char v90; // [rsp+63h] [rbp-9Dh] BYREF
  char DeviceObject; // [rsp+64h] [rbp-9Ch] BYREF
  char v92; // [rsp+65h] [rbp-9Bh]
  char v93; // [rsp+66h] [rbp-9Ah]
  struct _IO_REMOVE_LOCK *v94; // [rsp+68h] [rbp-98h] BYREF
  __int64 v95; // [rsp+70h] [rbp-90h]
  unsigned __int16 *p_Blink; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  _QWORD v98[3]; // [rsp+88h] [rbp-78h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  _DWORD *v100; // [rsp+A8h] [rbp-58h]
  _QWORD v101[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v102[3]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v104; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v105[8]; // [rsp+100h] [rbp+0h] BYREF

  LOWORD(v3) = 0;
  v95 = a1;
  v100 = a3;
  memset(v98, 0, 20);
  v5 = 0LL;
  v6 = 2;
  Event = a2;
  v7 = *(_OWORD *)(a1 + 536);
  v94 = 0LL;
  v8 = 0LL;
  v90 = 0;
  v104 = v7;
  v89 = 0;
  v9 = 0;
  v87 = 0;
  v92 = 0;
  v88 = 0;
  v93 = 0;
  DeviceObject = 0;
  Src = (void *)(a1 + 536);
  TraceLoggingWriteMiracastStartSessionEntry(&v104);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  if ( !DeviceContextFromName )
  {
    LODWORD(v12) = -1073741275;
    v9 = 2;
    v6 = -2147483642;
    v13 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v13 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v13);
LABEL_148:
    v80 = Event;
    if ( Event )
    {
      KeSetEvent(Event, 0, 0);
      ObfDereferenceObject(v80);
    }
    goto LABEL_150;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v98) >= 0 && !LOBYTE(v98[1]) )
  {
    v101[0] = 0LL;
    v101[1] = 0LL;
    v85 = v101;
    LODWORD(v84) = 0;
    LODWORD(v12) = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( (int)v12 < 0 )
    {
      AcquireMiniportListMutex();
      v9 = 17;
      v6 = -2147483647;
      v15 = 0;
      goto LABEL_27;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *(_DWORD *)(a1 + 524);
  v16 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v16 + 2 * v17) );
  }
  else
  {
    LOWORD(v17) = 0;
  }
  v18 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v18 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v18 + 2 * v3) );
  }
  v19 = 2 * ((unsigned __int16)v17 + (unsigned __int16)v3) + 68;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x74727044u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v19);
    v8[1] = v19;
    *v8 = 19;
    v8[10] = 0;
    *((_QWORD *)v8 + 4) = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    v21 = (char *)(v8 + 16);
    *((_WORD *)v8 + 30) = v17;
    *((_WORD *)v8 + 31) = v3;
    if ( (_WORD)v17 )
    {
      memmove(v8 + 16, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v17);
      v21 = (char *)(v8 + 16);
    }
    if ( (_WORD)v3 )
      memmove(
        &v21[2 * (unsigned __int16)v17 + 2],
        *(const void **)(DeviceContextFromName + 344),
        2LL * (unsigned __int16)v3);
  }
  DisplayAdapterFdo = DpiMiracastFindDisplayAdapterFdo(*(_QWORD *)(DeviceContextFromName + 184), &v94, &v90);
  v5 = v94;
  if ( DisplayAdapterFdo >= 0 && v94 )
  {
    v89 = 1;
    p_Blink = (unsigned __int16 *)&v94[98].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( v94[98].Common.RemoveEvent.Header.WaitListHead.Blink )
    {
      LODWORD(v12) = -1073741637;
      v9 = 6;
LABEL_25:
      v6 = -2147483647;
      v24 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v24 + 24) = -2147483647LL;
      WdLogEvent5_WdError(v24);
LABEL_26:
      v15 = v87;
      goto LABEL_27;
    }
    IoAcquireRemoveLockEx(v94 + 2, (PVOID)DeviceContextFromName, File, 1u, 0x20u);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
    v15 = 1;
    *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
    v87 = 1;
    if ( *(_DWORD *)(DeviceContextFromName + 408) )
    {
      LODWORD(v12) = -1073741661;
      v6 = -2147483647;
      v9 = 6;
      v34 = WdLogNewEntry5_WdError(v33);
      *(_QWORD *)(v34 + 24) = DeviceContextFromName;
      *(_QWORD *)(v34 + 32) = -2147483647LL;
      WdLogEvent5_WdError(v34);
LABEL_54:
      v5 = v94;
      goto LABEL_27;
    }
    if ( !*(_QWORD *)(DeviceContextFromName + 400) )
    {
      LODWORD(v12) = -1073741275;
      v6 = -2147483642;
      v9 = 2;
      v35 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v35 + 24) = DeviceContextFromName;
      WdLogEvent5_WdEvent(v35);
      goto LABEL_54;
    }
    *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
    *(_DWORD *)(DeviceContextFromName + 656) = 0;
    *(_BYTE *)(DeviceContextFromName + 590) = 0;
    *(_DWORD *)(DeviceContextFromName + 652) = 0;
    *(_DWORD *)(DeviceContextFromName + 664) = 0;
    *(_DWORD *)(DeviceContextFromName + 672) = dword_1C008EB70;
    v36 = v95;
    *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
    *(_DWORD *)(DeviceContextFromName + 648) = 0;
    *(_BYTE *)(DeviceContextFromName + 591) = 0;
    *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
    *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
    *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
    LODWORD(v36) = *(_DWORD *)(v36 + 524);
    *(_DWORD *)(DeviceContextFromName + 700) = -1;
    *(_DWORD *)(DeviceContextFromName + 788) = v36;
    *(_DWORD *)(DeviceContextFromName + 704) = 0;
    v88 = 1;
    memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
    v37 = Src;
    *(_DWORD *)(DeviceContextFromName + 776) = 256;
    memmove((void *)(DeviceContextFromName + 112), v37, 0x10uLL);
    ++*(_DWORD *)(DeviceContextFromName + 440);
    v5 = v94;
    *(_DWORD *)(DeviceContextFromName + 440) &= -(*(_DWORD *)(DeviceContextFromName + 440) < 0xFFFFFFFE);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      LODWORD(v86) = *(_DWORD *)(DeviceContextFromName + 664);
      LODWORD(v85) = *(_DWORD *)(DeviceContextFromName + 656);
      v84 = *(_QWORD *)(DeviceContextFromName + 152);
      *(_QWORD *)RemlockSize = *(_QWORD *)(DeviceContextFromName + 96);
      McTemplateK0pxzqq(
        v38,
        &EventMiracastStartMiracastSession,
        v39,
        v5[1].Common.RemoveEvent.Header.WaitListHead.Flink);
    }
    *(_DWORD *)(DeviceContextFromName + 192) = HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink);
    *(_DWORD *)(DeviceContextFromName + 196) = *(_DWORD *)&v5[35].Common.Removed;
    Blink = (int)v5[34].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( Blink == 1 )
    {
      v38 = (unsigned __int16)*(_DWORD *)&v5[35].Common.Removed;
      *(_DWORD *)(DeviceContextFromName + 200) = v38 | (HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink) << 16);
    }
    else if ( Blink == 2 )
    {
      Removed = v5[35].Common.Removed;
      if ( ((unsigned __int8)(Removed - 48) <= 9u || (unsigned __int8)((Removed | 0x20) - 97) <= 5u)
        && ((v42 = v5[35].Common.Reserved[0], (unsigned __int8)(v42 - 48) <= 9u)
         || (unsigned __int8)((v42 | 0x20) - 97) <= 5u)
        && ((LOBYTE(v39) = v5[35].Common.Reserved[1], (unsigned __int8)(v39 - 48) <= 9u)
         || (unsigned __int8)((v39 | 0x20) - 97) <= 5u)
        && ((v43 = v5[35].Common.Reserved[2], (unsigned __int8)(v43 - 48) <= 9u)
         || (unsigned __int8)((v43 | 0x20) - 97) <= 5u) )
      {
        if ( (unsigned __int8)(Removed - 48) > 9u )
          v44 = (Removed - 7) & 0xF;
        else
          v44 = Removed - 48;
        if ( (unsigned __int8)(v42 - 48) > 9u )
          v45 = (v42 - 7) & 0xF;
        else
          v45 = v42 - 48;
        v46 = (char)v39;
        LOBYTE(v39) = v39 - 48;
        if ( (unsigned __int8)v39 > 9u )
          v47 = ((_BYTE)v46 - 7) & 0xF;
        else
          v47 = v46 - 48;
        if ( (unsigned __int8)(v43 - 48) > 9u )
          v48 = (v43 - 7) & 0xF;
        else
          v48 = v43 - 48;
        v38 = v48 | (16 * (v47 | (16 * (v45 | (unsigned int)(16 * v44)))));
      }
      else
      {
        v38 = *(unsigned __int16 *)&v5[35].Common.Reserved[1];
      }
      v49 = BYTE4(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink);
      if ( v49 == 32 || v49 == 95 )
      {
        v51 = BYTE5(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink);
        if ( v51 == 32 || v51 == 95 )
          v50 = HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink) & 0xFFFF0000;
        else
          v50 = (HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink) & 0xFFFFFF00) << 8;
      }
      else
      {
        v50 = HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink) << 16;
      }
      *(_DWORD *)(DeviceContextFromName + 200) = v38 | v50;
    }
    else
    {
      *(_DWORD *)(DeviceContextFromName + 200) = 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
      McTemplateK0qqz(
        v38,
        &EventMiracastPerfTrackStartMiracastSession,
        v39,
        *(unsigned int *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352),
        v85,
        (_DWORD)v86);
    *(_BYTE *)(DeviceContextFromName + 589) = 0;
    v102[1] = DpiMiracastCbSendUserModeMessage;
    v52 = (_DWORD *)(DeviceContextFromName + 456);
    v102[0] = DeviceContextFromName;
    v102[2] = DpiMiracastCbReportChunkInfo;
    Context = DpiMiracastDdiMiracastCreateContext(
                v5,
                v102,
                DeviceContextFromName + 448,
                DeviceContextFromName + 456,
                *(_QWORD *)RemlockSize,
                v84);
    v12 = Context;
    if ( Context < 0 )
    {
      if ( Context == -1073740024 )
      {
        v9 = 7;
        v6 = -2147483646;
      }
      else
      {
        v9 = 8;
        v6 = -2147483647;
      }
      v56 = WdLogNewEntry5_WdError(v54);
      *(_QWORD *)(v56 + 24) = v12;
      WdLogEvent5_WdError(v56);
      *v52 = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
      goto LABEL_140;
    }
    DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v55);
    Flink = (int)v5[98].Common.RemoveEvent.Header.WaitListHead.Flink;
    v92 = 1;
    if ( *v52 != Flink )
    {
      LODWORD(v12) = -1073741811;
      v9 = 9;
      goto LABEL_25;
    }
    *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId(v23);
    *(_BYTE *)(DeviceContextFromName + 588) = 0;
    *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
    LOWORD(v5[99].Common.RemoveEvent.Header.Lock) = 0;
    v5[99].Common.RemoveEvent.Header.SignalState = 0;
    v58 = operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v58 )
    {
      Lock = v5[98].Common.RemoveEvent.Header.Lock;
      v58[4] = 0;
      v58[5] = Lock;
      *((_QWORD *)v58 + 1) = v58;
      *(_QWORD *)v58 = v58;
    }
    else
    {
      v58 = 0LL;
    }
    *(_QWORD *)(DeviceContextFromName + 488) = v58;
    v60 = (struct _LIST_ENTRY *)operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v60 )
    {
      v61 = v5[98].Common.RemoveEvent.Header.Lock;
      LODWORD(v60[1].Flink) = 0;
      HIDWORD(v60[1].Flink) = v61;
      v60->Blink = v60;
      v60->Flink = v60;
    }
    else
    {
      v60 = 0LL;
    }
    v5[99].Common.RemoveEvent.Header.WaitListHead.Flink = v60;
    v62 = (struct _LIST_ENTRY *)operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v62 )
    {
      v63 = v5[98].Common.RemoveEvent.Header.Lock;
      LODWORD(v62[1].Flink) = 0;
      HIDWORD(v62[1].Flink) = v63;
      v62->Blink = v62;
      v62->Flink = v62;
    }
    else
    {
      v62 = 0LL;
    }
    v5[99].Common.RemoveEvent.Header.WaitListHead.Blink = v62;
    v64 = operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    v66 = v64;
    if ( v64 )
    {
      v65 = (MIRACAST_CHUNK_LIST *)(unsigned int)v5[98].Common.RemoveEvent.Header.Lock;
      v64[4] = 0;
      v64[5] = (_DWORD)v65;
      *((_QWORD *)v64 + 1) = v64;
      *(_QWORD *)v64 = v64;
    }
    else
    {
      v66 = 0LL;
    }
    *(_QWORD *)&v5[100].Common.Removed = v66;
    if ( *(_QWORD *)(DeviceContextFromName + 488) )
    {
      v65 = (MIRACAST_CHUNK_LIST *)v5[99].Common.RemoveEvent.Header.WaitListHead.Flink;
      if ( v65 )
      {
        if ( v5[99].Common.RemoveEvent.Header.WaitListHead.Blink && v66 )
        {
          if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v65, 0x14u) )
          {
LABEL_119:
            v9 = 11;
LABEL_120:
            LODWORD(v12) = -1073741801;
            v6 = -2147483647;
            v67 = WdLogNewEntry5_WdLowResource(v65);
            *(_QWORD *)(v67 + 24) = -2147483647LL;
            WdLogEvent5_WdLowResource(v67);
            goto LABEL_26;
          }
          v5[99].Common.RemoveEvent.Header.SignalState = 20;
          v68 = operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
          if ( v68 )
          {
            v68[2] = 0LL;
            v68[1] = v68;
            *v68 = v68;
          }
          else
          {
            v68 = 0LL;
          }
          *(_QWORD *)(DeviceContextFromName + 504) = v68;
          v69 = (MIRACAST_CHUNK_LIST *)operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
          v65 = v69;
          if ( v69 )
          {
            *((_QWORD *)v69 + 2) = 0LL;
            *((_QWORD *)v69 + 1) = v69;
            *(_QWORD *)v69 = v69;
          }
          else
          {
            v65 = 0LL;
          }
          *(_QWORD *)(DeviceContextFromName + 512) = v65;
          if ( *(_QWORD *)(DeviceContextFromName + 504) && v65 )
          {
            if ( MIRACAST_CHUNK_LIST::AllocateNewChunks(v65, 0x14u) )
            {
              KeAcquireInStackQueuedSpinLock(&qword_1C008EB30, &LockHandle);
              *(_QWORD *)(DeviceContextFromName + 432) = v5->Common.RemoveEvent.Header.WaitListHead.Blink;
              *(_QWORD *)p_Blink = DeviceContextFromName;
              *(_QWORD *)&v5[99].Common.Removed = *(_QWORD *)(DeviceContextFromName + 96);
              *(_QWORD *)(DeviceContextFromName + 376) = v5[148].Common.RemoveEvent.Header.WaitListHead.Blink;
              *(_QWORD *)(DeviceContextFromName + 384) = *(_QWORD *)&v5[149].Common.Removed;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v93 = 1;
              p_Blink = (unsigned __int16 *)&v5[149].Common.RemoveEvent.Header.WaitListHead.Blink;
              LODWORD(v95) = LOWORD(v5[149].Common.RemoveEvent.Header.WaitListHead.Blink) + 72;
              v70 = (unsigned int)v95;
              v71 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v95, 0x74727044u);
              if ( v71 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(DeviceContextFromName + 24));
                _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
                v72 = *(_DWORD *)(DeviceContextFromName + 408);
                v73 = Event;
                *(_QWORD *)(DeviceContextFromName + 472) = Event;
                *(_DWORD *)(DeviceContextFromName + 412) = v72;
                *(_DWORD *)(DeviceContextFromName + 408) = 1;
                ++dword_1C008EB58;
                KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
                if ( v73 )
                  KeClearEvent(v73);
                memset(v71, 0, v70);
                v5 = v94;
                *v71 = DeviceContextFromName;
                *((_DWORD *)v71 + 2) = *(_DWORD *)(DeviceContextFromName + 440);
                *(_QWORD *)((char *)v71 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
                *(_QWORD *)((char *)v71 + 20) = *(_QWORD *)&v5[81].Common.RemoveEvent.Header.Lock;
                *(_QWORD *)((char *)v71 + 28) = *(_QWORD *)((char *)&v98[1] + 4);
                *((_DWORD *)v71 + 9) = *(_DWORD *)(DeviceContextFromName + 440);
                *((_DWORD *)v71 + 10) = dword_1C008EB5C;
                *((_BYTE *)v71 + 44) = v90;
                v74 = p_Blink;
                *((_OWORD *)v71 + 3) = *(_OWORD *)(DeviceContextFromName + 112);
                memmove(v71 + 8, *(const void **)&v5[150].Common.Removed, *v74);
                RemlockSizea[0] = v95 - 12;
                v76 = DpiMiracastSendAsyncUserModeRequest(
                        DeviceContextFromName,
                        v75,
                        2295812,
                        (int)v71 + 12,
                        *(size_t *)RemlockSizea,
                        0LL,
                        0,
                        (__int64)DpiMiracastStartSessionRequestCallback,
                        (__int64)v71,
                        (PDEVICE_OBJECT)&DeviceObject,
                        DeviceContextFromName + 424);
                v12 = v76;
                if ( v76 >= 0 )
                {
                  *(_DWORD *)(DeviceContextFromName + 416) = 2;
                  DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_50:
                  *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
                  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
                  if ( v6 < 0 )
                    IoReleaseRemoveLockEx(v5 + 2, (PVOID)DeviceContextFromName, 0x20u);
                  goto LABEL_141;
                }
                v6 = -2147483647;
                v9 = 13;
                v78 = WdLogNewEntry5_WdError(v77);
                *(_QWORD *)(v78 + 24) = v12;
                WdLogEvent5_WdError(v78);
                *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
                --dword_1C008EB58;
                if ( !DeviceObject )
                {
                  ExFreePoolWithTag(v71, 0);
                  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
                }
                goto LABEL_26;
              }
              v9 = 12;
              goto LABEL_120;
            }
            goto LABEL_119;
          }
        }
      }
    }
    v9 = 10;
    goto LABEL_120;
  }
  LODWORD(v12) = -1073741637;
  v6 = -2147483647;
  v9 = 4;
  v79 = WdLogNewEntry5_WdError(v23);
  *(_QWORD *)(v79 + 24) = -2147483647LL;
  WdLogEvent5_WdError(v79);
LABEL_140:
  v15 = v89;
  v88 = v89;
LABEL_27:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
  {
    v85 = *(_QWORD **)(DeviceContextFromName + 352);
    McTemplateK0qqqz(*(unsigned int *)(DeviceContextFromName + 200), &EventMiracastStartMiracastSessionFail, v14, v9);
  }
  if ( v88 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = v6;
    *(_DWORD *)(DeviceContextFromName + 784) = v9;
    if ( v92 )
    {
      DpiMiracastDdiMiracastDestroyContext(v5, *(_QWORD *)(DeviceContextFromName + 448));
      *(_DWORD *)(DeviceContextFromName + 456) = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    }
    if ( v93 )
    {
      *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
      KeAcquireInStackQueuedSpinLock(&qword_1C008EB30, &LockHandle);
      *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
      v5[98].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
      *(_QWORD *)&v5[99].Common.Removed = 0LL;
      *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeFlushQueuedDpcs();
    }
    v25 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
    if ( v25 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v25);
      *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
    }
    v26 = (MIRACAST_CHUNK_LIST *)v5[99].Common.RemoveEvent.Header.WaitListHead.Flink;
    if ( v26 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v26);
      v5[99].Common.RemoveEvent.Header.WaitListHead.Flink = 0LL;
    }
    v27 = (MIRACAST_CHUNK_LIST *)v5[99].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( v27 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v27);
      v5[99].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
    }
    v28 = *(MIRACAST_CHUNK_LIST **)&v5[100].Common.Removed;
    if ( v28 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v28);
      *(_QWORD *)&v5[100].Common.Removed = 0LL;
    }
    v29 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
    if ( v29 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v29);
      *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
    }
    v30 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
    if ( v30 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v30);
      *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
      McTemplateK0qqz(
        v31,
        &EventMiracastPerfTrackStartMiracastSessionFailed,
        v32,
        *(unsigned int *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352),
        v85,
        v86);
    TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
  }
  if ( v15 )
    goto LABEL_50;
LABEL_141:
  if ( v89 )
  {
    if ( v5[15].Common.Reserved[2] )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)&v5[119].Common.RemoveEvent.Header.Lock, 4023LL);
      _InterlockedDecrement((volatile signed __int32 *)&v5->Common.RemoveEvent.Header.WaitListHead.Blink[4].Flink[249].Blink);
      v5 = v94;
    }
    ExReleaseResourceLite(*(PERESOURCE *)&v5[5].Common.RemoveEvent.Header.Lock);
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx(v5 + 2, v5, 0x20u);
  }
  if ( v6 < 0 )
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v6 < 0 )
    goto LABEL_148;
LABEL_150:
  *v100 = v12;
  if ( v8 )
  {
    v8[12] = v12;
    v8[13] = v6;
    v8[14] = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    memset(v105, 0, sizeof(v105));
    v105[0] = 0x4000000006LL;
    memset(&v105[1], 0, 36);
    LODWORD(v105[6]) = 69;
    HIDWORD(v105[6]) = v12;
    v105[7] = __PAIR64__(v9, v6);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v105);
  }
  return (unsigned int)v6;
}
