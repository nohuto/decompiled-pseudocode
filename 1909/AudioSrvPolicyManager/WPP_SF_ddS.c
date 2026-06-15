/*
 * XREFs of WPP_SF_ddS @ 0x180008A00
 * Callers:
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180009170 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_ddS(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, int a4, char a5, const wchar_t *a6)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  int v11; // [rsp+88h] [rbp+20h] BYREF

  v11 = a4;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10LL;
  }
  v9 = L"NULL";
  if ( a6 )
    v9 = a6;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids,
           0xDu,
           &v11,
           4LL,
           &a5,
           4LL,
           v9,
           v8,
           0LL);
}
