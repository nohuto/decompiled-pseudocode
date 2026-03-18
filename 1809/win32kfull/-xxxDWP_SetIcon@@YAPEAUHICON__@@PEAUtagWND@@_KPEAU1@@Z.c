/*
 * XREFs of ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B3CA0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxRedrawTitle @ 0x1C00B3850 (xxxRedrawTitle.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     SendDwmIconChange @ 0x1C00B7154 (SendDwmIconChange.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B8310 (xxxCreateWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C0227F50 (xxxRecreateSmallIcons.c)
 */

HICON __fastcall xxxDWP_SetIcon(struct tagWND *a1, unsigned __int64 a2, HICON a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  __int64 v7; // rax
  HICON v8; // r15
  HICON v9; // rdi
  HICON v10; // rsi
  int v11; // r14d
  int v12; // r12d
  __int64 v13; // rax
  HICON v14; // rax

  v5 = a2;
  if ( a2 > 3 )
  {
    UserSetLastError(87LL, a2, (__int64)a3, a4);
    return 0LL;
  }
  if ( a2 == 3 )
  {
    xxxRecreateSmallIcons();
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 5);
  v8 = *(HICON *)(v7 + 272);
  v9 = *(HICON *)(v7 + 264);
  v10 = v9;
  if ( a2 )
    v10 = *(HICON *)(v7 + 272);
  if ( v10 != a3 )
  {
    LOBYTE(a2) = 3;
    v11 = 1;
    v12 = 0;
    v13 = HMValidateHandleNoRip(v9, a2);
    if ( v13 && (*(_DWORD *)(v13 + 80) & 0x80u) != 0 )
    {
      v12 = 1;
      _DestroyCursor((struct tagCURSOR *)v13, 0LL);
    }
    if ( v5 )
    {
      if ( v12 )
      {
        v9 = 0LL;
      }
      else if ( v9 )
      {
        v11 = 0;
      }
      v8 = a3;
    }
    else
    {
      v14 = 0LL;
      v9 = a3;
      if ( !v12 )
        v14 = v10;
      v10 = v14;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = v8;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) = v9;
    if ( v8 && !v9 )
      xxxCreateWindowSmIcon(a1, v8, 1LL);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((ULONG_PTR)a1);
    if ( v11 )
      xxxRedrawTitle((unsigned __int64 *)a1, 8204);
  }
  return v10;
}
