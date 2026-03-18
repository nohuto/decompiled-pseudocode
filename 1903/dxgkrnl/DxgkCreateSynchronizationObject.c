/*
 * XREFs of DxgkCreateSynchronizationObject @ 0x1C00F4730
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F47D0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObject(__int64 a1)
{
  return DxgkCreateSynchronizationObjectImpl(a1, 1LL, 1LL, 0LL);
}
