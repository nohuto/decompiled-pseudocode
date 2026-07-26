/*
 * XREFs of WPP_RECORDER_SF_q_guid_ @ 0x1C009F308
 * Callers:
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_ @ 0x1C009F308
 * Reason: Hex-Rays returned no pseudocode for 0x1C009F308
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C009F308: mov     r11, rsp
 * 00000001C009F30B: mov     [r11+8], rbx
 * 00000001C009F30F: mov     [r11+10h], rdi
 * 00000001C009F313: push    r14
 * 00000001C009F315: sub     rsp, 50h
 * 00000001C009F319: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C009F320: mov     rdi, rcx
 * 00000001C009F323: mov     rbx, [rsp+58h+arg_30]
 * 00000001C009F32B: mov     r14d, 89h
 * 00000001C009F331: mov     eax, [rdx+2Ch]
 * 00000001C009F334: test    al, 1
 * 00000001C009F336: jz      short loc_1C009F369
 * 00000001C009F338: cmp     byte ptr [rdx+29h], 4
 * 00000001C009F33C: jb      short loc_1C009F369
 * 00000001C009F33E: and     qword ptr [r11-28h], 0
 * 00000001C009F343: lea     r8, [r11+30h]
 * 00000001C009F347: mov     qword ptr [r11-30h], 10h
 * 00000001C009F34F: lea     rcx, WPP_3bdda7144e74370204adec44604355d7_Traceguids; struct _GUID *
 * 00000001C009F356: mov     r9d, 8
 * 00000001C009F35C: movzx   edx, r14w; unsigned __int16
 * 00000001C009F360: mov     [r11-38h], rbx
 * 00000001C009F364: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C009F369: and     [rsp+58h+var_10], 0
 * 00000001C009F36F: lea     rax, [rsp+58h+arg_28]
 * 00000001C009F377: mov     [rsp+58h+var_18], 10h
 * 00000001C009F380: lea     r9, WPP_3bdda7144e74370204adec44604355d7_Traceguids
 * 00000001C009F387: mov     [rsp+58h+var_20], rbx
 * 00000001C009F38C: mov     edx, 4
 * 00000001C009F391: mov     [rsp+58h+var_28], 8
 * 00000001C009F39A: mov     rcx, rdi
 * 00000001C009F39D: mov     [rsp+58h+var_30], rax
 * 00000001C009F3A2: mov     [rsp+58h+var_38], r14w
 * 00000001C009F3A8: lea     r8d, [rdx-3]
 * 00000001C009F3AC: call    cs:__imp_WppAutoLogTrace
 * 00000001C009F3B3: nop     dword ptr [rax+rax+00h]
 * 00000001C009F3B8: mov     rbx, [rsp+58h+arg_0]
 * 00000001C009F3BD: mov     rdi, [rsp+58h+arg_8]
 * 00000001C009F3C2: add     rsp, 50h
 * 00000001C009F3C6: pop     r14
 * 00000001C009F3C8: retn
 */
