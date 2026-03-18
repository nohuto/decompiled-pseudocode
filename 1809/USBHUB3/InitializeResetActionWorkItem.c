/*
 * XREFs of InitializeResetActionWorkItem @ 0x1C007BB94
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall InitializeResetActionWorkItem(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  _QWORD v8[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v9[7]; // [rsp+48h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[6] = off_1C005F068;
  LODWORD(v9[0]) = 56;
  v9[3] = 0x100000001LL;
  v8[1] = EvtResetActionWorkItem;
  v8[2] = 1LL;
  v9[4] = a3;
  v8[0] = 24LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, _QWORD *))(WdfFunctions_01015 + 3032))(
             WdfDriverGlobals,
             v8,
             v9,
             a1);
  v7 = result;
  if ( (int)result >= 0 )
  {
    *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  *a1,
                  off_1C005F068)
              + 24) = a2;
    return v7;
  }
  return result;
}
