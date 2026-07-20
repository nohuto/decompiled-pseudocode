/*
 * XREFs of SmpExecuteImage @ 0x140001F14
 * Callers:
 *     SmpInvokeAutoChk @ 0x140001158 (SmpInvokeAutoChk.c)
 *     SmscpLoadSubSystem @ 0x1400016A8 (SmscpLoadSubSystem.c)
 *     SmpExecuteCommand @ 0x1400017F4 (SmpExecuteCommand.c)
 *     SmpLoadSubSystem @ 0x140012B94 (SmpLoadSubSystem.c)
 *     SmpStartServerSilo @ 0x1400137C0 (SmpStartServerSilo.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x1400021B0 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140002204 (SmpEventWriteULONGString.c)
 *     SmpSelectNodeNumber @ 0x14000231C (SmpSelectNodeNumber.c)
 *     memset_0 @ 0x14000D643 (memset_0.c)
 */

__int64 __fastcall SmpExecuteImage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int16 a6,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  PRTL_USER_PROCESS_PARAMETERS v7; // rdi
  __int16 v8; // si
  __int64 result; // rax
  ULONG v11; // ecx
  int v12; // ebx
  __int64 v13; // r8
  int UserProcess; // ebx
  void *v15; // rcx
  _WORD v16[24]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+98h] [rbp-70h]
  _BYTE ProcessInformation[32]; // [rsp+A0h] [rbp-68h] BYREF
  char v19; // [rsp+D8h] [rbp-30h] BYREF
  int v20; // [rsp+190h] [rbp+88h] BYREF

  v20 = a4;
  v7 = (PRTL_USER_PROCESS_PARAMETERS)&v19;
  v8 = a6;
  if ( ProcessParameters )
    v7 = ProcessParameters;
  result = RtlCreateProcessParametersEx(
             &ProcessParameters,
             a1,
             0LL,
             a2,
             a3,
             SmpDefaultEnvironment,
             0LL,
             0LL,
             0LL,
             0LL,
             1);
  if ( (int)result >= 0 )
  {
    v11 = SmpDebug;
    if ( (v8 & 1) != 0 )
      v11 = 1;
    ProcessParameters->DebugFlags = v11;
    if ( (v8 & 0x400) != 0 )
    {
      ProcessParameters->Flags |= 0x40000u;
      v12 = SmpSelectNodeNumber() + 1;
    }
    else
    {
      LOWORD(v12) = 0;
    }
    if ( (v8 & 0x1000) != 0 )
      ProcessParameters->Flags |= 0x400000u;
    if ( (v8 & 0x4000) != 0 )
      ProcessParameters->Flags |= 0x800000u;
    if ( v8 < 0 )
      ProcessParameters->Flags |= 0x80000000;
    ProcessParameters->Flags |= 0x20000u;
    v7->MaximumLength = 104;
    SmpEventWriteULONGString(&SmssEvt_ExecuteImage_Start);
    memset_0(v16, 0, 0x38uLL);
    v16[1] = v12;
    v16[0] = 1;
    LOBYTE(v13) = (v8 & 0x400) != 0;
    v17 = a5;
    UserProcess = RtlCreateUserProcessEx(a1, ProcessParameters, v13, v16, v7);
    RtlDestroyProcessParameters(ProcessParameters);
    if ( UserProcess >= 0 )
      NtQueryInformationProcess(*(HANDLE *)&v7->Flags, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    SmpEventWriteULONG(&SmssEvt_ExecuteImage_Stop);
    if ( UserProcess < 0 )
      return (unsigned int)UserProcess;
    if ( (v8 & 0x2000) != 0 )
    {
      v15 = *(void **)&v7->Flags;
      v20 = 1;
      UserProcess = NtSetInformationProcess(v15, ProcessBreakOnTermination, &v20, 4u);
      if ( UserProcess < 0 )
        goto LABEL_27;
    }
    if ( (v8 & 0x20) == 0 )
    {
      if ( LODWORD(v7->CurrentDirectory.Handle) != 1 && (v8 & 0x8000) == 0 )
      {
        UserProcess = -1073741701;
LABEL_27:
        NtTerminateProcess(*(HANDLE *)&v7->Flags, UserProcess);
        NtWaitForSingleObject(*(HANDLE *)&v7->Flags, 0, 0LL);
        goto LABEL_29;
      }
      NtResumeThread(v7->ConsoleHandle, 0LL);
      if ( (v8 & 2) == 0 )
        NtWaitForSingleObject(v7->ConsoleHandle, 0, 0LL);
    }
    if ( (v8 & 0x20) != 0 )
      return (unsigned int)UserProcess;
LABEL_29:
    NtClose(v7->ConsoleHandle);
    NtClose(*(HANDLE *)&v7->Flags);
    return (unsigned int)UserProcess;
  }
  return result;
}
