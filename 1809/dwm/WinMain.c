/*
 * XREFs of WinMain @ 0x140001890
 * Callers:
 *     __scrt_common_main_seh @ 0x140002C80 (__scrt_common_main_seh.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001760 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     McGenEventRegister @ 0x140001AE0 (McGenEventRegister.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B00 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001E20 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400025B0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002680 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     _Init_thread_footer @ 0x1400032B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003318 (_Init_thread_header.c)
 *     IsImmDisableIMEPresent @ 0x14000417C (IsImmDisableIMEPresent.c)
 */

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  int v8; // ebx
  signed int v9; // eax
  HRESULT v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  CDwmAppHost *v15; // rcx
  int v16; // eax
  CDwmAppHost *v17; // rcx
  int v18; // eax
  CDwmAppHost *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-28h]
  int ProcessInformation[6]; // [rsp+30h] [rbp-18h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( dword_14000B8B0 > *(_DWORD *)(*ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_14000B8B0, *ThreadLocalStoragePointer, lpCmdLine, nShowCmd);
    if ( dword_14000B8B0 == -1 )
    {
      dword_14000B15C = -2147024348;
      Init_thread_footer(&dword_14000B8B0);
    }
  }
  ProcessInformation[0] = 1;
  ModifyTokenPrivileges();
  CurrentProcess = GetCurrentProcess();
  SetPriorityClass(CurrentProcess, 0x80u);
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, ProcessInformation, 4u);
  if ( (unsigned __int8)IsImmDisableIMEPresent() )
  {
    SetLastError(0);
    if ( !ImmDisableIME(0xFFFFFFFF) )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      v21 = 145;
      if ( v8 >= 0 )
        v8 = -2003304445;
      goto LABEL_27;
    }
  }
  SetErrorMode(0xC001u);
  v8 = WerSetFlags(0x28u);
  if ( v8 == -2147467263 )
    v8 = 0;
  if ( v8 < 0 )
  {
    v21 = 162;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B150, 4u, v8, v21);
    goto LABEL_28;
  }
  SetLastError(0);
  if ( !HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL) )
  {
    v9 = GetLastError();
    v8 = v9;
    if ( v9 > 0 )
      v8 = (unsigned __int16)v9 | 0x80070000;
    v21 = 172;
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_27;
  }
  v10 = DXGIDeclareAdapterRemovalSupport();
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B150, 4u, v10, 0xAFu);
  }
  else
  {
    McGenEventRegister(
      &Microsoft_Windows_Dwm_Dwm_Provider,
      v11,
      &Microsoft_Windows_Dwm_Dwm_Provider_Context,
      &Microsoft_Windows_Dwm_Dwm_Provider_Context);
    McGenEventRegister(
      &Microsoft_Windows_Dwm_Udwm_Provider,
      v12,
      &Microsoft_Windows_Dwm_Udwm_Provider_Context,
      &Microsoft_Windows_Dwm_Udwm_Provider_Context);
    McGenEventRegister(
      &WERSVC_TRIGGER_PROVIDER_GUID,
      v13,
      &WERSVC_TRIGGER_PROVIDER_GUID_Context,
      &WERSVC_TRIGGER_PROVIDER_GUID_Context);
    v14 = CheckForDwmGroupSid();
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B150, 4u, v14, 0xB6u);
    }
    else
    {
      v16 = CDwmAppHost::Initialize(v15, hInstance);
      v8 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B150, 4u, v16, 0xB8u);
      }
      else
      {
        v18 = CDwmAppHost::Run(v17);
        v8 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B150, 4u, v18, 0xBAu);
      }
    }
  }
LABEL_28:
  CDwmAppHost::Shutdown(v19, v8);
  return v8;
}
