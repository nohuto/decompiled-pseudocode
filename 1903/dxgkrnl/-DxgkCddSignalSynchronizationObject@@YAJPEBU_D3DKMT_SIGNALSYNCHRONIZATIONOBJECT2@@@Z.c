/*
 * XREFs of ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0153230
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C0138F3C (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall DxgkCddSignalSynchronizationObject(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        const GUID *a3)
{
  return DxgkSignalSynchronizationObjectInternal((__int64)a1, 0, a3);
}
