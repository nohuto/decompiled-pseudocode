/*
 * XREFs of ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x1400551D0
 * Callers:
 *     ?Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z @ 0x140056950 (-Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000AE7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x1400122F4 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140012328 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140015B90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140015C10 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015C94 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140054854 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400555A8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::Initialize(
        CCrossProcessBaseClientEndpoint *this,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v11; // ebx
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  signed int LastError; // eax
  unsigned int *v15; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  unsigned int v19; // ebx
  SIZE_T v20; // r14
  _DWORD *v21; // rax
  signed int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r8d
  unsigned __int16 v25; // ax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // rcx
  void *v33; // rax
  __int64 v35; // rax

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 384);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 384));
  if ( *((_DWORD *)this - 86) )
  {
    v11 = -2005139440;
    goto LABEL_40;
  }
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 || ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v11 = -2147024890;
    goto LABEL_40;
  }
  *((_QWORD *)this + 3) = a5;
  *((_QWORD *)this + 4) = a6;
  *((_QWORD *)this - 32) = a3;
  v12 = MapViewOfFile(a2, 0xF001Fu, 0, 0, 0x188uLL);
  v13 = v12;
  if ( !v12 )
  {
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_40;
  }
  v15 = v12 + 49;
  v16 = (void *)AERTGetDLLRTHeap();
  v18 = (void *)AE_ALLOCATE_SAFEMULT(v17, *v15, v16, (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
  *((_QWORD *)this - 41) = v18;
  if ( !v18 )
  {
    v11 = -2147024882;
    goto LABEL_38;
  }
  memcpy_0(v18, v15, *v15);
  if ( !CCrossProcessBaseEndpoint::IsValidControlData(
          (CCrossProcessBaseClientEndpoint *)((char *)this - 400),
          (struct ControlData *)v13) )
  {
    v11 = -2005139387;
LABEL_37:
    v33 = (void *)AERTGetDLLRTHeap();
    AERTFree(*((void **)this - 41), v33);
    *((_QWORD *)this - 41) = 0LL;
LABEL_38:
    if ( v13 )
      UnmapViewOfFile(v13);
    goto LABEL_40;
  }
  if ( v13[45] == -1 )
    v19 = v13[89];
  else
    v19 = v13[91];
  UnmapViewOfFile(v13);
  v20 = v19;
  v21 = MapViewOfFile(a2, 0xF001Fu, 0, 0, v19);
  v13 = v21;
  if ( !v21 )
  {
    v22 = GetLastError();
    v11 = v22;
    if ( v22 > 0 )
      v11 = (unsigned __int16)v22 | 0x80070000;
    goto LABEL_37;
  }
  v11 = AERTLockMemory(v21, v19);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
        v11);
    }
    v11 = 0;
  }
  v23 = *((_QWORD *)this - 41);
  *((_QWORD *)this - 27) = 0LL;
  *((_QWORD *)this - 29) = 0LL;
  v24 = *(unsigned __int16 *)(v23 + 184);
  *((_DWORD *)this - 80) = v24;
  *((float *)this - 61) = (float)*(int *)(v23 + 176);
  if ( *(_WORD *)(v23 + 172) == 0xFFFE )
    v25 = *(_WORD *)(v23 + 190);
  else
    v25 = *(_WORD *)(v23 + 186);
  *((_DWORD *)this - 76) = v25;
  v26 = *(_DWORD *)(v23 + 156) - *(_DWORD *)(v23 + 152);
  v27 = a7;
  *((_DWORD *)this - 62) = v26;
  v28 = v26 / v24;
  if ( a7 > v28 )
  {
    v11 = -2147024809;
    goto LABEL_37;
  }
  if ( !a7 )
    v27 = v28;
  *((_DWORD *)this - 78) = v27;
  v29 = AERTCreateZoneHeap(v24 * v27);
  *((_QWORD *)this - 33) = v29;
  if ( !v29 )
  {
LABEL_36:
    AERTUnlockMemory(v13, v20);
    v11 = -2147024882;
    goto LABEL_37;
  }
  v31 = AE_ALLOCATE_SAFEMULT(
          v30,
          (unsigned int)(*((_DWORD *)this - 78) * *((_DWORD *)this - 80)),
          v29,
          AERTZoneAllocate);
  *((_QWORD *)this - 37) = v31;
  if ( !v31 )
  {
    v32 = (void *)*((_QWORD *)this - 33);
    if ( v32 )
    {
      AERTDestroyZoneHeap(v32);
      *((_QWORD *)this - 33) = 0LL;
    }
    goto LABEL_36;
  }
  v35 = *((_QWORD *)this - 41);
  *((_QWORD *)this - 42) = v13;
  *((_QWORD *)this - 36) = (char *)v13 + *(unsigned int *)(v35 + 148);
  if ( v13[45] != -1 )
    *((_QWORD *)this - 35) = (char *)v13 + *(unsigned int *)(*((_QWORD *)this - 42) + 180LL);
  _InterlockedExchange((volatile __int32 *)this - 86, 1);
LABEL_40:
  LeaveCriticalSection(v7);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
        v11);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::Initialize", 0x478u, v11);
  }
  return (unsigned int)v11;
}
