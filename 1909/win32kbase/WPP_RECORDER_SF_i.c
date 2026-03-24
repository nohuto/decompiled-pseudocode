/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C0138400
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C0136BD0 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0148EAC (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C01490F8 (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0153BFC (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C0138400
 * Reason: Hex-Rays returned no pseudocode for 0x1C0138400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0138400: mov     r11, rsp
 * 00000001C0138403: mov     [r11+8], rbx
 * 00000001C0138407: mov     [r11+10h], rsi
 * 00000001C013840B: push    rdi
 * 00000001C013840C: sub     rsp, 40h
 * 00000001C0138410: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0138417: movzx   edi, r9w
 * 00000001C013841B: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0138422: mov     bl, dl
 * 00000001C0138424: mov     eax, [rcx+2Ch]
 * 00000001C0138427: test    al, 1
 * 00000001C0138429: jz      short loc_1C0138464
 * 00000001C013842B: cmp     [rcx+29h], dl
 * 00000001C013842E: jb      short loc_1C0138464
 * 00000001C0138430: and     qword ptr [r11-18h], 0
 * 00000001C0138435: lea     rdx, [r11+30h]
 * 00000001C0138439: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0138440: mov     r8, [rsp+48h+arg_20]
 * 00000001C0138445: mov     rcx, [rcx+18h]
 * 00000001C0138449: mov     qword ptr [r11-20h], 8
 * 00000001C0138451: mov     [r11-28h], rdx
 * 00000001C0138455: mov     edx, 2Bh ; '+'
 * 00000001C013845A: movzx   r9d, r9w
 * 00000001C013845E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0138464: and     [rsp+48h+var_10], 0
 * 00000001C013846A: lea     rax, [rsp+48h+arg_28]
 * 00000001C013846F: mov     r9, [rsp+48h+arg_20]
 * 00000001C0138474: mov     r8d, 1
 * 00000001C013847A: mov     [rsp+48h+var_18], 8
 * 00000001C0138483: mov     rcx, rsi
 * 00000001C0138486: mov     [rsp+48h+var_20], rax
 * 00000001C013848B: movzx   edx, bl
 * 00000001C013848E: mov     [rsp+48h+var_28], di
 * 00000001C0138493: call    cs:__imp_WppAutoLogTrace
 * 00000001C013849A: nop     dword ptr [rax+rax+00h]
 * 00000001C013849F: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01384A4: mov     rsi, [rsp+48h+arg_8]
 * 00000001C01384A9: add     rsp, 40h
 * 00000001C01384AD: pop     rdi
 * 00000001C01384AE: retn
 */
