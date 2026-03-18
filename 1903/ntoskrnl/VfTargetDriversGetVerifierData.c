/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140973FBC
 * Callers:
 *     VfUtilGetDriverName @ 0x140327630 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x140327650 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x140327670 (VfUtilIsBootDriver.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1409740A8 (VfTargetDriversIsEnabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140983F10 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140328A8C (VfTargetDriversGetNode.c)
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
    if ( dword_140435E68 < 2 )
      return 0LL;
  }
  else if ( !dword_140435E68 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
