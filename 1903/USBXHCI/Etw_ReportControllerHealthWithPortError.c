/*
 * XREFs of Etw_ReportControllerHealthWithPortError @ 0x1C0006820
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001890 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     RootHub_DetectPortsInComplianceMode @ 0x1C0003BD8 (RootHub_DetectPortsInComplianceMode.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0063E20 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqq @ 0x1C000770C (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqq.c)
 */

__int64 __fastcall Etw_ReportControllerHealthWithPortError(__int64 a1, __int64 a2, int a3, int *a4)
{
  _DWORD *v4; // rax
  int v5; // r15d
  int v6; // r12d
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // ecx
  int v11; // edx
  int v12; // [rsp+128h] [rbp-C0h]
  int v13; // [rsp+130h] [rbp-B8h]
  int v14; // [rsp+138h] [rbp-B0h]
  int v15; // [rsp+140h] [rbp-A8h]
  int v16; // [rsp+148h] [rbp-A0h]
  int v17; // [rsp+150h] [rbp-98h]
  int v18; // [rsp+158h] [rbp-90h]
  int v19; // [rsp+160h] [rbp-88h]
  __int64 v20; // [rsp+170h] [rbp-78h]
  int v21; // [rsp+190h] [rbp-58h]
  int v22; // [rsp+194h] [rbp-54h]
  int v23; // [rsp+198h] [rbp-50h]
  int v24; // [rsp+19Ch] [rbp-4Ch]
  int v25; // [rsp+1A0h] [rbp-48h]
  int v26; // [rsp+1A4h] [rbp-44h]
  int v27; // [rsp+1F0h] [rbp+8h]
  char v28; // [rsp+1F8h] [rbp+10h]

  v4 = *(_DWORD **)(a2 + 88);
  LOBYTE(v5) = -1;
  LOBYTE(v6) = 0;
  if ( v4 )
  {
    v26 = v4[20];
    v25 = v4[21];
    v24 = v4[24];
    v23 = v4[25];
    v22 = v4[26];
    v27 = v4[28];
  }
  else
  {
    LOBYTE(v26) = -1;
    LOBYTE(v25) = -1;
    LOBYTE(v24) = -1;
    LOBYTE(v23) = -1;
    LOBYTE(v22) = -1;
    LOBYTE(v27) = -1;
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
    v21 = *(_DWORD *)(v8 + 20);
  else
    LOBYTE(v21) = -1;
  result = *(_QWORD *)(a2 + 128);
  if ( result )
  {
    v5 = *(_DWORD *)(result + 20);
    result = *(unsigned int *)(result + 16);
    v28 = result;
  }
  else
  {
    v28 = -1;
  }
  if ( a3 && a4 )
    v6 = *a4;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x20) != 0 )
  {
    v20 = a2 + 180;
    v19 = *(_DWORD *)(a2 + 500);
    v18 = *(_DWORD *)(a2 + 496);
    v17 = *(_DWORD *)(a2 + 492);
    v16 = *(_DWORD *)(a2 + 488);
    v15 = *(_DWORD *)(a2 + 484);
    v14 = *(_DWORD *)(a2 + 480);
    v13 = *(_DWORD *)(a2 + 476);
    v12 = *(_DWORD *)(a2 + 664);
    v10 = *(unsigned __int8 *)(a2 + 648);
    v11 = *(unsigned __int8 *)(a2 + 537);
    return McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqq(
             v10,
             v11,
             *(unsigned __int8 *)(a2 + 536),
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 244),
             *(_BYTE *)(a2 + 320),
             *(_BYTE *)(a2 + 321),
             *(_DWORD *)(a2 + 260),
             *(_WORD *)(a2 + 264),
             *(_WORD *)(a2 + 268),
             *(_WORD *)(a2 + 248),
             *(_WORD *)(a2 + 252),
             *(_BYTE *)(a2 + 256),
             a2 + 304,
             a2 + 309,
             a2 + 314,
             *(_QWORD *)(a2 + 328),
             *(_DWORD *)(a2 + 464),
             *(_DWORD *)(a2 + 392),
             *(_DWORD *)(a2 + 176),
             *(_BYTE *)(a2 + 536),
             v11,
             *(_DWORD *)(a2 + 540),
             *(_DWORD *)(a2 + 544),
             *(_DWORD *)(a2 + 628),
             v10,
             *(_QWORD *)(a2 + 336),
             *(_QWORD *)(a2 + 344),
             v26,
             v25,
             v24,
             v23,
             v22,
             v21,
             v5,
             v28,
             v27,
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19,
             64,
             v20,
             a3,
             v6);
  }
  return result;
}
