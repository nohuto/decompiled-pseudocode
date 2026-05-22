/*
 * XREFs of ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18002B220
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x18000C4B4 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030788 (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerNavigationOverrideProxy::OnDisconnected(ControllerNavigationOverrideProxy *this)
{
  ControllerNavigationOverrideProxy **ControllerNavigationManager; // rax
  const char *v3; // r9
  ControllerNavigationOverrideProxy **v4; // rbp
  ControllerNavigationOverrideProxy **v5; // r14
  ControllerNavigationOverrideProxy **i; // rdi
  ControllerNavigationOverrideProxy *v7; // rbx
  ControllerNavigationOverrideProxy **j; // rsi
  ControllerNavigationOverrideProxy *v9; // rbx
  ControllerNavigationOverrideProxy *v10; // rax
  ControllerNavigationOverrideProxy *v11; // rcx
  ControllerNavigationOverrideProxy *v12; // rsi
  ControllerNavigationOverrideProxy **v13; // rbx
  ControllerNavigationOverrideProxy *v14; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v17; // [rsp+40h] [rbp+8h] BYREF

  ControllerNavigationManager = (ControllerNavigationOverrideProxy **)ISMStatics::GetControllerNavigationManager();
  v4 = ControllerNavigationManager;
  if ( ControllerNavigationManager[24] == this )
    ControllerNavigationManager::ResumeNavigation((ControllerNavigationManager *)ControllerNavigationManager, 0LL);
  v5 = (ControllerNavigationOverrideProxy **)v4[26];
  for ( i = (ControllerNavigationOverrideProxy **)v4[25]; i != v5; ++i )
  {
    v7 = *i;
    if ( *i )
    {
      (**(void (__fastcall ***)(ControllerNavigationOverrideProxy *))v7)(*i);
      (*(void (__fastcall **)(ControllerNavigationOverrideProxy *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    if ( v7 == this )
      break;
  }
  if ( i != v5 )
  {
    for ( j = i + 1; j != v5; ++j )
    {
      v9 = *j;
      if ( *j )
      {
        (**(void (__fastcall ***)(ControllerNavigationOverrideProxy *))v9)(*j);
        (*(void (__fastcall **)(ControllerNavigationOverrideProxy *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      if ( v9 != this )
      {
        if ( &v17 == (char *)j )
        {
          v10 = 0LL;
        }
        else
        {
          v10 = *j;
          *j = 0LL;
        }
        v11 = *i;
        *i = v10;
        if ( v11 )
          (*(void (__fastcall **)(ControllerNavigationOverrideProxy *))(*(_QWORD *)v11 + 8LL))(v11);
        ++i;
      }
    }
  }
  v12 = v4[26];
  if ( i == (ControllerNavigationOverrideProxy **)v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v3);
    JUMPOUT(0x18002B37ALL);
  }
  v13 = i;
  do
  {
    v14 = *v13;
    if ( *v13 )
    {
      *v13 = 0LL;
      (*(void (__fastcall **)(ControllerNavigationOverrideProxy *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    ++v13;
  }
  while ( v13 != (ControllerNavigationOverrideProxy **)v12 );
  result = 0LL;
  v4[26] = (ControllerNavigationOverrideProxy *)i;
  return result;
}
