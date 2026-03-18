/*
 * XREFs of ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0153210
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C011CFC8 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 */

__int64 __fastcall DxgkCddWaitForSynchronizationObject(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        const GUID *a3)
{
  return DxgkWaitForSynchronizationObjectInternal(a1, 0, a3);
}
