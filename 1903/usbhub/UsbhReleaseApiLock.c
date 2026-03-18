/*
 * XREFs of UsbhReleaseApiLock @ 0x1C0050B4C
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C004D9E4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004E194 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C004E4C8 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004E73C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004E9FC (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004ECCC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004EF5C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004F404 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004F744 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004FA58 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004FD40 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0050028 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0050318 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DDAC (UsbhReleaseFdoPnpLock.c)
 */

LONG __fastcall UsbhReleaseApiLock(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rax
  struct _KEVENT *v4; // rax

  Log(a1, 32, 1095774509, 0LL, a2);
  v3 = FdoExt(a1);
  UsbhReleaseFdoPnpLock(a1, (__int64)(v3 + 434));
  v4 = (struct _KEVENT *)FdoExt(a1);
  return KeSetEvent(v4 + 205, 0, 0);
}
