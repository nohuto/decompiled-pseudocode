/*
 * XREFs of ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x140061020
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14000F364 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140012328 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015C94 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001B908 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140031A24 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140054854 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005CD58 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005CDF8 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005E7E8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005F2D0 (-SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x140060E6C (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::Initialize(
        CSpatialCrossProcessServerEndpoint *this,
        struct SPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS *a2,
        void **a3,
        unsigned __int64 *a4)
{
  int SecurityDescriptor; // ebx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  __int64 v23; // rax
  unsigned int v24; // r8d
  unsigned int v25; // edx
  const unsigned __int16 *v26; // rcx
  unsigned int v27; // eax
  void *v28; // rax
  const unsigned __int16 *v29; // rcx
  HANDLE EventW; // rax
  HANDLE v31; // rax
  HANDLE v32; // rax
  HANDLE v33; // rax
  __int64 v34; // rcx
  HANDLE CurrentProcess; // rbx
  HANDLE v36; // rax
  signed int v37; // eax
  HANDLE v38; // rax
  signed int LastError; // eax
  void *v40; // [rsp+40h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v42; // [rsp+50h] [rbp-38h]
  DWORD ThreadId; // [rsp+90h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 888);
  v42 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::Initialize", 60);
  if ( !*((_BYTE *)this - 848) )
  {
    if ( !a3 || !a4 || !a2 )
    {
      SecurityDescriptor = -2147467261;
      goto LABEL_29;
    }
    if ( *(_DWORD *)a2 != 144 )
    {
      SecurityDescriptor = -2147024809;
      goto LABEL_29;
    }
    SecurityDescriptor = CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(
                           (CSpatialCrossProcessServerEndpoint *)((char *)this - 920),
                           *((const struct tWAVEFORMATEX **)a2 + 16));
    if ( SecurityDescriptor < 0 )
      goto LABEL_29;
    v9 = *((_DWORD *)a2 + 21);
    v10 = *((_QWORD *)this - 96);
    *((_DWORD *)this - 211) = v9;
    *((_DWORD *)this - 193) = 4 * v9;
    *((float *)this - 203) = (float)*(int *)(v10 + 4);
    if ( *(_WORD *)v10 == 0xFFFE )
      v11 = *(_WORD *)(v10 + 18);
    else
      v11 = *(_WORD *)(v10 + 14);
    *((_DWORD *)this - 210) = v11;
    *((_QWORD *)this + 21) = *((_QWORD *)a2 + 17);
    v12 = *((unsigned int *)a2 + 21) * (unsigned __int64)*(unsigned __int16 *)(v10 + 12);
    v13 = -1;
    if ( v12 <= 0xFFFFFFFF )
      v13 = v12;
    SecurityDescriptor = v12 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v12 <= 0xFFFFFFFF )
    {
      v14 = v13;
      v15 = AERTCreateZoneHeap(v13);
      *((_QWORD *)this - 103) = v15;
      if ( !v15 )
      {
        SecurityDescriptor = -2147024882;
        goto LABEL_29;
      }
      v17 = (void *)AE_ALLOCATE_SAFEMULT(v16, v14, v15, AERTZoneAllocate);
      *((_QWORD *)this - 104) = v17;
      if ( !v17 )
        goto LABEL_19;
      memset_0(v17, 0, v14);
      v23 = *((_QWORD *)this - 96);
      v24 = *((_DWORD *)a2 + 20);
      *((_DWORD *)this - 204) = v24;
      v25 = v24 % *(unsigned __int16 *)(v23 + 12);
      if ( v25 )
        *((_DWORD *)this - 204) = v24 + *(unsigned __int16 *)(v23 + 12) - v25;
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 11) = 0LL;
      *((_DWORD *)this + 20) = 24;
      v26 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
      if ( v26 )
      {
        SecurityDescriptor = CreateSecurityDescriptor(v26, 0xF001Fu, (void **)this + 11);
        if ( SecurityDescriptor < 0 )
          goto LABEL_20;
      }
      SecurityDescriptor = CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
                             (CSpatialCrossProcessServerEndpoint *)((char *)this - 920),
                             (struct _SECURITY_ATTRIBUTES *)((char *)this + 80),
                             *((size_t **)a2 + 12),
                             *((_DWORD *)a2 + 2),
                             *((_DWORD *)a2 + 5),
                             *((_DWORD *)a2 + 6),
                             *((_DWORD *)a2 + 7),
                             &v40);
      if ( SecurityDescriptor < 0 )
        goto LABEL_20;
      *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 2);
      v27 = *((_DWORD *)a2 + 12);
      *((_DWORD *)this + 38) = v27;
      if ( v27 )
      {
        v28 = operator new[](v27);
        *((_QWORD *)this + 20) = v28;
        if ( !v28 )
        {
LABEL_19:
          SecurityDescriptor = -2147024882;
LABEL_20:
          v18 = (void *)*((_QWORD *)this + 20);
          if ( v18 )
          {
            operator delete(v18);
            *((_QWORD *)this + 20) = 0LL;
          }
          v19 = (void *)*((_QWORD *)this + 14);
          if ( v19 )
          {
            LocalFree(v19);
            *((_QWORD *)this + 14) = 0LL;
          }
          v20 = (void *)*((_QWORD *)this + 11);
          if ( v20 )
          {
            LocalFree(v20);
            *((_QWORD *)this + 11) = 0LL;
          }
          v21 = (void *)*((_QWORD *)this - 103);
          if ( v21 )
          {
            AERTDestroyZoneHeap(v21);
            *((_QWORD *)this - 103) = 0LL;
          }
          goto LABEL_28;
        }
        memcpy_0(v28, *((const void **)a2 + 7), *((unsigned int *)this + 38));
      }
      _InterlockedExchange(
        (volatile __int32 *)(*((_QWORD *)this - 5) + 52LL),
        (int)((float)((float)*(int *)(*((_QWORD *)this - 96) + 8LL)
                    / (float)*(unsigned __int16 *)(*((_QWORD *)this - 96) + 12LL))
            * (double)(int)*((_QWORD *)a2 + 9)
            / 10000000.0
            + 0.5));
      *((_QWORD *)this + 14) = 0LL;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 26) = 24;
      v29 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
      if ( v29 )
      {
        SecurityDescriptor = CreateSecurityDescriptor(v29, 0x1F0003u, (void **)this + 14);
        if ( SecurityDescriptor < 0 )
          goto LABEL_20;
      }
      EventW = CreateEventW((LPSECURITY_ATTRIBUTES)((char *)this + 104), 0, 0, 0LL);
      *((_QWORD *)this + 1) = EventW;
      if ( !EventW
        || (v31 = CreateEventW(0LL, 0, 0, 0LL), (*((_QWORD *)this + 3) = v31) == 0LL)
        || (v32 = CreateEventW(0LL, 0, 0, 0LL), (*((_QWORD *)this + 4) = v32) == 0LL)
        || (v33 = CreateEventW(0LL, 0, 0, 0LL), (*((_QWORD *)this + 2) = v33) == 0LL) )
      {
LABEL_44:
        SecurityDescriptor = -2147024890;
        goto LABEL_20;
      }
      SecurityDescriptor = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 112) + 24LL))(
                             (char *)this - 896,
                             0LL,
                             *((unsigned int *)a2 + 16));
      if ( SecurityDescriptor < 0 )
        goto LABEL_20;
      SecurityDescriptor = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 112) + 32LL))(
                             (char *)this - 896,
                             *((unsigned int *)a2 + 16),
                             0LL);
      if ( SecurityDescriptor < 0 )
        goto LABEL_20;
      if ( *((_QWORD *)a2 + 12) )
      {
        v34 = *((_QWORD *)a2 + 13);
        if ( v34 )
        {
          *(_QWORD *)(v34 + 32) = (char *)this + 64;
LABEL_58:
          Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=(
            (__int64 *)this - 68,
            *((_QWORD *)a2 + 15));
          v38 = CreateThread(
                  0LL,
                  0LL,
                  (LPTHREAD_START_ROUTINE)CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThreadThunk,
                  (char *)this - 920,
                  0,
                  &ThreadId);
          *((_QWORD *)this + 6) = v38;
          if ( !v38 )
          {
            LastError = GetLastError();
            SecurityDescriptor = LastError;
            if ( LastError > 0 )
              SecurityDescriptor = (unsigned __int16)LastError | 0x80070000;
            goto LABEL_20;
          }
          SetThreadPriority(v38, 2);
          if ( !WaitForSingleObjectEx(*((HANDLE *)this + 4), 0xFFFFFFFF, 0) )
          {
            ATL::CHandle::Close((void **)this + 4);
            SecurityDescriptor = 0;
            *a3 = v40;
            *a4 = *((_QWORD *)this + 1);
            *((_BYTE *)this - 848) = 1;
            goto LABEL_28;
          }
          goto LABEL_44;
        }
      }
      if ( !*((_QWORD *)a2 + 14) )
        goto LABEL_58;
      CurrentProcess = GetCurrentProcess();
      v36 = GetCurrentProcess();
      if ( DuplicateHandle(v36, *((HANDLE *)a2 + 14), CurrentProcess, (LPHANDLE)this + 7, 0, 0, 2u) )
      {
        _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 5) + 72LL), 0x20u);
        goto LABEL_58;
      }
      v37 = GetLastError();
      SecurityDescriptor = v37;
      if ( v37 > 0 )
        SecurityDescriptor = (unsigned __int16)v37 | 0x80070000;
    }
LABEL_28:
    if ( SecurityDescriptor >= 0 )
      goto LABEL_30;
    goto LABEL_29;
  }
  SecurityDescriptor = -2005139440;
LABEL_29:
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerEndpoint::Initialize", 218, SecurityDescriptor);
LABEL_30:
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)SecurityDescriptor;
}
