/*
 * XREFs of ?OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x1800C1DD0
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C25EC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x18002217C (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputETW::ContextualProcessing::OnFocusRequest(const unsigned __int16 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const unsigned __int16 *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v2 = *((_QWORD *)InputETW::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    LODWORD(v3) = 0;
    if ( a1 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( a1[v3] );
    }
    v7 = 0;
    if ( !a1 )
      a1 = &sourceString;
    v5 = a1;
    v6 = 2 * v3 + 2;
    TlgWrite((TraceLoggingHProvider)v2, &unk_18016AC67, 0LL, 0LL, 3u, &pData);
  }
}
