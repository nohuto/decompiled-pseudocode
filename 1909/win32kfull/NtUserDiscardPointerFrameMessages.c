/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1C022A6B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01F1168 (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // rcx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a1 || HIWORD(a1) )
  {
    v7 = 87LL;
    goto LABEL_10;
  }
  v5 = gptiCurrent;
  if ( (unsigned __int16)a1 == 1 )
  {
    v6 = *(_DWORD **)(gptiCurrent + 1280LL);
    if ( !v6 || (*v6 & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x100) != 0 )
    {
LABEL_6:
      v7 = 5LL;
LABEL_10:
      v2 = 0;
      UserSetLastError(v7, 0LL, v3, v4);
      goto LABEL_11;
    }
    v2 = xxxDiscardPointerFrameMessagesInternal(a1);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}
