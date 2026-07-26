/*
 * XREFs of WPP_RECORDER_SF_dl @ 0x1C006717C
 * Callers:
 *     NdisIfFreeNetLuidIndex @ 0x1C0114960 (NdisIfFreeNetLuidIndex.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dl @ 0x1C006717C
 * Reason: Hex-Rays returned no pseudocode for 0x1C006717C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006717C: mov     r11, rsp
 * 00000001C006717F: mov     [r11+8], rbx
 * 00000001C0067183: mov     [r11+10h], rsi
 * 00000001C0067187: push    rdi
 * 00000001C0067188: sub     rsp, 50h
 * 00000001C006718C: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0067193: mov     edi, 4
 * 00000001C0067198: mov     rbx, rcx
 * 00000001C006719B: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C00671A2: lea     esi, [rdi+1Ch]
 * 00000001C00671A5: jz      short loc_1C00671D4
 * 00000001C00671A7: cmp     [rdx+29h], dil
 * 00000001C00671AB: jb      short loc_1C00671D4
 * 00000001C00671AD: and     qword ptr [r11-28h], 0
 * 00000001C00671B2: lea     rax, [r11+38h]
 * 00000001C00671B6: mov     [r11-30h], rdi
 * 00000001C00671BA: lea     r8, [r11+30h]
 * 00000001C00671BE: mov     r9d, edi
 * 00000001C00671C1: movzx   edx, si; unsigned __int16
 * 00000001C00671C4: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C00671CB: mov     [r11-38h], rax
 * 00000001C00671CF: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00671D4: and     [rsp+58h+var_10], 0
 * 00000001C00671DA: lea     rax, [rsp+58h+arg_30]
 * 00000001C00671E2: mov     [rsp+58h+var_18], rdi
 * 00000001C00671E7: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C00671EE: mov     [rsp+58h+var_20], rax
 * 00000001C00671F3: mov     r8d, 16h
 * 00000001C00671F9: lea     rax, [rsp+58h+arg_28]
 * 00000001C0067201: mov     [rsp+58h+var_28], rdi
 * 00000001C0067206: mov     [rsp+58h+var_30], rax
 * 00000001C006720B: mov     edx, edi
 * 00000001C006720D: mov     rcx, rbx
 * 00000001C0067210: mov     [rsp+58h+var_38], si
 * 00000001C0067215: call    cs:__imp_WppAutoLogTrace
 * 00000001C006721C: nop     dword ptr [rax+rax+00h]
 * 00000001C0067221: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0067226: mov     rsi, [rsp+58h+arg_8]
 * 00000001C006722B: add     rsp, 50h
 * 00000001C006722F: pop     rdi
 * 00000001C0067230: retn
 */
