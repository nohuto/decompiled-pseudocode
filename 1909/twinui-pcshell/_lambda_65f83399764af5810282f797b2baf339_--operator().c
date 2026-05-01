/*
 * XREFs of _lambda_65f83399764af5810282f797b2baf339_::operator() @ 0x180351928
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65f83399764af5810282f797b2baf339___::Run @ 0x180352B60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65f83399764af5810282f797b2baf339___--Run.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180014890 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_65f83399764af5810282f797b2baf339_::operator()(Microsoft::WRL::WeakRef *this)
{
  __int64 v2; // rdx
  int v3; // ebx
  struct IInspectable *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( *(_QWORD *)this )
  {
    v3 = Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, &v7);
    v4 = v7;
  }
  else
  {
    v4 = 0LL;
    v7 = 0LL;
    v3 = -2147024809;
  }
  if ( v3 >= 0 )
  {
    LOBYTE(v2) = *((_DWORD *)this + 2) == 0;
    ((void (__fastcall *)(struct IInspectable *, __int64))v4->lpVtbl[1].Release)(v4, v2);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
