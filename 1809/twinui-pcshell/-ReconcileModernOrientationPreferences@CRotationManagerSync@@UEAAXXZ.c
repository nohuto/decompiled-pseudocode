/*
 * XREFs of ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18004DB40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x18004DC4C (_lambda_f6f69901abcf4556c2ac2b4f02b3e468_--operator().c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468__&___ptr64__1_long___lambda_f6f69901abcf4556c2ac2b4f02b3e468__&___ptr64_ @ 0x18004DCC8 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_18004DCC8.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006E460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CRotationManagerSync::ReconcileModernOrientationPreferences(CRotationManagerSync *this)
{
  char *v2; // rbx
  PSRWLOCK v3; // rdi
  char *v4; // rsi
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  char *v11; // [rsp+70h] [rbp+18h]

  v2 = (char *)this - 72;
  v11 = (char *)this - 72;
  if ( this != (CRotationManagerSync *)72 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))((char *)this - 72);
  v8[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v8[1] = v2;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( LODWORD(v3[11].Ptr) == GetCurrentThreadId() )
  {
    lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator()(v8);
    v4 = v2;
  }
  else
  {
    v5 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468______ptr64__1_long___lambda_f6f69901abcf4556c2ac2b4f02b3e468______ptr64_(
                      &v9,
                      v8);
    v6 = *v5;
    v10 = *v5;
    *v5 = 0LL;
    v7 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
    }
    v4 = v2;
    if ( v6 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9), v6, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  if ( v4 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
}
