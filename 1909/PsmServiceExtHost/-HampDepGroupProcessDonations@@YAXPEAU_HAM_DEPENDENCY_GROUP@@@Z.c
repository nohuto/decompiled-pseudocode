/*
 * XREFs of ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002D1F0
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C380 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800029F4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000C3E0 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18003A8FC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18007A940 (-HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
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
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  struct _HAM_DEPENDENCY_LINK *v14; // rcx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax
  __int64 v16; // r10

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
        if ( v5[8] == *(_QWORD *)(v9 + 800) )
        {
          if ( (*(_BYTE *)(v10 + 544) & 8) == 0 )
          {
            if ( (*(_DWORD *)(v10 + 112) & 0x80000) != 0 )
            {
              v12 = 960LL;
              v13 = *(_QWORD *)(v5[7] + 1112LL);
              *(_OWORD *)(v5 + 9) = *(_OWORD *)(v9 + 904);
              *(_OWORD *)(v5 + 11) = *(_OWORD *)(v9 + 920);
              v11 = *(_QWORD *)(v9 + 960);
            }
            else
            {
              v11 = *(_QWORD *)(v9 + 952);
              v12 = 952LL;
              v13 = *(_QWORD *)(v10 + 456);
            }
            RmpCommitValuesAdd(v11, v13, (unsigned __int64 *)(v9 + v12));
          }
        }
        else
        {
          LOBYTE(v4) = 1;
          if ( (unsigned int)HampActCanChangeStateTo(*v5, v4) )
            HampActRequestStopEx(v16, 1u, 10, 0, 6912, 0, 0LL);
        }
        v14 = (struct _HAM_DEPENDENCY_LINK *)v5[1];
        v4 = (_QWORD *)v5[2];
        if ( v4 == (_QWORD *)((char *)v14 + 80) )
          break;
        v5 = v4 - 2;
      }
      while ( v4 != (_QWORD *)16 );
      NextLink = HampDepGroupGetNextLink(v14);
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
