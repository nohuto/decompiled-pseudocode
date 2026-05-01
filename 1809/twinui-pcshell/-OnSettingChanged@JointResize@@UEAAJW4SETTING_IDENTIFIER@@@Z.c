/*
 * XREFs of ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18036AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x18036A3F8 (-IsJointResizeEnabled@JointResize@@AEAA_NXZ.c)
 */

__int64 __fastcall JointResize::OnSettingChanged(__int64 a1, int a2)
{
  __int64 v3; // rdi
  char IsJointResizeEnabled; // al
  __int64 *v5; // rcx
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 5 )
  {
    v3 = a1 - 104;
    IsJointResizeEnabled = JointResize::IsJointResizeEnabled((JointResize *)(a1 - 104));
    v5 = *(__int64 **)(a1 + 48);
    v6 = a1 - 16;
    v7 = IsJointResizeEnabled == 0;
    v8 = *v5;
    if ( v7 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v8 + 80))(v5, v6 & -(__int64)(v3 != 0));
      if ( v9 < 0 )
      {
        v10 = 418LL;
        goto LABEL_5;
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v8 + 72))(v5, v6 & -(__int64)(v3 != 0));
      if ( v9 < 0 )
      {
        v10 = 414LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
  }
  return 0LL;
}
