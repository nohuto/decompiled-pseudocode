/*
 * XREFs of MiInitializePageFaultPacket @ 0x1400A48EC
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiPfCompleteInPageSupport @ 0x1400A480C (MiPfCompleteInPageSupport.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14005F010 (MiFillPteHierarchy.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiInitializePageFaultPacket(__int64 a1, unsigned __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  memset((void *)(a5 + 24), 0, 0x70uLL);
  MiFillPteHierarchy(a2, (unsigned __int64 *)(a5 + 24));
  if ( (a1 & 0x40) != 0 )
  {
    *(_DWORD *)(a5 + 80) |= 0x20u;
    a1 &= ~2uLL;
  }
  *(_QWORD *)(a5 + 8) = a1;
  *(_QWORD *)a5 = a2;
  *(_QWORD *)(a5 + 16) = a4;
  result = (*(_DWORD *)(a5 + 80) ^ (a3 << 6)) & 0x40;
  *(_DWORD *)(a5 + 80) ^= result;
  return result;
}
