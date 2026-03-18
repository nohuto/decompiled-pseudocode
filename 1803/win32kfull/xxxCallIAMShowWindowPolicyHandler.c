/*
 * XREFs of xxxCallIAMShowWindowPolicyHandler @ 0x1C01A5444
 * Callers:
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01A4824 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallIAMShowWindowPolicyHandler(__int64 *a1, int a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  int v12; // edx
  int v13; // edx
  __int64 v15; // [rsp+20h] [rbp-78h] BYREF
  int v16; // [rsp+28h] [rbp-70h]
  _BYTE v17[52]; // [rsp+2Ch] [rbp-6Ch] BYREF

  v16 = 1;
  *a5 = 0LL;
  a5[1] = 0LL;
  *a3 = 0;
  *a4 = 0;
  v15 = *a1;
  memset(v17, 0, sizeof(v17));
  *(_DWORD *)v17 = a2;
  v8 = xxxCallIAMWindowManagementHandler((const struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *const)&v15);
  if ( v8 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 448LL);
    v10 = v9 ? ***(_QWORD ***)(v9 + 8) : -1LL;
    v11 = anonymous_namespace_::GroupManagementEnabledForDesktop(v10);
    v12 = *(_DWORD *)&v17[4];
    *a3 = *(_DWORD *)&v17[4];
    if ( !v12 )
      goto LABEL_8;
    v13 = v12 - 3;
    if ( !v13 )
    {
      *(_OWORD *)a5 = *(_OWORD *)&v17[8];
      return v8;
    }
    if ( v13 == 1 )
    {
LABEL_8:
      if ( v11 )
        *a4 = *(_DWORD *)&v17[24];
    }
  }
  return v8;
}
