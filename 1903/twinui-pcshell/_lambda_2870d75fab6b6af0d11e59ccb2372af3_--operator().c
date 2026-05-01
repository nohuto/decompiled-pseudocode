/*
 * XREFs of _lambda_2870d75fab6b6af0d11e59ccb2372af3_::operator() @ 0x180107DDC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2870d75fab6b6af0d11e59ccb2372af3___::Run @ 0x180109200 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2870d75fab6b6af0d11e59ccb2372af3___--Run.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180044D90 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2870d75fab6b6af0d11e59ccb2372af3_::operator()(_BYTE *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  struct IInspectable *v4; // rcx
  unsigned __int64 v5; // r9
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  if ( *((_QWORD *)a1 + 1) )
  {
    v3 = Microsoft::WRL::WeakRef::InternalResolve(
           (Microsoft::WRL::WeakRef *)(a1 + 8),
           &GUID_18661d31_3944_41b1_bd96_da3defc2c268,
           &v9);
    v4 = v9;
  }
  else
  {
    v4 = 0LL;
    v9 = 0LL;
    v3 = -2147024809;
  }
  if ( v3 >= 0 )
  {
    LOBYTE(v2) = *a1;
    v6 = ((__int64 (__fastcall *)(struct IInspectable *, __int64))v4->lpVtbl->GetIids)(v4, v2);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = 0;
      goto LABEL_10;
    }
    v5 = (unsigned int)v6;
  }
  else
  {
    v5 = (unsigned int)v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)v5);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v3;
}
