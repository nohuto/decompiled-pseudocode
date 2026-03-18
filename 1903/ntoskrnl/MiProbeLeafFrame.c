/*
 * XREFs of MiProbeLeafFrame @ 0x1400F0464
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400EF040 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140157AA0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiLockPageLeafPageTable @ 0x14008F490 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFaultInProbeAddress @ 0x1400EEE90 (MiFaultInProbeAddress.c)
 *     MiSetProbePagesAhead @ 0x1400F0A70 (MiSetProbePagesAhead.c)
 */

__int64 __fastcall MiProbeLeafFrame(unsigned __int64 *a1)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ecx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 5;
  v3 = MiLockPageLeafPageTable(a1);
  if ( *v2 == ZeroPte )
    return v3;
  while ( 1 )
  {
    result = MiProbeLeafPteAccess((__int64)a1, &v5);
    if ( (int)result < 0 )
      break;
    if ( !v5 )
    {
      a1[16] = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)(a1 + 5)) >> 12) & 0xFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      return 0LL;
    }
    if ( v5 != 1 )
    {
      result = MiFaultInProbeAddress((__int64)a1);
      if ( (int)result < 0 )
      {
        ++dword_1404662BC;
        return result;
      }
    }
    v3 = MiLockPageLeafPageTable(a1);
    if ( *v2 == ZeroPte )
      return v3;
  }
  return result;
}
