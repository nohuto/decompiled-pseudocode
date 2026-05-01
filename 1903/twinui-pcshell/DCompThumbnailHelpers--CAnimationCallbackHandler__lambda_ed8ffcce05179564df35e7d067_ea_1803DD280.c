/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___::OnStoryboardStatusChanged @ 0x1803DD280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x180371358 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _lambda_ed8ffcce05179564df35e7d067b53c30_::operator() @ 0x1803DCC48 (_lambda_ed8ffcce05179564df35e7d067b53c30_--operator().c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  char v3; // di
  __int64 v6; // rcx
  __int64 v7; // rcx
  void (*v8)(void); // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v3 = 1;
  if ( a3 != 1 )
  {
    if ( a3 == 5 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      if ( !v7 )
        return 0LL;
      v8 = *(void (**)(void))(*(_QWORD *)v7 + 48LL);
    }
    else
    {
      if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
        return 0LL;
      v9 = *(_QWORD *)(a1 + 40);
      if ( !v9 )
        return 0LL;
      v8 = *(void (**)(void))(*(_QWORD *)v9 + 56LL);
    }
    v8();
    return 0LL;
  }
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  if ( (*(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, &v11, 0LL) >= 0 )
  {
    v12[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v11, v12) >= 0 )
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 40LL))(v12[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  }
  lambda_ed8ffcce05179564df35e7d067b53c30_::operator()((_QWORD *)(a1 + 16), v3);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return 0LL;
}
