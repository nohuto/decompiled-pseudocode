/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x1C000176C
 * Callers:
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0001560 (NVMeGetLogPageCompletion.c)
 *     NVMeStartAsyncEventCommands @ 0x1C000F8DC (NVMeStartAsyncEventCommands.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIssueAsyncEventCommand @ 0x1C000176C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000176C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000176C: mov     [rsp+arg_0], rbx
 * 00000001C0001771: mov     [rsp+arg_8], rbp
 * 00000001C0001776: mov     [rsp+arg_10], rsi
 * 00000001C000177B: push    rdi
 * 00000001C000177C: sub     rsp, 70h
 * 00000001C0001780: mov     rdi, rdx
 * 00000001C0001783: mov     rbx, rcx
 * 00000001C0001786: xor     ebp, ebp
 * 00000001C0001788: mov     r8d, 10A0h; Size
 * 00000001C000178E: mov     [rdx+0Bh], bpl
 * 00000001C0001792: xor     edx, edx; Val
 * 00000001C0001794: mov     rcx, [rdi+60h]; void *
 * 00000001C0001798: call    memset
 * 00000001C000179D: mov     rax, [rdi+60h]
 * 00000001C00017A1: lea     rcx, NVMeAsyncEventRequestCompletion
 * 00000001C00017A8: lea     rsi, [rdi+8]
 * 00000001C00017AC: mov     rdx, rsi
 * 00000001C00017AF: mov     [rax+1088h], rbp
 * 00000001C00017B6: mov     rax, [rdi+60h]
 * 00000001C00017BA: mov     [rdi+40h], rax
 * 00000001C00017BE: mov     dword ptr [rdi], 1
 * 00000001C00017C4: or      byte ptr [rax+109Dh], 1
 * 00000001C00017CB: mov     rax, [rdi+60h]
 * 00000001C00017CF: and     byte ptr [rax+109Dh], 0FDh
 * 00000001C00017D6: mov     rax, [rdi+60h]
 * 00000001C00017DA: mov     [rax+1094h], bp
 * 00000001C00017E1: mov     rax, [rdi+60h]
 * 00000001C00017E5: mov     byte ptr [rax+1000h], 0Ch
 * 00000001C00017EC: mov     rax, [rdi+60h]
 * 00000001C00017F0: mov     [rax+1080h], rcx
 * 00000001C00017F7: mov     rcx, rbx
 * 00000001C00017FA: call    ProcessCommand
 * 00000001C00017FF: mov     al, [rdi+0Bh]
 * 00000001C0001802: xor     r8d, r8d
 * 00000001C0001805: mov     rdx, rbx
 * 00000001C0001808: cmp     al, 2
 * 00000001C000180A: jb      short loc_1C0001872
 * 00000001C000180C: inc     dword ptr [rbx+0EDCh]
 * 00000001C0001812: lea     r9d, [rbp+1]
 * 00000001C0001816: mov     eax, [rbx+0EDCh]
 * 00000001C000181C: movzx   ecx, byte ptr [rdi+0Bh]
 * 00000001C0001820: mov     [rsp+78h+var_10], rax
 * 00000001C0001825: lea     rax, aIssueAsyncCmdF; "Issue Async Cmd Fail Count"
 * 00000001C000182C: mov     [rsp+78h+var_18], rax
 * 00000001C0001831: lea     rax, aSrbStatus; "Srb Status"
 * 00000001C0001838: mov     [rsp+78h+var_20], rcx
 * 00000001C000183D: mov     [rsp+78h+var_28], rax
 * 00000001C0001842: lea     rax, aNvmeIssueAsync_0; "NVMe Issue Async Event Failed"
 * 00000001C0001849: mov     [rsp+78h+var_30], rsi
 * 00000001C000184E: mov     [rsp+78h+var_38], ebp
 * 00000001C0001852: mov     [rsp+78h+var_40], 2
 * 00000001C000185A: mov     [rsp+78h+var_48], 20h ; ' '
 * 00000001C0001863: mov     [rsp+78h+var_50], rax
 * 00000001C0001868: mov     [rsp+78h+var_58], 0Ch
 * 00000001C0001870: jmp     short loc_1C00018BE
 * 00000001C0001872: mov     [rsp+78h+var_10], rbp
 * 00000001C0001877: mov     ecx, 4
 * 00000001C000187C: mov     [rsp+78h+var_18], rbp
 * 00000001C0001881: xor     r9d, r9d
 * 00000001C0001884: movzx   eax, al
 * 00000001C0001887: mov     [rsp+78h+var_20], rax
 * 00000001C000188C: lea     rax, aSrbStatus; "Srb Status"
 * 00000001C0001893: mov     [rsp+78h+var_28], rax
 * 00000001C0001898: lea     rax, aNvmeIssueAsync; "NVMe Issue Async Event Issued"
 * 00000001C000189F: mov     [rsp+78h+var_30], rsi
 * 00000001C00018A4: mov     [rsp+78h+var_38], ebp
 * 00000001C00018A8: mov     [rsp+78h+var_40], ecx
 * 00000001C00018AC: mov     [rsp+78h+var_48], 20h ; ' '
 * 00000001C00018B5: mov     [rsp+78h+var_50], rax
 * 00000001C00018BA: mov     [rsp+78h+var_58], ecx
 * 00000001C00018BE: mov     ecx, 55h ; 'U'
 * 00000001C00018C3: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00018CA: nop     dword ptr [rax+rax+00h]
 * 00000001C00018CF: lea     r11, [rsp+78h+var_8]
 * 00000001C00018D4: mov     rbx, [r11+10h]
 * 00000001C00018D8: mov     rbp, [r11+18h]
 * 00000001C00018DC: mov     rsi, [r11+20h]
 * 00000001C00018E0: mov     rsp, r11
 * 00000001C00018E3: pop     rdi
 * 00000001C00018E4: retn
 */
