/*
 * XREFs of sub_1800F9888 @ 0x1800F9888
 * Callers:
 *     sub_18007DA44 @ 0x18007DA44 (sub_18007DA44.c)
 *     sub_1800F9478 @ 0x1800F9478 (sub_1800F9478.c)
 *     sub_1800F94C4 @ 0x1800F94C4 (sub_1800F94C4.c)
 *     sub_1800F99E8 @ 0x1800F99E8 (sub_1800F99E8.c)
 *     sub_1800F9A34 @ 0x1800F9A34 (sub_1800F9A34.c)
 *     sub_1800F9D5C @ 0x1800F9D5C (sub_1800F9D5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F9888(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // si
  __int64 v9; // r9
  int v10; // edi

  if ( ((a2 & 0x1F0000) == 0) != ((a3 & 0x1F0000) == 0) )
    return 0LL;
  if ( !*(_DWORD *)(a1 + 88) )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned __int16)((a2 + 12541 * a3) % *(_DWORD *)(a1 + 88));
  v7 = *(_WORD *)(v5 + 2 * v6);
  v8 = *(_WORD *)(v5 + 2 * v6 + 2);
  if ( v7 >= v8 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 104);
  while ( 1 )
  {
    v10 = *(unsigned __int16 *)(v9 + 2LL * v7);
    if ( a2 == v10 && a3 == *(unsigned __int16 *)(v9 + 2LL * v7 + 2) )
      return *(unsigned __int16 *)(v9 + 2LL * v7 + 4);
    if ( (unsigned __int16)(v10 + 10240) <= 0x7FFu )
      break;
LABEL_14:
    v7 += 3;
    if ( v7 >= v8 )
      return 0LL;
  }
  if ( a2 <= 0xFFFF
    || (_WORD)v10 != (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v9 + 2LL * v7 + 2) != (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
    || *(_WORD *)(v9 + 2LL * v7 + 4) != (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v9 + 2LL * v7 + 6) != (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
  {
    v7 += 3;
    goto LABEL_14;
  }
  return *(unsigned __int16 *)(v9 + 2LL * v7 + 10)
       + (((unsigned int)*(unsigned __int16 *)(v9 + 2LL * v7 + 8) - 55287) << 10);
}
