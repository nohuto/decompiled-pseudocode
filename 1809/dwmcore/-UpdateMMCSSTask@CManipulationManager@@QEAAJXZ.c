/*
 * XREFs of ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18008A55C
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180062418 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18008A454 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::UpdateMMCSSTask(CManipulationManager *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( hEvent )
  {
    SetLastError(0);
    if ( !SetEvent(hEvent) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v1 = LastError;
      MilInstrumentationCheckHR_MaybeFailFast(0x88980003, 0LL, 0, LastError, 0x126u);
    }
  }
  return v1;
}
