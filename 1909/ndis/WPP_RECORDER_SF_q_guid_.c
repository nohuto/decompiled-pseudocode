/*
 * XREFs of WPP_RECORDER_SF_q_guid_ @ 0x1C009F4D8
 * Callers:
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_ @ 0x1C009F4D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C009F4D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C009F4D8: mov     r11, rsp
 * 00000001C009F4DB: mov     [r11+8], rbx
 * 00000001C009F4DF: mov     [r11+10h], rdi
 * 00000001C009F4E3: push    r14
 * 00000001C009F4E5: sub     rsp, 50h
 * 00000001C009F4E9: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C009F4F0: mov     rdi, rcx
 * 00000001C009F4F3: mov     rbx, [rsp+58h+arg_30]
 * 00000001C009F4FB: mov     r14d, 89h
 * 00000001C009F501: mov     eax, [rdx+2Ch]
 * 00000001C009F504: test    al, 1
 * 00000001C009F506: jz      short loc_1C009F539
 * 00000001C009F508: cmp     byte ptr [rdx+29h], 4
 * 00000001C009F50C: jb      short loc_1C009F539
 * 00000001C009F50E: and     qword ptr [r11-28h], 0
 * 00000001C009F513: lea     r8, [r11+30h]
 * 00000001C009F517: mov     qword ptr [r11-30h], 10h
 * 00000001C009F51F: lea     rcx, WPP_3bdda7144e74370204adec44604355d7_Traceguids; struct _GUID *
 * 00000001C009F526: mov     r9d, 8
 * 00000001C009F52C: movzx   edx, r14w; unsigned __int16
 * 00000001C009F530: mov     [r11-38h], rbx
 * 00000001C009F534: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C009F539: and     [rsp+58h+var_10], 0
 * 00000001C009F53F: lea     rax, [rsp+58h+arg_28]
 * 00000001C009F547: mov     [rsp+58h+var_18], 10h
 * 00000001C009F550: lea     r9, WPP_3bdda7144e74370204adec44604355d7_Traceguids
 * 00000001C009F557: mov     [rsp+58h+var_20], rbx
 * 00000001C009F55C: mov     edx, 4
 * 00000001C009F561: mov     [rsp+58h+var_28], 8
 * 00000001C009F56A: mov     rcx, rdi
 * 00000001C009F56D: mov     [rsp+58h+var_30], rax
 * 00000001C009F572: mov     [rsp+58h+var_38], r14w
 * 00000001C009F578: lea     r8d, [rdx-3]
 * 00000001C009F57C: call    cs:__imp_WppAutoLogTrace
 * 00000001C009F583: nop     dword ptr [rax+rax+00h]
 * 00000001C009F588: mov     rbx, [rsp+58h+arg_0]
 * 00000001C009F58D: mov     rdi, [rsp+58h+arg_8]
 * 00000001C009F592: add     rsp, 50h
 * 00000001C009F596: pop     r14
 * 00000001C009F598: retn
 */
