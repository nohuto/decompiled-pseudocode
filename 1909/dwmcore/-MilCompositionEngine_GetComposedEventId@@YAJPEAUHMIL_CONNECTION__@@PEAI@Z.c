/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800E61C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x1800E620C (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall MilCompositionEngine_GetComposedEventId(struct HMIL_CONNECTION__ *a1, unsigned int *a2)
{
  signed int ComposedEventId; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( a1 )
  {
    ComposedEventId = CInternalMilCmdConnection::GetComposedEventId(a1, a2);
    v4 = ComposedEventId;
    if ( ComposedEventId < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802BA91C, 1u, ComposedEventId, 0x8Cu, 0LL);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802BA91C, 1u, 0x80070057, 0x88u, 0LL);
  }
  return v4;
}
