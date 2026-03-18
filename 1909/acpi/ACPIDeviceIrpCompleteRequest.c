/*
 * XREFs of ACPIDeviceIrpCompleteRequest @ 0x1C000A340
 * Callers:
 *     ACPIBusIrpSetSystemPowerComplete @ 0x1C004A7E0 (ACPIBusIrpSetSystemPowerComplete.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000A814 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0017370 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIDeviceIrpCompleteRequest(_QWORD *a1, IRP *a2, int a3)
{
  void *v4; // rbp
  char v5; // si
  int v8; // edx
  void *v9; // r8
  void *v10; // rcx
  __int64 v11; // rax
  void *v13; // rax
  __int64 v14; // rcx
  char v15; // [rsp+38h] [rbp-40h]

  v4 = &unk_1C006FE7D;
  v5 = 0;
  v8 = 0;
  v9 = &unk_1C006FE7D;
  v10 = &unk_1C006FE7D;
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = v8;
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      10,
      26,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      (char)a2,
      a3,
      v15,
      (__int64)v9,
      (__int64)v10);
  }
  if ( a3 < 0 )
  {
    v13 = &unk_1C006FE7D;
    if ( a1 )
    {
      v14 = a1[1];
      v5 = (char)a1;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v4 = (void *)a1[70];
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = (void *)a1[71];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        10,
        27,
        (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
        (char)a2,
        a3,
        v5,
        (__int64)v4,
        (__int64)v13);
    }
  }
  else
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  a2->IoStatus.Status = a3;
  IofCompleteRequest(a2, 0);
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
