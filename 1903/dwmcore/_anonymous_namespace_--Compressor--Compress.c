/*
 * XREFs of _anonymous_namespace_::Compressor::Compress @ 0x1800D13DC
 * Callers:
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18007C2F8 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180077C08 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800D14F0 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _anonymous_namespace_::Compressor::Compress @ 0x1800D13DC
 * Reason: Hex-Rays returned no pseudocode for 0x1800D13DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800D13DC: mov     [rsp+arg_8], rbx
 * 00000001800D13E1: mov     [rsp+arg_18], rsi
 * 00000001800D13E6: push    rdi; output_used
 * 00000001800D13E7: sub     rsp, 30h
 * 00000001800D13EB: xor     edx, edx
 * 00000001800D13ED: mov     rsi, r8
 * 00000001800D13F0: mov     rbx, rcx
 * 00000001800D13F3: lea     r8, [rsp+38h+context]
 * 00000001800D13F8: lea     ecx, [rdx+2]
 * 00000001800D13FB: call    cs:__imp_CreateCompressor
 * 00000001800D1401: mov     rdx, [rsp+38h+context]
 * 00000001800D1406: xor     edi, edi
 * 00000001800D1408: mov     rcx, [rsi+8]
 * 00000001800D140C: cmp     eax, 1
 * 00000001800D140F: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001800D1419: cmovnz  rdx, rdi
 * 00000001800D141D: sub     rcx, [rsi]
 * 00000001800D1420: mov     [rsp+38h+context], rdx
 * 00000001800D1425: mul     rcx
 * 00000001800D1428: mov     rcx, rbx
 * 00000001800D142B: shr     rdx, 3
 * 00000001800D142F: call    ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z; std::vector<uchar>::vector<uchar>(unsigned __int64,std::allocator<uchar> const &)
 * 00000001800D1434: mov     rax, [rbx+8]
 * 00000001800D1438: lea     rcx, [rsp+38h+arg_10]
 * 00000001800D143D: mov     r8, [rsi+8]
 * 00000001800D1441: sub     rax, [rbx]
 * 00000001800D1444: sub     r8, [rsi]; input_buffer_size
 * 00000001800D1447: mov     r9, [rbx]; output_buffer
 * 00000001800D144A: mov     rdx, [rsi]; input_buffer
 * 00000001800D144D: mov     [rsp+38h+input_used], rcx; input_used
 * 00000001800D1452: mov     rcx, [rsp+38h+context]; context
 * 00000001800D1457: mov     qword ptr [rsp+38h+output_buffer_size], rax; output_buffer_size
 * 00000001800D145C: call    cs:__imp_Compress
 * 00000001800D1462: cmp     eax, 1
 * 00000001800D1465: jz      short loc_1800D14B2
 * 00000001800D1467: call    cs:__imp_GetLastError
 * 00000001800D146D: cmp     eax, 7Ah ; 'z'
 * 00000001800D1470: jnz     short loc_1800D14E0
 * 00000001800D1472: mov     rdx, qword ptr [rsp+38h+arg_10]
 * 00000001800D1477: mov     rcx, rbx
 * 00000001800D147A: call    std__vector_unsigned_char_std__allocator_unsigned_char______Resize__lambda_2b51424039c320f102fd798e073c89b2___
 * 00000001800D147F: mov     rax, [rbx+8]
 * 00000001800D1483: lea     rcx, [rsp+38h+arg_10]
 * 00000001800D1488: mov     r8, [rsi+8]
 * 00000001800D148C: sub     rax, [rbx]
 * 00000001800D148F: sub     r8, [rsi]; input_buffer_size
 * 00000001800D1492: mov     r9, [rbx]; output_buffer
 * 00000001800D1495: mov     rdx, [rsi]; input_buffer
 * 00000001800D1498: mov     [rsp+38h+input_used], rcx; input_used
 * 00000001800D149D: mov     rcx, [rsp+38h+context]; context
 * 00000001800D14A2: mov     qword ptr [rsp+38h+output_buffer_size], rax; output_buffer_size
 * 00000001800D14A7: call    cs:__imp_Compress
 * 00000001800D14AD: cmp     eax, 1
 * 00000001800D14B0: jnz     short loc_1800D14E0
 * 00000001800D14B2: mov     rdi, qword ptr [rsp+38h+arg_10]
 * 00000001800D14B7: mov     rdx, rdi
 * 00000001800D14BA: mov     rcx, rbx
 * 00000001800D14BD: call    std__vector_unsigned_char_std__allocator_unsigned_char______Resize__lambda_2b51424039c320f102fd798e073c89b2___
 * 00000001800D14C2: mov     rcx, [rsp+38h+context]
 * 00000001800D14C7: call    cs:__imp_CloseCompressor
 * 00000001800D14CD: mov     rsi, [rsp+38h+arg_18]
 * 00000001800D14D2: mov     rax, rbx
 * 00000001800D14D5: mov     rbx, [rsp+38h+arg_8]
 * 00000001800D14DA: add     rsp, 30h
 * 00000001800D14DE: pop     rdi
 * 00000001800D14DF: retn
 * 00000001800D14E0: mov     qword ptr [rsp+38h+arg_10], rdi
 * 00000001800D14E5: jmp     short loc_1800D14B7
 */
