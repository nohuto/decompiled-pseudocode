/*
 * XREFs of ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJ_KPEAIPEAH@Z @ 0x18019C448
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z @ 0x18008D350 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::GetSurfaceUpdates(
        CGlobalSurfaceManager *this,
        __int64 a2,
        unsigned int *a3,
        int *a4)
{
  unsigned int v4; // ebx
  int FrameSurfaceUpdates; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v4 = 0;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&v8, a3, a4);
  if ( FrameSurfaceUpdates < 0 )
  {
    v4 = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802C06D0, 3u, FrameSurfaceUpdates | 0x10000000, 0xDCu, 0LL);
  }
  return v4;
}
