/*
 * XREFs of NtUserLinkDpiCursor @ 0x1C0231110
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C01175F4 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01CC230 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagCURSOR *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  struct tagCURSOR *v16; // rcx

  EnterCrit(0LL, 1LL);
  v9 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  LOBYTE(v6) = 3;
  v12 = HMValidateHandle(a1, v6, v7, (__int64)v8);
  if ( v12 )
  {
    LOBYTE(v10) = 3;
    v15 = HMValidateHandle(a2, v10, v13, v14);
    v8 = (struct tagCURSOR *)v15;
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v12 + 80) & 0x1800) == 0
        && *(_QWORD *)(v15 + 48) == v15
        && !FindDPICursor((struct tagCURSOR *)v12, a3) )
      {
        LinkDpiCursor(v16, v8, a3);
        v9 = 1LL;
        goto LABEL_10;
      }
LABEL_9:
      UserSetLastError(87LL, v6, v7, (__int64)v8);
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
