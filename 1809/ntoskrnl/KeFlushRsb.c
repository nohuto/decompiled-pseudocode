/*
 * XREFs of KeFlushRsb @ 0x1402956B0
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x1401D1480 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x1402956B0
 * Reason: Hex-Rays returned no pseudocode for 0x1402956B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402956B0: push    rbx
 * 00000001402956B2: sub     rsp, 30h
 * 00000001402956B6: mov     rbx, cr8
 * 00000001402956BA: mov     eax, 0Ch
 * 00000001402956BF: mov     cr8, rax
 * 00000001402956C3: mov     eax, cs:KiIrqlFlags
 * 00000001402956C9: test    eax, eax
 * 00000001402956CB: jz      short loc_1402956ED
 * 00000001402956CD: test    al, 1
 * 00000001402956CF: jz      short loc_1402956ED
 * 00000001402956D1: cmp     bl, 2
 * 00000001402956D4: jnb     short loc_1402956ED
 * 00000001402956D6: mov     rax, gs:20h
 * 00000001402956DF: mov     rcx, [rax+61B8h]
 * 00000001402956E6: lock or dword ptr [rcx], 10000h
 * 00000001402956ED: and     [rsp+38h+var_10], 0
 * 00000001402956F3: lea     r8, KiFlushRsbTarget
 * 00000001402956FA: and     [rsp+38h+var_18], 0
 * 0000000140295700: xor     edx, edx
 * 0000000140295702: xor     r9d, r9d
 * 0000000140295705: lea     ecx, [rdx+1]
 * 0000000140295708: call    KiIpiSendPacket
 * 000000014029570D: mov     rcx, gs:20h
 * 0000000140295716: mov     eax, [rcx+2D80h]
 * 000000014029571C: test    eax, eax
 * 000000014029571E: jz      short loc_140295724
 * 0000000140295720: pause
 * 0000000140295722: jmp     short loc_140295716
 * 0000000140295724: call    KiFlushCurrentRsb
 * 0000000140295729: mov     eax, cs:KiIrqlFlags
 * 000000014029572F: test    eax, eax
 * 0000000140295731: jz      short loc_140295760
 * 0000000140295733: test    al, 1
 * 0000000140295735: jz      short loc_140295760
 * 0000000140295737: mov     rax, cr8
 * 000000014029573B: cmp     al, 2
 * 000000014029573D: jb      short loc_140295760
 * 000000014029573F: cmp     bl, 2
 * 0000000140295742: jnb     short loc_140295760
 * 0000000140295744: mov     rcx, gs:20h
 * 000000014029574D: mov     rax, [rcx+61B8h]
 * 0000000140295754: lock and dword ptr [rax], 0FFFEFFFFh
 * 000000014029575B: call    KiRemoveSystemWorkPriorityKick
 * 0000000140295760: movzx   eax, bl
 * 0000000140295763: mov     cr8, rax
 * 0000000140295767: add     rsp, 30h
 * 000000014029576B: pop     rbx
 * 000000014029576C: retn
 */
