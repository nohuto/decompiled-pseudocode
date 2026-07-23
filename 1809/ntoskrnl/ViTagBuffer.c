/*
 * XREFs of ViTagBuffer @ 0x14092FAEC
 * Callers:
 *     ViAllocateMapRegistersFromFile @ 0x14092D9A0 (ViAllocateMapRegistersFromFile.c)
 *     ViInitializePadding @ 0x14092F094 (ViInitializePadding.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViTagBuffer(__int64 a1, unsigned int a2, char a3)
{
  __int64 result; // rax

  if ( (a3 & 1) != 0 )
    *(_QWORD *)(a1 - 8) = ViDmaVerifierTag;
  if ( (a3 & 2) != 0 )
  {
    result = a2;
    *(_QWORD *)(a2 + a1) = ViDmaVerifierTag;
  }
  return result;
}
