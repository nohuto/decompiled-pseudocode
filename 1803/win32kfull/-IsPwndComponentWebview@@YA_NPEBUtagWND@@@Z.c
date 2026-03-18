/*
 * XREFs of ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0007F98
 * Callers:
 *     NtUserNavigateFocus @ 0x1C00061C0 (NtUserNavigateFocus.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0007EF4 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetParent @ 0x1C00D6BB0 (_GetParent.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C01009C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall IsPwndComponentWebview(const struct tagWND *a1)
{
  struct tagWND *Host; // rax
  __int64 Parent; // rax
  bool result; // al

  Host = CoreWindowProp::GetHost(a1);
  result = 0;
  if ( Host )
  {
    Parent = GetParent(Host);
    if ( Parent )
    {
      if ( *(char *)(*(_QWORD *)(Parent + 40) + 235LL) < 0 )
        return 1;
    }
  }
  return result;
}
