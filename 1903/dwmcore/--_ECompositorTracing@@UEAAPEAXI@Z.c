/*
 * XREFs of ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x18022D600
 * Callers:
 *     ?cleanup@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAXXZ @ 0x180242688 (-cleanup@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18022D5BC (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

CompositorTracing *__fastcall CompositorTracing::`vector deleting destructor'(CompositorTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
