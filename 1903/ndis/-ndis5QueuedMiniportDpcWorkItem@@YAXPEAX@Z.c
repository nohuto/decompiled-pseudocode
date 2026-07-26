/*
 * XREFs of ?ndis5QueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C00A0300
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ?ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0414 (-ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A063C (-ndisMDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 */

void __fastcall ndis5QueuedMiniportDpcWorkItem(_QWORD *a1)
{
  void *v1; // rbp
  KIRQL v3; // si
  struct _KDPC *v4; // rcx
  void *v5; // r8
  void *v6; // r9

  v1 = (void *)a1[14];
  v3 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel(a1 + 12);
  *((_DWORD *)a1 + 30) &= ~0x2000000u;
  a1[65] = 0LL;
  KeReleaseSpinLockFromDpcLevel(a1 + 12);
  if ( (a1[15] & 0x40000) != 0 )
    ndisMDpcX(v4, v1, v5, v6);
  else
    ndisMDpc(v4, v1, v5, v6);
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceMiniport((__int64)a1, 0x4Eu);
}
