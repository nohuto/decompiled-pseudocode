/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180043110
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800C1490 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800150AC (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180027ED0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x1800646A8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?UpdateLastInactivationTime@CAudioSession@@QEAAXXZ @ 0x180064738 (-UpdateLastInactivationTime@CAudioSession@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x1800C37C8 (WPP_SF_Sdd.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, enum _AudioSessionState a2)
{
  int v2; // esi
  int v5; // eax
  void (__fastcall **v6[2])(_QWORD, __int64 *); // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  enum _AudioSessionState v8; // [rsp+44h] [rbp-14h]

  v2 = *((_DWORD *)this + 102);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      76,
      (unsigned int)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
      *((_QWORD *)this + 96),
      v2,
      a2);
  }
  if ( !v2 )
  {
    if ( a2 != AudioSessionStateActive )
      goto LABEL_19;
    CAudioSession::CancelInactiveTimer(this);
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        77LL,
        &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        *((_QWORD *)this + 96));
    }
    *((_BYTE *)this + 1016) = 1;
  }
  if ( v2 == 1 && a2 == AudioSessionStateInactive )
  {
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
    CAudioSession::UpdateLastInactivationTime(this);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        78LL,
        &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        *((_QWORD *)this + 96));
    }
    *((_BYTE *)this + 1016) = 0;
    CAudioSession::StartInactiveTimer(this);
  }
LABEL_19:
  *((_DWORD *)this + 102) = a2;
  if ( a2 == AudioSessionStateActive )
  {
    v5 = *((_DWORD *)this + 76);
    if ( (v5 & 0x200000) != 0 )
      *((_DWORD *)this + 76) = v5 & 0xFFDFFFFF;
  }
  if ( v2 != a2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v6[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
    v6[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionStateChanged::`vftable';
    v7 = v2;
    v8 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v6);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
}
