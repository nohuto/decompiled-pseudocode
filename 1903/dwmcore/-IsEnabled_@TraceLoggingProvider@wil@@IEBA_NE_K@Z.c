/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800D60B4
 * Callers:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D5EAC (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800D5F80 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180086B28 (TraceLoggingProviderEnabled.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this)
{
  const struct _TlgProvider_t *v1; // rcx
  char v2; // r10

  v1 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 )
    return TraceLoggingProviderEnabled(v1, 0, 0LL) != 0;
  return v2;
}
