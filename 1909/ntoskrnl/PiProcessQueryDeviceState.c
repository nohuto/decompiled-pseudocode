/*
 * XREFs of PiProcessQueryDeviceState @ 0x140703450
 * Callers:
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x140747AF8 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140145E7C (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x140145FD8 (PoFxActivateDevice.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     PiUpdateGuestAssignedState @ 0x140703370 (PiUpdateGuestAssignedState.c)
 *     IopQueryDeviceState @ 0x1407033D4 (IopQueryDeviceState.c)
 *     PipClearDevNodeUserFlags @ 0x1407035C0 (PipClearDevNodeUserFlags.c)
 *     PnpCheckForActiveDependencies @ 0x140704A6C (PnpCheckForActiveDependencies.c)
 *     PnpRequestDeviceRemoval @ 0x140733830 (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeUserFlags @ 0x14073CADC (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x14077FEF0 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x14078CDAC (IopDecDisableableDepends.c)
 *     IopResourceRequirementsChanged @ 0x14085F798 (IopResourceRequirementsChanged.c)
 *     PiUpdateDeviceResourceLists @ 0x14087C754 (PiUpdateDeviceResourceLists.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(struct _DEVICE_OBJECT *a1)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  __int64 DeviceNode; // rbx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int updated; // esi
  PVOID **v9; // rcx
  __int64 v11; // r8
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  DeviceObjectExtension = a1->DeviceObjectExtension;
  P = 0LL;
  DeviceNode = (__int64)DeviceObjectExtension->DeviceNode;
  PiPnpRtlBeginOperation(&P);
  PoFxActivateDevice(*(_QWORD *)(DeviceNode + 32));
  *(_DWORD *)(DeviceNode + 704) |= 0x100u;
  if ( (int)IopQueryDeviceState(a1, &v12) < 0 )
  {
    updated = 0;
    goto LABEL_16;
  }
  v4 = v12;
  if ( (v12 & 2) != 0 )
    PipSetDevNodeUserFlags(DeviceNode, 2LL);
  else
    PipClearDevNodeUserFlags(DeviceNode, 2LL);
  if ( (v4 & 0x40) != 0 )
    PipSetDevNodeUserFlags(DeviceNode, 64LL);
  else
    PipClearDevNodeUserFlags(DeviceNode, 64LL);
  v5 = *(_DWORD *)(DeviceNode + 400) & 8;
  if ( (v4 & 0x20) != 0 )
  {
    if ( !v5 )
    {
      PipSetDevNodeUserFlags(DeviceNode, 8LL);
      IopIncDisableableDepends(DeviceNode);
    }
  }
  else if ( v5 )
  {
    IopDecDisableableDepends(DeviceNode);
    PipClearDevNodeUserFlags(DeviceNode, 8LL);
  }
  v6 = v4 >> 8;
  LOBYTE(v6) = BYTE1(v4) & 1;
  updated = PiUpdateGuestAssignedState(DeviceNode, v6);
  if ( ((v4 & 9) != 0 || (v4 & 4) != 0 && (v4 & 0x10) == 0)
    && (unsigned __int8)PnpCheckForActiveDependencies(DeviceNode, 3LL) )
  {
    v11 = 51LL;
LABEL_30:
    PnpRequestDeviceRemoval(DeviceNode, 0LL, v11, 0LL);
    updated = -1073741823;
    goto LABEL_16;
  }
  if ( (v4 & 9) != 0 )
  {
    v11 = (v4 & 1) != 0 ? 29 : 24;
    goto LABEL_30;
  }
  if ( (v4 & 0x10) != 0 )
  {
    LOBYTE(v7) = (v4 & 4) != 0;
    IopResourceRequirementsChanged(a1, v7);
    goto LABEL_16;
  }
  if ( (v4 & 4) != 0 )
  {
    v11 = 43LL;
    goto LABEL_30;
  }
  if ( (v4 & 0x80u) != 0 )
    updated = PiUpdateDeviceResourceLists(DeviceNode);
LABEL_16:
  PoFxIdleDevice(*(_QWORD *)(DeviceNode + 32));
  v9 = (PVOID **)P;
  *(_DWORD *)(DeviceNode + 704) &= ~0x100u;
  if ( v9 )
    PiPnpRtlEndOperation(v9);
  return updated;
}
