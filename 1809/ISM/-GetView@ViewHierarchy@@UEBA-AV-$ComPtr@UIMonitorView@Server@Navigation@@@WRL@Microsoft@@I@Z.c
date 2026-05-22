/*
 * XREFs of ?GetView@ViewHierarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@I@Z @ 0x18000E590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall ViewHierarchy::GetView(__int64 a1, char *a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // rdx
  __int64 v13; // r10
  __int64 *j; // rax
  __int64 v15; // rcx
  char v17; // [rsp+30h] [rbp+8h] BYREF
  int v18; // [rsp+40h] [rbp+18h]

  v18 = a3;
  if ( *(_QWORD *)(a1 + 48) || *(_DWORD *)(a1 + 144) == 1 )
  {
    v6 = 0LL;
    v7 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
    {
      v9 = *((unsigned __int8 *)&v18 + i);
      v7 = 0x100000001B3LL * (v9 ^ v7);
    }
    v10 = v7 & *(_QWORD *)(a1 + 128);
    v11 = *(_QWORD *)(a1 + 104);
    v12 = *(__int64 **)(a1 + 88);
    v13 = 2 * v10;
    for ( j = *(__int64 **)(v11 + 16 * v10); ; j = (__int64 *)*j )
    {
      v15 = *(__int64 **)(v11 + 8 * v13) == v12 ? (__int64)v12 : **(_QWORD **)(v11 + 8 * v13 + 8);
      if ( j == (__int64 *)v15 )
        break;
      if ( *((_DWORD *)j + 4) == a3 )
        goto LABEL_14;
    }
    j = v12;
LABEL_14:
    if ( j != v12 && j[3] )
    {
      v6 = j[3];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    *(_QWORD *)a2 = 0LL;
    if ( a2 != &v17 )
    {
      *(_QWORD *)a2 = v6;
      v6 = 0LL;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
  }
  return a2;
}
