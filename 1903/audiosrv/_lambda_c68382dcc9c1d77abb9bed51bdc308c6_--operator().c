/*
 * XREFs of _lambda_c68382dcc9c1d77abb9bed51bdc308c6_::operator() @ 0x180021BC0
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180043940 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180025B10 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18006B870 (_alloca_probe.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_S_guid_ @ 0x1800D1F70 (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x1800D2084 (WPP_SF_Sg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c68382dcc9c1d77abb9bed51bdc308c6_::operator()(__int64 **a1)
{
  __int64 *v2; // rbx
  bool v3; // r15
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  size_t v6; // rsi
  size_t v7; // rcx
  __int64 v8; // rax
  void *v9; // rsp
  LPCRITICAL_SECTION *p_lpCriticalSection; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned int *v13; // rdx
  int v14; // r8d
  CAudioSessionManager *v15; // rcx
  int v16; // xmm6_4
  int v17; // esi
  int v18; // edx
  unsigned __int64 v19; // rcx
  GUID **v21; // rax
  GUID *v22; // r8
  _DWORD *v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  _DWORD v26[10]; // [rsp+0h] [rbp-40h] BYREF
  LPCRITICAL_SECTION *v27; // [rsp+28h] [rbp-18h]
  __int64 v28; // [rsp+30h] [rbp-10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+0h] BYREF
  __int64 *v30; // [rsp+48h] [rbp+8h]
  LPCRITICAL_SECTION *v31; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp+18h]
  __int64 v33; // [rsp+60h] [rbp+20h]
  LPCRITICAL_SECTION *v34; // [rsp+68h] [rbp+28h]
  __int64 v35; // [rsp+70h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+78h]

  v35 = -2LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v21 = (GUID **)a1[1];
    v22 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( *v21 )
      v22 = *v21;
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), (unsigned int)*v21, (_DWORD)v22, (*a1)[91], (__int64)v22);
  }
  v2 = *a1;
  lpCriticalSection = (LPCRITICAL_SECTION)(*a1 + 101);
  LOBYTE(v30) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = *((_DWORD *)v2 + 213) != 0;
  if ( (_BYTE)v30 )
    LeaveCriticalSection(lpCriticalSection);
  v4 = 0;
  v34 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(*a1 + 101);
  LOBYTE(v30) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = *((_DWORD *)*a1 + 240);
  v6 = 4LL * v5;
  v7 = v6 + 16;
  if ( v6 + 16 < v6 )
  {
    p_lpCriticalSection = 0LL;
  }
  else if ( v7 > 0x400 )
  {
    if ( v7 <= v6 )
      v7 = 0LL;
    v23 = malloc(v7);
    p_lpCriticalSection = (LPCRITICAL_SECTION *)v23;
    if ( v23 )
    {
      *v23 = 56797;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)(v23 + 4);
    }
  }
  else
  {
    if ( v7 <= v6 )
      v7 = 0LL;
    v8 = v7 + 15;
    if ( v7 + 15 < v7 )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    p_lpCriticalSection = &lpCriticalSection;
    if ( v26 != (_DWORD *)-64LL )
    {
      LODWORD(lpCriticalSection) = 52428;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)&v31;
    }
  }
  v34 = p_lpCriticalSection;
  if ( p_lpCriticalSection )
  {
    memcpy_0(p_lpCriticalSection, (const void *)(*a1)[121], v6);
    if ( (_BYTE)v30 )
      LeaveCriticalSection(lpCriticalSection);
    if ( !*(_BYTE *)a1[2] )
    {
      v11 = *a1;
      v12 = **a1;
      v13 = (unsigned int *)a1[3];
      v28 = 50000LL;
      v27 = p_lpCriticalSection;
      v26[8] = v5;
      (*(void (__fastcall **)(__int64 *, _QWORD, bool))(v12 + 496))(v11, *v13, v3);
    }
    (*(void (__fastcall **)(__int64 *))(**a1 + 8))(*a1);
    lpCriticalSection = (LPCRITICAL_SECTION)(*a1 + 101);
    LOBYTE(v30) = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_Sg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        88,
        v14,
        (*a1)[91],
        *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)*a1 + 212)));
      v15 = WPP_GLOBAL_Control;
    }
    v16 = *((_DWORD *)*a1 + 212);
    v17 = *((_DWORD *)*a1 + 213);
    if ( (_BYTE)v30 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v15 = WPP_GLOBAL_Control;
    }
    v18 = *(_DWORD *)a1[3];
    if ( v18 )
    {
      if ( v18 != 1 )
      {
LABEL_25:
        if ( v15 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v15 + 28) & 0x40) != 0
          && *((_BYTE *)v15 + 25) >= 5u )
        {
          WPP_SF_S(*((_QWORD *)v15 + 2), 89LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, (*a1)[91]);
        }
        (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
        goto LABEL_28;
      }
      v24 = *a1[1];
      v25 = *(_DWORD *)a1[4];
      lpCriticalSection = (LPCRITICAL_SECTION)&CAudioChannelVolumeChanged::`vftable';
      v31 = p_lpCriticalSection;
      v32 = __PAIR64__(v25, v5);
      v33 = v24;
    }
    else
    {
      v19 = *a1[1];
      lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionVolumeChanged::`vftable';
      LODWORD(v31) = v16;
      BYTE4(v31) = v17 != 0;
      v32 = v19;
    }
    v30 = *a1;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v30 + 62));
    v15 = WPP_GLOBAL_Control;
    goto LABEL_25;
  }
  v4 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x101A,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)0x8007000ELL);
  if ( (_BYTE)v30 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_28:
  if ( p_lpCriticalSection && *((_DWORD *)p_lpCriticalSection - 4) == 56797 )
    free(p_lpCriticalSection - 2);
  return v4;
}
