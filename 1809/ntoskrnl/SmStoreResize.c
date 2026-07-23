/*
 * XREFs of SmStoreResize @ 0x1408ACDDC
 * Callers:
 *     SmcStoreResize @ 0x1408B085C (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401BB750 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408ACC8C (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1408ACDDC
 * Reason: Hex-Rays returned no pseudocode for 0x1408ACDDC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408ACDDC: mov     [rsp-8+arg_0], rbx
 * 00000001408ACDE1: push    rbp
 * 00000001408ACDE2: mov     rbp, rsp
 * 00000001408ACDE5: sub     rsp, 60h
 * 00000001408ACDE9: xor     eax, eax
 * 00000001408ACDEB: mov     [rbp+var_20], r8
 * 00000001408ACDEF: mov     [rbp+SystemInformation], rax
 * 00000001408ACDF3: mov     rbx, r9
 * 00000001408ACDF6: mov     [rbp+var_8], rax
 * 00000001408ACDFA: mov     r9d, 18h
 * 00000001408ACE00: lea     rax, [rbp+var_30]
 * 00000001408ACE04: mov     dword ptr [rbp+SystemInformation], 1
 * 00000001408ACE0B: mov     [rbp+var_10], rax
 * 00000001408ACE0F: xor     eax, eax
 * 00000001408ACE11: neg     [rbp+arg_20]
 * 00000001408ACE14: mov     [rbp+var_30], rax
 * 00000001408ACE18: mov     [rbp+var_28], rax
 * 00000001408ACE1C: sbb     eax, eax
 * 00000001408ACE1E: and     eax, 100h
 * 00000001408ACE23: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 00000001408ACE2A: add     eax, 6
 * 00000001408ACE2D: mov     dword ptr [rbp+var_8], r9d
 * 00000001408ACE31: mov     dword ptr [rbp+var_30], eax
 * 00000001408ACE34: mov     eax, [rbx]
 * 00000001408ACE36: mov     dword ptr [rbp+var_28], eax
 * 00000001408ACE39: mov     dword ptr [rbp+var_30+4], edx
 * 00000001408ACE3C: test    ecx, ecx
 * 00000001408ACE3E: jnz     short loc_1408ACE65
 * 00000001408ACE40: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001408ACE47: lea     rax, [rbp+arg_10]
 * 00000001408ACE4B: mov     [rsp+60h+var_38], rax; __int64
 * 00000001408ACE50: lea     r8, [rbp+var_30]
 * 00000001408ACE54: mov     edx, 2281CCh
 * 00000001408ACE59: mov     [rsp+60h+var_40], r9d; int
 * 00000001408ACE5E: call    SmStorePhysicalRequestIssue
 * 00000001408ACE63: jmp     short loc_1408ACE7B
 * 00000001408ACE65: cmp     ecx, 1
 * 00000001408ACE68: jnz     short loc_1408ACE84
 * 00000001408ACE6A: mov     r8d, r9d; SystemInformationLength
 * 00000001408ACE6D: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 00000001408ACE71: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 00000001408ACE76: call    ZwSetSystemInformation
 * 00000001408ACE7B: mov     ecx, eax
 * 00000001408ACE7D: mov     eax, dword ptr [rbp+var_28]
 * 00000001408ACE80: mov     [rbx], eax
 * 00000001408ACE82: jmp     short loc_1408ACE89
 * 00000001408ACE84: mov     ecx, 0C000000Dh
 * 00000001408ACE89: mov     eax, ecx
 * 00000001408ACE8B: mov     rbx, [rsp+60h+arg_0]
 * 00000001408ACE90: add     rsp, 60h
 * 00000001408ACE94: pop     rbp
 * 00000001408ACE95: retn
 */
