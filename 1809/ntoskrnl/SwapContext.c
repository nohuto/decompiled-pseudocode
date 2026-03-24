/*
 * XREFs of SwapContext @ 0x1401C42C0
 * Callers:
 *     KiIdleLoop @ 0x1401C0520 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1401C3F70 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x1401C40E0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiUpdateSpeculationControl @ 0x1400F8330 (KiUpdateSpeculationControl.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     EtwTraceContextSwap @ 0x14017C900 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     SwapContext @ 0x1401C42C0 (SwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1402713D0 (HvlNotifyLongSpinWait.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402796C0 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x14028D750 (KiClearLastBranchRecordStack.c)
 *     KiResetProcessorTraceBuffer @ 0x14028F620 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x1402948F0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x140294A30 (KiSaveThreadIptState.c)
 *     KeCheckAndApplyBamQos @ 0x140297C90 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1402982D0 (KiCheckAndApplyCacheIsolation.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298330 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1401C42C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C42C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C42C0: push    rbp
 * 00000001401C42C2: sub     rsp, 30h
 * 00000001401C42C6: prefetchw byte ptr [rsi+71h]
 * 00000001401C42CA: mov     [rsp+38h+var_10], cl
 * 00000001401C42CE: cmp     byte ptr [rsi+71h], 0
 * 00000001401C42D2: jnz     loc_1401C4929
 * 00000001401C42D8: mov     byte ptr [rsi+71h], 1
 * 00000001401C42DC: cli
 * 00000001401C42DD: rdtsc
 * 00000001401C42DF: shl     rdx, 20h
 * 00000001401C42E3: or      rax, rdx
 * 00000001401C42E6: sub     rax, [rbx+5BC0h]
 * 00000001401C42ED: add     [rbx+5C38h], rax
 * 00000001401C42F4: add     [rbx+5BC0h], rax
 * 00000001401C42FB: mov     r12, rax
 * 00000001401C42FE: test    byte ptr [rbx+6], 0FFh
 * 00000001401C4302: jz      short loc_1401C431F
 * 00000001401C4304: and     byte ptr [rbx+6], 0
 * 00000001401C4308: cmp     [rbx+18h], rsi
 * 00000001401C430C: jz      short loc_1401C431F
 * 00000001401C430E: mov     ecx, 2
 * 00000001401C4313: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C431A: nop     dword ptr [rax+rax+00h]
 * 00000001401C431F: test    byte ptr [rsi+2], 36h
 * 00000001401C4323: jnz     loc_1401C48A7
 * 00000001401C4329: dec     byte ptr [rbx+20h]
 * 00000001401C432C: sti
 * 00000001401C432D: inc     dword ptr [rbx+2D3Ch]
 * 00000001401C4333: mov     rbp, cs:KeFeatureBits
 * 00000001401C433A: cmp     cs:KiCacheIsoBitmap, 0
 * 00000001401C4341: jz      short loc_1401C4355
 * 00000001401C4343: bt      rbp, 2Ch ; ','
 * 00000001401C4348: jnb     short loc_1401C4355
 * 00000001401C434A: mov     rcx, rbx
 * 00000001401C434D: mov     rdx, rsi
 * 00000001401C4350: call    KiCheckAndApplyCacheIsolation
 * 00000001401C4355: cmp     [rbx+18h], rsi
 * 00000001401C4359: jz      short loc_1401C4378
 * 00000001401C435B: mov     ecx, [rsi+78h]
 * 00000001401C435E: mov     eax, [rbx+0ECh]
 * 00000001401C4364: xor     eax, ecx
 * 00000001401C4366: test    eax, 3
 * 00000001401C436B: jz      short loc_1401C4378
 * 00000001401C436D: mov     rcx, rbx
 * 00000001401C4370: mov     rdx, rsi
 * 00000001401C4373: call    KeCheckAndApplyBamQos
 * 00000001401C4378: mov     rdx, [rdi+250h]
 * 00000001401C437F: mov     rcx, [rdi+60h]
 * 00000001401C4383: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001401C4387: mov     eax, edx
 * 00000001401C4389: jz      short loc_1401C43B5
 * 00000001401C438B: shr     rdx, 20h
 * 00000001401C438F: bt      rbp, 26h ; '&'
 * 00000001401C4394: jb      short loc_1401C43AD
 * 00000001401C4396: bt      rbp, 0Fh
 * 00000001401C439B: jb      short loc_1401C43B2
 * 00000001401C439D: bt      ebp, 17h
 * 00000001401C43A1: jnb     short loc_1401C43A8
 * 00000001401C43A3: xsave   byte ptr [rcx]
 * 00000001401C43A6: jmp     short loc_1401C43B5
 * 00000001401C43A8: fxsave  dword ptr [rcx]
 * 00000001401C43AB: jmp     short loc_1401C43B5
 * 00000001401C43AD: xsaves  byte ptr [rcx]
 * 00000001401C43B0: jmp     short loc_1401C43B5
 * 00000001401C43B2: xsaveopt byte ptr [rcx]
 * 00000001401C43B5: stmxcsr dword ptr [rcx+18h]
 * 00000001401C43B9: test    eax, 100h
 * 00000001401C43BE: jz      short loc_1401C43D1
 * 00000001401C43C0: cmp     cs:KiIptMsrMask, 0
 * 00000001401C43C7: jz      short loc_1401C43D1
 * 00000001401C43C9: mov     rcx, rdi
 * 00000001401C43CC: call    KiSaveThreadIptState
 * 00000001401C43D1: mov     [rdi+58h], rsp
 * 00000001401C43D5: mov     rsp, [rsi+58h]
 * 00000001401C43D9: test    byte ptr [rdi+3], 80h
 * 00000001401C43DD: jz      short loc_1401C440A
 * 00000001401C43DF: mov     ecx, 0C0000102h
 * 00000001401C43E4: rdmsr
 * 00000001401C43E6: shl     rdx, 20h
 * 00000001401C43EA: or      rax, rdx
 * 00000001401C43ED: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C43F4: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C43FC: mov     r14, [rdi+1F0h]
 * 00000001401C4403: mov     [r14+80h], rax
 * 00000001401C440A: mov     rax, [rdi+220h]
 * 00000001401C4411: cmp     qword ptr [rax+428h], 0
 * 00000001401C4419: jz      short loc_1401C442E
 * 00000001401C441B: mov     ecx, 0C0000100h
 * 00000001401C4420: rdmsr
 * 00000001401C4422: mov     [rdi+7A0h], eax
 * 00000001401C4428: mov     [rdi+7A4h], edx
 * 00000001401C442E: btr     dword ptr gs:856h, 0
 * 00000001401C4438: jnb     short loc_1401C443E
 * 00000001401C443A: or      byte ptr [rdi+7Fh], 2
 * 00000001401C443E: btr     dword ptr [rsi+7Fh], 1
 * 00000001401C4443: jnb     short loc_1401C444E
 * 00000001401C4445: or      byte ptr gs:856h, 1
 * 00000001401C444E: mov     rcx, [rsi+220h]
 * 00000001401C4455: or      cl, [rbx+6ECh]
 * 00000001401C445B: and     cl, 0C2h
 * 00000001401C445E: cmp     rcx, [rdi+220h]
 * 00000001401C4465: jz      short loc_1401C4474
 * 00000001401C4467: and     cl, 0C0h
 * 00000001401C446A: call    KiUpdateSpeculationControl
 * 00000001401C446F: jmp     loc_1401C4618
 * 00000001401C4474: movzx   ecx, byte ptr gs:856h
 * 00000001401C447D: and     cx, 3
 * 00000001401C4481: cmp     cx, 1
 * 00000001401C4485: jnz     loc_1401C4618
 * 00000001401C448B: cli
 * 00000001401C448C: movzx   eax, word ptr gs:852h
 * 00000001401C4495: cmp     gs:864h, ax
 * 00000001401C449E: jz      short loc_1401C44B2
 * 00000001401C44A0: mov     gs:864h, ax
 * 00000001401C44A9: mov     ecx, 48h ; 'H'
 * 00000001401C44AE: xor     edx, edx
 * 00000001401C44B0: wrmsr
 * 00000001401C44B2: movzx   edx, byte ptr gs:854h
 * 00000001401C44BB: test    edx, 10h
 * 00000001401C44C1: jz      short loc_1401C44DA
 * 00000001401C44C3: mov     eax, 1
 * 00000001401C44C8: xor     edx, edx
 * 00000001401C44CA: mov     ecx, 49h ; 'I'
 * 00000001401C44CF: wrmsr
 * 00000001401C44D1: movzx   edx, byte ptr gs:854h
 * 00000001401C44DA: test    edx, 40h
 * 00000001401C44E0: jz      loc_1401C460B
 * 00000001401C44E6: call    loc_1401C45F9
 * 00000001401C44EB: add     rsp, 8
 * 00000001401C44EF: call    loc_1401C4602
 * 00000001401C44F4: add     rsp, 8
 * 00000001401C44F8: call    loc_1401C44EB
 * 00000001401C44FD: add     rsp, 8
 * 00000001401C4501: call    loc_1401C44F4
 * 00000001401C4506: add     rsp, 8
 * 00000001401C450A: call    loc_1401C44FD
 * 00000001401C450F: add     rsp, 8
 * 00000001401C4513: call    loc_1401C4506
 * 00000001401C4518: add     rsp, 8
 * 00000001401C451C: call    loc_1401C450F
 * 00000001401C4521: add     rsp, 8
 * 00000001401C4525: call    loc_1401C4518
 * 00000001401C452A: add     rsp, 8
 * 00000001401C452E: call    loc_1401C4521
 * 00000001401C4533: add     rsp, 8
 * 00000001401C4537: call    loc_1401C452A
 * 00000001401C453C: add     rsp, 8
 * 00000001401C4540: call    loc_1401C4533
 * 00000001401C4545: add     rsp, 8
 * 00000001401C4549: call    loc_1401C453C
 * 00000001401C454E: add     rsp, 8
 * 00000001401C4552: call    loc_1401C4545
 * 00000001401C4557: add     rsp, 8
 * 00000001401C455B: call    loc_1401C454E
 * 00000001401C4560: add     rsp, 8
 * 00000001401C4564: call    loc_1401C4557
 * 00000001401C4569: add     rsp, 8
 * 00000001401C456D: call    loc_1401C4560
 * 00000001401C4572: add     rsp, 8
 * 00000001401C4576: call    loc_1401C4569
 * 00000001401C457B: add     rsp, 8
 * 00000001401C457F: call    loc_1401C4572
 * 00000001401C4584: add     rsp, 8
 * 00000001401C4588: call    loc_1401C457B
 * 00000001401C458D: add     rsp, 8
 * 00000001401C4591: call    loc_1401C4584
 * 00000001401C4596: add     rsp, 8
 * 00000001401C459A: call    loc_1401C458D
 * 00000001401C459F: add     rsp, 8
 * 00000001401C45A3: call    loc_1401C4596
 * 00000001401C45A8: add     rsp, 8
 * 00000001401C45AC: call    loc_1401C459F
 * 00000001401C45B1: add     rsp, 8
 * 00000001401C45B5: call    loc_1401C45A8
 * 00000001401C45BA: add     rsp, 8
 * 00000001401C45BE: call    loc_1401C45B1
 * 00000001401C45C3: add     rsp, 8
 * 00000001401C45C7: call    loc_1401C45BA
 * 00000001401C45CC: add     rsp, 8
 * 00000001401C45D0: call    loc_1401C45C3
 * 00000001401C45D5: add     rsp, 8
 * 00000001401C45D9: call    loc_1401C45CC
 * 00000001401C45DE: add     rsp, 8
 * 00000001401C45E2: call    loc_1401C45D5
 * 00000001401C45E7: add     rsp, 8
 * 00000001401C45EB: call    loc_1401C45DE
 * 00000001401C45F0: add     rsp, 8
 * 00000001401C45F4: call    loc_1401C45E7
 * 00000001401C45F9: add     rsp, 8
 * 00000001401C45FD: call    loc_1401C45F0
 * 00000001401C4602: add     rsp, 8
 * 00000001401C4606: mov     eax, 0DADAh
 * 00000001401C460B: lfence
 * 00000001401C460E: or      byte ptr gs:856h, 2
 * 00000001401C4617: sti
 * 00000001401C4618: mov     r14, [rsi+0B8h]
 * 00000001401C461F: cmp     r14, [rdi+0B8h]
 * 00000001401C4626: jz      loc_1401C46E3
 * 00000001401C462C: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001401C4633: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001401C463A: lock bts [r14+rax*8+118h], rcx
 * 00000001401C4644: mov     rcx, [r14+28h]
 * 00000001401C4648: test    cs:KiKvaShadow, 1
 * 00000001401C464F: jz      short loc_1401C468A
 * 00000001401C4651: cli
 * 00000001401C4652: bt      ecx, 1
 * 00000001401C4656: jnb     short loc_1401C4664
 * 00000001401C4658: bts     rcx, 3Fh ; '?'
 * 00000001401C465D: or      dword ptr [rbx+6E98h], 1
 * 00000001401C4664: mov     [rbx+6E80h], rcx
 * 00000001401C466B: btr     rcx, 3Fh ; '?'
 * 00000001401C4670: and     dword ptr [rbx+6E98h], 0FFFFFFFDh
 * 00000001401C4677: bt      dword ptr [r14+280h], 0
 * 00000001401C4680: jnb     short loc_1401C4689
 * 00000001401C4682: xor     dword ptr [rbx+6E98h], 3
 * 00000001401C4689: sti
 * 00000001401C468A: test    cs:HvlEnlightenments, 1
 * 00000001401C4694: jz      short loc_1401C469D
 * 00000001401C4696: call    HvlSwitchVirtualAddressSpace
 * 00000001401C469B: jmp     short loc_1401C46C4
 * 00000001401C469D: mov     cr3, rcx
 * 00000001401C46A0: test    cs:KiKvaShadow, 1
 * 00000001401C46A7: jz      short loc_1401C46C4
 * 00000001401C46A9: bt      ecx, 1
 * 00000001401C46AD: jb      short loc_1401C46C4
 * 00000001401C46AF: mov     rax, cr4
 * 00000001401C46B2: xor     rax, 80h
 * 00000001401C46B8: mov     cr4, rax
 * 00000001401C46BB: xor     rax, 80h
 * 00000001401C46C1: mov     cr4, rax
 * 00000001401C46C4: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001401C46CB: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001401C46D2: mov     rdx, [rdi+0B8h]
 * 00000001401C46D9: lock btr [rdx+rax*8+118h], rcx
 * 00000001401C46E3: mov     rax, [rsi+28h]
 * 00000001401C46E7: test    cs:KiKvaShadow, 1
 * 00000001401C46EE: jnz     short loc_1401C46FD
 * 00000001401C46F0: mov     r15, [rbx-178h]
 * 00000001401C46F7: mov     [r15+4], rax
 * 00000001401C46FB: jmp     short loc_1401C4704
 * 00000001401C46FD: mov     [rbx+6E88h], rax
 * 00000001401C4704: mov     [rbx+28h], rax
 * 00000001401C4708: test    rax, rax
 * 00000001401C470B: jge     loc_1401C4911
 * 00000001401C4711: cmp     cs:KiCpuTracingFlags, 0
 * 00000001401C4718: jnz     loc_1401C48BA
 * 00000001401C471E: mov     rcx, 0FFFFF78000000000h
 * 00000001401C4728: mov     rdx, [rdi+250h]
 * 00000001401C472F: and     rdx, [rcx+5F0h]
 * 00000001401C4736: or      rdx, [rsi+250h]
 * 00000001401C473D: mov     byte ptr [rdi+71h], 0
 * 00000001401C4741: mov     rcx, [rsi+60h]
 * 00000001401C4745: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001401C4749: mov     eax, edx
 * 00000001401C474B: jz      short loc_1401C4778
 * 00000001401C474D: shr     rdx, 20h
 * 00000001401C4751: bt      rbp, 29h ; ')'
 * 00000001401C4756: jnb     short loc_1401C475E
 * 00000001401C4758: test    al, 1
 * 00000001401C475A: jz      short loc_1401C475E
 * 00000001401C475C: fninit
 * 00000001401C475E: bt      rbp, 26h ; '&'
 * 00000001401C4763: jb      short loc_1401C4770
 * 00000001401C4765: bt      ebp, 17h
 * 00000001401C4769: jb      short loc_1401C4775
 * 00000001401C476B: fxrstor dword ptr [rcx]
 * 00000001401C476E: jmp     short loc_1401C4778
 * 00000001401C4770: xrstors byte ptr [rcx]
 * 00000001401C4773: jmp     short loc_1401C4778
 * 00000001401C4775: xrstor  byte ptr [rcx]
 * 00000001401C4778: ldmxcsr dword ptr [rcx+18h]
 * 00000001401C477C: test    eax, 100h
 * 00000001401C4781: jz      short loc_1401C4794
 * 00000001401C4783: cmp     cs:KiIptMsrMask, 0
 * 00000001401C478A: jz      short loc_1401C4794
 * 00000001401C478C: mov     rcx, rsi
 * 00000001401C478F: call    KiRestoreThreadIptState
 * 00000001401C4794: bt      dword ptr [rsi+74h], 0Ah
 * 00000001401C4799: jb      loc_1401C485C
 * 00000001401C479F: mov     rax, [rsi+220h]
 * 00000001401C47A6: cmp     qword ptr [rax+428h], 0
 * 00000001401C47AE: mov     eax, [rsi+7A0h]
 * 00000001401C47B4: jz      short loc_1401C47C1
 * 00000001401C47B6: mov     eax, [rsi+0F0h]
 * 00000001401C47BC: add     eax, 2000h
 * 00000001401C47C1: mov     rcx, [rbx-180h]
 * 00000001401C47C8: mov     [rcx+52h], ax
 * 00000001401C47CC: shr     eax, 10h
 * 00000001401C47CF: mov     [rcx+54h], al
 * 00000001401C47D2: mov     [rcx+57h], ah
 * 00000001401C47D5: mov     eax, 53h ; 'S'
 * 00000001401C47DA: mov     fs, eax
 * 00000001401C47DC: mov     eax, [rsi+7A0h]
 * 00000001401C47E2: mov     edx, [rsi+7A4h]
 * 00000001401C47E8: mov     ecx, 0C0000100h
 * 00000001401C47ED: wrmsr
 * 00000001401C47EF: mov     eax, ds
 * 00000001401C47F1: mov     edx, es
 * 00000001401C47F3: and     eax, edx
 * 00000001401C47F5: mov     edx, gs
 * 00000001401C47F7: and     eax, edx
 * 00000001401C47F9: cmp     ax, 2Bh ; '+'
 * 00000001401C47FD: jz      short loc_1401C4812
 * 00000001401C47FF: mov     edx, 2Bh ; '+'
 * 00000001401C4804: mov     ds, edx
 * 00000001401C4806: mov     es, edx
 * 00000001401C4808: cli
 * 00000001401C4809: swapgs
 * 00000001401C480C: mov     gs, edx
 * 00000001401C480E: swapgs
 * 00000001401C4811: sti
 * 00000001401C4812: mov     rax, [rsi+0F0h]
 * 00000001401C4819: mov     edx, [rsi+0F4h]
 * 00000001401C481F: mov     [rbx-150h], rax
 * 00000001401C4826: test    byte ptr [rsi+3], 84h
 * 00000001401C482A: jz      short loc_1401C4855
 * 00000001401C482C: test    byte ptr [rsi+3], 80h
 * 00000001401C4830: jz      short loc_1401C4849
 * 00000001401C4832: mov     r8, [rsi+1F0h]
 * 00000001401C4839: mov     eax, [r8+80h]
 * 00000001401C4840: mov     edx, [r8+84h]
 * 00000001401C4847: jmp     short loc_1401C4855
 * 00000001401C4849: mov     eax, [rsi+7A8h]
 * 00000001401C484F: mov     edx, [rsi+7ACh]
 * 00000001401C4855: mov     ecx, 0C0000102h
 * 00000001401C485A: wrmsr
 * 00000001401C485C: test    dword ptr [rbx+2E6Ch], 10001h
 * 00000001401C4866: jnz     loc_1401C48F8
 * 00000001401C486C: inc     dword ptr [rsi+154h]
 * 00000001401C4872: cmp     byte ptr [rsi+0C1h], 1
 * 00000001401C4879: jnz     short loc_1401C489E
 * 00000001401C487B: movzx   ax, [rsp+38h+var_10]
 * 00000001401C4881: or      ax, [rsi+1E6h]
 * 00000001401C4888: jz      short loc_1401C489E
 * 00000001401C488A: mov     ecx, 1
 * 00000001401C488F: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C4896: nop     dword ptr [rax+rax+00h]
 * 00000001401C489B: or      rcx, rsp
 * 00000001401C489E: setz    al
 * 00000001401C48A1: add     rsp, 30h
 * 00000001401C48A5: pop     rbp
 * 00000001401C48A6: retn
 * 00000001401C48A7: mov     rcx, rbx
 * 00000001401C48AA: mov     rdx, rsi
 * 00000001401C48AD: mov     r8, r12
 * 00000001401C48B0: call    KiBeginThreadAccountingPeriod
 * 00000001401C48B5: jmp     loc_1401C432D
 * 00000001401C48BA: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001401C48C4: jz      short loc_1401C48D1
 * 00000001401C48C6: mov     rcx, rdi
 * 00000001401C48C9: mov     rdx, rsi
 * 00000001401C48CC: call    EtwTraceContextSwap
 * 00000001401C48D1: test    cs:KiCpuTracingFlags, 2
 * 00000001401C48DB: jz      short loc_1401C48E2
 * 00000001401C48DD: call    KiClearLastBranchRecordStack
 * 00000001401C48E2: test    cs:KiCpuTracingFlags, 4
 * 00000001401C48EC: jz      short loc_1401C48F3
 * 00000001401C48EE: call    KiResetProcessorTraceBuffer
 * 00000001401C48F3: jmp     loc_1401C471E
 * 00000001401C48F8: xor     r9, r9; BugCheckParameter3
 * 00000001401C48FB: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001401C4900: mov     r8, rsi; BugCheckParameter2
 * 00000001401C4903: mov     rdx, rdi; BugCheckParameter1
 * 00000001401C4906: mov     ecx, 0B8h; BugCheckCode
 * 00000001401C490B: call    KeBugCheckEx
 * 00000001401C4911: xor     r9, r9; BugCheckParameter3
 * 00000001401C4914: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001401C4919: mov     r8, rsi; BugCheckParameter2
 * 00000001401C491C: mov     rdx, rdi; BugCheckParameter1
 * 00000001401C491F: mov     ecx, 1CEh; BugCheckCode
 * 00000001401C4924: call    KeBugCheckEx
 * 00000001401C4929: xor     ebp, ebp
 * 00000001401C492B: inc     ebp
 * 00000001401C492D: test    cs:HvlLongSpinCountMask, ebp
 * 00000001401C4933: jnz     short loc_1401C4951
 * 00000001401C4935: test    cs:HvlEnlightenments, 40h
 * 00000001401C493F: jz      short loc_1401C4951
 * 00000001401C4941: call    KiCheckVpBackingLongSpinWaitHypercall
 * 00000001401C4946: test    al, al
 * 00000001401C4948: jz      short loc_1401C4951
 * 00000001401C494A: mov     ecx, ebp
 * 00000001401C494C: call    HvlNotifyLongSpinWait
 * 00000001401C4951: pause
 * 00000001401C4953: cmp     byte ptr [rsi+71h], 0
 * 00000001401C4957: jz      loc_1401C42D8
 * 00000001401C495D: jmp     short loc_1401C492B
 */
