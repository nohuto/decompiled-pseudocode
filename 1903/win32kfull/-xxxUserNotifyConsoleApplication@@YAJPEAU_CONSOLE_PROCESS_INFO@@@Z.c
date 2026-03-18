/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C001A620
 * Callers:
 *     xxxConsoleControl @ 0x1C001A2C8 (xxxConsoleControl.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C001A788 (LockProcessByClientId.c)
 *     WPP_RECORDER_SF_sqq @ 0x1C001A804 (WPP_RECORDER_SF_sqq.c)
 *     CheckAllowForeground @ 0x1C001A910 (CheckAllowForeground.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyConsoleApplication(struct _CONSOLE_PROCESS_INFO *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int inited; // esi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rdi
  int v7; // edx
  int v8; // ecx
  const char *v9; // rbx
  char ProcessWin32Process; // al
  int v11; // edx
  int v12; // ecx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( !gptiRit )
    return 3221225506LL;
  result = LockProcessByClientId(*(int *)a1, &Object);
  if ( (int)result >= 0 )
  {
    inited = xxxSetProcessInitState(Object, 0LL);
    if ( inited >= 0 )
    {
      v5 = *((unsigned int *)a1 + 1);
      if ( (v5 & 1) != 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v3);
        if ( (unsigned int)CheckAllowForeground(Object) )
        {
          v8 = *(_DWORD *)(CurrentProcessWin32Process + 12);
          if ( (v8 & 0x40) == 0 )
            SetAppStarting(CurrentProcessWin32Process);
          gdwPUDFlags |= 0x8000000u;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = 4;
            WPP_RECORDER_SF_(v8, v7, 2, 11, (__int64)&WPP_39a40ec7a48b3c5da4360439682b483d_Traceguids);
          }
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = "set";
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100) == 0 )
            v9 = "NOT";
          ProcessWin32Process = PsGetProcessWin32Process(Object);
          WPP_RECORDER_SF_sqq(
            v12,
            v11,
            2,
            12,
            (__int64)&WPP_39a40ec7a48b3c5da4360439682b483d_Traceguids,
            (__int64)v9,
            CurrentProcessWin32Process,
            ProcessWin32Process);
        }
      }
    }
    ObfDereferenceObject(Object);
    return (unsigned int)inited;
  }
  return result;
}
