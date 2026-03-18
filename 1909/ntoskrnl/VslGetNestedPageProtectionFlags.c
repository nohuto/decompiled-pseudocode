/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14018C9D0
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x140287AA0 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x14028CCE8 (HvlpDetermineEnlightenments.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140314D54 (RtlGuardCheckLongJumpTarget.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x14075FC3C (PsLocateSystemDlls.c)
 *     ExpIsKernelCfgActive @ 0x140908EB4 (ExpIsKernelCfgActive.c)
 *     MmInitSystem @ 0x1409F0CD4 (MmInitSystem.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 *     KiIsKernelCfgActive @ 0x140A0AD54 (KiIsKernelCfgActive.c)
 *     KiAreCodePatchesAllowed @ 0x140A0AD70 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012B22C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  _DWORD v8[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL)
    && VslpNestedPageProtectionFlags == v0
    && VslpEnterIumSecureMode(2, 249LL, 0LL, (__int64)v8) >= 0 )
  {
    v2 = (2 * (v8[4] & 1) + 4) | 0x20;
    if ( (v8[4] & 2) == 0 )
      v2 = 2 * (v8[4] & 1) + 4;
    v3 = v2 | 0x10;
    if ( (v8[4] & 4) != 0 )
      v3 = v2;
    v4 = v3 | 0x40;
    if ( (v8[4] & 8) == 0 )
      v4 = v3;
    v5 = v4 | 0x80;
    if ( (v8[4] & 0x10) == 0 )
      v5 = v4;
    v6 = v5 | 0x100;
    if ( (v8[4] & 0x20) == 0 )
      v6 = v5;
    v7 = v6 | 0x200;
    if ( (v8[4] & 0x40) == 0 )
      v7 = v6;
    VslpNestedPageProtectionFlags = v7;
  }
  return (unsigned int)VslpNestedPageProtectionFlags;
}
