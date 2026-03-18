/*
 * XREFs of MiProbeLeafFrame @ 0x1400DDB74
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400DE3F0 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140158140 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageLeafPageTable @ 0x1400CCA80 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1400DE180 (MiSetProbePagesAhead.c)
 *     MiFaultInProbeAddress @ 0x1400DE680 (MiFaultInProbeAddress.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a1 + 40);
  v3 = MiLockPageLeafPageTable(a1);
  if ( *v2 == ZeroPte )
    return v3;
  while ( 1 )
  {
    result = MiProbeLeafPteAccess(a1, &v6);
    if ( (int)result < 0 )
      break;
    if ( !v6 )
    {
      *(_QWORD *)(a1 + 128) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1 + 40) >> 12) & 0xFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      return 0LL;
    }
    if ( v6 != 1 )
    {
      result = MiFaultInProbeAddress(a1, v5);
      if ( (int)result < 0 )
      {
        ++dword_140465FBC;
        return result;
      }
    }
    v3 = MiLockPageLeafPageTable(a1);
    if ( *v2 == ZeroPte )
      return v3;
  }
  return result;
}
