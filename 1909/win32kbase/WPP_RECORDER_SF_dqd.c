/*
 * XREFs of WPP_RECORDER_SF_dqd @ 0x1C0175340
 * Callers:
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0172E08 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0172E80 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0180B58 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqd @ 0x1C0175340
 * Reason: Hex-Rays returned no pseudocode for 0x1C0175340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0175340: mov     rax, rsp
 * 00000001C0175343: mov     [rax+8], rbx
 * 00000001C0175347: mov     [rax+10h], rbp
 * 00000001C017534B: mov     [rax+18h], rsi
 * 00000001C017534F: mov     [rax+20h], rdi
 * 00000001C0175353: push    r14
 * 00000001C0175355: sub     rsp, 60h
 * 00000001C0175359: mov     rbp, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0175360: movzx   edi, r9w
 * 00000001C0175364: mov     esi, r8d
 * 00000001C0175367: mov     bl, dl
 * 00000001C0175369: mov     r11d, r8d
 * 00000001C017536C: mov     r14d, 4
 * 00000001C0175372: shr     r11, 10h
 * 00000001C0175376: lea     r10d, [rsi-1]
 * 00000001C017537A: mov     ecx, r10d
 * 00000001C017537D: and     r10d, 1Fh
 * 00000001C0175381: shr     rcx, 5
 * 00000001C0175385: lea     rax, [r11+r11*4]
 * 00000001C0175389: and     ecx, 7FFh
 * 00000001C017538F: lea     r9, [rcx+rax*4]
 * 00000001C0175393: mov     ecx, r10d
 * 00000001C0175396: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C017539D: mov     eax, [r10+r9*4+2Ch]
 * 00000001C01753A2: bt      eax, ecx
 * 00000001C01753A5: jnb     short loc_1C0175417
 * 00000001C01753A7: lea     rcx, [r11+r11*4]
 * 00000001C01753AB: add     rcx, rcx
 * 00000001C01753AE: cmp     [r10+rcx*8+29h], dl
 * 00000001C01753B3: jb      short loc_1C0175417
 * 00000001C01753B5: and     [rsp+68h+var_18], 0
 * 00000001C01753BB: lea     rdx, [rsp+68h+arg_38]
 * 00000001C01753C3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01753CA: mov     r8, [rsp+68h+arg_20]
 * 00000001C01753D2: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01753D7: mov     [rsp+68h+var_20], r14
 * 00000001C01753DC: mov     [rsp+68h+var_28], rdx
 * 00000001C01753E1: lea     rdx, [rsp+68h+arg_30]
 * 00000001C01753E9: mov     [rsp+68h+var_30], 8
 * 00000001C01753F2: mov     [rsp+68h+var_38], rdx
 * 00000001C01753F7: lea     rdx, [rsp+68h+arg_28]
 * 00000001C01753FF: mov     [rsp+68h+var_40], r14
 * 00000001C0175404: mov     [rsp+68h+var_48], rdx
 * 00000001C0175409: lea     edx, [r14+27h]
 * 00000001C017540D: movzx   r9d, di
 * 00000001C0175411: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0175417: and     [rsp+68h+var_10], 0
 * 00000001C017541D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0175425: mov     r9, [rsp+68h+arg_20]
 * 00000001C017542D: mov     r8d, esi
 * 00000001C0175430: mov     [rsp+68h+var_18], r14
 * 00000001C0175435: mov     rcx, rbp
 * 00000001C0175438: mov     [rsp+68h+var_20], rax
 * 00000001C017543D: lea     rax, [rsp+68h+arg_30]
 * 00000001C0175445: mov     [rsp+68h+var_28], 8
 * 00000001C017544E: mov     [rsp+68h+var_30], rax
 * 00000001C0175453: lea     rax, [rsp+68h+arg_28]
 * 00000001C017545B: mov     [rsp+68h+var_38], r14
 * 00000001C0175460: mov     [rsp+68h+var_40], rax
 * 00000001C0175465: movzx   edx, bl
 * 00000001C0175468: mov     word ptr [rsp+68h+var_48], di
 * 00000001C017546D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0175474: nop     dword ptr [rax+rax+00h]
 * 00000001C0175479: lea     r11, [rsp+68h+var_8]
 * 00000001C017547E: mov     rbx, [r11+10h]
 * 00000001C0175482: mov     rbp, [r11+18h]
 * 00000001C0175486: mov     rsi, [r11+20h]
 * 00000001C017548A: mov     rdi, [r11+28h]
 * 00000001C017548E: mov     rsp, r11
 * 00000001C0175491: pop     r14
 * 00000001C0175493: retn
 */
