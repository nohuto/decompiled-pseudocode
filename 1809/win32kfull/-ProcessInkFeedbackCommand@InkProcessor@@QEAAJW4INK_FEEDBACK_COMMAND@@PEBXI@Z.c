/*
 * XREFs of ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C022D580
 * Callers:
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01F8D8C (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0237848 (-ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 */

__int64 __fastcall InkProcessor::ProcessInkFeedbackCommand(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  _DWORD v11[4]; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+6Ch] [rbp+3h]
  const char *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v8 = *(_BYTE *)(a1 + 8) == 0 ? 0xC0000001 : 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v9 = InkFeedbackServer::ProcessInkFeedbackCommand(a1 + 96, a2, a3, a4);
    v8 = v9;
    if ( v9 < 0 && dword_1C030C390 > 2u )
    {
      v15 = 0;
      v11[0] = v9;
      v13 = v11;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
  }
  else if ( dword_1C030C390 > 2u )
  {
    v15 = 0;
    v18 = 0;
    v13 = v11;
    v16 = "Ink processor not enabled";
    v11[0] = v8;
    v14 = 4;
    v17 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &pData);
  }
  if ( a1 )
  {
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
  }
  return v8;
}
