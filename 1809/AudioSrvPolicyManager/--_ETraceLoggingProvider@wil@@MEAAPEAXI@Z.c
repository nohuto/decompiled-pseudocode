/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18000B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

wil::TraceLoggingProvider *__fastcall wil::TraceLoggingProvider::`vector deleting destructor'(
        wil::TraceLoggingProvider *this,
        char a2)
{
  bool v2; // zf
  __int64 v5; // rbx

  v2 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( !v2 )
  {
    v5 = *((_QWORD *)this + 1);
    EventUnregister(*(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_DWORD *)v5 = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
