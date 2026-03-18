/*
 * XREFs of CWindowGroupManager::_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___ @ 0x1C01FC1B4
 * Callers:
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD0B8 (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_&___ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___ @ 0x1C01FBE78 (_anonymous_namespace_--FindObject_CWindow_HWND_______ptr64_const_-___ptr64__lambda_fc1f41b167033.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C01FBF7C (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C01FD5A8 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 */

__int64 __fastcall CWindowGroupManager::_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___(
        __int64 a1,
        _DWORD *a2,
        __int64 **a3)
{
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
                                                                                                   a1 + 16,
                                                                                                   (unsigned int)*a2,
                                                                                                   a2);
  v5 = Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c;
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c
    && (v6 = *((_DWORD *)a3 + 2),
        v7 = *((_DWORD *)a3 + 3),
        v10 = **a3,
        (Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f = anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___(Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c + 24, (unsigned __int16)v10, &v10)) != 0) )
  {
    return (unsigned __int8)CWindowGroup::_UpdateWindowInternal(
                              v5,
                              Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f,
                              v7,
                              v6) == 0
         ? 0xC0000001
         : 0;
  }
  else
  {
    return 3221226021LL;
  }
}
