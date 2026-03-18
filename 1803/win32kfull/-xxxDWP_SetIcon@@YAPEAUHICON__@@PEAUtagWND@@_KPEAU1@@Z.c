/*
 * XREFs of ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxCreateWindowSmIcon @ 0x1C006ADA8 (xxxCreateWindowSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     xxxRedrawTitle @ 0x1C006E8C0 (xxxRedrawTitle.c)
 *     SendDwmIconChange @ 0x1C00C4848 (SendDwmIconChange.c)
 *     xxxRecreateSmallIcons @ 0x1C01FF6A4 (xxxRecreateSmallIcons.c)
 */

HICON __fastcall xxxDWP_SetIcon(struct tagWND *a1, unsigned __int64 a2, HICON a3)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rax
  HICON v7; // r15
  HICON v8; // rdi
  HICON v9; // rsi
  int v10; // r14d
  int v11; // r12d
  __int64 v12; // rax
  HICON v13; // rax

  v4 = a2;
  if ( a2 > 3 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  if ( a2 == 3 )
  {
    xxxRecreateSmallIcons();
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  v7 = *(HICON *)(v6 + 272);
  v8 = *(HICON *)(v6 + 264);
  v9 = v8;
  if ( a2 )
    v9 = *(HICON *)(v6 + 272);
  if ( v9 != a3 )
  {
    LOBYTE(a2) = 3;
    v10 = 1;
    v11 = 0;
    v12 = HMValidateHandleNoRip(v8, a2, a3);
    if ( v12 && (*(_DWORD *)(v12 + 80) & 0x80u) != 0 )
    {
      v11 = 1;
      DestroyCursor((struct tagCURSOR *)v12, 0);
    }
    if ( v4 )
    {
      if ( v11 )
      {
        v8 = 0LL;
      }
      else if ( v8 )
      {
        v10 = 0;
      }
      v7 = a3;
    }
    else
    {
      v13 = 0LL;
      v8 = a3;
      if ( !v11 )
        v13 = v9;
      v9 = v13;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = v7;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) = v8;
    if ( v7 && !v8 )
      xxxCreateWindowSmIcon((__int64)a1, (__int64)v7, 1LL);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((ULONG_PTR)a1);
    if ( v10 )
      xxxRedrawTitle(a1, 8204LL);
  }
  return v9;
}
