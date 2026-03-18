/*
 * XREFs of DmaEnabler_Create @ 0x1C00627D8
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005C350 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 */

__int64 __fastcall DmaEnabler_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  _QWORD v13[8]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v14[10]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v15; // [rsp+F0h] [rbp+6Fh] BYREF

  memset(v13, 0, 0x38uLL);
  v6 = *(_QWORD *)(a2 + 88);
  LODWORD(v13[0]) = 56;
  v13[3] = 0x100000001LL;
  v13[6] = off_1C004F018;
  v7 = XilRegister_ReadUlong(v6, (unsigned int *)(*(_QWORD *)(v6 + 24) + 16LL)) & 1;
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[0]) = 80;
  HIDWORD(v14[0]) = v7 + 5;
  LODWORD(v14[9]) = 1;
  HIDWORD(v14[8]) = 3;
  v14[1] = 16776704LL;
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 752))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         v14,
         v13,
         &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 3072))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v15,
            0LL);
    if ( v10 > 0xFFFE00 )
      LODWORD(v10) = 16776704;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v15,
            off_1C004F018);
    *(_QWORD *)v11 = v15;
    *(_QWORD *)(v11 + 8) = a2;
    WPP_RECORDER_SF_i(
      *(_QWORD *)(a2 + 72),
      4u,
      0x12u,
      0xBu,
      (__int64)&WPP_ea1d73149a9b3e3169abee4329003fe0_Traceguids,
      v15);
    *(_QWORD *)(v11 + 24) = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 3080))(
                              WPP_MAIN_CB.Dpc.ProcessorHistory,
                              v15,
                              0LL);
    *(_DWORD *)(v11 + 16) = v10;
    *(_DWORD *)(v11 + 20) = ((unsigned int)v10 >> 12) + ((v10 & 0xFFF) != 0) + 1;
    *a3 = v11;
  }
  else
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
