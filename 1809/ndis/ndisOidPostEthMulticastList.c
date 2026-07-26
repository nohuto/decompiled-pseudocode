/*
 * XREFs of ndisOidPostEthMulticastList @ 0x1C0015CB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostOpenSetMulticastList @ 0x1C0015D9C (ndisPostOpenSetMulticastList.c)
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C0015E48 (ndisIfGetRcvAddressFromMiniport.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

__int64 __fastcall ndisOidPostEthMulticastList(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v5; // r15
  __int64 v6; // rbp
  const void *v7; // rdx
  unsigned int v8; // esi

  v1 = a1[4];
  result = 0LL;
  v3 = a1[3];
  if ( *(_DWORD *)(v1 + 4) != 1 )
    return result;
  v5 = *a1;
  if ( *a1 )
  {
    v6 = *(_QWORD *)(v5 + 400);
    if ( (*(_DWORD *)(v1 + 88) & 0x10000) != 0 )
    {
      *((_DWORD *)a1 + 10) = 0;
    }
    else if ( *((_DWORD *)a1 + 10) )
    {
      v8 = *(_DWORD *)(v6 + 400);
      v7 = *(const void **)(v6 + 392);
      goto LABEL_13;
    }
    v7 = *(const void **)(v1 + 40);
    v8 = *(_DWORD *)(v1 + 48) / 6u;
LABEL_13:
    memmove(*(void **)(v6 + 376), v7, 6 * v8);
    *(_DWORD *)(v6 + 400) = 0;
    *(_DWORD *)(v6 + 384) = v8;
    ndisIfGetRcvAddressFromMiniport(v5);
    result = v5;
  }
  if ( v3 )
  {
    ndisPostOpenSetMulticastList(v3, v1, *((unsigned int *)a1 + 10));
    result = *(_QWORD *)(v3 + 16);
  }
  if ( !result )
    result = *(_QWORD *)(a1[2] + 32);
  if ( *(_UNKNOWN **)(v1 + 104) == &ndisIntReqRestore )
  {
    result = *(_QWORD *)(result + 400);
    *(_DWORD *)(result + 372) = 0;
  }
  return result;
}
