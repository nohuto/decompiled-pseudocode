/*
 * XREFs of MiInitializePageFaultPacket @ 0x140096158
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14001A0B8 (MiPfCompleteInPageSupport.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiInitializePageFaultPacket(__int64 a1, __int64 a2, char a3, __int64 a4, char *a5)
{
  __int64 result; // rax

  memset(a5, 0, 0x88uLL);
  MiFillPteHierarchy(a2, a5 + 24);
  if ( (a1 & 0x40) != 0 )
  {
    *((_DWORD *)a5 + 20) |= 0x20u;
    a1 &= ~2uLL;
  }
  *((_QWORD *)a5 + 1) = a1;
  *(_QWORD *)a5 = a2;
  *((_QWORD *)a5 + 2) = a4;
  result = (*((_DWORD *)a5 + 20) ^ (a3 << 6)) & 0x40;
  *((_DWORD *)a5 + 20) ^= result;
  return result;
}
