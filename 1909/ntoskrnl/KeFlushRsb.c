/*
 * XREFs of KeFlushRsb @ 0x140180F18
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x140098DB4 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140353600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x140180F18
 * Reason: Hex-Rays returned no pseudocode for 0x140180F18
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140180F18: push    rbx
 * 0000000140180F1A: sub     rsp, 30h
 * 0000000140180F1E: mov     rbx, cr8
 * 0000000140180F22: mov     eax, 0Ch
 * 0000000140180F27: mov     cr8, rax
 * 0000000140180F2B: mov     eax, cs:KiIrqlFlags
 * 0000000140180F31: test    eax, eax
 * 0000000140180F33: jnz     short loc_140180F8C
 * 0000000140180F35: and     [rsp+38h+var_10], 0
 * 0000000140180F3B: lea     r8, KiFlushRsbTarget
 * 0000000140180F42: and     [rsp+38h+var_18], 0
 * 0000000140180F48: xor     edx, edx
 * 0000000140180F4A: xor     r9d, r9d
 * 0000000140180F4D: lea     ecx, [rdx+1]
 * 0000000140180F50: call    KiIpiSendPacket
 * 0000000140180F55: mov     rcx, gs:20h
 * 0000000140180F5E: mov     eax, [rcx+2D80h]
 * 0000000140180F64: test    eax, eax
 * 0000000140180F66: jz      short loc_140180F6C
 * 0000000140180F68: pause
 * 0000000140180F6A: jmp     short loc_140180F5E
 * 0000000140180F6C: call    KiFlushCurrentRsb
 * 0000000140180F71: mov     eax, cs:KiIrqlFlags
 * 0000000140180F77: test    eax, eax
 * 0000000140180F79: jnz     loc_14026FD47
 * 0000000140180F7F: movzx   eax, bl
 * 0000000140180F82: mov     cr8, rax
 * 0000000140180F86: add     rsp, 30h
 * 0000000140180F8A: pop     rbx
 * 0000000140180F8B: retn
 * 0000000140180F8C: test    al, 1
 * 0000000140180F8E: jz      short loc_140180F35
 * 0000000140180F90: jmp     loc_14026FD22
 * 000000014026FD22: cmp     bl, 2
 * 000000014026FD25: jnb     loc_140180F35
 * 000000014026FD2B: mov     rax, gs:20h
 * 000000014026FD34: mov     rcx, [rax+61B8h]
 * 000000014026FD3B: lock or dword ptr [rcx], 10000h
 * 000000014026FD42: jmp     loc_140180F35
 * 000000014026FD47: test    al, 1
 * 000000014026FD49: jz      loc_140180F7F
 * 000000014026FD4F: mov     rax, cr8
 * 000000014026FD53: cmp     al, 2
 * 000000014026FD55: jb      loc_140180F7F
 * 000000014026FD5B: cmp     bl, 2
 * 000000014026FD5E: jnb     loc_140180F7F
 * 000000014026FD64: mov     rcx, gs:20h
 * 000000014026FD6D: mov     rax, [rcx+61B8h]
 * 000000014026FD74: lock and dword ptr [rax], 0FFFEFFFFh
 * 000000014026FD7B: call    KiRemoveSystemWorkPriorityKick
 * 000000014026FD80: nop
 * 000000014026FD81: jmp     loc_140180F7F
 */
