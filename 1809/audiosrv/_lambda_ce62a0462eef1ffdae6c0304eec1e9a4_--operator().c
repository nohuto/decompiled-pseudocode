/*
 * XREFs of _lambda_ce62a0462eef1ffdae6c0304eec1e9a4_::operator() @ 0x1800642F0
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x1800153B0 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x180014A60 (-GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x180014BA0 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     _freea @ 0x180015D40 (_freea.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180027ED0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1800287F4 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002D0D8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_S_guid_ @ 0x1800C3740 (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x1800C3854 (WPP_SF_Sg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ce62a0462eef1ffdae6c0304eec1e9a4_::operator()(CAudioSession **a1, __int64 a2, int a3)
{
  GUID **v4; // rax
  GUID *v5; // rdx
  unsigned int v6; // r14d
  size_t v7; // rsi
  size_t v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  CAudioSession **v11; // rdx
  _DWORD *v12; // rax
  void *v13; // rbx
  unsigned int v14; // edi
  CAudioSession *v15; // rcx
  __int64 v16; // rax
  CAudioSession *v17; // rdx
  __int64 v18; // r8
  int v19; // r8d
  int v20; // xmm6_4
  int v21; // esi
  int v22; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v27; // [rsp+0h] [rbp-40h] BYREF
  int v28[2]; // [rsp+20h] [rbp-20h]
  void *v29; // [rsp+28h] [rbp-18h]
  __int64 v30; // [rsp+30h] [rbp-10h]
  int v31; // [rsp+40h] [rbp+0h] BYREF
  float v32; // [rsp+44h] [rbp+4h] BYREF
  void **v33; // [rsp+48h] [rbp+8h] BYREF
  CAudioSession *v34; // [rsp+50h] [rbp+10h] BYREF
  void *v35; // [rsp+58h] [rbp+18h]
  unsigned __int64 v36; // [rsp+60h] [rbp+20h]
  __int64 v37; // [rsp+68h] [rbp+28h]
  void *Memory; // [rsp+70h] [rbp+30h] BYREF
  __int64 v39[2]; // [rsp+78h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+68h]

  v39[1] = -2LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v4 = (GUID **)a1[1];
    v5 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( *v4 )
      v5 = *v4;
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)v5, a3, *((_QWORD *)*a1 + 96), (__int64)v5);
  }
  LOBYTE(v31) = 0;
  v32 = FLOAT_1_0;
  v39[0] = 0LL;
  CAudioSession::GetCurrentSessionGain(*a1, (bool *)&v31, &v32, v39);
  Memory = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v33, (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 848));
  v6 = *((_DWORD *)*a1 + 250);
  v7 = 4LL * v6;
  v8 = (v7 + 16) & -(__int64)(v7 < v7 + 16);
  if ( v8 )
  {
    if ( v8 > 0x400 )
    {
      v12 = malloc(v8);
      if ( v12 )
      {
        *v12 = 56797;
        v12 += 4;
      }
      v11 = (CAudioSession **)v12;
    }
    else
    {
      v9 = v8 + 15;
      if ( v8 + 15 < v8 )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = (CAudioSession **)&v31;
      if ( &v27 != (__int64 *)-64LL )
      {
        v31 = 52428;
        v11 = &v34;
      }
    }
  }
  else
  {
    v11 = 0LL;
  }
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(&Memory, v11);
  v13 = Memory;
  if ( !Memory )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      4136LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v33);
    goto LABEL_35;
  }
  memcpy_0(Memory, *((const void **)*a1 + 126), v7);
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v33);
  if ( !*(_BYTE *)a1[2] )
  {
    v15 = *a1;
    v16 = *(_QWORD *)*a1;
    v17 = a1[3];
    v18 = v39[0];
    v30 = v39[0];
    v29 = v13;
    v28[0] = v6;
    LOBYTE(v18) = v31;
    (*(void (__fastcall **)(CAudioSession *, _QWORD, __int64))(v16 + 496))(v15, *(unsigned int *)v17, v18);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 8LL))(*a1);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v33, (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 848));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      88,
      v19,
      *((_QWORD *)*a1 + 96),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)*a1 + 222)));
  }
  v20 = *((_DWORD *)*a1 + 222);
  v21 = *((_DWORD *)*a1 + 223);
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v33);
  v22 = *(_DWORD *)a1[3];
  if ( v22 )
  {
    if ( v22 != 1 )
      goto LABEL_30;
    v24 = *(_QWORD *)a1[1];
    v25 = *(_DWORD *)a1[4];
    v33 = &CAudioChannelVolumeChanged::`vftable';
    v35 = v13;
    v36 = __PAIR64__(v25, v6);
    v37 = v24;
  }
  else
  {
    v23 = *(_QWORD *)a1[1];
    v33 = &CAudioSessionVolumeChanged::`vftable';
    LODWORD(v35) = v20;
    BYTE4(v35) = v21 != 0;
    v36 = v23;
  }
  v34 = *a1;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
    (LPCRITICAL_SECTION)((char *)v34 + 496),
    (void (__fastcall ***)(_QWORD, __int64 *))&v33);
LABEL_30:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      89LL,
      &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
      *((_QWORD *)*a1 + 96));
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 16LL))(*a1);
  v14 = 0;
LABEL_35:
  if ( v13 )
    freea(v13);
  return v14;
}
