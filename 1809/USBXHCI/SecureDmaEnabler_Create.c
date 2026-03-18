/*
 * XREFs of SecureDmaEnabler_Create @ 0x1C0062BC4
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005C350 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C0062D1C (SecureDmaEnabler_CreateSecureObject.c)
 */

__int64 __fastcall SecureDmaEnabler_Create(__int64 a1, __int64 **a2)
{
  int v4; // eax
  int SecureObject; // ebx
  __int64 *v6; // rdi
  _QWORD v8[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+90h] [rbp+20h] BYREF

  v9 = 0LL;
  memset(v8, 0, 0x38uLL);
  v8[3] = 0x100000001LL;
  v8[6] = off_1C004F338;
  v8[4] = *(_QWORD *)(a1 + 8);
  LODWORD(v8[0]) = 56;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v8,
         &v9);
  SecureObject = v4;
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 72),
      2u,
      0x12u,
      0xAu,
      (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
      v4);
    goto LABEL_5;
  }
  v6 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    v9,
                    off_1C004F338);
  *v6 = v9;
  v6[1] = a1;
  SecureObject = SecureDmaEnabler_CreateSecureObject(v6);
  if ( SecureObject >= 0 )
  {
    WPP_RECORDER_SF_i(
      *(_QWORD *)(a1 + 72),
      4u,
      0x12u,
      0xBu,
      (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
      v9);
    *a2 = v6;
LABEL_5:
    if ( SecureObject >= 0 )
      return (unsigned int)SecureObject;
  }
  if ( v9 )
    (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return (unsigned int)SecureObject;
}
