/*
 * XREFs of FsRtlRemoveLargeEntry @ 0x140111188
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x1401105B0 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x140110A20 (FsRtlAddBaseMcbEntryEx.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall FsRtlRemoveLargeEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax

  v5 = *(_DWORD *)(a1 + 4);
  v6 = a2 + a3;
  if ( (unsigned int)v6 < v5 )
  {
    memmove(
      (void *)(*(_QWORD *)(a1 + 16) + 8LL * a2),
      (const void *)(*(_QWORD *)(a1 + 16) + 8 * v6),
      8LL * (v5 - a2 - a3));
    v5 = *(_DWORD *)(a1 + 4);
  }
  result = v5 - a3;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
