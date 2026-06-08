/*
 * XREFs of InitAcpiPerfDomain @ 0x1C002D060
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C002D1AC (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     Display_xSD @ 0x1C00056E0 (Display_xSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C0022BC4 (AcpiEval_PSD_TSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C002F05C (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiPerfDomain(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // ebx
  unsigned int *v5; // rdi
  __int64 v6; // r8
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  unsigned int *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = AcpiEval_PSD_TSD(a1, 1146310751, &v10);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = v10;
    LOBYTE(v3) = 1;
    v4 = ValidateAcpi_PSD_TSD(v10, v3);
    if ( v4 >= 0 )
    {
      v4 = 0;
      Display_xSD(v5, "_PSD", v6);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x200u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = v4;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids,
          v9);
      }
      v5 = v10;
    }
  }
  else
  {
    v5 = 0LL;
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xDu,
          (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xEu,
        (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids,
        v8);
    }
  }
  *(_QWORD *)(a1 + 456) = v5;
  return (unsigned int)v4;
}
