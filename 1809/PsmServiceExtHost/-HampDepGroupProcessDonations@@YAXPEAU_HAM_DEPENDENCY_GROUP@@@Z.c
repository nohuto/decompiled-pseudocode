/*
 * XREFs of ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002A330
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000B4A8 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18002C3AC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18006C740 (-HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 */

void __fastcall HampDepGroupProcessDonations(struct _HAM_DEPENDENCY_GROUP *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  _QWORD *j; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  _QWORD **v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *i; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r10
  struct _HAM_DEPENDENCY_LINK *v13; // r8
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax

  v1 = (unsigned __int64)a1 + 72;
  v2 = *((_QWORD *)a1 + 10);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      j = 0LL;
    else
      j = (_QWORD *)(v2 ^ (v1 | 1));
  }
  else
  {
    j = (_QWORD *)v2;
  }
  if ( j )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)j[10];
      v5 = 0LL;
      if ( v4 != j + 10 )
        v5 = v4 - 2;
      if ( v5 )
        break;
      v6 = (_QWORD **)j[1];
      v7 = j;
      if ( v6 )
      {
        j = (_QWORD *)j[1];
        for ( i = *v6; i; i = (_QWORD *)*i )
          j = i;
      }
      else
      {
        for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*j == v7 )
            break;
          v7 = j;
        }
      }
      if ( !j )
        return;
    }
    while ( 1 )
    {
      do
      {
        v9 = v5[6];
        v10 = *v5;
        if ( v5[8] == *(_QWORD *)(v9 + 776) )
        {
          if ( (*(_BYTE *)(v10 + 544) & 8) == 0 )
          {
            if ( (*(_DWORD *)(v10 + 112) & 0x80000) != 0 )
            {
              v11 = *(_QWORD *)(v5[7] + 1056LL);
              *(_OWORD *)(v5 + 9) = *(_OWORD *)(v9 + 880);
              *(_OWORD *)(v5 + 11) = *(_OWORD *)(v9 + 896);
              RmpCommitValuesAdd(*(_QWORD *)(v9 + 936), v11, (unsigned __int64 *)(v9 + 936));
            }
            else
            {
              RmpCommitValuesAdd(*(_QWORD *)(v9 + 928), *(_QWORD *)(v10 + 456), (unsigned __int64 *)(v9 + 928));
            }
          }
        }
        else
        {
          LOBYTE(v4) = 1;
          if ( (unsigned int)HampActCanChangeStateTo(*v5, v4) )
            HampActRequestStop(v12, 1u, 10, 6656, 0, 0LL);
        }
        v4 = (_QWORD *)v5[2];
        v13 = (struct _HAM_DEPENDENCY_LINK *)v5[1];
        v5 = 0LL;
        if ( v4 != (_QWORD *)((char *)v13 + 80) )
          v5 = v4 - 2;
      }
      while ( v5 );
      NextLink = HampDepGroupGetNextLink(v13);
      if ( !NextLink )
        break;
      while ( 1 )
      {
        v4 = (_QWORD *)*((_QWORD *)NextLink + 10);
        v5 = 0LL;
        if ( v4 != (_QWORD *)((char *)NextLink + 80) )
          v5 = v4 - 2;
        if ( v5 )
          break;
        NextLink = HampDepGroupGetNextLink(NextLink);
        if ( !NextLink )
          return;
      }
    }
  }
}
