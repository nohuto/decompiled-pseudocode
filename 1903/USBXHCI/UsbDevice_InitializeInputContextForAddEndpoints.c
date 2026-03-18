/*
 * XREFs of UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000583C
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C00056D8 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C00182F0 (Endpoint_Enable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C003B188 (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C003D588 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C003DF98 (WPP_RECORDER_SF_dqq.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddEndpoints(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // r14
  unsigned int v8; // edi
  __int64 v9; // r13
  int v10; // eax
  int v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rdi
  __int64 v16; // rdi
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdi
  int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+90h] [rbp+8h]
  _BYTE *v23; // [rsp+98h] [rbp+10h]

  v4 = 0;
  v23 = (_BYTE *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(a1 + 440),
                   off_1C0056090);
  v5 = 0;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
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
      v22 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(*(_QWORD *)(a2 + 32) + v9),
              off_1C00561A8);
      v10 = Endpoint_Enable(v22);
      v5 = v10;
      if ( v10 < 0 )
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
                    off_1C00561A8);
            v14 = *(_DWORD *)(v13 + 144);
            v15 = (unsigned int)(v14 - 1) + 2LL;
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 100LL) & 4) != 0 )
              v16 = v15 << 6;
            else
              v16 = 32 * v15;
            v19 = v7 + v16;
            UsbDevice_InitializeEndpointContext(a1, v13, v19);
            *(_DWORD *)(v7 + 4) |= 1 << v14;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ddddd(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                *(unsigned __int8 *)(v19 + 2),
                *(unsigned __int16 *)(v19 + 6),
                (*(_DWORD *)(v19 + 4) >> 3) & 7,
                v21,
                *(_BYTE *)(a1 + 135),
                v14,
                (*(_DWORD *)(v19 + 4) >> 3) & 7,
                *(_WORD *)(v19 + 6),
                *(_BYTE *)(v19 + 2));
            ++v4;
          }
          while ( v4 < *(_DWORD *)(a2 + 24) );
        }
        return v5;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = *(unsigned __int8 *)(a1 + 135);
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v17,
        12,
        39,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(a1 + 135),
        *(_DWORD *)(v22 + 144),
        v10);
    }
    for ( ; v8; --v8 )
    {
      v9 -= 8LL;
      v18 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(*(_QWORD *)(a2 + 32) + v9),
              off_1C00561A8);
      Endpoint_Disable(v18, 0LL);
    }
    if ( *(_DWORD *)(a2 + 40) )
    {
      *v23 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqq(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          *(unsigned __int8 *)(a1 + 135),
          v11,
          40,
          v21,
          *(_BYTE *)(a1 + 135),
          *(_QWORD *)(a1 + 424),
          *(_QWORD *)a1);
    }
  }
  return v5;
}
