/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C00722C8
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C00722C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00722C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00722C8: mov     r11, rsp
 * 00000001C00722CB: mov     [r11+8], rbx
 * 00000001C00722CF: mov     [r11+10h], rsi
 * 00000001C00722D3: push    rdi
 * 00000001C00722D4: sub     rsp, 50h
 * 00000001C00722D8: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00722DF: mov     esi, 3Fh ; '?'
 * 00000001C00722E4: mov     rbx, rcx
 * 00000001C00722E7: test    dword ptr [rdx+2Ch], 2000h
 * 00000001C00722EE: lea     edi, [rsi-3Bh]
 * 00000001C00722F1: jz      short loc_1C0072320
 * 00000001C00722F3: cmp     byte ptr [rdx+29h], 2
 * 00000001C00722F7: jb      short loc_1C0072320
 * 00000001C00722F9: and     qword ptr [r11-28h], 0
 * 00000001C00722FE: lea     rax, [r11+38h]
 * 00000001C0072302: mov     [r11-30h], rdi
 * 00000001C0072306: lea     r8, [r11+30h]
 * 00000001C007230A: mov     r9d, edi
 * 00000001C007230D: movzx   edx, si; unsigned __int16
 * 00000001C0072310: lea     rcx, WPP_091de2f669683db8988ab996bc16e527_Traceguids; struct _GUID *
 * 00000001C0072317: mov     [r11-38h], rax
 * 00000001C007231B: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0072320: and     [rsp+58h+var_10], 0
 * 00000001C0072326: lea     rax, [rsp+58h+arg_30]
 * 00000001C007232E: mov     [rsp+58h+var_18], rdi
 * 00000001C0072333: lea     r9, WPP_091de2f669683db8988ab996bc16e527_Traceguids
 * 00000001C007233A: mov     [rsp+58h+var_20], rax
 * 00000001C007233F: mov     edx, 2
 * 00000001C0072344: lea     rax, [rsp+58h+arg_28]
 * 00000001C007234C: mov     [rsp+58h+var_28], rdi
 * 00000001C0072351: mov     [rsp+58h+var_30], rax
 * 00000001C0072356: mov     rcx, rbx
 * 00000001C0072359: mov     [rsp+58h+var_38], si
 * 00000001C007235E: lea     r8d, [rdx+0Ch]
 * 00000001C0072362: call    cs:__imp_WppAutoLogTrace
 * 00000001C0072369: nop     dword ptr [rax+rax+00h]
 * 00000001C007236E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0072373: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0072378: add     rsp, 50h
 * 00000001C007237C: pop     rdi
 * 00000001C007237D: retn
 */
