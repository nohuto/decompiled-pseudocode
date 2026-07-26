/*
 * XREFs of WPP_RECORDER_SF_qDq @ 0x1C00083F0
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ndisFDoOidRequestInternal @ 0x1C00072E0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ndisQueryDeviceOid @ 0x1C00121B0 (ndisQueryDeviceOid.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C008EB08 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C008EC6C (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C008ED3C (ndisFInvokeSynchronousOidRequest.c)
 *     ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C0094574 (-ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C009AFF0 (ndisMInvokeSynchronousOidRequest.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDq @ 0x1C00083F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00083F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00083F0: mov     [rsp+arg_0], rbx
 * 00000001C00083F5: mov     [rsp+arg_8], rbp
 * 00000001C00083FA: push    rdi
 * 00000001C00083FB: sub     rsp, 60h
 * 00000001C00083FF: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0008406: movzx   edi, r9w
 * 00000001C000840A: movzx   ebx, dl
 * 00000001C000840D: mov     rbp, rcx
 * 00000001C0008410: test    dword ptr [rax+2Ch], 400h
 * 00000001C0008417: jnz     loc_1C00460F4
 * 00000001C000841D: mov     r9, [rsp+68h+arg_20]
 * 00000001C0008425: lea     rax, [rsp+68h+arg_38]
 * 00000001C000842D: mov     [rsp+68h+var_10], 0
 * 00000001C0008436: mov     r8d, 0Bh
 * 00000001C000843C: mov     [rsp+68h+var_18], 8
 * 00000001C0008445: mov     rcx, rbp
 * 00000001C0008448: mov     [rsp+68h+var_20], rax
 * 00000001C000844D: lea     rax, [rsp+68h+arg_30]
 * 00000001C0008455: mov     [rsp+68h+var_28], 4
 * 00000001C000845E: mov     [rsp+68h+var_30], rax
 * 00000001C0008463: lea     rax, [rsp+68h+arg_28]
 * 00000001C000846B: mov     [rsp+68h+var_38], 8
 * 00000001C0008474: mov     [rsp+68h+var_40], rax
 * 00000001C0008479: movzx   edx, bl
 * 00000001C000847C: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0008481: call    cs:__imp_WppAutoLogTrace
 * 00000001C0008488: nop     dword ptr [rax+rax+00h]
 * 00000001C000848D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0008492: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0008497: add     rsp, 60h
 * 00000001C000849B: pop     rdi
 * 00000001C000849C: retn
 * 00000001C00460F4: cmp     [rax+29h], bl
 * 00000001C00460F7: jb      loc_1C000841D
 * 00000001C00460FD: mov     rcx, [rsp+68h+arg_20]; struct _GUID *
 * 00000001C0046105: lea     rax, [rsp+68h+arg_38]
 * 00000001C004610D: mov     [rsp+68h+var_28], 0
 * 00000001C0046116: lea     r8, [rsp+68h+arg_28]
 * 00000001C004611E: mov     [rsp+68h+var_30], 8
 * 00000001C0046127: mov     r9d, 8
 * 00000001C004612D: mov     [rsp+68h+var_38], rax
 * 00000001C0046132: lea     rax, [rsp+68h+arg_30]
 * 00000001C004613A: mov     [rsp+68h+var_40], 4
 * 00000001C0046143: movzx   edx, di; unsigned __int16
 * 00000001C0046146: mov     [rsp+68h+var_48], rax
 * 00000001C004614B: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0046150: nop
 * 00000001C0046151: jmp     loc_1C000841D
 */
