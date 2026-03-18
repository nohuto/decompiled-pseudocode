/*
 * XREFs of GetWindowCloakStateComponentUIAware @ 0x1C000CCBC
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C000C0C4 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C000CB74 (zzzImeSetOwnerWindow.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C000B638 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
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
          TopLevelWindow = GetTopLevelWindow(v1);
          return GetWindowCloakState(TopLevelWindow);
        }
      }
      return 2LL;
    }
  }
  return result;
}
