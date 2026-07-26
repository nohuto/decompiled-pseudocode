/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C007DC80
 * Callers:
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007BAE4 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C007DC80
 * Reason: Hex-Rays returned no pseudocode for 0x1C007DC80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C007DC80: mov     r11, rsp
 * 00000001C007DC83: mov     [r11+8], rbx
 * 00000001C007DC87: mov     [r11+10h], rsi
 * 00000001C007DC8B: push    rdi
 * 00000001C007DC8C: sub     rsp, 50h
 * 00000001C007DC90: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C007DC97: mov     esi, 53h ; 'S'
 * 00000001C007DC9C: mov     rbx, rcx
 * 00000001C007DC9F: mov     eax, [rdx+2Ch]
 * 00000001C007DCA2: lea     edi, [rsi-4Fh]
 * 00000001C007DCA5: test    al, 2
 * 00000001C007DCA7: jz      short loc_1C007DCD6
 * 00000001C007DCA9: cmp     byte ptr [rdx+29h], 1
 * 00000001C007DCAD: jb      short loc_1C007DCD6
 * 00000001C007DCAF: and     qword ptr [r11-28h], 0
 * 00000001C007DCB4: lea     rax, [r11+38h]
 * 00000001C007DCB8: mov     [r11-30h], rdi
 * 00000001C007DCBC: lea     r8, [r11+30h]
 * 00000001C007DCC0: mov     r9d, edi
 * 00000001C007DCC3: movzx   edx, si; unsigned __int16
 * 00000001C007DCC6: lea     rcx, WPP_34b7afbc912539598d6d69098c3d2070_Traceguids; struct _GUID *
 * 00000001C007DCCD: mov     [r11-38h], rax
 * 00000001C007DCD1: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C007DCD6: and     [rsp+58h+var_10], 0
 * 00000001C007DCDC: lea     rax, [rsp+58h+arg_30]
 * 00000001C007DCE4: mov     [rsp+58h+var_18], rdi
 * 00000001C007DCE9: lea     r9, WPP_34b7afbc912539598d6d69098c3d2070_Traceguids
 * 00000001C007DCF0: mov     [rsp+58h+var_20], rax
 * 00000001C007DCF5: mov     edx, 1
 * 00000001C007DCFA: lea     rax, [rsp+58h+arg_28]
 * 00000001C007DD02: mov     [rsp+58h+var_28], rdi
 * 00000001C007DD07: mov     [rsp+58h+var_30], rax
 * 00000001C007DD0C: mov     rcx, rbx
 * 00000001C007DD0F: mov     [rsp+58h+var_38], si
 * 00000001C007DD14: lea     r8d, [rdx+1]
 * 00000001C007DD18: call    cs:__imp_WppAutoLogTrace
 * 00000001C007DD1F: nop     dword ptr [rax+rax+00h]
 * 00000001C007DD24: mov     rbx, [rsp+58h+arg_0]
 * 00000001C007DD29: mov     rsi, [rsp+58h+arg_8]
 * 00000001C007DD2E: add     rsp, 50h
 * 00000001C007DD32: pop     rdi
 * 00000001C007DD33: retn
 */
