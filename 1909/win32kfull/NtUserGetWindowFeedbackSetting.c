/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1C022F1F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     FeedbackGetWindowSetting @ 0x1C01DDCCC (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(__int64 a1, signed int a2, int a3, _DWORD *a4, unsigned int *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  int WindowSetting; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  unsigned int v20; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+24h] [rbp-54h]
  unsigned int v22; // [rsp+38h] [rbp-40h]

  EnterSharedCrit(0LL, 1LL);
  v13 = ValidateHwnd(a1);
  if ( v13 )
  {
    if ( a2 && a2 <= 13 && a4 && (a3 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(a4, 4uLL, 4u);
      v18 = *a4;
      v22 = v18;
      if ( v18 != 4 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
        *a4 = 4;
      }
      if ( Address && v18 < 4 )
      {
        WindowSetting = 0;
        v21 = 0;
        UserSetLastError(122LL, v15, v16, v17);
      }
      else
      {
        v20 = 0;
        WindowSetting = FeedbackGetWindowSetting(v13, a2, a3, &v20);
        v21 = WindowSetting;
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v10 = v20;
          *Address = v20;
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87LL, v9, v11, v12);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v10);
  return WindowSetting;
}
