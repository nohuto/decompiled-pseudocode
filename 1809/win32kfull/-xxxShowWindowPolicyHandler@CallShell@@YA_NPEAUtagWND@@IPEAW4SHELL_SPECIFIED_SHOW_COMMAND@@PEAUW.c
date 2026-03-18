/*
 * XREFs of ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C02221F4
 * Callers:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C0009D4C (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C02220E8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
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
  __int64 v11; // rcx
  char v12; // al
  int v13; // ecx
  int v14; // ecx
  __int64 v16; // [rsp+20h] [rbp-88h] BYREF
  int v17; // [rsp+28h] [rbp-80h]
  _BYTE v18[52]; // [rsp+2Ch] [rbp-7Ch] BYREF

  v5 = 1;
  v7 = (int)a2;
  v17 = 1;
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  v16 = *(_QWORD *)this;
  memset(v18, 0, sizeof(v18));
  *(_DWORD *)v18 = v7;
  SetOrClrWF(1, (__int64)this, 0xDA02u, 0);
  if ( !(unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((__int64)&v16) )
    return 0;
  *((_DWORD *)this + 77) |= 2u;
  v10 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v10 )
    v11 = ***(_QWORD ***)(v10 + 8);
  else
    v11 = -1LL;
  v12 = anonymous_namespace_::GroupManagementEnabledForDesktop(v11);
  v13 = *(_DWORD *)&v18[4];
  *a3 = *(_DWORD *)&v18[4];
  if ( !v13 )
    goto LABEL_8;
  v14 = v13 - 3;
  if ( !v14 )
  {
    *(_OWORD *)a5 = *(_OWORD *)&v18[8];
    return v5;
  }
  if ( v14 == 1 )
  {
LABEL_8:
    if ( v12 )
      *(_DWORD *)a4 = *(_DWORD *)&v18[24];
  }
  return v5;
}
