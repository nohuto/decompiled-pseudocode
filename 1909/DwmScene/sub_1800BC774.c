/*
 * XREFs of sub_1800BC774 @ 0x1800BC774
 * Callers:
 *     sub_1800BF880 @ 0x1800BF880 (sub_1800BF880.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 * Callees:
 *     sub_180032564 @ 0x180032564 (sub_180032564.c)
 *     sub_180070508 @ 0x180070508 (sub_180070508.c)
 */

__int64 __fastcall sub_1800BC774(__int64 **a1, __int64 a2, _DWORD *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_DWORD *)(v6 + 32) >= v7 )
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
  if ( v3 == *a1 || v7 < *((_DWORD *)v3 + 8) )
  {
LABEL_10:
    v11 = a3;
    v8 = sub_180032564((__int64)a1, (__int64)&unk_1801F5792, &v11);
    sub_180070508(a1, &v10, v3, (int *)(v8 + 32), (_QWORD *)v8);
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
