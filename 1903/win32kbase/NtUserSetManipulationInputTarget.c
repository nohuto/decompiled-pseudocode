/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C011C630
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(unsigned int a1, void *a2, unsigned int a3, char *Src)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rdx
  __int64 v12; // rcx
  BOOL v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  _BYTE v22[32]; // [rsp+50h] [rbp-38h] BYREF

  v5 = a3;
  v8 = 0LL;
  memset(v22, 0, 24);
  EnterCrit(0, 1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
  v13 = 0;
  if ( CurrentProcess )
    v13 = CurrentProcess == g_pepDwm;
  if ( !v13 )
  {
    v14 = 5LL;
LABEL_5:
    v15 = 0;
    UserSetLastError(v14, (__int64)CurrentProcess);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5 )
  {
    v14 = 87LL;
    goto LABEL_5;
  }
  v18 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v18] > MmUserProbeAddress || &Src[v18] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v19 = Win32AllocPoolWithQuota(4 * v5, 0x6E616D55u);
  v8 = (void *)v19;
  if ( v19 )
  {
    PushW32ThreadLock(v19, v22, Win32FreePool);
    memmove(v8, Src, 4 * v5);
    v15 = CTouchProcessor::SetManipulationInputTarget(gpTouchProcessor, a1, v5, (unsigned int *)v8, a2);
  }
  else
  {
    v15 = 0;
    UserSetLastError(8LL, v20);
  }
LABEL_17:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock(v22);
  UserSessionSwitchLeaveCrit(v17, v16);
  return v15;
}
