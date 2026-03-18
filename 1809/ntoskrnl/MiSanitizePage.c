/*
 * XREFs of MiSanitizePage @ 0x1400E63B4
 * Callers:
 *     MmRotatePhysicalView @ 0x14066B930 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B44 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544C0 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  __int64 result; // rax

  result = a1 & 0xFFFFFFFFFLL;
  if ( a1 < 0x1000000000LL )
    return a1;
  return result;
}
