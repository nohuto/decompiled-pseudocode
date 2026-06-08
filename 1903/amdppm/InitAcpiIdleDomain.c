/*
 * XREFs of InitAcpiIdleDomain @ 0x1C002CEF0
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0025E80 (AcpiCStateNotifyWorker.c)
 *     InitAcpiProcessorDomains @ 0x1C002D19C (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     Display_CSD @ 0x1C0005C94 (Display_CSD.c)
 *     AcpiEval_CSD @ 0x1C0023CF0 (AcpiEval_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x1C002ECDC (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int *v13; // rcx
  unsigned int *v15; // [rsp+58h] [rbp+20h] BYREF

  v6 = AcpiEval_CSD(a1, &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = a3;
    v9 = v15;
    v10 = ValidateAcpiIdleDomain(v15, v8);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      Display_CSD(v9, v11, v12);
      v13 = 0LL;
      *a2 = v9;
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
          v10);
      v13 = v15;
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
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
