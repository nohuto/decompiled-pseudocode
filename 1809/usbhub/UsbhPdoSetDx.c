/*
 * XREFs of UsbhPdoSetDx @ 0x1C00012DC
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0001260 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0001458 (UsbhCompletePdoIdleIrp.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0001FAC (UsbhSyncSuspendPdoPort.c)
 *     UsbhSetPdoIdleReady @ 0x1C000227C (UsbhSetPdoIdleReady.c)
 *     GET_FDO_POWER_STATE @ 0x1C0002A14 (GET_FDO_POWER_STATE.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0002C00 (UsbhCompletePdoWakeIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0003840 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x1C0003C54 (UsbhSetPdoPowerState.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoSetDx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r8
  int v10; // esi
  int v11; // ebp
  int v12; // eax
  int v13; // r8d
  int v14; // r8d
  int v15; // r9d
  bool v16; // r13
  __int64 v17; // r8
  unsigned int v18; // ebp

  v6 = PdoExt(a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  FdoExt(v7);
  v9 = *(_QWORD *)(a3 + 184);
  v10 = *(_DWORD *)(v9 + 24);
  v11 = *(_DWORD *)(v9 + 8);
  FdoExt(*(_QWORD *)(a1 + 8));
  Log(v7, 16, 1346651256, a3, a2);
  *(_DWORD *)(v8 + 1420) &= ~0x2000000u;
  v12 = GET_FDO_POWER_STATE(a1);
  if ( v12 == 201 )
  {
    v15 = *(_DWORD *)(PdoExt(a2) + 1128);
    if ( v15 == 1 )
    {
      UsbhSetPdoPowerState(a1, a2, v14, 4, 4);
      v16 = v10 == 4;
      UsbhReleaseFdoPwrLock(v7, a1);
      UsbhPdoAbortAllDevicePipes(v7, a2);
      if ( !*(_DWORD *)(v8 + 2800) || (v11 & 0xF000) != 0x5000 )
      {
        LOBYTE(v17) = v10 == 4;
        UsbhSyncSuspendPdoPort(a1, a2, v17);
      }
      *(_DWORD *)(v8 + 2384) = v10 != 4;
LABEL_6:
      UsbhSetPdoIdleReady(v7, a2, a3);
      v18 = 0;
      if ( !v16 )
        return v18;
      goto LABEL_7;
    }
    if ( v15 > 1 )
    {
      if ( v15 <= 3 )
        goto LABEL_26;
      if ( v15 <= 5 )
      {
        v16 = v10 == 4;
        *(_DWORD *)(v8 + 2384) = v10 != 4;
        UsbhSetPdoPowerState(a1, a2, v14, v15, 4);
        UsbhReleaseFdoPwrLock(v7, a1);
        goto LABEL_6;
      }
      if ( v15 == 6 )
LABEL_26:
        UsbhSetPdoPowerState(a1, a2, v14, v15, 5);
    }
    UsbhReleaseFdoPwrLock(v7, a1);
    v18 = -1073741101;
LABEL_7:
    UsbhCompletePdoWakeIrp(v7, *(_QWORD *)(v8 + 840), 3221226195LL);
    if ( (*(_DWORD *)(v8 + 1420) & 0x100000) == 0 )
      UsbhCompletePdoIdleIrp(v7, *(_QWORD *)(v8 + 840), 3221226195LL);
    return v18;
  }
  if ( v12 <= 201 )
    goto LABEL_21;
  if ( v12 <= 206 )
  {
LABEL_15:
    v18 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        19,
        (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
        *(_WORD *)(v8 + 1428));
    UsbhSetPdoPowerState(a1, a2, v13, 4, 5);
    UsbhReleaseFdoPwrLock(v7, a1);
    return v18;
  }
  if ( v12 <= 208 )
  {
LABEL_21:
    UsbhReleaseFdoPwrLock(v7, a1);
    return (unsigned int)-1073741823;
  }
  if ( v12 > 211 )
  {
    if ( v12 == 212 )
      goto LABEL_15;
    goto LABEL_21;
  }
  UsbhSetPdoPowerState(a1, a2, v13, 5, 4);
  Log(v7, 16, 1349862520, a3, a2);
  UsbhReleaseFdoPwrLock(v7, a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
      *(_WORD *)(v8 + 1428));
  return 0;
}
