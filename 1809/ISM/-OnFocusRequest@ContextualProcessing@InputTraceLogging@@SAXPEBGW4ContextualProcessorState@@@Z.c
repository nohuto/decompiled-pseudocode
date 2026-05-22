/*
 * XREFs of ?OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z @ 0x1800C2024
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C25EC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall InputTraceLogging::ContextualProcessing::OnFocusRequest(const WCHAR *a1, int a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // r10
  int v6; // r8d
  const WCHAR *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  int v11; // ebx
  const char *v12; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+5Ch] [rbp-2Ch]
  const char *v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+68h] [rbp-20h]
  int v20; // [rsp+6Ch] [rbp-1Ch]

  v4 = InputTraceLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 4u )
  {
    v6 = *((_DWORD *)v4 + 4);
    LODWORD(v4) = 1024;
    if ( (v6 & 0x400) != 0 && (*((_QWORD *)v5 + 3) & 0x400LL) == *((_QWORD *)v5 + 3) )
    {
      v7 = &sourceString;
      v8 = -1LL;
      LODWORD(v9) = 0;
      if ( a1 )
      {
        v7 = a1;
        v9 = -1LL;
        do
          ++v9;
        while ( a1[v9] );
      }
      v15 = v7;
      v16 = 2 * v9 + 2;
      v17 = 0;
      if ( a2 )
      {
        v10 = a2 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 1 )
              v12 = "Listen";
            else
              v12 = "UNKNOWN";
          }
          else
          {
            v12 = "Handle";
          }
        }
        else
        {
          v12 = "Buffer";
        }
      }
      else
      {
        v12 = "Ignore";
      }
      do
        ++v8;
      while ( v12[v8] );
      v18 = v12;
      v19 = v8 + 1;
      v20 = 0;
      LODWORD(v4) = TlgWrite(v5, &unk_18016ACDE, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}
