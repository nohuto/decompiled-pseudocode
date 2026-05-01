/*
 * XREFs of PdcpFireClientCallWatchdog @ 0x180072AD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _TlgCreateSz @ 0x180072C84 (_TlgCreateSz.c)
 */

void __fastcall PdcpFireClientCallWatchdog(PTP_CALLBACK_INSTANCE Instance, _BYTE *Context, PTP_TIMER Timer)
{
  HANDLE CurrentProcess; // rax
  int v5; // eax
  const CHAR *v6; // rdx
  DWORD dwSize; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int InputBuffer; // [rsp+50h] [rbp-B0h] BYREF
  const wchar_t *v13; // [rsp+58h] [rbp-A8h]
  WCHAR ExeName[64]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+E0h] [rbp-20h]
  int v16; // [rsp+E8h] [rbp-18h]
  int v17; // [rsp+ECh] [rbp-14h]
  int v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F4h] [rbp-Ch]
  int v20; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v22; // [rsp+130h] [rbp+30h]
  int v23; // [rsp+138h] [rbp+38h]
  int v24; // [rsp+13Ch] [rbp+3Ch]
  int *v25; // [rsp+140h] [rbp+40h]
  int v26; // [rsp+148h] [rbp+48h]
  int v27; // [rsp+14Ch] [rbp+4Ch]
  int *v28; // [rsp+150h] [rbp+50h]
  int v29; // [rsp+158h] [rbp+58h]
  int v30; // [rsp+15Ch] [rbp+5Ch]
  int *v31; // [rsp+160h] [rbp+60h]
  int v32; // [rsp+168h] [rbp+68h]
  int v33; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+180h] [rbp+80h] BYREF

  Context[8] = 1;
  memset_0(&InputBuffer, 0, 0xC0uLL);
  v19 = 0;
  v13 = L"PdcCallWdog";
  v15 = *((_QWORD *)Context + 2);
  v16 = *((_DWORD *)Context + 6);
  v17 = *((_DWORD *)Context + 7);
  v18 = *((_DWORD *)Context + 8);
  v20 = *((_DWORD *)Context + 3);
  InputBuffer = 33;
  dwSize = 64;
  CurrentProcess = GetCurrentProcess();
  QueryFullProcessImageNameW(CurrentProcess, 0, ExeName, &dwSize);
  NtPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xC0u, 0LL, 0);
  if ( (unsigned int)dword_18009B160 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B160, 0x400000000000uLL) )
    {
      v5 = *((_DWORD *)Context + 8);
      v6 = (const CHAR *)*((_QWORD *)Context + 2);
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v8 = v5;
      v9 = *((_DWORD *)Context + 6);
      v10 = *((_DWORD *)Context + 7);
      v11 = *((_DWORD *)Context + 3);
      v22 = &v8;
      v25 = &v9;
      v28 = &v10;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v31 = &v11;
      TlgCreateSz(&pDesc, v6);
      TlgCreateWsz(&v35, ExeName);
      TlgWrite((TraceLoggingHProvider)&dword_18009B160, &unk_18008DA0A, 0LL, 0LL, 8u, &pData);
    }
  }
}
