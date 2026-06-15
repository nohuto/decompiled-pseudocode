/*
 * XREFs of ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800462A4
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800067B0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x180010B90 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_Sdg @ 0x1800B9FF0 (WPP_SF_Sdg.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x1800BED58 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800BEE14 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x1800BFCC0 (-GetCount@-$CComSafeArray@M$03@ATL@@QEBAKI@Z.c)
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x1800C0110 (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x1800C0828 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     WPP_SF_DD @ 0x1800C36EC (WPP_SF_DD.c)
 *     WPP_SF_Sg @ 0x1800C3854 (WPP_SF_Sg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LoadSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edi
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edi
  unsigned int v12; // ebx
  int v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int Count; // ecx
  unsigned __int64 v20; // rax
  void *v21; // rax
  void *v22; // rcx
  int v23; // edi
  __int64 v24; // r14
  int LowerBound; // esi
  int v26; // esi
  __int64 v27; // r8
  int v28; // eax
  int v29; // [rsp+20h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-40h] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h]
  __int64 v32; // [rsp+40h] [rbp-30h]
  LPCRITICAL_SECTION v33; // [rsp+48h] [rbp-28h] BYREF
  char v34; // [rsp+50h] [rbp-20h]
  PROPVARIANT pvar; // [rsp+58h] [rbp-18h] BYREF
  SAFEARRAY *psa; // [rsp+60h] [rbp-10h]
  __int64 v37; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  SAFEARRAY *ppsaOut; // [rsp+A0h] [rbp+30h] BYREF

  v33 = (LPCRITICAL_SECTION)((char *)this + 1032);
  v34 = 0;
  ATL::CCritSecLock::Lock(&v33);
  v2 = *((_QWORD *)this + 134);
  pvar = 0LL;
  psa = 0LL;
  v37 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_AudioSession_MasterVolume,
         &pvar);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11C6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v3);
  if ( !v4 )
  {
    LOBYTE(v31) = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 848);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( (_WORD)pvar == 4 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          99,
          v5,
          *((_QWORD *)this + 96),
          *(_OWORD *)&_mm_cvtps_pd((__m128)(unsigned int)psa));
      }
      *((_DWORD *)this + 222) = (_DWORD)psa;
    }
    else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        100LL,
        &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        (unsigned __int16)pvar);
    }
    if ( (_BYTE)v31 )
      LeaveCriticalSection(lpCriticalSection);
  }
  PropVariantClear(&pvar);
  v6 = *((_QWORD *)this + 134);
  pvar = 0LL;
  psa = 0LL;
  v37 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(
         v6,
         &PKEY_AudioSession_ChannelVolume,
         &pvar);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11DE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v7);
  if ( !v8 )
  {
    if ( (_WORD)pvar == 8196 )
    {
      ppsaOut = 0LL;
      v14 = ATL::CComSafeArray<float,4>::CopyFrom(&ppsaOut, psa);
      if ( v14 < 0 )
        ATL::AtlThrowImpl(v14);
      LOBYTE(v31) = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 848);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( !*((_DWORD *)this + 250)
        || (v15 = *((_DWORD *)this + 250), v15 == (unsigned int)ATL::CComSafeArray<float,4>::GetCount(&ppsaOut)) )
      {
        if ( *((_QWORD *)this + 126) )
          goto LABEL_78;
        Count = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        v20 = 4LL * Count;
        *((_DWORD *)this + 250) = Count;
        if ( !is_mul_ok(Count, 4uLL) )
          v20 = -1LL;
        v21 = operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
        v22 = (void *)*((_QWORD *)this + 126);
        *((_QWORD *)this + 126) = v21;
        if ( v22 )
        {
          operator delete(v22);
          v21 = (void *)*((_QWORD *)this + 126);
        }
        if ( v21 )
        {
          memset_0(v21, 0, 4LL * *((unsigned int *)this + 250));
          if ( *((_QWORD *)this + 126) )
          {
LABEL_78:
            v23 = 0;
            if ( *((int *)this + 250) > 0 )
            {
              v24 = 0LL;
              do
              {
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  if ( !ppsaOut )
                    goto LABEL_65;
                  LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
                  if ( v23 < LowerBound || v23 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                    goto LABEL_64;
                  WPP_SF_Sdg(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    101,
                    (unsigned int)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
                    *((_QWORD *)this + 96),
                    v23,
                    *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)ppsaOut->pvData + v23 - LowerBound)));
                }
                if ( !ppsaOut )
LABEL_65:
                  ATL::AtlThrowImpl(-2147467259);
                v26 = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
                if ( v23 < v26 || v23 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
LABEL_64:
                  ATL::AtlThrowImpl(-2147024809);
                v27 = v23 - v26;
                ++v23;
                *(_DWORD *)(v24 + *((_QWORD *)this + 126)) = *((_DWORD *)ppsaOut->pvData + v27);
                v24 += 4LL;
              }
              while ( v23 < *((_DWORD *)this + 250) );
            }
          }
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v16 = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        WPP_SF_DD(*((_QWORD *)WPP_GLOBAL_Control + 2), v17, v18, v16, v15);
      }
      if ( (_BYTE)v31 )
        LeaveCriticalSection(lpCriticalSection);
      ATL::CComSafeArray<float,4>::Destroy(&ppsaOut);
    }
    else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        103LL,
        &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        (unsigned __int16)pvar);
    }
  }
  PropVariantClear(&pvar);
  v9 = *((_QWORD *)this + 134);
  lpCriticalSection = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, LPCRITICAL_SECTION *))(*(_QWORD *)v9 + 40LL))(
          v9,
          &PKEY_AudioSession_Mute,
          &lpCriticalSection);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x121A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v10);
  if ( v11 )
    goto LABEL_21;
  if ( (_WORD)lpCriticalSection != 11 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        105LL,
        &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        (unsigned __int16)lpCriticalSection);
    }
LABEL_21:
    PropVariantClear((PROPVARIANT *)&lpCriticalSection);
    v12 = 0;
    goto LABEL_22;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      104LL,
      &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
      (unsigned int)(__int16)v31);
  }
  v28 = CPerStreamVolumeAudioSession::SetMute(this, (_WORD)v31 == 0xFFFF, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1, 0LL);
  v12 = v28;
  if ( v28 >= 0 )
    goto LABEL_21;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1223,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v28,
    v29);
  PropVariantClear((PROPVARIANT *)&lpCriticalSection);
LABEL_22:
  if ( v34 )
    LeaveCriticalSection(v33);
  return v12;
}
