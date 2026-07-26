/*
 * XREFs of ?NdisMWanSendComplete@@YAXPEAXPEAU_NDIS_WAN_PACKET@@H@Z @ 0x1C0089020
 * Callers:
 *     ndisMStartWanSends @ 0x1C008C2A0 (ndisMStartWanSends.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisMWanSendComplete(void *a1, struct _NDIS_WAN_PACKET *a2, unsigned int a3)
{
  KIRQL v3; // di
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD *i; // rbp

  v3 = 0;
  if ( (*((_DWORD *)a1 + 30) & 0x40000) != 0 )
    v3 = KfRaiseIrql(2u);
  if ( !a3 )
  {
    v7 = *((_QWORD *)a1 + 394);
    if ( v7 )
    {
      v8 = 112LL * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(v8 + v7 + 64);
      v9 = *((_QWORD *)a1 + 394);
      if ( v9 )
      {
        v10 = v9 + 112LL * KeGetPcr()->Prcb.Number;
        *(_QWORD *)(v10 + 88) += a2->CurrentLength;
        *(_QWORD *)(v10 + 56) += a2->CurrentLength;
      }
    }
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 7); ; i = (_QWORD *)i[49] )
  {
    *((_QWORD *)a1 + 65) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
    if ( !i )
      break;
    (*(void (__fastcall **)(_QWORD, struct _NDIS_WAN_PACKET *, _QWORD))(i[3] + 240LL))(i[4], a2, a3);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
  }
  if ( (*((_DWORD *)a1 + 30) & 0x40000) != 0 && v3 != 2 )
    KeLowerIrql(v3);
}
