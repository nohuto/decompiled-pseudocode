/*
 * XREFs of ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C005EC40
 * Callers:
 *     ndisClearReceiveFilter @ 0x1C005F39C (ndisClearReceiveFilter.c)
 *     ndisClearReceiveFiltersForProtocol @ 0x1C0113BB0 (ndisClearReceiveFiltersForProtocol.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C005EE0C (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisDereferenceReceiveFilter(_QWORD *P)
{
  __int64 v1; // rdi
  unsigned int v3; // esi
  _DWORD *v4; // rbp
  __int64 v5; // r14
  char v6; // r15
  char v7; // r13
  bool v8; // r12
  KIRQL v9; // al
  _QWORD **v10; // rcx
  PVOID *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]
  unsigned int v21; // [rsp+68h] [rbp+10h]

  v1 = P[7];
  v3 = *((_DWORD *)P + 12);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  --*((_DWORD *)P + 20);
  NewIrql = v9;
  v21 = *((_DWORD *)P + 20);
  if ( !v21 )
  {
    v6 = 1;
    *(_BYTE *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)(v1 + 3512)) &= ~(1 << (v3 & 7));
    v4 = (_DWORD *)P[9];
    if ( v4 )
    {
      v10 = (_QWORD **)P[2];
      if ( v10[1] != P + 2 )
        goto LABEL_24;
      v11 = (PVOID *)P[3];
      if ( *v11 != P + 2 )
        goto LABEL_24;
      *v11 = v10;
      v7 = 1;
      v10[1] = v11;
      --v4[21];
    }
    v12 = P[8];
    v13 = *P;
    if ( v12 )
      v5 = P[8];
    v8 = v12 != 0;
    if ( *(_QWORD **)(v13 + 8) == P )
    {
      v14 = (_QWORD *)P[1];
      if ( (_QWORD *)*v14 == P )
      {
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        --*(_DWORD *)(v1 + 3524);
        if ( !P[22] )
        {
LABEL_16:
          ExFreePoolWithTag(P, 0);
          goto LABEL_17;
        }
        v15 = P[4];
        if ( *(_QWORD **)(v15 + 8) == P + 4 )
        {
          v16 = (_QWORD *)P[5];
          if ( (_QWORD *)*v16 == P + 4 )
          {
            *v16 = v15;
            *(_QWORD *)(v15 + 8) = v16;
            --*(_DWORD *)(P[22] + 864LL);
            v17 = P[22];
            v18 = *(_QWORD *)(v17 + 88);
            if ( *(_DWORD *)(v17 + 124) )
              --*(_DWORD *)(v18 + 656);
            else
              --*(_DWORD *)(v18 + 652);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_17:
  *(_QWORD *)(v1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
  if ( v7 )
    ndisDereferenceReceiveQueue(v4);
  if ( v8 )
    ndisMDereferenceOpenUnlocked(v5, 11);
  if ( v6 )
    ndisDereferenceMiniport(v1, 0x46u);
  return v21;
}
