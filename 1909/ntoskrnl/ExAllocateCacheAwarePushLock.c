/*
 * XREFs of ExAllocateCacheAwarePushLock @ 0x14015D550
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     KeGetCurrentNodeNumber @ 0x140107FA0 (KeGetCurrentNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x140118A60 (KeQueryNodeActiveAffinity.c)
 *     ExAllocatePoolWithTagFromNode @ 0x14013D170 (ExAllocatePoolWithTagFromNode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreeCacheAwarePushLock @ 0x1403394C0 (ExFreeCacheAwarePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

ULONG_PTR __fastcall ExAllocateCacheAwarePushLock(char a1)
{
  char v1; // r12
  int v2; // r13d
  POOL_TYPE v3; // edi
  PVOID PoolWithTag; // rax
  ULONG_PTR v5; // rbx
  char *v6; // rdi
  char *v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rax
  ULONG v10; // eax
  ULONG v11; // r15d
  USHORT v12; // ax
  _QWORD *PoolWithTagFromNode; // rax
  _QWORD *v14; // rsi
  ULONG v16; // [rsp+20h] [rbp-68h]
  _QWORD *v17; // [rsp+28h] [rbp-60h]
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  Affinity.Mask = 0LL;
  v1 = 0;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v2 = a1 & 1;
  v3 = v2 != 0 ? NonPagedPoolNx : PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x100uLL, 0x70636C50u);
  v5 = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x100uLL);
  if ( KeNumberNodes == 1 )
  {
    v7 = (char *)ExAllocatePoolWithTag(v3, 0x1000uLL, 0x6C636C50u);
    v6 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x1000uLL);
      v8 = 32LL;
      v9 = (_QWORD *)v5;
      do
      {
        *(_QWORD *)v6 = 0LL;
        v6[8] = 1;
        *((_QWORD *)v6 + 2) = v5;
        *v9 = v6;
        v6 += 128;
        ++v9;
        --v8;
      }
      while ( v8 );
      return v5;
    }
  }
  else
  {
    v10 = KeNumberProcessors_0;
    v11 = 0;
    v16 = KeNumberProcessors_0;
    v17 = (_QWORD *)v5;
    while ( 1 )
    {
      v12 = v11 >= v10 ? KeGetCurrentNodeNumber() : *(_WORD *)(*(_QWORD *)(KeGetPrcb(v11) + 192) + 146LL);
      if ( v2 )
      {
        PoolWithTagFromNode = (_QWORD *)ExAllocatePoolWithTagFromNode(v3, 0x80uLL, 0x6C636C50u, v12);
      }
      else
      {
        KeQueryNodeActiveAffinity(v12, &Affinity, 0LL);
        if ( v1 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v1 = 1;
        }
        PoolWithTagFromNode = ExAllocatePoolWithTag(v3, 0x80uLL, 0x6C636C50u);
      }
      v14 = PoolWithTagFromNode;
      if ( !PoolWithTagFromNode )
        break;
      memset(PoolWithTagFromNode, 0, 0x80uLL);
      v14[2] = v5;
      *v17++ = v14;
      if ( ++v11 >= 0x20 )
      {
        v6 = (char *)v5;
        v5 = 0LL;
        goto LABEL_23;
      }
      v10 = v16;
    }
    v6 = 0LL;
LABEL_23:
    if ( v1 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v5 )
    ExFreeCacheAwarePushLock(v5);
  return (ULONG_PTR)v6;
}
