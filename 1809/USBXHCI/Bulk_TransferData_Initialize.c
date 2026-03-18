/*
 * XREFs of Bulk_TransferData_Initialize @ 0x1C0032B34
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C003122C (Bulk_RetrieveNextStage.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C0033340 (Bulk_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     McTemplateK0uqqq @ 0x1C0003558 (McTemplateK0uqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 */

signed int __fastcall Bulk_TransferData_Initialize(__int64 a1, _QWORD *a2, __int64 a3)
{
  signed int result; // eax
  __int64 v7; // rbp
  unsigned __int16 v8; // ax
  char v9; // cl
  signed int *v10; // rbx
  __int64 v11; // rax
  _QWORD v12[5]; // [rsp+40h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a3,
             v12);
  if ( !*((_BYTE *)a2 + 16) )
  {
    v7 = v12[1];
    v8 = *(_WORD *)(v12[1] + 2LL);
    if ( v8 <= 0x38u || (v9 = 1, v8 > 0x3Au) )
      v9 = 0;
    v10 = (signed int *)(v12[1] + 52LL);
    if ( !v9 )
      v10 = (signed int *)(v12[1] + 36LL);
    memset(a2, 0, 0x160uLL);
    a2[1] = a2;
    *a2 = a2;
    *((_BYTE *)a2 + 16) = 1;
    a2[3] = a3;
    a2[6] = v7;
    a2[7] = a1;
    a2[8] = 0LL;
    a2[9] = 259LL;
    a2[10] = 0LL;
    a2[11] = 0LL;
    a2[12] = 0LL;
    result = *v10;
    *((_DWORD *)a2 + 26) = *v10;
    *(_QWORD *)((char *)a2 + 108) = 0LL;
    *(_QWORD *)((char *)a2 + 116) = 0LL;
    *((_DWORD *)a2 + 32) = 464;
    *((_WORD *)a2 + 66) = 0;
    *((_BYTE *)a2 + 134) = 0;
    *v10 = 0;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2280))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              a3);
      result = IoGetActivityIdIrp(v11, a2 + 4);
      if ( result < 0 )
        result = EtwActivityIdControl(3u, (LPGUID)a2 + 2);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        return McTemplateK0uqqq(
                 *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 56),
                 *(_QWORD *)(a1 + 48),
                 (const GUID *)a2 + 2,
                 *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                 *(_DWORD *)(a1 + 64),
                 *((_DWORD *)a2 + 26));
    }
  }
  return result;
}
