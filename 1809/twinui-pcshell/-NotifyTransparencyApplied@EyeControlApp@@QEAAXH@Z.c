/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1803B3660
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x1802D1FF0 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1803B3660
 * Reason: Hex-Rays returned no pseudocode for 0x1803B3660
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001803B3660: sub     rsp, 48h
 * 00000001803B3664: mov     rax, [rcx+30h]
 * 00000001803B3668: xor     r8d, r8d
 * 00000001803B366B: test    rax, rax
 * 00000001803B366E: jz      short loc_1803B36AD
 * 00000001803B3670: mov     rcx, [rcx+10h]
 * 00000001803B3674: test    edx, edx
 * 00000001803B3676: mov     [rsp+48h+arg_0], rax
 * 00000001803B367B: lea     edx, [r8+2]
 * 00000001803B367F: mov     eax, r8d
 * 00000001803B3682: movzx   r9d, r8w
 * 00000001803B3686: setnz   al
 * 00000001803B3689: lea     r8d, [rdx-1]
 * 00000001803B368D: mov     [rsp+48h+var_18], eax
 * 00000001803B3691: lea     rax, unk_18041B176
 * 00000001803B3698: mov     [rsp+48h+var_20], rax
 * 00000001803B369D: mov     [rsp+48h+var_28], dx
 * 00000001803B36A2: lea     rdx, [rsp+48h+arg_0]
 * 00000001803B36A7: call    cs:__imp_CoreUICallSend
 * 00000001803B36AD: add     rsp, 48h
 * 00000001803B36B1: retn
 */
