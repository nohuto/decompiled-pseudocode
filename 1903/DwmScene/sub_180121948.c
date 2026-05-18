/*
 * XREFs of sub_180121948 @ 0x180121948
 * Callers:
 *     sub_1801221A0 @ 0x1801221A0 (sub_1801221A0.c)
 * Callees:
 *     sub_18012086C @ 0x18012086C (sub_18012086C.c)
 *     sub_180120F2C @ 0x180120F2C (sub_180120F2C.c)
 */

__int64 __fastcall sub_180121948(__int64 **a1, __int64 a2, _DWORD *a3)
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
    v8 = (int *)sub_18012086C(a1, (__int64)&unk_18021243A, &v11);
    sub_180120F2C(a1, &v10, v3, v8 + 8, v8);
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
