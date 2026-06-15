/*
 * XREFs of ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18003034C
 * Callers:
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180017730 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002FDCC (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x180030210 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18003077C (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 */

__int64 __fastcall AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  char v15; // [rsp+50h] [rbp-18h]
  float v16; // [rsp+70h] [rbp+8h] BYREF

  if ( a3 )
    v5 = *a3;
  else
    v5 = 21LL;
  v6 = 2;
  if ( a2 )
    v7 = *a2 == 1;
  else
    v7 = 2;
  v12 = v7;
  v8 = *(_QWORD *)(a1 + 120);
  v11[0] = &CStreamPolicyVolumeClient::`vftable';
  v9 = *(_QWORD *)(a1 + 128);
  v14 = a4;
  v11[1] = v9;
  v13 = v5;
  v15 = 0;
  v16 = 1.0;
  GetPolicyVolumeForAudioStream(v8, v11, v5, &v16);
  if ( v16 < 1.0 )
    return v16 > 0.0;
  return v6;
}
