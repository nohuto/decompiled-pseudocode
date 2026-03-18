/*
 * XREFs of ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C023A5D4
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0006810 (NtUserSetCoreWindowPartner.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006980 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C023A600 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponent(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9

  v3 = CoreWindowProp::RemoveComponentInternal(a1, a2);
  if ( v3 )
    UserSetLastError(1168LL, v2, v4, v5);
  return v3;
}
