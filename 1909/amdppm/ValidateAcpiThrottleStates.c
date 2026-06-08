/*
 * XREFs of ValidateAcpiThrottleStates @ 0x1C002EB7C
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C002C714 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0003010 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C000AB54 (WPP_RECORDER_SF_ddd.c)
 *     Validate_PCT_PTC @ 0x1C002E8CC (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpiThrottleStates(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v10; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+28h] [rbp-20h]
  unsigned int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    return (unsigned int)-1073741823;
  v6 = 1LL;
  if ( *a2 > 1u )
  {
    v7 = 0LL;
    v8 = a2 + 7;
    while ( *(v8 - 1) < a2[5 * v7 + 1] && *v8 <= a2[5 * v7 + 2] )
    {
      v6 = (unsigned int)(v6 + 1);
      v7 = (unsigned int)(v7 + 1);
      v8 += 5;
      if ( (unsigned int)v6 >= *a2 )
        goto LABEL_8;
    }
    *a3 = 2048;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, v6, 0x11u, v10);
    return (unsigned int)-1073741823;
  }
LABEL_8:
  if ( a2[1] != 100 )
  {
    *a3 = 2048;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Number = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x12u,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
        Number);
    }
    return (unsigned int)-1073741823;
  }
  v5 = Validate_PCT_PTC(a1);
  if ( v5 < 0 )
  {
    *a3 = 1024;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = v5;
      v12 = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
        v12,
        v13);
    }
  }
  return (unsigned int)v5;
}
