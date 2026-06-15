/*
 * XREFs of ?FindAppSubscription@CSpatialAudioResourceManager@Sarm@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@@std@@K@Z @ 0x180113A0C
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180066C70 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180066F04 (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResour.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Sarm::CSpatialAudioResourceManager::FindAppSubscription(__int64 a1, _QWORD *a2, int a3)
{
  _DWORD *i; // rax

  for ( i = *(_DWORD **)(a1 + 312); i != *(_DWORD **)(a1 + 320) && *i != a3; i += 2 )
    ;
  *a2 = i;
  return a2;
}
