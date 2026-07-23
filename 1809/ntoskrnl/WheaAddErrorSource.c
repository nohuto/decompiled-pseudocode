/*
 * XREFs of WheaAddErrorSource @ 0x1408DCB40
 * Callers:
 *     <none>
 * Callees:
 *     WheapAddErrorSource @ 0x14017D31C (WheapAddErrorSource.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WheapInitializeErrorSource @ 0x140729038 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheaAddErrorSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdi
  int v5; // ecx
  PVOID PoolWithTag; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // ecx

  v2 = *(_DWORD *)(a1 + 8);
  v4 = a1;
  if ( v2 > 0xD )
    return 3221225659LL;
  v5 = 12592;
  if ( !_bittest(&v5, v2) )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x428uLL, 0x61656857u);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x428uLL);
  v9 = 7LL;
  v10 = v7 + 89;
  do
  {
    *(_OWORD *)v10 = *(_OWORD *)v4;
    *(_OWORD *)(v10 + 16) = *(_OWORD *)(v4 + 16);
    *(_OWORD *)(v10 + 32) = *(_OWORD *)(v4 + 32);
    *(_OWORD *)(v10 + 48) = *(_OWORD *)(v4 + 48);
    *(_OWORD *)(v10 + 64) = *(_OWORD *)(v4 + 64);
    *(_OWORD *)(v10 + 80) = *(_OWORD *)(v4 + 80);
    *(_OWORD *)(v10 + 96) = *(_OWORD *)(v4 + 96);
    v10 += 128LL;
    v11 = *(_OWORD *)(v4 + 112);
    v4 += 128LL;
    *(_OWORD *)(v10 - 16) = v11;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v10 = *(_OWORD *)v4;
  *(_OWORD *)(v10 + 16) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(v10 + 32) = *(_OWORD *)(v4 + 32);
  *(_OWORD *)(v10 + 48) = *(_OWORD *)(v4 + 48);
  *(_QWORD *)(v10 + 64) = *(_QWORD *)(v4 + 64);
  *(_DWORD *)(v10 + 72) = *(_DWORD *)(v4 + 72);
  v13 = WheapInitializeErrorSource(v7);
  if ( v13 )
  {
    ExFreePoolWithTag((PVOID)v7, 0x61656857u);
    return v13;
  }
  else
  {
    *(_QWORD *)(v7 + 56) = a2;
    WheapAddErrorSource(v12, v7);
    v14 = 0;
    if ( WheapInitializationComplete )
    {
      v14 = (*((__int64 (__fastcall **)(__int64, __int64, __int64))&unk_1404DD178 + 6 * *(int *)(v7 + 97)))(
              1LL,
              v7 + 89,
              a2);
      if ( v14 >= 0 )
        *(_DWORD *)(v7 + 101) = 2;
    }
    return (unsigned int)v14;
  }
}
