/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001F6CC
 * Callers:
 *     ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x180023BCC (-UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z.c)
 *     PbmGetSoundLevel @ 0x1800242D0 (PbmGetSoundLevel.c)
 * Callees:
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180017730 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001E3AC (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001F308 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x180028A5C (-TsSessionIdIsMuted@@YAHK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(
        __int64 a1,
        __int64 a2,
        enum AUDIO_DIRECTION *a3,
        enum _AUDIO_STREAM_CATEGORY *a4,
        unsigned __int16 *a5)
{
  CApplicationManager *v8; // rsi
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  struct CApplication *v10; // rdx
  unsigned int SoundLevel; // ebx
  struct CApplication *v13; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+80h] [rbp+18h]

  HIDWORD(v13) = HIDWORD(a1);
  v8 = g_ApplicationManager;
  LODWORD(v13) = 2;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v14 = v9;
  if ( a3 )
  {
    CProcess::GetSoundLevel((CProcess *)(a2 + 16), a3, a4, a5, (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v13);
    SoundLevel = (unsigned int)v13;
  }
  else
  {
    v10 = *(struct CApplication **)(a2 + 256);
    v13 = v10;
    if ( !v10 )
    {
      if ( (int)CApplicationManager::GetApplication(
                  v8,
                  *(const unsigned __int16 **)(a2 + 208),
                  *(_QWORD *)(a2 + 240),
                  *(_DWORD *)(a2 + 196),
                  &v13,
                  0,
                  0LL) < 0 )
      {
        SoundLevel = (unsigned int)TsSessionIdIsMuted(*(_DWORD *)(a2 + 196)) == 0 ? 2 : 0;
        goto LABEL_8;
      }
      v10 = v13;
    }
    SoundLevel = CApplicationManager::GetSoundLevel((__int64)v8, v10);
  }
LABEL_8:
  if ( v9 )
    LeaveCriticalSection(v9);
  return SoundLevel;
}
