/*
 * XREFs of ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAE@XZ @ 0x1000C444
 * Callers:
 *     ??__FmoduleSingleton@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x1000D780 (--__FmoduleSingleton@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Mic.c)
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YG_NPAVModuleBase@123@PBG_N@Z @ 0x10006D60 (-TerminateMap@Details@WRL@Microsoft@@YG_NPAVModuleBase@123@PBG_N@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAE@XZ @ 0x1000C444
 * Reason: Hex-Rays returned no pseudocode for 0x1000C444
 * Fallback: raw IDA disassembly follows.
 *
 * 000000001000C444: mov     edi, edi
 * 000000001000C446: push    ecx; this
 * 000000001000C447: mov     dword ptr [ecx], offset ??_7?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@6B@; const Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable'
 * 000000001000C44D: call    ?TerminateMap@Details@WRL@Microsoft@@YG_NPAVModuleBase@123@PBG_N@Z; Microsoft::WRL::Details::TerminateMap(Microsoft::WRL::Details::ModuleBase *,ushort const *,bool)
 * 000000001000C452: and     ?module_@ModuleBase@Details@WRL@Microsoft@@2PAV1234@A, 0; Microsoft::WRL::Details::ModuleBase * Microsoft::WRL::Details::ModuleBase::module_
 * 000000001000C459: mov     ?isInitialized@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@0_NA, 0; bool Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized
 * 000000001000C460: retn
 */
