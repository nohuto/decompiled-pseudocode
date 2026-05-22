/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18004FA60
 * Callers:
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006BFD8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800995E4 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x18009D6B0 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8450 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800E28C0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180159878 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this, unsigned __int8 a2)
{
  const struct _TlgProvider_t *v2; // rcx
  char v3; // r9

  v2 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 && (unsigned int)a2 < *(_DWORD *)v2 )
    return TlgKeywordOn(v2, 0LL) != 0;
  return v3;
}
