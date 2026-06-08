/*
 * XREFs of ValidateAcpi2PStates @ 0x1C002184C
 * Callers:
 *     InitAcpiPerfStates @ 0x1C0020570 (InitAcpiPerfStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00093AC (WPP_RECORDER_SF_dd.c)
 *     Validate_PCT_PTC @ 0x1C0022AB0 (Validate_PCT_PTC.c)
 *     ValidatePssCore @ 0x1C0022AEC (ValidatePssCore.c)
 */

__int64 __fastcall ValidateAcpi2PStates(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // ebx
  unsigned __int16 v8; // r9
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v6 = ValidatePssCore(a2, "_PSS");
  if ( v6 < 0 )
  {
    *a3 |= 0x40u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v6;
    v8 = 12;
    v10 = v6;
    Number = KeGetPcr()->Prcb.Number;
LABEL_10:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v8,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      Number,
      v10);
    return (unsigned int)v6;
  }
  v6 = Validate_PCT_PTC(a1);
  if ( v6 < 0 )
  {
    *a3 |= 0x20u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v6;
    v8 = 13;
    goto LABEL_9;
  }
  if ( qword_1C001B4E0 )
  {
    v6 = qword_1C001B4E0(a1, a2, a3);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v6;
      v8 = 14;
LABEL_9:
      v10 = v6;
      Number = KeGetPcr()->Prcb.Number;
      goto LABEL_10;
    }
  }
  return 0;
}
