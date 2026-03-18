/*
 * XREFs of ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008B78
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0008A20 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0008C1C (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008CB8 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0122834 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01E205C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022251C (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::xxxSetHost(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // r8
  __int64 v5; // rsi
  struct tagWND *v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v9) && (v5 = v9, *(_DWORD *)(v9 + 20)) )
  {
    v6 = *(struct tagWND **)(v9 + 24);
    if ( !v6 || (v7 = CoreWindowProp::RemoveComponent(v6, a1), v7 >= 0) )
    {
      LOBYTE(v4) = 1;
      v7 = CoreWindowProp::ChangeRole(a2, 2LL, v4);
      if ( v7 >= 0 )
      {
        v7 = CoreWindowProp::AddComponent(a2, a1);
        if ( v7 >= 0 )
        {
          *(_QWORD *)(v5 + 24) = a2;
          v7 = 0;
          if ( IsPwndComponentWebview(a1) )
            xxxEstablishWebviewHostComponentRelationship(a1, a2);
        }
      }
    }
  }
  else
  {
    UserSetLastError(5LL);
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
