/*
 * XREFs of ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ @ 0x1800D78A0
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ @ 0x1800DF708 (-ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::UpdateMMCSSTask(CGlobalManipulationManager *this)
{
  int v1; // ebx
  signed int LastError; // eax
  __int64 v4; // rcx

  v1 = 0;
  if ( qword_18033CCA8 )
  {
    SetLastError(0);
    if ( !SetEvent(qword_18033CCA8) )
    {
      LastError = GetLastError();
      v1 = LastError;
      if ( LastError > 0 )
        v1 = (unsigned __int16)LastError | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v1, 0xA7u, 0LL);
    }
  }
  return (unsigned int)v1;
}
