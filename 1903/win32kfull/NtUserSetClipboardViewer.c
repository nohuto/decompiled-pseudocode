/*
 * XREFs of NtUserSetClipboardViewer @ 0x1C00115E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetClipboardViewer @ 0x1C00116B0 (xxxSetClipboardViewer.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserSetClipboardViewer(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v4 = ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
  v12 = v4;
  if ( v4 )
    HMLockObject(v4);
  v6 = (__int64 *)xxxSetClipboardViewer(v4);
  if ( v6 )
    v2 = *v6;
  ThreadUnlock1(v8, v7, v9);
LABEL_8:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
