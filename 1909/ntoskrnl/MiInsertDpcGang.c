/*
 * XREFs of MiInsertDpcGang @ 0x1402E8620
 * Callers:
 *     MiDecommitLargePte @ 0x1402C9784 (MiDecommitLargePte.c)
 *     MiDeleteLargeUserPde @ 0x1402E13AC (MiDeleteLargeUserPde.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertDpcGang(__int64 a1, __int64 *a2)
{
  unsigned int v3; // edx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 result; // rax

  v3 = (unsigned int)(unsigned __int16)(*(_WORD *)a1)++ % *(_DWORD *)(a1 + 112);
  v4 = v3;
  v5 = *(_QWORD *)(a1 + 16);
  result = *a2 ^ (*a2 ^ (*(_QWORD *)(v5 + 8 * v4) >> 3)) & 0xFFFFFFFFFFELL;
  *a2 = result;
  if ( !*(_QWORD *)(v5 + 8 * v4) )
    ++*(_WORD *)(a1 + 2);
  *(_QWORD *)(v5 + 8 * v4) = a2;
  return result;
}
