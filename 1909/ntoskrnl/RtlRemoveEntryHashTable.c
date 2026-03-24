/*
 * XREFs of RtlRemoveEntryHashTable @ 0x140086270
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140086058 (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140621164 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C5CC4 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1408E1DDC (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408E2330 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x1408E2F04 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140086408 (RtlpPopulateContext.c)
 */

/*
 * Hex-Rays decompilation failed for RtlRemoveEntryHashTable @ 0x140086270
 * Reason: Hex-Rays returned no pseudocode for 0x140086270
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140086270: sub     rsp, 28h
 * 0000000140086274: or      r11d, 0FFFFFFFFh
 * 0000000140086278: mov     r10, r8
 * 000000014008627B: mov     r8, [rdx+10h]
 * 000000014008627F: add     [rcx+14h], r11d
 * 0000000140086283: mov     r9, [rdx]
 * 0000000140086286: mov     rax, [rdx+8]
 * 000000014008628A: cmp     r9, rax
 * 000000014008628D: jnz     short loc_14008629A
 * 000000014008628F: add     [rcx+18h], r11d
 * 0000000140086293: mov     rax, [rdx+8]
 * 0000000140086297: mov     r9, [rdx]
 * 000000014008629A: cmp     [r9+8], rdx
 * 000000014008629E: jnz     short loc_1400862BC
 * 00000001400862A0: cmp     [rax], rdx
 * 00000001400862A3: jnz     short loc_1400862BC
 * 00000001400862A5: mov     [rax], r9
 * 00000001400862A8: mov     [r9+8], rax
 * 00000001400862AC: test    r10, r10
 * 00000001400862AF: jnz     loc_140215DFA
 * 00000001400862B5: mov     al, 1
 * 00000001400862B7: add     rsp, 28h
 * 00000001400862BB: retn
 * 00000001400862BC: mov     ecx, 3
 * 00000001400862C1: int     29h; Win8: RtlFailFast(ecx)
 * 0000000140215DFA: cmp     qword ptr [r10], 0
 * 0000000140215DFE: jnz     loc_1400862B5
 * 0000000140215E04: mov     rdx, r10
 * 0000000140215E07: call    RtlpPopulateContext
 * 0000000140215E0C: nop
 * 0000000140215E0D: jmp     loc_1400862B5
 */
