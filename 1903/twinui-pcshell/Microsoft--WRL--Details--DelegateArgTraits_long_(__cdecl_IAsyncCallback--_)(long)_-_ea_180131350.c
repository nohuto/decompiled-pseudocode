/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a___1_long_::Invoke @ 0x180131350
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180110CDC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180139648 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 */

/*
 * Hex-Rays decompilation failed for Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a___1_long_::Invoke @ 0x180131350
 * Reason: Hex-Rays returned no pseudocode for 0x180131350
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180131350: push    rbx
 * 0000000180131352: sub     rsp, 30h
 * 0000000180131356: mov     rax, [rcx+30h]
 * 000000018013135A: mov     r9d, [rcx+28h]
 * 000000018013135E: mov     r8, [rcx+20h]
 * 0000000180131362: mov     rdx, [rcx+18h]
 * 0000000180131366: mov     rcx, [rcx+10h]
 * 000000018013136A: mov     [rsp+38h+var_10], rax
 * 000000018013136F: and     [rsp+38h+var_18], 0
 * 0000000180131375: call    ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z; CAppViewManager::_SwitchAsyncWorker(HWND__ *,HWND__ *,VIEW_SWITCH_PREFERENCES,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,IAsyncCallback *)
 * 000000018013137A: mov     ebx, eax
 * 000000018013137C: test    eax, eax
 * 000000018013137E: jns     short loc_180131387
 * 0000000180131380: mov     ecx, eax
 * 0000000180131382: call    ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z; Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(long)
 * 0000000180131387: mov     eax, ebx
 * 0000000180131389: add     rsp, 30h
 * 000000018013138D: pop     rbx
 * 000000018013138E: retn
 */
