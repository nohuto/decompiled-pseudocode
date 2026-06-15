/*
 * XREFs of WPP_SF_SSd @ 0x18000882C
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18000A0A0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000E9DC (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000FF60 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_SSd(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  __int64 v5; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r10
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rax
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = -1LL;
  v7 = 10LL;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10LL;
  }
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v7 = 2 * v5 + 2;
  }
  v10 = L"NULL";
  v11 = L"NULL";
  if ( a5 )
    v11 = a5;
  if ( a4 )
    v10 = a4;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, v10, v7, v11, v9, va, 4LL, 0LL);
}
