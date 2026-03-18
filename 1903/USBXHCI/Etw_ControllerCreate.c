/*
 * XREFs of Etw_ControllerCreate @ 0x1C003E34C
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqtn @ 0x1C0007064 (McTemplateK0pqqqqqqqsssxqqqtn.c)
 */

ULONG __fastcall Etw_ControllerCreate(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // r11d
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // r10
  __int64 v10; // rdx
  ULONG result; // eax
  int v12; // [rsp+20h] [rbp-98h]
  int v13; // [rsp+28h] [rbp-90h]
  int v14; // [rsp+30h] [rbp-88h]
  int v15; // [rsp+38h] [rbp-80h]
  int v16; // [rsp+40h] [rbp-78h]
  int v17; // [rsp+48h] [rbp-70h]
  int v18; // [rsp+50h] [rbp-68h]
  int v19; // [rsp+78h] [rbp-40h]
  int v20; // [rsp+80h] [rbp-38h]
  int v21; // [rsp+88h] [rbp-30h]
  int v22; // [rsp+90h] [rbp-28h]

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    v3 = *(unsigned __int8 *)(a2 + 536);
    v4 = *(unsigned __int8 *)(a2 + 256);
    v5 = a2 + 309;
    v6 = *(unsigned __int16 *)(a2 + 252);
    v7 = a2 + 314;
    v8 = *(unsigned __int16 *)(a2 + 248);
    v9 = a2 + 304;
    v10 = *(unsigned __int16 *)(a2 + 268);
    v22 = v3;
    v21 = *(_DWORD *)(a2 + 176);
    v20 = *(_DWORD *)(a2 + 392);
    v19 = *(_DWORD *)(a2 + 464);
    v18 = v4;
    v17 = v6;
    v16 = v8;
    v15 = v10;
    v14 = *(unsigned __int16 *)(a2 + 264);
    v13 = *(_DWORD *)(a2 + 260);
    v12 = *(_DWORD *)(a2 + 244);
    return McTemplateK0pqqqqqqqsssxqqqtn(
             v3,
             v10,
             v7,
             *(_QWORD *)(a2 + 8),
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18,
             v9,
             v5,
             v7,
             *(_QWORD *)(a2 + 328),
             v19,
             v20,
             v21,
             v22);
  }
  return result;
}
