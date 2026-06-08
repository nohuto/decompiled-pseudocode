/*
 * XREFs of AcpiEval_PPC @ 0x1C002370C
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0002D50 (EvtDeviceD0Entry.c)
 *     AcpiPStateNotifyWorker @ 0x1C0025BE0 (AcpiPStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     AcpiEvaluateMethod @ 0x1C0022290 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PPC(__int64 a1, int *a2)
{
  int v4; // eax
  PVOID v5; // rsi
  int v6; // ebx
  unsigned __int16 v7; // r9
  unsigned int *v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x100u);
  v4 = AcpiEvaluateMethod(a1, 1129336927, 0LL, (unsigned int **)&P, &v12);
  v5 = P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( !v12 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v6 = -1073741275;
        goto LABEL_19;
      }
      v7 = 33;
LABEL_5:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v7,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      goto LABEL_6;
    }
    if ( *((_DWORD *)P + 2) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x22u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          *((_DWORD *)P + 2));
      goto LABEL_6;
    }
    if ( *((_WORD *)P + 6) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v7 = 35;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
      v8 = *(unsigned int **)(a1 + 440);
    else
      v8 = *(unsigned int **)(a1 + 432);
    v9 = *v8;
    v6 = 0;
    v10 = *v8 - 1;
    if ( *((_DWORD *)P + 4) < v9 )
      v10 = *((_DWORD *)P + 4);
    *a2 = v10;
  }
LABEL_19:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x100u);
  return (unsigned int)v6;
}
