/*
 * XREFs of sub_18007E820 @ 0x18007E820
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwSetInformationObject @ 0x18009D250 (ZwSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for sub_18007E820 @ 0x18007E820
 * Reason: Hex-Rays returned no pseudocode for 0x18007E820
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018007E820: test    rcx, rcx
 * 000000018007E823: jnz     short loc_18007E826
 * 000000018007E825: retn
 * 000000018007E826: mov     [rsp+arg_18], rdi
 * 000000018007E82B: mov     [rsp+arg_0], rcx
 * 000000018007E830: push    r14
 * 000000018007E832: sub     rsp, 20h
 * 000000018007E836: xor     r14d, r14d
 * 000000018007E839: lea     r8, [rsp+28h+arg_0]
 * 000000018007E83E: lea     rdi, [r14-2]
 * 000000018007E842: mov     rcx, rdi
 * 000000018007E845: lea     r9d, [r14+8]
 * 000000018007E849: lea     edx, [r14+5]
 * 000000018007E84D: call    ZwSetInformationThread
 * 000000018007E852: lea     r9d, [r14+4]
 * 000000018007E856: mov     [rsp+28h+arg_10], r14d
 * 000000018007E85B: lea     r8, [rsp+28h+arg_10]
 * 000000018007E860: mov     rcx, rdi
 * 000000018007E863: lea     edx, [rdi+14h]
 * 000000018007E866: call    ZwSetInformationThread
 * 000000018007E86B: mov     rcx, [rsp+28h+arg_0]
 * 000000018007E870: lea     r9d, [r14+2]
 * 000000018007E874: lea     r8, [rsp+28h+arg_8]
 * 000000018007E879: mov     [rsp+28h+arg_8], r14w
 * 000000018007E87F: lea     edx, [rdi+6]
 * 000000018007E882: call    ZwSetInformationObject
 * 000000018007E887: mov     rcx, [rsp+28h+arg_0]
 * 000000018007E88C: call    ZwClose
 * 000000018007E891: lea     r9d, [r14+8]
 * 000000018007E895: mov     [rsp+28h+arg_0], r14
 * 000000018007E89A: lea     r8, [rsp+28h+arg_0]
 * 000000018007E89F: mov     rcx, rdi
 * 000000018007E8A2: lea     edx, [rdi+7]
 * 000000018007E8A5: call    ZwSetInformationThread
 * 000000018007E8AA: mov     rdi, [rsp+28h+arg_18]
 * 000000018007E8AF: add     rsp, 20h
 * 000000018007E8B3: pop     r14
 * 000000018007E8B5: retn
 */
