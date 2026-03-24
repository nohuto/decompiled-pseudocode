/*
 * XREFs of KeFlushRsb @ 0x140180828
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1400B8F44 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140353600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x140180828
 * Reason: Hex-Rays returned no pseudocode for 0x140180828
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140180828: push    rbx
 * 000000014018082A: sub     rsp, 30h
 * 000000014018082E: mov     rbx, cr8
 * 0000000140180832: mov     eax, 0Ch
 * 0000000140180837: mov     cr8, rax
 * 000000014018083B: mov     eax, cs:KiIrqlFlags
 * 0000000140180841: test    eax, eax
 * 0000000140180843: jnz     short loc_14018089C
 * 0000000140180845: and     [rsp+38h+var_10], 0
 * 000000014018084B: lea     r8, KiFlushRsbTarget
 * 0000000140180852: and     [rsp+38h+var_18], 0
 * 0000000140180858: xor     edx, edx
 * 000000014018085A: xor     r9d, r9d
 * 000000014018085D: lea     ecx, [rdx+1]
 * 0000000140180860: call    KiIpiSendPacket
 * 0000000140180865: mov     rcx, gs:20h
 * 000000014018086E: mov     eax, [rcx+2D80h]
 * 0000000140180874: test    eax, eax
 * 0000000140180876: jz      short loc_14018087C
 * 0000000140180878: pause
 * 000000014018087A: jmp     short loc_14018086E
 * 000000014018087C: call    KiFlushCurrentRsb
 * 0000000140180881: mov     eax, cs:KiIrqlFlags
 * 0000000140180887: test    eax, eax
 * 0000000140180889: jnz     loc_140270791
 * 000000014018088F: movzx   eax, bl
 * 0000000140180892: mov     cr8, rax
 * 0000000140180896: add     rsp, 30h
 * 000000014018089A: pop     rbx
 * 000000014018089B: retn
 * 000000014018089C: test    al, 1
 * 000000014018089E: jz      short loc_140180845
 * 00000001401808A0: jmp     loc_14027076C
 * 000000014027076C: cmp     bl, 2
 * 000000014027076F: jnb     loc_140180845
 * 0000000140270775: mov     rax, gs:20h
 * 000000014027077E: mov     rcx, [rax+61B8h]
 * 0000000140270785: lock or dword ptr [rcx], 10000h
 * 000000014027078C: jmp     loc_140180845
 * 0000000140270791: test    al, 1
 * 0000000140270793: jz      loc_14018088F
 * 0000000140270799: mov     rax, cr8
 * 000000014027079D: cmp     al, 2
 * 000000014027079F: jb      loc_14018088F
 * 00000001402707A5: cmp     bl, 2
 * 00000001402707A8: jnb     loc_14018088F
 * 00000001402707AE: mov     rcx, gs:20h
 * 00000001402707B7: mov     rax, [rcx+61B8h]
 * 00000001402707BE: lock and dword ptr [rax], 0FFFEFFFFh
 * 00000001402707C5: call    KiRemoveSystemWorkPriorityKick
 * 00000001402707CA: nop
 * 00000001402707CB: jmp     loc_14018088F
 */
