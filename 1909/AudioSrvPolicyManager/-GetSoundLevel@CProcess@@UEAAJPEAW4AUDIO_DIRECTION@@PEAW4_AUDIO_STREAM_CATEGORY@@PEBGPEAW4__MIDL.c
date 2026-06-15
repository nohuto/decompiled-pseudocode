/*
 * XREFs of ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180014580
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001C638 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x180015934 (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18002D188 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 */

__int64 __fastcall CProcess::GetSoundLevel(
        CProcess *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a5)
{
  enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *v5; // r15
  int SoundLevelForExtendedAudioCategory; // ebx
  __int64 *v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 **v16; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a5;
  SoundLevelForExtendedAudioCategory = 0;
  if ( !a5 )
    return 2147500035LL;
  v11 = (__int64 *)((char *)this + 720);
  v12 = *((_QWORD *)this + 90);
  if ( !v12 )
  {
    a5 = (CProcess *)((char *)this - 16);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
            v11,
            a2,
            &a5);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1281,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
    v12 = *v11;
  }
  if ( !a3 )
  {
    v16 = 0LL;
    goto LABEL_10;
  }
  if ( *a3 <= (unsigned int)AudioCategory_Media )
  {
    SLODWORD(a5) = *a3;
    v16 = &a5;
LABEL_10:
    SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                           v12,
                                           a2,
                                           v16,
                                           a4);
  }
  *(_DWORD *)v5 = SoundLevelForExtendedAudioCategory;
  return 2147500035LL;
}
