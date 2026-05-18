/*
 * XREFs of sub_180027630 @ 0x180027630
 * Callers:
 *     sub_180029F00 @ 0x180029F00 (sub_180029F00.c)
 *     sub_18002A518 @ 0x18002A518 (sub_18002A518.c)
 * Callees:
 *     sub_1800269A0 @ 0x1800269A0 (sub_1800269A0.c)
 *     sub_180026FE0 @ 0x180026FE0 (sub_180026FE0.c)
 */

__int64 __fastcall sub_180027630(__int64 **a1, __int64 a2, unsigned int *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v11; // [rsp+58h] [rbp+20h] BYREF

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
    v8 = sub_1800269A0((__int64)a1, (__int64)&unk_18014BA83, &v11);
    sub_180026FE0(a1, &v10, v3, (unsigned int *)(v8 + 32), (_QWORD *)v8);
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
