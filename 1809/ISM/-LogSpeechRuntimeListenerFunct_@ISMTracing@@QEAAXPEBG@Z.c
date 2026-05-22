/*
 * XREFs of ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x180059900
 * Callers:
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800599D8 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180059AF0 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogSpeechRuntimeListenerFunct_(ISMTracing *this, const unsigned __int16 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const unsigned __int16 *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v3 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    v4 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      LODWORD(v5) = 0;
      if ( a2 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( a2[v5] );
      }
      v9 = 0;
      if ( !a2 )
        a2 = &sourceString;
      v7 = a2;
      v8 = 2 * v5 + 2;
      TlgWrite((TraceLoggingHProvider)v4, &unk_180167ABF, 0LL, 0LL, 3u, &pData);
    }
  }
}
