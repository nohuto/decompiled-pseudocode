/*
 * XREFs of sub_180036544 @ 0x180036544
 * Callers:
 *     sub_1800313F0 @ 0x1800313F0 (sub_1800313F0.c)
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 *     sub_180062970 @ 0x180062970 (sub_180062970.c)
 *     sub_18007874C @ 0x18007874C (sub_18007874C.c)
 *     sub_18007E008 @ 0x18007E008 (sub_18007E008.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180036544(__int64 a1, int a2)
{
  int v2; // eax
  PVOID ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0 )
    return 0;
  if ( (v2 & 0x20000) == 0 )
    return 1;
  return a2
      && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0LL
      && *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
}
