/*
 * XREFs of RtlMarkHiberPhase @ 0x1402FAF30
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14056C53C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 *     PopSetRange @ 0x140144A6C (PopSetRange.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void RtlMarkHiberPhase()
{
  ULONG_PTR v0; // rsi
  unsigned int v1; // eax
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 v4; // r14
  PHYSICAL_ADDRESS v5; // r15
  __int64 j; // rbp

  if ( (KiBugCheckActive & 3) == 0 )
  {
    v0 = BugCheckParameter4;
    if ( !BugCheckParameter4 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v1 = *(_DWORD *)(BugCheckParameter4 + 184);
    if ( v1 == 8 )
    {
      v2 = (unsigned __int64)"DatabaseEx" >> 12;
      for ( i = (unsigned __int64)XpressHashFunction >> 12; i < v2; i += j )
      {
        v4 = i + 1;
        v5.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(i << 12)).QuadPart >> 12;
        for ( j = 1LL; v4 < v2; ++v4 )
        {
          if ( v4 + v5.QuadPart - i != (unsigned __int64)MmGetPhysicalAddress((PVOID)((i << 12) + (j << 12))).QuadPart >> 12 )
            break;
          ++j;
        }
        PopSetRange(v0, 0x10000, v5.QuadPart, j, 0x73727058u);
      }
    }
    else if ( v1 != 9 )
    {
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v1, 0LL);
    }
  }
  PoSetHiberRange(0LL, 0x10000u, XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
