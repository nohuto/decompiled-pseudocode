/*
 * XREFs of ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C0034210
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x1C0034100 (NdisAcquireReadWriteLock.c)
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x1C009114C (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireWriteLockPerCpuRefCnt(struct _NDIS_RW_LOCK *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned int v3; // r11d
  unsigned int v5; // r10d
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned int v10; // [rsp+10h] [rbp+10h]

  v3 = *a2;
  *a2 = 0;
  v5 = 0;
  v7 = 0x400 / a3;
  if ( 0x400 / a3 )
  {
    v8 = 0LL;
    do
    {
      v9 = (a3 * v8) >> 2;
      while ( *(_DWORD *)&a1->RefCount[0].cacheLine[4 * v9] )
      {
        v10 = 0;
        do
          ++v10;
        while ( v10 < 0x32 );
      }
      v8 = ++v5;
    }
    while ( v5 < v7 );
  }
  *a2 = v3;
}
