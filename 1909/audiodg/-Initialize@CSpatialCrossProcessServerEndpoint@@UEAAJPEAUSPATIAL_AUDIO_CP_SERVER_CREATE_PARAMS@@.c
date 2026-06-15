/*
 * XREFs of ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14005F000
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140001CCC (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x140001D28 (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140003A78 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     memcpy_0 @ 0x1400181EF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x14002A474 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A60 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??4?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessEvent@@@Z @ 0x140051E78 (--4-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProce.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AC68 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14005C778 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGI.c)
 *     ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005D254 (-SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x14005EE60 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x14005EEB4 (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::Initialize(
        CSpatialCrossProcessServerEndpoint *this,
        struct SPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS *a2,
        struct ICrossProcessMemory **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  __int128 v26; // xmm0
  unsigned int v27; // eax
  void **v28; // rax
  void *v29; // rbx
  __int64 v30; // rdx
  HANDLE EventW; // rax
  HANDLE v32; // rax
  HANDLE v33; // rax
  int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  HANDLE v39; // rax
  void *v40; // rcx
  char v41; // si
  signed int LastError; // eax
  char *v43; // rdi
  void *v44; // rcx
  void *v46; // [rsp+40h] [rbp-40h] BYREF
  struct ICrossProcessMemory *v47; // [rsp+48h] [rbp-38h] BYREF
  void *Block; // [rsp+50h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-28h] BYREF
  char v50; // [rsp+60h] [rbp-20h]
  char *v51; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  DWORD ThreadId; // [rsp+D8h] [rbp+58h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 896);
  v50 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::Initialize", 63);
  v47 = 0LL;
  if ( *((_BYTE *)this - 832) )
  {
    v6 = -2005139440;
    v7 = 68LL;
LABEL_66:
    v9 = v6;
    goto LABEL_67;
  }
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 71LL;
    goto LABEL_66;
  }
  if ( !a2 )
  {
    v6 = -2147467261;
    v7 = 72LL;
    goto LABEL_66;
  }
  if ( *(_DWORD *)a2 != 144 )
  {
    v6 = -2147024809;
    v7 = 73LL;
    goto LABEL_66;
  }
  v8 = CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(
         (CSpatialCrossProcessServerEndpoint *)((char *)this - 928),
         *((const struct tWAVEFORMATEX **)a2 + 16));
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v7 = 75LL;
LABEL_67:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)v9);
    goto LABEL_68;
  }
  v10 = *((_DWORD *)a2 + 21);
  v11 = *((_QWORD *)this - 94);
  *((_DWORD *)this - 207) = v10;
  *((_DWORD *)this - 189) = 4 * v10;
  *((float *)this - 199) = (float)*(int *)(v11 + 4);
  if ( *(_WORD *)v11 == 0xFFFE )
    v12 = *(_WORD *)(v11 + 18);
  else
    v12 = *(_WORD *)(v11 + 14);
  *((_DWORD *)this - 206) = v12;
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 17);
  v13 = *((unsigned int *)a2 + 21) * (unsigned __int64)*(unsigned __int16 *)(v11 + 12);
  if ( v13 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    v7 = 94LL;
    goto LABEL_66;
  }
  v14 = (unsigned int)v13;
  v15 = (void *)AERTCreateZoneHeap((unsigned int)v13);
  *((_QWORD *)this - 101) = v15;
  if ( !v15 )
  {
    v6 = -2147024882;
    v7 = 97LL;
    goto LABEL_66;
  }
  v51 = (char *)this - 928;
  v17 = (void *)AE_ALLOCATE_SAFEMULT(v16, v14, v15, AERTZoneAllocate);
  *((_QWORD *)this - 102) = v17;
  if ( !v17 )
  {
    v6 = -2147024882;
    v18 = 105LL;
    v19 = 2147942414LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)v19);
LABEL_63:
    v43 = v51;
    v44 = (void *)*((_QWORD *)v51 + 15);
    if ( v44 )
    {
      AERTDestroyZoneHeap(v44, v24, v25);
      *((_QWORD *)v43 + 15) = 0LL;
    }
    goto LABEL_68;
  }
  memset_0(v17, 0, v14);
  v20 = *((_QWORD *)this - 94);
  v21 = *((_DWORD *)a2 + 20);
  *((_DWORD *)this - 200) = v21;
  v22 = v21 % *(unsigned __int16 *)(v20 + 12);
  if ( v22 )
    *((_DWORD *)this - 200) = *(unsigned __int16 *)(v20 + 12) + v21 - v22;
  v23 = CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
          (CSpatialCrossProcessServerEndpoint *)((char *)this - 928),
          *((struct ICrossProcessMemoryManager **)a2 + 14),
          *((size_t **)a2 + 11),
          *((_DWORD *)a2 + 2),
          *((_DWORD *)a2 + 5),
          *((_DWORD *)a2 + 6),
          *((_DWORD *)a2 + 7),
          &v47);
  v6 = v23;
  if ( v23 < 0 )
  {
    v19 = (unsigned int)v23;
    v18 = 122LL;
    goto LABEL_23;
  }
  v26 = *((_OWORD *)a2 + 2);
  v46 = 0LL;
  *((_OWORD *)this + 6) = v26;
  v27 = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 28) = v27;
  if ( v27 )
  {
    v28 = (void **)std::make_unique<unsigned char [0],0>(&Block, v27);
    v29 = 0LL;
    if ( &v46 != v28 )
    {
      v29 = *v28;
      v46 = *v28;
      *v28 = 0LL;
    }
    if ( Block )
      operator delete(Block);
    if ( !v29 )
    {
      v6 = -2147024882;
      v30 = 132LL;
LABEL_57:
      v36 = v6;
      goto LABEL_58;
    }
    memcpy_0(v46, *((const void **)a2 + 7), *((unsigned int *)this + 28));
  }
  _InterlockedExchange(
    (volatile __int32 *)(*((_QWORD *)this - 4) + 52LL),
    (int)((float)((float)*(int *)(*((_QWORD *)this - 94) + 8LL)
                / (float)*(unsigned __int16 *)(*((_QWORD *)this - 94) + 12LL))
        * (double)(int)*((_QWORD *)a2 + 9)
        / 10000000.0
        + 0.5));
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 2) = EventW;
  if ( !EventW )
  {
    v6 = -2147024890;
    v30 = 142LL;
    goto LABEL_57;
  }
  v32 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 3) = v32;
  if ( !v32 )
  {
    v6 = -2147024890;
    v30 = 145LL;
    goto LABEL_57;
  }
  v33 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 1) = v33;
  if ( !v33 )
  {
    v6 = -2147024890;
    v30 = 148LL;
    goto LABEL_57;
  }
  v34 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 113) + 24LL))(
          (char *)this - 904,
          0LL,
          *((unsigned int *)a2 + 16));
  v6 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)(unsigned int)v34);
LABEL_59:
    v41 = 1;
    goto LABEL_60;
  }
  v35 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 113) + 32LL))(
          (char *)this - 904,
          *((unsigned int *)a2 + 16),
          0LL);
  v6 = v35;
  if ( v35 < 0 )
  {
    v36 = (unsigned int)v35;
    v30 = 153LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)v36);
    goto LABEL_59;
  }
  v37 = *((_QWORD *)a2 + 13);
  if ( v37 )
  {
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 7, v37);
    *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7));
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 4) + 72LL), 0x20u);
  }
  else if ( *((_QWORD *)a2 + 11) )
  {
    v38 = *((_QWORD *)a2 + 12);
    if ( v38 )
      *(_QWORD *)(v38 + 32) = (char *)this + 72;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=((__int64 *)this - 67, *((_QWORD *)a2 + 15));
  v39 = CreateThread(
          0LL,
          0LL,
          (LPTHREAD_START_ROUTINE)CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThreadThunk,
          (char *)this - 928,
          0,
          &ThreadId);
  *((_QWORD *)this + 5) = v39;
  if ( !v39 )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( (v6 & 0x80000000) == 0 )
      goto LABEL_59;
    v30 = 173LL;
    goto LABEL_57;
  }
  SetThreadPriority(v39, 2);
  if ( WaitForSingleObjectEx(*((HANDLE *)this + 3), 0xFFFFFFFF, 0) )
  {
    v6 = -2147024890;
    v30 = 176LL;
    goto LABEL_57;
  }
  ATL::CHandle::Close((void **)this + 3);
  v40 = v46;
  v41 = 0;
  if ( v46 )
  {
    v46 = 0LL;
    *((_QWORD *)this + 15) = v40;
  }
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>((__int64 *)&v47, a3);
  *((_BYTE *)this - 832) = 1;
  v6 = 0;
LABEL_60:
  if ( v46 )
    operator delete(v46);
  if ( v41 )
    goto LABEL_63;
LABEL_68:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v47);
  if ( v50 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
