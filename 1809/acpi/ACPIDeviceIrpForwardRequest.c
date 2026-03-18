/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x1C000CD00
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1C004ECC8 (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     ACPIDispatchForwardPowerIrp @ 0x1C000CC90 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E374 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  void *v6; // rcx
  char v7; // r8
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v12; // [rsp+48h] [rbp-10h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = &unk_1C006E28A;
  v7 = 0;
  v9 = &unk_1C006E28A;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v7 = a1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v6 = *(void **)(a1 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(void **)(a1 + 568);
    }
  }
  v12 = (__int64)v9;
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v9,
    10,
    32,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    (char)a2,
    a3,
    v7,
    (__int64)v6,
    v12);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    *(_BYTE *)(a1 + 508) = 0;
  if ( a3 < 0 )
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ACPIDispatchForwardPowerIrp((ULONG_PTR)CurrentStackLocation->DeviceObject, a2);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
