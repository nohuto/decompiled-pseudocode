/*
 * XREFs of ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01F8D8C
 * Callers:
 *     NtUserProcessInkFeedbackCommand @ 0x1C021AFF0 (NtUserProcessInkFeedbackCommand.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C022D580 (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 */

__int64 __fastcall InkProcessorProcessInkFeedbackCommand(unsigned int a1, void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  if ( a1 < 5 )
  {
    v3 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    if ( InkProcessor::s_pInstance )
    {
      v4 = InkProcessor::ProcessInkFeedbackCommand(InkProcessor::s_pInstance, a1, a2, a3);
      v3 = v4;
      if ( v4 < 0 && dword_1C030C390 > 2u )
      {
        v10 = 0;
        v6 = v4;
        v8 = &v6;
        v9 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
      }
    }
    else if ( dword_1C030C390 > 2u )
    {
      v10 &= (unsigned int)InkProcessor::s_pInstance;
      v8 = &v6;
      v6 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
      v9 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
  }
  else
  {
    v3 = -1073741811;
    if ( dword_1C030C390 > 2u )
    {
      v10 = 0;
      v8 = &v6;
      v6 = -1073741811;
      v9 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
  }
  return v3;
}
