/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C003F040
 * Callers:
 *     ndisOidTranslateBetweenOids @ 0x1C0002D80 (ndisOidTranslateBetweenOids.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dq @ 0x1C003F040
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F040: mov     [rsp+arg_0], rbx
 * 00000001C003F045: push    rdi
 * 00000001C003F046: sub     rsp, 50h
 * 00000001C003F04A: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C003F051: movzx   ebx, r9w
 * 00000001C003F055: mov     rdi, rcx
 * 00000001C003F058: test    dword ptr [rdx+2Ch], 400h
 * 00000001C003F05F: jnz     loc_1C005D946
 * 00000001C003F065: and     [rsp+58h+var_10], 0
 * 00000001C003F06B: lea     rax, [rsp+58h+arg_30]
 * 00000001C003F073: mov     [rsp+58h+var_18], 8
 * 00000001C003F07C: lea     r9, WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids
 * 00000001C003F083: mov     [rsp+58h+var_20], rax
 * 00000001C003F088: mov     edx, 4
 * 00000001C003F08D: lea     rax, [rsp+58h+arg_28]
 * 00000001C003F095: mov     [rsp+58h+var_28], 4
 * 00000001C003F09E: mov     [rsp+58h+var_30], rax
 * 00000001C003F0A3: mov     rcx, rdi
 * 00000001C003F0A6: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C003F0AB: lea     r8d, [rdx+7]
 * 00000001C003F0AF: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F0B6: nop     dword ptr [rax+rax+00h]
 * 00000001C003F0BB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003F0C0: add     rsp, 50h
 * 00000001C003F0C4: pop     rdi
 * 00000001C003F0C5: retn
 * 00000001C005D946: cmp     byte ptr [rdx+29h], 4
 * 00000001C005D94A: jb      loc_1C003F065
 * 00000001C005D950: and     [rsp+58h+var_28], 0
 * 00000001C005D956: lea     rax, [rsp+58h+arg_30]
 * 00000001C005D95E: mov     [rsp+58h+var_30], 8
 * 00000001C005D967: lea     r8, [rsp+58h+arg_28]
 * 00000001C005D96F: mov     r9d, 4
 * 00000001C005D975: movzx   edx, bx; unsigned __int16
 * 00000001C005D978: lea     rcx, WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids; struct _GUID *
 * 00000001C005D97F: mov     [rsp+58h+var_38], rax
 * 00000001C005D984: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005D989: nop
 * 00000001C005D98A: jmp     loc_1C003F065
 */
