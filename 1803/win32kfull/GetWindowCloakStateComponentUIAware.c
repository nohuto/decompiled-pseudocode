/*
 * XREFs of GetWindowCloakStateComponentUIAware @ 0x1C0073B50
 * Callers:
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     zzzImeSetFutureOwner @ 0x1C006D7A0 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C006EBFC (zzzImeSetOwnerWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C01009C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(struct tagWND *a1)
{
  const struct tagWND *v1; // rdi
  int IsComponent; // ebx
  __int64 result; // rax
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax

  v1 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1);
  result = GetWindowCloakState(v1);
  if ( IsComponent )
  {
    if ( (result & 1) != 0 )
    {
      return 1LL;
    }
    else
    {
      while ( 1 )
      {
        Host = CoreWindowProp::GetHost(v1);
        v1 = Host;
        if ( !Host )
          break;
        result = GetWindowCloakState(Host);
        if ( (result & 1) != 0 )
          return result;
        if ( !(unsigned int)CoreWindowProp::IsComponent(v1) )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)v1);
          return GetWindowCloakState(TopLevelWindow);
        }
      }
      return 2LL;
    }
  }
  return result;
}
