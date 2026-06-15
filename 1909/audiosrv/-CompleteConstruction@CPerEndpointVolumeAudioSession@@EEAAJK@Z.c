/*
 * XREFs of ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800CCF50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B840 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x18003D810 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800CEB94 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::CompleteConstruction(const void **this)
{
  const unsigned __int16 *Buffer; // rax
  int MixFormat; // ebx
  struct _GUID v5; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v6; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF

  pv = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids);
  }
  v6 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer(this + 82);
  MixFormat = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                Buffer,
                0LL,
                0LL,
                &v6);
  if ( MixFormat < 0
    || (v5 = GUID_00000000_0000_0000_0000_000000000000,
        MixFormat = CEndpointCharacteristics::GetMixFormat(v6, eHostProcessConnector, &v5, (struct tWAVEFORMATEX **)&pv),
        MixFormat < 0)
    || (MixFormat = CPerEndpointVolumeAudioSession::GetVolumeStrip((CPerEndpointVolumeAudioSession *)this, 0LL),
        MixFormat < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::CompleteConstruction", 1817, MixFormat);
  }
  if ( v6 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v6 + 16LL))(v6);
  CoTaskMemFree(pv);
  return (unsigned int)MixFormat;
}
