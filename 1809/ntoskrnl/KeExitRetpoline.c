/*
 * XREFs of KeExitRetpoline @ 0x14013916C
 * Callers:
 *     KiDispatchCallout @ 0x140142010 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x1401738E4 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDF0 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x14019F320 (CcBcbProfiler.c)
 *     sub_1401A04F0 @ 0x1401A04F0 (sub_1401A04F0.c)
 *     KiSwInterruptDispatch @ 0x1401A0550 (KiSwInterruptDispatch.c)
 *     sub_1401A1450 @ 0x1401A1450 (sub_1401A1450.c)
 *     sub_1401AD630 @ 0x1401AD630 (sub_1401AD630.c)
 *     RtlpComputeEpilogueOffset @ 0x1401AEF6C (RtlpComputeEpilogueOffset.c)
 *     sub_140322570 @ 0x140322570 (sub_140322570.c)
 *     FsRtlTruncateSmallMcb @ 0x1403229C0 (FsRtlTruncateSmallMcb.c)
 *     sub_140580010 @ 0x140580010 (sub_140580010.c)
 *     KeUserModeCallback @ 0x140646460 (KeUserModeCallback.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140331560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14013916C
 * Reason: Hex-Rays returned no pseudocode for 0x14013916C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014013916C: mov     [rsp+arg_0], rbx
 * 0000000140139171: pushfq
 * 0000000140139173: sub     rsp, 20h
 * 0000000140139177: mov     ebx, [rsp+28h+var_8]
 * 000000014013917B: cli
 * 000000014013917C: mov     rax, gs:20h
 * 0000000140139185: shr     ebx, 9
 * 0000000140139188: and     bl, 1
 * 000000014013918B: or      byte ptr [rax+6D6h], 1
 * 0000000140139192: mov     al, [rax+6D6h]
 * 0000000140139198: test    al, 2
 * 000000014013919A: jnz     short loc_1401391A1
 * 000000014013919C: call    __guard_retpoline_exit
 * 00000001401391A1: lfence
 * 00000001401391A4: test    bl, bl
 * 00000001401391A6: jz      short loc_1401391A9
 * 00000001401391A8: sti
 * 00000001401391A9: mov     rbx, [rsp+28h+arg_0]
 * 00000001401391AE: add     rsp, 20h
 * 00000001401391B2: pop     rcx
 * 00000001401391B3: retn
 */
