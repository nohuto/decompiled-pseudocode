/*
 * XREFs of _lambda_5c8667dff346ed4d003bfb934b61e856_::operator() @ 0x18032C894
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::Run @ 0x18032CC90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___--Run.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800186D8 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_5c8667dff346ed4d003bfb934b61e856_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  struct IInspectable *v3; // rcx
  struct IInspectable *v4; // [rsp+40h] [rbp+10h] BYREF
  __int64 v5; // [rsp+48h] [rbp+18h] BYREF

  v4 = 0LL;
  Microsoft::WRL::WeakRef::InternalResolve(
    (Microsoft::WRL::WeakRef *)(a1 + 2),
    &GUID_0e0da070_2224_4934_8090_041f7ff223eb,
    &v4);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IInspectable *))(*(_QWORD *)*a1 + 32LL))(*a1, a1[1], v4);
  v3 = v4;
  if ( v4 )
  {
    if ( (int)result <= -1 || (result = (unsigned int)(result - 2556504), (unsigned int)result <= 1) )
    {
      v5 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
      if ( ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))v4->lpVtbl->QueryInterface)(
             v4,
             &GUID_94e76fd7_6ec7_4a63_a8fb_5d5cb760b7f6,
             &v5) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
      v3 = v4;
    }
  }
  if ( v3 )
  {
    v4 = 0LL;
    return ((__int64 (__fastcall *)(struct IInspectable *))v3->lpVtbl->Release)(v3);
  }
  return result;
}
