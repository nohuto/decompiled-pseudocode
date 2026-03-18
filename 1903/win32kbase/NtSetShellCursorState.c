/*
 * XREFs of NtSetShellCursorState @ 0x1C0116660
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     IsShellProcess @ 0x1C003847C (IsShellProcess.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C0112F44 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C0177B84 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     SetContentOrientation @ 0x1C0184764 (SetContentOrientation.c)
 */

__int64 __fastcall NtSetShellCursorState(const unsigned __int16 *a1, char *Src, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v5; // r13d
  struct tagRECT *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ecx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  CCursorClip *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // esi

  v3 = a3;
  v5 = (unsigned int)a1;
  v6 = 0LL;
  v7 = CheckCapability(a1);
  if ( v7 < 0 )
  {
    v10 = v7;
LABEL_26:
    v13 = 0;
    v14 = RtlNtStatusToDosError(v10);
    goto LABEL_27;
  }
  if ( !gbOSTestSigningEnabled )
  {
    v11 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v9) + 812);
    if ( (v11 & 0x30) == 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( !(unsigned int)IsShellProcess(CurrentProcessWin32Process) )
      {
        v13 = 0;
        v14 = 5LL;
LABEL_27:
        UserSetLastError(v14, v8);
        goto LABEL_28;
      }
    }
  }
  if ( v5 - 1 > 3 )
  {
LABEL_8:
    v13 = 0;
    v14 = 87LL;
    goto LABEL_27;
  }
  if ( (_DWORD)v3 )
  {
    v15 = 16 * v3;
    if ( (unsigned __int64)(16 * v3) > 0xFFFFFFFF )
      goto LABEL_8;
    if ( (unsigned int)v15 >= 0x2710000
      || (v6 = (struct tagRECT *)Win32AllocPoolWithQuota((unsigned int)v15, 0x63736355u)) == 0LL )
    {
      v13 = 0;
      v14 = 8LL;
      goto LABEL_27;
    }
    if ( v15 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v16) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v15] > MmUserProbeAddress || &Src[v15] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v6, Src, (unsigned int)v15);
  }
  else if ( Src )
  {
    goto LABEL_8;
  }
  v13 = 1;
  EnterCrit(0, 1);
  v20 = CCursorClip::SetShellClip(v17, v6, v3);
  if ( v20 >= 0 )
    SetContentOrientation(v5);
  UserSessionSwitchLeaveCrit(v19, v18);
  if ( v20 < 0 )
  {
    v10 = v20;
    goto LABEL_26;
  }
LABEL_28:
  if ( !v13 && v6 )
    Win32FreePool((__int64)v6);
  return v13;
}
