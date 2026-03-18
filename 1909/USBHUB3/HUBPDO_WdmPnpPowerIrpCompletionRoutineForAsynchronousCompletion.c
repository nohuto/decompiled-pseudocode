/*
 * XREFs of HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion @ 0x1C0019B90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v10)(__int64); // [rsp+38h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-40h]
  _QWORD v12[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+98h] [rbp+18h] BYREF

  v3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  memset(v12, 0, sizeof(v12));
  v6 = *(_QWORD *)(a3 + 16);
  v12[6] = off_1C0064090;
  LODWORD(v12[0]) = 56;
  v12[3] = 0x100000001LL;
  v12[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v6);
  v11 = 1LL;
  v10 = HUBPDO_EvtCompleteIrpWorkItem;
  v9 = 24LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
         WdfDriverGlobals,
         &v9,
         v12,
         &v13);
  if ( v7 >= 0 )
  {
    *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v13,
                 off_1C0064090) = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v13);
    return (unsigned int)-1073741802;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 1432LL),
      2u,
      5u,
      0x8Fu,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
      v7);
  }
  return v3;
}
