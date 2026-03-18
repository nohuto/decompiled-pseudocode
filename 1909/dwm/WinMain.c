/*
 * XREFs of WinMain @ 0x140001960
 * Callers:
 *     __scrt_common_main_seh @ 0x140002E50 (__scrt_common_main_seh.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001880 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     McGenEventRegister @ 0x140001B30 (McGenEventRegister.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B50 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001F30 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400027C0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002890 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     _Init_thread_footer @ 0x1400034B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003518 (_Init_thread_header.c)
 *     IsImmDisableIMEPresent @ 0x140004880 (IsImmDisableIMEPresent.c)
 */

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  HANDLE CurrentProcess; // rax
  int v7; // ebx
  HRESULT v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // eax
  CDwmAppHost *v13; // rcx
  int v14; // eax
  CDwmAppHost *v15; // rcx
  int v16; // eax
  CDwmAppHost *v17; // rcx
  int v18; // r9d
  signed int LastError; // eax
  signed int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-28h]
  int ProcessInformation[6]; // [rsp+30h] [rbp-18h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( dword_140010A50 > *(_DWORD *)(*ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_140010A50, *ThreadLocalStoragePointer, lpCmdLine, nShowCmd);
    if ( dword_140010A50 == -1 )
    {
      dword_14001029C = -2147024348;
      Init_thread_footer(&dword_140010A50);
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
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      v22 = 145;
      if ( v7 >= 0 )
        v7 = -2003304445;
      goto LABEL_31;
    }
  }
  SetErrorMode(0xC001u);
  v7 = WerSetFlags(0x28u);
  if ( v7 == -2147467263 )
    v7 = 0;
  if ( v7 < 0 )
  {
    v22 = 162;
LABEL_31:
    v18 = v7;
    goto LABEL_15;
  }
  SetLastError(0);
  if ( !HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL) )
  {
    v21 = GetLastError();
    v7 = v21;
    if ( v21 > 0 )
      v7 = (unsigned __int16)v21 | 0x80070000;
    v22 = 172;
    if ( v7 >= 0 )
      v7 = -2003304445;
    goto LABEL_31;
  }
  v8 = DXGIDeclareAdapterRemovalSupport();
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010290, 4u, v8, 0xAFu);
    goto LABEL_16;
  }
  McGenEventRegister(
    &Microsoft_Windows_Dwm_Dwm_Provider,
    v9,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context);
  McGenEventRegister(
    &Microsoft_Windows_Dwm_Udwm_Provider,
    v10,
    &Microsoft_Windows_Dwm_Udwm_Provider_Context,
    &Microsoft_Windows_Dwm_Udwm_Provider_Context);
  McGenEventRegister(
    &WERSVC_TRIGGER_PROVIDER_GUID,
    v11,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context);
  v12 = CheckForDwmGroupSid();
  v7 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010290, 4u, v12, 0xB6u);
    goto LABEL_16;
  }
  v14 = CDwmAppHost::Initialize(v13, hInstance);
  v7 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010290, 4u, v14, 0xB8u);
    goto LABEL_16;
  }
  v16 = CDwmAppHost::Run(v15);
  v7 = v16;
  if ( v16 < 0 )
  {
    v22 = 186;
    v18 = v16;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010290, 4u, v18, v22);
  }
LABEL_16:
  CDwmAppHost::Shutdown(v17, v7);
  return v7;
}
