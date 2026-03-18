/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C001A880
 * Callers:
 *     <none>
 * Callees:
 *     FeedbackSetWindowSetting @ 0x1C001A9C4 (FeedbackSetWindowSetting.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     FeedbackClearWindowSetting @ 0x1C01DDC6C (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v8; // edi
  unsigned int v9; // r12d
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // eax
  __int64 v16; // rcx

  v8 = 0;
  v9 = 0;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  v13 = ValidateHwnd(a1);
  if ( !v13 )
    goto LABEL_14;
  if ( !a2 || a2 > 13 || a4 && !Address || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v16 = 87LL;
    goto LABEL_18;
  }
  if ( PsGetCurrentProcessWin32Process(v12, v11) != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL) )
  {
    UserSetLastError(5LL);
    v16 = 0LL;
LABEL_18:
    UserSetLastError(v16);
    goto LABEL_14;
  }
  if ( Address )
  {
    v10 = 0;
    ProbeForRead(Address, 4uLL, 4u);
    v9 = *Address;
  }
  if ( v10 )
    v14 = FeedbackClearWindowSetting(v13, (unsigned int)a2);
  else
    v14 = FeedbackSetWindowSetting(v13, (unsigned int)a2, v9);
  v8 = v14;
LABEL_14:
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
