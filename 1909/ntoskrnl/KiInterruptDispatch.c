/*
 * XREFs of KiInterruptDispatch @ 0x1401C6140
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1401C5D90 (KiInterruptSubDispatch.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1401C6140
 * Reason: Hex-Rays returned no pseudocode for 0x1401C6140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C6140: mov     rdx, rsp
 * 00000001401C6143: mov     rcx, gs:6458h
 * 00000001401C614C: lea     rax, [rcx-6000h]
 * 00000001401C6153: cmp     rax, rsp
 * 00000001401C6156: ja      short loc_1401C615D
 * 00000001401C6158: cmp     rsp, rcx
 * 00000001401C615B: jb      short loc_1401C6169
 * 00000001401C615D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C6164: jnz     short loc_1401C6169
 * 00000001401C6166: mov     rsp, rcx
 * 00000001401C6169: sub     rsp, 20h
 * 00000001401C616D: mov     [rsp+20h+var_10], rdx
 * 00000001401C6172: call    KiInterruptSubDispatch
 * 00000001401C6177: mov     rsp, [rsp+20h+var_10]
 * 00000001401C617C: mov     rcx, rsi
 * 00000001401C617F: call    HalPerformEndOfInterrupt_0
 * 00000001401C6184: mov     rcx, gs:20h
 * 00000001401C618D: cmp     byte ptr [rcx+20h], 1
 * 00000001401C6191: ja      short loc_1401C620D
 * 00000001401C6193: rdtsc
 * 00000001401C6195: shl     rdx, 20h
 * 00000001401C6199: or      rax, rdx
 * 00000001401C619C: sub     rax, [rcx+5BC0h]
 * 00000001401C61A3: add     [rcx+5C38h], rax
 * 00000001401C61AA: add     [rcx+5BC0h], rax
 * 00000001401C61B1: mov     r8, rax
 * 00000001401C61B4: mov     rax, [rcx+8]
 * 00000001401C61B8: test    byte ptr [rax+2], 72h
 * 00000001401C61BC: jz      short loc_1401C61D1
 * 00000001401C61BE: xor     edx, edx
 * 00000001401C61C0: call    KiBeginThreadAccountingPeriod
 * 00000001401C61C5: mov     rcx, gs:20h
 * 00000001401C61CE: inc     byte ptr [rcx+20h]
 * 00000001401C61D1: mov     dl, [rcx+6]
 * 00000001401C61D4: and     byte ptr [rcx+6], 0
 * 00000001401C61D8: cmp     byte ptr [rcx+7], 0
 * 00000001401C61DC: jnz     short loc_1401C620D
 * 00000001401C61DE: test    dl, dl
 * 00000001401C61E0: jz      short loc_1401C620D
 * 00000001401C61E2: cmp     byte ptr [rbp-57h], 2
 * 00000001401C61E6: jnb     short loc_1401C61F3
 * 00000001401C61E8: and     byte ptr [rcx+20h], 0
 * 00000001401C61EC: call    KiDpcInterruptBypass
 * 00000001401C61F1: jmp     short loc_1401C6210
 * 00000001401C61F3: mov     ecx, 2
 * 00000001401C61F8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C61FF: nop     dword ptr [rax+rax+00h]
 * 00000001401C6204: mov     rcx, gs:20h
 * 00000001401C620D: dec     byte ptr [rcx+20h]
 * 00000001401C6210: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C6214: cmp     cs:KiIrqlFlags, 0
 * 00000001401C621B: jz      short loc_1401C6224
 * 00000001401C621D: call    KzSetIrqlUnsafe
 * 00000001401C6222: jmp     short loc_1401C6228
 * 00000001401C6224: mov     cr8, rcx
 * 00000001401C6228: mov     rsi, [rbp+0D0h]
 * 00000001401C622F: test    byte ptr [rbp+0F0h], 1
 * 00000001401C6236: jz      loc_1401C6375
 * 00000001401C623C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C6243: jz      short loc_1401C6248
 * 00000001401C6245: stac
 * 00000001401C6248: mov     rcx, gs:188h
 * 00000001401C6251: test    byte ptr [rcx+0C2h], 3
 * 00000001401C6258: jz      short loc_1401C6275
 * 00000001401C625A: mov     ecx, 1
 * 00000001401C625F: mov     cr8, rcx
 * 00000001401C6263: sti
 * 00000001401C6264: call    KiInitiateUserApc
 * 00000001401C6269: cli
 * 00000001401C626A: mov     ecx, 0
 * 00000001401C626F: mov     cr8, rcx
 * 00000001401C6273: jmp     short loc_1401C6248
 * 00000001401C6275: test    byte ptr gs:27Eh, 2
 * 00000001401C627E: jz      short loc_1401C6287
 * 00000001401C6280: xor     ecx, ecx
 * 00000001401C6282: call    KiUpdateStibpPairing
 * 00000001401C6287: mov     rcx, gs:188h
 * 00000001401C6290: test    dword ptr [rcx], 8000000h
 * 00000001401C6296: jz      short loc_1401C629D
 * 00000001401C6298: call    KiRestoreSetContextState
 * 00000001401C629D: mov     rcx, gs:188h
 * 00000001401C62A6: test    dword ptr [rcx], 40010000h
 * 00000001401C62AC: jz      short loc_1401C62C2
 * 00000001401C62AE: test    byte ptr [rcx+2], 1
 * 00000001401C62B2: jz      short loc_1401C62C2
 * 00000001401C62B4: call    KiCopyCounters
 * 00000001401C62B9: mov     rcx, gs:188h
 * 00000001401C62C2: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C62C6: cmp     word ptr [rbp+80h], 0
 * 00000001401C62CE: jz      short loc_1401C62D5
 * 00000001401C62D0: call    KiRestoreDebugRegisterState
 * 00000001401C62D5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C62D9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C62DD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C62E1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C62E5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C62E9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C62ED: mov     r11, [rbp-20h]
 * 00000001401C62F1: mov     r10, [rbp-28h]
 * 00000001401C62F5: mov     r9, [rbp-30h]
 * 00000001401C62F9: mov     r8, [rbp-38h]
 * 00000001401C62FD: mov     byte ptr gs:853h, 0
 * 00000001401C6306: movzx   eax, byte ptr gs:27Dh
 * 00000001401C630F: cmp     gs:27Ah, al
 * 00000001401C6317: jz      short loc_1401C632A
 * 00000001401C6319: mov     gs:27Ah, al
 * 00000001401C6321: mov     ecx, 48h ; 'H'
 * 00000001401C6326: xor     edx, edx
 * 00000001401C6328: wrmsr
 * 00000001401C632A: btr     word ptr gs:278h, 2
 * 00000001401C6335: jnb     short loc_1401C6345
 * 00000001401C6337: mov     eax, 1
 * 00000001401C633C: xor     edx, edx
 * 00000001401C633E: mov     ecx, 49h ; 'I'
 * 00000001401C6343: wrmsr
 * 00000001401C6345: mov     rdx, [rbp-40h]
 * 00000001401C6349: mov     rcx, [rbp-48h]
 * 00000001401C634D: mov     rax, [rbp-50h]
 * 00000001401C6351: mov     rsp, rbp
 * 00000001401C6354: mov     rbp, [rbp+0D8h]
 * 00000001401C635B: add     rsp, 0E8h
 * 00000001401C6362: test    cs:KiKvaShadow, 1
 * 00000001401C6369: jz      short loc_1401C6370
 * 00000001401C636B: jmp     KiKernelExit
 * 00000001401C6370: swapgs
 * 00000001401C6373: iretq
 * 00000001401C6375: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C6379: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C637D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C6381: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C6385: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C6389: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C638D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C6391: mov     r11, [rbp-20h]
 * 00000001401C6395: mov     r10, [rbp-28h]
 * 00000001401C6399: mov     r9, [rbp-30h]
 * 00000001401C639D: mov     r8, [rbp-38h]
 * 00000001401C63A1: mov     rdx, [rbp-40h]
 * 00000001401C63A5: mov     rcx, [rbp-48h]
 * 00000001401C63A9: mov     rax, [rbp-50h]
 * 00000001401C63AD: mov     rsp, rbp
 * 00000001401C63B0: mov     rbp, [rbp+0D8h]
 * 00000001401C63B7: add     rsp, 0E8h
 * 00000001401C63BE: iretq
 */
