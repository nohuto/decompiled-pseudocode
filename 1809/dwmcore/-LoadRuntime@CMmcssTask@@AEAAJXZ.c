/*
 * XREFs of ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18008A114
 * Callers:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008A598 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801521F4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

__int64 __fastcall CMmcssTask::LoadRuntime(CMmcssTask *this)
{
  unsigned int v1; // ebx
  HMODULE LibraryW; // rax
  FARPROC ProcAddress; // rax
  FARPROC v5; // rax
  FARPROC v6; // rax
  signed int v8; // eax
  unsigned int v9; // ecx
  signed int v10; // eax
  signed int v11; // eax
  signed int LastError; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( !*((_QWORD *)this + 6) )
  {
    SetLastError(0);
    LibraryW = LoadLibraryW(L"avrt.dll");
    *((_QWORD *)this + 6) = LibraryW;
    if ( LibraryW )
    {
      SetLastError(0);
      ProcAddress = GetProcAddress(*((HMODULE *)this + 6), "AvRevertMmThreadCharacteristics");
      *((_QWORD *)this + 8) = ProcAddress;
      if ( ProcAddress )
      {
        SetLastError(0);
        v5 = GetProcAddress(*((HMODULE *)this + 6), "AvSetMmThreadCharacteristicsW");
        *((_QWORD *)this + 7) = v5;
        if ( v5 )
        {
          SetLastError(0);
          v6 = GetProcAddress(*((HMODULE *)this + 6), "AvSetMmThreadPriority");
          *((_QWORD *)this + 9) = v6;
          if ( v6 )
            return v1;
          LastError = GetLastError();
          v1 = LastError;
          if ( LastError > 0 )
            v1 = (unsigned __int16)LastError | 0x80070000;
          v13 = 344;
        }
        else
        {
          v11 = GetLastError();
          v1 = v11;
          if ( v11 > 0 )
            v1 = (unsigned __int16)v11 | 0x80070000;
          v13 = 342;
        }
      }
      else
      {
        v10 = GetLastError();
        v1 = v10;
        if ( v10 > 0 )
          v1 = (unsigned __int16)v10 | 0x80070000;
        v13 = 340;
      }
    }
    else
    {
      v8 = GetLastError();
      v1 = v8;
      if ( v8 > 0 )
        v1 = (unsigned __int16)v8 | 0x80070000;
      v13 = 337;
    }
    if ( (v1 & 0x80000000) == 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v1, v13);
    CMmcssTask::UnloadRuntime(this);
  }
  return v1;
}
