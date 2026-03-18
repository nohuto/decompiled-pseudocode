/*
 * XREFs of UsbhPdoSystemPowerState @ 0x1C0003808
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C0003270 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0003AF4 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhSetPdoPowerState @ 0x1C0003BB4 (UsbhSetPdoPowerState.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0041870 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhPdoSystemPowerState(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned int LowPart; // r14d
  __int64 v9; // rbx
  KIRQL v10; // al
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbx
  KIRQL v15; // dl
  int v16; // edx
  __int64 v17; // rax

  v6 = PdoExt(a2);
  v7 = PdoExt(a2) + 944;
  Log(a1, 16, 1885622387, a2, (__int64)a3);
  LowPart = a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v9 = FdoExt(a1);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 5056));
  v11 = *(_DWORD *)(v9 + 4172);
  *(_BYTE *)(v9 + 5064) = v10;
  *(_DWORD *)(v7 + 40) = v11;
  *(_DWORD *)(v7 + 44) = 126;
  *(_DWORD *)(v7 + 32) = 844055622;
  *(_DWORD *)(v7 + 36) = 1937339216;
  *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v9 + 1344) = v7;
  v13 = *(_DWORD *)(PdoExt(a2) + 1128);
  if ( LowPart == 1 )
    UsbhSetPdoPowerState(v7, a2, v12, v13, 10);
  else
    UsbhSetPdoPowerState(v7, a2, v12, v13, 11);
  *(_DWORD *)(v6 + 792) = LowPart;
  v14 = FdoExt(a1);
  FdoExt(*(_QWORD *)(v7 + 8));
  *(_DWORD *)(v7 + 32) = 1734964085;
  v15 = *(_BYTE *)(v14 + 5064);
  *(_QWORD *)(v14 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 5056), v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      1,
      21,
      (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
      *(_WORD *)(v6 + 1428),
      LowPart);
  v17 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v17 + 1184), a2, a3, 1757LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
