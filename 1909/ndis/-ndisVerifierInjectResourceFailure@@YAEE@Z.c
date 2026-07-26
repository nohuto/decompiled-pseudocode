/*
 * XREFs of ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00A9AF8
 * Callers:
 *     ?ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z @ 0x1C00A9640 (-ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z.c)
 *     ?ndisVerifierAllocateMemoryWithTag@@YAHPEAPEAXIK@Z @ 0x1C00A9720 (-ndisVerifierAllocateMemoryWithTag@@YAHPEAPEAXIK@Z.c)
 *     ?ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z @ 0x1C00A9900 (-ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z.c)
 *     ?ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z @ 0x1C00A9960 (-ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisVerifierInjectResourceFailure()
{
  if ( (ndisVerifierLevel & 4) == 0 )
    return 0;
  if ( !VerifierSystemSufficientlyBooted )
    VerifierSystemSufficientlyBooted = MEMORY[0xFFFFF78000000014] > VerifierRequiredTimeSinceBoot.QuadPart
                                                                  + KeBootTime.QuadPart;
  if ( VerifierSystemSufficientlyBooted != 1 || (MEMORY[0xFFFFF78000000320] & 7) != 0 )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)&ndisVeriferFailedAllocations);
  return 1;
}
