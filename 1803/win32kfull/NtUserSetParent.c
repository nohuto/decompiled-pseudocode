/*
 * XREFs of NtUserSetParent @ 0x1C00FEC80
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
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
  __int64 v13; // r8
  struct tagWND *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  _QWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v21[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v20[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v20;
      v20[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v19 = *(_QWORD *)(v4 + 24);
          DesktopWindow = 0LL;
          if ( v19 )
            DesktopWindow = *(_QWORD *)(v19 + 104);
        }
        else
        {
          DesktopWindow = ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_11:
            ThreadUnlock1(v12, DesktopWindow, v13);
            goto LABEL_12;
          }
        }
      }
      else
      {
        DesktopWindow = GetDesktopWindow(v4);
      }
      v21[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v21;
      v21[1] = DesktopWindow;
      if ( DesktopWindow )
        _InterlockedIncrement((volatile signed __int32 *)(DesktopWindow + 8));
      v14 = xxxSetParentWorker(v10, (struct tagWND *)DesktopWindow, 0LL, 0);
      if ( v14 )
        v9 = *(_QWORD *)v14;
      ThreadUnlock1(v16, v15, v17);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
