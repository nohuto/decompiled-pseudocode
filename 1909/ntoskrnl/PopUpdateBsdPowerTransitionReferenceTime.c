/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1408A207C
 * Callers:
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140114110 (RtlComputeCrc32.c)
 */

ULONG PopUpdateBsdPowerTransitionReferenceTime()
{
  ULONG result; // eax

  *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, &Buffer, 8u);
  *((_DWORD *)&Buffer + 2) = result;
  return result;
}
