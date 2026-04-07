/*
 * XREFs of McGenEventWrite @ 0x180077960
 * Callers:
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x1800779F8 (McTemplateU0d.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 *     McTemplateU0pp @ 0x18008481C (McTemplateU0pp.c)
 *     McTemplateU0z @ 0x180084894 (McTemplateU0z.c)
 *     McTemplateU0p @ 0x180088248 (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x180088340 (McTemplateU0pq.c)
 *     McTemplateU0pd @ 0x18008D5F0 (McTemplateU0pd.c)
 *     McTemplateU0pddddd @ 0x18008D66C (McTemplateU0pddddd.c)
 *     McTemplateU0ppd @ 0x18008D730 (McTemplateU0ppd.c)
 *     McTemplateU0dddd @ 0x18008FE20 (McTemplateU0dddd.c)
 *     McTemplateU0ddddddddddffffqqq @ 0x18009D494 (McTemplateU0ddddddddddffffqqq.c)
 *     McTemplateU0ddqqqqqqp @ 0x18009D644 (McTemplateU0ddqqqqqqp.c)
 *     McTemplateU0qdq @ 0x18009E350 (McTemplateU0qdq.c)
 *     McTemplateU0qffff @ 0x18009E3D0 (McTemplateU0qffff.c)
 *     McTemplateU0pddddddd @ 0x1800A0084 (McTemplateU0pddddddd.c)
 *     McTemplateU0pddddq @ 0x1800A0168 (McTemplateU0pddddq.c)
 *     McTemplateU0qq @ 0x1800A2884 (McTemplateU0qq.c)
 *     McTemplateU0pqq @ 0x1800A2980 (McTemplateU0pqq.c)
 *     McTemplateU0qd @ 0x1800A9BE8 (McTemplateU0qd.c)
 *     McTemplateU0tttt @ 0x1800A9C64 (McTemplateU0tttt.c)
 *     McTemplateU0pdd @ 0x1800AA57C (McTemplateU0pdd.c)
 *     McTemplateU0qqqp @ 0x1800AE5DC (McTemplateU0qqqp.c)
 *     McTemplateU0j @ 0x1800AF0C4 (McTemplateU0j.c)
 *     McTemplateU0jdd @ 0x1800AF120 (McTemplateU0jdd.c)
 *     McTemplateU0ji @ 0x1800AF1A0 (McTemplateU0ji.c)
 *     McTemplateU0jqi @ 0x1800AF214 (McTemplateU0jqi.c)
 *     McTemplateU0jq @ 0x1800AF444 (McTemplateU0jq.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventWrite @ 0x180077960
 * Reason: Hex-Rays returned no pseudocode for 0x180077960
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180077960: sub     rsp, 38h
 * 0000000180077964: mov     r10, [rcx+8]
 * 0000000180077968: xor     eax, eax
 * 000000018007796A: mov     r8, [rsp+38h+arg_20]
 * 000000018007796F: mov     r11d, r9d
 * 0000000180077972: test    r10, r10
 * 0000000180077975: jnz     short loc_18007797F
 * 0000000180077977: mov     [r8], rax
 * 000000018007797A: mov     r9d, eax
 * 000000018007797D: jmp     short loc_18007798B
 * 000000018007797F: mov     [r8], r10
 * 0000000180077982: mov     eax, 2
 * 0000000180077987: movzx   r9d, word ptr [r10]
 * 000000018007798B: mov     [r8+8], r9d
 * 000000018007798F: xor     r9d, r9d
 * 0000000180077992: mov     [r8+0Ch], eax
 * 0000000180077996: mov     rcx, [rcx]
 * 0000000180077999: mov     [rsp+38h+var_10], r8
 * 000000018007799E: xor     r8d, r8d
 * 00000001800779A1: mov     [rsp+38h+var_18], r11d
 * 00000001800779A6: call    cs:__imp_EtwEventWriteTransfer
 * 00000001800779AC: add     rsp, 38h
 * 00000001800779B0: retn
 */
