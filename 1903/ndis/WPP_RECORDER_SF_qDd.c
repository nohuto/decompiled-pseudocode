/*
 * XREFs of WPP_RECORDER_SF_qDd @ 0x1C0008570
 * Callers:
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     NdisFOidRequest @ 0x1C0007DB0 (NdisFOidRequest.c)
 *     ndisMFakeOidRequest @ 0x1C0014980 (ndisMFakeOidRequest.c)
 *     ndisOidPMRemove @ 0x1C0022E6C (ndisOidPMRemove.c)
 *     ?ndisMRawInvokeDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00978A0 (-ndisMRawInvokeDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisMFakeDirectOidRequest @ 0x1C009A4C0 (ndisMFakeDirectOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDd @ 0x1C0008570
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008570
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008570: mov     [rsp+arg_0], rbx
 * 00000001C0008575: mov     [rsp+arg_8], rbp
 * 00000001C000857A: push    rdi
 * 00000001C000857B: sub     rsp, 60h
 * 00000001C000857F: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0008586: movzx   edi, r9w
 * 00000001C000858A: movzx   ebx, dl
 * 00000001C000858D: mov     rbp, rcx
 * 00000001C0008590: test    dword ptr [rax+2Ch], 400h
 * 00000001C0008597: jnz     loc_1C00461D0
 * 00000001C000859D: mov     r9, [rsp+68h+arg_20]
 * 00000001C00085A5: lea     rax, [rsp+68h+arg_38]
 * 00000001C00085AD: mov     [rsp+68h+var_10], 0
 * 00000001C00085B6: mov     r8d, 0Bh
 * 00000001C00085BC: mov     [rsp+68h+var_18], 4
 * 00000001C00085C5: mov     rcx, rbp
 * 00000001C00085C8: mov     [rsp+68h+var_20], rax
 * 00000001C00085CD: lea     rax, [rsp+68h+arg_30]
 * 00000001C00085D5: mov     [rsp+68h+var_28], 4
 * 00000001C00085DE: mov     [rsp+68h+var_30], rax
 * 00000001C00085E3: lea     rax, [rsp+68h+arg_28]
 * 00000001C00085EB: mov     [rsp+68h+var_38], 8
 * 00000001C00085F4: mov     [rsp+68h+var_40], rax
 * 00000001C00085F9: movzx   edx, bl
 * 00000001C00085FC: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0008601: call    cs:__imp_WppAutoLogTrace
 * 00000001C0008608: nop     dword ptr [rax+rax+00h]
 * 00000001C000860D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0008612: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0008617: add     rsp, 60h
 * 00000001C000861B: pop     rdi
 * 00000001C000861C: retn
 * 00000001C00461D0: cmp     [rax+29h], bl
 * 00000001C00461D3: jb      loc_1C000859D
 * 00000001C00461D9: mov     rcx, [rsp+68h+arg_20]; struct _GUID *
 * 00000001C00461E1: lea     rax, [rsp+68h+arg_38]
 * 00000001C00461E9: mov     [rsp+68h+var_28], 0
 * 00000001C00461F2: lea     r8, [rsp+68h+arg_28]
 * 00000001C00461FA: mov     [rsp+68h+var_30], 4
 * 00000001C0046203: mov     r9d, 8
 * 00000001C0046209: mov     [rsp+68h+var_38], rax
 * 00000001C004620E: lea     rax, [rsp+68h+arg_30]
 * 00000001C0046216: mov     [rsp+68h+var_40], 4
 * 00000001C004621F: movzx   edx, di; unsigned __int16
 * 00000001C0046222: mov     [rsp+68h+var_48], rax
 * 00000001C0046227: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C004622C: nop
 * 00000001C004622D: jmp     loc_1C000859D
 */
