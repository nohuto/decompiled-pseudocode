/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800E77F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E758C (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(CDeviceGraphObjectsStore *this, struct ISaDeviceProxy **a2)
{
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v3[0] = off_180158430;
  v3[7] = v3;
  return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, v3, (__int64 *)a2);
}
