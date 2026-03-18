/*
 * XREFs of ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C01F9E24
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0007EF4 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserSetCoreWindowPartner @ 0x1C0007FE0 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C01F9E50 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponent(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v3 = CoreWindowProp::RemoveComponentInternal(a1, a2);
  if ( v3 )
    UserSetLastError(1168LL, v2);
  return v3;
}
