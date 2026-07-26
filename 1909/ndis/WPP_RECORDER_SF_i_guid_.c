/*
 * XREFs of WPP_RECORDER_SF_i_guid_ @ 0x1C00674E4
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BE0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i_guid_ @ 0x1C00674E4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00674E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00674E4: mov     rax, rsp
 * 00000001C00674E7: mov     [rax+8], rbx
 * 00000001C00674EB: mov     [rax+10h], rdi
 * 00000001C00674EF: push    r14
 * 00000001C00674F1: sub     rsp, 50h
 * 00000001C00674F5: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00674FC: mov     rdi, rcx
 * 00000001C00674FF: mov     rbx, [rsp+58h+arg_30]
 * 00000001C0067507: mov     r14d, 0A6h
 * 00000001C006750D: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0067514: jz      short loc_1C0067547
 * 00000001C0067516: cmp     byte ptr [rdx+29h], 3
 * 00000001C006751A: jb      short loc_1C0067547
 * 00000001C006751C: and     qword ptr [rax-28h], 0
 * 00000001C0067521: lea     r8, [rax+30h]
 * 00000001C0067525: mov     qword ptr [rax-30h], 10h
 * 00000001C006752D: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C0067534: mov     r9d, 8
 * 00000001C006753A: movzx   edx, r14w; unsigned __int16
 * 00000001C006753E: mov     [rax-38h], rbx
 * 00000001C0067542: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0067547: and     [rsp+58h+var_10], 0
 * 00000001C006754D: lea     rax, [rsp+58h+arg_28]
 * 00000001C0067555: mov     [rsp+58h+var_18], 10h
 * 00000001C006755E: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0067565: mov     [rsp+58h+var_20], rbx
 * 00000001C006756A: mov     edx, 3
 * 00000001C006756F: mov     [rsp+58h+var_28], 8
 * 00000001C0067578: mov     rcx, rdi
 * 00000001C006757B: mov     [rsp+58h+var_30], rax
 * 00000001C0067580: mov     [rsp+58h+var_38], r14w
 * 00000001C0067586: lea     r8d, [rdx+13h]
 * 00000001C006758A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0067591: nop     dword ptr [rax+rax+00h]
 * 00000001C0067596: mov     rbx, [rsp+58h+arg_0]
 * 00000001C006759B: mov     rdi, [rsp+58h+arg_8]
 * 00000001C00675A0: add     rsp, 50h
 * 00000001C00675A4: pop     r14
 * 00000001C00675A6: retn
 */
