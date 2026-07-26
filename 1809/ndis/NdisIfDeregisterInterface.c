/*
 * XREFs of NdisIfDeregisterInterface @ 0x1C00E2EB0
 * Callers:
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003EB04 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisFilterAttachCleanUp @ 0x1C005C06C (ndisFilterAttachCleanUp.c)
 * Callees:
 *     ndisIfDeregisterInterfaceEx @ 0x1C0042598 (ndisIfDeregisterInterfaceEx.c)
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0);
}
