/*
 * XREFs of CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___ @ 0x1C01FC104
 * Callers:
 *     ?GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x1C01FCCD8 (-GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_&___ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___ @ 0x1C01FBE78 (_anonymous_namespace_--FindObject_CWindow_HWND_______ptr64_const_-___ptr64__lambda_fc1f41b167033.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C01FBF7C (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 *     _lambda_5263f2b98af0f98a991993afa5dd0415_::operator() @ 0x1C01FC328 (_lambda_5263f2b98af0f98a991993afa5dd0415_--operator().c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C01FCD28 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 */

__int64 __fastcall CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___(
        __int64 a1,
        _DWORD *a2,
        __int64 **a3)
{
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 *v7; // rcx
  char v8; // di
  CWindow *v9; // rsi
  __int64 v10; // rax
  __int64 Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f; // rax
  struct tagWND *WindowToForegroundActivate; // rax
  _QWORD v14[4]; // [rsp+20h] [rbp-20h] BYREF
  char v15; // [rsp+70h] [rbp+30h] BYREF
  CWindow *v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
                                                                                                   a1 + 16,
                                                                                                   (unsigned int)*a2,
                                                                                                   a2);
  v5 = 0;
  v6 = Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c;
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c )
  {
    v7 = *a3;
    v8 = 0;
    v14[0] = Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c;
    v9 = 0LL;
    v15 = 0;
    v14[1] = &v15;
    v14[2] = &v16;
    v10 = *v7;
    v16 = 0LL;
    v17 = v10;
    Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f = anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___(
                                                                                                 v6 + 24,
                                                                                                 (unsigned __int16)v10,
                                                                                                 &v17);
    if ( Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f )
    {
      lambda_5263f2b98af0f98a991993afa5dd0415_::operator()(
        v14,
        Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f);
      v8 = v15;
      v9 = v16;
    }
    WindowToForegroundActivate = 0LL;
    if ( v8 )
      WindowToForegroundActivate = CWindow::GetWindowToForegroundActivate(v9);
    *a3[1] = (__int64)WindowToForegroundActivate;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v5;
}
