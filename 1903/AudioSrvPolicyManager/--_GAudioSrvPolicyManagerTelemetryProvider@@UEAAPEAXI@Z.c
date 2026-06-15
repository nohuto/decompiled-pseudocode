/*
 * XREFs of ??_GAudioSrvPolicyManagerTelemetryProvider@@UEAAPEAXI@Z @ 0x180004B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AudioSrvPolicyManagerTelemetryProvider *__fastcall AudioSrvPolicyManagerTelemetryProvider::`scalar deleting destructor'(
        AudioSrvPolicyManagerTelemetryProvider *this,
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
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
