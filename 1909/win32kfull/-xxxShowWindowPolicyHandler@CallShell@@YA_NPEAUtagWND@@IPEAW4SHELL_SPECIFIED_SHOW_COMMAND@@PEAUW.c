/*
 * XREFs of ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C000E92C
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C0023B6C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C000EA24 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C000EA44 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

char __fastcall CallShell::xxxShowWindowPolicyHandler(
        CallShell *this,
        struct tagWND *a2,
        _DWORD *a3,
        enum SHELL_SPECIFIED_SHOW_COMMAND *a4,
        struct WINDOW_GROUP_ID *a5)
{
  char v5; // di
  int v7; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // al
  int v14; // ecx
  int v16; // ecx
  __int64 v17; // [rsp+20h] [rbp-88h] BYREF
  int v18; // [rsp+28h] [rbp-80h]
  _BYTE v19[52]; // [rsp+2Ch] [rbp-7Ch] BYREF

  v5 = 1;
  v7 = (int)a2;
  v18 = 1;
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  v17 = *(_QWORD *)this;
  memset(v19, 0, sizeof(v19));
  v10 = *((_QWORD *)this + 5);
  *(_DWORD *)v19 = v7;
  *(_BYTE *)(v10 + 234) |= 2u;
  if ( !(unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v17) )
    return 0;
  *((_DWORD *)this + 81) |= 2u;
  v11 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v11 )
    v12 = ***(_QWORD ***)(v11 + 8);
  else
    v12 = -1LL;
  v13 = anonymous_namespace_::GroupManagementEnabledForDesktop(v12);
  v14 = *(_DWORD *)&v19[4];
  *a3 = *(_DWORD *)&v19[4];
  if ( v14 )
  {
    v16 = v14 - 3;
    if ( !v16 )
    {
      *(_OWORD *)a5 = *(_OWORD *)&v19[8];
      return v5;
    }
    if ( v16 != 1 )
      return v5;
  }
  if ( v13 )
    *(_DWORD *)a4 = *(_DWORD *)&v19[24];
  return v5;
}
