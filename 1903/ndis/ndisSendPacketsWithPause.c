/*
 * XREFs of ndisSendPacketsWithPause @ 0x1C008C7A0
 * Callers:
 *     ndisSendWithPause @ 0x1C008CA70 (ndisSendWithPause.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisSendPacketsWithPause(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r15
  __int64 v6; // rdi
  KIRQL v8; // al
  int v9; // ecx
  unsigned int v10; // r15d
  struct _NDIS_PACKET **v11; // rax
  struct _NDIS_PACKET *v12; // r13
  _MDL *Head; // rbx
  KSPIN_LOCK *v15; // rdi
  struct _NDIS_STACK_RESERVED *v16; // rbx
  __int64 v17; // rsi
  struct _NDIS_PACKET **v18; // rax
  bool v19; // zf
  bool v20; // bl
  struct _NDIS_PACKET **v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  struct _NDIS_STACK_RESERVED *v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]
  unsigned int v26; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = (KSPIN_LOCK *)(a1 + 624);
  v6 = a3;
  v22 = v3;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 624));
  v9 = *(_DWORD *)(a1 + 640);
  *(_BYTE *)(a1 + 632) = v8;
  if ( v9 == 2 )
  {
    *(_DWORD *)(a1 + 644) += v6;
    KeReleaseSpinLock(v4, v8);
    v26 = 0;
    v10 = 0;
    v11 = a2;
    v21 = a2;
    if ( !(_DWORD)v6 )
      return;
    v24 = v6;
    while ( 1 )
    {
      v12 = *v11;
      ++*(_DWORD *)&v12[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v12, &v23);
      *(_QWORD *)v23 = a1;
      Head = v12->Private.Head;
      if ( Head )
      {
        if ( (*(_BYTE *)(v3 + 928) & 2) == 0 )
        {
          v26 = 0;
          while ( (Head->MdlFlags & 5) != 0
                ? Head->MappedSystemVa
                : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u) )
          {
            Head = Head->Next;
            if ( !Head )
              goto LABEL_15;
          }
          v26 = -1073741670;
        }
      }
      else
      {
        v26 = -1073741823;
      }
LABEL_15:
      v12->Private.NdisPacketFlags &= ~4u;
      ndisMReferenceOpen(a1, 9u);
      if ( !v26 )
        break;
      v15 = (KSPIN_LOCK *)(v3 + 96);
      NewIrql = KfRaiseIrql(2u);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 96));
      v16 = v23;
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      v17 = *(_QWORD *)v16;
      *(_QWORD *)v16 = 1297040183LL;
      *(_QWORD *)(v22 + 520) = 0LL;
      KeReleaseSpinLockFromDpcLevel(v15);
      *((_DWORD *)v16 + 2) = 0;
      v12->Private.NdisPacketFlags &= 0xC0u;
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v17 + 112))(v17, v12, v26);
      if ( NewIrql != 2 )
        KeLowerIrql(NewIrql);
      v3 = v22;
      if ( !v10 )
        goto LABEL_21;
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v22 + 2024))(v22, a2, v10);
      v18 = v21;
      v10 = 0;
      a2 = v21 + 1;
LABEL_22:
      v11 = v18 + 1;
      v19 = v24-- == 1;
      v21 = v11;
      if ( v19 )
      {
        if ( v10 )
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2024))(v3, a2, v10);
        return;
      }
    }
    ++v10;
LABEL_21:
    v18 = v21;
    goto LABEL_22;
  }
  v20 = 0;
  if ( v9 == 1 )
    v20 = *(_DWORD *)(a1 + 644) == 0;
  KeReleaseSpinLock(v4, v8);
  if ( (_DWORD)v6 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 680))(*(_QWORD *)(a1 + 528), *a2++, 3223519274LL);
      --v6;
    }
    while ( v6 );
  }
  if ( v20 )
    KeSetEvent((PRKEVENT)(a1 + 648), 0, 0);
}
