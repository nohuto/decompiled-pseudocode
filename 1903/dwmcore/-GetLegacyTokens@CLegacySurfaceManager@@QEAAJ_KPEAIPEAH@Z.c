/*
 * XREFs of ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x1800223FC
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z @ 0x18008D350 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 */

__int64 __fastcall CLegacySurfaceManager::GetLegacyTokens(
        CLegacySurfaceManager *this,
        __int64 a2,
        unsigned int *a3,
        int *a4)
{
  unsigned int v5; // ebx
  int FrameLegacyTokens; // eax
  unsigned int v7; // ecx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v5 = 0;
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&v9, a3, a4);
  if ( FrameLegacyTokens < 0 )
  {
    v5 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Eu, 0LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
      v5,
      *a3);
  return v5;
}
