/*
 * XREFs of NtSetShellCursorState @ 0x1C00EE310
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C00EC684 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C0148C34 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     SendOrientationChanged @ 0x1C0151550 (SendOrientationChanged.c)
 */

__int64 __fastcall NtSetShellCursorState(const unsigned __int16 *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v5; // r14d
  struct tagRECT *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  NTSTATUS v11; // ecx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  CCursorClip *v16; // rcx
  int v17; // esi
  __int64 v18; // rax
  char v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v5 = (unsigned int)a1;
  v6 = 0LL;
  v7 = CheckCapability(a1);
  if ( v7 >= 0 )
  {
    if ( !gbOSTestSigningEnabled && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 820) & 0x30) == 0 )
    {
      v12 = 0;
      v13 = 5LL;
      goto LABEL_4;
    }
    if ( v5 - 1 > 3 )
    {
LABEL_9:
      v12 = 0;
      v13 = 87LL;
      goto LABEL_4;
    }
    if ( (_DWORD)v3 )
    {
      v14 = 16 * v3;
      if ( (unsigned __int64)(16 * v3) > 0xFFFFFFFF )
        goto LABEL_9;
      if ( (unsigned int)v14 >= 0x2710000
        || (v6 = (struct tagRECT *)Win32AllocPoolWithQuota((unsigned int)v14, 0x63736355u)) == 0LL )
      {
        v12 = 0;
        v13 = 8LL;
        goto LABEL_4;
      }
      if ( v14 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v15) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a2[v14] > MmUserProbeAddress || &a2[v14] < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v6, a2, (unsigned int)v14);
    }
    else if ( a2 )
    {
      goto LABEL_9;
    }
    EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v20, v8, v10);
    v17 = CCursorClip::SetShellClip(v16, v6, v3);
    if ( v17 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
      if ( v18 )
      {
        *(_DWORD *)(v18 + 2424) = v5;
        SendOrientationChanged(v5);
      }
    }
    UserSessionSwitchLeaveCrit();
    if ( v17 >= 0 )
    {
      v12 = 1;
      goto LABEL_29;
    }
    v11 = v17;
    goto LABEL_3;
  }
  v11 = v7;
LABEL_3:
  v12 = 0;
  v13 = RtlNtStatusToDosError(v11);
LABEL_4:
  UserSetLastError(v13);
LABEL_29:
  if ( !v12 && v6 )
    Win32FreePool((__int64)v6);
  return v12;
}
