/*
 * XREFs of ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1C0019450
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000D7CC (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpenDwmHandleForCompositionObjectReference(void *a1, void **a2)
{
  return DxgkCompositionObject::OpenDwmHandle(a1, a2);
}
