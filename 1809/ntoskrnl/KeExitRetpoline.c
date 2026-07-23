/*
 * XREFs of KeExitRetpoline @ 0x14013926C
 * Callers:
 *     KiDispatchCallout @ 0x140142110 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x1401739E4 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x14018EF30 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x14019F460 (CcBcbProfiler.c)
 *     sub_1401A0630 @ 0x1401A0630 (sub_1401A0630.c)
 *     KiSwInterruptDispatch @ 0x1401A0690 (KiSwInterruptDispatch.c)
 *     sub_1401A1590 @ 0x1401A1590 (sub_1401A1590.c)
 *     sub_1401AD770 @ 0x1401AD770 (sub_1401AD770.c)
 *     RtlpComputeEpilogueOffset @ 0x1401AF0AC (RtlpComputeEpilogueOffset.c)
 *     sub_140322760 @ 0x140322760 (sub_140322760.c)
 *     FsRtlTruncateSmallMcb @ 0x140322BB0 (FsRtlTruncateSmallMcb.c)
 *     sub_140581010 @ 0x140581010 (sub_140581010.c)
 *     KeUserModeCallback @ 0x140647480 (KeUserModeCallback.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140332560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14013926C
 * Reason: Hex-Rays returned no pseudocode for 0x14013926C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014013926C: mov     [rsp+arg_0], rbx
 * 0000000140139271: pushfq
 * 0000000140139273: sub     rsp, 20h
 * 0000000140139277: mov     ebx, [rsp+28h+var_8]
 * 000000014013927B: cli
 * 000000014013927C: mov     rax, gs:20h
 * 0000000140139285: shr     ebx, 9
 * 0000000140139288: and     bl, 1
 * 000000014013928B: or      byte ptr [rax+6D6h], 1
 * 0000000140139292: mov     al, [rax+6D6h]
 * 0000000140139298: test    al, 2
 * 000000014013929A: jnz     short loc_1401392A1
 * 000000014013929C: call    __guard_retpoline_exit
 * 00000001401392A1: lfence
 * 00000001401392A4: test    bl, bl
 * 00000001401392A6: jz      short loc_1401392A9
 * 00000001401392A8: sti
 * 00000001401392A9: mov     rbx, [rsp+28h+arg_0]
 * 00000001401392AE: add     rsp, 20h
 * 00000001401392B2: pop     rcx
 * 00000001401392B3: retn
 */
