/*
 * XREFs of _lambda_cd3a7c934a8972da93916929ed6f73f0_::operator() @ 0x180426FE0
 * Callers:
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x180426D64 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_cd3a7c934a8972da93916929ed6f73f0_::operator()(bool **a1, __int64 a2, bool *a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
         a2,
         0LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         &v8);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v8 + 32LL))(v8, &hWnd);
    if ( v6 >= 0 )
    {
      **a1 = GetPropW(hWnd, L"PROP_APPWINDOW_BLOCK_UNTRUSTED_LAUNCHES") != 0LL;
      *a3 = **a1;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v6;
}
