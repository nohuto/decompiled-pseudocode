/*
 * XREFs of NtUserSetSysColors @ 0x1C00B9CD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     xxxSetSysColors @ 0x1C005C910 (xxxSetSysColors.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     CreateProfileUserName @ 0x1C00A7F70 (CreateProfileUserName.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, char *a2, char *a3, unsigned int a4)
{
  __int64 v7; // r12
  char *v8; // rdi
  char *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  char *v13; // rcx
  char *v14; // rax
  char *v15; // rax
  __int64 ProfileUserName; // rbx
  __int64 v17; // rcx
  int v18; // r14d
  __int64 v19; // rcx
  char v21[16]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v22; // [rsp+40h] [rbp-88h]
  char *v23; // [rsp+48h] [rbp-80h]
  char *v24; // [rsp+50h] [rbp-78h]
  _BYTE v25[24]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v26[24]; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v27[24]; // [rsp+98h] [rbp-30h] BYREF

  v7 = a1;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  v22 = 0xFFFFFFFF00002000uLL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v21, (__int64)a2, (__int64)a3);
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL) + 24LL) & 8;
  else
    v10 = 0;
  if ( v10 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v22, 0) )
  {
    v18 = 0;
    UserSetLastError(5);
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v12 = 4 * v7;
      if ( 4 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = &a2[v12];
        if ( (unsigned __int64)&a2[v12] > MmUserProbeAddress || v13 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v12 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v12] > MmUserProbeAddress || &a3[v12] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v14 = (char *)Win32AllocPoolWithQuota(4 * v7, 0x72637355u);
      v8 = v14;
      v23 = v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      memmove(v14, a2, 4 * v7);
      v15 = (char *)Win32AllocPoolWithQuota(4 * v7, 0x76637355u);
      v9 = v15;
      v24 = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      memmove(v15, a3, 4 * v7);
    }
    PushW32ThreadLock(v8, v27, Win32FreePool);
    PushW32ThreadLock(v9, v26, Win32FreePool);
    ProfileUserName = CreateProfileUserName((__int64)v25);
    v18 = xxxSetSysColors(v17, v7, v8, v9, a4);
    if ( ProfileUserName )
      PopAndFreeAlwaysW32ThreadLock(v25);
    PopW32ThreadLock(v26);
    PopW32ThreadLock(v27);
    if ( v8 )
      Win32FreePool((__int64)v8);
    if ( v9 )
      Win32FreePool((__int64)v9);
  }
  UserSessionSwitchLeaveCrit(v19);
  return v18;
}
