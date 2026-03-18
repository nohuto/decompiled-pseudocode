/*
 * XREFs of ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x180143588
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180143680 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180143B78 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(
        struct wil::FailureInfo *a1,
        char *a2,
        unsigned __int64 a3)
{
  char v3; // bp
  __int64 v4; // rbx
  unsigned __int64 CurrentThreadId; // r10
  __int64 i; // rbx
  struct wil::details::ThreadFailureCallbackHolder *v10; // rbx
  char v11; // al

  *a2 = 0;
  v3 = 0;
  v4 = wil::details::g_pThreadFailureCallbacks;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    CurrentThreadId = GetCurrentThreadId();
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == (_DWORD)CurrentThreadId )
        goto LABEL_7;
    }
  }
  i = 0LL;
LABEL_7:
  if ( i && *(_QWORD *)i )
  {
    *a2 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(
           a1,
           *(struct wil::details::ThreadFailureCallbackHolder **)i,
           a2,
           a3) )
    {
      *((_QWORD *)a1 + 8) = a2;
    }
    v10 = *(struct wil::details::ThreadFailureCallbackHolder **)i;
    do
    {
      v11 = (***((__int64 (__fastcall ****)(_QWORD, struct wil::FailureInfo *))v10 + 1))(*((_QWORD *)v10 + 1), a1);
      v10 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v10 + 2);
      v3 |= v11;
    }
    while ( v10 );
  }
  if ( wil::details::g_pfnTelemetryCallback )
    wil::details::g_pfnTelemetryCallback(v3, a1);
}
