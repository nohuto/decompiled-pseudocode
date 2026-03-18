/*
 * XREFs of MiStoreSetEvictPageFile @ 0x140158EA8
 * Callers:
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 */

LONG __fastcall MiStoreSetEvictPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 256);
  _bittestandreset(*(signed __int32 **)(*(_QWORD *)(a1 + 112) + 32LL), a2);
  if ( ++*(_DWORD *)(a1 + 200) == 256 )
    return KeSetEvent((PRKEVENT)(v2 + 1184), 0, 0);
  result = MiSufficientAvailablePages(v2, 0xA0uLL);
  if ( !result )
    return KeSetEvent((PRKEVENT)(v2 + 1184), 0, 0);
  return result;
}
