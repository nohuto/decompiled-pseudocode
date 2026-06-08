/*
 * XREFs of InitAcpi2CStates @ 0x1C0020848
 * Callers:
 *     InitAcpiCStates @ 0x1C00207A0 (InitAcpiCStates.c)
 *     AcpiCStateNotifyWorker @ 0x1C002DBB0 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     ValidateAcpiCStates @ 0x1C00208C0 (ValidateAcpiCStates.c)
 *     AcpiEval_CST @ 0x1C0021888 (AcpiEval_CST.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rdi
  int v7; // eax
  void *v8; // rcx
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+28h] [rbp-10h]
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = AcpiEval_CST(a1, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids);
    }
    else
    {
      v10 = v4;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids,
        v10);
    }
  }
  else
  {
    v6 = v12;
    v7 = ValidateAcpiCStates(v12);
    v5 = v7;
    if ( v7 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 8u);
      v11 = v7;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids,
        v11);
      v8 = v12;
    }
    else
    {
      v8 = 0LL;
      *a2 = v6;
      v5 = 0;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return v5;
}
