/*
 * XREFs of sub_1800F45D4 @ 0x1800F45D4
 * Callers:
 *     sub_1800F4B70 @ 0x1800F4B70 (sub_1800F4B70.c)
 *     sub_1800F5030 @ 0x1800F5030 (sub_1800F5030.c)
 * Callees:
 *     sub_180063AC8 @ 0x180063AC8 (sub_180063AC8.c)
 *     sub_1800F4594 @ 0x1800F4594 (sub_1800F4594.c)
 */

__int64 __fastcall sub_1800F45D4(__int64 **a1, __int64 a2, unsigned int *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_DWORD *)(v6 + 28) >= v7 )
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
  if ( v3 == *a1 || v7 < *((_DWORD *)v3 + 7) )
  {
LABEL_10:
    v11 = a3;
    v8 = (unsigned int *)sub_1800F4594(a1, (__int64)&unk_18020B11A, &v11);
    sub_180063AC8(a1, &v10, v3, v8 + 7, v8);
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
