/*
 * XREFs of WPP_RECORDER_SF_dqd @ 0x1C0177530
 * Callers:
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0174FF8 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0175070 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0182D48 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqd @ 0x1C0177530
 * Reason: Hex-Rays returned no pseudocode for 0x1C0177530
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0177530: mov     rax, rsp
 * 00000001C0177533: mov     [rax+8], rbx
 * 00000001C0177537: mov     [rax+10h], rbp
 * 00000001C017753B: mov     [rax+18h], rsi
 * 00000001C017753F: mov     [rax+20h], rdi
 * 00000001C0177543: push    r14
 * 00000001C0177545: sub     rsp, 60h
 * 00000001C0177549: mov     rbp, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0177550: movzx   edi, r9w
 * 00000001C0177554: mov     esi, r8d
 * 00000001C0177557: mov     bl, dl
 * 00000001C0177559: mov     r11d, r8d
 * 00000001C017755C: mov     r14d, 4
 * 00000001C0177562: shr     r11, 10h
 * 00000001C0177566: lea     r10d, [rsi-1]
 * 00000001C017756A: mov     ecx, r10d
 * 00000001C017756D: and     r10d, 1Fh
 * 00000001C0177571: shr     rcx, 5
 * 00000001C0177575: lea     rax, [r11+r11*4]
 * 00000001C0177579: and     ecx, 7FFh
 * 00000001C017757F: lea     r9, [rcx+rax*4]
 * 00000001C0177583: mov     ecx, r10d
 * 00000001C0177586: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C017758D: mov     eax, [r10+r9*4+2Ch]
 * 00000001C0177592: bt      eax, ecx
 * 00000001C0177595: jnb     short loc_1C0177607
 * 00000001C0177597: lea     rcx, [r11+r11*4]
 * 00000001C017759B: add     rcx, rcx
 * 00000001C017759E: cmp     [r10+rcx*8+29h], dl
 * 00000001C01775A3: jb      short loc_1C0177607
 * 00000001C01775A5: and     [rsp+68h+var_18], 0
 * 00000001C01775AB: lea     rdx, [rsp+68h+arg_38]
 * 00000001C01775B3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01775BA: mov     r8, [rsp+68h+arg_20]
 * 00000001C01775C2: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01775C7: mov     [rsp+68h+var_20], r14
 * 00000001C01775CC: mov     [rsp+68h+var_28], rdx
 * 00000001C01775D1: lea     rdx, [rsp+68h+arg_30]
 * 00000001C01775D9: mov     [rsp+68h+var_30], 8
 * 00000001C01775E2: mov     [rsp+68h+var_38], rdx
 * 00000001C01775E7: lea     rdx, [rsp+68h+arg_28]
 * 00000001C01775EF: mov     [rsp+68h+var_40], r14
 * 00000001C01775F4: mov     [rsp+68h+var_48], rdx
 * 00000001C01775F9: lea     edx, [r14+27h]
 * 00000001C01775FD: movzx   r9d, di
 * 00000001C0177601: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0177607: and     [rsp+68h+var_10], 0
 * 00000001C017760D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0177615: mov     r9, [rsp+68h+arg_20]
 * 00000001C017761D: mov     r8d, esi
 * 00000001C0177620: mov     [rsp+68h+var_18], r14
 * 00000001C0177625: mov     rcx, rbp
 * 00000001C0177628: mov     [rsp+68h+var_20], rax
 * 00000001C017762D: lea     rax, [rsp+68h+arg_30]
 * 00000001C0177635: mov     [rsp+68h+var_28], 8
 * 00000001C017763E: mov     [rsp+68h+var_30], rax
 * 00000001C0177643: lea     rax, [rsp+68h+arg_28]
 * 00000001C017764B: mov     [rsp+68h+var_38], r14
 * 00000001C0177650: mov     [rsp+68h+var_40], rax
 * 00000001C0177655: movzx   edx, bl
 * 00000001C0177658: mov     word ptr [rsp+68h+var_48], di
 * 00000001C017765D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0177664: nop     dword ptr [rax+rax+00h]
 * 00000001C0177669: lea     r11, [rsp+68h+var_8]
 * 00000001C017766E: mov     rbx, [r11+10h]
 * 00000001C0177672: mov     rbp, [r11+18h]
 * 00000001C0177676: mov     rsi, [r11+20h]
 * 00000001C017767A: mov     rdi, [r11+28h]
 * 00000001C017767E: mov     rsp, r11
 * 00000001C0177681: pop     r14
 * 00000001C0177683: retn
 */
