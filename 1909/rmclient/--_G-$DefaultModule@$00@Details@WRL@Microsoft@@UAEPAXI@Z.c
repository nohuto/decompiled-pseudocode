/*
 * XREFs of ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UAEPAXI@Z @ 0x1000F030
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YG_NPAVModuleBase@123@PBG_N@Z @ 0x10006D60 (-TerminateMap@Details@WRL@Microsoft@@YG_NPAVModuleBase@123@PBG_N@Z.c)
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UAEPAXI@Z @ 0x1000F030
 * Reason: Hex-Rays returned no pseudocode for 0x1000F030
 * Fallback: raw IDA disassembly follows.
 *
 * 000000001000F030: mov     edi, edi
 * 000000001000F032: push    ebp; unsigned __int16 *
 * 000000001000F033: mov     ebp, esp
 * 000000001000F035: push    esi; struct Microsoft::WRL::Details::ModuleBase *
 * 000000001000F036: mov     esi, ecx
 * 000000001000F038: push    ecx; this
 * 000000001000F039: mov     dword ptr [esi], offset ??_7?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@6B@; const Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable'
 * 000000001000F03F: call    ?TerminateMap@Details@WRL@Microsoft@@YG_NPAVModuleBase@123@PBG_N@Z; Microsoft::WRL::Details::TerminateMap(Microsoft::WRL::Details::ModuleBase *,ushort const *,bool)
 * 000000001000F044: and     ?module_@ModuleBase@Details@WRL@Microsoft@@2PAV1234@A, 0; Microsoft::WRL::Details::ModuleBase * Microsoft::WRL::Details::ModuleBase::module_
 * 000000001000F04B: test    [ebp+arg_0], 1
 * 000000001000F04F: mov     ?isInitialized@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@0_NA, 0; bool Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized
 * 000000001000F056: jz      short loc_1000F05F
 * 000000001000F058: push    esi; Block
 * 000000001000F059: call    ??3@YAXPAX@Z; operator delete(void *)
 * 000000001000F05E: pop     ecx
 * 000000001000F05F: mov     eax, esi
 * 000000001000F061: pop     esi
 * 000000001000F062: pop     ebp
 * 000000001000F063: retn    4
 */
