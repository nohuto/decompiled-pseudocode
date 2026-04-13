/*
 * XREFs of ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x18000B7F8
 * Callers:
 *     ?put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x18000EB00 (-put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 *     ?get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x18000EBA0 (-get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloudExperienceHostCreateOOBEUserObject(const struct _GUID *a1, const struct _GUID *a2, void **a3)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  Instance = CoCreateInstance(
               &GUID_e9309678_18b4_414b_ba7a_2c9a7bcf9684,
               0LL,
               1u,
               &GUID_ef2e1c05_9173_433a_baa2_ada0c25d0b99,
               (LPVOID *)&v10);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v6 = 31LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\onecoreuapshell\\inc\\cloudexperiencehostcreatebrokeredobjecthelpers.h",
      (const char *)(unsigned int)Instance);
    goto LABEL_7;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, void **))(*v10 + 32LL))(
               v10,
               &GUID_9cb89eff_b39e_4d5c_a493_f2171580cc21,
               &GUID_401c0441_9dd0_494f_bc60_c53a4a7b9b38,
               a3);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v6 = 32LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 16LL))(v7, *v7);
  }
  return v5;
}
