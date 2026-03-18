/*
 * XREFs of ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C02257BC
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C0009D4C (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_&___ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___ @ 0x1C02248F8 (_anonymous_namespace_--FindObject_CWindow_HWND_______ptr64_const_-___ptr64__lambda_fc1f41b167033.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C02249FC (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C0224EE8 (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 */

void __fastcall WindowGroupingWindowManagement::HandleWindowDestruction(
        WindowGroupingWindowManagement *this,
        struct tagWND *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  CWindowGroup *Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  struct CWindow *Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  CWindowGroup *v8; // [rsp+40h] [rbp+18h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v3 )
    v4 = ***(_QWORD ***)(v3 + 8);
  else
    v4 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v4) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
    LODWORD(v7) = *((_DWORD *)this + 73);
    Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = (CWindowGroup *)anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___((__int64)`anonymous namespace'::g_windowGroupManager + 16, (unsigned int)v7, &v7);
    if ( Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c )
    {
      v7 = *(_QWORD *)this;
      v8 = Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c;
      Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___((__int64)Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c + 24, (unsigned __int16)v7, &v7);
      if ( Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f )
        lambda_e3bb960287ece658ac40c5b32ccf215b_::operator()(
          &v8,
          Object_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  }
}
