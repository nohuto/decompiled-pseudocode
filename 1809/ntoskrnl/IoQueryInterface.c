/*
 * XREFs of IoQueryInterface @ 0x140755AC0
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14031D260 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     PnpQueryInterface @ 0x1406F9198 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140755B10 (IopQueryInterfaceRecurseUp.c)
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
