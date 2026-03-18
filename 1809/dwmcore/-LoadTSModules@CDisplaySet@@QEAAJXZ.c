/*
 * XREFs of ?LoadTSModules@CDisplaySet@@QEAAJXZ @ 0x1800E81D0
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180080124 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::LoadTSModules(CDisplaySet *this)
{
  unsigned int v1; // ebx
  HMODULE LibraryW; // rax
  FARPROC ProcAddress; // rax
  signed int LastError; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_QWORD *)this + 66)
    || (SetLastError(0), LibraryW = LoadLibraryW(L"rdsdwmdr.dll"), (*((_QWORD *)this + 66) = LibraryW) != 0LL) )
  {
    if ( *((_QWORD *)this + 67) )
      return v1;
    SetLastError(0);
    ProcAddress = GetProcAddress(*((HMODULE *)this + 66), "DwmIndirectOutput");
    *((_QWORD *)this + 67) = ProcAddress;
    if ( ProcAddress )
      return v1;
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v7 = 761;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v7 = 755;
  }
  if ( LastError >= 0 )
    LastError = -2003304445;
  v1 = LastError;
  MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, LastError, v7);
  return v1;
}
