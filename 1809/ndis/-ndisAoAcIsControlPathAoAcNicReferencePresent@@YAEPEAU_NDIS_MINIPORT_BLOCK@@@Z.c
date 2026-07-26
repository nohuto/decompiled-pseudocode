/*
 * XREFs of ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00770D0
 * Callers:
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072BE8 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisAoAcIsControlPathAoAcNicReferencePresent(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  char v2; // bl
  KIRQL v3; // al
  unsigned int v4; // ecx
  int *ComponentRefCounts; // rdx

  AoAc = a1->AoAc;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v4 = 0;
  ComponentRefCounts = AoAc->ComponentRefCounts;
  while ( v4 == 4 || v4 - 15 <= 1 || *ComponentRefCounts <= 0 )
  {
    ++v4;
    ++ComponentRefCounts;
    if ( v4 >= 0x11 )
      goto LABEL_8;
  }
  v2 = 1;
LABEL_8:
  KeReleaseSpinLock(&AoAc->Lock, v3);
  return v2;
}
