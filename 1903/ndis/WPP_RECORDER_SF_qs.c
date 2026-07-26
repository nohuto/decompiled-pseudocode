/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C00A66F8
 * Callers:
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00A5614 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisPowerIrpWorker @ 0x1C00A6C90 (ndisPowerIrpWorker.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qs @ 0x1C00A66F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00A66F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00A66F8: mov     rax, rsp
 * 00000001C00A66FB: mov     [rax+8], rbx
 * 00000001C00A66FF: mov     [rax+10h], rbp
 * 00000001C00A6703: mov     [rax+18h], rsi
 * 00000001C00A6707: mov     [rax+20h], rdi
 * 00000001C00A670B: push    r13
 * 00000001C00A670D: sub     rsp, 50h
 * 00000001C00A6711: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00A6718: lea     r13, aNull; "NULL"
 * 00000001C00A671F: mov     rdi, [rsp+58h+arg_30]
 * 00000001C00A6727: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00A672B: movzx   esi, r9w
 * 00000001C00A672F: mov     rbp, rcx
 * 00000001C00A6732: test    dword ptr [rdx+2Ch], 2000h
 * 00000001C00A6739: jz      short loc_1C00A6793
 * 00000001C00A673B: cmp     byte ptr [rdx+29h], 4
 * 00000001C00A673F: jb      short loc_1C00A6793
 * 00000001C00A6741: test    rdi, rdi
 * 00000001C00A6744: jz      short loc_1C00A6757
 * 00000001C00A6746: mov     rcx, rbx
 * 00000001C00A6749: inc     rcx
 * 00000001C00A674C: cmp     byte ptr [rdi+rcx], 0
 * 00000001C00A6750: jnz     short loc_1C00A6749
 * 00000001C00A6752: inc     rcx
 * 00000001C00A6755: jmp     short loc_1C00A675C
 * 00000001C00A6757: mov     ecx, 5
 * 00000001C00A675C: test    rdi, rdi
 * 00000001C00A675F: movzx   edx, si; unsigned __int16
 * 00000001C00A6762: mov     rax, rdi
 * 00000001C00A6765: lea     r8, [rsp+58h+arg_28]
 * 00000001C00A676D: cmovz   rax, r13
 * 00000001C00A6771: mov     r9d, 8
 * 00000001C00A6777: and     [rsp+58h+var_28], 0
 * 00000001C00A677D: mov     [rsp+58h+var_30], rcx
 * 00000001C00A6782: lea     rcx, WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids; struct _GUID *
 * 00000001C00A6789: mov     [rsp+58h+var_38], rax
 * 00000001C00A678E: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00A6793: test    rdi, rdi
 * 00000001C00A6796: jz      short loc_1C00A67A6
 * 00000001C00A6798: inc     rbx
 * 00000001C00A679B: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00A679F: jnz     short loc_1C00A6798
 * 00000001C00A67A1: inc     rbx
 * 00000001C00A67A4: jmp     short loc_1C00A67AB
 * 00000001C00A67A6: mov     ebx, 5
 * 00000001C00A67AB: test    rdi, rdi
 * 00000001C00A67AE: lea     rax, [rsp+58h+arg_28]
 * 00000001C00A67B6: mov     edx, 4
 * 00000001C00A67BB: lea     r9, WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids
 * 00000001C00A67C2: cmovz   rdi, r13
 * 00000001C00A67C6: mov     rcx, rbp
 * 00000001C00A67C9: and     [rsp+58h+var_10], 0
 * 00000001C00A67CF: mov     [rsp+58h+var_18], rbx
 * 00000001C00A67D4: mov     [rsp+58h+var_20], rdi
 * 00000001C00A67D9: lea     r8d, [rdx+0Ah]
 * 00000001C00A67DD: mov     [rsp+58h+var_28], 8
 * 00000001C00A67E6: mov     [rsp+58h+var_30], rax
 * 00000001C00A67EB: mov     word ptr [rsp+58h+var_38], si
 * 00000001C00A67F0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00A67F7: nop     dword ptr [rax+rax+00h]
 * 00000001C00A67FC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00A6801: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00A6806: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00A680B: mov     rdi, [rsp+58h+arg_18]
 * 00000001C00A6810: add     rsp, 50h
 * 00000001C00A6814: pop     r13
 * 00000001C00A6816: retn
 */
