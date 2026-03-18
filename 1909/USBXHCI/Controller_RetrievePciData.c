/*
 * XREFs of Controller_RetrievePciData @ 0x1C0061CF4
 * Callers:
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_PopulatePciDeviceInformation @ 0x1C00615E4 (Controller_PopulatePciDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrievePciData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // r14
  unsigned int v13; // esi
  int v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+28h] [rbp-D8h]
  __int64 v17; // [rsp+28h] [rbp-D8h]
  _BYTE v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v21[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v22[128]; // [rsp+90h] [rbp-70h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64, int *, _BYTE *))(WdfFunctions_01023 + 648))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         14LL,
         4LL,
         &v20,
         v18);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v8;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x85u, (__int64)&Context.Logger + 4, v16);
  }
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64, unsigned int *, _BYTE *))(WdfFunctions_01023 + 648))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         16LL,
         4LL,
         &v19,
         v18);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = v19;
    LOWORD(v17) = 1;
    LOWORD(v15) = 64;
    v13 = HIWORD(v19);
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, GUID *, _QWORD *, int, _DWORD, _QWORD))(WdfFunctions_01023 + 1048))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a1,
           &GUID_BUS_INTERFACE_STANDARD,
           v21,
           v15,
           v17,
           0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v10;
      v11 = 135;
      goto LABEL_7;
    }
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int16 *, _QWORD, int))v21[7])(v21[1], 0LL, v22, 0LL, 256);
    if ( v9 == 256 )
    {
      Controller_PopulatePciDeviceInformation(a2, v20, v13, v12, v21, v22, a3, a4);
      return v10;
    }
    v10 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 136;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 134;
LABEL_7:
    LODWORD(v17) = v9;
    WPP_RECORDER_SF_d(a2, 2u, 4u, v11, (__int64)&Context.Logger + 4, v17);
  }
  return v10;
}
