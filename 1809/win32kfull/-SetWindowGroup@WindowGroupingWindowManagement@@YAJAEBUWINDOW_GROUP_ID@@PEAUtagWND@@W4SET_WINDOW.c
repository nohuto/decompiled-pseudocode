/*
 * XREFs of ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0225B1C
 * Callers:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     NtUserSetWindowGroup @ 0x1C021D850 (NtUserSetWindowGroup.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_&___ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___ @ 0x1C02248F8 (_anonymous_namespace_--FindObject_CWindow_HWND_______ptr64_const_-___ptr64__lambda_fc1f41b167033.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C02249FC (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___ @ 0x1C0224C34 (CWindowGroupManager--_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___.c)
 *     ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0224FA0 (-AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C0225EC4 (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
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
  _DWORD *v19; // rax
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  CWindowGroup *v21; // rsi
  struct CWindow *Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f; // rax
  __int64 *v24; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-8h]
  unsigned int v26; // [rsp+2Ch] [rbp-4h]
  __int64 v27; // [rsp+60h] [rbp+30h] BYREF

  v5 = 0;
  v6 = (unsigned int)*a1;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 292);
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
        LODWORD(v27) = *(_DWORD *)(a2 + 292);
        Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___((__int64)`anonymous namespace'::g_windowGroupManager + 16, (unsigned int)v27, &v27);
        v21 = (CWindowGroup *)Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c;
        if ( Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c )
        {
          v27 = *(_QWORD *)a2;
          Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___(Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c + 24, (unsigned __int16)v27, &v27);
          if ( Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f )
          {
            CWindowGroup::_RemoveWindowAction(
              v21,
              Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f);
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
        LODWORD(v27) = *(_DWORD *)(a2 + 292);
        v24 = (__int64 *)a2;
        v25 = a3;
        v26 = a4;
        return (unsigned int)CWindowGroupManager::_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___(
                               (__int64)`anonymous namespace'::g_windowGroupManager,
                               &v27,
                               &v24);
      }
      LODWORD(v27) = *(_DWORD *)(a2 + 292);
      v16 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
              (__int64)`anonymous namespace'::g_windowGroupManager + 16,
              (unsigned int)v27,
              &v27);
      v17 = (CWindowGroup *)v16;
      if ( !v16 )
        return (unsigned int)-1073741275;
      v27 = *(_QWORD *)a2;
      v18 = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___(
                                v16 + 24,
                                (unsigned __int16)v27,
                                &v27);
      if ( !v18 )
        return (unsigned int)-1073741275;
      CWindowGroup::_RemoveWindowAction(v17, v18);
      v6 = (unsigned int)*a1;
    }
    v19 = (_DWORD *)anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
                      (__int64)`anonymous namespace'::g_windowGroupManager + 16,
                      v6,
                      a1);
    if ( v19 )
      return (unsigned int)CWindowGroup::AddWindow(v19, (__int64 *)a2, a3, a4);
    return (unsigned int)-1073741275;
  }
  return v5;
}
