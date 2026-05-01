/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a___1_long_::Invoke @ 0x18010ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180112000 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 */

/*
 * Hex-Rays decompilation failed for Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a___1_long_::Invoke @ 0x18010ACE0
 * Reason: Hex-Rays returned no pseudocode for 0x18010ACE0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018010ACE0: push    rbx
 * 000000018010ACE2: sub     rsp, 30h
 * 000000018010ACE6: mov     rax, [rcx+30h]
 * 000000018010ACEA: mov     r9d, [rcx+28h]
 * 000000018010ACEE: mov     r8, [rcx+20h]
 * 000000018010ACF2: mov     rdx, [rcx+18h]
 * 000000018010ACF6: mov     rcx, [rcx+10h]
 * 000000018010ACFA: mov     [rsp+38h+var_10], rax
 * 000000018010ACFF: and     [rsp+38h+var_18], 0
 * 000000018010AD05: call    ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z; CAppViewManager::_SwitchAsyncWorker(HWND__ *,HWND__ *,VIEW_SWITCH_PREFERENCES,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,IAsyncCallback *)
 * 000000018010AD0A: mov     ebx, eax
 * 000000018010AD0C: test    eax, eax
 * 000000018010AD0E: jns     short loc_18010AD17
 * 000000018010AD10: mov     ecx, eax
 * 000000018010AD12: call    ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z; Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(long)
 * 000000018010AD17: mov     eax, ebx
 * 000000018010AD19: add     rsp, 30h
 * 000000018010AD1D: pop     rbx
 * 000000018010AD1E: retn
 */
