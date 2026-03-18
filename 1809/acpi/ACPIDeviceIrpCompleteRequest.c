/*
 * XREFs of ACPIDeviceIrpCompleteRequest @ 0x1C000DE20
 * Callers:
 *     ACPIBusIrpSetSystemPowerComplete @ 0x1C00491E0 (ACPIBusIrpSetSystemPowerComplete.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E374 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIDeviceIrpCompleteRequest(_QWORD *a1, IRP *a2, int a3)
{
  void *v4; // rbp
  char v5; // si
  int v8; // edx
  void *v9; // r8
  void *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  void *v14; // rax
  __int64 v15; // rcx
  char v16; // [rsp+38h] [rbp-30h]

  v4 = &unk_1C006E28A;
  v5 = 0;
  v8 = 0;
  v9 = &unk_1C006E28A;
  v10 = &unk_1C006E28A;
  if ( a1 )
  {
    v11 = a1[1];
    v8 = (int)a1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v9 = (void *)a1[70];
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = (void *)a1[71];
    }
  }
  v16 = v8;
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    10,
    26,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    (char)a2,
    a3,
    v16,
    (__int64)v9,
    (__int64)v10);
  if ( a3 < 0 )
  {
    v14 = &unk_1C006E28A;
    if ( a1 )
    {
      v15 = a1[1];
      v5 = (char)a1;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v4 = (void *)a1[70];
        if ( (v15 & 0x400000000000LL) != 0 )
          v14 = (void *)a1[71];
      }
    }
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      10,
      27,
      (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
      (char)a2,
      a3,
      v5,
      (__int64)v4,
      (__int64)v14);
  }
  else
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  a2->IoStatus.Status = a3;
  IofCompleteRequest(a2, 0);
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
