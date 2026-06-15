/*
 * XREFs of ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x18002025C
 * Callers:
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180011E50 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001C628 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     WPP_SF_dSd @ 0x18001FA7C (WPP_SF_dSd.c)
 */

__int64 __fastcall CPlaybackManager::UseOfResourceAllowed(
        CPlaybackManager *this,
        struct CProcess *a2,
        unsigned int a3,
        enum ResourceType a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi

  v4 = 0;
  v5 = a3;
  if ( a4 )
  {
    if ( a4 == ResourceTypeTheme )
      LOBYTE(v4) = (unsigned int)CApplicationManager::GetSoundLevel((__int64)this, (__int64)a2, 0LL, 0LL, 0LL) != 0;
  }
  else if ( (a3 - 10 <= 1 || a3 - 1 <= 1)
         && (unsigned int)CApplicationManager::GetSoundLevel((__int64)this, (__int64)a2, 0LL, 0LL, 0LL) )
  {
    v4 = 1;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xFu,
      &WPP_1f870d16066833bfd0de78f1b1f0ec8d_Traceguids,
      *((unsigned int *)a2 + 48),
      off_18003A550[v5],
      v4);
  }
  return v4;
}
