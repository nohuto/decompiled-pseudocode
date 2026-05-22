/*
 * XREFs of ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004EE00
 * Callers:
 *     ?cleanup@?$static_lazy@VISMTracing@@@details@wil@@QEAAXXZ @ 0x18005643C (-cleanup@-$static_lazy@VISMTracing@@@details@wil@@QEAAXXZ.c)
 *     ?cleanup@?$static_lazy@VInputETW@@@details@wil@@QEAAXXZ @ 0x18006DC00 (-cleanup@-$static_lazy@VInputETW@@@details@wil@@QEAAXXZ.c)
 *     ?cleanup@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAXXZ @ 0x180099D38 (-cleanup@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAXXZ.c)
 *     _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_ @ 0x18009ADB0 (_lambda_f655bc6deafeea110b0bcdbdac4bd35f_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAXXZ @ 0x1800D9604 (-cleanup@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAXXZ.c)
 *     ?cleanup@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAXXZ @ 0x1800E6A60 (-cleanup@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wi.c)
 *     _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_ @ 0x180149840 (_lambda_9dbe22df4b880a8e911c86b950d68f95_--_lambda_invoker_cdecl_.c)
 *     _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_ @ 0x180149890 (_lambda_fbd0f72fdb52924b760b88d2d8805198_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18004EA1C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ISMTracing *__fastcall ISMTracing::`scalar deleting destructor'(ISMTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
