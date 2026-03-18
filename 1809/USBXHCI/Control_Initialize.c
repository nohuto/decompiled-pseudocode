/*
 * XREFs of Control_Initialize @ 0x1C00618C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Control_Initialize(__int64 a1)
{
  bool v2; // al
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // r9
  int v6; // r8d
  int v8; // [rsp+38h] [rbp-39h]
  int v9; // [rsp+40h] [rbp-31h]
  __int64 v10; // [rsp+48h] [rbp-29h] BYREF
  void (__fastcall *v11)(__int64); // [rsp+50h] [rbp-21h]
  __int64 v12; // [rsp+58h] [rbp-19h]
  _QWORD v13[7]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v14[6]; // [rsp+98h] [rbp+27h] BYREF

  *(_QWORD *)(a1 + 368) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 360;
  v2 = (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL) & 0x20000LL) == 0
    && (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu) >= 8;
  *(_BYTE *)(a1 + 320) = v2;
  memset(v14, 0, 0x28uLL);
  LODWORD(v14[2]) = 0;
  LODWORD(v14[3]) = 0;
  v14[1] = Control_WdfEvtTimerForTransferTimeout;
  LODWORD(v14[0]) = 40;
  BYTE4(v14[2]) = 1;
  memset(v13, 0, sizeof(v13));
  v13[4] = *(_QWORD *)(a1 + 72);
  LODWORD(v13[0]) = 56;
  v13[3] = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v14,
         v13,
         a1 + 336);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 10;
    v9 = v3;
    v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
LABEL_9:
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      v5,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v6,
      v8,
      v9,
      v10,
      v11,
      v12);
    return (unsigned int)v4;
  }
  v12 = 1LL;
  v10 = 24LL;
  v11 = Control_WdfDpcForCanceledOnQueueTransferCompletion;
  memset(v13, 0, sizeof(v13));
  v13[4] = *(_QWORD *)(a1 + 72);
  LODWORD(v13[0]) = 56;
  v13[3] = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _QWORD *, __int64))(WdfFunctions_01023 + 888))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         &v10,
         v13,
         a1 + 328);
  if ( v4 < 0 )
  {
    v5 = 11;
    v9 = v4;
    v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    goto LABEL_9;
  }
  return (unsigned int)v4;
}
