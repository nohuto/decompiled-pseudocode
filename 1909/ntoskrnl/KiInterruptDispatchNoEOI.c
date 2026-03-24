/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1401C68F0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5EE0 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1401C68F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C68F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C68F0: mov     rdx, rsp
 * 00000001401C68F3: mov     rcx, gs:6458h
 * 00000001401C68FC: lea     rax, [rcx-6000h]
 * 00000001401C6903: cmp     rax, rsp
 * 00000001401C6906: ja      short loc_1401C690D
 * 00000001401C6908: cmp     rsp, rcx
 * 00000001401C690B: jb      short loc_1401C6919
 * 00000001401C690D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C6914: jnz     short loc_1401C6919
 * 00000001401C6916: mov     rsp, rcx
 * 00000001401C6919: sub     rsp, 20h
 * 00000001401C691D: mov     [rsp+20h+var_10], rdx
 * 00000001401C6922: call    KiInterruptSubDispatchNoLock
 * 00000001401C6927: mov     rsp, [rsp+20h+var_10]
 * 00000001401C692C: mov     rcx, gs:20h
 * 00000001401C6935: cmp     byte ptr [rcx+20h], 1
 * 00000001401C6939: ja      short loc_1401C69B5
 * 00000001401C693B: rdtsc
 * 00000001401C693D: shl     rdx, 20h
 * 00000001401C6941: or      rax, rdx
 * 00000001401C6944: sub     rax, [rcx+5BC0h]
 * 00000001401C694B: add     [rcx+5C38h], rax
 * 00000001401C6952: add     [rcx+5BC0h], rax
 * 00000001401C6959: mov     r8, rax
 * 00000001401C695C: mov     rax, [rcx+8]
 * 00000001401C6960: test    byte ptr [rax+2], 72h
 * 00000001401C6964: jz      short loc_1401C6979
 * 00000001401C6966: xor     edx, edx
 * 00000001401C6968: call    KiBeginThreadAccountingPeriod
 * 00000001401C696D: mov     rcx, gs:20h
 * 00000001401C6976: inc     byte ptr [rcx+20h]
 * 00000001401C6979: mov     dl, [rcx+6]
 * 00000001401C697C: and     byte ptr [rcx+6], 0
 * 00000001401C6980: cmp     byte ptr [rcx+7], 0
 * 00000001401C6984: jnz     short loc_1401C69B5
 * 00000001401C6986: test    dl, dl
 * 00000001401C6988: jz      short loc_1401C69B5
 * 00000001401C698A: cmp     byte ptr [rbp-57h], 2
 * 00000001401C698E: jnb     short loc_1401C699B
 * 00000001401C6990: and     byte ptr [rcx+20h], 0
 * 00000001401C6994: call    KiDpcInterruptBypass
 * 00000001401C6999: jmp     short loc_1401C69B8
 * 00000001401C699B: mov     ecx, 2
 * 00000001401C69A0: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C69A7: nop     dword ptr [rax+rax+00h]
 * 00000001401C69AC: mov     rcx, gs:20h
 * 00000001401C69B5: dec     byte ptr [rcx+20h]
 * 00000001401C69B8: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C69BC: cmp     cs:KiIrqlFlags, 0
 * 00000001401C69C3: jz      short loc_1401C69CC
 * 00000001401C69C5: call    KzSetIrqlUnsafe
 * 00000001401C69CA: jmp     short loc_1401C69D0
 * 00000001401C69CC: mov     cr8, rcx
 * 00000001401C69D0: mov     rsi, [rbp+0D0h]
 * 00000001401C69D7: test    byte ptr [rbp+0F0h], 1
 * 00000001401C69DE: jz      loc_1401C6B1D
 * 00000001401C69E4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C69EB: jz      short loc_1401C69F0
 * 00000001401C69ED: stac
 * 00000001401C69F0: mov     rcx, gs:188h
 * 00000001401C69F9: test    byte ptr [rcx+0C2h], 3
 * 00000001401C6A00: jz      short loc_1401C6A1D
 * 00000001401C6A02: mov     ecx, 1
 * 00000001401C6A07: mov     cr8, rcx
 * 00000001401C6A0B: sti
 * 00000001401C6A0C: call    KiInitiateUserApc
 * 00000001401C6A11: cli
 * 00000001401C6A12: mov     ecx, 0
 * 00000001401C6A17: mov     cr8, rcx
 * 00000001401C6A1B: jmp     short loc_1401C69F0
 * 00000001401C6A1D: test    byte ptr gs:27Eh, 2
 * 00000001401C6A26: jz      short loc_1401C6A2F
 * 00000001401C6A28: xor     ecx, ecx
 * 00000001401C6A2A: call    KiUpdateStibpPairing
 * 00000001401C6A2F: mov     rcx, gs:188h
 * 00000001401C6A38: test    dword ptr [rcx], 8000000h
 * 00000001401C6A3E: jz      short loc_1401C6A45
 * 00000001401C6A40: call    KiRestoreSetContextState
 * 00000001401C6A45: mov     rcx, gs:188h
 * 00000001401C6A4E: test    dword ptr [rcx], 40010000h
 * 00000001401C6A54: jz      short loc_1401C6A6A
 * 00000001401C6A56: test    byte ptr [rcx+2], 1
 * 00000001401C6A5A: jz      short loc_1401C6A6A
 * 00000001401C6A5C: call    KiCopyCounters
 * 00000001401C6A61: mov     rcx, gs:188h
 * 00000001401C6A6A: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C6A6E: cmp     word ptr [rbp+80h], 0
 * 00000001401C6A76: jz      short loc_1401C6A7D
 * 00000001401C6A78: call    KiRestoreDebugRegisterState
 * 00000001401C6A7D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C6A81: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C6A85: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C6A89: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C6A8D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C6A91: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C6A95: mov     r11, [rbp-20h]
 * 00000001401C6A99: mov     r10, [rbp-28h]
 * 00000001401C6A9D: mov     r9, [rbp-30h]
 * 00000001401C6AA1: mov     r8, [rbp-38h]
 * 00000001401C6AA5: mov     byte ptr gs:853h, 0
 * 00000001401C6AAE: movzx   eax, byte ptr gs:27Dh
 * 00000001401C6AB7: cmp     gs:27Ah, al
 * 00000001401C6ABF: jz      short loc_1401C6AD2
 * 00000001401C6AC1: mov     gs:27Ah, al
 * 00000001401C6AC9: mov     ecx, 48h ; 'H'
 * 00000001401C6ACE: xor     edx, edx
 * 00000001401C6AD0: wrmsr
 * 00000001401C6AD2: btr     word ptr gs:278h, 2
 * 00000001401C6ADD: jnb     short loc_1401C6AED
 * 00000001401C6ADF: mov     eax, 1
 * 00000001401C6AE4: xor     edx, edx
 * 00000001401C6AE6: mov     ecx, 49h ; 'I'
 * 00000001401C6AEB: wrmsr
 * 00000001401C6AED: mov     rdx, [rbp-40h]
 * 00000001401C6AF1: mov     rcx, [rbp-48h]
 * 00000001401C6AF5: mov     rax, [rbp-50h]
 * 00000001401C6AF9: mov     rsp, rbp
 * 00000001401C6AFC: mov     rbp, [rbp+0D8h]
 * 00000001401C6B03: add     rsp, 0E8h
 * 00000001401C6B0A: test    cs:KiKvaShadow, 1
 * 00000001401C6B11: jz      short loc_1401C6B18
 * 00000001401C6B13: jmp     KiKernelExit
 * 00000001401C6B18: swapgs
 * 00000001401C6B1B: iretq
 * 00000001401C6B1D: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C6B21: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C6B25: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C6B29: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C6B2D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C6B31: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C6B35: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C6B39: mov     r11, [rbp-20h]
 * 00000001401C6B3D: mov     r10, [rbp-28h]
 * 00000001401C6B41: mov     r9, [rbp-30h]
 * 00000001401C6B45: mov     r8, [rbp-38h]
 * 00000001401C6B49: mov     rdx, [rbp-40h]
 * 00000001401C6B4D: mov     rcx, [rbp-48h]
 * 00000001401C6B51: mov     rax, [rbp-50h]
 * 00000001401C6B55: mov     rsp, rbp
 * 00000001401C6B58: mov     rbp, [rbp+0D8h]
 * 00000001401C6B5F: add     rsp, 0E8h
 * 00000001401C6B66: iretq
 */
