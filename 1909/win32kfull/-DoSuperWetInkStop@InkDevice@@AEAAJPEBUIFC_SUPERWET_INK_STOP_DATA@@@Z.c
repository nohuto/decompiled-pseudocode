/*
 * XREFs of ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C0250924
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0251590 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C0251F70 (-TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0250300 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStop(InkDevice *this, const struct IFC_SUPERWET_INK_STOP_DATA *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const CHAR *v6; // rdx
  LPCGUID v7; // r9
  int v9; // [rsp+30h] [rbp-79h] BYREF
  char *v10; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-69h] BYREF
  int *v12; // [rsp+60h] [rbp-49h]
  __int64 v13; // [rsp+68h] [rbp-41h]
  const char *v14; // [rsp+70h] [rbp-39h]
  __int64 v15; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  char **v17; // [rsp+90h] [rbp-19h]
  __int64 v18; // [rsp+98h] [rbp-11h]
  const struct IFC_SUPERWET_INK_STOP_DATA *v19; // [rsp+A0h] [rbp-9h]
  __int64 v20; // [rsp+A8h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+7h] BYREF
  int *v22; // [rsp+D0h] [rbp+27h]
  __int64 v23; // [rsp+D8h] [rbp+2Fh]

  v4 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 2u, (__int64)a2, 4u);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( dword_1C031F298 > 4u )
    {
      v6 = (const CHAR *)*((_QWORD *)this + 10);
      v12 = &v9;
      v9 = 0;
      v14 = "Stopped super-wet ink";
      v13 = 4LL;
      v15 = 22LL;
      TlgCreateSz(&pDesc, v6);
      v18 = 8LL;
      v17 = &v10;
      v10 = (char *)this + 32;
      v19 = a2;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8969, 0LL, v7, 7u, &v11);
    }
  }
  else if ( dword_1C031F298 > 2u )
  {
    v9 = v4;
    v22 = &v9;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
  }
  return v5;
}
