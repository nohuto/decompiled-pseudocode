/*
 * XREFs of PiProcessQueryDeviceState @ 0x1406EAEE4
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x14071E3CC (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14015A18C (PoFxActivateDevice.c)
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PnpCheckForActiveDependencies @ 0x1406E7E20 (PnpCheckForActiveDependencies.c)
 *     PipClearDevNodeUserFlags @ 0x1406EB03C (PipClearDevNodeUserFlags.c)
 *     IopQueryDeviceState @ 0x1406EB078 (IopQueryDeviceState.c)
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeUserFlags @ 0x14070F4E0 (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x140757FC4 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1407650E0 (IopDecDisableableDepends.c)
 *     PiUpdateDeviceResourceLists @ 0x140842898 (PiUpdateDeviceResourceLists.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(_QWORD *Object)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int updated; // esi
  unsigned int v5; // edi
  int v6; // eax
  PVOID **v7; // rcx
  __int64 v9; // r8
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v1 = Object[39];
  P = 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  PiPnpRtlBeginOperation(&P);
  PoFxActivateDevice(*(_QWORD *)(v3 + 32));
  *(_DWORD *)(v3 + 704) |= 0x100u;
  updated = IopQueryDeviceState(Object, &v10);
  if ( updated < 0 )
  {
    updated = 0;
    goto LABEL_16;
  }
  v5 = v10;
  if ( (v10 & 2) != 0 )
    PipSetDevNodeUserFlags(v3, 2LL);
  else
    PipClearDevNodeUserFlags(v3, 2LL);
  if ( (v5 & 0x40) != 0 )
    PipSetDevNodeUserFlags(v3, 64LL);
  else
    PipClearDevNodeUserFlags(v3, 64LL);
  v6 = *(_DWORD *)(v3 + 400) & 8;
  if ( (v5 & 0x20) != 0 )
  {
    if ( !v6 )
    {
      PipSetDevNodeUserFlags(v3, 8LL);
      IopIncDisableableDepends(v3);
    }
  }
  else if ( v6 )
  {
    IopDecDisableableDepends(v3);
    PipClearDevNodeUserFlags(v3, 8LL);
  }
  if ( ((v5 & 9) != 0 || (v5 & 4) != 0 && (v5 & 0x10) == 0) && PnpCheckForActiveDependencies(v3, 3u) )
  {
    v9 = 51LL;
LABEL_30:
    PnpRequestDeviceRemoval(v3, 0LL, v9);
    updated = -1073741823;
    goto LABEL_16;
  }
  if ( (v5 & 9) != 0 )
  {
    v9 = (v5 & 1) != 0 ? 29 : 24;
    goto LABEL_30;
  }
  if ( (v5 & 0x10) != 0 )
  {
    PnpRequestDeviceAction(Object, 13, 0, (v5 >> 2) & 1, 0LL, 0LL, 0LL);
    goto LABEL_16;
  }
  if ( (v5 & 4) != 0 )
  {
    v9 = 43LL;
    goto LABEL_30;
  }
  if ( (v5 & 0x80u) != 0 )
    updated = PiUpdateDeviceResourceLists(v3);
LABEL_16:
  PoFxIdleDevice(*(_QWORD *)(v3 + 32));
  v7 = (PVOID **)P;
  *(_DWORD *)(v3 + 704) &= ~0x100u;
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return (unsigned int)updated;
}
