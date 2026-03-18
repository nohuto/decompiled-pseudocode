/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1C022FD30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     GreSetHwndPresentFlags @ 0x1C026D0A4 (GreSetHwndPresentFlags.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, _DWORD *a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 StyleWindow; // rax
  __int64 v13; // rbx
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD v19[8]; // [rsp+40h] [rbp-38h] BYREF

  v8 = -1073741811;
  memset(v19, 0, sizeof(v19));
  v9 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568);
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
              v19[0] = *a3;
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
    v13 = 0LL;
  }
  else
  {
    v13 = 1LL;
  }
  if ( !v9 )
  {
    v14 = RtlNtStatusToDosError(v8);
    UserSetLastError(v14, v15, v16, v17);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
