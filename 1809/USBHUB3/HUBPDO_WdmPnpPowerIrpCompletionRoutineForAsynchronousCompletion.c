/*
 * XREFs of HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion @ 0x1C00183E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  int v7; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+98h] [rbp+18h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  memset(v10, 0, sizeof(v10));
  v6 = *(_QWORD *)(a3 + 16);
  v10[6] = off_1C005F090;
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v10[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v6);
  v9[2] = 1LL;
  v9[1] = HUBPDO_EvtCompleteIrpWorkItem;
  v9[0] = 24LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
         WdfDriverGlobals,
         v9,
         v10,
         &v11);
  if ( v7 >= 0 )
  {
    *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v11,
                 off_1C005F090) = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v11);
    return (unsigned int)-1073741802;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 1432LL),
      2u,
      5u,
      0x8Fu,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
      v7);
  }
  return v3;
}
