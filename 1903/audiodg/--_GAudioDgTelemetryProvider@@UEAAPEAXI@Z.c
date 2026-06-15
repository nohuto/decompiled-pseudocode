/*
 * XREFs of ??_GAudioDgTelemetryProvider@@UEAAPEAXI@Z @ 0x14002A370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x140029E70 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioDgTelemetryProvider *__fastcall AudioDgTelemetryProvider::`scalar deleting destructor'(
        AudioDgTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
