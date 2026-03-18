/*
 * XREFs of RootHub_UcxEvtGetInfo @ 0x1C00205A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RootHub_UcxEvtGetInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // r8
  unsigned int v5; // edi
  int v6; // edx
  int v7; // ecx
  int v9; // [rsp+28h] [rbp-50h]
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+30h] [rbp-48h]
  _QWORD v12[5]; // [rsp+40h] [rbp-38h] BYREF

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F220);
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v12);
  v4 = (_WORD *)v12[1];
  if ( *(_DWORD *)v12[1] >= 0x10u )
  {
    v5 = 0;
    *(_DWORD *)(v12[1] + 4LL) = 0;
    v6 = *(unsigned __int16 *)(v3 + 20);
    v4[4] = v6;
    v7 = *(unsigned __int16 *)(v3 + 22);
    v4[5] = v7;
    v4[6] = *(_WORD *)(v3 + 24);
    v4[7] = *(_WORD *)(v3 + 26);
    v11 = v7;
    v10 = v6;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xBu,
      0xC0u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v10,
      v11);
  }
  else
  {
    v9 = *(_DWORD *)v12[1];
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0xBFu,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v9);
    v5 = -1073741811;
  }
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v5);
}
