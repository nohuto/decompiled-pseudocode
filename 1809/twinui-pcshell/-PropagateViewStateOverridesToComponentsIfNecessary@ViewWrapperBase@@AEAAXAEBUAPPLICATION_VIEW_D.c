/*
 * XREFs of ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180242D60
 * Callers:
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x180242450 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802439D8 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 * Callees:
 *     ?HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z @ 0x1802158C8 (-HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z.c)
 */

void __fastcall ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
        ViewWrapperBase *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  int v3; // eax
  __int64 v4; // rdx
  ViewEventDispatcher *v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v3 = *((_DWORD *)a3 + 6);
  if ( *((_DWORD *)a2 + 6) != v3 )
  {
    v4 = *((unsigned int *)this + 37);
    v5 = (ViewEventDispatcher *)*((_QWORD *)this + 21);
    v6 = 1;
    v7 = v3;
    ViewEventDispatcher::HostViewStateOverridesChanged(v5, v4, (const struct HostViewStateOverrides *)&v6);
  }
}
