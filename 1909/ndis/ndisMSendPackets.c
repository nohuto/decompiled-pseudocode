/*
 * XREFs of ndisMSendPackets @ 0x1C008BA30
 * Callers:
 *     ndisMSend @ 0x1C008B390 (ndisMSend.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F2C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMSendPackets(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // r12d
  unsigned int v5; // ebp
  struct _NDIS_PACKET **v6; // r13
  __int64 v7; // rdi
  struct _NDIS_PACKET *v8; // r14
  _MDL *Head; // rbx
  struct _NDIS_STACK_RESERVED *v11; // rbx
  __int64 v12; // rsi
  struct _NDIS_PACKET **v13; // r9
  __int64 v14; // [rsp+30h] [rbp-58h]
  struct _NDIS_PACKET **v16; // [rsp+98h] [rbp+10h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  struct _NDIS_STACK_RESERVED *v18; // [rsp+A8h] [rbp+20h] BYREF

  if ( a3 )
  {
    v16 = a2;
    v3 = *(_QWORD *)(a1 + 16);
    v4 = 0;
    v5 = 0;
    v14 = a3;
    v6 = a2;
    v7 = a1;
    do
    {
      v8 = *v6;
      ++*(_DWORD *)&v8[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v8, &v18);
      *(_QWORD *)v18 = v7;
      Head = v8->Private.Head;
      if ( Head )
      {
        if ( (*(_BYTE *)(v3 + 928) & 2) == 0 )
        {
          v4 = 0;
          while ( (Head->MdlFlags & 5) != 0
                ? Head->MappedSystemVa
                : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u) )
          {
            Head = Head->Next;
            if ( !Head )
              goto LABEL_14;
          }
          v4 = -1073741670;
        }
      }
      else
      {
        v4 = -1073741823;
      }
LABEL_14:
      v8->Private.NdisPacketFlags &= ~4u;
      ndisMReferenceOpen(v7, 9u);
      if ( v4 )
      {
        NewIrql = KfRaiseIrql(2u);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 96));
        v11 = v18;
        *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
        v12 = *(_QWORD *)v11;
        *(_QWORD *)v11 = 1297040184LL;
        *(_QWORD *)(v3 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 96));
        *((_DWORD *)v11 + 2) = 0;
        v8->Private.NdisPacketFlags &= 0xC0u;
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v12 + 112))(v12, v8, v4);
        if ( NewIrql != 2 )
          KeLowerIrql(NewIrql);
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2024))(v3, v16, v5);
          v13 = v6 + 1;
          v5 = 0;
          v16 = v6 + 1;
        }
        else
        {
          v13 = v16;
        }
        v7 = a1;
      }
      else
      {
        v13 = v16;
        ++v5;
      }
      ++v6;
      --v14;
    }
    while ( v14 );
    if ( v5 )
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2024))(v3, v13, v5);
  }
}
