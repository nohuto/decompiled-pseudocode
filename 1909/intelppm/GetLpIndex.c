/*
 * XREFs of GetLpIndex @ 0x1C002E9D0
 * Callers:
 *     <none>
 * Callees:
 *     SaveDevExt @ 0x1C0003F54 (SaveDevExt.c)
 *     LookupNtProcessorNumber @ 0x1C0003F94 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     GetDevExtFromIndex @ 0x1C00082B4 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00093AC (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall GetLpIndex(_DWORD *a1)
{
  unsigned int v2; // edi
  unsigned int LpIndexFromApicId; // esi
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+30h] [rbp-18h]

  a1[18] = -1;
  a1[14] = -1;
  v2 = 0;
  LpIndexFromApicId = HvlGetLpIndexFromApicId((unsigned int)a1[12]);
  if ( LpIndexFromApicId != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001B398,
      0LL);
    if ( GetDevExtFromIndex(LpIndexFromApicId) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = a1[12];
        v6 = a1[13];
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x11u,
          (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
          v6,
          v8);
      }
    }
    else
    {
      a1[18] = LpIndexFromApicId;
      SaveDevExt((__int64)a1, LpIndexFromApicId);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001B398);
  }
  if ( a1[18] == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = a1[12];
      LODWORD(v5) = a1[13];
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x12u,
        (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
        v5,
        v7);
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    LookupNtProcessorNumber(a1);
  }
  return v2;
}
