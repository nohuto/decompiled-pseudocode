/*
 * XREFs of KiRaiseAssertion @ 0x1401D4100
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140350D80 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1401D4100 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1401D4100
 * Reason: Hex-Rays returned no pseudocode for 0x1401D4100
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D4100: sub     qword ptr [rsp+0], 2
 * 00000001401D4105: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401D410B: jnz     short loc_1401D4112
 * 00000001401D410D: and     dword ptr [rsp+4], 0
 * 00000001401D4112: sub     rsp, 8
 * 00000001401D4116: push    rbp
 * 00000001401D4117: sub     rsp, 158h
 * 00000001401D411E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401D4126: mov     byte ptr [rbp-55h], 1
 * 00000001401D412A: mov     [rbp-50h], rax
 * 00000001401D412E: mov     [rbp-48h], rcx
 * 00000001401D4132: mov     [rbp-40h], rdx
 * 00000001401D4136: mov     [rbp-38h], r8
 * 00000001401D413A: mov     [rbp-30h], r9
 * 00000001401D413E: mov     [rbp-28h], r10
 * 00000001401D4142: mov     [rbp-20h], r11
 * 00000001401D4146: test    byte ptr [rbp+0F0h], 1
 * 00000001401D414D: jnz     short loc_1401D417C
 * 00000001401D414F: lfence
 * 00000001401D4152: test    byte ptr gs:278h, 1
 * 00000001401D415B: jnz     short loc_1401D4165
 * 00000001401D415D: lfence
 * 00000001401D4160: jmp     loc_1401D43C1
 * 00000001401D4165: movzx   eax, byte ptr gs:27Ah
 * 00000001401D416E: mov     ecx, 48h ; 'H'
 * 00000001401D4173: xor     edx, edx
 * 00000001401D4175: wrmsr
 * 00000001401D4177: jmp     loc_1401D43C1
 * 00000001401D417C: test    cs:KiKvaShadow, 1
 * 00000001401D4183: jnz     short loc_1401D4188
 * 00000001401D4185: swapgs
 * 00000001401D4188: lfence
 * 00000001401D418B: mov     r10, gs:188h
 * 00000001401D4194: mov     rcx, gs:188h
 * 00000001401D419D: mov     rcx, [rcx+220h]
 * 00000001401D41A4: mov     rcx, [rcx+860h]
 * 00000001401D41AB: mov     gs:270h, rcx
 * 00000001401D41B4: mov     cl, gs:850h
 * 00000001401D41BC: mov     gs:851h, cl
 * 00000001401D41C4: mov     cl, gs:278h
 * 00000001401D41CC: mov     gs:852h, cl
 * 00000001401D41D4: movzx   eax, byte ptr gs:27Bh
 * 00000001401D41DD: cmp     gs:27Ah, al
 * 00000001401D41E5: jz      short loc_1401D41F8
 * 00000001401D41E7: mov     gs:27Ah, al
 * 00000001401D41EF: mov     ecx, 48h ; 'H'
 * 00000001401D41F4: xor     edx, edx
 * 00000001401D41F6: wrmsr
 * 00000001401D41F8: movzx   edx, byte ptr gs:278h
 * 00000001401D4201: test    edx, 8
 * 00000001401D4207: jz      short loc_1401D421C
 * 00000001401D4209: mov     eax, 1
 * 00000001401D420E: xor     edx, edx
 * 00000001401D4210: mov     ecx, 49h ; 'I'
 * 00000001401D4215: wrmsr
 * 00000001401D4217: jmp     loc_1401D435A
 * 00000001401D421C: test    edx, 2
 * 00000001401D4222: jz      loc_1401D4357
 * 00000001401D4228: test    byte ptr gs:279h, 4
 * 00000001401D4231: jnz     loc_1401D4357
 * 00000001401D4237: call    loc_1401D434A
 * 00000001401D423C: add     rsp, 8
 * 00000001401D4240: call    loc_1401D4353
 * 00000001401D4245: add     rsp, 8
 * 00000001401D4249: call    loc_1401D423C
 * 00000001401D424E: add     rsp, 8
 * 00000001401D4252: call    loc_1401D4245
 * 00000001401D4257: add     rsp, 8
 * 00000001401D425B: call    loc_1401D424E
 * 00000001401D4260: add     rsp, 8
 * 00000001401D4264: call    loc_1401D4257
 * 00000001401D4269: add     rsp, 8
 * 00000001401D426D: call    loc_1401D4260
 * 00000001401D4272: add     rsp, 8
 * 00000001401D4276: call    loc_1401D4269
 * 00000001401D427B: add     rsp, 8
 * 00000001401D427F: call    loc_1401D4272
 * 00000001401D4284: add     rsp, 8
 * 00000001401D4288: call    loc_1401D427B
 * 00000001401D428D: add     rsp, 8
 * 00000001401D4291: call    loc_1401D4284
 * 00000001401D4296: add     rsp, 8
 * 00000001401D429A: call    loc_1401D428D
 * 00000001401D429F: add     rsp, 8
 * 00000001401D42A3: call    loc_1401D4296
 * 00000001401D42A8: add     rsp, 8
 * 00000001401D42AC: call    loc_1401D429F
 * 00000001401D42B1: add     rsp, 8
 * 00000001401D42B5: call    loc_1401D42A8
 * 00000001401D42BA: add     rsp, 8
 * 00000001401D42BE: call    loc_1401D42B1
 * 00000001401D42C3: add     rsp, 8
 * 00000001401D42C7: call    loc_1401D42BA
 * 00000001401D42CC: add     rsp, 8
 * 00000001401D42D0: call    loc_1401D42C3
 * 00000001401D42D5: add     rsp, 8
 * 00000001401D42D9: call    loc_1401D42CC
 * 00000001401D42DE: add     rsp, 8
 * 00000001401D42E2: call    loc_1401D42D5
 * 00000001401D42E7: add     rsp, 8
 * 00000001401D42EB: call    loc_1401D42DE
 * 00000001401D42F0: add     rsp, 8
 * 00000001401D42F4: call    loc_1401D42E7
 * 00000001401D42F9: add     rsp, 8
 * 00000001401D42FD: call    loc_1401D42F0
 * 00000001401D4302: add     rsp, 8
 * 00000001401D4306: call    loc_1401D42F9
 * 00000001401D430B: add     rsp, 8
 * 00000001401D430F: call    loc_1401D4302
 * 00000001401D4314: add     rsp, 8
 * 00000001401D4318: call    loc_1401D430B
 * 00000001401D431D: add     rsp, 8
 * 00000001401D4321: call    loc_1401D4314
 * 00000001401D4326: add     rsp, 8
 * 00000001401D432A: call    loc_1401D431D
 * 00000001401D432F: add     rsp, 8
 * 00000001401D4333: call    loc_1401D4326
 * 00000001401D4338: add     rsp, 8
 * 00000001401D433C: call    loc_1401D432F
 * 00000001401D4341: add     rsp, 8
 * 00000001401D4345: call    loc_1401D4338
 * 00000001401D434A: add     rsp, 8
 * 00000001401D434E: call    loc_1401D4341
 * 00000001401D4353: add     rsp, 8
 * 00000001401D4357: lfence
 * 00000001401D435A: mov     byte ptr gs:853h, 0
 * 00000001401D4363: test    byte ptr [r10+3], 80h
 * 00000001401D4368: jz      short loc_1401D43AC
 * 00000001401D436A: mov     ecx, 0C0000102h
 * 00000001401D436F: rdmsr
 * 00000001401D4371: shl     rdx, 20h
 * 00000001401D4375: or      rax, rdx
 * 00000001401D4378: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D437F: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D4387: cmp     [r10+0F0h], rax
 * 00000001401D438E: jz      short loc_1401D43AC
 * 00000001401D4390: mov     rdx, [r10+1F0h]
 * 00000001401D4397: bts     dword ptr [r10+74h], 8
 * 00000001401D439D: dec     word ptr [r10+1E6h]
 * 00000001401D43A5: mov     [rdx+80h], rax
 * 00000001401D43AC: test    byte ptr [r10+3], 3
 * 00000001401D43B1: mov     word ptr [rbp+80h], 0
 * 00000001401D43BA: jz      short loc_1401D43C1
 * 00000001401D43BC: call    KiSaveDebugRegisterState
 * 00000001401D43C1: cld
 * 00000001401D43C2: stmxcsr dword ptr [rbp-54h]
 * 00000001401D43C6: ldmxcsr dword ptr gs:180h
 * 00000001401D43CF: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D43D3: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401D43D7: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401D43DB: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401D43DF: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401D43E3: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401D43E7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D43EE: jz      short loc_1401D43FC
 * 00000001401D43F0: test    byte ptr [rbp+0F0h], 1
 * 00000001401D43F7: jz      short loc_1401D43FC
 * 00000001401D43F9: stac
 * 00000001401D43FC: test    dword ptr [rbp+0F8h], 200h
 * 00000001401D4406: jz      short loc_1401D4409
 * 00000001401D4408: sti
 * 00000001401D4409: mov     ecx, 0C0000420h
 * 00000001401D440E: xor     edx, edx
 * 00000001401D4410: mov     r8, [rbp+0E8h]
 * 00000001401D4417: call    KiExceptionDispatch
 * 00000001401D441C: nop
 * 00000001401D441D: retn
 */
