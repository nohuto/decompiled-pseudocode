// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x1401C4420
 * Callers:
 *     KiIdleLoop @ 0x1401C0680 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x1401C4240 (KxDispatchInterrupt.c)
 * Callees:
 *     KiUpdateSpeculationControl @ 0x1400F83B0 (KiUpdateSpeculationControl.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     EtwTraceContextSwap @ 0x14017CA40 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     SwapContext @ 0x1401C4420 (SwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402798B0 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x14028D940 (KiClearLastBranchRecordStack.c)
 *     KiResetProcessorTraceBuffer @ 0x14028F810 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x140294AE0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x140294C20 (KiSaveThreadIptState.c)
 *     KeCheckAndApplyBamQos @ 0x140297E80 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1402984C0 (KiCheckAndApplyCacheIsolation.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1401C4420
 * Reason: Hex-Rays returned no pseudocode for 0x1401C4420
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C4420: push    rbp
 * 00000001401C4422: sub     rsp, 30h
 * 00000001401C4426: prefetchw byte ptr [rsi+71h]
 * 00000001401C442A: mov     [rsp+38h+var_10], cl
 * 00000001401C442E: cmp     byte ptr [rsi+71h], 0
 * 00000001401C4432: jnz     loc_1401C4A89
 * 00000001401C4438: mov     byte ptr [rsi+71h], 1
 * 00000001401C443C: cli
 * 00000001401C443D: rdtsc
 * 00000001401C443F: shl     rdx, 20h
 * 00000001401C4443: or      rax, rdx
 * 00000001401C4446: sub     rax, [rbx+5BC0h]
 * 00000001401C444D: add     [rbx+5C38h], rax
 * 00000001401C4454: add     [rbx+5BC0h], rax
 * 00000001401C445B: mov     r12, rax
 * 00000001401C445E: test    byte ptr [rbx+6], 0FFh
 * 00000001401C4462: jz      short loc_1401C447F
 * 00000001401C4464: and     byte ptr [rbx+6], 0
 * 00000001401C4468: cmp     [rbx+18h], rsi
 * 00000001401C446C: jz      short loc_1401C447F
 * 00000001401C446E: mov     ecx, 2
 * 00000001401C4473: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C447A: nop     dword ptr [rax+rax+00h]
 * 00000001401C447F: test    byte ptr [rsi+2], 36h
 * 00000001401C4483: jnz     loc_1401C4A07
 * 00000001401C4489: dec     byte ptr [rbx+20h]
 * 00000001401C448C: sti
 * 00000001401C448D: inc     dword ptr [rbx+2D3Ch]
 * 00000001401C4493: mov     rbp, cs:KeFeatureBits
 * 00000001401C449A: cmp     cs:KiCacheIsoBitmap, 0
 * 00000001401C44A1: jz      short loc_1401C44B5
 * 00000001401C44A3: bt      rbp, 2Ch ; ','
 * 00000001401C44A8: jnb     short loc_1401C44B5
 * 00000001401C44AA: mov     rcx, rbx
 * 00000001401C44AD: mov     rdx, rsi
 * 00000001401C44B0: call    KiCheckAndApplyCacheIsolation
 * 00000001401C44B5: cmp     [rbx+18h], rsi
 * 00000001401C44B9: jz      short loc_1401C44D8
 * 00000001401C44BB: mov     ecx, [rsi+78h]
 * 00000001401C44BE: mov     eax, [rbx+0ECh]
 * 00000001401C44C4: xor     eax, ecx
 * 00000001401C44C6: test    eax, 3
 * 00000001401C44CB: jz      short loc_1401C44D8
 * 00000001401C44CD: mov     rcx, rbx
 * 00000001401C44D0: mov     rdx, rsi
 * 00000001401C44D3: call    KeCheckAndApplyBamQos
 * 00000001401C44D8: mov     rdx, [rdi+250h]
 * 00000001401C44DF: mov     rcx, [rdi+60h]
 * 00000001401C44E3: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001401C44E7: mov     eax, edx
 * 00000001401C44E9: jz      short loc_1401C4515
 * 00000001401C44EB: shr     rdx, 20h
 * 00000001401C44EF: bt      rbp, 26h ; '&'
 * 00000001401C44F4: jb      short loc_1401C450D
 * 00000001401C44F6: bt      rbp, 0Fh
 * 00000001401C44FB: jb      short loc_1401C4512
 * 00000001401C44FD: bt      ebp, 17h
 * 00000001401C4501: jnb     short loc_1401C4508
 * 00000001401C4503: xsave   byte ptr [rcx]
 * 00000001401C4506: jmp     short loc_1401C4515
 * 00000001401C4508: fxsave  dword ptr [rcx]
 * 00000001401C450B: jmp     short loc_1401C4515
 * 00000001401C450D: xsaves  byte ptr [rcx]
 * 00000001401C4510: jmp     short loc_1401C4515
 * 00000001401C4512: xsaveopt byte ptr [rcx]
 * 00000001401C4515: stmxcsr dword ptr [rcx+18h]
 * 00000001401C4519: test    eax, 100h
 * 00000001401C451E: jz      short loc_1401C4531
 * 00000001401C4520: cmp     cs:KiIptMsrMask, 0
 * 00000001401C4527: jz      short loc_1401C4531
 * 00000001401C4529: mov     rcx, rdi
 * 00000001401C452C: call    KiSaveThreadIptState
 * 00000001401C4531: mov     [rdi+58h], rsp
 * 00000001401C4535: mov     rsp, [rsi+58h]
 * 00000001401C4539: test    byte ptr [rdi+3], 80h
 * 00000001401C453D: jz      short loc_1401C456A
 * 00000001401C453F: mov     ecx, 0C0000102h
 * 00000001401C4544: rdmsr
 * 00000001401C4546: shl     rdx, 20h
 * 00000001401C454A: or      rax, rdx
 * 00000001401C454D: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C4554: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C455C: mov     r14, [rdi+1F0h]
 * 00000001401C4563: mov     [r14+80h], rax
 * 00000001401C456A: mov     rax, [rdi+220h]
 * 00000001401C4571: cmp     qword ptr [rax+428h], 0
 * 00000001401C4579: jz      short loc_1401C458E
 * 00000001401C457B: mov     ecx, 0C0000100h
 * 00000001401C4580: rdmsr
 * 00000001401C4582: mov     [rdi+7A0h], eax
 * 00000001401C4588: mov     [rdi+7A4h], edx
 * 00000001401C458E: btr     dword ptr gs:856h, 0
 * 00000001401C4598: jnb     short loc_1401C459E
 * 00000001401C459A: or      byte ptr [rdi+7Fh], 2
 * 00000001401C459E: btr     dword ptr [rsi+7Fh], 1
 * 00000001401C45A3: jnb     short loc_1401C45AE
 * 00000001401C45A5: or      byte ptr gs:856h, 1
 * 00000001401C45AE: mov     rcx, [rsi+220h]
 * 00000001401C45B5: or      cl, [rbx+6ECh]
 * 00000001401C45BB: and     cl, 0C2h
 * 00000001401C45BE: cmp     rcx, [rdi+220h]
 * 00000001401C45C5: jz      short loc_1401C45D4
 * 00000001401C45C7: and     cl, 0C0h
 * 00000001401C45CA: call    KiUpdateSpeculationControl
 * 00000001401C45CF: jmp     loc_1401C4778
 * 00000001401C45D4: movzx   ecx, byte ptr gs:856h
 * 00000001401C45DD: and     cx, 3
 * 00000001401C45E1: cmp     cx, 1
 * 00000001401C45E5: jnz     loc_1401C4778
 * 00000001401C45EB: cli
 * 00000001401C45EC: movzx   eax, word ptr gs:852h
 * 00000001401C45F5: cmp     gs:864h, ax
 * 00000001401C45FE: jz      short loc_1401C4612
 * 00000001401C4600: mov     gs:864h, ax
 * 00000001401C4609: mov     ecx, 48h ; 'H'
 * 00000001401C460E: xor     edx, edx
 * 00000001401C4610: wrmsr
 * 00000001401C4612: movzx   edx, byte ptr gs:854h
 * 00000001401C461B: test    edx, 10h
 * 00000001401C4621: jz      short loc_1401C463A
 * 00000001401C4623: mov     eax, 1
 * 00000001401C4628: xor     edx, edx
 * 00000001401C462A: mov     ecx, 49h ; 'I'
 * 00000001401C462F: wrmsr
 * 00000001401C4631: movzx   edx, byte ptr gs:854h
 * 00000001401C463A: test    edx, 40h
 * 00000001401C4640: jz      loc_1401C476B
 * 00000001401C4646: call    loc_1401C4759
 * 00000001401C464B: add     rsp, 8
 * 00000001401C464F: call    loc_1401C4762
 * 00000001401C4654: add     rsp, 8
 * 00000001401C4658: call    loc_1401C464B
 * 00000001401C465D: add     rsp, 8
 * 00000001401C4661: call    loc_1401C4654
 * 00000001401C4666: add     rsp, 8
 * 00000001401C466A: call    loc_1401C465D
 * 00000001401C466F: add     rsp, 8
 * 00000001401C4673: call    loc_1401C4666
 * 00000001401C4678: add     rsp, 8
 * 00000001401C467C: call    loc_1401C466F
 * 00000001401C4681: add     rsp, 8
 * 00000001401C4685: call    loc_1401C4678
 * 00000001401C468A: add     rsp, 8
 * 00000001401C468E: call    loc_1401C4681
 * 00000001401C4693: add     rsp, 8
 * 00000001401C4697: call    loc_1401C468A
 * 00000001401C469C: add     rsp, 8
 * 00000001401C46A0: call    loc_1401C4693
 * 00000001401C46A5: add     rsp, 8
 * 00000001401C46A9: call    loc_1401C469C
 * 00000001401C46AE: add     rsp, 8
 * 00000001401C46B2: call    loc_1401C46A5
 * 00000001401C46B7: add     rsp, 8
 * 00000001401C46BB: call    loc_1401C46AE
 * 00000001401C46C0: add     rsp, 8
 * 00000001401C46C4: call    loc_1401C46B7
 * 00000001401C46C9: add     rsp, 8
 * 00000001401C46CD: call    loc_1401C46C0
 * 00000001401C46D2: add     rsp, 8
 * 00000001401C46D6: call    loc_1401C46C9
 * 00000001401C46DB: add     rsp, 8
 * 00000001401C46DF: call    loc_1401C46D2
 * 00000001401C46E4: add     rsp, 8
 * 00000001401C46E8: call    loc_1401C46DB
 * 00000001401C46ED: add     rsp, 8
 * 00000001401C46F1: call    loc_1401C46E4
 * 00000001401C46F6: add     rsp, 8
 * 00000001401C46FA: call    loc_1401C46ED
 * 00000001401C46FF: add     rsp, 8
 * 00000001401C4703: call    loc_1401C46F6
 * 00000001401C4708: add     rsp, 8
 * 00000001401C470C: call    loc_1401C46FF
 * 00000001401C4711: add     rsp, 8
 * 00000001401C4715: call    loc_1401C4708
 * 00000001401C471A: add     rsp, 8
 * 00000001401C471E: call    loc_1401C4711
 * 00000001401C4723: add     rsp, 8
 * 00000001401C4727: call    loc_1401C471A
 * 00000001401C472C: add     rsp, 8
 * 00000001401C4730: call    loc_1401C4723
 * 00000001401C4735: add     rsp, 8
 * 00000001401C4739: call    loc_1401C472C
 * 00000001401C473E: add     rsp, 8
 * 00000001401C4742: call    loc_1401C4735
 * 00000001401C4747: add     rsp, 8
 * 00000001401C474B: call    loc_1401C473E
 * 00000001401C4750: add     rsp, 8
 * 00000001401C4754: call    loc_1401C4747
 * 00000001401C4759: add     rsp, 8
 * 00000001401C475D: call    loc_1401C4750
 * 00000001401C4762: add     rsp, 8
 * 00000001401C4766: mov     eax, 0DADAh
 * 00000001401C476B: lfence
 * 00000001401C476E: or      byte ptr gs:856h, 2
 * 00000001401C4777: sti
 * 00000001401C4778: mov     r14, [rsi+0B8h]
 * 00000001401C477F: cmp     r14, [rdi+0B8h]
 * 00000001401C4786: jz      loc_1401C4843
 * 00000001401C478C: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001401C4793: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001401C479A: lock bts [r14+rax*8+118h], rcx
 * 00000001401C47A4: mov     rcx, [r14+28h]
 * 00000001401C47A8: test    cs:KiKvaShadow, 1
 * 00000001401C47AF: jz      short loc_1401C47EA
 * 00000001401C47B1: cli
 * 00000001401C47B2: bt      ecx, 1
 * 00000001401C47B6: jnb     short loc_1401C47C4
 * 00000001401C47B8: bts     rcx, 3Fh ; '?'
 * 00000001401C47BD: or      dword ptr [rbx+6E98h], 1
 * 00000001401C47C4: mov     [rbx+6E80h], rcx
 * 00000001401C47CB: btr     rcx, 3Fh ; '?'
 * 00000001401C47D0: and     dword ptr [rbx+6E98h], 0FFFFFFFDh
 * 00000001401C47D7: bt      dword ptr [r14+280h], 0
 * 00000001401C47E0: jnb     short loc_1401C47E9
 * 00000001401C47E2: xor     dword ptr [rbx+6E98h], 3
 * 00000001401C47E9: sti
 * 00000001401C47EA: test    cs:HvlEnlightenments, 1
 * 00000001401C47F4: jz      short loc_1401C47FD
 * 00000001401C47F6: call    HvlSwitchVirtualAddressSpace
 * 00000001401C47FB: jmp     short loc_1401C4824
 * 00000001401C47FD: mov     cr3, rcx
 * 00000001401C4800: test    cs:KiKvaShadow, 1
 * 00000001401C4807: jz      short loc_1401C4824
 * 00000001401C4809: bt      ecx, 1
 * 00000001401C480D: jb      short loc_1401C4824
 * 00000001401C480F: mov     rax, cr4
 * 00000001401C4812: xor     rax, 80h
 * 00000001401C4818: mov     cr4, rax
 * 00000001401C481B: xor     rax, 80h
 * 00000001401C4821: mov     cr4, rax
 * 00000001401C4824: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001401C482B: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001401C4832: mov     rdx, [rdi+0B8h]
 * 00000001401C4839: lock btr [rdx+rax*8+118h], rcx
 * 00000001401C4843: mov     rax, [rsi+28h]
 * 00000001401C4847: test    cs:KiKvaShadow, 1
 * 00000001401C484E: jnz     short loc_1401C485D
 * 00000001401C4850: mov     r15, [rbx-178h]
 * 00000001401C4857: mov     [r15+4], rax
 * 00000001401C485B: jmp     short loc_1401C4864
 * 00000001401C485D: mov     [rbx+6E88h], rax
 * 00000001401C4864: mov     [rbx+28h], rax
 * 00000001401C4868: test    rax, rax
 * 00000001401C486B: jge     loc_1401C4A71
 * 00000001401C4871: cmp     cs:KiCpuTracingFlags, 0
 * 00000001401C4878: jnz     loc_1401C4A1A
 * 00000001401C487E: mov     rcx, 0FFFFF78000000000h
 * 00000001401C4888: mov     rdx, [rdi+250h]
 * 00000001401C488F: and     rdx, [rcx+5F0h]
 * 00000001401C4896: or      rdx, [rsi+250h]
 * 00000001401C489D: mov     byte ptr [rdi+71h], 0
 * 00000001401C48A1: mov     rcx, [rsi+60h]
 * 00000001401C48A5: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001401C48A9: mov     eax, edx
 * 00000001401C48AB: jz      short loc_1401C48D8
 * 00000001401C48AD: shr     rdx, 20h
 * 00000001401C48B1: bt      rbp, 29h ; ')'
 * 00000001401C48B6: jnb     short loc_1401C48BE
 * 00000001401C48B8: test    al, 1
 * 00000001401C48BA: jz      short loc_1401C48BE
 * 00000001401C48BC: fninit
 * 00000001401C48BE: bt      rbp, 26h ; '&'
 * 00000001401C48C3: jb      short loc_1401C48D0
 * 00000001401C48C5: bt      ebp, 17h
 * 00000001401C48C9: jb      short loc_1401C48D5
 * 00000001401C48CB: fxrstor dword ptr [rcx]
 * 00000001401C48CE: jmp     short loc_1401C48D8
 * 00000001401C48D0: xrstors byte ptr [rcx]
 * 00000001401C48D3: jmp     short loc_1401C48D8
 * 00000001401C48D5: xrstor  byte ptr [rcx]
 * 00000001401C48D8: ldmxcsr dword ptr [rcx+18h]
 * 00000001401C48DC: test    eax, 100h
 * 00000001401C48E1: jz      short loc_1401C48F4
 * 00000001401C48E3: cmp     cs:KiIptMsrMask, 0
 * 00000001401C48EA: jz      short loc_1401C48F4
 * 00000001401C48EC: mov     rcx, rsi
 * 00000001401C48EF: call    KiRestoreThreadIptState
 * 00000001401C48F4: bt      dword ptr [rsi+74h], 0Ah
 * 00000001401C48F9: jb      loc_1401C49BC
 * 00000001401C48FF: mov     rax, [rsi+220h]
 * 00000001401C4906: cmp     qword ptr [rax+428h], 0
 * 00000001401C490E: mov     eax, [rsi+7A0h]
 * 00000001401C4914: jz      short loc_1401C4921
 * 00000001401C4916: mov     eax, [rsi+0F0h]
 * 00000001401C491C: add     eax, 2000h
 * 00000001401C4921: mov     rcx, [rbx-180h]
 * 00000001401C4928: mov     [rcx+52h], ax
 * 00000001401C492C: shr     eax, 10h
 * 00000001401C492F: mov     [rcx+54h], al
 * 00000001401C4932: mov     [rcx+57h], ah
 * 00000001401C4935: mov     eax, 53h ; 'S'
 * 00000001401C493A: mov     fs, eax
 * 00000001401C493C: mov     eax, [rsi+7A0h]
 * 00000001401C4942: mov     edx, [rsi+7A4h]
 * 00000001401C4948: mov     ecx, 0C0000100h
 * 00000001401C494D: wrmsr
 * 00000001401C494F: mov     eax, ds
 * 00000001401C4951: mov     edx, es
 * 00000001401C4953: and     eax, edx
 * 00000001401C4955: mov     edx, gs
 * 00000001401C4957: and     eax, edx
 * 00000001401C4959: cmp     ax, 2Bh ; '+'
 * 00000001401C495D: jz      short loc_1401C4972
 * 00000001401C495F: mov     edx, 2Bh ; '+'
 * 00000001401C4964: mov     ds, edx
 * 00000001401C4966: mov     es, edx
 * 00000001401C4968: cli
 * 00000001401C4969: swapgs
 * 00000001401C496C: mov     gs, edx
 * 00000001401C496E: swapgs
 * 00000001401C4971: sti
 * 00000001401C4972: mov     rax, [rsi+0F0h]
 * 00000001401C4979: mov     edx, [rsi+0F4h]
 * 00000001401C497F: mov     [rbx-150h], rax
 * 00000001401C4986: test    byte ptr [rsi+3], 84h
 * 00000001401C498A: jz      short loc_1401C49B5
 * 00000001401C498C: test    byte ptr [rsi+3], 80h
 * 00000001401C4990: jz      short loc_1401C49A9
 * 00000001401C4992: mov     r8, [rsi+1F0h]
 * 00000001401C4999: mov     eax, [r8+80h]
 * 00000001401C49A0: mov     edx, [r8+84h]
 * 00000001401C49A7: jmp     short loc_1401C49B5
 * 00000001401C49A9: mov     eax, [rsi+7A8h]
 * 00000001401C49AF: mov     edx, [rsi+7ACh]
 * 00000001401C49B5: mov     ecx, 0C0000102h
 * 00000001401C49BA: wrmsr
 * 00000001401C49BC: test    dword ptr [rbx+2E6Ch], 10001h
 * 00000001401C49C6: jnz     loc_1401C4A58
 * 00000001401C49CC: inc     dword ptr [rsi+154h]
 * 00000001401C49D2: cmp     byte ptr [rsi+0C1h], 1
 * 00000001401C49D9: jnz     short loc_1401C49FE
 * 00000001401C49DB: movzx   ax, [rsp+38h+var_10]
 * 00000001401C49E1: or      ax, [rsi+1E6h]
 * 00000001401C49E8: jz      short loc_1401C49FE
 * 00000001401C49EA: mov     ecx, 1
 * 00000001401C49EF: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C49F6: nop     dword ptr [rax+rax+00h]
 * 00000001401C49FB: or      rcx, rsp
 * 00000001401C49FE: setz    al
 * 00000001401C4A01: add     rsp, 30h
 * 00000001401C4A05: pop     rbp
 * 00000001401C4A06: retn
 * 00000001401C4A07: mov     rcx, rbx
 * 00000001401C4A0A: mov     rdx, rsi
 * 00000001401C4A0D: mov     r8, r12
 * 00000001401C4A10: call    KiBeginThreadAccountingPeriod
 * 00000001401C4A15: jmp     loc_1401C448D
 * 00000001401C4A1A: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001401C4A24: jz      short loc_1401C4A31
 * 00000001401C4A26: mov     rcx, rdi
 * 00000001401C4A29: mov     rdx, rsi
 * 00000001401C4A2C: call    EtwTraceContextSwap
 * 00000001401C4A31: test    cs:KiCpuTracingFlags, 2
 * 00000001401C4A3B: jz      short loc_1401C4A42
 * 00000001401C4A3D: call    KiClearLastBranchRecordStack
 * 00000001401C4A42: test    cs:KiCpuTracingFlags, 4
 * 00000001401C4A4C: jz      short loc_1401C4A53
 * 00000001401C4A4E: call    KiResetProcessorTraceBuffer
 * 00000001401C4A53: jmp     loc_1401C487E
 * 00000001401C4A58: xor     r9, r9; BugCheckParameter3
 * 00000001401C4A5B: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001401C4A60: mov     r8, rsi; BugCheckParameter2
 * 00000001401C4A63: mov     rdx, rdi; BugCheckParameter1
 * 00000001401C4A66: mov     ecx, 0B8h; BugCheckCode
 * 00000001401C4A6B: call    KeBugCheckEx
 * 00000001401C4A71: xor     r9, r9; BugCheckParameter3
 * 00000001401C4A74: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001401C4A79: mov     r8, rsi; BugCheckParameter2
 * 00000001401C4A7C: mov     rdx, rdi; BugCheckParameter1
 * 00000001401C4A7F: mov     ecx, 1CEh; BugCheckCode
 * 00000001401C4A84: call    KeBugCheckEx
 * 00000001401C4A89: xor     ebp, ebp
 * 00000001401C4A8B: inc     ebp
 * 00000001401C4A8D: test    cs:HvlLongSpinCountMask, ebp
 * 00000001401C4A93: jnz     short loc_1401C4AB1
 * 00000001401C4A95: test    cs:HvlEnlightenments, 40h
 * 00000001401C4A9F: jz      short loc_1401C4AB1
 * 00000001401C4AA1: call    KiCheckVpBackingLongSpinWaitHypercall
 * 00000001401C4AA6: test    al, al
 * 00000001401C4AA8: jz      short loc_1401C4AB1
 * 00000001401C4AAA: mov     ecx, ebp
 * 00000001401C4AAC: call    HvlNotifyLongSpinWait
 * 00000001401C4AB1: pause
 * 00000001401C4AB3: cmp     byte ptr [rsi+71h], 0
 * 00000001401C4AB7: jz      loc_1401C4438
 * 00000001401C4ABD: jmp     short loc_1401C4A8B
 */
