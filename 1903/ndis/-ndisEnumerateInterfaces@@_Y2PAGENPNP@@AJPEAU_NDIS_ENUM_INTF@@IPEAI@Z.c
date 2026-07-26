/*
 * XREFs of ?ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z @ 0x1C012FB08
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003672C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C00367B8 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces(struct _NDIS_ENUM_INTF *a1, size_t Size, unsigned int *a3)
{
  __int64 v3; // rbp
  __int64 v6; // r14
  char *v7; // r13
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rsi
  char *v10; // r14
  KSPIN_LOCK *p_SpinLock; // r15
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v13; // r15d
  unsigned int v14; // edx
  char *v15; // r14
  unsigned int Length; // eax
  unsigned int v17; // ecx
  bool v18; // cf
  KIRQL v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h]
  _BYTE v22[24]; // [rsp+30h] [rbp-58h] BYREF

  v3 = (unsigned int)Size;
  memset(v22, 0, sizeof(v22));
  ndisGetNsiClientInfo((__int64)v22);
  *a3 = 0;
  if ( (unsigned int)v3 < 0x30 )
    return 3221225507LL;
  v21 = v3 - 48;
  v6 = (unsigned int)v3;
  memset(a1, 0, (unsigned int)v3);
  v7 = (char *)a1 + 16;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v9 = ndisMiniDriverList;
  v20 = v8;
  if ( ndisMiniDriverList )
  {
    v10 = (char *)a1 + v3;
    do
    {
      p_SpinLock = &v9->Ref.SpinLock;
      KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
      MiniportQueue = v9->MiniportQueue;
      if ( MiniportQueue )
      {
        v13 = v21;
        do
        {
          if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient((__int64)MiniportQueue->IfBlock->Compartment, (__int64)v22, 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v14 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 32;
            *((_DWORD *)a1 + 2) += v14;
            if ( v13 >= v14 )
            {
              ++*(_DWORD *)a1;
              v13 -= v14;
              v15 = &v10[-MiniportQueue->MiniportName.Length];
              *((_QWORD *)v7 + 1) = v15;
              Length = MiniportQueue->MiniportName.Length;
              *(_WORD *)v7 = Length;
              *((_WORD *)v7 + 1) = Length;
              memmove(v15, MiniportQueue->MiniportName.Buffer, Length);
              *((_QWORD *)v7 + 1) = (*((_QWORD *)v7 + 1) - (_QWORD)a1) & -(__int64)(*((_QWORD *)v7 + 1) != 0LL);
              v10 = &v15[-MiniportQueue->pAdapterInstanceName->Length];
              *((_QWORD *)v7 + 3) = v10;
              v17 = MiniportQueue->pAdapterInstanceName->Length;
              *((_WORD *)v7 + 8) = v17;
              *((_WORD *)v7 + 9) = v17;
              memmove(v10, MiniportQueue->pAdapterInstanceName->Buffer, v17);
              *((_QWORD *)v7 + 3) = (*((_QWORD *)v7 + 3) - (_QWORD)a1) & -(__int64)(*((_QWORD *)v7 + 3) != 0LL);
              v7 += 32;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v21 = v13;
        p_SpinLock = &v9->Ref.SpinLock;
      }
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      v9 = v9->NextDriver;
    }
    while ( v9 );
    v8 = v20;
    v6 = v3;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  v18 = v6 - 48 < (unsigned __int64)*((unsigned int *)a1 + 2);
  *a3 = v3;
  return v18 ? 0x80000005 : 0;
}
