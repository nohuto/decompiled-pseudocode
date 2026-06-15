/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800067B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800069F0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180006A28 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180045BEC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800462A4 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int v5; // eax
  int (*v6)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // edi
  _QWORD *v8; // rsi
  struct tWAVEFORMATEX *v9; // r14
  struct tWAVEFORMATEX *v10; // rcx
  bool v11; // of
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  void *v14; // rcx
  _DWORD *v15; // rdx
  unsigned int i; // ecx
  __int64 v17; // rax
  int v18; // r15d
  int v20; // eax
  unsigned int v21; // edi
  int SessionConfiguration; // eax
  int v23; // [rsp+20h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-48h] BYREF
  LPVOID *p_pv; // [rsp+40h] [rbp-38h]
  struct tWAVEFORMATEX *v26; // [rsp+48h] [rbp-30h] BYREF
  char v27; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+10h]
  LPVOID pv; // [rsp+90h] [rbp+18h] BYREF
  CEndpointCharacteristics *v30; // [rsp+A0h] [rbp+28h] BYREF

  v30 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 696));
  v5 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                  + 24LL))(
         g_pEndpointCharacteristicsCache,
         Buffer,
         0LL,
         0LL);
  MixFormat = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x664,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5,
      (int)&v30);
    goto LABEL_21;
  }
  p_pv = &pv;
  pv = 0LL;
  v26 = 0LL;
  v27 = 1;
  *(GUID *)lpCriticalSection = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v30,
                eHostProcessConnector,
                (struct _GUID *)lpCriticalSection,
                v6,
                &v26);
  if ( v27 )
  {
    v8 = p_pv;
    v9 = v26;
    v10 = (struct tWAVEFORMATEX *)*p_pv;
    if ( v26 != *p_pv )
    {
      if ( v10 )
        CoTaskMemFree(v10);
      *v8 = v9;
    }
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)MixFormat,
      v23);
  }
  else
  {
    LOBYTE(lpCriticalSection[1]) = 0;
    lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 848);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
    v12 = 4LL * *((unsigned __int16 *)pv + 1);
    v11 = (*((unsigned __int16 *)pv + 1) * (unsigned __int128)4uLL) >> 64 != 0;
    *((_DWORD *)this + 250) = *((unsigned __int16 *)pv + 1);
    if ( v11 )
      v12 = -1LL;
    v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v14 = (void *)*((_QWORD *)this + 126);
    v15 = v13;
    *((_QWORD *)this + 126) = v13;
    if ( v14 )
    {
      operator delete(v14);
      v15 = (_DWORD *)*((_QWORD *)this + 126);
    }
    if ( !v15 )
    {
      MixFormat = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x676,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL,
        v23);
      if ( LOBYTE(lpCriticalSection[1]) )
        LeaveCriticalSection(lpCriticalSection[0]);
      goto LABEL_19;
    }
    for ( i = 0; i < *((_DWORD *)this + 250); v15[v17] = 1065353216 )
      v17 = i++;
    if ( LOBYTE(lpCriticalSection[1]) )
      LeaveCriticalSection(lpCriticalSection[0]);
    v18 = a2 & 2;
    *((_BYTE *)this + 1024) = v18 != 0;
    if ( !v18 )
      goto LABEL_18;
    v20 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x687,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v20);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, v21);
      }
      goto LABEL_18;
    }
    SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
    MixFormat = SessionConfiguration;
    if ( SessionConfiguration >= 0 )
    {
      CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
LABEL_18:
      MixFormat = 0;
      goto LABEL_19;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)SessionConfiguration,
      v23);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  }
LABEL_19:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_21:
  if ( v30 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v30 + 16LL))(v30);
  return (unsigned int)MixFormat;
}
