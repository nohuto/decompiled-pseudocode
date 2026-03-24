/*
 * XREFs of SmStoreResize @ 0x1408E8550
 * Callers:
 *     SmcStoreResize @ 0x1408EBF54 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401C40D0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408E8400 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1408E8550
 * Reason: Hex-Rays returned no pseudocode for 0x1408E8550
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408E8550: mov     [rsp-8+arg_0], rbx
 * 00000001408E8555: push    rbp
 * 00000001408E8556: mov     rbp, rsp
 * 00000001408E8559: sub     rsp, 60h
 * 00000001408E855D: and     [rbp+var_4], 0
 * 00000001408E8561: lea     rax, [rbp+var_30]
 * 00000001408E8565: and     [rbp+var_24], 0
 * 00000001408E8569: mov     rbx, r9
 * 00000001408E856C: neg     [rbp+arg_20]
 * 00000001408E856F: mov     r9d, 18h
 * 00000001408E8575: mov     [rbp+var_10], rax
 * 00000001408E8579: sbb     eax, eax
 * 00000001408E857B: mov     [rbp+SystemInformation], 1
 * 00000001408E8582: and     eax, 100h
 * 00000001408E8587: mov     [rbp+var_14], 11h
 * 00000001408E858E: add     eax, 6
 * 00000001408E8591: mov     [rbp+var_8], r9d
 * 00000001408E8595: mov     [rbp+var_30], eax
 * 00000001408E8598: mov     eax, [rbx]
 * 00000001408E859A: mov     [rbp+var_28], eax
 * 00000001408E859D: mov     [rbp+var_2C], edx
 * 00000001408E85A0: mov     [rbp+var_20], r8
 * 00000001408E85A4: test    ecx, ecx
 * 00000001408E85A6: jnz     short loc_1408E85CD
 * 00000001408E85A8: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001408E85AF: lea     rax, [rbp+arg_10]
 * 00000001408E85B3: mov     [rsp+60h+var_38], rax; __int64
 * 00000001408E85B8: lea     r8, [rbp+var_30]
 * 00000001408E85BC: mov     edx, 2281CCh
 * 00000001408E85C1: mov     [rsp+60h+var_40], r9d; int
 * 00000001408E85C6: call    SmStorePhysicalRequestIssue
 * 00000001408E85CB: jmp     short loc_1408E85E3
 * 00000001408E85CD: cmp     ecx, 1
 * 00000001408E85D0: jnz     short loc_1408E85EC
 * 00000001408E85D2: mov     r8d, r9d; SystemInformationLength
 * 00000001408E85D5: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 00000001408E85D9: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 00000001408E85DE: call    ZwSetSystemInformation
 * 00000001408E85E3: mov     ecx, eax
 * 00000001408E85E5: mov     eax, [rbp+var_28]
 * 00000001408E85E8: mov     [rbx], eax
 * 00000001408E85EA: jmp     short loc_1408E85F1
 * 00000001408E85EC: mov     ecx, 0C000000Dh
 * 00000001408E85F1: mov     rbx, [rsp+60h+arg_0]
 * 00000001408E85F6: mov     eax, ecx
 * 00000001408E85F8: add     rsp, 60h
 * 00000001408E85FC: pop     rbp
 * 00000001408E85FD: retn
 */
