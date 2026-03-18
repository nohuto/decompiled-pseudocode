/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C00C03A0
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00C03E0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C6150 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C6490 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetOPMInformation @ 0x1C00C6870 (NtGdiGetOPMInformation.c)
 *     NtGdiGetOPMRandomNumber @ 0x1C00C68F0 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00C69D0 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx

  result = UserSessionSwitchEnterCrit(a1, a2, a3);
  v4 = result;
  if ( (int)result >= 0 )
  {
    if ( gProtocolType )
      v4 = -1071774240;
    if ( v4 >= 0 )
    {
      return 0LL;
    }
    else
    {
      UserSessionSwitchLeaveCrit(0LL);
      return (unsigned int)v4;
    }
  }
  return result;
}
