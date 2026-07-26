/*
 * XREFs of ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C005DF70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005DE88 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindAdapterWorkItem(_QWORD *P)
{
  struct _NDIS_OPEN_BLOCK *v1; // rbx

  v1 = (struct _NDIS_OPEN_BLOCK *)P[4];
  ndisUnbindAdapterInner(v1);
  ndisMDereferenceOpenUnlocked((__int64)v1, 18);
  ExFreePoolWithTag(P, 0);
}
