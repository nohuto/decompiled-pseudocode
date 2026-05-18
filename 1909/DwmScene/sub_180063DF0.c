/*
 * XREFs of sub_180063DF0 @ 0x180063DF0
 * Callers:
 *     sub_1800642C0 @ 0x1800642C0 (sub_1800642C0.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 * Callees:
 *     sub_180063788 @ 0x180063788 (sub_180063788.c)
 *     sub_180063AC8 @ 0x180063AC8 (sub_180063AC8.c)
 */

__int64 __fastcall sub_180063DF0(__int64 **a1, __int64 a2, unsigned int *a3)
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
    v8 = sub_180063788((__int64)a1, (__int64)&unk_1801DDF08, &v11);
    sub_180063AC8(a1, &v10, v3, (unsigned int *)(v8 + 28), (_QWORD *)v8);
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
