/*
 * XREFs of sub_1800F1080 @ 0x1800F1080
 * Callers:
 *     sub_1800EF484 @ 0x1800EF484 (sub_1800EF484.c)
 * Callees:
 *     sub_18004B4D4 @ 0x18004B4D4 (sub_18004B4D4.c)
 *     sub_1800EFD34 @ 0x1800EFD34 (sub_1800EFD34.c)
 *     sub_180101358 @ 0x180101358 (sub_180101358.c)
 *     sub_1801075EC @ 0x1801075EC (sub_1801075EC.c)
 */

__int64 __fastcall sub_1800F1080(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rcx

  v2 = 24LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = 144LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = *(_DWORD *)(v2 + a1);
    if ( v5 )
      sub_1800EFD34(v5, a1, 0LL, 7u, 0LL);
    v6 = sub_180104220;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  *(_DWORD *)(v2 + a1) = (unsigned __int16)sub_180101358(v6);
LABEL_9:
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v7 = *(_BYTE *)(a1 + 418) == 2 ? *(_QWORD *)(a1 + 408) : 0LL;
    if ( v7 || ((sub_18004B4D4(a1), *(_BYTE *)(a1 + 418) != 2) ? (v7 = 0LL) : (v7 = *(_QWORD *)(a1 + 408)), v7) )
      sub_1801075EC(v7, a2);
  }
  return 0LL;
}
