/*
 * XREFs of _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18006780C
 * Callers:
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067760 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015D1D0 (-GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x18015D384 (-GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_45f761d2d247477984b20cf6ec7ae807_::operator()(__int64 **a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(v2 + 744);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v2 + 744));
  v5 = *a1;
  v9 = 0LL;
  v6 = *v5;
  *v5 = v4;
  v8 = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
}
