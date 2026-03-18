/*
 * XREFs of SecureDmaEnabler_Create @ 0x1C006ADCC
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C006AF4C (SecureDmaEnabler_CreateSecureObject.c)
 */

__int64 __fastcall SecureDmaEnabler_Create(__int64 a1, __int64 **a2)
{
  int SecureObject; // ebx
  __int64 *v5; // rdi
  int v7; // [rsp+28h] [rbp-48h]
  int v8; // [rsp+30h] [rbp-40h] BYREF
  __int128 v9; // [rsp+34h] [rbp-3Ch]
  int v10; // [rsp+44h] [rbp-2Ch]
  int v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+4Ch] [rbp-24h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]
  void *v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF

  v16 = 0LL;
  v10 = 0;
  v14 = 0LL;
  v11 = 1;
  v12 = 1;
  v15 = off_1C0056360;
  v13 = *(_QWORD *)(a1 + 8);
  v9 = 0LL;
  v8 = 56;
  SecureObject = (*(__int64 (__fastcall **)(unsigned __int64, int *, __int64 *))(WdfFunctions_01023 + 1656))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   &v8,
                   &v16);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = SecureObject;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        2u,
        0x12u,
        0xAu,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v7);
    }
    goto LABEL_8;
  }
  v5 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    v16,
                    off_1C0056360);
  *v5 = v16;
  v5[1] = a1;
  SecureObject = SecureDmaEnabler_CreateSecureObject(v5);
  if ( SecureObject >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a1 + 72),
        4u,
        0x12u,
        0xBu,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v16);
    *a2 = v5;
LABEL_8:
    if ( SecureObject >= 0 )
      return (unsigned int)SecureObject;
  }
  if ( v16 )
    (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return (unsigned int)SecureObject;
}
