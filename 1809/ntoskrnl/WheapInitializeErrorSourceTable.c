/*
 * XREFs of WheapInitializeErrorSourceTable @ 0x1409AFE9C
 * Callers:
 *     WheaInitialize @ 0x1409B0D68 (WheaInitialize.c)
 * Callees:
 *     WheapAddErrorSource @ 0x14017D31C (WheapAddErrorSource.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WheapInitializeErrorSource @ 0x140729038 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeErrorSourceTable(unsigned int a1, unsigned int *a2)
{
  int v2; // esi
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int *v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int v12; // ebp

  v2 = 0;
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    if ( (int)a2[2] >= 14 )
      goto LABEL_9;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x428uLL, 0x61656857u);
    v6 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x428uLL);
    v7 = v6 + 89;
    v8 = a2;
    v9 = 7LL;
    do
    {
      v10 = *(_OWORD *)v8;
      v8 += 32;
      *(_OWORD *)v7 = v10;
      v7 += 128LL;
      *(_OWORD *)(v7 - 112) = *((_OWORD *)v8 - 7);
      *(_OWORD *)(v7 - 96) = *((_OWORD *)v8 - 6);
      *(_OWORD *)(v7 - 80) = *((_OWORD *)v8 - 5);
      *(_OWORD *)(v7 - 64) = *((_OWORD *)v8 - 4);
      *(_OWORD *)(v7 - 48) = *((_OWORD *)v8 - 3);
      *(_OWORD *)(v7 - 32) = *((_OWORD *)v8 - 2);
      *(_OWORD *)(v7 - 16) = *((_OWORD *)v8 - 1);
      --v9;
    }
    while ( v9 );
    *(_OWORD *)v7 = *(_OWORD *)v8;
    *(_OWORD *)(v7 + 16) = *((_OWORD *)v8 + 1);
    *(_OWORD *)(v7 + 32) = *((_OWORD *)v8 + 2);
    *(_OWORD *)(v7 + 48) = *((_OWORD *)v8 + 3);
    *(_QWORD *)(v7 + 64) = *((_QWORD *)v8 + 8);
    *(_DWORD *)(v7 + 72) = v8[18];
    v11 = 6LL * (int)a2[2];
    if ( *((_BYTE *)&unk_1404DD168 + 48 * (int)a2[2]) )
    {
      v12 = WheapInitializeErrorSource(v6);
      if ( v12 < 0 )
      {
        ExFreePoolWithTag((PVOID)v6, 0x61656857u);
        return (unsigned int)v12;
      }
    }
    else
    {
      *(_DWORD *)(v6 + 40) = a2[2];
      *(_BYTE *)(v6 + 88) = 1;
    }
    WheapAddErrorSource(v11, v6);
    a2 = (unsigned int *)((char *)a2 + *a2);
LABEL_9:
    if ( ++v2 >= a1 )
      return 0LL;
  }
}
