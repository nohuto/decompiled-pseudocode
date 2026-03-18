/*
 * XREFs of KiDetermineRetpolineEnablement @ 0x14019C97C
 * Callers:
 *     KiInitializeBootStructures @ 0x14059FFA0 (KiInitializeBootStructures.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x14018BF94 (KiDetectHardwareSpecControlFeatures.c)
 *     strstr @ 0x14019FD30 (strstr.c)
 */

char __fastcall KiDetermineRetpolineEnablement(__int64 a1)
{
  char *v2; // rax
  const char *v3; // rcx
  const char *v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0uLL;
  KiDetectHardwareSpecControlFeatures((__int64)KeGetCurrentPrcb(), 0, &v6, 0LL);
  LOBYTE(v2) = KiFeatureSettings;
  if ( (KiFeatureSettings & 5) == 0 && (v6 & 4) != 0 )
  {
    v3 = *(const char **)(a1 + 216);
    if ( !v3 || (v2 = strstr(v3, "SAFEBOOT:")) == 0LL )
    {
      v4 = *(const char **)(a1 + 216);
      if ( !v4 || (v2 = strstr(v4, "MININT")) == 0LL )
      {
        if ( (KiFeatureSettings & 0x20000) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x1000) != 0 )
          _InterlockedAnd((volatile signed __int32 *)&KiSpeculationFeatures, 0xFBFFFFFF);
        else
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x4000000u);
        v2 = *(char **)(a1 + 240);
        if ( *((_DWORD *)v2 + 863) )
        {
          if ( !*((_DWORD *)v2 + 862) )
          {
            LOBYTE(v2) = v6;
            if ( (v6 & 1) == 0 )
            {
              if ( (KiFeatureSettings & 0x200) != 0
                || (LOBYTE(v2) = (v6 & 0x200) == 0, (((KiFeatureSettings & 0x100) == 0) & (unsigned __int8)v2) != 0) )
              {
                _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x2000000u);
              }
            }
          }
        }
      }
    }
  }
  return (char)v2;
}
