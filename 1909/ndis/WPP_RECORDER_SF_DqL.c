/*
 * XREFs of WPP_RECORDER_SF_DqL @ 0x1C0006400
 * Callers:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0036BC0 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00FAB00 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00FAED0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z @ 0x1C00FBCA0 (-ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryLoopbackObject@@YAHPEAXIPEAK0@Z @ 0x1C00FBF10 (-ndisIfQueryLoopbackObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00FF134 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DqL @ 0x1C0006400
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006400: mov     [rsp+arg_0], rbx
 * 00000001C0006405: push    rdi
 * 00000001C0006406: sub     rsp, 60h
 * 00000001C000640A: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0006411: movzx   ebx, r9w
 * 00000001C0006415: mov     rdi, rcx
 * 00000001C0006418: test    dword ptr [rax+2Ch], 200000h
 * 00000001C000641F: jnz     loc_1C004544A
 * 00000001C0006425: mov     [rsp+68h+var_10], 0
 * 00000001C000642E: lea     rax, [rsp+68h+arg_38]
 * 00000001C0006436: mov     [rsp+68h+var_18], 4
 * 00000001C000643F: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0006446: mov     [rsp+68h+var_20], rax
 * 00000001C000644B: mov     edx, 4
 * 00000001C0006450: mov     [rsp+68h+var_28], 8
 * 00000001C0006459: lea     rax, [rsp+68h+arg_30]
 * 00000001C0006461: mov     [rsp+68h+var_30], rax
 * 00000001C0006466: mov     rcx, rdi
 * 00000001C0006469: lea     rax, [rsp+68h+arg_28]
 * 00000001C0006471: mov     [rsp+68h+var_38], 4
 * 00000001C000647A: mov     [rsp+68h+var_40], rax
 * 00000001C000647F: lea     r8d, [rdx+12h]
 * 00000001C0006483: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C0006488: call    cs:__imp_WppAutoLogTrace
 * 00000001C000648F: nop     dword ptr [rax+rax+00h]
 * 00000001C0006494: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0006499: add     rsp, 60h
 * 00000001C000649D: pop     rdi
 * 00000001C000649E: retn
 * 00000001C004544A: cmp     byte ptr [rax+29h], 4
 * 00000001C004544E: jb      loc_1C0006425
 * 00000001C0045454: mov     [rsp+68h+var_28], 0
 * 00000001C004545D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0045465: mov     [rsp+68h+var_30], 4
 * 00000001C004546E: lea     r8, [rsp+68h+arg_28]
 * 00000001C0045476: mov     [rsp+68h+var_38], rax
 * 00000001C004547B: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C0045482: lea     rax, [rsp+68h+arg_30]
 * 00000001C004548A: mov     [rsp+68h+var_40], 8
 * 00000001C0045493: mov     r9d, 4
 * 00000001C0045499: movzx   edx, bx; unsigned __int16
 * 00000001C004549C: mov     [rsp+68h+var_48], rax
 * 00000001C00454A1: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00454A6: nop
 * 00000001C00454A7: jmp     loc_1C0006425
 */
