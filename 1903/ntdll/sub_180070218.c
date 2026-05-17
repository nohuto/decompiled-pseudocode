/*
 * XREFs of sub_180070218 @ 0x180070218
 * Callers:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_1800CE068 @ 0x1800CE068 (sub_1800CE068.c)
 * Callees:
 *     sub_18007025C @ 0x18007025C (sub_18007025C.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 */

__int64 __fastcall sub_180070218(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      sub_18007025C(*(_QWORD *)(a1 + 48));
    result = ZwUnmapViewOfSection(-1LL);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
