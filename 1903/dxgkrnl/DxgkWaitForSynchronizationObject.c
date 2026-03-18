/*
 * XREFs of DxgkWaitForSynchronizationObject @ 0x1C011D340
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C011CFC8 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObject(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        const GUID *a3)
{
  return DxgkWaitForSynchronizationObjectInternal(a1, 1, a3);
}
