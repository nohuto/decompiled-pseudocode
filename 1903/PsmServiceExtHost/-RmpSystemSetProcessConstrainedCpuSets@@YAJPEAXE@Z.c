/*
 * XREFs of ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x1800737F8
 * Callers:
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006C650 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006CF40 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemSetProcessConstrainedCpuSets(HANDLE Process, char a2)
{
  unsigned int v3; // r9d
  DWORD ProcessId; // eax
  char ProcessInformation[8]; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-11h] BYREF
  DWORD v8; // [rsp+3Ch] [rbp-Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  DWORD *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  char *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  ProcessInformation[0] = a2;
  v3 = NtSetInformationProcess(Process, (PROCESSINFOCLASS)80, ProcessInformation, 1u);
  v7 = v3;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v12 = 0;
    v10 = &v7;
    v11 = 4;
    ProcessId = GetProcessId(Process);
    v15 = 0;
    v18 = 0;
    v8 = ProcessId;
    v13 = &v8;
    v16 = ProcessInformation;
    v14 = 4;
    v17 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180096C4A, 0LL, 0LL, 5u, &pData);
    return v7;
  }
  return v3;
}
