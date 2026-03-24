/*
 * XREFs of KeFlushRsb @ 0x1402954C0
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1400ED104 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x1401D1380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x1402954C0
 * Reason: Hex-Rays returned no pseudocode for 0x1402954C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402954C0: push    rbx
 * 00000001402954C2: sub     rsp, 30h
 * 00000001402954C6: mov     rbx, cr8
 * 00000001402954CA: mov     eax, 0Ch
 * 00000001402954CF: mov     cr8, rax
 * 00000001402954D3: mov     eax, cs:KiIrqlFlags
 * 00000001402954D9: test    eax, eax
 * 00000001402954DB: jz      short loc_1402954FD
 * 00000001402954DD: test    al, 1
 * 00000001402954DF: jz      short loc_1402954FD
 * 00000001402954E1: cmp     bl, 2
 * 00000001402954E4: jnb     short loc_1402954FD
 * 00000001402954E6: mov     rax, gs:20h
 * 00000001402954EF: mov     rcx, [rax+61B8h]
 * 00000001402954F6: lock or dword ptr [rcx], 10000h
 * 00000001402954FD: and     [rsp+38h+var_10], 0
 * 0000000140295503: lea     r8, KiFlushRsbTarget
 * 000000014029550A: and     [rsp+38h+var_18], 0
 * 0000000140295510: xor     edx, edx
 * 0000000140295512: xor     r9d, r9d
 * 0000000140295515: lea     ecx, [rdx+1]
 * 0000000140295518: call    KiIpiSendPacket
 * 000000014029551D: mov     rcx, gs:20h
 * 0000000140295526: mov     eax, [rcx+2D80h]
 * 000000014029552C: test    eax, eax
 * 000000014029552E: jz      short loc_140295534
 * 0000000140295530: pause
 * 0000000140295532: jmp     short loc_140295526
 * 0000000140295534: call    KiFlushCurrentRsb
 * 0000000140295539: mov     eax, cs:KiIrqlFlags
 * 000000014029553F: test    eax, eax
 * 0000000140295541: jz      short loc_140295570
 * 0000000140295543: test    al, 1
 * 0000000140295545: jz      short loc_140295570
 * 0000000140295547: mov     rax, cr8
 * 000000014029554B: cmp     al, 2
 * 000000014029554D: jb      short loc_140295570
 * 000000014029554F: cmp     bl, 2
 * 0000000140295552: jnb     short loc_140295570
 * 0000000140295554: mov     rcx, gs:20h
 * 000000014029555D: mov     rax, [rcx+61B8h]
 * 0000000140295564: lock and dword ptr [rax], 0FFFEFFFFh
 * 000000014029556B: call    KiRemoveSystemWorkPriorityKick
 * 0000000140295570: movzx   eax, bl
 * 0000000140295573: mov     cr8, rax
 * 0000000140295577: add     rsp, 30h
 * 000000014029557B: pop     rbx
 * 000000014029557C: retn
 */
