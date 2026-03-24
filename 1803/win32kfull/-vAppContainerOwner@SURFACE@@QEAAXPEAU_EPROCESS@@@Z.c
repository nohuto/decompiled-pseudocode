/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00AB65C
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C007C97C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00AB65C
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AB65C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AB65C: mov     [rsp+arg_0], rbx
 * 00000001C00AB661: push    rdi
 * 00000001C00AB662: sub     rsp, 20h
 * 00000001C00AB666: mov     rbx, rdx
 * 00000001C00AB669: mov     rdi, rcx
 * 00000001C00AB66C: test    rdx, rdx
 * 00000001C00AB66F: jz      short loc_1C00AB682
 * 00000001C00AB671: mov     rcx, rdx
 * 00000001C00AB674: call    cs:__imp_UserIsProcessImmersiveAppContainer
 * 00000001C00AB67A: neg     eax
 * 00000001C00AB67C: sbb     r8, r8
 * 00000001C00AB67F: and     rbx, r8
 * 00000001C00AB682: call    cs:__imp_GreAcquireHmgrSemaphore
 * 00000001C00AB688: mov     rcx, rdi
 * 00000001C00AB68B: call    cs:__imp_HmgPentryFromPobj
 * 00000001C00AB691: mov     [rdi+280h], rbx
 * 00000001C00AB698: call    cs:__imp_GreReleaseHmgrSemaphore
 * 00000001C00AB69E: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00AB6A3: add     rsp, 20h
 * 00000001C00AB6A7: pop     rdi
 * 00000001C00AB6A8: retn
 */
