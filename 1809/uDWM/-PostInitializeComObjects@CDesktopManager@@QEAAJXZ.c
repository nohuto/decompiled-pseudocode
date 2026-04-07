/*
 * XREFs of ?PostInitializeComObjects@CDesktopManager@@QEAAJXZ @ 0x180079638
 * Callers:
 *     ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x180079E80 (-s_ServiceStarted@CWaitForService@@CAXPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::PostInitializeComObjects(CDesktopManager *this)
{
  unsigned int v2; // edi
  signed int LastError; // eax

  v2 = 0;
  SetLastError(0);
  if ( !PostThreadMessageW(*((_DWORD *)this + 164), 0x409u, 0LL, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v2 = LastError;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x696u);
  }
  return v2;
}
