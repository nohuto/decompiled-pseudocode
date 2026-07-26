/*
 * XREFs of XRemoveBindingFromLists @ 0x1C0068090
 * Callers:
 *     EthDeleteFilterOpenAdapter @ 0x1C0066E34 (EthDeleteFilterOpenAdapter.c)
 *     nullDeleteFilterOpenAdapter @ 0x1C00688FC (nullDeleteFilterOpenAdapter.c)
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0006370 (NdisAcquireRWLockWrite.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001B314 (ndisUpdateCheckForLoopbackFlag.c)
 */

void __fastcall XRemoveBindingFromLists(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 *i; // rcx
  __int64 v8; // rax
  __int64 *j; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  __int128 *v15; // r10
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)a1[36], &LockState, 0);
  if ( a1[41] == a2 )
  {
    v4 = a1[37];
    a1[41] = 0LL;
    ndisUpdateCheckForLoopbackFlag(v4);
  }
  v5 = *a1;
  v6 = a1;
  while ( v5 )
  {
    if ( v5 == a2 )
    {
      *v6 = *(_QWORD *)(a2 + 424);
      break;
    }
    v6 = (_QWORD *)(v5 + 424);
    v5 = *(_QWORD *)(v5 + 424);
  }
  for ( i = a1 + 1; ; i = (__int64 *)(v8 + 424) )
  {
    v8 = *i;
    if ( !*i )
      break;
    if ( v8 == a2 )
    {
      *i = *(_QWORD *)(a2 + 424);
      --*((_DWORD *)a1 + 80);
      break;
    }
  }
  for ( j = a1 + 2; ; j = (__int64 *)(v10 + 424) )
  {
    v10 = *j;
    if ( !*j )
      break;
    if ( v10 == a2 )
    {
      *j = *(_QWORD *)(a2 + 424);
      break;
    }
  }
  *(_QWORD *)(a2 + 424) = 0LL;
  --*((_DWORD *)a1 + 79);
  v11 = 0;
  v12 = *((_DWORD *)a1 + 6);
  if ( v12 )
  {
    do
    {
      if ( a1[2 * v11 + 5] == a2 )
      {
        v13 = v11 + 1;
        do
        {
          v14 = v11;
          if ( v13 < v12 )
          {
            v15 = (__int128 *)&a1[2 * v13 + 4];
            do
            {
              v16 = *v15++;
              v17 = 2LL * v14++;
              *(_OWORD *)&a1[v17 + 4] = v16;
            }
            while ( v14 + 1 < v12 );
          }
          v18 = 2LL * v14;
          LOWORD(a1[v18 + 4]) = 0;
          a1[v18 + 5] = 0LL;
          v12 = *((_DWORD *)a1 + 6) - 1;
          *((_DWORD *)a1 + 6) = v12;
        }
        while ( a1[2 * v11 + 5] == a2 );
      }
      ++v11;
    }
    while ( v11 < v12 );
  }
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)a1[36], &LockState);
}
