/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x180084E00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x180084D5C (-GetComposedEventId@CConnection@@QEAAJPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilCompositionEngine_GetComposedEventId(struct HMIL_CONNECTION__ *a1, unsigned int *a2)
{
  int ComposedEventId; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  if ( a1 )
  {
    ComposedEventId = CConnection::GetComposedEventId(a1, a2);
    v4 = ComposedEventId;
    if ( ComposedEventId < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180276198, 1u, ComposedEventId, 0x8Fu);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0, &dword_180276198, 1u, -2147024809, 0x8Bu);
  }
  return v4;
}
