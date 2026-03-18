/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14018C150
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x140287D40 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x14028CF88 (HvlpDetermineEnlightenments.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140315304 (RtlGuardCheckLongJumpTarget.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x14075B4B8 (PsLocateSystemDlls.c)
 *     ExpIsKernelCfgActive @ 0x140909454 (ExpIsKernelCfgActive.c)
 *     MmInitSystem @ 0x1409F0DC4 (MmInitSystem.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     KiIsKernelCfgActive @ 0x140A0A828 (KiIsKernelCfgActive.c)
 *     KiAreCodePatchesAllowed @ 0x140A0A844 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
