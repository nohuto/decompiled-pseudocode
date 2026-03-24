/*
 * XREFs of SmStoreResize @ 0x1408ABB7C
 * Callers:
 *     SmcStoreResize @ 0x1408AF5FC (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401BB5F0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408ABA2C (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1408ABB7C
 * Reason: Hex-Rays returned no pseudocode for 0x1408ABB7C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408ABB7C: mov     [rsp-8+arg_0], rbx
 * 00000001408ABB81: push    rbp
 * 00000001408ABB82: mov     rbp, rsp
 * 00000001408ABB85: sub     rsp, 60h
 * 00000001408ABB89: xor     eax, eax
 * 00000001408ABB8B: mov     [rbp+var_20], r8
 * 00000001408ABB8F: mov     [rbp+SystemInformation], rax
 * 00000001408ABB93: mov     rbx, r9
 * 00000001408ABB96: mov     [rbp+var_8], rax
 * 00000001408ABB9A: mov     r9d, 18h
 * 00000001408ABBA0: lea     rax, [rbp+var_30]
 * 00000001408ABBA4: mov     dword ptr [rbp+SystemInformation], 1
 * 00000001408ABBAB: mov     [rbp+var_10], rax
 * 00000001408ABBAF: xor     eax, eax
 * 00000001408ABBB1: neg     [rbp+arg_20]
 * 00000001408ABBB4: mov     [rbp+var_30], rax
 * 00000001408ABBB8: mov     [rbp+var_28], rax
 * 00000001408ABBBC: sbb     eax, eax
 * 00000001408ABBBE: and     eax, 100h
 * 00000001408ABBC3: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 00000001408ABBCA: add     eax, 6
 * 00000001408ABBCD: mov     dword ptr [rbp+var_8], r9d
 * 00000001408ABBD1: mov     dword ptr [rbp+var_30], eax
 * 00000001408ABBD4: mov     eax, [rbx]
 * 00000001408ABBD6: mov     dword ptr [rbp+var_28], eax
 * 00000001408ABBD9: mov     dword ptr [rbp+var_30+4], edx
 * 00000001408ABBDC: test    ecx, ecx
 * 00000001408ABBDE: jnz     short loc_1408ABC05
 * 00000001408ABBE0: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001408ABBE7: lea     rax, [rbp+arg_10]
 * 00000001408ABBEB: mov     [rsp+60h+var_38], rax; __int64
 * 00000001408ABBF0: lea     r8, [rbp+var_30]
 * 00000001408ABBF4: mov     edx, 2281CCh
 * 00000001408ABBF9: mov     [rsp+60h+var_40], r9d; int
 * 00000001408ABBFE: call    SmStorePhysicalRequestIssue
 * 00000001408ABC03: jmp     short loc_1408ABC1B
 * 00000001408ABC05: cmp     ecx, 1
 * 00000001408ABC08: jnz     short loc_1408ABC24
 * 00000001408ABC0A: mov     r8d, r9d; SystemInformationLength
 * 00000001408ABC0D: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 00000001408ABC11: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 00000001408ABC16: call    ZwSetSystemInformation
 * 00000001408ABC1B: mov     ecx, eax
 * 00000001408ABC1D: mov     eax, dword ptr [rbp+var_28]
 * 00000001408ABC20: mov     [rbx], eax
 * 00000001408ABC22: jmp     short loc_1408ABC29
 * 00000001408ABC24: mov     ecx, 0C000000Dh
 * 00000001408ABC29: mov     eax, ecx
 * 00000001408ABC2B: mov     rbx, [rsp+60h+arg_0]
 * 00000001408ABC30: add     rsp, 60h
 * 00000001408ABC34: pop     rbp
 * 00000001408ABC35: retn
 */
