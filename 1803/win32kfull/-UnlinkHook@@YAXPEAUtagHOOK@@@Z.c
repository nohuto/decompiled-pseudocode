/*
 * XREFs of ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C00D7C14
 * Callers:
 *     FreeThreadsWindowHooks @ 0x1C00D71C0 (FreeThreadsWindowHooks.c)
 *     FreeHook @ 0x1C00D7BB0 (FreeHook.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkHook(struct tagHOOK *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // r9
  struct tagHOOK **i; // rcx
  struct tagHOOK *v6; // rax
  struct tagHOOK *v7; // rax

  if ( (*((_DWORD *)a1 + 16) & 1) != 0 )
  {
    v4 = *((_DWORD *)a1 + 12) + 1;
    i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 40LL + 8 * v4);
LABEL_4:
    while ( 1 )
    {
      v6 = *i;
      if ( *i == a1 )
        break;
      if ( !v6 )
        goto LABEL_12;
      i = (struct tagHOOK **)((char *)v6 + 40);
    }
    if ( v6 )
      goto LABEL_6;
LABEL_12:
    for ( i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 8 * v4 + 40);
          ;
          i = (struct tagHOOK **)((char *)v7 + 40) )
    {
      v7 = *i;
      if ( *i == a1 || !v7 )
        break;
    }
LABEL_6:
    *i = (struct tagHOOK *)*((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = 0LL;
    if ( *((_QWORD *)a1 + 10) )
      UnlockObjectAssignment((char *)a1 + 80);
  }
  else
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( v2 )
    {
      v3 = *((_DWORD *)a1 + 12) + 1;
      *((_QWORD *)a1 + 9) = 0LL;
      v4 = v3;
      i = (struct tagHOOK **)(v2 + 8LL * v3 + 896);
      goto LABEL_4;
    }
  }
}
