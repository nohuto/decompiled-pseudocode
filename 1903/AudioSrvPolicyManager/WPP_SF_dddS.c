/*
 * XREFs of WPP_SF_dddS @ 0x180008A84
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180009460 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_dddS(
        TRACEHANDLE LoggerHandle,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10LL;
  }
  v10 = L"NULL";
  if ( a7 )
    v10 = a7;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids,
           0x14u,
           &v12,
           4LL,
           &a5,
           4LL,
           &a6,
           4LL,
           v10,
           v9,
           0LL);
}
