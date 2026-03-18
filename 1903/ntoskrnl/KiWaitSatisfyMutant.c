/*
 * XREFs of KiWaitSatisfyMutant @ 0x14011B4D8
 * Callers:
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiWaitSatisfyAny @ 0x14011AE90 (KiWaitSatisfyAny.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiWaitSatisfyMutant(int *a1, __int64 a2, __int64 a3)
{
  char v3; // r8
  char v4; // al
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *result; // rax
  int v8; // [rsp+0h] [rbp-28h]

  *(_WORD *)(a2 + 484) -= *((unsigned __int8 *)a1 + 49);
  if ( *(_QWORD *)(a3 + 8) == a2 )
    v3 = *(_BYTE *)(a3 + 11882);
  else
    v3 = 0;
  v8 = *a1;
  BYTE2(v8) = v3;
  *a1 = v8;
  v4 = *((_BYTE *)a1 + 48);
  *((_QWORD *)a1 + 5) = a2;
  if ( (v4 & 1) != 0 )
  {
    *((_BYTE *)a1 + 48) = v4 & 0xFE;
    *(_QWORD *)(a2 + 200) |= 0x80uLL;
    v4 = *((_BYTE *)a1 + 48);
  }
  if ( (v4 & 2) != 0 )
    *(_QWORD *)(a2 + 1528) = a1;
  v5 = a2 + 776;
  v6 = a1 + 6;
  result = *(_QWORD **)(v5 + 8);
  if ( *result != v5 )
    __fastfail(3u);
  *v6 = v5;
  v6[1] = result;
  *result = v6;
  *(_QWORD *)(v5 + 8) = v6;
  return result;
}
