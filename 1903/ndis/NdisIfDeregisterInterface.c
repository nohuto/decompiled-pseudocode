/*
 * XREFs of NdisIfDeregisterInterface @ 0x1C0114940
 * Callers:
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00632D8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisFilterAttachCleanUp @ 0x1C008F4AC (ndisFilterAttachCleanUp.c)
 * Callees:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00636DC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0);
}
