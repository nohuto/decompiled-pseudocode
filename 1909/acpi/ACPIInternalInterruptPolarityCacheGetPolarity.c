/*
 * XREFs of ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C001E618
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0098B50 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009CB5C (IrqArbpFindSuitableRangeIsa.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00B453C (PnpiCmResourceToBiosExtendedIrq.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C0011490 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     WPP_RECORDER_SF_Dqqss @ 0x1C0056C38 (WPP_RECORDER_SF_Dqqss.c)
 */

char __fastcall ACPIInternalInterruptPolarityCacheGetPolarity(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // di
  KIRQL v7; // bp
  _QWORD *i; // rbx
  int v9; // r9d
  __int64 *j; // rax
  int v11; // edx
  __int64 v13; // rax
  void *v14; // rdx
  void *v15; // rcx
  int v16; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  for ( i = (_QWORD *)ACPIInternalFindDeviceExtensionNoLock(a1, RootDeviceExtension); i; i = (_QWORD *)i[93] )
  {
    for ( j = (__int64 *)i[83]; j != i + 83; j = (__int64 *)*j )
    {
      if ( a2 == *((_DWORD *)j + 4) )
      {
        v11 = *((_DWORD *)j + 5);
        if ( v11 != -1 )
        {
          *a3 = v11;
          v3 = 1;
        }
        goto LABEL_9;
      }
    }
    v13 = i[1];
    if ( (v13 & 0x20) != 0 )
    {
      v14 = &unk_1C006FE7D;
      v15 = &unk_1C006FE7D;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (void *)i[70];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (void *)i[71];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v14,
          0,
          v9,
          v16,
          a2,
          (char)i,
          (char)i,
          (__int64)v14,
          (__int64)v15);
    }
  }
LABEL_9:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return v3;
}
