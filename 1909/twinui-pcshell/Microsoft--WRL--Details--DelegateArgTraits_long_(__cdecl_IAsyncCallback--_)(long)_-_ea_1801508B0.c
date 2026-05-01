/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a___1_long_::Invoke @ 0x1801508B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18012FFAC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180158BC8 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 */

/*
 * Hex-Rays decompilation failed for Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a___1_long_::Invoke @ 0x1801508B0
 * Reason: Hex-Rays returned no pseudocode for 0x1801508B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001801508B0: push    rbx
 * 00000001801508B2: sub     rsp, 30h
 * 00000001801508B6: mov     rax, [rcx+30h]
 * 00000001801508BA: mov     r9d, [rcx+28h]
 * 00000001801508BE: mov     r8, [rcx+20h]
 * 00000001801508C2: mov     rdx, [rcx+18h]
 * 00000001801508C6: mov     rcx, [rcx+10h]
 * 00000001801508CA: mov     [rsp+38h+var_10], rax
 * 00000001801508CF: and     [rsp+38h+var_18], 0
 * 00000001801508D5: call    ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z; CAppViewManager::_SwitchAsyncWorker(HWND__ *,HWND__ *,VIEW_SWITCH_PREFERENCES,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,IAsyncCallback *)
 * 00000001801508DA: mov     ebx, eax
 * 00000001801508DC: test    eax, eax
 * 00000001801508DE: jns     short loc_1801508E7
 * 00000001801508E0: mov     ecx, eax
 * 00000001801508E2: call    ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z; Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(long)
 * 00000001801508E7: mov     eax, ebx
 * 00000001801508E9: add     rsp, 30h
 * 00000001801508ED: pop     rbx
 * 00000001801508EE: retn
 */
