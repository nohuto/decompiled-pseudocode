/*
 * XREFs of _anonymous_namespace_::Compressor::Compress @ 0x1800D18F4
 * Callers:
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x180041048 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18003D8E8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800D1A08 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _anonymous_namespace_::Compressor::Compress @ 0x1800D18F4
 * Reason: Hex-Rays returned no pseudocode for 0x1800D18F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800D18F4: mov     [rsp+arg_8], rbx
 * 00000001800D18F9: mov     [rsp+arg_18], rsi
 * 00000001800D18FE: push    rdi; output_used
 * 00000001800D18FF: sub     rsp, 30h
 * 00000001800D1903: xor     edx, edx
 * 00000001800D1905: mov     rsi, r8
 * 00000001800D1908: mov     rbx, rcx
 * 00000001800D190B: lea     r8, [rsp+38h+context]
 * 00000001800D1910: lea     ecx, [rdx+2]
 * 00000001800D1913: call    cs:__imp_CreateCompressor
 * 00000001800D1919: mov     rdx, [rsp+38h+context]
 * 00000001800D191E: xor     edi, edi
 * 00000001800D1920: mov     rcx, [rsi+8]
 * 00000001800D1924: cmp     eax, 1
 * 00000001800D1927: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001800D1931: cmovnz  rdx, rdi
 * 00000001800D1935: sub     rcx, [rsi]
 * 00000001800D1938: mov     [rsp+38h+context], rdx
 * 00000001800D193D: mul     rcx
 * 00000001800D1940: mov     rcx, rbx
 * 00000001800D1943: shr     rdx, 3
 * 00000001800D1947: call    ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z; std::vector<uchar>::vector<uchar>(unsigned __int64,std::allocator<uchar> const &)
 * 00000001800D194C: mov     rax, [rbx+8]
 * 00000001800D1950: lea     rcx, [rsp+38h+arg_10]
 * 00000001800D1955: mov     r8, [rsi+8]
 * 00000001800D1959: sub     rax, [rbx]
 * 00000001800D195C: sub     r8, [rsi]; input_buffer_size
 * 00000001800D195F: mov     r9, [rbx]; output_buffer
 * 00000001800D1962: mov     rdx, [rsi]; input_buffer
 * 00000001800D1965: mov     [rsp+38h+input_used], rcx; input_used
 * 00000001800D196A: mov     rcx, [rsp+38h+context]; context
 * 00000001800D196F: mov     qword ptr [rsp+38h+output_buffer_size], rax; output_buffer_size
 * 00000001800D1974: call    cs:__imp_Compress
 * 00000001800D197A: cmp     eax, 1
 * 00000001800D197D: jz      short loc_1800D19CA
 * 00000001800D197F: call    cs:__imp_GetLastError
 * 00000001800D1985: cmp     eax, 7Ah ; 'z'
 * 00000001800D1988: jnz     short loc_1800D19F8
 * 00000001800D198A: mov     rdx, qword ptr [rsp+38h+arg_10]
 * 00000001800D198F: mov     rcx, rbx
 * 00000001800D1992: call    std__vector_unsigned_char_std__allocator_unsigned_char______Resize__lambda_2b51424039c320f102fd798e073c89b2___
 * 00000001800D1997: mov     rax, [rbx+8]
 * 00000001800D199B: lea     rcx, [rsp+38h+arg_10]
 * 00000001800D19A0: mov     r8, [rsi+8]
 * 00000001800D19A4: sub     rax, [rbx]
 * 00000001800D19A7: sub     r8, [rsi]; input_buffer_size
 * 00000001800D19AA: mov     r9, [rbx]; output_buffer
 * 00000001800D19AD: mov     rdx, [rsi]; input_buffer
 * 00000001800D19B0: mov     [rsp+38h+input_used], rcx; input_used
 * 00000001800D19B5: mov     rcx, [rsp+38h+context]; context
 * 00000001800D19BA: mov     qword ptr [rsp+38h+output_buffer_size], rax; output_buffer_size
 * 00000001800D19BF: call    cs:__imp_Compress
 * 00000001800D19C5: cmp     eax, 1
 * 00000001800D19C8: jnz     short loc_1800D19F8
 * 00000001800D19CA: mov     rdi, qword ptr [rsp+38h+arg_10]
 * 00000001800D19CF: mov     rdx, rdi
 * 00000001800D19D2: mov     rcx, rbx
 * 00000001800D19D5: call    std__vector_unsigned_char_std__allocator_unsigned_char______Resize__lambda_2b51424039c320f102fd798e073c89b2___
 * 00000001800D19DA: mov     rcx, [rsp+38h+context]
 * 00000001800D19DF: call    cs:__imp_CloseCompressor
 * 00000001800D19E5: mov     rsi, [rsp+38h+arg_18]
 * 00000001800D19EA: mov     rax, rbx
 * 00000001800D19ED: mov     rbx, [rsp+38h+arg_8]
 * 00000001800D19F2: add     rsp, 30h
 * 00000001800D19F6: pop     rdi
 * 00000001800D19F7: retn
 * 00000001800D19F8: mov     qword ptr [rsp+38h+arg_10], rdi
 * 00000001800D19FD: jmp     short loc_1800D19CF
 */
