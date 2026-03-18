/*
 * XREFs of Control_Initialize @ 0x1C00699F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Control_Initialize(__int64 a1)
{
  bool v2; // al
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // r9
  int v6; // r8d
  int v8; // [rsp+40h] [rbp-31h]
  __int64 v9; // [rsp+48h] [rbp-29h] BYREF
  void (__fastcall *v10)(__int64); // [rsp+50h] [rbp-21h]
  __int64 v11; // [rsp+58h] [rbp-19h]
  _QWORD v12[7]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v13[6]; // [rsp+98h] [rbp+27h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  *(_QWORD *)(a1 + 368) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 360;
  v2 = (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x20000LL) == 0
    && (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu) >= 8;
  *(_BYTE *)(a1 + 320) = v2;
  memset(v13, 0, 0x28uLL);
  LODWORD(v13[2]) = 0;
  LODWORD(v13[3]) = 0;
  v13[1] = Control_WdfEvtTimerForTransferTimeout;
  LODWORD(v13[0]) = 40;
  BYTE4(v13[2]) = 1;
  memset(v12, 0, sizeof(v12));
  v12[4] = *(_QWORD *)(a1 + 72);
  LODWORD(v12[0]) = 56;
  v12[3] = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v13,
         v12,
         a1 + 336);
  v4 = v3;
  if ( v3 >= 0 )
  {
    LODWORD(v9) = 24;
    v10 = Control_WdfDpcForCanceledOnQueueTransferCompletion;
    LOBYTE(v11) = 1;
    memset(v12, 0, sizeof(v12));
    v12[4] = *(_QWORD *)(a1 + 72);
    LODWORD(v12[0]) = 56;
    v12[3] = 0x100000001LL;
    v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _QWORD *, __int64))(WdfFunctions_01023 + 888))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           &v9,
           v12,
           a1 + 328);
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 11;
      v8 = v4;
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      goto LABEL_11;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 10;
    v8 = v3;
    v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
LABEL_11:
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      v5,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v6,
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      v8,
      v9,
      v10,
      v11);
  }
  return (unsigned int)v4;
}
