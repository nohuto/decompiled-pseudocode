/*
 * XREFs of sub_180096464 @ 0x180096464
 * Callers:
 *     sub_180099C60 @ 0x180099C60 (sub_180099C60.c)
 * Callees:
 *     sub_180096508 @ 0x180096508 (sub_180096508.c)
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 */

__int64 __fastcall sub_180096464(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // r10d
  int v6; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(a1 + 300) = v2;
  v5 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 120) = v5;
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 112) = v6;
  *(_DWORD *)(a1 + 116) = v6;
  *(_DWORD *)(a1 + 124) = v5;
  *(_WORD *)(a1 + 308) = *(_WORD *)(a2 + 112);
  sub_18011D988(&unk_18025C718, 3LL, "Mesh of type %d loaded with %lu vertices and %lu indices", v2, v5, v6);
  result = *(unsigned int *)(a2 + 28);
  if ( (result & 0x800) != 0 )
    result = sub_180096948(
               a1,
               *(_DWORD *)(a1 + 116),
               *(_DWORD *)(a1 + 124),
               *(_DWORD *)(a1 + 300),
               *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a1 + 120) )
    return sub_180096508(a1, a2);
  return result;
}
