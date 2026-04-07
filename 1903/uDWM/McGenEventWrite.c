/*
 * XREFs of McGenEventWrite @ 0x18007E280
 * Callers:
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18007E318 (McTemplateU0d.c)
 *     McTemplateU0qp @ 0x18007E89C (McTemplateU0qp.c)
 *     McTemplateU0pp @ 0x18008B47C (McTemplateU0pp.c)
 *     McTemplateU0z @ 0x18008B4F4 (McTemplateU0z.c)
 *     McTemplateU0p @ 0x18008E3E8 (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x18008E4E0 (McTemplateU0pq.c)
 *     McTemplateU0pd @ 0x180093548 (McTemplateU0pd.c)
 *     McTemplateU0pddddd @ 0x1800935C4 (McTemplateU0pddddd.c)
 *     McTemplateU0ppd @ 0x180093688 (McTemplateU0ppd.c)
 *     McTemplateU0dddd @ 0x180094AA8 (McTemplateU0dddd.c)
 *     McTemplateU0ddddddddddffffqqq @ 0x1800A1C38 (McTemplateU0ddddddddddffffqqq.c)
 *     McTemplateU0ddqqqqqqp @ 0x1800A1DE8 (McTemplateU0ddqqqqqqp.c)
 *     McTemplateU0qdq @ 0x1800A2AF0 (McTemplateU0qdq.c)
 *     McTemplateU0qffff @ 0x1800A2B70 (McTemplateU0qffff.c)
 *     McTemplateU0pddddddd @ 0x1800A4834 (McTemplateU0pddddddd.c)
 *     McTemplateU0pddddq @ 0x1800A4918 (McTemplateU0pddddq.c)
 *     McTemplateU0qq @ 0x1800A7034 (McTemplateU0qq.c)
 *     McTemplateU0pqq @ 0x1800A7130 (McTemplateU0pqq.c)
 *     McTemplateU0qd @ 0x1800AE1F8 (McTemplateU0qd.c)
 *     McTemplateU0tttt @ 0x1800AE274 (McTemplateU0tttt.c)
 *     McTemplateU0pdd @ 0x1800AE8FC (McTemplateU0pdd.c)
 *     McTemplateU0qqqp @ 0x1800B2834 (McTemplateU0qqqp.c)
 *     McTemplateU0j @ 0x1800B3394 (McTemplateU0j.c)
 *     McTemplateU0jdd @ 0x1800B33F0 (McTemplateU0jdd.c)
 *     McTemplateU0ji @ 0x1800B3470 (McTemplateU0ji.c)
 *     McTemplateU0jqi @ 0x1800B34E4 (McTemplateU0jqi.c)
 *     McTemplateU0jq @ 0x1800B36E4 (McTemplateU0jq.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventWrite @ 0x18007E280
 * Reason: Hex-Rays returned no pseudocode for 0x18007E280
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018007E280: sub     rsp, 38h
 * 000000018007E284: mov     r10, [rcx+8]
 * 000000018007E288: xor     eax, eax
 * 000000018007E28A: mov     r8, [rsp+38h+arg_20]
 * 000000018007E28F: mov     r11d, r9d
 * 000000018007E292: test    r10, r10
 * 000000018007E295: jnz     short loc_18007E29F
 * 000000018007E297: mov     [r8], rax
 * 000000018007E29A: mov     r9d, eax
 * 000000018007E29D: jmp     short loc_18007E2AB
 * 000000018007E29F: mov     [r8], r10
 * 000000018007E2A2: mov     eax, 2
 * 000000018007E2A7: movzx   r9d, word ptr [r10]
 * 000000018007E2AB: mov     [r8+8], r9d
 * 000000018007E2AF: xor     r9d, r9d
 * 000000018007E2B2: mov     [r8+0Ch], eax
 * 000000018007E2B6: mov     rcx, [rcx]
 * 000000018007E2B9: mov     [rsp+38h+var_10], r8
 * 000000018007E2BE: xor     r8d, r8d
 * 000000018007E2C1: mov     [rsp+38h+var_18], r11d
 * 000000018007E2C6: call    cs:__imp_EtwEventWriteTransfer
 * 000000018007E2CC: add     rsp, 38h
 * 000000018007E2D0: retn
 */
