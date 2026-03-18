/*
 * XREFs of MiInsertVmAccessedEntry @ 0x1402B305C
 * Callers:
 *     MiAgePte @ 0x14006ADD0 (MiAgePte.c)
 *     MiTrimPte @ 0x140087BD0 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x14016E810 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x1402B3830 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x1402B3E70 (MiUpdateOldPte.c)
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
