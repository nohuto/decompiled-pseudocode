/*
 * XREFs of ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x1800057B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A9E4 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z @ 0x18003ABF0 (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Register3DCompositor(struct IUnknown *a1)
{
  RTL_SRWLOCK *InstanceOffInputThread; // rax
  const char *v3; // r9
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rdi
  PVOID Ptr; // rcx
  int v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *v9; // rcx
  DWORD v10; // eax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  v4 = InstanceOffInputThread;
  if ( !a1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x58,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v3);
    goto LABEL_12;
  }
  AcquireSRWLockExclusive(InstanceOffInputThread);
  v5 = v4 + 3;
  Ptr = v4[3].Ptr;
  if ( Ptr )
  {
    v5->Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, RTL_SRWLOCK *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_e35f488a_a264_4cbb_b79c_9c7dbbd61d65,
         &v4[3]);
  v9 = retaddr;
  if ( v7 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::FailFast_Hr(
      v9,
      (void *)0x5E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  if ( !v5->Ptr )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v8);
    JUMPOUT(0x1800058D4LL);
  }
  ReleaseSRWLockExclusive(v4);
  if ( MPC3DStateHelper::On3DCompositorStateChanged(v4, 1) )
  {
    v10 = WaitForSingleObjectEx(v4[8].Ptr, 0xFFFFFFFF, 0);
    if ( v10 != 258 )
    {
      if ( v10 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xA07,
          (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
          v11);
        __debugbreak();
      }
    }
  }
  return 1LL;
}
