/*
 * XREFs of ?ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0078870
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMSendCompleteX @ 0x1C008B410 (ndisMSendCompleteX.c)
 */

void __fastcall ndisMProcessSGList(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _SCATTER_GATHER_LIST *a3,
        struct _NDIS_PACKET *a4)
{
  __int64 v4; // rcx
  struct _NDIS_STACK_RESERVED *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct _NDIS_PACKET *v9; // [rsp+40h] [rbp+18h] BYREF
  struct _NDIS_STACK_RESERVED *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = a4;
  *(unsigned __int64 *)((char *)a4->Reserved + a4->Private.NdisPacketOobOffset) = (unsigned __int64)a3;
  NDIS_STACK_RESERVED_FROM_PACKET(v9, &v10);
  v5 = v10;
  v6 = *(_QWORD *)v10;
  if ( **(_BYTE **)v10 == 5 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *(_QWORD *)(v6 + 16);
  *(_BYTE *)(v4 + 41) |= 0x10u;
  if ( (*(_DWORD *)(v7 + 120) & 0x20000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET **, __int64))(*((_QWORD *)v5 + 1) + 208LL))(
      *(_QWORD *)(*((_QWORD *)v5 + 1) + 200LL),
      &v9,
      1LL);
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 24);
    if ( (*(_BYTE *)(v7 + 928) & 1) != 0 )
    {
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, __int64))(v7 + 1808))(v8, &v9, 1LL);
    }
    else if ( (*(unsigned int (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(*(_QWORD *)(v7 + 3760) + 200LL))(
                v8,
                v9,
                v9->Private.Flags) != 259 )
    {
      ndisMSendCompleteX((struct _NDIS_MINIPORT_BLOCK *)v7, v9);
    }
  }
}
