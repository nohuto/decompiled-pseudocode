/*
 * XREFs of ?ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z @ 0x1C0135A98
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003671C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C00367A8 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces32(struct _NDIS_ENUM_INTF32 *a1, size_t Size, unsigned int *a3)
{
  size_t v3; // rbp
  size_t v7; // r14
  char *v8; // r13
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rsi
  char *v11; // r14
  KSPIN_LOCK *p_SpinLock; // r15
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // edx
  __int64 Length; // rax
  char *v17; // r14
  __int64 v18; // rcx
  bool v19; // cf
  KIRQL v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h]
  _BYTE v22[24]; // [rsp+30h] [rbp-58h] BYREF

  v3 = (unsigned int)Size;
  memset(v22, 0, sizeof(v22));
  ndisGetNsiClientInfo((__int64)v22);
  *a3 = 0;
  if ( (unsigned int)v3 < 0x20 )
    return 3221225507LL;
  v21 = v3 - 32;
  v7 = v3;
  memset(a1, 0, v3);
  v8 = (char *)a1 + 16;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v20 = v9;
  if ( ndisMiniDriverList )
  {
    v11 = (char *)a1 + v3;
    do
    {
      p_SpinLock = &v10->Ref.SpinLock;
      KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
      MiniportQueue = v10->MiniportQueue;
      if ( MiniportQueue )
      {
        v14 = v21;
        do
        {
          if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient((__int64)MiniportQueue->IfBlock->Compartment, (__int64)v22, 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v15 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 16;
            *((_DWORD *)a1 + 2) += v15;
            if ( v14 >= v15 )
            {
              ++*(_DWORD *)a1;
              v14 -= v15;
              Length = MiniportQueue->MiniportName.Length;
              v17 = &v11[-Length];
              *(_WORD *)v8 = Length;
              *((_WORD *)v8 + 1) = Length;
              memmove(v17, MiniportQueue->MiniportName.Buffer, (unsigned int)Length);
              *((_DWORD *)v8 + 1) = (_DWORD)v17 - (_DWORD)a1;
              v18 = MiniportQueue->pAdapterInstanceName->Length;
              *((_WORD *)v8 + 4) = v18;
              v11 = &v17[-v18];
              *((_WORD *)v8 + 5) = v18;
              memmove(v11, MiniportQueue->pAdapterInstanceName->Buffer, (unsigned int)v18);
              *((_DWORD *)v8 + 3) = (_DWORD)v11 - (_DWORD)a1;
              v8 += 16;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v21 = v14;
        p_SpinLock = &v10->Ref.SpinLock;
      }
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      v10 = v10->NextDriver;
    }
    while ( v10 );
    v9 = v20;
    v7 = v3;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  v19 = v7 - 32 < *((unsigned int *)a1 + 2);
  *a3 = v3;
  return v19 ? 0x80000005 : 0;
}
