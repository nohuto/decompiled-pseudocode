/*
 * XREFs of DmaEnabler_Create @ 0x1C006A99C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 */

__int64 __fastcall DmaEnabler_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rbx
  _QWORD v14[8]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v15[10]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v16; // [rsp+F8h] [rbp+6Fh] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, 0x38uLL);
  v6 = *(_QWORD *)(a2 + 88);
  LODWORD(v14[0]) = 56;
  v14[3] = 0x100000001LL;
  v14[6] = off_1C0056018;
  v7 = XilRegister_ReadUlong(v6, (unsigned int *)(*(_QWORD *)(v6 + 24) + 16LL)) & 1;
  memset(v15, 0, sizeof(v15));
  LODWORD(v15[0]) = 80;
  HIDWORD(v15[0]) = v7 + 5;
  LODWORD(v15[9]) = 1;
  HIDWORD(v15[8]) = 3;
  v15[1] = 16776704LL;
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 752))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         v15,
         v14,
         &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 3072))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v16,
            0LL);
    v11 = v10;
    if ( v10 > 0xFFFE00 )
      v11 = 16776704;
    v12 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v16,
            off_1C0056018);
    *(_QWORD *)v12 = v16;
    *(_QWORD *)(v12 + 8) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a2 + 72),
        4u,
        0x12u,
        0xBu,
        (__int64)&WPP_ea1d73149a9b3e3169abee4329003fe0_Traceguids,
        v16);
    *(_QWORD *)(v12 + 24) = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 3080))(
                              WPP_MAIN_CB.Dpc.ProcessorHistory,
                              v16,
                              0LL);
    *(_DWORD *)(v12 + 16) = v11;
    *(_DWORD *)(v12 + 20) = (v11 >> 12) + ((v11 & 0xFFF) != 0) + 1;
    *a3 = v12;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 72),
      2u,
      0x12u,
      0xAu,
      (__int64)&WPP_ea1d73149a9b3e3169abee4329003fe0_Traceguids,
      v8);
  }
  return v9;
}
