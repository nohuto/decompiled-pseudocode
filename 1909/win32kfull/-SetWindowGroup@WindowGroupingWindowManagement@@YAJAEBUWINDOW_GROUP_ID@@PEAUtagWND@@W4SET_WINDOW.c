/*
 * XREFs of ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023D9A4
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C0023B6C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     NtUserSetWindowGroup @ 0x1C0235460 (NtUserSetWindowGroup.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_feddac2f3865f252345e81b2e8967f61___ @ 0x1C023C768 (_anonymous_namespace_--FindObject_CWindow_HWND_____const_-__lambda_feddac2f3865f252345e81b2e8967.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f391ddf1cf56839542dcbc253db2f01b___ @ 0x1C023C86C (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f391ddf1cf5683954.c)
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_67484336c3ce0230ba6035a2ed0557d5___ @ 0x1C023CAA4 (CWindowGroupManager--_ExecuteGroupAction__lambda_67484336c3ce0230ba6035a2ed0557d5___.c)
 *     ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023CDEC (-AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C023DD4C (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
 */

__int64 __fastcall WindowGroupingWindowManagement::SetWindowGroup(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v10; // r10d
  int v11; // eax
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  __int64 v16; // rax
  CWindowGroup *v17; // r15
  struct CWindow *v18; // rax
  __int64 v19; // rax
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b; // rax
  CWindowGroup *v21; // rsi
  struct CWindow *Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61; // rax
  __int64 *v24; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-8h]
  unsigned int v26; // [rsp+2Ch] [rbp-4h]
  __int64 v27; // [rsp+60h] [rbp+30h] BYREF

  v5 = 0;
  v6 = (unsigned int)*a1;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 308);
  if ( (_DWORD)v6 == v11 )
  {
    if ( v11 && ((a3 & 3) != 0 || a4) )
      v10 = 4;
  }
  else
  {
    if ( !v11 )
    {
      v10 = 1;
      goto LABEL_12;
    }
    if ( !(_DWORD)v6 )
    {
      v10 = 2;
      goto LABEL_12;
    }
    v10 = 3;
  }
  if ( v10 )
  {
LABEL_12:
    v12 = v10 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        LODWORD(v27) = *(_DWORD *)(a2 + 308);
        Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
                                                                                                 (__int64)`anonymous namespace'::g_windowGroupManager
                                                                                               + 16,
                                                                                                 (unsigned int)v27,
                                                                                                 &v27);
        v21 = (CWindowGroup *)Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b;
        if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b )
        {
          v27 = *(_QWORD *)a2;
          Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61 = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61___(Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b + 24, (unsigned __int16)v27, &v27);
          if ( Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61 )
          {
            CWindowGroup::_RemoveWindowAction(
              v21,
              Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61);
            return v5;
          }
        }
        return (unsigned int)-1073741275;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          return (unsigned int)-1073741823;
        LODWORD(v27) = *(_DWORD *)(a2 + 308);
        v24 = (__int64 *)a2;
        v25 = a3;
        v26 = a4;
        return (unsigned int)CWindowGroupManager::_ExecuteGroupAction__lambda_67484336c3ce0230ba6035a2ed0557d5___(
                               (__int64)`anonymous namespace'::g_windowGroupManager,
                               &v27,
                               &v24);
      }
      LODWORD(v27) = *(_DWORD *)(a2 + 308);
      v16 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
              (__int64)`anonymous namespace'::g_windowGroupManager + 16,
              (unsigned int)v27,
              &v27);
      v17 = (CWindowGroup *)v16;
      if ( !v16 )
        return (unsigned int)-1073741275;
      v27 = *(_QWORD *)a2;
      v18 = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61___(
                                v16 + 24,
                                (unsigned __int16)v27,
                                &v27);
      if ( !v18 )
        return (unsigned int)-1073741275;
      CWindowGroup::_RemoveWindowAction(v17, v18);
      v6 = (unsigned int)*a1;
    }
    v19 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
            (__int64)`anonymous namespace'::g_windowGroupManager + 16,
            v6,
            a1);
    if ( v19 )
      return (unsigned int)CWindowGroup::AddWindow(v19, (__int64 *)a2, a3, a4);
    return (unsigned int)-1073741275;
  }
  return v5;
}
