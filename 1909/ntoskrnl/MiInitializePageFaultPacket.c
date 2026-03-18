/*
 * XREFs of MiInitializePageFaultPacket @ 0x14009561C
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiPfCompleteInPageSupport @ 0x14009553C (MiPfCompleteInPageSupport.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14005F0B0 (MiFillPteHierarchy.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
