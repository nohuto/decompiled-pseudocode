/*
 * XREFs of WPP_RECORDER_SF_i_guid_ @ 0x1C0067314
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BF0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i_guid_ @ 0x1C0067314
 * Reason: Hex-Rays returned no pseudocode for 0x1C0067314
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0067314: mov     rax, rsp
 * 00000001C0067317: mov     [rax+8], rbx
 * 00000001C006731B: mov     [rax+10h], rdi
 * 00000001C006731F: push    r14
 * 00000001C0067321: sub     rsp, 50h
 * 00000001C0067325: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C006732C: mov     rdi, rcx
 * 00000001C006732F: mov     rbx, [rsp+58h+arg_30]
 * 00000001C0067337: mov     r14d, 0A6h
 * 00000001C006733D: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0067344: jz      short loc_1C0067377
 * 00000001C0067346: cmp     byte ptr [rdx+29h], 3
 * 00000001C006734A: jb      short loc_1C0067377
 * 00000001C006734C: and     qword ptr [rax-28h], 0
 * 00000001C0067351: lea     r8, [rax+30h]
 * 00000001C0067355: mov     qword ptr [rax-30h], 10h
 * 00000001C006735D: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C0067364: mov     r9d, 8
 * 00000001C006736A: movzx   edx, r14w; unsigned __int16
 * 00000001C006736E: mov     [rax-38h], rbx
 * 00000001C0067372: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0067377: and     [rsp+58h+var_10], 0
 * 00000001C006737D: lea     rax, [rsp+58h+arg_28]
 * 00000001C0067385: mov     [rsp+58h+var_18], 10h
 * 00000001C006738E: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0067395: mov     [rsp+58h+var_20], rbx
 * 00000001C006739A: mov     edx, 3
 * 00000001C006739F: mov     [rsp+58h+var_28], 8
 * 00000001C00673A8: mov     rcx, rdi
 * 00000001C00673AB: mov     [rsp+58h+var_30], rax
 * 00000001C00673B0: mov     [rsp+58h+var_38], r14w
 * 00000001C00673B6: lea     r8d, [rdx+13h]
 * 00000001C00673BA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00673C1: nop     dword ptr [rax+rax+00h]
 * 00000001C00673C6: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00673CB: mov     rdi, [rsp+58h+arg_8]
 * 00000001C00673D0: add     rsp, 50h
 * 00000001C00673D4: pop     r14
 * 00000001C00673D6: retn
 */
