/*
 * XREFs of ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x180084D5C
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x180084E00 (-MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z.c)
 * Callees:
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180084CBC (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CConnection::GetComposedEventId(CConnection *this, unsigned int *a2)
{
  unsigned int v4; // edi
  int CompositionId; // esi
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ecx
  char *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  CompositionId = DwmQueryCompositionId();
  v10 = (char *)this + 112;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  if ( *((_QWORD *)this + 19) || (v7 = OpenComposedEvent(CompositionId, v6, (void **)this + 19), v4 = v7, v7 >= 0) )
    *a2 = CompositionId;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180276198, 1u, v7, 0x254u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v4;
}
