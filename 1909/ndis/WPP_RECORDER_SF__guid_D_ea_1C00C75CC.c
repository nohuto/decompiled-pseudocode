/*
 * XREFs of WPP_RECORDER_SF__guid_D @ 0x1C00C75CC
 * Callers:
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00FDDBC (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE080 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE1E4 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FE494 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE61C (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_D @ 0x1C00C75CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00C75CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00C75CC: mov     r11, rsp
 * 00000001C00C75CF: mov     [r11+8], rbx
 * 00000001C00C75D3: mov     [r11+10h], rsi
 * 00000001C00C75D7: push    rdi
 * 00000001C00C75D8: sub     rsp, 50h
 * 00000001C00C75DC: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00C75E3: movzx   ebx, r9w
 * 00000001C00C75E7: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00C75EF: mov     rsi, rcx
 * 00000001C00C75F2: test    dword ptr [rdx+2Ch], 8000000h
 * 00000001C00C75F9: jz      short loc_1C00C762E
 * 00000001C00C75FB: cmp     byte ptr [rdx+29h], 5
 * 00000001C00C75FF: jb      short loc_1C00C762E
 * 00000001C00C7601: and     qword ptr [r11-28h], 0
 * 00000001C00C7606: lea     rax, [r11+38h]
 * 00000001C00C760A: mov     qword ptr [r11-30h], 4
 * 00000001C00C7612: lea     rcx, WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids; struct _GUID *
 * 00000001C00C7619: mov     r9d, 10h
 * 00000001C00C761F: movzx   edx, bx; unsigned __int16
 * 00000001C00C7622: mov     r8, rdi
 * 00000001C00C7625: mov     [r11-38h], rax
 * 00000001C00C7629: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00C762E: and     [rsp+58h+var_10], 0
 * 00000001C00C7634: lea     rax, [rsp+58h+arg_30]
 * 00000001C00C763C: mov     [rsp+58h+var_18], 4
 * 00000001C00C7645: lea     r9, WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids
 * 00000001C00C764C: mov     [rsp+58h+var_20], rax
 * 00000001C00C7651: mov     edx, 5
 * 00000001C00C7656: mov     [rsp+58h+var_28], 10h
 * 00000001C00C765F: mov     rcx, rsi
 * 00000001C00C7662: mov     [rsp+58h+var_30], rdi
 * 00000001C00C7667: mov     [rsp+58h+var_38], bx
 * 00000001C00C766C: lea     r8d, [rdx+17h]
 * 00000001C00C7670: call    cs:__imp_WppAutoLogTrace
 * 00000001C00C7677: nop     dword ptr [rax+rax+00h]
 * 00000001C00C767C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00C7681: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00C7686: add     rsp, 50h
 * 00000001C00C768A: pop     rdi
 * 00000001C00C768B: retn
 */
