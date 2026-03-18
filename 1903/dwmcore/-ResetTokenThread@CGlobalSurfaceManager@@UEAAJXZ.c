/*
 * XREFs of ?ResetTokenThread@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800CED30
 * Callers:
 *     ?UpdateAdapterInfo@CGlobalSurfaceManager@@UEAAXPEAVCDXGIEnumeration@@@Z @ 0x1800CECD0 (-UpdateAdapterInfo@CGlobalSurfaceManager@@UEAAXPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ @ 0x1800DFA68 (-CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ResetTokenThread(CGlobalSurfaceManager *this)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  DWORD ThreadId; // ebx
  signed int TokenThread; // eax
  __int64 v7; // rcx

  v2 = -2147467260;
  v3 = (void *)*((_QWORD *)this + 42);
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 352) )
    {
      ThreadId = GetThreadId(v3);
      if ( ThreadId != GetCurrentThreadId() )
        SetEvent(*((HANDLE *)this + 43));
      return 0;
    }
  }
  else
  {
    TokenThread = CGlobalSurfaceManager::CreateTokenThread(this);
    v2 = TokenThread;
    if ( TokenThread < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, TokenThread, 0xA8u, 0LL);
  }
  return v2;
}
