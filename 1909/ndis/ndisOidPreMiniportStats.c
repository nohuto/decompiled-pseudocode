/*
 * XREFs of ndisOidPreMiniportStats @ 0x1C006D5E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisOidGetStatisticAllProcessors @ 0x1C006BFE4 (ndisOidGetStatisticAllProcessors.c)
 */

char __fastcall ndisOidPreMiniportStats(__int64 *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // eax
  PVOID PoolWithTag; // rax
  void *v12; // rbp
  PVOID v13; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[4];
  v2 = 0;
  v3 = a1;
  v15 = 0LL;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    return v2;
  }
  v4 = a1[2];
  if ( v4 )
    a1 = (__int64 *)(v4 + 32);
  v5 = *a1;
  v6 = *(_DWORD *)(v1 + 32);
  if ( !v4 && *(_BYTE *)(v5 + 32) < 6u )
  {
    if ( !*v3 )
      return v2;
    if ( ndisOidGetStatisticAllProcessors(*(_QWORD *)(v5 + 3152), v6, &v15) != 1 )
    {
      v9 = v15;
LABEL_15:
      v10 = *(_DWORD *)(v1 + 48);
      if ( v10 >= 8 )
      {
        **(_QWORD **)(v1 + 40) = v9;
        *(_DWORD *)(v1 + 52) = 8;
LABEL_19:
        *((_DWORD *)v3 + 10) = 0;
        return 1;
      }
      if ( v10 == 4 )
      {
        **(_DWORD **)(v1 + 40) = v9;
        *(_DWORD *)(v1 + 52) = 4;
        goto LABEL_19;
      }
LABEL_21:
      *(_DWORD *)(v1 + 56) = 8;
      *((_DWORD *)v3 + 10) = -1073676268;
      return 1;
    }
    if ( v6 != 131611 )
      return v2;
    v7 = *(_QWORD *)(v1 + 144);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 56);
      if ( v8 )
      {
        *((_DWORD *)v3 + 10) = v8;
        return 1;
      }
      v9 = *(_QWORD *)(v7 + 40);
      goto LABEL_15;
    }
LABEL_24:
    *((_DWORD *)v3 + 10) = -1073741670;
    return 1;
  }
  if ( *(_DWORD *)(v1 + 48) < 4u )
    goto LABEL_21;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x7172444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_24;
  memset(PoolWithTag, 0, 0x98uLL);
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
  *(_QWORD *)(v1 + 144) = v13;
  if ( v13 )
  {
    memset(v13, 0, 0x40uLL);
    **(_DWORD **)(v1 + 144) = v6;
    *(_QWORD *)(*(_QWORD *)(v1 + 144) + 8LL) = *(_QWORD *)(v1 + 40);
    *(_DWORD *)(*(_QWORD *)(v1 + 144) + 16LL) = *(_DWORD *)(v1 + 48);
    *(_DWORD *)(v1 + 32) = 131334;
    *(_QWORD *)(v1 + 40) = v12;
    *(_DWORD *)(v1 + 48) = 152;
  }
  else
  {
    *((_DWORD *)v3 + 10) = -1073741670;
    v2 = 1;
    ExFreePoolWithTag(v12, 0);
  }
  return v2;
}
