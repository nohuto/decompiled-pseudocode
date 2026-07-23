/*
 * XREFs of KiDetermineRetpolineEnablement @ 0x14019321C
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DE90 (VslGetNestedPageProtectionFlags.c)
 *     KiIsSafeBoot @ 0x1401B4764 (KiIsSafeBoot.c)
 *     KiIsWinPEBoot @ 0x1401B4980 (KiIsWinPEBoot.c)
 */

__int64 __fastcall KiDetermineRetpolineEnablement(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  KiDetectHardwareSpecControlFeatures((__int64)KeGetCurrentPrcb(), 0, (__int64)v3, 0LL);
  result = (unsigned int)KiFeatureSettings;
  if ( (KiFeatureSettings & 5) == 0 )
  {
    result = VslGetNestedPageProtectionFlags();
    if ( (result & 2) == 0 && (v3[0] & 4) != 0 )
    {
      result = KiIsSafeBoot(a1);
      if ( !(_BYTE)result )
      {
        result = KiIsWinPEBoot(a1);
        if ( !(_BYTE)result )
        {
          if ( (KiFeatureSettings & 0x20000) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x1000) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFBFFFFFFFFFFuLL);
          else
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000uLL);
          result = *(_QWORD *)(a1 + 240);
          if ( *(_DWORD *)(result + 3428) )
          {
            if ( !*(_DWORD *)(result + 3424) && (v3[0] & 1) == 0 )
            {
              result = (unsigned int)KiFeatureSettings;
              if ( (KiFeatureSettings & 0x200) != 0 || (KiFeatureSettings & 0x100) == 0 && (v3[0] & 0x200) == 0 )
              {
                result = 0x20000000000LL;
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x20000000000uLL);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
