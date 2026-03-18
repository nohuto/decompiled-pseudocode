/*
 * XREFs of Control_EP_StartMapping @ 0x1C00259A0
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x1C0024DAC (TR_QueueDpcForTransferCompletion.c)
 *     Control_MapTransfer @ 0x1C0025CF8 (Control_MapTransfer.c)
 */

void __fastcall Control_EP_StartMapping(__int64 a1)
{
  KIRQL v2; // si
  unsigned __int8 CurrentIrql; // di
  bool v4; // zf
  bool v5; // r14
  KIRQL v6; // al
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // rcx
  __int64 v9; // rdx

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v4 = CurrentIrql == 0;
  if ( !CurrentIrql )
  {
    v2 = KfRaiseIrql(2u);
    v4 = 1;
  }
  v5 = v4;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 344);
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 356) = 0;
  *(_BYTE *)(a1 + 104) = v6;
  if ( v7 )
  {
    v4 = *(_DWORD *)(v7 + 112) == 3;
    v8 = (KSPIN_LOCK *)(a1 + 96);
    if ( v4 )
    {
      *(_DWORD *)(a1 + 108) = 2;
      KeReleaseSpinLock(v8, v6);
      TR_QueueDpcForTransferCompletion(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 108) = 3;
      KeReleaseSpinLock(v8, v6);
      LOBYTE(v9) = v5;
      Control_MapTransfer(a1, v9);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 108) = 2;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  }
  if ( !CurrentIrql )
    KeLowerIrql(v2);
}
