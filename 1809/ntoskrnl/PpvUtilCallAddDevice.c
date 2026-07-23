/*
 * XREFs of PpvUtilCallAddDevice @ 0x14016BE24
 * Callers:
 *     PnpCallAddDevice @ 0x14070DEB0 (PnpCallAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfDevObjPostAddDevice @ 0x140935088 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409350DC (VfDevObjPreAddDevice.c)
 */

__int64 __fastcall PpvUtilCallAddDevice(
        struct _DEVICE_OBJECT *a1,
        struct _DRIVER_OBJECT *a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *))
{
  unsigned int v7; // ebx

  if ( !PpvUtilVerifierEnabled || (MmVerifierData & 0x200) == 0 )
    return a3(a2, a1);
  VfDevObjPreAddDevice(a1, a2);
  v7 = a3(a2, a1);
  VfDevObjPostAddDevice(a1, a2, v7);
  return v7;
}
