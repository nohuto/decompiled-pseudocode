/*
 * XREFs of SmStoreResize @ 0x1408E8C48
 * Callers:
 *     SmcStoreResize @ 0x1408EC64C (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401C3550 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408E8AF8 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1408E8C48
 * Reason: Hex-Rays returned no pseudocode for 0x1408E8C48
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408E8C48: mov     [rsp-8+arg_0], rbx
 * 00000001408E8C4D: push    rbp
 * 00000001408E8C4E: mov     rbp, rsp
 * 00000001408E8C51: sub     rsp, 60h
 * 00000001408E8C55: and     [rbp+var_4], 0
 * 00000001408E8C59: lea     rax, [rbp+var_30]
 * 00000001408E8C5D: and     [rbp+var_24], 0
 * 00000001408E8C61: mov     rbx, r9
 * 00000001408E8C64: neg     [rbp+arg_20]
 * 00000001408E8C67: mov     r9d, 18h
 * 00000001408E8C6D: mov     [rbp+var_10], rax
 * 00000001408E8C71: sbb     eax, eax
 * 00000001408E8C73: mov     [rbp+SystemInformation], 1
 * 00000001408E8C7A: and     eax, 100h
 * 00000001408E8C7F: mov     [rbp+var_14], 11h
 * 00000001408E8C86: add     eax, 6
 * 00000001408E8C89: mov     [rbp+var_8], r9d
 * 00000001408E8C8D: mov     [rbp+var_30], eax
 * 00000001408E8C90: mov     eax, [rbx]
 * 00000001408E8C92: mov     [rbp+var_28], eax
 * 00000001408E8C95: mov     [rbp+var_2C], edx
 * 00000001408E8C98: mov     [rbp+var_20], r8
 * 00000001408E8C9C: test    ecx, ecx
 * 00000001408E8C9E: jnz     short loc_1408E8CC5
 * 00000001408E8CA0: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001408E8CA7: lea     rax, [rbp+arg_10]
 * 00000001408E8CAB: mov     [rsp+60h+var_38], rax; __int64
 * 00000001408E8CB0: lea     r8, [rbp+var_30]
 * 00000001408E8CB4: mov     edx, 2281CCh
 * 00000001408E8CB9: mov     [rsp+60h+var_40], r9d; int
 * 00000001408E8CBE: call    SmStorePhysicalRequestIssue
 * 00000001408E8CC3: jmp     short loc_1408E8CDB
 * 00000001408E8CC5: cmp     ecx, 1
 * 00000001408E8CC8: jnz     short loc_1408E8CE4
 * 00000001408E8CCA: mov     r8d, r9d; SystemInformationLength
 * 00000001408E8CCD: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 00000001408E8CD1: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 00000001408E8CD6: call    ZwSetSystemInformation
 * 00000001408E8CDB: mov     ecx, eax
 * 00000001408E8CDD: mov     eax, [rbp+var_28]
 * 00000001408E8CE0: mov     [rbx], eax
 * 00000001408E8CE2: jmp     short loc_1408E8CE9
 * 00000001408E8CE4: mov     ecx, 0C000000Dh
 * 00000001408E8CE9: mov     rbx, [rsp+60h+arg_0]
 * 00000001408E8CEE: mov     eax, ecx
 * 00000001408E8CF0: add     rsp, 60h
 * 00000001408E8CF4: pop     rbp
 * 00000001408E8CF5: retn
 */
