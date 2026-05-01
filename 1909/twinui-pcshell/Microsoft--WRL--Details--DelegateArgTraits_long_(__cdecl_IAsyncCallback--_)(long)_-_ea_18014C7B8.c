/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_ @ 0x18014C7B8
 * Callers:
 *     ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x180151E40 (-ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCall.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800552E0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a2 + 28);
  v5 = (_QWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 44) = v4;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (_QWORD *)(a1 + 48) != v5 )
  {
    *(_QWORD *)(a1 + 48) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_1804551A0;
  return a1;
}
