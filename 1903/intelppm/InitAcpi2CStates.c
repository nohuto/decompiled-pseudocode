/*
 * XREFs of InitAcpi2CStates @ 0x1C0020454
 * Callers:
 *     InitAcpiCStates @ 0x1C00203AC (InitAcpiCStates.c)
 *     AcpiCStateNotifyWorker @ 0x1C0030190 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     ValidateAcpiCStates @ 0x1C00204CC (ValidateAcpiCStates.c)
 *     AcpiEval_CST @ 0x1C00220E0 (AcpiEval_CST.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  void *v5; // rsi
  void *v6; // rcx
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = AcpiEval_CST(a1, &v8);
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids,
        v4);
    }
  }
  else
  {
    v5 = v8;
    v4 = ValidateAcpiCStates(v8);
    if ( v4 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 8u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids,
          v4);
      v6 = v8;
    }
    else
    {
      v6 = 0LL;
      *a2 = v5;
      v4 = 0;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)v4;
}
