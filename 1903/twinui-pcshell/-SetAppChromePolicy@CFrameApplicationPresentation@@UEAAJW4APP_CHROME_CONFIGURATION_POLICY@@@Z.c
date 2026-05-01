/*
 * XREFs of ?SetAppChromePolicy@CFrameApplicationPresentation@@UEAAJW4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x18007BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z @ 0x18010D5E8 (--0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetAppChromePolicy(__int64 a1, int a2)
{
  int v3; // eax
  __int64 (__fastcall *v5)(__int64, APPLICATION_FRAME_CHROME_CHANGE_DATA *); // rbx
  APPLICATION_FRAME_CHROME_CHANGE_DATA *v6; // rax
  int v7; // eax
  const char *v8; // r9
  int v9; // eax
  int v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[48]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = -2;
  v3 = *(_DWORD *)(a1 + 652);
  *(_DWORD *)(a1 + 652) = a2;
  if ( v3 != a2 )
  {
    try
    {
      v5 = *(__int64 (__fastcall **)(__int64, APPLICATION_FRAME_CHROME_CHANGE_DATA *))(*(_QWORD *)a1 + 152LL);
      v6 = APPLICATION_FRAME_CHROME_CHANGE_DATA::APPLICATION_FRAME_CHROME_CHANGE_DATA(
             (APPLICATION_FRAME_CHROME_CHANGE_DATA *)v11,
             (const struct APPLICATION_FRAME_CHROME_CHANGE_DATA *)(a1 + 560));
      v7 = v5(a1, v6);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4EC,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v7,
          -2);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x4F5,
                             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                             v8);
    }
    if ( *(_QWORD *)(a1 + 640) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4F0,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v9,
          v10);
        __debugbreak();
        JUMPOUT(0x1800FA299LL);
      }
    }
  }
  return 0LL;
}
