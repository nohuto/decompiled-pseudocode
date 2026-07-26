/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C00AAD24
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0146D04 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C00AAD24
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AAD24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AAD24: mov     [rsp+arg_0], rbx
 * 00000001C00AAD29: push    rsi
 * 00000001C00AAD2A: sub     rsp, 40h
 * 00000001C00AAD2E: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00AAD35: mov     rbx, rcx
 * 00000001C00AAD38: mov     esi, 0Eh
 * 00000001C00AAD3D: mov     eax, [rdx+2Ch]
 * 00000001C00AAD40: test    al, 1
 * 00000001C00AAD42: jz      short loc_1C00AAD68
 * 00000001C00AAD44: cmp     byte ptr [rdx+29h], 3
 * 00000001C00AAD48: jb      short loc_1C00AAD68
 * 00000001C00AAD4A: and     [rsp+48h+var_28], 0
 * 00000001C00AAD50: lea     r9d, [rsi-6]
 * 00000001C00AAD54: lea     r8, [rsp+48h+arg_28]
 * 00000001C00AAD59: movzx   edx, si; unsigned __int16
 * 00000001C00AAD5C: lea     rcx, WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids; struct _GUID *
 * 00000001C00AAD63: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00AAD68: and     [rsp+48h+var_10], 0
 * 00000001C00AAD6E: lea     rax, [rsp+48h+arg_28]
 * 00000001C00AAD73: mov     edx, 3
 * 00000001C00AAD78: mov     [rsp+48h+var_18], 8
 * 00000001C00AAD81: mov     [rsp+48h+var_20], rax
 * 00000001C00AAD86: lea     r9, WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids
 * 00000001C00AAD8D: mov     rcx, rbx
 * 00000001C00AAD90: mov     word ptr [rsp+48h+var_28], si
 * 00000001C00AAD95: lea     r8d, [rdx-2]
 * 00000001C00AAD99: call    cs:__imp_WppAutoLogTrace
 * 00000001C00AADA0: nop     dword ptr [rax+rax+00h]
 * 00000001C00AADA5: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00AADAA: add     rsp, 40h
 * 00000001C00AADAE: pop     rsi
 * 00000001C00AADAF: retn
 */
