/*
 * XREFs of InitAcpiIdleDomain @ 0x1C0020648
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C002054C (InitAcpiProcessorDomains.c)
 *     AcpiCStateNotifyWorker @ 0x1C002DBB0 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     Display_CSD @ 0x1C000AD24 (Display_CSD.c)
 *     AcpiEval_CSD @ 0x1C00212E4 (AcpiEval_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x1C002AFF8 (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  unsigned int *v10; // rdi
  int v11; // eax
  unsigned int *v12; // rcx
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+28h] [rbp-10h]
  unsigned int *v15; // [rsp+58h] [rbp+20h] BYREF

  v6 = AcpiEval_CSD(a1, &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = v15;
    v11 = ValidateAcpiIdleDomain(v15, v9);
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
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x10u);
      v14 = v11;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids,
        v14);
      v12 = v15;
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else if ( v6 == -1073741772 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids);
  }
  else
  {
    v13 = v6;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids,
      v13);
  }
  return v7;
}
