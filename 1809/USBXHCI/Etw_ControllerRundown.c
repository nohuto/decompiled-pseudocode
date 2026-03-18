/*
 * XREFs of Etw_ControllerRundown @ 0x1C00014AC
 * Callers:
 *     Etw_EnableCallback @ 0x1C0001260 (Etw_EnableCallback.c)
 * Callees:
 *     Etw_DeviceListRundown @ 0x1C00017F0 (Etw_DeviceListRundown.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqq @ 0x1C00059B8 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqq.c)
 */

__int64 __fastcall Etw_ControllerRundown(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // r15d
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  int v9; // edx
  int v11; // [rsp+128h] [rbp-A0h]
  int v12; // [rsp+130h] [rbp-98h]
  int v13; // [rsp+138h] [rbp-90h]
  int v14; // [rsp+140h] [rbp-88h]
  int v15; // [rsp+148h] [rbp-80h]
  int v16; // [rsp+150h] [rbp-78h]
  int v17; // [rsp+158h] [rbp-70h]
  int v18; // [rsp+160h] [rbp-68h]
  int v19; // [rsp+170h] [rbp-58h]
  int v20; // [rsp+174h] [rbp-54h]
  int v21; // [rsp+178h] [rbp-50h]
  int v22; // [rsp+17Ch] [rbp-4Ch]
  int v23; // [rsp+180h] [rbp-48h]
  int v24; // [rsp+1D8h] [rbp+10h]
  int v25; // [rsp+1E0h] [rbp+18h]
  int v26; // [rsp+1E8h] [rbp+20h]

  v2 = *(_DWORD **)(a2 + 88);
  LOBYTE(v3) = -1;
  if ( v2 )
  {
    v23 = v2[20];
    v22 = v2[21];
    v21 = v2[24];
    v20 = v2[25];
    v19 = v2[26];
    v24 = v2[28];
  }
  else
  {
    LOBYTE(v23) = -1;
    LOBYTE(v22) = -1;
    LOBYTE(v21) = -1;
    LOBYTE(v20) = -1;
    LOBYTE(v19) = -1;
    LOBYTE(v24) = -1;
  }
  v6 = *(_QWORD *)(a2 + 96);
  if ( v6 )
    v26 = *(_DWORD *)(v6 + 20);
  else
    LOBYTE(v26) = -1;
  v7 = *(_QWORD *)(a2 + 128);
  if ( v7 )
  {
    v3 = *(_DWORD *)(v7 + 20);
    v25 = *(_DWORD *)(v7 + 16);
  }
  else
  {
    LOBYTE(v25) = -1;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
  {
    v18 = *(_DWORD *)(a2 + 432);
    v17 = *(_DWORD *)(a2 + 428);
    v16 = *(_DWORD *)(a2 + 424);
    v15 = *(_DWORD *)(a2 + 420);
    v14 = *(_DWORD *)(a2 + 416);
    v13 = *(_DWORD *)(a2 + 412);
    v12 = *(_DWORD *)(a2 + 408);
    v11 = *(_DWORD *)(a2 + 600);
    v8 = *(unsigned __int8 *)(a2 + 584);
    v9 = *(unsigned __int8 *)(a2 + 473);
    McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqq(
      v8,
      v9,
      a1,
      *(_QWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 180),
      *(_BYTE *)(a2 + 256),
      *(_BYTE *)(a2 + 257),
      *(_DWORD *)(a2 + 196),
      *(_WORD *)(a2 + 200),
      *(_WORD *)(a2 + 204),
      *(_WORD *)(a2 + 184),
      *(_WORD *)(a2 + 188),
      *(_BYTE *)(a2 + 192),
      a2 + 240,
      a2 + 245,
      a2 + 250,
      *(_QWORD *)(a2 + 264),
      *(_DWORD *)(a2 + 400),
      *(_DWORD *)(a2 + 328),
      *(_DWORD *)(a2 + 176),
      *(_BYTE *)(a2 + 472),
      v9,
      *(_DWORD *)(a2 + 476),
      *(_DWORD *)(a2 + 480),
      *(_DWORD *)(a2 + 564),
      v8,
      *(_QWORD *)(a2 + 272),
      *(_QWORD *)(a2 + 280),
      v23,
      v22,
      v21,
      v20,
      v19,
      v26,
      v3,
      v25,
      v24,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return Etw_DeviceListRundown(a1, a2);
}
