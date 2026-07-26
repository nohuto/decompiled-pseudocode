/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C003EE24
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C (ndisIfReadNetworkGuidFromKey.c)
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 *     NdisFRegisterFilterDriver @ 0x1C0037390 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C01186B0 (ndisLWMOpenConfigurationKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1C003EE24
 * Reason: Hex-Rays returned no pseudocode for 0x1C003EE24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003EE24: mov     [rsp+arg_0], rbx
 * 00000001C003EE29: mov     [rsp+arg_8], rbp
 * 00000001C003EE2E: mov     [rsp+arg_10], rsi
 * 00000001C003EE33: push    rdi
 * 00000001C003EE34: push    r14
 * 00000001C003EE36: push    r15
 * 00000001C003EE38: sub     rsp, 40h
 * 00000001C003EE3C: mov     r14d, r8d
 * 00000001C003EE3F: mov     r15, rcx
 * 00000001C003EE42: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003EE49: mov     sil, dl
 * 00000001C003EE4C: mov     edi, r8d
 * 00000001C003EE4F: movzx   ebp, r9w
 * 00000001C003EE53: shr     rdi, 10h
 * 00000001C003EE57: lea     ebx, [r14-1]
 * 00000001C003EE5B: mov     r10d, ebx
 * 00000001C003EE5E: and     ebx, 1Fh
 * 00000001C003EE61: shr     r10, 5
 * 00000001C003EE65: mov     edx, ebx
 * 00000001C003EE67: mov     rbx, [rsp+58h+arg_28]
 * 00000001C003EE6F: lea     rax, [rdi+rdi*4]
 * 00000001C003EE73: and     r10d, 7FFh
 * 00000001C003EE7A: lea     r11, [r10+rax*4]
 * 00000001C003EE7E: mov     eax, [rcx+r11*4+2Ch]
 * 00000001C003EE83: bt      eax, edx
 * 00000001C003EE86: jb      loc_1C005DAA2
 * 00000001C003EE8C: and     [rsp+58h+var_20], 0
 * 00000001C003EE92: mov     r8d, r14d
 * 00000001C003EE95: mov     r9, [rsp+58h+arg_20]
 * 00000001C003EE9D: mov     rcx, r15
 * 00000001C003EEA0: mov     [rsp+58h+var_28], 10h
 * 00000001C003EEA9: mov     [rsp+58h+var_30], rbx
 * 00000001C003EEAE: movzx   edx, sil
 * 00000001C003EEB2: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C003EEB7: call    cs:__imp_WppAutoLogTrace
 * 00000001C003EEBE: nop     dword ptr [rax+rax+00h]
 * 00000001C003EEC3: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003EEC8: mov     rbp, [rsp+58h+arg_8]
 * 00000001C003EECD: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003EED2: add     rsp, 40h
 * 00000001C003EED6: pop     r15
 * 00000001C003EED8: pop     r14
 * 00000001C003EEDA: pop     rdi
 * 00000001C003EEDB: retn
 * 00000001C005DAA2: lea     rax, [rdi+rdi*4]
 * 00000001C005DAA6: add     rax, rax
 * 00000001C005DAA9: cmp     [rcx+rax*8+29h], sil
 * 00000001C005DAAE: jb      loc_1C003EE8C
 * 00000001C005DAB4: and     [rsp+58h+var_38], 0
 * 00000001C005DABA: mov     r9d, 10h
 * 00000001C005DAC0: mov     rcx, [rsp+58h+arg_20]; struct _GUID *
 * 00000001C005DAC8: mov     r8, rbx
 * 00000001C005DACB: movzx   edx, bp; unsigned __int16
 * 00000001C005DACE: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005DAD3: nop
 * 00000001C005DAD4: jmp     loc_1C003EE8C
 */
