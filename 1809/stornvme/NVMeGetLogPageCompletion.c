/*
 * XREFs of NVMeGetLogPageCompletion @ 0x1C0001560
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalCommand @ 0x1C00014F8 (GetLocalCommand.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000176C (NVMeIssueAsyncEventCommand.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C0016994 (NVMeReenumerateNameSpaceStart.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeGetLogPageCompletion @ 0x1C0001560
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001560
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001560: mov     rax, rsp
 * 00000001C0001563: mov     [rax+8], rbx
 * 00000001C0001567: mov     [rax+10h], rbp
 * 00000001C000156B: mov     [rax+18h], rsi
 * 00000001C000156F: mov     [rax+20h], rdi
 * 00000001C0001573: push    r14
 * 00000001C0001575: sub     rsp, 70h
 * 00000001C0001579: mov     r11, rdx
 * 00000001C000157C: mov     rdi, rcx
 * 00000001C000157F: call    GetLocalCommand
 * 00000001C0001584: mov     rcx, r11
 * 00000001C0001587: mov     rsi, rax
 * 00000001C000158A: call    GetSrbExtension
 * 00000001C000158F: xor     r14d, r14d
 * 00000001C0001592: mov     rbx, rax
 * 00000001C0001595: test    rsi, rsi
 * 00000001C0001598: jnz     short loc_1C00015A6
 * 00000001C000159A: or      byte ptr [rax+109Dh], 8
 * 00000001C00015A1: jmp     loc_1C0001749
 * 00000001C00015A6: mov     cl, [r11+3]
 * 00000001C00015AA: cmp     cl, 0Eh
 * 00000001C00015AD: jz      loc_1C000170A
 * 00000001C00015B3: mov     eax, [rdi+14h]
 * 00000001C00015B6: test    al, 0Eh
 * 00000001C00015B8: jnz     loc_1C000170A
 * 00000001C00015BE: mov     rdx, [rsi+60h]
 * 00000001C00015C2: mov     bpl, [rdx+1028h]
 * 00000001C00015C9: cmp     [rbx+1068h], r14
 * 00000001C00015D0: jz      loc_1C00016FA
 * 00000001C00015D6: cmp     cl, 1
 * 00000001C00015D9: jnz     short loc_1C0001615
 * 00000001C00015DB: cmp     bpl, 4
 * 00000001C00015DF: jnz     loc_1C00016C4
 * 00000001C00015E5: mov     rdx, [rdx+1068h]
 * 00000001C00015EC: cmp     [rdx], r14d
 * 00000001C00015EF: jz      short loc_1C00015FE
 * 00000001C00015F1: mov     rcx, rdi
 * 00000001C00015F4: call    NVMeReenumerateNameSpaceStart
 * 00000001C00015F9: jmp     loc_1C00016C4
 * 00000001C00015FE: lock btr dword ptr [rdi+0E8Ch], 2
 * 00000001C0001607: lock btr dword ptr [rdi+0E8Ch], 1
 * 00000001C0001610: jmp     loc_1C00016C4
 * 00000001C0001615: cmp     bpl, 4
 * 00000001C0001619: jnz     short loc_1C000165A
 * 00000001C000161B: movzx   ecx, word ptr [rbx+109Ah]
 * 00000001C0001622: mov     r8d, 0E00h
 * 00000001C0001628: movzx   eax, cx
 * 00000001C000162B: and     ax, r8w
 * 00000001C000162F: mov     r8d, 200h
 * 00000001C0001635: cmp     ax, r8w
 * 00000001C0001639: jnz     short loc_1C000165A
 * 00000001C000163B: lea     eax, [r8-2]
 * 00000001C000163F: and     cx, ax
 * 00000001C0001642: cmp     cx, 12h
 * 00000001C0001646: jnz     short loc_1C000165A
 * 00000001C0001648: mov     rdx, [rdx+1068h]
 * 00000001C000164F: mov     rcx, rdi
 * 00000001C0001652: or      dword ptr [rdx], 0FFFFFFFFh
 * 00000001C0001655: call    NVMeReenumerateNameSpaceStart
 * 00000001C000165A: mov     [rsp+78h+var_10], r14
 * 00000001C000165F: mov     r9d, 1
 * 00000001C0001665: mov     [rsp+78h+var_18], r14
 * 00000001C000166A: xor     r8d, r8d
 * 00000001C000166D: movzx   eax, bpl
 * 00000001C0001671: mov     rdx, rdi
 * 00000001C0001674: mov     [rsp+78h+var_20], rax
 * 00000001C0001679: lea     rax, aLogPage; "Log Page"
 * 00000001C0001680: mov     [rsp+78h+var_28], rax
 * 00000001C0001685: lea     ecx, [r9+54h]
 * 00000001C0001689: mov     [rsp+78h+var_30], r14
 * 00000001C000168E: lea     rax, aNvmeGetlogpage; "NVMe GetLogPage Failure Fallback"
 * 00000001C0001695: mov     [rsp+78h+var_38], r14d
 * 00000001C000169A: mov     [rsp+78h+var_40], 3
 * 00000001C00016A2: mov     [rsp+78h+var_48], 40h ; '@'
 * 00000001C00016AB: mov     [rsp+78h+var_50], rax
 * 00000001C00016B0: mov     [rsp+78h+var_58], 9
 * 00000001C00016B8: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00016BF: nop     dword ptr [rax+rax+00h]
 * 00000001C00016C4: mov     r8, [rsi+60h]
 * 00000001C00016C8: mov     rcx, rdi
 * 00000001C00016CB: mov     edx, [r8+1090h]
 * 00000001C00016D2: mov     r9, [r8+1070h]
 * 00000001C00016D9: mov     r8, [r8+1068h]
 * 00000001C00016E0: call    NVMeFreeDmaBuffer
 * 00000001C00016E5: or      byte ptr [rbx+109Dh], 8
 * 00000001C00016EC: mov     [rbx+1068h], r14
 * 00000001C00016F3: mov     [rbx+1090h], r14d
 * 00000001C00016FA: mov     rdx, rsi
 * 00000001C00016FD: mov     [rsi], r14d
 * 00000001C0001700: mov     rcx, rdi
 * 00000001C0001703: call    NVMeIssueAsyncEventCommand
 * 00000001C0001708: jmp     short loc_1C0001749
 * 00000001C000170A: cmp     [rbx+1068h], r14
 * 00000001C0001711: jz      short loc_1C0001742
 * 00000001C0001713: mov     r8, [rsi+60h]
 * 00000001C0001717: mov     rcx, rdi
 * 00000001C000171A: mov     edx, [r8+1090h]
 * 00000001C0001721: mov     r9, [r8+1070h]
 * 00000001C0001728: mov     r8, [r8+1068h]
 * 00000001C000172F: call    NVMeFreeDmaBuffer
 * 00000001C0001734: mov     [rbx+1068h], r14
 * 00000001C000173B: mov     [rbx+1090h], r14d
 * 00000001C0001742: or      byte ptr [rbx+109Dh], 8
 * 00000001C0001749: lea     r11, [rsp+78h+var_8]
 * 00000001C000174E: mov     rbx, [r11+10h]
 * 00000001C0001752: mov     rbp, [r11+18h]
 * 00000001C0001756: mov     rsi, [r11+20h]
 * 00000001C000175A: mov     rdi, [r11+28h]
 * 00000001C000175E: mov     rsp, r11
 * 00000001C0001761: pop     r14
 * 00000001C0001763: retn
 */
