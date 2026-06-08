/*
 * XREFs of InitAcpiIdleDomain @ 0x1C0020244
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C0020148 (InitAcpiProcessorDomains.c)
 *     AcpiCStateNotifyWorker @ 0x1C0030190 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     Display_CSD @ 0x1C000B324 (Display_CSD.c)
 *     AcpiEval_CSD @ 0x1C0021B3C (AcpiEval_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x1C002D160 (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  unsigned int *v10; // rdi
  int v11; // eax
  unsigned int *v12; // rcx
  unsigned int *v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = AcpiEval_CSD(a1, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = v13;
    v11 = ValidateAcpiIdleDomain(v13, v9);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v7 = 0;
      Display_CSD(v10);
      v12 = 0LL;
      *a2 = v10;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x10u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids,
          v11);
      v12 = v13;
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else if ( v6 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids,
      v6);
  }
  return v7;
}
