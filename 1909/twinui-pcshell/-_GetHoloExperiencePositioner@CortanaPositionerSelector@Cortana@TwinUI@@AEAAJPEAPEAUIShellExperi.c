/*
 * XREFs of ?_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1801DF04C
 * Callers:
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x18007AB80 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::_GetHoloExperiencePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  __int64 *v3; // rsi
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v4; // rcx
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  LPVOID v8; // rbx
  __int64 (__fastcall *v9)(LPVOID, GUID *, GUID *, __int64 *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 8);
  v4 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*((_QWORD *)this + 1);
  if ( v4 )
    goto LABEL_8;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         0x404u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 159LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    return v6;
  }
  v8 = ppv;
  v9 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3);
  v5 = v9(v8, &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7, &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 160LL;
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v4 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v3;
  if ( *v3 )
  {
LABEL_8:
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v3;
  }
  *a2 = v4;
  return 0LL;
}
