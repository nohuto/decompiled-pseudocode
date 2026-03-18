/*
 * XREFs of ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C00B42C0
 * Callers:
 *     FreeHook @ 0x1C00B4250 (FreeHook.c)
 *     FreeThreadsWindowHooks @ 0x1C0102DE0 (FreeThreadsWindowHooks.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkHook(struct tagHOOK *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  struct tagHOOK **i; // rcx
  struct tagHOOK *v5; // rax
  struct tagHOOK *v6; // rax

  if ( (*((_DWORD *)a1 + 16) & 1) != 0 )
  {
    v3 = *((int *)a1 + 12);
    i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 8 * (v3 + 6));
LABEL_4:
    while ( 1 )
    {
      v5 = *i;
      if ( *i == a1 )
        break;
      if ( !v5 )
        goto LABEL_11;
      i = (struct tagHOOK **)((char *)v5 + 40);
    }
    if ( v5 )
      goto LABEL_6;
LABEL_11:
    for ( i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 8LL * ((int)v3 + 1) + 40);
          ;
          i = (struct tagHOOK **)((char *)v6 + 40) )
    {
      v6 = *i;
      if ( *i == a1 || !v6 )
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
      v3 = *((int *)a1 + 12);
      *((_QWORD *)a1 + 9) = 0LL;
      i = (struct tagHOOK **)(v2 + 8 * v3 + 912);
      goto LABEL_4;
    }
  }
}
