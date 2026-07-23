/*
 * XREFs of IoQueryInterface @ 0x140756C90
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140756CE0 (IopQueryInterfaceRecurseUp.c)
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
