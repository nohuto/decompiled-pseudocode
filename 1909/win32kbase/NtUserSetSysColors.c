/*
 * XREFs of NtUserSetSysColors @ 0x1C005FD70
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C002BDE4 (CheckAccessEx.c)
 *     xxxSetSysColors @ 0x1C0050550 (xxxSetSysColors.c)
 *     CreateProfileUserName @ 0x1C0061790 (CreateProfileUserName.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, char *a2, char *a3, unsigned int a4)
{
  __int64 v7; // r12
  char *v8; // rdi
  char *v9; // rsi
  struct tagTHREADINFO *v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rax
  __int64 ProfileUserName; // rbx
  __int64 v18; // rcx
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23[2]; // [rsp+38h] [rbp-90h] BYREF
  char *v24; // [rsp+40h] [rbp-88h]
  char *v25; // [rsp+48h] [rbp-80h]
  _BYTE v26[24]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v27[24]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v28[40]; // [rsp+88h] [rbp-40h] BYREF

  v7 = a1;
  v8 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(v28, 0, 24);
  memset(v27, 0, sizeof(v27));
  v23[0] = 0x2000;
  v23[1] = -1;
  EnterCrit(0, 1);
  v10 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL) + 24LL) & 8;
  else
    v11 = 0;
  if ( v11 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v23, 0) )
  {
    v19 = 0;
    UserSetLastError(5LL, (__int64)v10);
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v13 = 4 * v7;
      if ( 4 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = &a2[v13];
        if ( (unsigned __int64)&a2[v13] > MmUserProbeAddress || v14 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v13 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v14) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v13] > MmUserProbeAddress || &a3[v13] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v15 = (char *)Win32AllocPoolWithQuota(4 * v7, 0x72637355u);
      v8 = v15;
      v24 = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      memmove(v15, a2, 4 * v7);
      v16 = (char *)Win32AllocPoolWithQuota(4 * v7, 0x76637355u);
      v9 = v16;
      v25 = v16;
      if ( !v16 )
        ExRaiseStatus(-1073741801);
      memmove(v16, a3, 4 * v7);
    }
    PushW32ThreadLock(v8, v28, Win32FreePool);
    PushW32ThreadLock(v9, v27, Win32FreePool);
    ProfileUserName = CreateProfileUserName(v26);
    v19 = xxxSetSysColors(v18, v7, v8, v9, a4);
    if ( ProfileUserName )
      PopAndFreeAlwaysW32ThreadLock(v26);
    PopW32ThreadLock(v27);
    PopW32ThreadLock(v28);
    if ( v8 )
      Win32FreePool((__int64)v8);
    if ( v9 )
      Win32FreePool((__int64)v9);
  }
  UserSessionSwitchLeaveCrit(v21, v20);
  return v19;
}
