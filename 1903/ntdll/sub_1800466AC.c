/*
 * XREFs of sub_1800466AC @ 0x1800466AC
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_18004580C @ 0x18004580C (sub_18004580C.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_180106954 @ 0x180106954 (sub_180106954.c)
 * Callees:
 *     sub_180045AF0 @ 0x180045AF0 (sub_180045AF0.c)
 */

__int64 *__fastcall sub_1800466AC(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  int v6; // r9d
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 312);
  if ( a2 < *(unsigned int *)(v2 + 8) )
  {
LABEL_4:
    v6 = a2;
  }
  else
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)v2;
      if ( !*(_QWORD *)v2 )
        break;
      v2 = *(_QWORD *)v2;
      if ( a2 < *(unsigned int *)(v5 + 8) )
        goto LABEL_4;
    }
    v6 = *(_DWORD *)(v2 + 8) - 1;
  }
  while ( 1 )
  {
    result = sub_180045AF0(a1, v2, 1, v6, a2);
    if ( result )
      break;
    v2 = *(_QWORD *)v2;
    v6 = *(_DWORD *)(v2 + 24);
  }
  return result;
}
