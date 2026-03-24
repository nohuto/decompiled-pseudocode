/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x140295590
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiFlushCurrentRsb @ 0x1401D1380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x140295590
 * Reason: Hex-Rays returned no pseudocode for 0x140295590
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140295590: mov     rax, rsp
 * 0000000140295593: mov     [rax+8], rbx
 * 0000000140295597: mov     [rax+10h], rsi
 * 000000014029559B: mov     [rax+18h], rdi
 * 000000014029559F: mov     [rax+20h], r14
 * 00000001402955A3: push    r15
 * 00000001402955A5: sub     rsp, 40h
 * 00000001402955A9: movups  xmm1, cs:KiSpeculationFeatures
 * 00000001402955B0: mov     byte ptr [rdx], 0
 * 00000001402955B3: mov     r14, r8
 * 00000001402955B6: and     dword ptr [r8], 0
 * 00000001402955BA: mov     r15, rdx
 * 00000001402955BD: movups  [rsp+48h+var_28], xmm1
 * 00000001402955C2: mov     al, cl
 * 00000001402955C4: cli
 * 00000001402955C5: movq    rsi, xmm1
 * 00000001402955CA: mov     rcx, 1000000000h
 * 00000001402955D4: test    rcx, rsi
 * 00000001402955D7: jnz     short loc_1402955E0
 * 00000001402955D9: mov     al, 1
 * 00000001402955DB: jmp     loc_140295740
 * 00000001402955E0: mov     rbx, gs:20h
 * 00000001402955E9: movzx   ecx, word ptr [rbx+6E0h]
 * 00000001402955F0: test    cl, 8
 * 00000001402955F3: jnz     loc_140295709
 * 00000001402955F9: test    byte ptr [rsp+48h+var_28], 1
 * 00000001402955FE: jnz     loc_140295709
 * 0000000140295604: test    al, al
 * 0000000140295606: jz      loc_140295709
 * 000000014029560C: mov     al, [rbx+6D6h]
 * 0000000140295612: test    al, 1
 * 0000000140295614: jz      short loc_14029561F
 * 0000000140295616: test    cl, 10h
 * 0000000140295619: jnz     loc_140295709
 * 000000014029561F: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140295626: test    al, 2
 * 0000000140295628: jz      short loc_140295633
 * 000000014029562A: xor     ecx, ecx
 * 000000014029562C: call    KiUpdateStibpPairing
 * 0000000140295631: jmp     short loc_14029568B
 * 0000000140295633: movzx   eax, word ptr [rbx+6E0h]
 * 000000014029563A: test    al, 4
 * 000000014029563C: jz      short loc_14029565D
 * 000000014029563E: mov     eax, 1
 * 0000000140295643: xor     edx, edx
 * 0000000140295645: lea     ecx, [rax+48h]
 * 0000000140295648: wrmsr
 * 000000014029564A: mov     edi, 0FFFBh
 * 000000014029564F: and     [rbx+6E0h], di
 * 0000000140295656: movzx   eax, word ptr [rbx+6E0h]
 * 000000014029565D: test    al, 20h
 * 000000014029565F: jz      short loc_140295672
 * 0000000140295661: call    KiFlushCurrentRsb
 * 0000000140295666: mov     eax, 0FFDFh
 * 000000014029566B: and     [rbx+6E0h], ax
 * 0000000140295672: mov     rax, [rbx+8]
 * 0000000140295676: mov     rax, [rax+220h]
 * 000000014029567D: mov     rax, [rax+830h]
 * 0000000140295684: mov     [rbx+6D8h], rax
 * 000000014029568B: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140295692: movzx   ecx, word ptr [rbx+6D0h]
 * 0000000140295699: movzx   r8d, word ptr [rbx+6E6h]
 * 00000001402956A1: mov     [rbx+6D4h], ax
 * 00000001402956A8: mov     rax, 20000000000h
 * 00000001402956B2: mov     [rbx+6D2h], cx
 * 00000001402956B9: and     rsi, rax
 * 00000001402956BC: jz      short loc_1402956CB
 * 00000001402956BE: mov     al, [rbx+6D6h]
 * 00000001402956C4: test    al, 1
 * 00000001402956C6: cmovnz  r8w, cx
 * 00000001402956CB: cmp     [rbx+6E4h], r8w
 * 00000001402956D3: jz      loc_1402955D9
 * 00000001402956D9: test    rsi, rsi
 * 00000001402956DC: jz      short loc_1402956F1
 * 00000001402956DE: movzx   edx, r8w
 * 00000001402956E2: mov     ecx, 48h ; 'H'
 * 00000001402956E7: mov     eax, edx
 * 00000001402956E9: shr     rdx, 20h
 * 00000001402956ED: wrmsr
 * 00000001402956EF: jmp     short loc_1402956FC
 * 00000001402956F1: movzx   eax, r8w
 * 00000001402956F5: mov     [r14], eax
 * 00000001402956F8: mov     byte ptr [r15], 1
 * 00000001402956FC: mov     [rbx+6E4h], r8w
 * 0000000140295704: jmp     loc_1402955D9
 * 0000000140295709: mov     edi, 0FFFBh
 * 000000014029570E: test    cl, 4
 * 0000000140295711: jz      short loc_14029572D
 * 0000000140295713: mov     eax, 1
 * 0000000140295718: xor     edx, edx
 * 000000014029571A: lea     ecx, [rax+48h]
 * 000000014029571D: wrmsr
 * 000000014029571F: and     [rbx+6E0h], di
 * 0000000140295726: movzx   ecx, word ptr [rbx+6E0h]
 * 000000014029572D: test    cl, 20h
 * 0000000140295730: jz      short loc_14029573E
 * 0000000140295732: call    KiFlushCurrentRsb
 * 0000000140295737: and     [rbx+6E0h], di
 * 000000014029573E: xor     al, al
 * 0000000140295740: mov     rbx, [rsp+48h+arg_0]
 * 0000000140295745: mov     rsi, [rsp+48h+arg_8]
 * 000000014029574A: mov     rdi, [rsp+48h+arg_10]
 * 000000014029574F: mov     r14, [rsp+48h+arg_18]
 * 0000000140295754: add     rsp, 40h
 * 0000000140295758: pop     r15
 * 000000014029575A: retn
 */
