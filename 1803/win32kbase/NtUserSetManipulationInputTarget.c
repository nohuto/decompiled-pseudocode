/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C00B9810
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(unsigned int a1, void *a2, __int64 a3, char *Src)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  PVOID CurrentProcess; // r8
  BOOL v12; // eax
  int v13; // ecx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD v19[6]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h]
  _BYTE v21[24]; // [rsp+58h] [rbp-30h] BYREF

  v5 = (unsigned int)a3;
  v8 = 0LL;
  v20 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v19, (__int64)a2, a3);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v9);
  v12 = 0;
  if ( CurrentProcess )
  {
    v10 = 1LL;
    v12 = CurrentProcess == g_pepDwm;
  }
  if ( !v12 )
  {
    v13 = 5;
LABEL_5:
    v14 = 0;
    UserSetLastError(v13);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5 )
  {
    v13 = 87;
    goto LABEL_5;
  }
  v16 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v16] > MmUserProbeAddress || &Src[v16] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v17 = Win32AllocPoolWithQuota(4 * v5, 0x6E616D55u);
  v8 = (void *)v17;
  v20 = v17;
  if ( v17 )
  {
    PushW32ThreadLock(v17, v21, Win32FreePool);
    memmove(v8, Src, 4 * v5);
    v14 = CTouchProcessor::SetManipulationInputTarget(gpTouchProcessor, a1, v5, (unsigned int *)v8, a2);
  }
  else
  {
    v14 = 0;
    v19[4] = 0;
    UserSetLastError(8);
  }
LABEL_17:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock(v21);
  UserSessionSwitchLeaveCrit(v15);
  return v14;
}
