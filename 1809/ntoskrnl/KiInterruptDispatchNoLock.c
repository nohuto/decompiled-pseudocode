/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1401BE0B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BDA70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1401BE0B0 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1401BE0B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401BE0B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BE0B0: mov     rdx, rsp
 * 00000001401BE0B3: mov     rcx, gs:6458h
 * 00000001401BE0BC: lea     rax, [rcx-6000h]
 * 00000001401BE0C3: cmp     rax, rsp
 * 00000001401BE0C6: ja      short loc_1401BE0CD
 * 00000001401BE0C8: cmp     rsp, rcx
 * 00000001401BE0CB: jb      short loc_1401BE0D9
 * 00000001401BE0CD: cmp     cs:KiBugCheckActive, 0
 * 00000001401BE0D4: jnz     short loc_1401BE0D9
 * 00000001401BE0D6: mov     rsp, rcx
 * 00000001401BE0D9: sub     rsp, 20h
 * 00000001401BE0DD: mov     [rsp+20h+var_10], rdx
 * 00000001401BE0E2: call    KiInterruptSubDispatchNoLock
 * 00000001401BE0E7: mov     rsp, [rsp+20h+var_10]
 * 00000001401BE0EC: mov     rcx, rsi
 * 00000001401BE0EF: call    HalPerformEndOfInterrupt_0
 * 00000001401BE0F4: mov     rcx, gs:20h
 * 00000001401BE0FD: cmp     byte ptr [rcx+20h], 1
 * 00000001401BE101: ja      short loc_1401BE17D
 * 00000001401BE103: rdtsc
 * 00000001401BE105: shl     rdx, 20h
 * 00000001401BE109: or      rax, rdx
 * 00000001401BE10C: sub     rax, [rcx+5BC0h]
 * 00000001401BE113: add     [rcx+5C38h], rax
 * 00000001401BE11A: add     [rcx+5BC0h], rax
 * 00000001401BE121: mov     r8, rax
 * 00000001401BE124: mov     rax, [rcx+8]
 * 00000001401BE128: test    byte ptr [rax+2], 72h
 * 00000001401BE12C: jz      short loc_1401BE141
 * 00000001401BE12E: xor     edx, edx
 * 00000001401BE130: call    KiBeginThreadAccountingPeriod
 * 00000001401BE135: mov     rcx, gs:20h
 * 00000001401BE13E: inc     byte ptr [rcx+20h]
 * 00000001401BE141: mov     dl, [rcx+6]
 * 00000001401BE144: and     byte ptr [rcx+6], 0
 * 00000001401BE148: cmp     byte ptr [rcx+7], 0
 * 00000001401BE14C: jnz     short loc_1401BE17D
 * 00000001401BE14E: test    dl, dl
 * 00000001401BE150: jz      short loc_1401BE17D
 * 00000001401BE152: cmp     byte ptr [rbp-57h], 2
 * 00000001401BE156: jnb     short loc_1401BE163
 * 00000001401BE158: and     byte ptr [rcx+20h], 0
 * 00000001401BE15C: call    KiDpcInterruptBypass
 * 00000001401BE161: jmp     short loc_1401BE180
 * 00000001401BE163: mov     ecx, 2
 * 00000001401BE168: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BE16F: nop     dword ptr [rax+rax+00h]
 * 00000001401BE174: mov     rcx, gs:20h
 * 00000001401BE17D: dec     byte ptr [rcx+20h]
 * 00000001401BE180: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BE184: cmp     cs:KiIrqlFlags, 0
 * 00000001401BE18B: jz      short loc_1401BE194
 * 00000001401BE18D: call    KzSetIrqlUnsafe
 * 00000001401BE192: jmp     short loc_1401BE198
 * 00000001401BE194: mov     cr8, rcx
 * 00000001401BE198: mov     rsi, [rbp+0D0h]
 * 00000001401BE19F: test    byte ptr [rbp+0F0h], 1
 * 00000001401BE1A6: jz      loc_1401BE43C
 * 00000001401BE1AC: mov     rcx, gs:188h
 * 00000001401BE1B5: test    byte ptr [rcx+0C2h], 3
 * 00000001401BE1BC: jz      short loc_1401BE1D9
 * 00000001401BE1BE: mov     ecx, 1
 * 00000001401BE1C3: mov     cr8, rcx
 * 00000001401BE1C7: sti
 * 00000001401BE1C8: call    KiInitiateUserApc
 * 00000001401BE1CD: cli
 * 00000001401BE1CE: mov     ecx, 0
 * 00000001401BE1D3: mov     cr8, rcx
 * 00000001401BE1D7: jmp     short loc_1401BE1AC
 * 00000001401BE1D9: test    byte ptr gs:86Ch, 2
 * 00000001401BE1E2: jz      short loc_1401BE1EB
 * 00000001401BE1E4: xor     ecx, ecx
 * 00000001401BE1E6: call    KiUpdateStibpPairing
 * 00000001401BE1EB: mov     rcx, gs:188h
 * 00000001401BE1F4: test    dword ptr [rcx], 8000000h
 * 00000001401BE1FA: jz      short loc_1401BE201
 * 00000001401BE1FC: call    KiRestoreSetContextState
 * 00000001401BE201: mov     rcx, gs:188h
 * 00000001401BE20A: test    dword ptr [rcx], 40010000h
 * 00000001401BE210: jz      short loc_1401BE226
 * 00000001401BE212: test    byte ptr [rcx+2], 1
 * 00000001401BE216: jz      short loc_1401BE226
 * 00000001401BE218: call    KiCopyCounters
 * 00000001401BE21D: mov     rcx, gs:188h
 * 00000001401BE226: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE22A: cmp     word ptr [rbp+80h], 0
 * 00000001401BE232: jz      short loc_1401BE239
 * 00000001401BE234: call    KiRestoreDebugRegisterState
 * 00000001401BE239: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE23D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE241: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE245: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE249: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE24D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE251: mov     r11, [rbp-20h]
 * 00000001401BE255: mov     r10, [rbp-28h]
 * 00000001401BE259: mov     r9, [rbp-30h]
 * 00000001401BE25D: mov     r8, [rbp-38h]
 * 00000001401BE261: mov     byte ptr gs:856h, 0
 * 00000001401BE26A: movzx   eax, word ptr gs:86Ah
 * 00000001401BE273: cmp     gs:864h, ax
 * 00000001401BE27C: jz      short loc_1401BE290
 * 00000001401BE27E: mov     gs:864h, ax
 * 00000001401BE287: mov     ecx, 48h ; 'H'
 * 00000001401BE28C: xor     edx, edx
 * 00000001401BE28E: wrmsr
 * 00000001401BE290: btr     word ptr gs:860h, 2
 * 00000001401BE29B: jnb     short loc_1401BE2AB
 * 00000001401BE29D: mov     eax, 1
 * 00000001401BE2A2: xor     edx, edx
 * 00000001401BE2A4: mov     ecx, 49h ; 'I'
 * 00000001401BE2A9: wrmsr
 * 00000001401BE2AB: btr     word ptr gs:860h, 5
 * 00000001401BE2B6: jnb     loc_1401BE3E1
 * 00000001401BE2BC: call    loc_1401BE3CF
 * 00000001401BE2C1: add     rsp, 8
 * 00000001401BE2C5: call    loc_1401BE3D8
 * 00000001401BE2CA: add     rsp, 8
 * 00000001401BE2CE: call    loc_1401BE2C1
 * 00000001401BE2D3: add     rsp, 8
 * 00000001401BE2D7: call    loc_1401BE2CA
 * 00000001401BE2DC: add     rsp, 8
 * 00000001401BE2E0: call    loc_1401BE2D3
 * 00000001401BE2E5: add     rsp, 8
 * 00000001401BE2E9: call    loc_1401BE2DC
 * 00000001401BE2EE: add     rsp, 8
 * 00000001401BE2F2: call    loc_1401BE2E5
 * 00000001401BE2F7: add     rsp, 8
 * 00000001401BE2FB: call    loc_1401BE2EE
 * 00000001401BE300: add     rsp, 8
 * 00000001401BE304: call    loc_1401BE2F7
 * 00000001401BE309: add     rsp, 8
 * 00000001401BE30D: call    loc_1401BE300
 * 00000001401BE312: add     rsp, 8
 * 00000001401BE316: call    loc_1401BE309
 * 00000001401BE31B: add     rsp, 8
 * 00000001401BE31F: call    loc_1401BE312
 * 00000001401BE324: add     rsp, 8
 * 00000001401BE328: call    loc_1401BE31B
 * 00000001401BE32D: add     rsp, 8
 * 00000001401BE331: call    loc_1401BE324
 * 00000001401BE336: add     rsp, 8
 * 00000001401BE33A: call    loc_1401BE32D
 * 00000001401BE33F: add     rsp, 8
 * 00000001401BE343: call    loc_1401BE336
 * 00000001401BE348: add     rsp, 8
 * 00000001401BE34C: call    loc_1401BE33F
 * 00000001401BE351: add     rsp, 8
 * 00000001401BE355: call    loc_1401BE348
 * 00000001401BE35A: add     rsp, 8
 * 00000001401BE35E: call    loc_1401BE351
 * 00000001401BE363: add     rsp, 8
 * 00000001401BE367: call    loc_1401BE35A
 * 00000001401BE36C: add     rsp, 8
 * 00000001401BE370: call    loc_1401BE363
 * 00000001401BE375: add     rsp, 8
 * 00000001401BE379: call    loc_1401BE36C
 * 00000001401BE37E: add     rsp, 8
 * 00000001401BE382: call    loc_1401BE375
 * 00000001401BE387: add     rsp, 8
 * 00000001401BE38B: call    loc_1401BE37E
 * 00000001401BE390: add     rsp, 8
 * 00000001401BE394: call    loc_1401BE387
 * 00000001401BE399: add     rsp, 8
 * 00000001401BE39D: call    loc_1401BE390
 * 00000001401BE3A2: add     rsp, 8
 * 00000001401BE3A6: call    loc_1401BE399
 * 00000001401BE3AB: add     rsp, 8
 * 00000001401BE3AF: call    loc_1401BE3A2
 * 00000001401BE3B4: add     rsp, 8
 * 00000001401BE3B8: call    loc_1401BE3AB
 * 00000001401BE3BD: add     rsp, 8
 * 00000001401BE3C1: call    loc_1401BE3B4
 * 00000001401BE3C6: add     rsp, 8
 * 00000001401BE3CA: call    loc_1401BE3BD
 * 00000001401BE3CF: add     rsp, 8
 * 00000001401BE3D3: call    loc_1401BE3C6
 * 00000001401BE3D8: add     rsp, 8
 * 00000001401BE3DC: mov     eax, 0DADAh
 * 00000001401BE3E1: test    word ptr gs:860h, 80h
 * 00000001401BE3EC: jz      short loc_1401BE3FA
 * 00000001401BE3EE: xor     eax, eax
 * 00000001401BE3F0: xor     edx, edx
 * 00000001401BE3F2: mov     ecx, 1
 * 00000001401BE3F7: div     rcx
 * 00000001401BE3FA: mov     rdx, [rbp-40h]
 * 00000001401BE3FE: mov     rcx, [rbp-48h]
 * 00000001401BE402: mov     rax, [rbp-50h]
 * 00000001401BE406: mov     rsp, rbp
 * 00000001401BE409: mov     rbp, [rbp+0D8h]
 * 00000001401BE410: add     rsp, 0E8h
 * 00000001401BE417: test    cs:KiKvaShadow, 1
 * 00000001401BE41E: jz      short loc_1401BE425
 * 00000001401BE420: jmp     KiKernelExit
 * 00000001401BE425: test    word ptr gs:860h, 100h
 * 00000001401BE430: jz      short loc_1401BE437
 * 00000001401BE432: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BE437: swapgs
 * 00000001401BE43A: iretq
 * 00000001401BE43C: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE440: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE444: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE448: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE44C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE450: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE454: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE458: mov     r11, [rbp-20h]
 * 00000001401BE45C: mov     r10, [rbp-28h]
 * 00000001401BE460: mov     r9, [rbp-30h]
 * 00000001401BE464: mov     r8, [rbp-38h]
 * 00000001401BE468: mov     rdx, [rbp-40h]
 * 00000001401BE46C: mov     rcx, [rbp-48h]
 * 00000001401BE470: mov     rax, [rbp-50h]
 * 00000001401BE474: mov     rsp, rbp
 * 00000001401BE477: mov     rbp, [rbp+0D8h]
 * 00000001401BE47E: add     rsp, 0E8h
 * 00000001401BE485: iretq
 */
