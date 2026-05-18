/*
 * XREFs of sub_1800B35F0 @ 0x1800B35F0
 * Callers:
 *     sub_1800B39B0 @ 0x1800B39B0 (sub_1800B39B0.c)
 * Callees:
 *     sub_1800B2EC4 @ 0x1800B2EC4 (sub_1800B2EC4.c)
 *     sub_1800B31BC @ 0x1800B31BC (sub_1800B31BC.c)
 */

__int64 __fastcall sub_1800B35F0(__int64 **a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = a3[1];
  do
  {
    if ( *(_QWORD *)(v6 + 40) >= v7 )
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
  if ( v3 == *a1 || v7 < v3[5] )
  {
LABEL_10:
    v11 = a3;
    v8 = sub_1800B2EC4(a1, (__int64)&unk_1801F2B2C, &v11);
    sub_1800B31BC((__int64 ***)a1, &v10, v3, (__int64)(v8 + 4), v8);
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
