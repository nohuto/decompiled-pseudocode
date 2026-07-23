/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14018DE90
 * Callers:
 *     KiDetermineRetpolineEnablement @ 0x14019321C (KiDetermineRetpolineEnablement.c)
 *     HvlGetEnlightenmentInfo @ 0x140273F70 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x140278EA4 (HvlpDetermineEnlightenments.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402F6908 (RtlGuardCheckLongJumpTarget.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x1407572A8 (PsLocateSystemDlls.c)
 *     ExpIsKernelCfgActive @ 0x1408CCD40 (ExpIsKernelCfgActive.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     MmInitSystem @ 0x1409BD4E4 (MmInitSystem.c)
 *     KiIsKernelCfgActive @ 0x1409D6B94 (KiIsKernelCfgActive.c)
 *     KiAreCodePatchesAllowed @ 0x1409D6BB0 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A0E4 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
