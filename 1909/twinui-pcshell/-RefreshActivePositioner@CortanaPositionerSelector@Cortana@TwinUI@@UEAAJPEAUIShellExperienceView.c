/*
 * XREFs of ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18004B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800497EC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x180083234 (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1801A4DE0 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::RefreshActivePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        HSTRING a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v4; // di
  const wchar_t *StringRawBuffer; // rax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v9; // rdx
  const wchar_t *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1;
  v4 = 0;
  if ( (unsigned int)dword_1805C1640 > 1 )
    goto LABEL_6;
  if ( SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
         L"CortanaPositionerOverride",
         &v16) >= 0 )
  {
    v4 = 1;
    if ( v16 <= 2 )
      v3 = v16;
  }
  if ( !dword_1805C1640 )
    dword_1805C1640 = (v4 ^ 1) + 1;
  if ( !v4 )
  {
LABEL_6:
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    if ( StringRawBuffer && wcsstr(StringRawBuffer, L"QuerySource=VoiceActivation")
      || (v10 = WindowsGetStringRawBuffer(a3, 0LL)) != 0LL && wcsstr(v10, L"QuerySource=Cortini") )
    {
      v16 = 0;
      Windows::Internal::Shell::Holographic::GetUserDisplayContext((Windows::Internal::Shell::Holographic *)&v16, v9);
      if ( v16 == 1 )
        v3 = 2;
    }
    else
    {
      v16 = 0;
      Windows::Internal::Shell::Holographic::GetUserInputContext((Windows::Internal::Shell::Holographic *)&v16, v9);
      if ( v16 == 1 )
        v3 = 2;
    }
  }
  v11 = (*(__int64 (__fastcall **)(TwinUI::Cortana::CortanaPositionerSelector *, _QWORD, struct Windows::Internal::Shell::Experience::IShellExperienceView *))(*(_QWORD *)this + 32LL))(
          this,
          v3,
          a2);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x65,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)v11,
    v14);
  return v12;
}
