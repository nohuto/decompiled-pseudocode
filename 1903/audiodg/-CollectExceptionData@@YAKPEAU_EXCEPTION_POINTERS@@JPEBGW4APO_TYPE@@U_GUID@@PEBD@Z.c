/*
 * XREFs of ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140042E64
 * Callers:
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1400083D0 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400087D4 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140012160 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x140012E30 (-Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140012F80 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x1400429D0 (-APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z.c)
 *     ?AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140042BA0 (-AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 *     ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140042C80 (-AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x140042D30 (-CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x140042DD0 (-CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140042F40 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z @ 0x140042FE0 (-GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z.c)
 *     ?GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z @ 0x140043080 (-GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x140043120 (-GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z.c)
 *     ?GetPreferredInputFormat@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1400431C0 (-GetPreferredInputFormat@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140043260 (-GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x140043300 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1400433A0 (-IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x140043440 (-LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z.c)
 *     ?RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z @ 0x140043500 (-RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z.c)
 *     ?Reset@CSystemEffectWrapper@@UEAAJXZ @ 0x1400435A0 (-Reset@CSystemEffectWrapper@@UEAAJXZ.c)
 *     ?SetHeadTracking@CSystemEffectWrapper@@UEAAJH@Z @ 0x140043640 (-SetHeadTracking@CSystemEffectWrapper@@UEAAJH@Z.c)
 *     ?SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z @ 0x1400436E0 (-SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z.c)
 *     ?SetRotation@CSystemEffectWrapper@@UEAAJMMMM@Z @ 0x140043780 (-SetRotation@CSystemEffectWrapper@@UEAAJMMMM@Z.c)
 *     ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x140043920 (-UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ.c)
 * Callees:
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x140042A70 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z.c)
 */

__int64 __fastcall CollectExceptionData(_QWORD *a1, char a2, const WCHAR *a3, int a4, __int128 *pcbData, __int64 a6)
{
  HANDLE CurrentProcess; // rax
  int pvData; // [rsp+40h] [rbp-28h] BYREF
  DWORD pdwType[3]; // [rsp+44h] [rbp-24h] BYREF
  __int128 v11; // [rsp+50h] [rbp-18h] BYREF

  v11 = *pcbData;
  APOTrackAndLogException((__int64)a1, a3, a4, (__int64)&v11, a6, a2);
  LODWORD(pcbData) = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"PreventAudioDGCrashOrReportOnAPOException",
         0x18u,
         pdwType,
         &pvData,
         (LPDWORD)&pcbData)
    || !pvData )
  {
    RtlReportException(*a1, a1[1], 2LL);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, 0xC8u);
  }
  return 1LL;
}
