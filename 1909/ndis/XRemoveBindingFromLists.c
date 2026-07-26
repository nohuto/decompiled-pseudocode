/*
 * XREFs of XRemoveBindingFromLists @ 0x1C00A3064
 * Callers:
 *     EthDeleteFilterOpenAdapter @ 0x1C00A1A40 (EthDeleteFilterOpenAdapter.c)
 *     nullDeleteFilterOpenAdapter @ 0x1C00A39AC (nullDeleteFilterOpenAdapter.c)
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C000E020 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E38 (ndisUpdateCheckForLoopbackFlag.c)
 */

void __fastcall XRemoveBindingFromLists(__int64 *a1, __int64 a2)
{
  struct _NDIS_RW_LOCK_EX *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 *i; // rcx
  __int64 v9; // rax
  __int64 *j; // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  __int128 *v16; // r10
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  v4 = (struct _NDIS_RW_LOCK_EX *)a1[36];
  LockState.Flags = 0;
  NdisAcquireRWLockWrite(v4, &LockState, 0);
  if ( a1[41] == a2 )
  {
    v5 = a1[37];
    a1[41] = 0LL;
    ndisUpdateCheckForLoopbackFlag(v5);
  }
  v6 = *a1;
  v7 = a1;
  while ( v6 )
  {
    if ( v6 == a2 )
    {
      *v7 = *(_QWORD *)(a2 + 424);
      break;
    }
    v7 = (_QWORD *)(v6 + 424);
    v6 = *(_QWORD *)(v6 + 424);
  }
  for ( i = a1 + 1; ; i = (__int64 *)(v9 + 424) )
  {
    v9 = *i;
    if ( !*i )
      break;
    if ( v9 == a2 )
    {
      *i = *(_QWORD *)(a2 + 424);
      --*((_DWORD *)a1 + 80);
      break;
    }
  }
  for ( j = a1 + 2; ; j = (__int64 *)(v11 + 424) )
  {
    v11 = *j;
    if ( !*j )
      break;
    if ( v11 == a2 )
    {
      *j = *(_QWORD *)(a2 + 424);
      break;
    }
  }
  *(_QWORD *)(a2 + 424) = 0LL;
  --*((_DWORD *)a1 + 79);
  v12 = 0;
  v13 = *((_DWORD *)a1 + 6);
  if ( v13 )
  {
    do
    {
      if ( a1[2 * v12 + 5] == a2 )
      {
        v14 = v12 + 1;
        do
        {
          v15 = v12;
          if ( v14 < v13 )
          {
            v16 = (__int128 *)&a1[2 * v14 + 4];
            do
            {
              v17 = *v16++;
              v18 = 2LL * v15++;
              *(_OWORD *)&a1[v18 + 4] = v17;
            }
            while ( v15 + 1 < v13 );
          }
          v19 = 2LL * v15;
          LOWORD(a1[v19 + 4]) = 0;
          a1[v19 + 5] = 0LL;
          v13 = *((_DWORD *)a1 + 6) - 1;
          *((_DWORD *)a1 + 6) = v13;
        }
        while ( a1[2 * v12 + 5] == a2 );
      }
      ++v12;
    }
    while ( v12 < v13 );
  }
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)a1[36], &LockState);
}
