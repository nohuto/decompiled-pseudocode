/*
 * XREFs of MiProbeLeafFrame @ 0x140094C6C
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400949E0 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140153D54 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiSetProbePagesAhead @ 0x140029710 (MiSetProbePagesAhead.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageLeafPageTable @ 0x140041DD0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiFaultInProbeAddress @ 0x1400936FC (MiFaultInProbeAddress.c)
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
      MiSetProbePagesAhead((__int64)a1);
      return 0LL;
    }
    if ( v5 != 1 )
    {
      result = MiFaultInProbeAddress((__int64)a1);
      if ( (int)result < 0 )
      {
        ++dword_14043A81C;
        return result;
      }
    }
    v3 = MiLockPageLeafPageTable(a1);
    if ( *v2 == ZeroPte )
      return v3;
  }
  return result;
}
