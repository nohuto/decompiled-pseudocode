/*
 * XREFs of ndisOidPostEthMulticastOid @ 0x1C0025F50
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostOpenSetMulticastList @ 0x1C0015D9C (ndisPostOpenSetMulticastList.c)
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C0015E48 (ndisIfGetRcvAddressFromMiniport.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

void __fastcall ndisOidPostEthMulticastOid(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // r8d
  __int64 v6; // rbx

  v1 = *(_DWORD **)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v1[1] == 1 && (!v3 || !*(_DWORD *)(v3 + 464)) && (!v4 || !*(_DWORD *)(*(_QWORD *)(v4 + 16) + 464LL)) )
  {
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 464) && *(_DWORD *)(a1 + 40) )
      {
        v6 = *(_QWORD *)(v3 + 400);
        memmove(*(void **)(v6 + 376), *(const void **)(v6 + 392), (unsigned int)(6 * *(_DWORD *)(v6 + 400)));
        *(_DWORD *)(v6 + 384) = *(_DWORD *)(v6 + 400);
      }
      ndisIfGetRcvAddressFromMiniport(v3);
    }
    if ( v4 )
    {
      if ( !*(_DWORD *)(*(_QWORD *)(v4 + 16) + 464LL) )
      {
        v5 = *(_DWORD *)(a1 + 40);
        if ( v5 != -1073741637 )
        {
          ndisPostOpenSetMulticastList(v4, (__int64)v1, v5);
          if ( v1[8] == 16843011 )
          {
            v1[8] = v1[36];
            v1[36] = 0;
          }
        }
      }
    }
  }
}
