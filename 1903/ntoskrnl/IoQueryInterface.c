/*
 * XREFs of IoQueryInterface @ 0x14077B6D0
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14033C5F0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x14077B720 (IopQueryInterfaceRecurseUp.c)
 */

__int64 __fastcall IoQueryInterface(
        struct _DEVICE_OBJECT *a1,
        char a2,
        ULONG_PTR a3,
        USHORT a4,
        USHORT a5,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a6,
        void *a7)
{
  if ( (a2 & 1) != 0 )
    return IopQueryInterfaceRecurseUp((int)a1, a3, a4, a5, (__int64)a6, a7);
  else
    return PnpQueryInterface(a1, a3, a5, a4, a6, (USHORT *)a7);
}
