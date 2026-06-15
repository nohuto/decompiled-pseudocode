/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180039340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180039550 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180039588 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004CEAC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004D2B4 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int v5; // eax
  int MixFormat; // edi
  void *v7; // rcx
  bool v8; // of
  unsigned __int64 v9; // rax
  _DWORD *v10; // rax
  void *v11; // rcx
  _DWORD *v12; // rdx
  unsigned int i; // ecx
  __int64 v14; // rax
  int v15; // esi
  void *v16; // rcx
  int v18; // eax
  unsigned int v19; // edi
  int SessionConfiguration; // eax
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-30h] BYREF
  LPVOID *p_pv; // [rsp+40h] [rbp-20h]
  struct tWAVEFORMATEX *v23; // [rsp+48h] [rbp-18h] BYREF
  char v24; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  LPVOID pv; // [rsp+80h] [rbp+20h] BYREF
  CEndpointCharacteristics *v27; // [rsp+90h] [rbp+30h] BYREF

  v27 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 656));
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
      (void *)0x663,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_19;
  }
  pv = 0LL;
  *(GUID *)lpCriticalSection = GUID_00000000_0000_0000_0000_000000000000;
  p_pv = &pv;
  v23 = 0LL;
  v24 = 1;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v27,
                eHostProcessConnector,
                (struct _GUID *)lpCriticalSection,
                &v23);
  if ( v24 )
  {
    v7 = *p_pv;
    *p_pv = v23;
    if ( v7 )
      CoTaskMemFree(v7);
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66D,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)MixFormat);
  }
  else
  {
    LOBYTE(lpCriticalSection[1]) = 0;
    lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 808);
    ATL::CCritSecLock::Lock(lpCriticalSection);
    v9 = 4LL * *((unsigned __int16 *)pv + 1);
    v8 = (*((unsigned __int16 *)pv + 1) * (unsigned __int128)4uLL) >> 64 != 0;
    *((_DWORD *)this + 240) = *((unsigned __int16 *)pv + 1);
    if ( v8 )
      v9 = -1LL;
    v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v11 = (void *)*((_QWORD *)this + 121);
    v12 = v10;
    *((_QWORD *)this + 121) = v10;
    if ( v11 )
    {
      operator delete(v11);
      v12 = (_DWORD *)*((_QWORD *)this + 121);
    }
    if ( !v12 )
    {
      MixFormat = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x675,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL);
      if ( LOBYTE(lpCriticalSection[1]) )
        LeaveCriticalSection(lpCriticalSection[0]);
      goto LABEL_17;
    }
    for ( i = 0; i < *((_DWORD *)this + 240); v12[v14] = 1065353216 )
      v14 = i++;
    if ( LOBYTE(lpCriticalSection[1]) )
      LeaveCriticalSection(lpCriticalSection[0]);
    v15 = a2 & 2;
    *((_BYTE *)this + 984) = v15 != 0;
    if ( !v15 )
      goto LABEL_16;
    v18 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x686,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v18,
        (int)&v27);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, v19);
      }
      goto LABEL_16;
    }
    SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
    MixFormat = SessionConfiguration;
    if ( SessionConfiguration >= 0 )
    {
      CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
LABEL_16:
      MixFormat = 0;
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)SessionConfiguration);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  }
LABEL_17:
  v16 = pv;
  pv = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
LABEL_19:
  if ( v27 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v27 + 16LL))(v27);
  return (unsigned int)MixFormat;
}
