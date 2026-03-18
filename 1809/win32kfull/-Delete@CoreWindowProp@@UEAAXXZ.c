/*
 * XREFs of ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C0134A70
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C0222548 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C02225CC (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 */

void __fastcall CoreWindowProp::Delete(CoreWindowProp *this)
{
  struct tagWND *v2; // rcx

  v2 = (struct tagWND *)*((_QWORD *)this + 3);
  if ( v2 )
    CoreWindowProp::RemoveComponentInternal(v2, *((struct tagWND **)this + 1));
  *((_QWORD *)this + 3) = 0LL;
  while ( *((_QWORD *)this + 4) )
    CoreWindowProp::UnlinkAndDestroyComponent(this, *((struct CoreWindowProp::Component **)this + 4), 0LL);
  Win32FreePool(this);
}
