/*
 * XREFs of ??_ETrayNotificationAreaLogging@@UEAAPEAXI@Z @ 0x180085DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180085E04 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TrayNotificationAreaLogging *__fastcall TrayNotificationAreaLogging::`vector deleting destructor'(
        TrayNotificationAreaLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
