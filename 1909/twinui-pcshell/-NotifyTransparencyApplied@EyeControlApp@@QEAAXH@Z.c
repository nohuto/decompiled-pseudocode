/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x180435528
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x180352480 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x180435528
 * Reason: Hex-Rays returned no pseudocode for 0x180435528
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180435528: sub     rsp, 48h
 * 000000018043552C: mov     rax, [rcx+30h]
 * 0000000180435530: xor     r8d, r8d
 * 0000000180435533: test    rax, rax
 * 0000000180435536: jz      short loc_180435575
 * 0000000180435538: mov     rcx, [rcx+10h]
 * 000000018043553C: test    edx, edx
 * 000000018043553E: mov     [rsp+48h+arg_0], rax
 * 0000000180435543: lea     edx, [r8+2]
 * 0000000180435547: mov     eax, r8d
 * 000000018043554A: movzx   r9d, r8w
 * 000000018043554E: setnz   al
 * 0000000180435551: lea     r8d, [rdx-1]
 * 0000000180435555: mov     [rsp+48h+var_18], eax
 * 0000000180435559: lea     rax, unk_1804A9C76
 * 0000000180435560: mov     [rsp+48h+var_20], rax
 * 0000000180435565: mov     [rsp+48h+var_28], dx
 * 000000018043556A: lea     rdx, [rsp+48h+arg_0]
 * 000000018043556F: call    cs:__imp_CoreUICallSend
 * 0000000180435575: add     rsp, 48h
 * 0000000180435579: retn
 */
