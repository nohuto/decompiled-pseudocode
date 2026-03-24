/*
 * XREFs of KiIpiInterrupt @ 0x1401CAD60
 * Callers:
 *     KiIpiInterruptShadow @ 0x140351200 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1401CAD60 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401CB2C0 (KiIpiInterruptSubDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1402AA3D0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1401CAD60
 * Reason: Hex-Rays returned no pseudocode for 0x1401CAD60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CAD60: sub     rsp, 8
 * 00000001401CAD64: push    rbp
 * 00000001401CAD65: push    rsi
 * 00000001401CAD66: sub     rsp, 150h
 * 00000001401CAD6D: lea     rbp, [rsp+80h]
 * 00000001401CAD75: mov     [rbp+0E8h+var_13D], 0
 * 00000001401CAD79: mov     [rbp+0E8h+var_138], rax
 * 00000001401CAD7D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CAD81: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CAD85: mov     [rbp+0E8h+var_120], r8
 * 00000001401CAD89: mov     [rbp+0E8h+var_118], r9
 * 00000001401CAD8D: mov     [rbp+0E8h+var_110], r10
 * 00000001401CAD91: mov     [rbp+0E8h+var_108], r11
 * 00000001401CAD95: test    [rbp+0E8h+arg_0], 1
 * 00000001401CAD9C: jnz     short loc_1401CADCB
 * 00000001401CAD9E: lfence
 * 00000001401CADA1: test    byte ptr gs:278h, 1
 * 00000001401CADAA: jnz     short loc_1401CADB4
 * 00000001401CADAC: lfence
 * 00000001401CADAF: jmp     loc_1401CAFC7
 * 00000001401CADB4: movzx   eax, byte ptr gs:27Ah
 * 00000001401CADBD: mov     ecx, 48h ; 'H'
 * 00000001401CADC2: xor     edx, edx
 * 00000001401CADC4: wrmsr
 * 00000001401CADC6: jmp     loc_1401CAFC7
 * 00000001401CADCB: test    cs:KiKvaShadow, 1
 * 00000001401CADD2: jnz     short loc_1401CADD7
 * 00000001401CADD4: swapgs
 * 00000001401CADD7: lfence
 * 00000001401CADDA: mov     r10, gs:188h
 * 00000001401CADE3: mov     rcx, gs:188h
 * 00000001401CADEC: mov     rcx, [rcx+220h]
 * 00000001401CADF3: mov     rcx, [rcx+860h]
 * 00000001401CADFA: mov     gs:270h, rcx
 * 00000001401CAE03: mov     cl, gs:850h
 * 00000001401CAE0B: mov     gs:851h, cl
 * 00000001401CAE13: mov     cl, gs:278h
 * 00000001401CAE1B: mov     gs:852h, cl
 * 00000001401CAE23: movzx   eax, byte ptr gs:27Bh
 * 00000001401CAE2C: cmp     gs:27Ah, al
 * 00000001401CAE34: jz      short loc_1401CAE47
 * 00000001401CAE36: mov     gs:27Ah, al
 * 00000001401CAE3E: mov     ecx, 48h ; 'H'
 * 00000001401CAE43: xor     edx, edx
 * 00000001401CAE45: wrmsr
 * 00000001401CAE47: movzx   edx, byte ptr gs:278h
 * 00000001401CAE50: test    edx, 8
 * 00000001401CAE56: jz      short loc_1401CAE6B
 * 00000001401CAE58: mov     eax, 1
 * 00000001401CAE5D: xor     edx, edx
 * 00000001401CAE5F: mov     ecx, 49h ; 'I'
 * 00000001401CAE64: wrmsr
 * 00000001401CAE66: jmp     loc_1401CAFA9
 * 00000001401CAE6B: test    edx, 2
 * 00000001401CAE71: jz      loc_1401CAFA6
 * 00000001401CAE77: test    byte ptr gs:279h, 4
 * 00000001401CAE80: jnz     loc_1401CAFA6
 * 00000001401CAE86: call    loc_1401CAF99
 * 00000001401CAE8B: add     rsp, 8
 * 00000001401CAE8F: call    loc_1401CAFA2
 * 00000001401CAE94: add     rsp, 8
 * 00000001401CAE98: call    loc_1401CAE8B
 * 00000001401CAE9D: add     rsp, 8
 * 00000001401CAEA1: call    loc_1401CAE94
 * 00000001401CAEA6: add     rsp, 8
 * 00000001401CAEAA: call    loc_1401CAE9D
 * 00000001401CAEAF: add     rsp, 8
 * 00000001401CAEB3: call    loc_1401CAEA6
 * 00000001401CAEB8: add     rsp, 8
 * 00000001401CAEBC: call    loc_1401CAEAF
 * 00000001401CAEC1: add     rsp, 8
 * 00000001401CAEC5: call    loc_1401CAEB8
 * 00000001401CAECA: add     rsp, 8
 * 00000001401CAECE: call    loc_1401CAEC1
 * 00000001401CAED3: add     rsp, 8
 * 00000001401CAED7: call    loc_1401CAECA
 * 00000001401CAEDC: add     rsp, 8
 * 00000001401CAEE0: call    loc_1401CAED3
 * 00000001401CAEE5: add     rsp, 8
 * 00000001401CAEE9: call    loc_1401CAEDC
 * 00000001401CAEEE: add     rsp, 8
 * 00000001401CAEF2: call    loc_1401CAEE5
 * 00000001401CAEF7: add     rsp, 8
 * 00000001401CAEFB: call    loc_1401CAEEE
 * 00000001401CAF00: add     rsp, 8
 * 00000001401CAF04: call    loc_1401CAEF7
 * 00000001401CAF09: add     rsp, 8
 * 00000001401CAF0D: call    loc_1401CAF00
 * 00000001401CAF12: add     rsp, 8
 * 00000001401CAF16: call    loc_1401CAF09
 * 00000001401CAF1B: add     rsp, 8
 * 00000001401CAF1F: call    loc_1401CAF12
 * 00000001401CAF24: add     rsp, 8
 * 00000001401CAF28: call    loc_1401CAF1B
 * 00000001401CAF2D: add     rsp, 8
 * 00000001401CAF31: call    loc_1401CAF24
 * 00000001401CAF36: add     rsp, 8
 * 00000001401CAF3A: call    loc_1401CAF2D
 * 00000001401CAF3F: add     rsp, 8
 * 00000001401CAF43: call    loc_1401CAF36
 * 00000001401CAF48: add     rsp, 8
 * 00000001401CAF4C: call    loc_1401CAF3F
 * 00000001401CAF51: add     rsp, 8
 * 00000001401CAF55: call    loc_1401CAF48
 * 00000001401CAF5A: add     rsp, 8
 * 00000001401CAF5E: call    loc_1401CAF51
 * 00000001401CAF63: add     rsp, 8
 * 00000001401CAF67: call    loc_1401CAF5A
 * 00000001401CAF6C: add     rsp, 8
 * 00000001401CAF70: call    loc_1401CAF63
 * 00000001401CAF75: add     rsp, 8
 * 00000001401CAF79: call    loc_1401CAF6C
 * 00000001401CAF7E: add     rsp, 8
 * 00000001401CAF82: call    loc_1401CAF75
 * 00000001401CAF87: add     rsp, 8
 * 00000001401CAF8B: call    loc_1401CAF7E
 * 00000001401CAF90: add     rsp, 8
 * 00000001401CAF94: call    loc_1401CAF87
 * 00000001401CAF99: add     rsp, 8
 * 00000001401CAF9D: call    loc_1401CAF90
 * 00000001401CAFA2: add     rsp, 8
 * 00000001401CAFA6: lfence
 * 00000001401CAFA9: mov     byte ptr gs:853h, 0
 * 00000001401CAFB2: test    byte ptr [r10+3], 3
 * 00000001401CAFB7: mov     [rbp+0E8h+var_68], 0
 * 00000001401CAFC0: jz      short loc_1401CAFC7
 * 00000001401CAFC2: call    KiSaveDebugRegisterState
 * 00000001401CAFC7: cld
 * 00000001401CAFC8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CAFCC: ldmxcsr dword ptr gs:180h
 * 00000001401CAFD5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CAFD9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CAFDD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CAFE1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CAFE5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CAFE9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CAFED: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401CAFF6: jz      short loc_1401CAFFD
 * 00000001401CAFF8: call    KeWakeProcessor
 * 00000001401CAFFD: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401CB004: cmp     rax, [rbp+0E8h]
 * 00000001401CB00B: jnb     short loc_1401CB026
 * 00000001401CB00D: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401CB014: cmp     rax, [rbp+0E8h]
 * 00000001401CB01B: jb      short loc_1401CB026
 * 00000001401CB01D: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401CB021: call    KiCheckForSListAddress
 * 00000001401CB026: xor     esi, esi
 * 00000001401CB028: inc     dword ptr gs:5D00h
 * 00000001401CB030: mov     rdx, rsp
 * 00000001401CB033: mov     rcx, gs:6458h
 * 00000001401CB03C: lea     rax, [rcx-6000h]
 * 00000001401CB043: cmp     rax, rsp
 * 00000001401CB046: ja      short loc_1401CB04D
 * 00000001401CB048: cmp     rsp, rcx
 * 00000001401CB04B: jb      short loc_1401CB059
 * 00000001401CB04D: cmp     cs:KiBugCheckActive, 0
 * 00000001401CB054: jnz     short loc_1401CB059
 * 00000001401CB056: mov     rsp, rcx
 * 00000001401CB059: sub     rsp, 20h
 * 00000001401CB05D: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001401CB062: call    KiIpiInterruptSubDispatch
 * 00000001401CB067: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001401CB06C: mov     rcx, rsi
 * 00000001401CB06F: call    HalPerformEndOfInterrupt_0
 * 00000001401CB074: mov     rcx, gs:20h
 * 00000001401CB07D: cmp     byte ptr [rcx+20h], 1
 * 00000001401CB081: ja      short loc_1401CB0FD
 * 00000001401CB083: rdtsc
 * 00000001401CB085: shl     rdx, 20h
 * 00000001401CB089: or      rax, rdx
 * 00000001401CB08C: sub     rax, [rcx+5BC0h]
 * 00000001401CB093: add     [rcx+5C38h], rax
 * 00000001401CB09A: add     [rcx+5BC0h], rax
 * 00000001401CB0A1: mov     r8, rax
 * 00000001401CB0A4: mov     rax, [rcx+8]
 * 00000001401CB0A8: test    byte ptr [rax+2], 72h
 * 00000001401CB0AC: jz      short loc_1401CB0C1
 * 00000001401CB0AE: xor     edx, edx
 * 00000001401CB0B0: call    KiBeginThreadAccountingPeriod
 * 00000001401CB0B5: mov     rcx, gs:20h
 * 00000001401CB0BE: inc     byte ptr [rcx+20h]
 * 00000001401CB0C1: mov     dl, [rcx+6]
 * 00000001401CB0C4: and     byte ptr [rcx+6], 0
 * 00000001401CB0C8: cmp     byte ptr [rcx+7], 0
 * 00000001401CB0CC: jnz     short loc_1401CB0FD
 * 00000001401CB0CE: test    dl, dl
 * 00000001401CB0D0: jz      short loc_1401CB0FD
 * 00000001401CB0D2: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401CB0D6: jnb     short loc_1401CB0E3
 * 00000001401CB0D8: and     byte ptr [rcx+20h], 0
 * 00000001401CB0DC: call    KiDpcInterruptBypass
 * 00000001401CB0E1: jmp     short loc_1401CB100
 * 00000001401CB0E3: mov     ecx, 2
 * 00000001401CB0E8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401CB0EF: nop     dword ptr [rax+rax+00h]
 * 00000001401CB0F4: mov     rcx, gs:20h
 * 00000001401CB0FD: dec     byte ptr [rcx+20h]
 * 00000001401CB100: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401CB104: cmp     cs:KiIrqlFlags, 0
 * 00000001401CB10B: jz      short loc_1401CB114
 * 00000001401CB10D: call    KzSetIrqlUnsafe
 * 00000001401CB112: jmp     short loc_1401CB118
 * 00000001401CB114: mov     cr8, rcx
 * 00000001401CB118: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401CB11F: test    [rbp+0E8h+arg_0], 1
 * 00000001401CB126: jz      loc_1401CB265
 * 00000001401CB12C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CB133: jz      short loc_1401CB138
 * 00000001401CB135: stac
 * 00000001401CB138: mov     rcx, gs:188h
 * 00000001401CB141: test    byte ptr [rcx+0C2h], 3
 * 00000001401CB148: jz      short loc_1401CB165
 * 00000001401CB14A: mov     ecx, 1
 * 00000001401CB14F: mov     cr8, rcx
 * 00000001401CB153: sti
 * 00000001401CB154: call    KiInitiateUserApc
 * 00000001401CB159: cli
 * 00000001401CB15A: mov     ecx, 0
 * 00000001401CB15F: mov     cr8, rcx
 * 00000001401CB163: jmp     short loc_1401CB138
 * 00000001401CB165: test    byte ptr gs:27Eh, 2
 * 00000001401CB16E: jz      short loc_1401CB177
 * 00000001401CB170: xor     ecx, ecx
 * 00000001401CB172: call    KiUpdateStibpPairing
 * 00000001401CB177: mov     rcx, gs:188h
 * 00000001401CB180: test    dword ptr [rcx], 8000000h
 * 00000001401CB186: jz      short loc_1401CB18D
 * 00000001401CB188: call    KiRestoreSetContextState
 * 00000001401CB18D: mov     rcx, gs:188h
 * 00000001401CB196: test    dword ptr [rcx], 40010000h
 * 00000001401CB19C: jz      short loc_1401CB1B2
 * 00000001401CB19E: test    byte ptr [rcx+2], 1
 * 00000001401CB1A2: jz      short loc_1401CB1B2
 * 00000001401CB1A4: call    KiCopyCounters
 * 00000001401CB1A9: mov     rcx, gs:188h
 * 00000001401CB1B2: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CB1B6: cmp     [rbp+0E8h+var_68], 0
 * 00000001401CB1BE: jz      short loc_1401CB1C5
 * 00000001401CB1C0: call    KiRestoreDebugRegisterState
 * 00000001401CB1C5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CB1C9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CB1CD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CB1D1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CB1D5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CB1D9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CB1DD: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CB1E1: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CB1E5: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CB1E9: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CB1ED: mov     byte ptr gs:853h, 0
 * 00000001401CB1F6: movzx   eax, byte ptr gs:27Dh
 * 00000001401CB1FF: cmp     gs:27Ah, al
 * 00000001401CB207: jz      short loc_1401CB21A
 * 00000001401CB209: mov     gs:27Ah, al
 * 00000001401CB211: mov     ecx, 48h ; 'H'
 * 00000001401CB216: xor     edx, edx
 * 00000001401CB218: wrmsr
 * 00000001401CB21A: btr     word ptr gs:278h, 2
 * 00000001401CB225: jnb     short loc_1401CB235
 * 00000001401CB227: mov     eax, 1
 * 00000001401CB22C: xor     edx, edx
 * 00000001401CB22E: mov     ecx, 49h ; 'I'
 * 00000001401CB233: wrmsr
 * 00000001401CB235: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CB239: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CB23D: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CB241: mov     rsp, rbp
 * 00000001401CB244: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CB24B: add     rsp, 0E8h
 * 00000001401CB252: test    cs:KiKvaShadow, 1
 * 00000001401CB259: jz      short loc_1401CB260
 * 00000001401CB25B: jmp     KiKernelExit
 * 00000001401CB260: swapgs
 * 00000001401CB263: iretq
 * 00000001401CB265: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CB269: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CB26D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CB271: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CB275: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CB279: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CB27D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CB281: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CB285: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CB289: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CB28D: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CB291: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CB295: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CB299: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CB29D: mov     rsp, rbp
 * 00000001401CB2A0: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CB2A7: add     rsp, 0E8h
 * 00000001401CB2AE: iretq
 */
