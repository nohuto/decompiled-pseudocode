/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C00EEAD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     FeedbackSetWindowSetting @ 0x1C00EEBF4 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01A825C (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v8; // edi
  unsigned int v9; // r12d
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rdx
  int v17; // eax
  __int64 v19; // rcx

  v8 = 0;
  v9 = 0;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  v15 = ValidateHwnd(a1);
  if ( !v15 )
    goto LABEL_14;
  if ( !a2 || a2 > 13 || a4 && !Address || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v19 = 87LL;
    goto LABEL_18;
  }
  if ( PsGetCurrentProcessWin32Process(v12) != *(_QWORD *)(*(_QWORD *)(v15 + 16) + 416LL) )
  {
    UserSetLastError(5LL, v16);
    v19 = 0LL;
LABEL_18:
    UserSetLastError(v19, v11);
    goto LABEL_14;
  }
  if ( Address )
  {
    v10 = 0;
    ProbeForRead(Address, 4uLL, 4u);
    v9 = *Address;
  }
  if ( v10 )
    v17 = FeedbackClearWindowSetting(v15, (unsigned int)a2);
  else
    v17 = FeedbackSetWindowSetting(v15, (unsigned int)a2, v9);
  v8 = v17;
LABEL_14:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v8;
}
