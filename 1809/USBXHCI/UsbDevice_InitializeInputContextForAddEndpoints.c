/*
 * XREFs of UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00048C0
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0004770 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0015570 (Endpoint_Enable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0035F9C (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C0038238 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0038C48 (WPP_RECORDER_SF_dqq.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddEndpoints(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r15d
  __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned int v8; // ebx
  __int64 v9; // r12
  __int64 v10; // r13
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rbx
  __int64 v16; // rbx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rbx
  int v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+20h] [rbp-58h]
  _BYTE *v24; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v24 = (_BYTE *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(a1 + 440),
                   off_1C004F068);
  v5 = 0;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 649) != 0 ? 8 : 0) + a1 + 632);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 16);
  else
    v7 = 0LL;
  v8 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      v9 = 8LL * v8;
      v10 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(v9 + *(_QWORD *)(a2 + 32)),
              off_1C004F180);
      v11 = Endpoint_Enable(v10);
      v5 = v11;
      if ( v11 < 0 )
        break;
      v12 = *(_DWORD *)(a2 + 24);
      if ( ++v8 >= v12 )
      {
        if ( v12 )
        {
          do
          {
            v13 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * v4),
                    off_1C004F180);
            v14 = *(_DWORD *)(v13 + 144);
            v15 = (unsigned int)(v14 - 1) + 2LL;
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 100LL) & 4) != 0 )
              v16 = v15 << 6;
            else
              v16 = 32 * v15;
            v20 = v7 + v16;
            UsbDevice_InitializeEndpointContext(a1, v13, v20);
            *(_DWORD *)(v7 + 4) |= 1 << v14;
            WPP_RECORDER_SF_ddddd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              *(unsigned __int8 *)(v20 + 2),
              *(unsigned __int16 *)(v20 + 6),
              (*(_DWORD *)(v20 + 4) >> 3) & 7,
              v22,
              *(_BYTE *)(a1 + 135),
              v14,
              (*(_DWORD *)(v20 + 4) >> 3) & 7,
              *(_WORD *)(v20 + 6),
              *(_BYTE *)(v20 + 2));
            ++v4;
          }
          while ( v4 < *(_DWORD *)(a2 + 24) );
        }
        return v5;
      }
    }
    v17 = *(unsigned __int8 *)(a1 + 135);
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v17,
      12,
      39,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *(_BYTE *)(a1 + 135),
      *(_DWORD *)(v10 + 144),
      v11);
    for ( ; v8; --v8 )
    {
      v9 -= 8LL;
      v19 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(v9 + *(_QWORD *)(a2 + 32)),
              off_1C004F180);
      Endpoint_Disable(v19, 0LL);
    }
    if ( *(_DWORD *)(a2 + 40) )
    {
      *v24 = 1;
      WPP_RECORDER_SF_dqq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        *(unsigned __int8 *)(a1 + 135),
        v18,
        40,
        v23,
        *(_BYTE *)(a1 + 135),
        *(_QWORD *)(a1 + 424),
        *(_QWORD *)a1);
    }
  }
  return v5;
}
