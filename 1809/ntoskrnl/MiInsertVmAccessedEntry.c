/*
 * XREFs of MiInsertVmAccessedEntry @ 0x1402B334C
 * Callers:
 *     MiAgePte @ 0x14006ADC0 (MiAgePte.c)
 *     MiTrimPte @ 0x140087BC0 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x14016E930 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x1402B3B20 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x1402B4160 (MiUpdateOldPte.c)
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
