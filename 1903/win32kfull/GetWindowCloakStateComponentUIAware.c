/*
 * XREFs of GetWindowCloakStateComponentUIAware @ 0x1C008A3A4
 * Callers:
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     zzzImeSetFutureOwner @ 0x1C0086C10 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00892FC (zzzImeSetOwnerWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0088D5C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(struct tagWND *a1)
{
  const struct tagWND *v1; // rdi
  int IsComponent; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax
  struct tagWND *Host; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 TopLevelWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // r8

  v1 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1);
  result = GetWindowCloakState(v1, v3, v4);
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
        result = GetWindowCloakState(Host, v7, v8);
        if ( (result & 1) != 0 )
          return result;
        if ( !(unsigned int)CoreWindowProp::IsComponent(v1) )
        {
          TopLevelWindow = GetTopLevelWindow(v1);
          return GetWindowCloakState(TopLevelWindow, v10, v11);
        }
      }
      return 2LL;
    }
  }
  return result;
}
