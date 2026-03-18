/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14018DD30
 * Callers:
 *     KiDetermineRetpolineEnablement @ 0x1401930BC (KiDetermineRetpolineEnablement.c)
 *     HvlGetEnlightenmentInfo @ 0x140273C80 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x140278BB4 (HvlpDetermineEnlightenments.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402F6618 (RtlGuardCheckLongJumpTarget.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x1407560D8 (PsLocateSystemDlls.c)
 *     ExpIsKernelCfgActive @ 0x1408CBAA0 (ExpIsKernelCfgActive.c)
 *     PspInitPhase0 @ 0x1409B10C8 (PspInitPhase0.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     MmInitSystem @ 0x1409BC4E4 (MmInitSystem.c)
 *     KiIsKernelCfgActive @ 0x1409D5B94 (KiIsKernelCfgActive.c)
 *     KiAreCodePatchesAllowed @ 0x1409D5BB0 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140129FF4 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

__int64 VslGetNestedPageProtectionFlags()
{
  int v0; // ecx
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  _BYTE v8[16]; // [rsp+20h] [rbp-88h] BYREF
  int v9; // [rsp+30h] [rbp-78h]

  if ( HvlQueryVsmConnection(0LL)
    && VslpNestedPageProtectionFlags == v0
    && VslpEnterIumSecureMode(2u, 232LL, 0, (__int64)v8) >= 0 )
  {
    v2 = (2 * (v9 & 1) + 4) | 0x20;
    if ( (v9 & 2) == 0 )
      v2 = 2 * (v9 & 1) + 4;
    v3 = v2 | 0x10;
    if ( (v9 & 4) != 0 )
      v3 = v2;
    v4 = v3 | 0x40;
    if ( (v9 & 8) == 0 )
      v4 = v3;
    v5 = v4 | 0x80;
    if ( (v9 & 0x10) == 0 )
      v5 = v4;
    v6 = v5 | 0x100;
    if ( (v9 & 0x20) == 0 )
      v6 = v5;
    v7 = v6 | 0x200;
    if ( (v9 & 0x40) == 0 )
      v7 = v6;
    VslpNestedPageProtectionFlags = v7;
  }
  return (unsigned int)VslpNestedPageProtectionFlags;
}
