/*
 * XREFs of ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C00208C0
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x1C00207A0 (NdisAcquireReadWriteLock.c)
 *     ndisAcquireReadWriteLockX @ 0x1C005D7E0 (ndisAcquireReadWriteLockX.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireWriteLockPerCpuRefCnt(struct _NDIS_RW_LOCK *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // r9d
  unsigned __int64 v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // r8
  unsigned int v9; // [rsp+10h] [rbp+10h]

  v3 = *a2;
  *a2 = 0;
  v4 = 0;
  v6 = 0x400 / a3;
  if ( 0x400 / a3 )
  {
    v7 = 0LL;
    do
    {
      v8 = (a3 * v7) >> 2;
      while ( *(_DWORD *)&a1->RefCount[0].cacheLine[4 * v8] )
      {
        v9 = 0;
        do
          ++v9;
        while ( v9 < 0x32 );
      }
      v7 = ++v4;
    }
    while ( v4 < v6 );
  }
  *a2 = v3;
}
