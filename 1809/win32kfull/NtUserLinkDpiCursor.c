/*
 * XREFs of NtUserLinkDpiCursor @ 0x1C02192B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0017C90 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01B847C (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagCURSOR *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  struct tagCURSOR *v13; // rcx

  EnterCrit(0LL, 1LL);
  v9 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  LOBYTE(v6) = 3;
  v11 = HMValidateHandle(a1, v6);
  if ( v11 )
  {
    LOBYTE(v6) = 3;
    v12 = HMValidateHandle(a2, v6);
    v8 = (struct tagCURSOR *)v12;
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v11 + 80) & 0x1800) == 0
        && *(_QWORD *)(v12 + 48) == v12
        && !FindDPICursor((struct tagCURSOR *)v11, a3) )
      {
        LinkDpiCursor(v13, v8, a3);
        v9 = 1LL;
        goto LABEL_10;
      }
LABEL_9:
      UserSetLastError(87LL, v6, v7, (__int64)v8);
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v10, v6, v7, v8);
  return v9;
}
