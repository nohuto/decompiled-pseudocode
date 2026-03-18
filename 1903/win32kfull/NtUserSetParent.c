/*
 * XREFs of NtUserSetParent @ 0x1C0121C40
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *DesktopWindow; // rdi
  __int64 v11; // r8
  struct tagWND *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+48h] [rbp-8h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v18 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v18;
      v19 = v4;
      HMLockObject(v4);
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v17 = *(_QWORD *)(v7 + 24);
          DesktopWindow = 0LL;
          if ( v17 )
            DesktopWindow = *(struct tagWND **)(v17 + 104);
        }
        else
        {
          DesktopWindow = (struct tagWND *)ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_11:
            ThreadUnlock1(v9, v8, v11);
            goto LABEL_12;
          }
        }
      }
      else
      {
        DesktopWindow = (struct tagWND *)GetDesktopWindow(v7);
      }
      v21 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v21;
      v22 = DesktopWindow;
      if ( DesktopWindow )
        HMLockObject(DesktopWindow);
      v12 = xxxSetParentWorker((struct tagWND *)v7, DesktopWindow, 0LL, 0);
      if ( v12 )
        v6 = *(_QWORD *)v12;
      ThreadUnlock1(v14, v13, v15);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
