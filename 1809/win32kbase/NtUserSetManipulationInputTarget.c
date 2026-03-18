/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C00F1BE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(unsigned int a1, void *a2, __int64 a3, char *Src)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  PVOID CurrentProcess; // r8
  BOOL v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rax
  _DWORD v18[6]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  _BYTE v20[24]; // [rsp+58h] [rbp-30h] BYREF

  v5 = (unsigned int)a3;
  v8 = 0LL;
  v19 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v18, (__int64)a2, a3);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v9);
  v12 = 0;
  if ( CurrentProcess )
  {
    v10 = 1LL;
    v12 = CurrentProcess == g_pepDwm;
  }
  if ( !v12 )
  {
    v13 = 5LL;
LABEL_5:
    v14 = 0;
    UserSetLastError(v13);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5 )
  {
    v13 = 87LL;
    goto LABEL_5;
  }
  v15 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v15] > MmUserProbeAddress || &Src[v15] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v16 = Win32AllocPoolWithQuota(4 * v5, 0x6E616D55u);
  v8 = (void *)v16;
  v19 = v16;
  if ( v16 )
  {
    PushW32ThreadLock(v16, v20, Win32FreePool);
    memmove(v8, Src, 4 * v5);
    v14 = CTouchProcessor::SetManipulationInputTarget(
            (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
            a1,
            v5,
            (unsigned int *)v8,
            a2);
  }
  else
  {
    v14 = 0;
    v18[4] = 0;
    UserSetLastError(8LL);
  }
LABEL_17:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock(v20);
  UserSessionSwitchLeaveCrit();
  return v14;
}
