/*
 * XREFs of InitAcpiPerfDomain @ 0x1C0021A4C
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C0021B5C (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     Display_xSD @ 0x1C000732C (Display_xSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C0023D1C (AcpiEval_PSD_TSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C002F4C0 (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiPerfDomain(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  unsigned int *v5; // rdi
  int v6; // eax
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+28h] [rbp-10h]
  unsigned int *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = AcpiEval_PSD_TSD(a1, 1146310751LL, &v11);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = v11;
    LOBYTE(v3) = 1;
    v6 = ValidateAcpi_PSD_TSD(v11, v3);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v4 = 0;
      Display_xSD(v5, "_PSD", v7);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x200u);
      v10 = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xFu,
        (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids,
        v10);
      v5 = v11;
    }
  }
  else
  {
    v5 = 0LL;
    if ( v2 == -1073741772 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xDu,
        (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids);
    }
    else
    {
      v9 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xEu,
        (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids,
        v9);
    }
  }
  *(_QWORD *)(a1 + 440) = v5;
  return v4;
}
