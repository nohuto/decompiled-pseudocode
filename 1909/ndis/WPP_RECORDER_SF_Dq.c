/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C003F030
 * Callers:
 *     ndisOidTranslateBetweenOids @ 0x1C0002D80 (ndisOidTranslateBetweenOids.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dq @ 0x1C003F030
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F030
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F030: mov     [rsp+arg_0], rbx
 * 00000001C003F035: push    rdi
 * 00000001C003F036: sub     rsp, 50h
 * 00000001C003F03A: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C003F041: movzx   ebx, r9w
 * 00000001C003F045: mov     rdi, rcx
 * 00000001C003F048: test    dword ptr [rdx+2Ch], 400h
 * 00000001C003F04F: jnz     loc_1C005DB1E
 * 00000001C003F055: and     [rsp+58h+var_10], 0
 * 00000001C003F05B: lea     rax, [rsp+58h+arg_30]
 * 00000001C003F063: mov     [rsp+58h+var_18], 8
 * 00000001C003F06C: lea     r9, WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids
 * 00000001C003F073: mov     [rsp+58h+var_20], rax
 * 00000001C003F078: mov     edx, 4
 * 00000001C003F07D: lea     rax, [rsp+58h+arg_28]
 * 00000001C003F085: mov     [rsp+58h+var_28], 4
 * 00000001C003F08E: mov     [rsp+58h+var_30], rax
 * 00000001C003F093: mov     rcx, rdi
 * 00000001C003F096: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C003F09B: lea     r8d, [rdx+7]
 * 00000001C003F09F: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F0A6: nop     dword ptr [rax+rax+00h]
 * 00000001C003F0AB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003F0B0: add     rsp, 50h
 * 00000001C003F0B4: pop     rdi
 * 00000001C003F0B5: retn
 * 00000001C005DB1E: cmp     byte ptr [rdx+29h], 4
 * 00000001C005DB22: jb      loc_1C003F055
 * 00000001C005DB28: and     [rsp+58h+var_28], 0
 * 00000001C005DB2E: lea     rax, [rsp+58h+arg_30]
 * 00000001C005DB36: mov     [rsp+58h+var_30], 8
 * 00000001C005DB3F: lea     r8, [rsp+58h+arg_28]
 * 00000001C005DB47: mov     r9d, 4
 * 00000001C005DB4D: movzx   edx, bx; unsigned __int16
 * 00000001C005DB50: lea     rcx, WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids; struct _GUID *
 * 00000001C005DB57: mov     [rsp+58h+var_38], rax
 * 00000001C005DB5C: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005DB61: nop
 * 00000001C005DB62: jmp     loc_1C003F055
 */
