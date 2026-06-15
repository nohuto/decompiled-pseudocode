/*
 * XREFs of WPP_SF_Sis @ 0x1800183FC
 * Callers:
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001D020 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001DE44 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_Sis(
        TRACEHANDLE LoggerHandle,
        USHORT a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        const char *a6)
{
  __int64 v6; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  const char *v12; // rax
  const wchar_t *v13; // rcx

  v6 = -1LL;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a6[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5LL;
  }
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v11 = 2 * v6 + 2;
  }
  else
  {
    v11 = 10LL;
  }
  v12 = "NULL";
  v13 = L"NULL";
  if ( a6 )
    v12 = a6;
  if ( a4 )
    v13 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids,
           a2,
           v13,
           v11,
           &a5,
           8LL,
           v12,
           v10,
           0LL);
}
