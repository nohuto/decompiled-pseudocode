/*
 * XREFs of NtRIMRegisterForInput @ 0x1C0131880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtRIMRegisterForInput(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v15, v14, v16, v17);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    v23 = RIMRegisterForInputWithCallbacks(
            a1,
            a2,
            a3,
            a4,
            gpWin32kDriverObject,
            a5,
            a6,
            0LL,
            0,
            a8,
            Win32kRIMDevChangeCallback,
            a9,
            1,
            a10);
  else
    v23 = -1073741790;
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v23;
}
