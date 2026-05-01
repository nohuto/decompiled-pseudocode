/*
 * XREFs of ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x180170600
 * Callers:
 *     ?cleanup@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAXXZ @ 0x1803B61E4 (-cleanup@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800831C4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 */

ImmersiveIconsLogging *__fastcall ImmersiveIconsLogging::`vector deleting destructor'(
        ImmersiveIconsLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
