/*
 * XREFs of sub_180072DF8 @ 0x180072DF8
 * Callers:
 *     sub_18007C700 @ 0x18007C700 (sub_18007C700.c)
 *     sub_1800E2690 @ 0x1800E2690 (sub_1800E2690.c)
 * Callees:
 *     sub_18006F3BC @ 0x18006F3BC (sub_18006F3BC.c)
 *     sub_180071750 @ 0x180071750 (sub_180071750.c)
 */

__int64 __fastcall sub_180072DF8(__int64 **a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_QWORD *)(v6 + 32) >= v7 )
    {
      v3 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || v7 < v3[4] )
  {
LABEL_10:
    v11 = a3;
    v8 = sub_18006F3BC(a1, (__int64)&unk_1801E0D04, &v11);
    sub_180071750((__int64 ***)a1, &v10, v3, v8 + 4, v8);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
