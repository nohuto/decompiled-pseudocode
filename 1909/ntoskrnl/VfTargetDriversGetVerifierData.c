/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140973FBC
 * Callers:
 *     VfUtilGetDriverName @ 0x140327080 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x1403270A0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x1403270C0 (VfUtilIsBootDriver.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1409740A8 (VfTargetDriversIsEnabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140983F10 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403284DC (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140966648 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  _QWORD *Node; // rax

  if ( VfDriverIsKernelImageAddress(a1) )
  {
    if ( !KernelVerifier )
      return 0LL;
  }
  else if ( KernelVerifier )
  {
    if ( dword_140435DE8 < 2 )
      return 0LL;
  }
  else if ( !dword_140435DE8 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
