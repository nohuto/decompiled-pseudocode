/*
 * XREFs of McGenEventWrite @ 0x18007DF20
 * Callers:
 *     McTemplateU0 @ 0x18007DF78 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18007DFB8 (McTemplateU0d.c)
 *     McTemplateU0qp @ 0x18007E53C (McTemplateU0qp.c)
 *     McTemplateU0pp @ 0x18008B11C (McTemplateU0pp.c)
 *     McTemplateU0z @ 0x18008B194 (McTemplateU0z.c)
 *     McTemplateU0p @ 0x18008E088 (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x18008E180 (McTemplateU0pq.c)
 *     McTemplateU0pd @ 0x1800931E8 (McTemplateU0pd.c)
 *     McTemplateU0pddddd @ 0x180093264 (McTemplateU0pddddd.c)
 *     McTemplateU0ppd @ 0x180093328 (McTemplateU0ppd.c)
 *     McTemplateU0dddd @ 0x180094748 (McTemplateU0dddd.c)
 *     McTemplateU0ddddddddddffffqqq @ 0x1800A18D8 (McTemplateU0ddddddddddffffqqq.c)
 *     McTemplateU0ddqqqqqqp @ 0x1800A1A88 (McTemplateU0ddqqqqqqp.c)
 *     McTemplateU0qdq @ 0x1800A2790 (McTemplateU0qdq.c)
 *     McTemplateU0qffff @ 0x1800A2810 (McTemplateU0qffff.c)
 *     McTemplateU0pddddddd @ 0x1800A44D4 (McTemplateU0pddddddd.c)
 *     McTemplateU0pddddq @ 0x1800A45B8 (McTemplateU0pddddq.c)
 *     McTemplateU0qq @ 0x1800A6CD4 (McTemplateU0qq.c)
 *     McTemplateU0pqq @ 0x1800A6DD0 (McTemplateU0pqq.c)
 *     McTemplateU0qd @ 0x1800ADE98 (McTemplateU0qd.c)
 *     McTemplateU0tttt @ 0x1800ADF14 (McTemplateU0tttt.c)
 *     McTemplateU0pdd @ 0x1800AE59C (McTemplateU0pdd.c)
 *     McTemplateU0qqqp @ 0x1800B24D4 (McTemplateU0qqqp.c)
 *     McTemplateU0j @ 0x1800B3034 (McTemplateU0j.c)
 *     McTemplateU0jdd @ 0x1800B3090 (McTemplateU0jdd.c)
 *     McTemplateU0ji @ 0x1800B3110 (McTemplateU0ji.c)
 *     McTemplateU0jqi @ 0x1800B3184 (McTemplateU0jqi.c)
 *     McTemplateU0jq @ 0x1800B3384 (McTemplateU0jq.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventWrite @ 0x18007DF20
 * Reason: Hex-Rays returned no pseudocode for 0x18007DF20
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018007DF20: sub     rsp, 38h
 * 000000018007DF24: mov     r10, [rcx+8]
 * 000000018007DF28: xor     eax, eax
 * 000000018007DF2A: mov     r8, [rsp+38h+arg_20]
 * 000000018007DF2F: mov     r11d, r9d
 * 000000018007DF32: test    r10, r10
 * 000000018007DF35: jnz     short loc_18007DF3F
 * 000000018007DF37: mov     [r8], rax
 * 000000018007DF3A: mov     r9d, eax
 * 000000018007DF3D: jmp     short loc_18007DF4B
 * 000000018007DF3F: mov     [r8], r10
 * 000000018007DF42: mov     eax, 2
 * 000000018007DF47: movzx   r9d, word ptr [r10]
 * 000000018007DF4B: mov     [r8+8], r9d
 * 000000018007DF4F: xor     r9d, r9d
 * 000000018007DF52: mov     [r8+0Ch], eax
 * 000000018007DF56: mov     rcx, [rcx]
 * 000000018007DF59: mov     [rsp+38h+var_10], r8
 * 000000018007DF5E: xor     r8d, r8d
 * 000000018007DF61: mov     [rsp+38h+var_18], r11d
 * 000000018007DF66: call    cs:__imp_EtwEventWriteTransfer
 * 000000018007DF6C: add     rsp, 38h
 * 000000018007DF70: retn
 */
