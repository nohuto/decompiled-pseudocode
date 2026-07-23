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

__int64 __fastcall sub_1800F1080(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rcx

  v2 = 6LL;
  if ( HeapHandle[4] != -571548178 )
    v2 = 36LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = HeapHandle[v2];
    if ( v5 )
      sub_1800EFD34(v5, (__int64)HeapHandle, 0LL, 7u, 0LL);
    v6 = sub_180104220;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  HeapHandle[v2] = (unsigned __int16)sub_180101358(v6);
LABEL_9:
  if ( HeapHandle[4] != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v7 = *((_BYTE *)HeapHandle + 418) == 2 ? *((_QWORD *)HeapHandle + 51) : 0LL;
    if ( v7
      || ((sub_18004B4D4((__int64)HeapHandle), *((_BYTE *)HeapHandle + 418) != 2)
        ? (v7 = 0LL)
        : (v7 = *((_QWORD *)HeapHandle + 51)),
          v7) )
    {
      sub_1801075EC(v7, a2);
    }
  }
  return 0LL;
}
