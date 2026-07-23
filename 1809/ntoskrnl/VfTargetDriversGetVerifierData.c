/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1409359E8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x140935AD4 (VfTargetDriversIsEnabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140945540 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x14030AF8C (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140929128 (VfDriverIsKernelImageAddress.c)
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
    if ( dword_14040E788 < 2 )
      return 0LL;
  }
  else if ( !dword_14040E788 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
