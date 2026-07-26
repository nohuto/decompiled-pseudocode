/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C00AAEF4
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0146D04 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C00AAEF4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AAEF4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AAEF4: mov     [rsp+arg_0], rbx
 * 00000001C00AAEF9: push    rsi
 * 00000001C00AAEFA: sub     rsp, 40h
 * 00000001C00AAEFE: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00AAF05: mov     rbx, rcx
 * 00000001C00AAF08: mov     esi, 0Eh
 * 00000001C00AAF0D: mov     eax, [rdx+2Ch]
 * 00000001C00AAF10: test    al, 1
 * 00000001C00AAF12: jz      short loc_1C00AAF38
 * 00000001C00AAF14: cmp     byte ptr [rdx+29h], 3
 * 00000001C00AAF18: jb      short loc_1C00AAF38
 * 00000001C00AAF1A: and     [rsp+48h+var_28], 0
 * 00000001C00AAF20: lea     r9d, [rsi-6]
 * 00000001C00AAF24: lea     r8, [rsp+48h+arg_28]
 * 00000001C00AAF29: movzx   edx, si; unsigned __int16
 * 00000001C00AAF2C: lea     rcx, WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids; struct _GUID *
 * 00000001C00AAF33: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00AAF38: and     [rsp+48h+var_10], 0
 * 00000001C00AAF3E: lea     rax, [rsp+48h+arg_28]
 * 00000001C00AAF43: mov     edx, 3
 * 00000001C00AAF48: mov     [rsp+48h+var_18], 8
 * 00000001C00AAF51: mov     [rsp+48h+var_20], rax
 * 00000001C00AAF56: lea     r9, WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids
 * 00000001C00AAF5D: mov     rcx, rbx
 * 00000001C00AAF60: mov     word ptr [rsp+48h+var_28], si
 * 00000001C00AAF65: lea     r8d, [rdx-2]
 * 00000001C00AAF69: call    cs:__imp_WppAutoLogTrace
 * 00000001C00AAF70: nop     dword ptr [rax+rax+00h]
 * 00000001C00AAF75: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00AAF7A: add     rsp, 40h
 * 00000001C00AAF7E: pop     rsi
 * 00000001C00AAF7F: retn
 */
