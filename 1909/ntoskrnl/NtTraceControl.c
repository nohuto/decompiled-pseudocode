/*
 * XREFs of NtTraceControl @ 0x14064C530
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14071F830 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407897EC (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408ED9E0 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036F60 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     PtrToUlong @ 0x1400E42A0 (PtrToUlong.c)
 *     EtwpCreateActivityId @ 0x14010A8DC (EtwpCreateActivityId.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WdiUpdateSem @ 0x14032B348 (WdiUpdateSem.c)
 *     EtwpGetCurrentSiloState @ 0x1403303B4 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1403336A0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140333B5C (EtwpSetCompressionSettings.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpSetProviderTraitsUm @ 0x1405C471C (EtwpSetProviderTraitsUm.c)
 *     EtwpRegisterUMGuid @ 0x1405D3E90 (EtwpRegisterUMGuid.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x140693A10 (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x140694158 (EtwpReceiveNotification.c)
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406A9564 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406A9728 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     EtwpSendReplyDataBlock @ 0x1406AA8FC (EtwpSendReplyDataBlock.c)
 *     EtwpStartTrace @ 0x1406AAB88 (EtwpStartTrace.c)
 *     EtwpFlushTrace @ 0x1406CAD04 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406CAE44 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1406CAEC8 (EtwpRealtimeConnect.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406EC588 (EtwpReceiveReplyDataBlock.c)
 *     EtwpGetTraceGuidInfo @ 0x1406EE26C (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x1406EE98C (EtwpTrackProviderBinary.c)
 *     EtwpEnumerateTraceGuids @ 0x1406F7128 (EtwpEnumerateTraceGuids.c)
 *     WdiDispatchControl @ 0x1407181B4 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 *     EtwpRegisterSecurityProvider @ 0x14078CD70 (EtwpRegisterSecurityProvider.c)
 *     EtwpUpdateDisallowList @ 0x1408F1FDC (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408F2268 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x1408F2344 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1408F25B8 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x1408F2658 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1408F2740 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x1408F27C8 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1408F28B0 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FC620 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1408FC820 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FCB54 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408FF4BC (EtwpSetProviderBinaryTracking.c)
 */

/*
 * Hex-Rays decompilation failed for NtTraceControl @ 0x14064C530
 * Reason: Hex-Rays returned no pseudocode for 0x14064C530
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014064C530: mov     [rsp+Address], r9
 * 000000014064C535: mov     dword ptr [rsp+NumberOfBytes], r8d
 * 000000014064C53A: mov     [rsp+arg_0], ecx
 * 000000014064C53E: push    rbx
 * 000000014064C53F: push    rsi
 * 000000014064C540: push    rdi
 * 000000014064C541: push    r12
 * 000000014064C543: push    r13
 * 000000014064C545: push    r14
 * 000000014064C547: push    r15
 * 000000014064C549: sub     rsp, 60h
 * 000000014064C54D: mov     r12, rdx
 * 000000014064C550: mov     esi, ecx
 * 000000014064C552: mov     [rsp+98h+var_64], ecx
 * 000000014064C556: xor     r15d, r15d
 * 000000014064C559: mov     edi, r15d
 * 000000014064C55C: mov     [rsp+98h+Src], r15
 * 000000014064C561: mov     dword ptr [rsp+98h+Size], r15d
 * 000000014064C566: mov     rax, gs:188h
 * 000000014064C56F: movzx   ebx, byte ptr [rax+232h]
 * 000000014064C576: call    EtwpGetCurrentSiloState
 * 000000014064C57B: mov     r14, rax
 * 000000014064C57E: xor     r13b, r13b
 * 000000014064C581: test    bl, bl
 * 000000014064C583: jz      loc_14064C64A
 * 000000014064C589: mov     r13d, esi
 * 000000014064C58C: shr     r13d, 1Fh
 * 000000014064C590: mov     eax, esi
 * 000000014064C592: btr     eax, 1Fh
 * 000000014064C596: test    r13b, r13b
 * 000000014064C599: cmovz   eax, esi
 * 000000014064C59C: mov     esi, eax
 * 000000014064C59E: mov     [rsp+98h+var_64], eax
 * 000000014064C5A2: mov     rbx, 7FFFFFFF0000h
 * 000000014064C5AC: test    r12, r12
 * 000000014064C5AF: jz      short loc_14064C5D7
 * 000000014064C5B1: mov     eax, dword ptr [rsp+98h+NumberOfBytes]
 * 000000014064C5B8: test    eax, eax
 * 000000014064C5BA: jz      short loc_14064C5DF
 * 000000014064C5BC: lea     rcx, [r12+rax]
 * 000000014064C5C0: cmp     rcx, rbx
 * 000000014064C5C3: ja      short loc_14064C5CA
 * 000000014064C5C5: cmp     rcx, r12
 * 000000014064C5C8: jnb     short loc_14064C5DF
 * 000000014064C5CA: xor     eax, eax
 * 000000014064C5CC: mov     ds:7FFFFFFF0000h, al
 * 000000014064C5D5: jmp     short loc_14064C5DF
 * 000000014064C5D7: mov     dword ptr [rsp+98h+NumberOfBytes], r15d
 * 000000014064C5DF: mov     rax, [rsp+98h+Address]
 * 000000014064C5E7: test    rax, rax
 * 000000014064C5EA: jz      short loc_14064C603
 * 000000014064C5EC: mov     edx, [rsp+98h+OutputBufferLength]; Length
 * 000000014064C5F3: mov     r8d, 1; Alignment
 * 000000014064C5F9: mov     rcx, rax; Address
 * 000000014064C5FC: call    ProbeForWrite
 * 000000014064C601: jmp     short loc_14064C60B
 * 000000014064C603: mov     [rsp+98h+OutputBufferLength], r15d
 * 000000014064C60B: mov     rax, [rsp+98h+ReturnLength]
 * 000000014064C613: test    rax, rax
 * 000000014064C616: jz      short loc_14064C62C
 * 000000014064C618: cmp     rax, rbx
 * 000000014064C61B: cmovb   rbx, rax
 * 000000014064C61F: mov     eax, [rbx]
 * 000000014064C621: mov     [rbx], eax
 * 000000014064C623: mov     [rsp+98h+arg_0], esi
 * 000000014064C62A: jmp     short loc_14064C64A
 * 000000014064C62C: mov     ebx, 0C000000Dh
 * 000000014064C631: mov     dword ptr [rsp+98h+Size+4], ebx
 * 000000014064C635: jmp     loc_14064CE4C
 * 000000014064C63A: mov     ebx, eax
 * 000000014064C63C: mov     dword ptr [rsp+98h+Size+4], eax
 * 000000014064C640: mov     rdi, [rsp+98h+Src]
 * 000000014064C645: jmp     loc_14064CE4C
 * 000000014064C64A: cmp     esi, 1Bh
 * 000000014064C64D: ja      short loc_14064C669
 * 000000014064C64F: mov     eax, 8005000h
 * 000000014064C654: bt      eax, esi
 * 000000014064C657: jnb     short loc_14064C669
 * 000000014064C659: mov     esi, [rsp+98h+OutputBufferLength]
 * 000000014064C660: mov     ebx, dword ptr [rsp+98h+NumberOfBytes]
 * 000000014064C667: jmp     short loc_14064C6DB
 * 000000014064C669: mov     ebx, dword ptr [rsp+98h+NumberOfBytes]
 * 000000014064C670: mov     esi, [rsp+98h+OutputBufferLength]
 * 000000014064C677: test    ebx, ebx
 * 000000014064C679: jnz     short loc_14064C67F
 * 000000014064C67B: test    esi, esi
 * 000000014064C67D: jz      short loc_14064C6DB
 * 000000014064C67F: mov     edx, esi
 * 000000014064C681: cmp     ebx, esi
 * 000000014064C683: cmova   edx, ebx; NumberOfBytes
 * 000000014064C686: mov     ecx, 9; PoolType
 * 000000014064C68B: mov     r8d, 50777445h; Tag
 * 000000014064C691: call    ExAllocatePoolWithQuotaTag
 * 000000014064C696: mov     rdi, rax
 * 000000014064C699: mov     [rsp+98h+Src], rax
 * 000000014064C69E: test    rax, rax
 * 000000014064C6A1: jnz     short loc_14064C6AD
 * 000000014064C6A3: mov     ebx, 0C0000017h
 * 000000014064C6A8: jmp     loc_14064CE4C
 * 000000014064C6AD: mov     r8d, esi; Size
 * 000000014064C6B0: xor     edx, edx; Val
 * 000000014064C6B2: mov     rcx, rdi; void *
 * 000000014064C6B5: call    memset
 * 000000014064C6BA: test    r12, r12
 * 000000014064C6BD: jz      short loc_14064C6DB
 * 000000014064C6BF: mov     r8, rbx; Size
 * 000000014064C6C2: mov     rdx, r12; Src
 * 000000014064C6C5: mov     rcx, rdi; void *
 * 000000014064C6C8: call    memmove
 * 000000014064C6CD: jmp     short loc_14064C6DB
 * 000000014064C6CF: mov     ebx, eax
 * 000000014064C6D1: mov     rdi, [rsp+98h+Src]
 * 000000014064C6D6: jmp     loc_14064CE4C
 * 000000014064C6DB: mov     r9d, [rsp+98h+var_64]
 * 000000014064C6E0: dec     r9d; switch 43 cases
 * 000000014064C6E3: cmp     r9d, 2Ah
 * 000000014064C6E7: ja      def_14064C6FF; jumptable 000000014064C6FF default case, cases 7-10,29
 * 000000014064C6ED: lea     r10, cs:140000000h
 * 000000014064C6F4: mov     eax, ds:(jpt_14064C6FF - 140000000h)[r10+r9*4]
 * 000000014064C6FC: add     rax, r10
 * 000000014064C6FF: jmp     rax; switch jump
 * 000000014064C705: mov     r8d, esi; jumptable 000000014064C6FF cases 1-6
 * 000000014064C708: mov     edx, ebx
 * 000000014064C70A: mov     rcx, rdi
 * 000000014064C70D: call    EtwpValidateUserModeLoggerInfo
 * 000000014064C712: mov     ebx, eax
 * 000000014064C714: test    eax, eax
 * 000000014064C716: js      loc_14064CDD5
 * 000000014064C71C: cmp     r9d, 5
 * 000000014064C720: ja      loc_14064C7D8
 * 000000014064C726: mov     edx, [r10+r9*4+64CF1Ch]
 * 000000014064C72E: add     rdx, r10
 * 000000014064C731: jmp     rdx
 * 000000014064C737: mov     ecx, [rdi+50h]
 * 000000014064C73A: and     ecx, 0FFFFFFFEh
 * 000000014064C73D: movzx   eax, r13b
 * 000000014064C741: or      ecx, eax
 * 000000014064C743: mov     [rdi+50h], ecx
 * 000000014064C746: mov     rdx, rdi
 * 000000014064C749: mov     rcx, r14
 * 000000014064C74C: call    EtwpStartTrace
 * 000000014064C751: mov     ebx, eax
 * 000000014064C753: mov     dword ptr [rsp+98h+Size], 0B0h
 * 000000014064C75B: jmp     loc_14064CDD5
 * 000000014064C760: xor     r8d, r8d
 * 000000014064C763: mov     rdx, rdi
 * 000000014064C766: mov     rcx, r14
 * 000000014064C769: call    EtwpStopTrace
 * 000000014064C76E: mov     ebx, eax
 * 000000014064C770: mov     dword ptr [rsp+98h+Size], 0B0h
 * 000000014064C778: jmp     loc_14064CDD5
 * 000000014064C77D: mov     rdx, rdi
 * 000000014064C780: mov     rcx, r14
 * 000000014064C783: call    EtwpQueryTrace
 * 000000014064C788: mov     ebx, eax
 * 000000014064C78A: mov     dword ptr [rsp+98h+Size], 0B0h
 * 000000014064C792: jmp     loc_14064CDD5
 * 000000014064C797: mov     rdx, rdi
 * 000000014064C79A: mov     rcx, r14
 * 000000014064C79D: call    EtwpUpdateTrace
 * 000000014064C7A2: mov     ebx, eax
 * 000000014064C7A4: mov     dword ptr [rsp+98h+Size], 0B0h
 * 000000014064C7AC: jmp     loc_14064CDD5
 * 000000014064C7B1: mov     rdx, rdi
 * 000000014064C7B4: mov     rcx, r14
 * 000000014064C7B7: call    EtwpFlushTrace
 * 000000014064C7BC: mov     ebx, eax
 * 000000014064C7BE: mov     dword ptr [rsp+98h+Size], 0B0h
 * 000000014064C7C6: jmp     loc_14064CDD5
 * 000000014064C7CB: mov     rdx, rdi
 * 000000014064C7CE: mov     rcx, r14
 * 000000014064C7D1: call    EtwpIncrementTraceFile
 * 000000014064C7D6: mov     ebx, eax
 * 000000014064C7D8: mov     dword ptr [rsp+98h+Size], 0B0h
 * 000000014064C7E0: jmp     loc_14064CDD5
 * 000000014064C7E5: cmp     ebx, 0A0h; jumptable 000000014064C6FF case 15
 * 000000014064C7EB: jnz     loc_14064C98A
 * 000000014064C7F1: lea     eax, [rsi-0A0h]
 * 000000014064C7F7: cmp     eax, 0FF60h
 * 000000014064C7FC: ja      loc_14064C98A
 * 000000014064C802: lea     rax, [rsp+98h+Size]
 * 000000014064C807: mov     [rsp+98h+var_78], rax
 * 000000014064C80C: movzx   r9d, r13b
 * 000000014064C810: mov     r8d, esi
 * 000000014064C813: mov     rdx, rdi
 * 000000014064C816: mov     rcx, r14
 * 000000014064C819: call    EtwpRegisterUMGuid
 * 000000014064C81E: mov     ebx, eax
 * 000000014064C820: jmp     loc_14064CDD5
 * 000000014064C825: cmp     ebx, 8; jumptable 000000014064C6FF case 26
 * 000000014064C828: jnz     loc_14064C98A
 * 000000014064C82E: mov     rdx, rdi
 * 000000014064C831: mov     rcx, r14
 * 000000014064C834: call    EtwpTrackProviderBinary
 * 000000014064C839: mov     ebx, eax
 * 000000014064C83B: mov     dword ptr [rsp+98h+Size], r15d
 * 000000014064C840: jmp     loc_14064CDD5
 * 000000014064C845: test    ebx, ebx; jumptable 000000014064C6FF case 16
 * 000000014064C847: jnz     loc_14064C98A
 * 000000014064C84D: lea     eax, [rsi-48h]
 * 000000014064C850: cmp     eax, 0FFB8h
 * 000000014064C855: ja      loc_14064C98A
 * 000000014064C85B: lea     r9, [rsp+98h+Size]
 * 000000014064C860: movzx   r8d, r13b
 * 000000014064C864: mov     edx, esi
 * 000000014064C866: mov     rcx, rdi; void *
 * 000000014064C869: call    EtwpReceiveNotification
 * 000000014064C86E: mov     ebx, eax
 * 000000014064C870: jmp     loc_14064CDD5
 * 000000014064C875: cmp     ebx, 48h ; 'H'; jumptable 000000014064C6FF case 17
 * 000000014064C878: jb      loc_14064C98A
 * 000000014064C87E: cmp     esi, 48h ; 'H'
 * 000000014064C881: jnz     loc_14064C98A
 * 000000014064C887: cmp     [rdi+4], ebx
 * 000000014064C88A: jnz     loc_14064C98A
 * 000000014064C890: cmp     dword ptr [rdi], 3
 * 000000014064C893: jnz     short loc_14064C8B7
 * 000000014064C895: cmp     ebx, 78h ; 'x'
 * 000000014064C898: jb      loc_14064C98A
 * 000000014064C89E: mov     r8b, 1
 * 000000014064C8A1: mov     rdx, rdi
 * 000000014064C8A4: mov     rcx, r14
 * 000000014064C8A7: call    EtwpEnableGuid
 * 000000014064C8AC: mov     ebx, eax
 * 000000014064C8AE: mov     dword ptr [rsp+98h+Size], esi
 * 000000014064C8B2: jmp     loc_14064CDD5
 * 000000014064C8B7: mov     r8b, 1
 * 000000014064C8BA: mov     rdx, rdi
 * 000000014064C8BD: mov     rcx, r14
 * 000000014064C8C0: call    EtwpNotifyGuid
 * 000000014064C8C5: mov     ebx, eax
 * 000000014064C8C7: mov     dword ptr [rsp+98h+Size], 48h ; 'H'
 * 000000014064C8CF: jmp     loc_14064CDD5
 * 000000014064C8D4: cmp     ebx, 48h ; 'H'; jumptable 000000014064C6FF case 18
 * 000000014064C8D7: jb      loc_14064C98A
 * 000000014064C8DD: cmp     [rdi+4], ebx
 * 000000014064C8E0: jnz     loc_14064C98A
 * 000000014064C8E6: call    PsGetCurrentThreadProcessId
 * 000000014064C8EB: mov     [rdi+24h], eax
 * 000000014064C8EE: mov     rcx, rdi
 * 000000014064C8F1: call    EtwpSendReplyDataBlock
 * 000000014064C8F6: mov     ebx, eax
 * 000000014064C8F8: jmp     loc_14064CDD5
 * 000000014064C8FD: cmp     ebx, 8; jumptable 000000014064C6FF case 19
 * 000000014064C900: jnz     loc_14064C98A
 * 000000014064C906: lea     r8, [rsp+98h+var_58]
 * 000000014064C90B: mov     edx, esi
 * 000000014064C90D: mov     rcx, rdi; void *
 * 000000014064C910: call    EtwpReceiveReplyDataBlock
 * 000000014064C915: mov     ebx, eax
 * 000000014064C917: mov     eax, [rsp+98h+var_58]
 * 000000014064C91B: mov     dword ptr [rsp+98h+Size], eax
 * 000000014064C91F: jmp     loc_14064CDD5
 * 000000014064C924: cmp     ebx, 60h ; '`'; jumptable 000000014064C6FF case 11
 * 000000014064C927: jnz     short loc_14064C98A
 * 000000014064C929: cmp     esi, ebx
 * 000000014064C92B: jnz     short loc_14064C98A
 * 000000014064C92D: mov     rcx, rdi
 * 000000014064C930: call    EtwpRealtimeConnect
 * 000000014064C935: mov     ebx, eax
 * 000000014064C937: mov     dword ptr [rsp+98h+Size], 60h ; '`'
 * 000000014064C93F: jmp     loc_14064CDD5
 * 000000014064C944: cmp     ebx, 8; jumptable 000000014064C6FF case 14
 * 000000014064C947: jnz     short loc_14064C98A
 * 000000014064C949: test    esi, esi
 * 000000014064C94B: jnz     short loc_14064C98A
 * 000000014064C94D: mov     ecx, [r12]; p
 * 000000014064C951: call    PtrToUlong
 * 000000014064C956: mov     [rsp+98h+var_48], rax
 * 000000014064C95B: mov     rcx, rax
 * 000000014064C95E: call    EtwpRealtimeDisconnectConsumerByHandle
 * 000000014064C963: mov     ebx, eax
 * 000000014064C965: jmp     loc_14064CDD5
 * 000000014064C96A: mov     ebx, eax
 * 000000014064C96C: mov     esi, [rsp+98h+arg_0]
 * 000000014064C973: mov     rdi, [rsp+98h+Src]
 * 000000014064C978: mov     rcx, [rsp+98h+Address]
 * 000000014064C980: jmp     loc_14064CDE1
 * 000000014064C985: cmp     esi, 10h; jumptable 000000014064C6FF case 12
 * 000000014064C988: jz      short loc_14064C994
 * 000000014064C98A: mov     ebx, 0C000000Dh
 * 000000014064C98F: jmp     loc_14064CDD5
 * 000000014064C994: mov     ebx, r15d
 * 000000014064C997: mov     rcx, [rsp+98h+Address]
 * 000000014064C99F: call    EtwpCreateActivityId
 * 000000014064C9A4: mov     esi, [rsp+98h+var_64]
 * 000000014064C9A8: jmp     loc_14064CDE1
 * 000000014064C9AD: mov     ebx, eax
 * 000000014064C9AF: mov     esi, [rsp+98h+arg_0]
 * 000000014064C9B6: mov     rdi, [rsp+98h+Src]
 * 000000014064C9BB: mov     rcx, [rsp+98h+Address]
 * 000000014064C9C3: jmp     loc_14064CDE1
 * 000000014064C9C8: cmp     ebx, 30h ; '0'; jumptable 000000014064C6FF case 13
 * 000000014064C9CB: jnz     short loc_14064C98A
 * 000000014064C9CD: test    esi, esi
 * 000000014064C9CF: jnz     short loc_14064C98A
 * 000000014064C9D1: mov     rcx, rdi
 * 000000014064C9D4: call    WdiDispatchControl
 * 000000014064C9D9: mov     ebx, eax
 * 000000014064C9DB: jmp     loc_14064CDD5
 * 000000014064C9E0: test    ebx, ebx; jumptable 000000014064C6FF case 20
 * 000000014064C9E2: jnz     short loc_14064C98A
 * 000000014064C9E4: test    esi, esi
 * 000000014064C9E6: jnz     short loc_14064C98A
 * 000000014064C9E8: call    WdiUpdateSem
 * 000000014064C9ED: mov     ebx, eax
 * 000000014064C9EF: jmp     loc_14064CDD5
 * 000000014064C9F4: mov     dword ptr [rsp+98h+Size], esi; jumptable 000000014064C6FF case 21
 * 000000014064C9F8: lea     r8, [rsp+98h+Size]
 * 000000014064C9FD: mov     rdx, rdi
 * 000000014064CA00: mov     rcx, r14
 * 000000014064CA03: call    EtwpGetTraceGuidList
 * 000000014064CA08: mov     ebx, eax
 * 000000014064CA0A: jmp     loc_14064CDD5
 * 000000014064CA0F: cmp     ebx, 10h; jumptable 000000014064C6FF case 22
 * 000000014064CA12: jnz     loc_14064C98A
 * 000000014064CA18: mov     dword ptr [rsp+98h+Size], esi
 * 000000014064CA1C: lea     r9, [rsp+98h+Size]
 * 000000014064CA21: mov     r8, rdi
 * 000000014064CA24: mov     rdx, rdi
 * 000000014064CA27: mov     rcx, r14
 * 000000014064CA2A: call    EtwpGetTraceGuidInfo
 * 000000014064CA2F: mov     ebx, eax
 * 000000014064CA31: jmp     loc_14064CDD5
 * 000000014064CA36: mov     dword ptr [rsp+98h+Size], esi; jumptable 000000014064C6FF case 32
 * 000000014064CA3A: lea     r8, [rsp+98h+Size]
 * 000000014064CA3F: mov     rdx, rdi
 * 000000014064CA42: mov     rcx, r14
 * 000000014064CA45: call    EtwpGetTraceGroupList
 * 000000014064CA4A: mov     ebx, eax
 * 000000014064CA4C: jmp     loc_14064CDD5
 * 000000014064CA51: cmp     ebx, 10h; jumptable 000000014064C6FF case 33
 * 000000014064CA54: jnz     loc_14064C98A
 * 000000014064CA5A: mov     dword ptr [rsp+98h+Size], esi
 * 000000014064CA5E: lea     r9, [rsp+98h+Size]
 * 000000014064CA63: mov     r8, rdi
 * 000000014064CA66: mov     rdx, rdi
 * 000000014064CA69: mov     rcx, r14
 * 000000014064CA6C: call    EtwpGetTraceGroupInfo
 * 000000014064CA71: mov     ebx, eax
 * 000000014064CA73: jmp     loc_14064CDD5
 * 000000014064CA78: cmp     ebx, 8; jumptable 000000014064C6FF case 34
 * 000000014064CA7B: jnz     loc_14064C98A
 * 000000014064CA81: mov     dword ptr [rsp+98h+Size], esi
 * 000000014064CA85: lea     r9, [rsp+98h+Size]
 * 000000014064CA8A: mov     r8, rdi
 * 000000014064CA8D: mov     rdx, rdi
 * 000000014064CA90: mov     rcx, r14
 * 000000014064CA93: call    EtwpGetDisallowList
 * 000000014064CA98: mov     ebx, eax
 * 000000014064CA9A: jmp     loc_14064CDD5
 * 000000014064CA9F: mov     dword ptr [rsp+98h+Size], esi; jumptable 000000014064C6FF case 23
 * 000000014064CAA3: lea     r8, [rsp+98h+Size]
 * 000000014064CAA8: mov     rdx, rdi
 * 000000014064CAAB: mov     rcx, r14
 * 000000014064CAAE: call    EtwpEnumerateTraceGuids
 * 000000014064CAB3: mov     ebx, eax
 * 000000014064CAB5: jmp     loc_14064CDD5
 * 000000014064CABA: test    ebx, ebx; jumptable 000000014064C6FF case 24
 * 000000014064CABC: jnz     loc_14064C98A
 * 000000014064CAC2: test    esi, esi
 * 000000014064CAC4: jnz     loc_14064C98A
 * 000000014064CACA: mov     rcx, r14
 * 000000014064CACD: call    EtwpRegisterSecurityProvider
 * 000000014064CAD2: mov     ebx, eax
 * 000000014064CAD4: jmp     loc_14064CDD5
 * 000000014064CAD9: cmp     ebx, 4; jumptable 000000014064C6FF case 25
 * 000000014064CADC: jnz     loc_14064C98A
 * 000000014064CAE2: cmp     esi, 10h
 * 000000014064CAE5: jnz     loc_14064C98A
 * 000000014064CAEB: mov     edx, [rdi]
 * 000000014064CAED: mov     r8, rdi
 * 000000014064CAF0: mov     rcx, r14
 * 000000014064CAF3: call    EtwpQueryReferenceTime
 * 000000014064CAF8: mov     ebx, eax
 * 000000014064CAFA: mov     dword ptr [rsp+98h+Size], esi
 * 000000014064CAFE: jmp     loc_14064CDD5
 * 000000014064CB03: cmp     ebx, 4; jumptable 000000014064C6FF case 27
 * 000000014064CB06: jnz     loc_14064C98A
 * 000000014064CB0C: mov     ecx, [r12]
 * 000000014064CB10: mov     [rsp+98h+var_40], rcx
 * 000000014064CB15: test    rcx, rcx
 * 000000014064CB18: jz      loc_14064C98A
 * 000000014064CB1E: movzx   edx, r13b
 * 000000014064CB22: call    EtwpAddNotificationEvent
 * 000000014064CB27: mov     ebx, eax
 * 000000014064CB29: jmp     loc_14064CDD5
 * 000000014064CB2E: mov     ebx, eax
 * 000000014064CB30: mov     esi, [rsp+98h+arg_0]
 * 000000014064CB37: mov     rdi, [rsp+98h+Src]
 * 000000014064CB3C: mov     rcx, [rsp+98h+Address]
 * 000000014064CB44: jmp     loc_14064CDE1
 * 000000014064CB49: cmp     ebx, 8; jumptable 000000014064C6FF case 28
 * 000000014064CB4C: jb      loc_14064C98A
 * 000000014064CB52: mov     edx, [rdi+4]
 * 000000014064CB55: mov     ecx, edx
 * 000000014064CB57: shl     rcx, 4
 * 000000014064CB5B: add     rcx, 8
 * 000000014064CB5F: mov     eax, ebx
 * 000000014064CB61: cmp     rcx, rax
 * 000000014064CB64: jnz     loc_14064C98A
 * 000000014064CB6A: lea     rax, [rdi+8]
 * 000000014064CB6E: test    edx, edx
 * 000000014064CB70: cmovnz  r15, rax
 * 000000014064CB74: mov     r9, r15
 * 000000014064CB77: mov     r8d, edx
 * 000000014064CB7A: mov     edx, [rdi]
 * 000000014064CB7C: mov     rcx, r14
 * 000000014064CB7F: call    EtwpUpdateDisallowList
 * 000000014064CB84: mov     ebx, eax
 * 000000014064CB86: jmp     loc_14064CDD5
 * 000000014064CB8B: cmp     ebx, 18h; jumptable 000000014064C6FF case 30
 * 000000014064CB8E: jnz     loc_14064C98A
 * 000000014064CB94: lea     eax, [rsi-78h]
 * 000000014064CB97: cmp     eax, 0FF88h
 * 000000014064CB9C: ja      loc_14064C98A
 * 000000014064CBA2: lea     r8, [rsp+98h+Size]
 * 000000014064CBA7: mov     edx, esi
 * 000000014064CBA9: mov     rcx, rdi
 * 000000014064CBAC: call    EtwpSetProviderTraitsUm
 * 000000014064CBB1: mov     ebx, eax
 * 000000014064CBB3: jmp     loc_14064CDD5
 * 000000014064CBB8: cmp     ebx, 10h; jumptable 000000014064C6FF case 31
 * 000000014064CBBB: jnz     loc_14064C98A
 * 000000014064CBC1: test    esi, esi
 * 000000014064CBC3: jnz     loc_14064C98A
 * 000000014064CBC9: mov     rcx, rdi
 * 000000014064CBCC: call    EtwpUseDescriptorTypeUm
 * 000000014064CBD1: mov     ebx, eax
 * 000000014064CBD3: jmp     loc_14064CDD5
 * 000000014064CBD8: cmp     ebx, 10h; jumptable 000000014064C6FF case 35
 * 000000014064CBDB: jnz     loc_14064C98A
 * 000000014064CBE1: test    esi, esi
 * 000000014064CBE3: jnz     loc_14064C98A
 * 000000014064CBE9: mov     rcx, rdi
 * 000000014064CBEC: call    EtwpSetCompressionSettings
 * 000000014064CBF1: mov     ebx, eax
 * 000000014064CBF3: jmp     loc_14064CDD5
 * 000000014064CBF8: cmp     ebx, 8; jumptable 000000014064C6FF case 36
 * 000000014064CBFB: jnz     loc_14064C98A
 * 000000014064CC01: cmp     esi, 10h
 * 000000014064CC04: jnz     loc_14064C98A
 * 000000014064CC0A: mov     dword ptr [rsp+98h+Size], esi
 * 000000014064CC0E: mov     rdx, rdi
 * 000000014064CC11: mov     rcx, rdi
 * 000000014064CC14: call    EtwpGetCompressionSettings
 * 000000014064CC19: mov     ebx, eax
 * 000000014064CC1B: jmp     loc_14064CDD5
 * 000000014064CC20: cmp     ebx, 0Ch; jumptable 000000014064C6FF case 37
 * 000000014064CC23: jb      loc_14064C98A
 * 000000014064CC29: movzx   r8d, word ptr [rdi+8]
 * 000000014064CC2E: cmp     r8w, 10h
 * 000000014064CC33: jbe     short loc_14064CC3F
 * 000000014064CC35: mov     ebx, 0C000000Dh
 * 000000014064CC3A: jmp     loc_14064CDD5
 * 000000014064CC3F: mov     edx, [rdi+4]
 * 000000014064CC42: lea     eax, [rdx-1]
 * 000000014064CC45: cmp     eax, 3
 * 000000014064CC48: ja      short loc_14064CC54
 * 000000014064CC4A: mov     ebx, 0C000000Dh
 * 000000014064CC4F: jmp     loc_14064CDD5
 * 000000014064CC54: test    r8w, r8w
 * 000000014064CC58: jnz     short loc_14064CC68
 * 000000014064CC5A: test    edx, edx
 * 000000014064CC5C: jnz     loc_14064C98A
 * 000000014064CC62: test    r8w, r8w
 * 000000014064CC66: jz      short loc_14064CC76
 * 000000014064CC68: test    edx, edx
 * 000000014064CC6A: jnz     short loc_14064CC76
 * 000000014064CC6C: mov     ebx, 0C000000Dh
 * 000000014064CC71: jmp     loc_14064CDD5
 * 000000014064CC76: movzx   ecx, r8w
 * 000000014064CC7A: shl     rcx, 4
 * 000000014064CC7E: add     rcx, 0Ch
 * 000000014064CC82: mov     eax, ebx
 * 000000014064CC84: cmp     rcx, rax
 * 000000014064CC87: jnz     loc_14064C98A
 * 000000014064CC8D: lea     rax, [rdi+0Ch]
 * 000000014064CC91: test    r8w, r8w
 * 000000014064CC95: cmovnz  r15, rax
 * 000000014064CC99: mov     r9, r15
 * 000000014064CC9C: mov     ecx, [rdi]
 * 000000014064CC9E: call    EtwpUpdatePeriodicCaptureState
 * 000000014064CCA3: mov     ebx, eax
 * 000000014064CCA5: jmp     loc_14064CDD5
 * 000000014064CCAA: cmp     ebx, 8; jumptable 000000014064C6FF case 38
 * 000000014064CCAD: jb      loc_14064C98A
 * 000000014064CCB3: test    bl, 7
 * 000000014064CCB6: jnz     loc_14064C98A
 * 000000014064CCBC: cmp     esi, 2
 * 000000014064CCBF: jb      loc_14064C98A
 * 000000014064CCC5: shr     ebx, 3
 * 000000014064CCC8: lea     r8, [rsp+98h+var_68]
 * 000000014064CCCD: mov     edx, ebx
 * 000000014064CCCF: mov     rcx, rdi
 * 000000014064CCD2: call    EtwpGetPrivateSessionTraceHandle
 * 000000014064CCD7: mov     ebx, eax
 * 000000014064CCD9: test    eax, eax
 * 000000014064CCDB: jnz     loc_14064CDD5
 * 000000014064CCE1: mov     dword ptr [rsp+98h+Size], 2
 * 000000014064CCE9: movzx   eax, [rsp+98h+var_68]
 * 000000014064CCEE: mov     [rdi], ax
 * 000000014064CCF1: jmp     loc_14064CDD5
 * 000000014064CCF6: cmp     ebx, 2; jumptable 000000014064C6FF case 39
 * 000000014064CCF9: jb      loc_14064C98A
 * 000000014064CCFF: cmp     esi, 8
 * 000000014064CD02: jb      loc_14064C98A
 * 000000014064CD08: call    EtwpGetCurrentSiloState
 * 000000014064CD0D: mov     rcx, rax
 * 000000014064CD10: mov     r9, rdi
 * 000000014064CD13: lea     r8, [rdi+4]
 * 000000014064CD17: movzx   edx, word ptr [rdi]
 * 000000014064CD1A: call    EtwpRegisterPrivateSession
 * 000000014064CD1F: mov     ebx, eax
 * 000000014064CD21: test    eax, eax
 * 000000014064CD23: jnz     loc_14064CDD5
 * 000000014064CD29: mov     dword ptr [rsp+98h+Size], 8
 * 000000014064CD31: jmp     loc_14064CDD5
 * 000000014064CD36: cmp     ebx, 8; jumptable 000000014064C6FF case 40
 * 000000014064CD39: jb      loc_14064C98A
 * 000000014064CD3F: cmp     esi, 2
 * 000000014064CD42: jb      loc_14064C98A
 * 000000014064CD48: mov     rdx, rdi
 * 000000014064CD4B: mov     rcx, [rdi]
 * 000000014064CD4E: call    EtwpQuerySessionDemuxObject
 * 000000014064CD53: mov     ebx, eax
 * 000000014064CD55: test    eax, eax
 * 000000014064CD57: jnz     short loc_14064CDD5
 * 000000014064CD59: mov     dword ptr [rsp+98h+Size], 2
 * 000000014064CD61: jmp     short loc_14064CDD5
 * 000000014064CD63: cmp     ebx, 8; jumptable 000000014064C6FF case 41
 * 000000014064CD66: jb      loc_14064C98A
 * 000000014064CD6C: movzx   r8d, byte ptr [rdi+4]
 * 000000014064CD71: mov     edx, [rdi]
 * 000000014064CD73: mov     rcx, r14
 * 000000014064CD76: call    EtwpSetProviderBinaryTracking
 * 000000014064CD7B: mov     ebx, eax
 * 000000014064CD7D: jmp     short loc_14064CDD5
 * 000000014064CD7F: mov     rcx, [rsp+98h+Address]; jumptable 000000014064C6FF case 42
 * 000000014064CD87: cmp     esi, 4
 * 000000014064CD8A: mov     esi, [rsp+98h+var_64]
 * 000000014064CD8E: jb      short loc_14064CDA3
 * 000000014064CD90: mov     eax, [r14+10h]
 * 000000014064CD94: mov     [rdi], eax
 * 000000014064CD96: mov     dword ptr [rsp+98h+Size], 4
 * 000000014064CD9E: mov     ebx, r15d
 * 000000014064CDA1: jmp     short loc_14064CDE1
 * 000000014064CDA3: mov     ebx, 0C000000Dh
 * 000000014064CDA8: jmp     short loc_14064CDE1
 * 000000014064CDAA: mov     rcx, [rsp+98h+Address]; jumptable 000000014064C6FF case 43
 * 000000014064CDB2: cmp     esi, 4
 * 000000014064CDB5: mov     esi, [rsp+98h+var_64]
 * 000000014064CDB9: jb      short loc_14064CDA3
 * 000000014064CDBB: mov     eax, cs:EtwpMaxPmcCounter
 * 000000014064CDC1: mov     [rdi], eax
 * 000000014064CDC3: mov     dword ptr [rsp+98h+Size], 4
 * 000000014064CDCB: mov     ebx, r15d
 * 000000014064CDCE: jmp     short loc_14064CDE1
 * 000000014064CDD0: mov     ebx, 0C0000010h; jumptable 000000014064C6FF default case, cases 7-10,29
 * 000000014064CDD5: mov     rcx, [rsp+98h+Address]; void *
 * 000000014064CDDD: mov     esi, [rsp+98h+var_64]
 * 000000014064CDE1: test    ebx, ebx
 * 000000014064CDE3: js      short loc_14064CE08
 * 000000014064CDE5: mov     eax, dword ptr [rsp+98h+Size]
 * 000000014064CDE9: test    eax, eax
 * 000000014064CDEB: jz      short loc_14064CDF8
 * 000000014064CDED: mov     r8d, eax; Size
 * 000000014064CDF0: mov     rdx, rdi; Src
 * 000000014064CDF3: call    memmove
 * 000000014064CDF8: mov     eax, dword ptr [rsp+98h+Size]
 * 000000014064CDFC: mov     rcx, [rsp+98h+ReturnLength]
 * 000000014064CE04: mov     [rcx], eax
 * 000000014064CE06: jmp     short loc_14064CE10
 * 000000014064CE08: mov     rcx, [rsp+98h+ReturnLength]
 * 000000014064CE10: cmp     ebx, 0C0000023h
 * 000000014064CE16: jnz     short loc_14064CE28
 * 000000014064CE18: lea     eax, [rsi-0Fh]
 * 000000014064CE1B: cmp     eax, 1
 * 000000014064CE1E: jbe     short loc_14064CE3D
 * 000000014064CE20: lea     eax, [rsi-15h]
 * 000000014064CE23: cmp     eax, 1
 * 000000014064CE26: jbe     short loc_14064CE3D
 * 000000014064CE28: cmp     esi, 28h ; '('
 * 000000014064CE2B: ja      short loc_14064CE43
 * 000000014064CE2D: mov     rdx, 1D700880000h
 * 000000014064CE37: bt      rdx, rsi
 * 000000014064CE3B: jnb     short loc_14064CE43
 * 000000014064CE3D: mov     eax, dword ptr [rsp+98h+Size]
 * 000000014064CE41: mov     [rcx], eax
 * 000000014064CE43: jmp     short loc_14064CE4C
 * 000000014064CE45: mov     ebx, eax
 * 000000014064CE47: mov     rdi, [rsp+98h+Src]
 * 000000014064CE4C: test    rdi, rdi
 * 000000014064CE4F: jz      short loc_14064CE5B
 * 000000014064CE51: xor     edx, edx; Tag
 * 000000014064CE53: mov     rcx, rdi; P
 * 000000014064CE56: call    ExFreePoolWithTag
 * 000000014064CE5B: mov     eax, ebx
 * 000000014064CE5D: add     rsp, 60h
 * 000000014064CE61: pop     r15
 * 000000014064CE63: pop     r14
 * 000000014064CE65: pop     r13
 * 000000014064CE67: pop     r12
 * 000000014064CE69: pop     rdi
 * 000000014064CE6A: pop     rsi
 * 000000014064CE6B: pop     rbx
 * 000000014064CE6C: retn
 * 000000014064CF30: retf
 */
