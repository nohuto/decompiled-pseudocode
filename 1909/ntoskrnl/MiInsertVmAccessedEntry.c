/*
 * XREFs of MiInsertVmAccessedEntry @ 0x1402C831C
 * Callers:
 *     MiAgePte @ 0x14004CB50 (MiAgePte.c)
 *     MiTrimPte @ 0x14005AAE0 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x1401783E0 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x1402C8AF0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x1402C9170 (MiUpdateOldPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertVmAccessedEntry(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a1;
  if ( (_DWORD)v2 == a1[1] )
    return 1LL;
  *(_QWORD *)&a1[2 * v2 + 2] = a2 & 0xFFFFFFFFFFFFF000uLL;
  result = 0LL;
  ++*a1;
  return result;
}
