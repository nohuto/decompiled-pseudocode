/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C00A68C8
 * Callers:
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00A57E4 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisPowerIrpWorker @ 0x1C00A6E60 (ndisPowerIrpWorker.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qs @ 0x1C00A68C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00A68C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00A68C8: mov     rax, rsp
 * 00000001C00A68CB: mov     [rax+8], rbx
 * 00000001C00A68CF: mov     [rax+10h], rbp
 * 00000001C00A68D3: mov     [rax+18h], rsi
 * 00000001C00A68D7: mov     [rax+20h], rdi
 * 00000001C00A68DB: push    r13
 * 00000001C00A68DD: sub     rsp, 50h
 * 00000001C00A68E1: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00A68E8: lea     r13, aNull; "NULL"
 * 00000001C00A68EF: mov     rdi, [rsp+58h+arg_30]
 * 00000001C00A68F7: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00A68FB: movzx   esi, r9w
 * 00000001C00A68FF: mov     rbp, rcx
 * 00000001C00A6902: test    dword ptr [rdx+2Ch], 2000h
 * 00000001C00A6909: jz      short loc_1C00A6963
 * 00000001C00A690B: cmp     byte ptr [rdx+29h], 4
 * 00000001C00A690F: jb      short loc_1C00A6963
 * 00000001C00A6911: test    rdi, rdi
 * 00000001C00A6914: jz      short loc_1C00A6927
 * 00000001C00A6916: mov     rcx, rbx
 * 00000001C00A6919: inc     rcx
 * 00000001C00A691C: cmp     byte ptr [rdi+rcx], 0
 * 00000001C00A6920: jnz     short loc_1C00A6919
 * 00000001C00A6922: inc     rcx
 * 00000001C00A6925: jmp     short loc_1C00A692C
 * 00000001C00A6927: mov     ecx, 5
 * 00000001C00A692C: test    rdi, rdi
 * 00000001C00A692F: movzx   edx, si; unsigned __int16
 * 00000001C00A6932: mov     rax, rdi
 * 00000001C00A6935: lea     r8, [rsp+58h+arg_28]
 * 00000001C00A693D: cmovz   rax, r13
 * 00000001C00A6941: mov     r9d, 8
 * 00000001C00A6947: and     [rsp+58h+var_28], 0
 * 00000001C00A694D: mov     [rsp+58h+var_30], rcx
 * 00000001C00A6952: lea     rcx, WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids; struct _GUID *
 * 00000001C00A6959: mov     [rsp+58h+var_38], rax
 * 00000001C00A695E: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00A6963: test    rdi, rdi
 * 00000001C00A6966: jz      short loc_1C00A6976
 * 00000001C00A6968: inc     rbx
 * 00000001C00A696B: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00A696F: jnz     short loc_1C00A6968
 * 00000001C00A6971: inc     rbx
 * 00000001C00A6974: jmp     short loc_1C00A697B
 * 00000001C00A6976: mov     ebx, 5
 * 00000001C00A697B: test    rdi, rdi
 * 00000001C00A697E: lea     rax, [rsp+58h+arg_28]
 * 00000001C00A6986: mov     edx, 4
 * 00000001C00A698B: lea     r9, WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids
 * 00000001C00A6992: cmovz   rdi, r13
 * 00000001C00A6996: mov     rcx, rbp
 * 00000001C00A6999: and     [rsp+58h+var_10], 0
 * 00000001C00A699F: mov     [rsp+58h+var_18], rbx
 * 00000001C00A69A4: mov     [rsp+58h+var_20], rdi
 * 00000001C00A69A9: lea     r8d, [rdx+0Ah]
 * 00000001C00A69AD: mov     [rsp+58h+var_28], 8
 * 00000001C00A69B6: mov     [rsp+58h+var_30], rax
 * 00000001C00A69BB: mov     word ptr [rsp+58h+var_38], si
 * 00000001C00A69C0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00A69C7: nop     dword ptr [rax+rax+00h]
 * 00000001C00A69CC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00A69D1: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00A69D6: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00A69DB: mov     rdi, [rsp+58h+arg_18]
 * 00000001C00A69E0: add     rsp, 50h
 * 00000001C00A69E4: pop     r13
 * 00000001C00A69E6: retn
 */
