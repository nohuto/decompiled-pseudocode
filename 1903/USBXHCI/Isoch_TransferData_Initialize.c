/*
 * XREFs of Isoch_TransferData_Initialize @ 0x1C0031C08
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C002FE68 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     McTemplateK0uqqq @ 0x1C00040C4 (McTemplateK0uqqq.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C000415C (WPP_RECORDER_SF_DDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 */

__int64 __fastcall Isoch_TransferData_Initialize(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned __int16 v8; // ax
  ULONG v9; // r14d
  _QWORD *v10; // rbx
  unsigned __int16 v11; // ax
  __int64 v12; // rax
  struct _MDL *Mdl; // rax
  __int64 v14; // rax
  _QWORD v16[5]; // [rsp+40h] [rbp-68h] BYREF

  v6 = 0;
  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v16);
  v7 = v16[1];
  v8 = *(_WORD *)(v16[1] + 2LL);
  if ( v8 < 0x39u || v8 > 0x3Au )
    v9 = *(_DWORD *)(v16[1] + 36LL);
  else
    v9 = *(_DWORD *)(v16[1] + 52LL);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    a2,
                    off_1C0056090);
  memset(v10, 0, 0x300uLL);
  v10[1] = v10;
  *v10 = v10;
  *((_BYTE *)v10 + 16) = 1;
  v10[3] = a2;
  v10[6] = v7;
  v10[7] = a1;
  *((_DWORD *)v10 + 17) = 259;
  *((_DWORD *)v10 + 16) = 0;
  v10[9] = 0LL;
  *((_DWORD *)v10 + 20) = v9;
  *(_QWORD *)((char *)v10 + 84) = 0LL;
  *((_DWORD *)v10 + 23) = 0;
  *((_DWORD *)v10 + 24) = *(_DWORD *)(v7 + 132);
  *(_QWORD *)((char *)v10 + 100) = 0LL;
  *(_QWORD *)((char *)v10 + 108) = 0LL;
  *((_DWORD *)v10 + 29) = 0;
  *((_DWORD *)v10 + 32) = 976;
  *((_WORD *)v10 + 66) = 0;
  *((_BYTE *)v10 + 134) = 0;
  v11 = *(_WORD *)(v7 + 2);
  if ( v11 >= 0x39u && v11 <= 0x3Au )
  {
LABEL_13:
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2280))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              a2);
      if ( (int)IoGetActivityIdIrp(v14, v10 + 4) < 0 )
        EtwActivityIdControl(3u, (LPGUID)v10 + 2);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        McTemplateK0uqqq(
          (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(a1 + 56),
          (const GUID *)v10 + 2,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64),
          *((_DWORD *)v10 + 20));
    }
    goto LABEL_18;
  }
  v12 = *(_QWORD *)(v7 + 48);
  if ( v12 )
  {
    v10[9] = v12;
    goto LABEL_13;
  }
  Mdl = IoAllocateMdl(*(PVOID *)(v7 + 40), v9, 0, 0, 0LL);
  v10[9] = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    goto LABEL_13;
  }
  v6 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      0xFu,
      (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      a2);
LABEL_18:
  *a3 = v10;
  return v6;
}
