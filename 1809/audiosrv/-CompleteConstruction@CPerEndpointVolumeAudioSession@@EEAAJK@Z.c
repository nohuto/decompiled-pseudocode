/*
 * XREFs of ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800BEBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800069F0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800C0864 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::CompleteConstruction(CPerEndpointVolumeAudioSession *this)
{
  const unsigned __int16 *Buffer; // rax
  int MixFormat; // ebx
  int (*v4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v6; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v7; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF

  pv = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids);
  }
  v7 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 696));
  MixFormat = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                Buffer,
                0LL,
                0LL,
                &v7);
  if ( MixFormat < 0
    || (v6 = GUID_00000000_0000_0000_0000_000000000000,
        MixFormat = CEndpointCharacteristics::GetMixFormat(
                      v7,
                      eHostProcessConnector,
                      &v6,
                      v4,
                      (struct tWAVEFORMATEX **)&pv),
        MixFormat < 0)
    || (MixFormat = CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL), MixFormat < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::CompleteConstruction", 1818, MixFormat);
  }
  if ( v7 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL))(v7);
  CoTaskMemFree(pv);
  return (unsigned int)MixFormat;
}
