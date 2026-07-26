/*
 * XREFs of WPP_RECORDER_SF__guid_D @ 0x1C00C73FC
 * Callers:
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00FDDBC (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE080 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE1E4 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FE494 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE61C (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_D @ 0x1C00C73FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00C73FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00C73FC: mov     r11, rsp
 * 00000001C00C73FF: mov     [r11+8], rbx
 * 00000001C00C7403: mov     [r11+10h], rsi
 * 00000001C00C7407: push    rdi
 * 00000001C00C7408: sub     rsp, 50h
 * 00000001C00C740C: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00C7413: movzx   ebx, r9w
 * 00000001C00C7417: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00C741F: mov     rsi, rcx
 * 00000001C00C7422: test    dword ptr [rdx+2Ch], 8000000h
 * 00000001C00C7429: jz      short loc_1C00C745E
 * 00000001C00C742B: cmp     byte ptr [rdx+29h], 5
 * 00000001C00C742F: jb      short loc_1C00C745E
 * 00000001C00C7431: and     qword ptr [r11-28h], 0
 * 00000001C00C7436: lea     rax, [r11+38h]
 * 00000001C00C743A: mov     qword ptr [r11-30h], 4
 * 00000001C00C7442: lea     rcx, WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids; struct _GUID *
 * 00000001C00C7449: mov     r9d, 10h
 * 00000001C00C744F: movzx   edx, bx; unsigned __int16
 * 00000001C00C7452: mov     r8, rdi
 * 00000001C00C7455: mov     [r11-38h], rax
 * 00000001C00C7459: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00C745E: and     [rsp+58h+var_10], 0
 * 00000001C00C7464: lea     rax, [rsp+58h+arg_30]
 * 00000001C00C746C: mov     [rsp+58h+var_18], 4
 * 00000001C00C7475: lea     r9, WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids
 * 00000001C00C747C: mov     [rsp+58h+var_20], rax
 * 00000001C00C7481: mov     edx, 5
 * 00000001C00C7486: mov     [rsp+58h+var_28], 10h
 * 00000001C00C748F: mov     rcx, rsi
 * 00000001C00C7492: mov     [rsp+58h+var_30], rdi
 * 00000001C00C7497: mov     [rsp+58h+var_38], bx
 * 00000001C00C749C: lea     r8d, [rdx+17h]
 * 00000001C00C74A0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00C74A7: nop     dword ptr [rax+rax+00h]
 * 00000001C00C74AC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00C74B1: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00C74B6: add     rsp, 50h
 * 00000001C00C74BA: pop     rdi
 * 00000001C00C74BB: retn
 */
