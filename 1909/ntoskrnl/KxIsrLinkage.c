/*
 * XREFs of KxIsrLinkage @ 0x1401C7650
 * Callers:
 *     KxIsrLinkageShadow @ 0x140351AC0 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400427C0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x140169A90 (PerfInfoLogUnexpectedInterrupt.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1401C7650 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1401D64C0 (KiBugCheckDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1402AA3D0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1401C7650
 * Reason: Hex-Rays returned no pseudocode for 0x1401C7650
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C7650: push    rbp
 * 00000001401C7651: push    rsi
 * 00000001401C7652: sub     rsp, 150h
 * 00000001401C7659: lea     rbp, [rsp+80h]
 * 00000001401C7661: mov     [rbp+0D8h+var_12D], 0
 * 00000001401C7665: mov     [rbp+0D8h+var_128], rax
 * 00000001401C7669: mov     [rbp+0D8h+var_120], rcx
 * 00000001401C766D: mov     [rbp+0D8h+var_118], rdx
 * 00000001401C7671: mov     [rbp+0D8h+var_110], r8
 * 00000001401C7675: mov     [rbp+0D8h+var_108], r9
 * 00000001401C7679: mov     [rbp+0D8h+var_100], r10
 * 00000001401C767D: mov     [rbp+0D8h+var_F8], r11
 * 00000001401C7681: test    [rbp+0D8h+arg_8], 1
 * 00000001401C7688: jnz     short loc_1401C76B7
 * 00000001401C768A: lfence
 * 00000001401C768D: test    byte ptr gs:278h, 1
 * 00000001401C7696: jnz     short loc_1401C76A0
 * 00000001401C7698: lfence
 * 00000001401C769B: jmp     loc_1401C78B3
 * 00000001401C76A0: movzx   eax, byte ptr gs:27Ah
 * 00000001401C76A9: mov     ecx, 48h ; 'H'
 * 00000001401C76AE: xor     edx, edx
 * 00000001401C76B0: wrmsr
 * 00000001401C76B2: jmp     loc_1401C78B3
 * 00000001401C76B7: test    cs:KiKvaShadow, 1
 * 00000001401C76BE: jnz     short loc_1401C76C3
 * 00000001401C76C0: swapgs
 * 00000001401C76C3: lfence
 * 00000001401C76C6: mov     r10, gs:188h
 * 00000001401C76CF: mov     rcx, gs:188h
 * 00000001401C76D8: mov     rcx, [rcx+220h]
 * 00000001401C76DF: mov     rcx, [rcx+860h]
 * 00000001401C76E6: mov     gs:270h, rcx
 * 00000001401C76EF: mov     cl, gs:850h
 * 00000001401C76F7: mov     gs:851h, cl
 * 00000001401C76FF: mov     cl, gs:278h
 * 00000001401C7707: mov     gs:852h, cl
 * 00000001401C770F: movzx   eax, byte ptr gs:27Bh
 * 00000001401C7718: cmp     gs:27Ah, al
 * 00000001401C7720: jz      short loc_1401C7733
 * 00000001401C7722: mov     gs:27Ah, al
 * 00000001401C772A: mov     ecx, 48h ; 'H'
 * 00000001401C772F: xor     edx, edx
 * 00000001401C7731: wrmsr
 * 00000001401C7733: movzx   edx, byte ptr gs:278h
 * 00000001401C773C: test    edx, 8
 * 00000001401C7742: jz      short loc_1401C7757
 * 00000001401C7744: mov     eax, 1
 * 00000001401C7749: xor     edx, edx
 * 00000001401C774B: mov     ecx, 49h ; 'I'
 * 00000001401C7750: wrmsr
 * 00000001401C7752: jmp     loc_1401C7895
 * 00000001401C7757: test    edx, 2
 * 00000001401C775D: jz      loc_1401C7892
 * 00000001401C7763: test    byte ptr gs:279h, 4
 * 00000001401C776C: jnz     loc_1401C7892
 * 00000001401C7772: call    loc_1401C7885
 * 00000001401C7777: add     rsp, 8
 * 00000001401C777B: call    loc_1401C788E
 * 00000001401C7780: add     rsp, 8
 * 00000001401C7784: call    loc_1401C7777
 * 00000001401C7789: add     rsp, 8
 * 00000001401C778D: call    loc_1401C7780
 * 00000001401C7792: add     rsp, 8
 * 00000001401C7796: call    loc_1401C7789
 * 00000001401C779B: add     rsp, 8
 * 00000001401C779F: call    loc_1401C7792
 * 00000001401C77A4: add     rsp, 8
 * 00000001401C77A8: call    loc_1401C779B
 * 00000001401C77AD: add     rsp, 8
 * 00000001401C77B1: call    loc_1401C77A4
 * 00000001401C77B6: add     rsp, 8
 * 00000001401C77BA: call    loc_1401C77AD
 * 00000001401C77BF: add     rsp, 8
 * 00000001401C77C3: call    loc_1401C77B6
 * 00000001401C77C8: add     rsp, 8
 * 00000001401C77CC: call    loc_1401C77BF
 * 00000001401C77D1: add     rsp, 8
 * 00000001401C77D5: call    loc_1401C77C8
 * 00000001401C77DA: add     rsp, 8
 * 00000001401C77DE: call    loc_1401C77D1
 * 00000001401C77E3: add     rsp, 8
 * 00000001401C77E7: call    loc_1401C77DA
 * 00000001401C77EC: add     rsp, 8
 * 00000001401C77F0: call    loc_1401C77E3
 * 00000001401C77F5: add     rsp, 8
 * 00000001401C77F9: call    loc_1401C77EC
 * 00000001401C77FE: add     rsp, 8
 * 00000001401C7802: call    loc_1401C77F5
 * 00000001401C7807: add     rsp, 8
 * 00000001401C780B: call    loc_1401C77FE
 * 00000001401C7810: add     rsp, 8
 * 00000001401C7814: call    loc_1401C7807
 * 00000001401C7819: add     rsp, 8
 * 00000001401C781D: call    loc_1401C7810
 * 00000001401C7822: add     rsp, 8
 * 00000001401C7826: call    loc_1401C7819
 * 00000001401C782B: add     rsp, 8
 * 00000001401C782F: call    loc_1401C7822
 * 00000001401C7834: add     rsp, 8
 * 00000001401C7838: call    loc_1401C782B
 * 00000001401C783D: add     rsp, 8
 * 00000001401C7841: call    loc_1401C7834
 * 00000001401C7846: add     rsp, 8
 * 00000001401C784A: call    loc_1401C783D
 * 00000001401C784F: add     rsp, 8
 * 00000001401C7853: call    loc_1401C7846
 * 00000001401C7858: add     rsp, 8
 * 00000001401C785C: call    loc_1401C784F
 * 00000001401C7861: add     rsp, 8
 * 00000001401C7865: call    loc_1401C7858
 * 00000001401C786A: add     rsp, 8
 * 00000001401C786E: call    loc_1401C7861
 * 00000001401C7873: add     rsp, 8
 * 00000001401C7877: call    loc_1401C786A
 * 00000001401C787C: add     rsp, 8
 * 00000001401C7880: call    loc_1401C7873
 * 00000001401C7885: add     rsp, 8
 * 00000001401C7889: call    loc_1401C787C
 * 00000001401C788E: add     rsp, 8
 * 00000001401C7892: lfence
 * 00000001401C7895: mov     byte ptr gs:853h, 0
 * 00000001401C789E: test    byte ptr [r10+3], 3
 * 00000001401C78A3: mov     [rbp+0D8h+var_58], 0
 * 00000001401C78AC: jz      short loc_1401C78B3
 * 00000001401C78AE: call    KiSaveDebugRegisterState
 * 00000001401C78B3: cld
 * 00000001401C78B4: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401C78B8: ldmxcsr dword ptr gs:180h
 * 00000001401C78C1: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401C78C5: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401C78C9: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401C78CD: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401C78D1: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401C78D5: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401C78D9: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C78E2: jz      short loc_1401C78E9
 * 00000001401C78E4: call    KeWakeProcessor
 * 00000001401C78E9: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C78F0: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401C78F7: jnb     short loc_1401C7912
 * 00000001401C78F9: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C7900: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401C7907: jb      short loc_1401C7912
 * 00000001401C7909: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401C790D: call    KiCheckForSListAddress
 * 00000001401C7912: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001401C7919: mov     rsi, gs:20h
 * 00000001401C7922: mov     rsi, [rsi+rax*8+2E80h]
 * 00000001401C792A: inc     dword ptr gs:5D00h
 * 00000001401C7932: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C7939: jz      short loc_1401C793E
 * 00000001401C793B: clac
 * 00000001401C793E: test    rsi, rsi
 * 00000001401C7941: jz      short loc_1401C794C
 * 00000001401C7943: mov     rax, [rsi+50h]
 * 00000001401C7947: jmp     _guard_dispatch_icall
 * 00000001401C794C: mov     ecx, eax
 * 00000001401C794E: shr     ecx, 4
 * 00000001401C7951: cmp     cs:KiIrqlFlags, 0
 * 00000001401C7958: jz      short loc_1401C7961
 * 00000001401C795A: call    KzSetIrqlUnsafe
 * 00000001401C795F: jmp     short loc_1401C7969
 * 00000001401C7961: mov     rax, cr8
 * 00000001401C7965: mov     cr8, rcx
 * 00000001401C7969: mov     [rbp+0D8h+var_12F], al
 * 00000001401C796C: mov     rcx, gs:20h
 * 00000001401C7975: inc     byte ptr [rcx+20h]
 * 00000001401C7978: cmp     byte ptr [rcx+20h], 1
 * 00000001401C797C: jnz     short loc_1401C79CE
 * 00000001401C797E: rdtsc
 * 00000001401C7980: shl     rdx, 20h
 * 00000001401C7984: or      rax, rdx
 * 00000001401C7987: mov     r8, [rcx+8]
 * 00000001401C798B: sub     rax, [rcx+5BC0h]
 * 00000001401C7992: add     [r8+48h], rax
 * 00000001401C7996: mov     edx, [r8+50h]
 * 00000001401C799A: add     [rcx+5BC0h], rax
 * 00000001401C79A1: add     rdx, rax
 * 00000001401C79A4: mov     ecx, edx
 * 00000001401C79A6: shr     rdx, 20h
 * 00000001401C79AA: jz      short loc_1401C79AF
 * 00000001401C79AC: or      ecx, 0FFFFFFFFh
 * 00000001401C79AF: mov     [r8+50h], ecx
 * 00000001401C79B3: test    byte ptr [r8+2], 3Eh
 * 00000001401C79B8: jz      short loc_1401C79CE
 * 00000001401C79BA: mov     rdx, r8
 * 00000001401C79BD: mov     r8, rax
 * 00000001401C79C0: mov     rcx, gs:20h
 * 00000001401C79C9: call    KiEndThreadAccountingPeriod
 * 00000001401C79CE: sti
 * 00000001401C79CF: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001401C79D9: jz      short loc_1401C79E7
 * 00000001401C79DB: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001401C79E2: call    PerfInfoLogUnexpectedInterrupt
 * 00000001401C79E7: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001401C79EE: jz      short loc_1401C7A0F
 * 00000001401C79F0: and     [rbp+0D8h+var_138], 0
 * 00000001401C79F5: xor     r9, r9
 * 00000001401C79F8: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001401C7A00: mov     edx, 1
 * 00000001401C7A05: mov     ecx, 12h
 * 00000001401C7A0A: call    KiBugCheckDispatch
 * 00000001401C7A0F: cli
 * 00000001401C7A10: mov     rcx, rsi
 * 00000001401C7A13: call    HalPerformEndOfInterrupt_0
 * 00000001401C7A18: mov     rcx, gs:20h
 * 00000001401C7A21: cmp     byte ptr [rcx+20h], 1
 * 00000001401C7A25: ja      short loc_1401C7AA1
 * 00000001401C7A27: rdtsc
 * 00000001401C7A29: shl     rdx, 20h
 * 00000001401C7A2D: or      rax, rdx
 * 00000001401C7A30: sub     rax, [rcx+5BC0h]
 * 00000001401C7A37: add     [rcx+5C38h], rax
 * 00000001401C7A3E: add     [rcx+5BC0h], rax
 * 00000001401C7A45: mov     r8, rax
 * 00000001401C7A48: mov     rax, [rcx+8]
 * 00000001401C7A4C: test    byte ptr [rax+2], 72h
 * 00000001401C7A50: jz      short loc_1401C7A65
 * 00000001401C7A52: xor     edx, edx
 * 00000001401C7A54: call    KiBeginThreadAccountingPeriod
 * 00000001401C7A59: mov     rcx, gs:20h
 * 00000001401C7A62: inc     byte ptr [rcx+20h]
 * 00000001401C7A65: mov     dl, [rcx+6]
 * 00000001401C7A68: and     byte ptr [rcx+6], 0
 * 00000001401C7A6C: cmp     byte ptr [rcx+7], 0
 * 00000001401C7A70: jnz     short loc_1401C7AA1
 * 00000001401C7A72: test    dl, dl
 * 00000001401C7A74: jz      short loc_1401C7AA1
 * 00000001401C7A76: cmp     [rbp+0D8h+var_12F], 2
 * 00000001401C7A7A: jnb     short loc_1401C7A87
 * 00000001401C7A7C: and     byte ptr [rcx+20h], 0
 * 00000001401C7A80: call    KiDpcInterruptBypass
 * 00000001401C7A85: jmp     short loc_1401C7AA4
 * 00000001401C7A87: mov     ecx, 2
 * 00000001401C7A8C: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C7A93: nop     dword ptr [rax+rax+00h]
 * 00000001401C7A98: mov     rcx, gs:20h
 * 00000001401C7AA1: dec     byte ptr [rcx+20h]
 * 00000001401C7AA4: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001401C7AA8: cmp     cs:KiIrqlFlags, 0
 * 00000001401C7AAF: jz      short loc_1401C7AB8
 * 00000001401C7AB1: call    KzSetIrqlUnsafe
 * 00000001401C7AB6: jmp     short loc_1401C7ABC
 * 00000001401C7AB8: mov     cr8, rcx
 * 00000001401C7ABC: mov     rsi, [rbp+0D8h+var_8]
 * 00000001401C7AC3: cli
 * 00000001401C7AC4: test    [rbp+0D8h+arg_8], 1
 * 00000001401C7ACB: jz      loc_1401C7C0A
 * 00000001401C7AD1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C7AD8: jz      short loc_1401C7ADD
 * 00000001401C7ADA: stac
 * 00000001401C7ADD: mov     rcx, gs:188h
 * 00000001401C7AE6: test    byte ptr [rcx+0C2h], 3
 * 00000001401C7AED: jz      short loc_1401C7B0A
 * 00000001401C7AEF: mov     ecx, 1
 * 00000001401C7AF4: mov     cr8, rcx
 * 00000001401C7AF8: sti
 * 00000001401C7AF9: call    KiInitiateUserApc
 * 00000001401C7AFE: cli
 * 00000001401C7AFF: mov     ecx, 0
 * 00000001401C7B04: mov     cr8, rcx
 * 00000001401C7B08: jmp     short loc_1401C7ADD
 * 00000001401C7B0A: test    byte ptr gs:27Eh, 2
 * 00000001401C7B13: jz      short loc_1401C7B1C
 * 00000001401C7B15: xor     ecx, ecx
 * 00000001401C7B17: call    KiUpdateStibpPairing
 * 00000001401C7B1C: mov     rcx, gs:188h
 * 00000001401C7B25: test    dword ptr [rcx], 8000000h
 * 00000001401C7B2B: jz      short loc_1401C7B32
 * 00000001401C7B2D: call    KiRestoreSetContextState
 * 00000001401C7B32: mov     rcx, gs:188h
 * 00000001401C7B3B: test    dword ptr [rcx], 40010000h
 * 00000001401C7B41: jz      short loc_1401C7B57
 * 00000001401C7B43: test    byte ptr [rcx+2], 1
 * 00000001401C7B47: jz      short loc_1401C7B57
 * 00000001401C7B49: call    KiCopyCounters
 * 00000001401C7B4E: mov     rcx, gs:188h
 * 00000001401C7B57: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401C7B5B: cmp     [rbp+0D8h+var_58], 0
 * 00000001401C7B63: jz      short loc_1401C7B6A
 * 00000001401C7B65: call    KiRestoreDebugRegisterState
 * 00000001401C7B6A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401C7B6E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401C7B72: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401C7B76: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401C7B7A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401C7B7E: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401C7B82: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401C7B86: mov     r10, [rbp+0D8h+var_100]
 * 00000001401C7B8A: mov     r9, [rbp+0D8h+var_108]
 * 00000001401C7B8E: mov     r8, [rbp+0D8h+var_110]
 * 00000001401C7B92: mov     byte ptr gs:853h, 0
 * 00000001401C7B9B: movzx   eax, byte ptr gs:27Dh
 * 00000001401C7BA4: cmp     gs:27Ah, al
 * 00000001401C7BAC: jz      short loc_1401C7BBF
 * 00000001401C7BAE: mov     gs:27Ah, al
 * 00000001401C7BB6: mov     ecx, 48h ; 'H'
 * 00000001401C7BBB: xor     edx, edx
 * 00000001401C7BBD: wrmsr
 * 00000001401C7BBF: btr     word ptr gs:278h, 2
 * 00000001401C7BCA: jnb     short loc_1401C7BDA
 * 00000001401C7BCC: mov     eax, 1
 * 00000001401C7BD1: xor     edx, edx
 * 00000001401C7BD3: mov     ecx, 49h ; 'I'
 * 00000001401C7BD8: wrmsr
 * 00000001401C7BDA: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401C7BDE: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401C7BE2: mov     rax, [rbp+0D8h+var_128]
 * 00000001401C7BE6: mov     rsp, rbp
 * 00000001401C7BE9: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401C7BF0: add     rsp, 0E8h
 * 00000001401C7BF7: test    cs:KiKvaShadow, 1
 * 00000001401C7BFE: jz      short loc_1401C7C05
 * 00000001401C7C00: jmp     KiKernelExit
 * 00000001401C7C05: swapgs
 * 00000001401C7C08: iretq
 * 00000001401C7C0A: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401C7C0E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401C7C12: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401C7C16: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401C7C1A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401C7C1E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401C7C22: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401C7C26: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401C7C2A: mov     r10, [rbp+0D8h+var_100]
 * 00000001401C7C2E: mov     r9, [rbp+0D8h+var_108]
 * 00000001401C7C32: mov     r8, [rbp+0D8h+var_110]
 * 00000001401C7C36: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401C7C3A: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401C7C3E: mov     rax, [rbp+0D8h+var_128]
 * 00000001401C7C42: mov     rsp, rbp
 * 00000001401C7C45: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401C7C4C: add     rsp, 0E8h
 * 00000001401C7C53: iretq
 */
