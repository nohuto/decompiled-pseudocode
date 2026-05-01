/*
 * XREFs of CempRcTableGetFirstActiveObject @ 0x180014720
 * Callers:
 *     CemRcTableGetNext @ 0x1800128DC (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18001374C (CemRcTableGetFirst.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013DF0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CempRcTableGetFirstActiveObject(unsigned __int64 a1)
{
  unsigned __int64 i; // rdx
  _QWORD **v3; // rax
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rcx

  i = a1;
  if ( !a1 )
    return 0LL;
  while ( !*(_QWORD *)(i + 24) )
  {
    v3 = *(_QWORD ***)(i + 8);
    v4 = i;
    if ( v3 )
    {
      v5 = *v3;
      for ( i = *(_QWORD *)(i + 8); v5; v5 = (_QWORD *)*v5 )
        i = (unsigned __int64)v5;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v4 )
          break;
        v4 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
    __fastfail(0xEu);
  return i;
}
