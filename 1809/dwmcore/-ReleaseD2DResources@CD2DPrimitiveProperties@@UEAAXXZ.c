/*
 * XREFs of ?ReleaseD2DResources@CD2DPrimitiveProperties@@UEAAXXZ @ 0x180202780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DPrimitiveProperties::ReleaseD2DResources(CD2DPrimitiveProperties *this)
{
  ReleaseInterface<IBitmapLock>((__int64 *)this + 13);
}
