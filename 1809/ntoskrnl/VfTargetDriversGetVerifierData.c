/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1409349E8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140924F50 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x140934AD4 (VfTargetDriversIsEnabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140944540 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x14030AC9C (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140928128 (VfDriverIsKernelImageAddress.c)
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
    if ( dword_14040D768 < 2 )
      return 0LL;
  }
  else if ( !dword_14040D768 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
