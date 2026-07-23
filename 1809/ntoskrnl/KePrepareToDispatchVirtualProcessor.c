/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x140295780
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiFlushCurrentRsb @ 0x1401D1480 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x140295780
 * Reason: Hex-Rays returned no pseudocode for 0x140295780
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140295780: mov     rax, rsp
 * 0000000140295783: mov     [rax+8], rbx
 * 0000000140295787: mov     [rax+10h], rsi
 * 000000014029578B: mov     [rax+18h], rdi
 * 000000014029578F: mov     [rax+20h], r14
 * 0000000140295793: push    r15
 * 0000000140295795: sub     rsp, 40h
 * 0000000140295799: movups  xmm1, cs:KiSpeculationFeatures
 * 00000001402957A0: mov     byte ptr [rdx], 0
 * 00000001402957A3: mov     r14, r8
 * 00000001402957A6: and     dword ptr [r8], 0
 * 00000001402957AA: mov     r15, rdx
 * 00000001402957AD: movups  [rsp+48h+var_28], xmm1
 * 00000001402957B2: mov     al, cl
 * 00000001402957B4: cli
 * 00000001402957B5: movq    rsi, xmm1
 * 00000001402957BA: mov     rcx, 1000000000h
 * 00000001402957C4: test    rcx, rsi
 * 00000001402957C7: jnz     short loc_1402957D0
 * 00000001402957C9: mov     al, 1
 * 00000001402957CB: jmp     loc_140295930
 * 00000001402957D0: mov     rbx, gs:20h
 * 00000001402957D9: movzx   ecx, word ptr [rbx+6E0h]
 * 00000001402957E0: test    cl, 8
 * 00000001402957E3: jnz     loc_1402958F9
 * 00000001402957E9: test    byte ptr [rsp+48h+var_28], 1
 * 00000001402957EE: jnz     loc_1402958F9
 * 00000001402957F4: test    al, al
 * 00000001402957F6: jz      loc_1402958F9
 * 00000001402957FC: mov     al, [rbx+6D6h]
 * 0000000140295802: test    al, 1
 * 0000000140295804: jz      short loc_14029580F
 * 0000000140295806: test    cl, 10h
 * 0000000140295809: jnz     loc_1402958F9
 * 000000014029580F: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140295816: test    al, 2
 * 0000000140295818: jz      short loc_140295823
 * 000000014029581A: xor     ecx, ecx
 * 000000014029581C: call    KiUpdateStibpPairing
 * 0000000140295821: jmp     short loc_14029587B
 * 0000000140295823: movzx   eax, word ptr [rbx+6E0h]
 * 000000014029582A: test    al, 4
 * 000000014029582C: jz      short loc_14029584D
 * 000000014029582E: mov     eax, 1
 * 0000000140295833: xor     edx, edx
 * 0000000140295835: lea     ecx, [rax+48h]
 * 0000000140295838: wrmsr
 * 000000014029583A: mov     edi, 0FFFBh
 * 000000014029583F: and     [rbx+6E0h], di
 * 0000000140295846: movzx   eax, word ptr [rbx+6E0h]
 * 000000014029584D: test    al, 20h
 * 000000014029584F: jz      short loc_140295862
 * 0000000140295851: call    KiFlushCurrentRsb
 * 0000000140295856: mov     eax, 0FFDFh
 * 000000014029585B: and     [rbx+6E0h], ax
 * 0000000140295862: mov     rax, [rbx+8]
 * 0000000140295866: mov     rax, [rax+220h]
 * 000000014029586D: mov     rax, [rax+830h]
 * 0000000140295874: mov     [rbx+6D8h], rax
 * 000000014029587B: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140295882: movzx   ecx, word ptr [rbx+6D0h]
 * 0000000140295889: movzx   r8d, word ptr [rbx+6E6h]
 * 0000000140295891: mov     [rbx+6D4h], ax
 * 0000000140295898: mov     rax, 20000000000h
 * 00000001402958A2: mov     [rbx+6D2h], cx
 * 00000001402958A9: and     rsi, rax
 * 00000001402958AC: jz      short loc_1402958BB
 * 00000001402958AE: mov     al, [rbx+6D6h]
 * 00000001402958B4: test    al, 1
 * 00000001402958B6: cmovnz  r8w, cx
 * 00000001402958BB: cmp     [rbx+6E4h], r8w
 * 00000001402958C3: jz      loc_1402957C9
 * 00000001402958C9: test    rsi, rsi
 * 00000001402958CC: jz      short loc_1402958E1
 * 00000001402958CE: movzx   edx, r8w
 * 00000001402958D2: mov     ecx, 48h ; 'H'
 * 00000001402958D7: mov     eax, edx
 * 00000001402958D9: shr     rdx, 20h
 * 00000001402958DD: wrmsr
 * 00000001402958DF: jmp     short loc_1402958EC
 * 00000001402958E1: movzx   eax, r8w
 * 00000001402958E5: mov     [r14], eax
 * 00000001402958E8: mov     byte ptr [r15], 1
 * 00000001402958EC: mov     [rbx+6E4h], r8w
 * 00000001402958F4: jmp     loc_1402957C9
 * 00000001402958F9: mov     edi, 0FFFBh
 * 00000001402958FE: test    cl, 4
 * 0000000140295901: jz      short loc_14029591D
 * 0000000140295903: mov     eax, 1
 * 0000000140295908: xor     edx, edx
 * 000000014029590A: lea     ecx, [rax+48h]
 * 000000014029590D: wrmsr
 * 000000014029590F: and     [rbx+6E0h], di
 * 0000000140295916: movzx   ecx, word ptr [rbx+6E0h]
 * 000000014029591D: test    cl, 20h
 * 0000000140295920: jz      short loc_14029592E
 * 0000000140295922: call    KiFlushCurrentRsb
 * 0000000140295927: and     [rbx+6E0h], di
 * 000000014029592E: xor     al, al
 * 0000000140295930: mov     rbx, [rsp+48h+arg_0]
 * 0000000140295935: mov     rsi, [rsp+48h+arg_8]
 * 000000014029593A: mov     rdi, [rsp+48h+arg_10]
 * 000000014029593F: mov     r14, [rsp+48h+arg_18]
 * 0000000140295944: add     rsp, 40h
 * 0000000140295948: pop     r15
 * 000000014029594A: retn
 */
