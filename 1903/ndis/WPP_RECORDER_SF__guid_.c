/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C003EE34
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C (ndisIfReadNetworkGuidFromKey.c)
 *     ndisPnPAddDevice @ 0x1C002D994 (ndisPnPAddDevice.c)
 *     NdisFRegisterFilterDriver @ 0x1C00373A0 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C01186B0 (ndisLWMOpenConfigurationKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1C003EE34
 * Reason: Hex-Rays returned no pseudocode for 0x1C003EE34
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003EE34: mov     [rsp+arg_0], rbx
 * 00000001C003EE39: mov     [rsp+arg_8], rbp
 * 00000001C003EE3E: mov     [rsp+arg_10], rsi
 * 00000001C003EE43: push    rdi
 * 00000001C003EE44: push    r14
 * 00000001C003EE46: push    r15
 * 00000001C003EE48: sub     rsp, 40h
 * 00000001C003EE4C: mov     r14d, r8d
 * 00000001C003EE4F: mov     r15, rcx
 * 00000001C003EE52: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003EE59: mov     sil, dl
 * 00000001C003EE5C: mov     edi, r8d
 * 00000001C003EE5F: movzx   ebp, r9w
 * 00000001C003EE63: shr     rdi, 10h
 * 00000001C003EE67: lea     ebx, [r14-1]
 * 00000001C003EE6B: mov     r10d, ebx
 * 00000001C003EE6E: and     ebx, 1Fh
 * 00000001C003EE71: shr     r10, 5
 * 00000001C003EE75: mov     edx, ebx
 * 00000001C003EE77: mov     rbx, [rsp+58h+arg_28]
 * 00000001C003EE7F: lea     rax, [rdi+rdi*4]
 * 00000001C003EE83: and     r10d, 7FFh
 * 00000001C003EE8A: lea     r11, [r10+rax*4]
 * 00000001C003EE8E: mov     eax, [rcx+r11*4+2Ch]
 * 00000001C003EE93: bt      eax, edx
 * 00000001C003EE96: jb      loc_1C005D8CA
 * 00000001C003EE9C: and     [rsp+58h+var_20], 0
 * 00000001C003EEA2: mov     r8d, r14d
 * 00000001C003EEA5: mov     r9, [rsp+58h+arg_20]
 * 00000001C003EEAD: mov     rcx, r15
 * 00000001C003EEB0: mov     [rsp+58h+var_28], 10h
 * 00000001C003EEB9: mov     [rsp+58h+var_30], rbx
 * 00000001C003EEBE: movzx   edx, sil
 * 00000001C003EEC2: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C003EEC7: call    cs:__imp_WppAutoLogTrace
 * 00000001C003EECE: nop     dword ptr [rax+rax+00h]
 * 00000001C003EED3: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003EED8: mov     rbp, [rsp+58h+arg_8]
 * 00000001C003EEDD: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003EEE2: add     rsp, 40h
 * 00000001C003EEE6: pop     r15
 * 00000001C003EEE8: pop     r14
 * 00000001C003EEEA: pop     rdi
 * 00000001C003EEEB: retn
 * 00000001C005D8CA: lea     rax, [rdi+rdi*4]
 * 00000001C005D8CE: add     rax, rax
 * 00000001C005D8D1: cmp     [rcx+rax*8+29h], sil
 * 00000001C005D8D6: jb      loc_1C003EE9C
 * 00000001C005D8DC: and     [rsp+58h+var_38], 0
 * 00000001C005D8E2: mov     r9d, 10h
 * 00000001C005D8E8: mov     rcx, [rsp+58h+arg_20]; struct _GUID *
 * 00000001C005D8F0: mov     r8, rbx
 * 00000001C005D8F3: movzx   edx, bp; unsigned __int16
 * 00000001C005D8F6: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005D8FB: nop
 * 00000001C005D8FC: jmp     loc_1C003EE9C
 */
