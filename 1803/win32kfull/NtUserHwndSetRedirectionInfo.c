/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1C01F1140
 * Callers:
 *     <none>
 * Callees:
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     GreSetHwndPresentFlags @ 0x1C023CD84 (GreSetHwndPresentFlags.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, _DWORD *a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 StyleWindow; // rax
  __int64 v16; // rbx
  ULONG v17; // eax
  __int64 v18; // rdx
  _DWORD v20[8]; // [rsp+40h] [rbp-38h] BYREF

  v8 = -1073741811;
  memset(v20, 0, sizeof(v20));
  v9 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568);
    v13 = StyleWindow;
    if ( StyleWindow )
    {
      if ( (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) != 0x29D )
      {
        if ( a2 == 2 )
        {
          if ( a3 )
          {
            if ( a4 >= 4 )
            {
              if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
                a3 = (_DWORD *)MmUserProbeAddress;
              v20[0] = *a3;
              v8 = GreSetHwndPresentFlags(*(HWND *)StyleWindow);
            }
            else
            {
              v8 = -1073741306;
            }
          }
        }
        else
        {
          v8 = -1073741821;
        }
      }
    }
  }
  if ( v8 < 0 )
  {
    v9 = 0;
    v16 = 0LL;
  }
  else
  {
    v16 = 1LL;
  }
  if ( !v9 )
  {
    v17 = RtlNtStatusToDosError(v8);
    UserSetLastError(v17, v18);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v16;
}
