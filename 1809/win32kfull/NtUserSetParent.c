/*
 * XREFs of NtUserSetParent @ 0x1C011C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  struct tagWND *v10; // rdi
  __int64 DesktopWindow; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  _QWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v18[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v18;
      v18[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v17 = *(_QWORD *)(v4 + 24);
          DesktopWindow = 0LL;
          if ( v17 )
            DesktopWindow = *(_QWORD *)(v17 + 104);
        }
        else
        {
          DesktopWindow = ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_11:
            ThreadUnlock1(v12, DesktopWindow);
            goto LABEL_12;
          }
        }
      }
      else
      {
        DesktopWindow = GetDesktopWindow(v4);
      }
      v19[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v19;
      v19[1] = DesktopWindow;
      if ( DesktopWindow )
        _InterlockedIncrement((volatile signed __int32 *)(DesktopWindow + 8));
      v13 = xxxSetParentWorker(v10, (struct tagWND *)DesktopWindow, 0LL, 0);
      if ( v13 )
        v9 = *(_QWORD *)v13;
      ThreadUnlock1(v15, v14);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
