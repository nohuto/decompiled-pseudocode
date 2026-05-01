/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___ @ 0x180050A88
 * Callers:
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180050768 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180050828 (_lambda_e5644482fbd8f2bfe422e00f476b1ca8_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___(
        __int64 a1,
        __int64 a2)
{
  char v4; // di
  unsigned __int64 v5; // rbp
  unsigned __int64 i; // rsi
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 *v11; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    v13 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = **(_QWORD **)(a2 + 8);
    v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
    v12 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      while ( v9 )
      {
        if ( v7 == v9 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          break;
        }
        if ( v9 == v8 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
          v4 = lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(**(_QWORD ***)(a2 + 16), &v13);
          goto LABEL_7;
        }
        v11 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v12, v11);
        v9 = v12;
      }
    }
    v4 = 1;
LABEL_7:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
