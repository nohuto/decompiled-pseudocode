/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0018C40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C00140FC (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C001621C (Endpoint_InitializeTransferRing.c)
 */

__int64 __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 *v7; // rsi
  char *v8; // rax
  int v9; // ebx
  _DWORD *v10; // rdx
  __int64 v12; // rbp
  __int64 v13; // r11
  __int64 v14; // r11
  __int16 v15; // ax
  char v16; // al
  __int64 v17; // rax
  __int64 DequeuePointer; // rax
  unsigned int v19; // r10d
  __int64 v20; // r11
  __int64 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  __int128 v23; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v24[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v24);
  v3 = v24[1];
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v24[1] + 24LL),
         off_1C004F180);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)v4 + 72LL),
    4u,
    0xDu,
    0x1Eu,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL),
    *(_DWORD *)(v4 + 144),
    *(_DWORD *)(v3 + 32));
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 88LL);
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 144LL);
  v7 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    a2,
                    off_1C004F068);
  memset(v7, 0, 0x78uLL);
  *v7 = v4;
  *((_DWORD *)v7 + 4) = *(_DWORD *)(v3 + 32);
  v8 = XilEndpoint_AcquireBuffer((_BYTE *)v4, (*(_DWORD *)(v5 + 100) & 4) != 0 ? 2112 : 1056, v4, 829714501);
  v9 = 0;
  v7[1] = (__int64)v8;
  if ( v8 )
  {
    v12 = *((_QWORD *)v8 + 2);
    v13 = -(__int64)((*(_DWORD *)(v5 + 100) & 4) != 0);
    *(_DWORD *)(v12 + 4) |= 2u;
    v14 = v12 + (v13 & 0x40) + 64;
    *(_DWORD *)(v14 + 4) ^= (*(_DWORD *)(v14 + 4) ^ (8 * *(_DWORD *)(v4 + 120))) & 0x38;
    v15 = *((_WORD *)v7 + 8);
    *(_BYTE *)(v14 + 2) = 0;
    *(_DWORD *)v14 &= 0xFFFF80FF;
    *(_WORD *)(v14 + 6) = v15;
    *(_BYTE *)(v14 + 5) = 0;
    v16 = *(_BYTE *)(v4 + 99) & 3;
    v23 = *(_OWORD *)(*(_QWORD *)v4 + 272LL);
    if ( v16 != 1 )
    {
      if ( ((v16 == 3) & _bittest64((const signed __int64 *)&v23, 0x34u)) == 0
        || *(char *)(v4 + 98) >= 0
        || (v17 = *(_QWORD *)(v4 + 16), *(_WORD *)(v17 + 124) != 1529)
        || *(_WORD *)(v17 + 126) != 4353
        || *(_DWORD *)(v17 + 36) <= 1u )
      {
        v9 = 6;
      }
    }
    *(_DWORD *)(v14 + 4) = v9 & 0xFFFFFFFE | *(_DWORD *)(v14 + 4) & 0xFFFFFFF8;
    DequeuePointer = Endpoint_GetDequeuePointer(v4, 0);
    *(_QWORD *)(v20 + 8) = DequeuePointer;
    *(_DWORD *)(v4 + 152) = HIWORD(v19);
    Endpoint_InitializeTransferRing((__int64 *)v4, 0);
    memset(v7 + 3, 0, 0x60uLL);
    v7[9] = (__int64)v7;
    v7[8] = (__int64)Endpoint_EvaluateContextCompletion;
    *((_DWORD *)v7 + 15) = *((_DWORD *)v7 + 15) & 0xFFFF03FF | 0x3400;
    *((_BYTE *)v7 + 63) = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
    v7[6] = *(_QWORD *)(v7[1] + 24);
    v7[12] = v12;
    *((_DWORD *)v7 + 26) = *(_DWORD *)(v7[1] + 44);
    *((_DWORD *)v7 + 27) = 2;
    v7[14] = v4;
    return Command_SendCommand(v6, (__int64)(v7 + 3));
  }
  else
  {
    LODWORD(v22) = *(_DWORD *)(v4 + 144);
    LODWORD(v21) = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)v4 + 72LL),
      2u,
      0xDu,
      0x1Fu,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v21,
      v22);
    v10 = (_DWORD *)v7[1];
    if ( v10 )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v4 + 120LL), v10);
      v7[1] = 0LL;
    }
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             3221225626LL);
  }
}
