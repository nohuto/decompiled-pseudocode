/*
 * XREFs of ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0078940
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisMProcessDeferred @ 0x1C009B0EC (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C009B628 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMProcessSGListS(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _SCATTER_GATHER_LIST *a3,
        struct _NDIS_PACKET *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned __int8 *WrapperReserved; // rax
  unsigned __int8 **v8; // rdx
  char v9; // di
  struct _NDIS_STACK_RESERVED *v10; // [rsp+40h] [rbp+18h] BYREF

  *(unsigned __int64 *)((char *)a4->Reserved + a4->Private.NdisPacketOobOffset) = (unsigned __int64)a3;
  NDIS_STACK_RESERVED_FROM_PACKET(a4, &v10);
  v5 = *(_QWORD *)v10;
  if ( **(_BYTE **)v10 == 5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *(_QWORD *)(v5 + 16);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 96));
  *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
  WrapperReserved = a4->WrapperReserved;
  *(_QWORD *)&a4->MacReserved[24] = &a4->MacReserved[16];
  *(_QWORD *)&a4->MacReserved[16] = &a4->MacReserved[16];
  v8 = *(unsigned __int8 ***)(v6 + 136);
  if ( *v8 != (unsigned __int8 *)(v6 + 128) )
    __fastfail(3u);
  *(_QWORD *)WrapperReserved = v6 + 128;
  *(_QWORD *)&a4->MacReserved[24] = v8;
  *v8 = WrapperReserved;
  *(_QWORD *)(v6 + 136) = WrapperReserved;
  if ( !*(_QWORD *)(v6 + 144) )
    *(_QWORD *)(v6 + 144) = a4;
  v9 = 0;
  if ( !*(_BYTE *)(v6 + 89) )
  {
    *(_BYTE *)(v6 + 89) = 1;
    v9 = 1;
    *(_QWORD *)(v6 + 1864) = KeGetCurrentThread();
  }
  ndisMQueueWorkItem(v6);
  if ( v9 )
  {
    ndisMProcessDeferred(v6);
    *(_QWORD *)(v6 + 1864) = 0LL;
    *(_BYTE *)(v6 + 89) = 0;
  }
  *(_QWORD *)(v6 + 520) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 96));
}
