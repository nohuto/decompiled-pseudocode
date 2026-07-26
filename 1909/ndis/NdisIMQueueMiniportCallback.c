/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x1C0098080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 *     ndisMQueueNewWorkItem @ 0x1C009B654 (ndisMQueueNewWorkItem.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(__int64 a1, void (__fastcall *a2)(_QWORD, __int64), __int64 a3)
{
  KSPIN_LOCK *v6; // rbp
  unsigned int v7; // esi
  KIRQL v8; // r14
  char v9; // cl
  int v10; // eax
  int v11; // ebx

  v6 = (KSPIN_LOCK *)(a1 + 96);
  v7 = 0;
  v8 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 520) )
  {
    KeAcquireSpinLockAtDpcLevel(v6);
LABEL_6:
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    a2(*(_QWORD *)(a1 + 24), a3);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    *(_BYTE *)(a1 + 89) = 0;
    *(_QWORD *)(a1 + 1864) = 0LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    goto LABEL_9;
  }
  KeAcquireSpinLockAtDpcLevel(v6);
  v9 = 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( !*(_BYTE *)(a1 + 89) )
  {
    v9 = 1;
    *(_BYTE *)(a1 + 89) = 1;
    *(_QWORD *)(a1 + 1864) = KeGetCurrentThread();
  }
  if ( v9 )
    goto LABEL_6;
  v10 = ndisMQueueNewWorkItem(a1);
  *(_QWORD *)(a1 + 520) = 0LL;
  v11 = v10;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  v7 = -1073741670;
  if ( !v11 )
    v7 = 259;
LABEL_9:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v7;
}
