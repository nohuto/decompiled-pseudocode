/*
 * XREFs of Endpoint_SM_ResetEndpoint @ 0x1C0017B44
 * Callers:
 *     ESM_ResettingEndpoint @ 0x1C0040BF0 (ESM_ResettingEndpoint.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 */

__int64 __fastcall Endpoint_SM_ResetEndpoint(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // r9d
  unsigned int v9; // eax
  int v10; // r9d
  _QWORD v12[5]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = *(_QWORD *)(a1 + 272);
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v2,
    v12);
  v3 = v12[1];
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(a1 + 272),
         off_1C004F068);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(v4 + 16), 0, 0x60uLL);
  v6 = *(_DWORD *)(v4 + 52);
  *(_QWORD *)(v4 + 56) = Endpoint_OnResetEndpointResetCompletion;
  *(_QWORD *)(v4 + 64) = v4;
  v7 = v6 & 0xFFFF03FF | 0x3800;
  *(_DWORD *)(v4 + 52) = v7;
  *(_DWORD *)(v4 + 52) = v7 ^ (v7 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v4 + 55) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  v8 = *(_DWORD *)(v4 + 52);
  *(_QWORD *)(v4 + 88) = 0LL;
  v9 = v8 & 0xFFFFFDFF;
  *(_QWORD *)(v4 + 96) = 0LL;
  v10 = v8 | 0x200;
  *(_QWORD *)(v4 + 104) = 0LL;
  if ( (*(_DWORD *)(v3 + 32) & 1) == 0 )
    v10 = v9;
  *(_DWORD *)(v4 + 52) = v10;
  return Command_SendCommand(v5, v4 + 16);
}
