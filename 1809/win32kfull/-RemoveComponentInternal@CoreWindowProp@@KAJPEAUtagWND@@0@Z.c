/*
 * XREFs of ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C0222548
 * Callers:
 *     ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C0134A70 (-Delete@CoreWindowProp@@UEAAXXZ.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022251C (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0008C58 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0122834 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z @ 0x1C01FB0C0 (-UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C02225CC (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponentInternal(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // edi
  struct CoreWindowProp::Component *Component; // rax
  CoreWindowProp *v6; // rbx
  struct CoreWindowProp::Component *v8; // [rsp+50h] [rbp+18h] BYREF
  CoreWindowProp *v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = -1073741275;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, (__int64 *)&v9) )
  {
    Component = CoreWindowProp::FindComponent(a1, a2, &v8);
    if ( Component )
    {
      v6 = v9;
      CoreWindowProp::UnlinkAndDestroyComponent(v9, Component, v8);
      v4 = 0;
      if ( !*((_DWORD *)v6 + 10) )
        CoreWindowProp::ChangeRole((__int64)a1, 2, 0);
      UpdateProcessPriorityWhenComponentRemoved(a1, a2);
    }
  }
  return v4;
}
