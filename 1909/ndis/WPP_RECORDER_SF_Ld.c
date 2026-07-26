/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C007DE50
 * Callers:
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007BCB4 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C007DE50
 * Reason: Hex-Rays returned no pseudocode for 0x1C007DE50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C007DE50: mov     r11, rsp
 * 00000001C007DE53: mov     [r11+8], rbx
 * 00000001C007DE57: mov     [r11+10h], rsi
 * 00000001C007DE5B: push    rdi
 * 00000001C007DE5C: sub     rsp, 50h
 * 00000001C007DE60: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C007DE67: mov     esi, 53h ; 'S'
 * 00000001C007DE6C: mov     rbx, rcx
 * 00000001C007DE6F: mov     eax, [rdx+2Ch]
 * 00000001C007DE72: lea     edi, [rsi-4Fh]
 * 00000001C007DE75: test    al, 2
 * 00000001C007DE77: jz      short loc_1C007DEA6
 * 00000001C007DE79: cmp     byte ptr [rdx+29h], 1
 * 00000001C007DE7D: jb      short loc_1C007DEA6
 * 00000001C007DE7F: and     qword ptr [r11-28h], 0
 * 00000001C007DE84: lea     rax, [r11+38h]
 * 00000001C007DE88: mov     [r11-30h], rdi
 * 00000001C007DE8C: lea     r8, [r11+30h]
 * 00000001C007DE90: mov     r9d, edi
 * 00000001C007DE93: movzx   edx, si; unsigned __int16
 * 00000001C007DE96: lea     rcx, WPP_34b7afbc912539598d6d69098c3d2070_Traceguids; struct _GUID *
 * 00000001C007DE9D: mov     [r11-38h], rax
 * 00000001C007DEA1: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C007DEA6: and     [rsp+58h+var_10], 0
 * 00000001C007DEAC: lea     rax, [rsp+58h+arg_30]
 * 00000001C007DEB4: mov     [rsp+58h+var_18], rdi
 * 00000001C007DEB9: lea     r9, WPP_34b7afbc912539598d6d69098c3d2070_Traceguids
 * 00000001C007DEC0: mov     [rsp+58h+var_20], rax
 * 00000001C007DEC5: mov     edx, 1
 * 00000001C007DECA: lea     rax, [rsp+58h+arg_28]
 * 00000001C007DED2: mov     [rsp+58h+var_28], rdi
 * 00000001C007DED7: mov     [rsp+58h+var_30], rax
 * 00000001C007DEDC: mov     rcx, rbx
 * 00000001C007DEDF: mov     [rsp+58h+var_38], si
 * 00000001C007DEE4: lea     r8d, [rdx+1]
 * 00000001C007DEE8: call    cs:__imp_WppAutoLogTrace
 * 00000001C007DEEF: nop     dword ptr [rax+rax+00h]
 * 00000001C007DEF4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C007DEF9: mov     rsi, [rsp+58h+arg_8]
 * 00000001C007DEFE: add     rsp, 50h
 * 00000001C007DF02: pop     rdi
 * 00000001C007DF03: retn
 */
