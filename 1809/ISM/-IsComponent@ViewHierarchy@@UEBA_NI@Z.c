/*
 * XREFs of ?IsComponent@ViewHierarchy@@UEBA_NI@Z @ 0x18000E4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ViewHierarchy::IsComponent(ViewHierarchy *this, int a2)
{
  char v2; // r8
  unsigned __int64 v4; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // r10
  __int64 *i; // rax
  __int64 v13; // rcx
  int v15; // [rsp+10h] [rbp+10h]

  v2 = 0;
  v15 = a2;
  v4 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)&v15 + v4++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v4 < 4 );
  v8 = v6 & *((_QWORD *)this + 16);
  v9 = *((_QWORD *)this + 13);
  v10 = (__int64 *)*((_QWORD *)this + 11);
  v11 = 2 * v8;
  for ( i = *(__int64 **)(v9 + 16 * v8); ; i = (__int64 *)*i )
  {
    v13 = *(__int64 **)(v9 + 8 * v11) == v10 ? (__int64)v10 : **(_QWORD **)(v9 + 8 * v11 + 8);
    if ( i == (__int64 *)v13 )
      break;
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_11;
  }
  i = v10;
LABEL_11:
  if ( i != v10 )
    return *((_DWORD *)i + 8) != 0;
  return v2;
}
