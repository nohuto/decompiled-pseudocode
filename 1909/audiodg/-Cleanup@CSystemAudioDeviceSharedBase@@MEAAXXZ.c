/*
 * XREFs of ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400317A0
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140031454 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140032C90 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x140033660 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140033EB0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046A4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140012D88 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x14002F1D0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x14002FC70 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceSharedBase::Cleanup(CSystemAudioDeviceSharedBase *this)
{
  __int64 v2; // rdx
  _UNKNOWN **v3; // rcx
  __int128 v4; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v4);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids);
  }
  if ( *((_DWORD *)this + 85) )
  {
    CSystemAudioDeviceCollection::Remove(this);
    *((_DWORD *)this + 85) = 0;
  }
  CSystemAudioDeviceBase::Cleanup(this);
  if ( !*((_QWORD *)this + 41) )
    goto LABEL_25;
  if ( !*((_DWORD *)this + 84) )
    goto LABEL_18;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids);
  }
  if ( (int)CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)this, 0) >= 0 )
    goto LABEL_18;
  v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids);
LABEL_18:
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v2 = *((_QWORD *)this + 41);
  if ( v2 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v3 != &WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v3 + 7) & 0x200) == 0 || *((_BYTE *)v3 + 25) < 4u )
    {
LABEL_26:
      if ( v3 != &WPP_GLOBAL_Control && (*((_DWORD *)v3 + 7) & 0x200) != 0 && *((_BYTE *)v3 + 25) >= 4u )
        WPP_SF_((__int64)v3[2], 0xFu, (__int64)&WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids);
      goto LABEL_30;
    }
    WPP_SF_((__int64)v3[2], 0xEu, (__int64)&WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids);
LABEL_25:
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_26;
  }
LABEL_30:
  PublishDeviceGraphWnfState((__int64)v3, v2);
  EtwEventActivityIdControl(4LL, &v4);
}
