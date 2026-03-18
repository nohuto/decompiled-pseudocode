/*
 * XREFs of RootHub_UcxEvtGetHubStatus @ 0x1C00243E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027744 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetHubStatus(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rbp
  int v6; // eax
  _QWORD v8[5]; // [rsp+70h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  memset(v8, 0, sizeof(v8));
  LOWORD(v8[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v8);
  v5 = v8[1];
  if ( *(_BYTE *)(v8[1] + 128LL) != 0xA0
    || *(_BYTE *)(v8[1] + 129LL)
    || *(_WORD *)(v8[1] + 130LL)
    || *(_WORD *)(v8[1] + 132LL)
    || *(_WORD *)(v8[1] + 134LL) != 4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(v8[1] + 134LL),
        *(unsigned __int8 *)(v8[1] + 133LL),
        104);
    v6 = -1073741820;
  }
  else
  {
    **(_DWORD **)(v8[1] + 40LL) = 0;
    v6 = 0;
  }
  *(_DWORD *)(v5 + 4) = v6;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2);
}
