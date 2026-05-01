/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x180415E88
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x180332C30 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x180415E88
 * Reason: Hex-Rays returned no pseudocode for 0x180415E88
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180415E88: sub     rsp, 48h
 * 0000000180415E8C: mov     rax, [rcx+30h]
 * 0000000180415E90: xor     r8d, r8d
 * 0000000180415E93: test    rax, rax
 * 0000000180415E96: jz      short loc_180415ED5
 * 0000000180415E98: mov     rcx, [rcx+10h]
 * 0000000180415E9C: test    edx, edx
 * 0000000180415E9E: mov     [rsp+48h+arg_0], rax
 * 0000000180415EA3: lea     edx, [r8+2]
 * 0000000180415EA7: mov     eax, r8d
 * 0000000180415EAA: movzx   r9d, r8w
 * 0000000180415EAE: setnz   al
 * 0000000180415EB1: lea     r8d, [rdx-1]
 * 0000000180415EB5: mov     [rsp+48h+var_18], eax
 * 0000000180415EB9: lea     rax, unk_180486026
 * 0000000180415EC0: mov     [rsp+48h+var_20], rax
 * 0000000180415EC5: mov     [rsp+48h+var_28], dx
 * 0000000180415ECA: lea     rdx, [rsp+48h+arg_0]
 * 0000000180415ECF: call    cs:__imp_CoreUICallSend
 * 0000000180415ED5: add     rsp, 48h
 * 0000000180415ED9: retn
 */
