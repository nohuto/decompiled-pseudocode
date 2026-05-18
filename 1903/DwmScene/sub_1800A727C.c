/*
 * XREFs of sub_1800A727C @ 0x1800A727C
 * Callers:
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 *     sub_1800A8FC0 @ 0x1800A8FC0 (sub_1800A8FC0.c)
 * Callees:
 *     sub_1800A65A4 @ 0x1800A65A4 (sub_1800A65A4.c)
 *     sub_1800A6DE8 @ 0x1800A6DE8 (sub_1800A6DE8.c)
 */

__int64 __fastcall sub_1800A727C(__int64 **a1, __int64 a2, _DWORD *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  int v7; // edx
  int *v8; // rax
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
    v8 = (int *)sub_1800A65A4(a1, &unk_1801F113B, &v11);
    sub_1800A6DE8(a1, &v10, v3, v8 + 8, v8);
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
