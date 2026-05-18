/*
 * XREFs of sub_180045810 @ 0x180045810
 * Callers:
 *     sub_180001290 @ 0x180001290 (sub_180001290.c)
 *     sub_1800014A0 @ 0x1800014A0 (sub_1800014A0.c)
 *     sub_180001590 @ 0x180001590 (sub_180001590.c)
 *     sub_180001680 @ 0x180001680 (sub_180001680.c)
 *     sub_180001770 @ 0x180001770 (sub_180001770.c)
 *     sub_180001860 @ 0x180001860 (sub_180001860.c)
 *     sub_180001950 @ 0x180001950 (sub_180001950.c)
 *     sub_180001A40 @ 0x180001A40 (sub_180001A40.c)
 *     sub_180001B30 @ 0x180001B30 (sub_180001B30.c)
 *     sub_180001C20 @ 0x180001C20 (sub_180001C20.c)
 *     sub_180001D10 @ 0x180001D10 (sub_180001D10.c)
 *     sub_180001E00 @ 0x180001E00 (sub_180001E00.c)
 *     sub_180001EF0 @ 0x180001EF0 (sub_180001EF0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     sub_1800455A8 @ 0x1800455A8 (sub_1800455A8.c)
 *     sub_1800455BC @ 0x1800455BC (sub_1800455BC.c)
 *     sub_1800455D0 @ 0x1800455D0 (sub_1800455D0.c)
 *     sub_1800D44B8 @ 0x1800D44B8 (sub_1800D44B8.c)
 *     sub_1800D45A4 @ 0x1800D45A4 (sub_1800D45A4.c)
 *     _alloca_probe @ 0x180126020 (_alloca_probe.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180045810 @ 0x180045810
 * Reason: Hex-Rays returned no pseudocode for 0x180045810
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180045810: push    rbp
 * 0000000180045812: push    r12
 * 0000000180045814: push    r13
 * 0000000180045816: push    r14
 * 0000000180045818: push    r15
 * 000000018004581A: lea     rbp, [rsp-9E00h]
 * 0000000180045822: mov     eax, 9F00h
 * 0000000180045827: call    _alloca_probe
 * 000000018004582C: sub     rsp, rax
 * 000000018004582F: mov     [rbp+9E20h+var_9060], 0FFFFFFFFFFFFFFFEh
 * 000000018004583A: mov     [rsp+9F20h+arg_8], rbx
 * 0000000180045842: mov     [rsp+9F20h+arg_10], rsi
 * 000000018004584A: mov     [rsp+9F20h+arg_18], rdi
 * 0000000180045852: mov     ebx, cs:TlsIndex
 * 0000000180045858: mov     rdi, gs:58h
 * 0000000180045861: mov     r15d, 2Ch ; ','
 * 0000000180045867: mov     rax, [rdi+rbx*8]
 * 000000018004586B: or      r14d, 0FFFFFFFFh
 * 000000018004586F: lea     esi, [r14+2]
 * 0000000180045873: lea     r13d, [r14+6]
 * 0000000180045877: lea     r12d, [r14+0Ah]
 * 000000018004587B: mov     eax, [r15+rax]
 * 000000018004587F: cmp     cs:dword_180269058, eax
 * 0000000180045885: jle     loc_180045966
 * 000000018004588B: lea     rcx, dword_180269058
 * 0000000180045892: call    _Init_thread_header
 * 0000000180045897: cmp     cs:dword_180269058, r14d
 * 000000018004589E: jnz     loc_180045966
 * 00000001800458A4: lea     rax, unk_180154160
 * 00000001800458AB: mov     qword ptr [rsp+9F20h+var_9EC0], rax
 * 00000001800458B0: lea     rax, unk_18015A544
 * 00000001800458B7: mov     qword ptr [rsp+9F20h+var_9EC0+8], rax
 * 00000001800458BC: movups  xmm0, [rsp+9F20h+var_9EC0]
 * 00000001800458C1: movups  [rbp+9E20h+var_89F8], xmm0
 * 00000001800458C8: mov     dword ptr [rbp+9E20h+var_89E8], r13d
 * 00000001800458CF: mov     dword ptr [rbp+9E20h+var_89E8+4], esi
 * 00000001800458D5: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800458DA: movups  xmm0, [rbp+9E20h+var_89E8]
 * 00000001800458E1: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800458E6: call    sub_1800455D0
 * 00000001800458EB: mov     r8, rax
 * 00000001800458EE: mov     r9d, r12d
 * 00000001800458F1: xor     edx, edx
 * 00000001800458F3: lea     rcx, [rbp+9E20h+Src]; Src
 * 00000001800458FA: call    sub_1800D44B8
 * 00000001800458FF: nop
 * 0000000180045900: mov     r8, rax
 * 0000000180045903: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 000000018004590A: lea     rcx, [rbp+9E20h+var_7028]
 * 0000000180045911: call    sub_1800453AC
 * 0000000180045916: nop
 * 0000000180045917: lea     r8, aPixel; "/Pixel"
 * 000000018004591E: mov     rdx, rax
 * 0000000180045921: lea     rcx, [rbp+9E20h+var_7048]
 * 0000000180045928: call    sub_18002BF78
 * 000000018004592D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045932: mov     rcx, rax
 * 0000000180045935: call    sub_1800D45A4
 * 000000018004593A: mov     cs:byte_180269054, al
 * 0000000180045940: lea     rcx, [rbp+9E20h+var_7028]; void *
 * 0000000180045947: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004594C: nop
 * 000000018004594D: lea     rcx, [rbp+9E20h+Src]; void *
 * 0000000180045954: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045959: nop
 * 000000018004595A: lea     rcx, dword_180269058
 * 0000000180045961: call    _Init_thread_footer
 * 0000000180045966: mov     rax, [rdi+rbx*8]
 * 000000018004596A: mov     eax, [r15+rax]
 * 000000018004596E: cmp     cs:dword_180269060, eax
 * 0000000180045974: jle     loc_180045A56
 * 000000018004597A: lea     rcx, dword_180269060
 * 0000000180045981: call    _Init_thread_header
 * 0000000180045986: cmp     cs:dword_180269060, r14d
 * 000000018004598D: jnz     loc_180045A56
 * 0000000180045993: lea     rax, unk_18015A550
 * 000000018004599A: mov     qword ptr [rsp+9F20h+var_9EB0], rax
 * 000000018004599F: lea     rax, unk_18015AF48
 * 00000001800459A6: mov     qword ptr [rsp+9F20h+var_9EB0+8], rax
 * 00000001800459AB: movups  xmm0, [rsp+9F20h+var_9EB0]
 * 00000001800459B0: movups  [rbp+9E20h+var_89D8], xmm0
 * 00000001800459B7: mov     dword ptr [rbp+9E20h+var_89C8], r13d
 * 00000001800459BE: mov     dword ptr [rbp+9E20h+var_89C8+4], esi
 * 00000001800459C4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800459C9: movups  xmm0, [rbp+9E20h+var_89C8]
 * 00000001800459D0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800459D5: call    sub_1800455D0
 * 00000001800459DA: mov     r8, rax
 * 00000001800459DD: mov     r9d, r12d
 * 00000001800459E0: mov     rdx, rsi
 * 00000001800459E3: lea     rcx, [rbp+9E20h+var_6FA8]; Src
 * 00000001800459EA: call    sub_1800D44B8
 * 00000001800459EF: nop
 * 00000001800459F0: mov     r8, rax
 * 00000001800459F3: lea     rdx, aStandardshader_2; "StandardShader/ShaderModel40/"
 * 00000001800459FA: lea     rcx, [rbp+9E20h+var_6FC8]
 * 0000000180045A01: call    sub_1800453AC
 * 0000000180045A06: nop
 * 0000000180045A07: lea     r8, aPixel_0; "/Pixel"
 * 0000000180045A0E: mov     rdx, rax
 * 0000000180045A11: lea     rcx, [rbp+9E20h+var_6FE8]
 * 0000000180045A18: call    sub_18002BF78
 * 0000000180045A1D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045A22: mov     rcx, rax
 * 0000000180045A25: call    sub_1800D45A4
 * 0000000180045A2A: mov     cs:byte_18026905C, al
 * 0000000180045A30: lea     rcx, [rbp+9E20h+var_6FC8]; void *
 * 0000000180045A37: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045A3C: nop
 * 0000000180045A3D: lea     rcx, [rbp+9E20h+var_6FA8]; void *
 * 0000000180045A44: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045A49: nop
 * 0000000180045A4A: lea     rcx, dword_180269060
 * 0000000180045A51: call    _Init_thread_footer
 * 0000000180045A56: mov     rax, [rdi+rbx*8]
 * 0000000180045A5A: mov     eax, [r15+rax]
 * 0000000180045A5E: cmp     cs:dword_180269068, eax
 * 0000000180045A64: jle     loc_180045B45
 * 0000000180045A6A: lea     rcx, dword_180269068
 * 0000000180045A71: call    _Init_thread_header
 * 0000000180045A76: cmp     cs:dword_180269068, r14d
 * 0000000180045A7D: jnz     loc_180045B45
 * 0000000180045A83: lea     rax, unk_180154160
 * 0000000180045A8A: mov     qword ptr [rbp+9E20h+var_9EA0], rax
 * 0000000180045A8E: lea     rax, unk_18015A544
 * 0000000180045A95: mov     qword ptr [rbp+9E20h+var_9EA0+8], rax
 * 0000000180045A99: movups  xmm0, [rbp+9E20h+var_9EA0]
 * 0000000180045A9D: movups  [rbp+9E20h+var_89B8], xmm0
 * 0000000180045AA4: mov     dword ptr [rbp+9E20h+var_89A8], r13d
 * 0000000180045AAB: mov     dword ptr [rbp+9E20h+var_89A8+4], esi
 * 0000000180045AB1: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045AB6: movups  xmm0, [rbp+9E20h+var_89A8]
 * 0000000180045ABD: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045AC2: call    sub_1800455D0
 * 0000000180045AC7: mov     r8, rax
 * 0000000180045ACA: mov     r9d, r12d
 * 0000000180045ACD: mov     edx, 2
 * 0000000180045AD2: lea     rcx, [rbp+9E20h+var_6F48]; Src
 * 0000000180045AD9: call    sub_1800D44B8
 * 0000000180045ADE: nop
 * 0000000180045ADF: mov     r8, rax
 * 0000000180045AE2: lea     rdx, aStandardshader_3; "StandardShader/ShaderModel40/"
 * 0000000180045AE9: lea     rcx, [rbp+9E20h+var_6F68]
 * 0000000180045AF0: call    sub_1800453AC
 * 0000000180045AF5: nop
 * 0000000180045AF6: lea     r8, aPixel_1; "/Pixel"
 * 0000000180045AFD: mov     rdx, rax
 * 0000000180045B00: lea     rcx, [rbp+9E20h+var_6F88]
 * 0000000180045B07: call    sub_18002BF78
 * 0000000180045B0C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045B11: mov     rcx, rax
 * 0000000180045B14: call    sub_1800D45A4
 * 0000000180045B19: mov     cs:byte_180269064, al
 * 0000000180045B1F: lea     rcx, [rbp+9E20h+var_6F68]; void *
 * 0000000180045B26: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045B2B: nop
 * 0000000180045B2C: lea     rcx, [rbp+9E20h+var_6F48]; void *
 * 0000000180045B33: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045B38: nop
 * 0000000180045B39: lea     rcx, dword_180269068
 * 0000000180045B40: call    _Init_thread_footer
 * 0000000180045B45: mov     rax, [rdi+rbx*8]
 * 0000000180045B49: mov     eax, [r15+rax]
 * 0000000180045B4D: cmp     cs:dword_180269070, eax
 * 0000000180045B53: jle     loc_180045C34
 * 0000000180045B59: lea     rcx, dword_180269070
 * 0000000180045B60: call    _Init_thread_header
 * 0000000180045B65: cmp     cs:dword_180269070, r14d
 * 0000000180045B6C: jnz     loc_180045C34
 * 0000000180045B72: lea     rax, unk_18015AF50
 * 0000000180045B79: mov     qword ptr [rbp+9E20h+var_9E90], rax
 * 0000000180045B7D: lea     rax, unk_18015E0F4
 * 0000000180045B84: mov     qword ptr [rbp+9E20h+var_9E90+8], rax
 * 0000000180045B88: movups  xmm0, [rbp+9E20h+var_9E90]
 * 0000000180045B8C: movups  [rbp+9E20h+var_8998], xmm0
 * 0000000180045B93: mov     dword ptr [rbp+9E20h+var_8988], r13d
 * 0000000180045B9A: mov     dword ptr [rbp+9E20h+var_8988+4], esi
 * 0000000180045BA0: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045BA5: movups  xmm0, [rbp+9E20h+var_8988]
 * 0000000180045BAC: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045BB1: call    sub_1800455D0
 * 0000000180045BB6: mov     r8, rax
 * 0000000180045BB9: mov     r9d, r12d
 * 0000000180045BBC: mov     edx, 4
 * 0000000180045BC1: lea     rcx, [rbp+9E20h+var_6EE8]; Src
 * 0000000180045BC8: call    sub_1800D44B8
 * 0000000180045BCD: nop
 * 0000000180045BCE: mov     r8, rax
 * 0000000180045BD1: lea     rdx, aStandardshader_4; "StandardShader/ShaderModel40/"
 * 0000000180045BD8: lea     rcx, [rbp+9E20h+var_6F08]
 * 0000000180045BDF: call    sub_1800453AC
 * 0000000180045BE4: nop
 * 0000000180045BE5: lea     r8, aPixel_2; "/Pixel"
 * 0000000180045BEC: mov     rdx, rax
 * 0000000180045BEF: lea     rcx, [rbp+9E20h+var_6F28]
 * 0000000180045BF6: call    sub_18002BF78
 * 0000000180045BFB: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045C00: mov     rcx, rax
 * 0000000180045C03: call    sub_1800D45A4
 * 0000000180045C08: mov     cs:byte_18026906C, al
 * 0000000180045C0E: lea     rcx, [rbp+9E20h+var_6F08]; void *
 * 0000000180045C15: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045C1A: nop
 * 0000000180045C1B: lea     rcx, [rbp+9E20h+var_6EE8]; void *
 * 0000000180045C22: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045C27: nop
 * 0000000180045C28: lea     rcx, dword_180269070
 * 0000000180045C2F: call    _Init_thread_footer
 * 0000000180045C34: mov     rax, [rdi+rbx*8]
 * 0000000180045C38: mov     ecx, [r15+rax]
 * 0000000180045C3C: cmp     cs:dword_180269078, ecx
 * 0000000180045C42: jle     loc_180045D21
 * 0000000180045C48: lea     rcx, dword_180269078
 * 0000000180045C4F: call    _Init_thread_header
 * 0000000180045C54: cmp     cs:dword_180269078, r14d
 * 0000000180045C5B: jnz     loc_180045D21
 * 0000000180045C61: lea     rax, unk_18015E100
 * 0000000180045C68: mov     qword ptr [rbp+9E20h+var_9E80], rax
 * 0000000180045C6C: lea     rax, unk_18015EAF8
 * 0000000180045C73: mov     qword ptr [rbp+9E20h+var_9E80+8], rax
 * 0000000180045C77: movups  xmm0, [rbp+9E20h+var_9E80]
 * 0000000180045C7B: movups  [rbp+9E20h+var_8978], xmm0
 * 0000000180045C82: mov     dword ptr [rbp+9E20h+var_8968], r13d
 * 0000000180045C89: mov     dword ptr [rbp+9E20h+var_8968+4], esi
 * 0000000180045C8F: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045C94: movups  xmm0, [rbp+9E20h+var_8968]
 * 0000000180045C9B: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045CA0: call    sub_1800455D0
 * 0000000180045CA5: mov     r8, rax
 * 0000000180045CA8: mov     r9d, r12d
 * 0000000180045CAB: mov     rdx, r13
 * 0000000180045CAE: lea     rcx, [rbp+9E20h+var_6E88]; Src
 * 0000000180045CB5: call    sub_1800D44B8
 * 0000000180045CBA: nop
 * 0000000180045CBB: mov     r8, rax
 * 0000000180045CBE: lea     rdx, aStandardshader_5; "StandardShader/ShaderModel40/"
 * 0000000180045CC5: lea     rcx, [rbp+9E20h+var_6EA8]
 * 0000000180045CCC: call    sub_1800453AC
 * 0000000180045CD1: nop
 * 0000000180045CD2: lea     r8, aPixel_3; "/Pixel"
 * 0000000180045CD9: mov     rdx, rax
 * 0000000180045CDC: lea     rcx, [rbp+9E20h+var_6EC8]
 * 0000000180045CE3: call    sub_18002BF78
 * 0000000180045CE8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045CED: mov     rcx, rax
 * 0000000180045CF0: call    sub_1800D45A4
 * 0000000180045CF5: mov     cs:byte_180269074, al
 * 0000000180045CFB: lea     rcx, [rbp+9E20h+var_6EA8]; void *
 * 0000000180045D02: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045D07: nop
 * 0000000180045D08: lea     rcx, [rbp+9E20h+var_6E88]; void *
 * 0000000180045D0F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045D14: nop
 * 0000000180045D15: lea     rcx, dword_180269078
 * 0000000180045D1C: call    _Init_thread_footer
 * 0000000180045D21: mov     rax, [rdi+rbx*8]
 * 0000000180045D25: mov     eax, [r15+rax]
 * 0000000180045D29: cmp     cs:dword_180269080, eax
 * 0000000180045D2F: jle     loc_180045E10
 * 0000000180045D35: lea     rcx, dword_180269080
 * 0000000180045D3C: call    _Init_thread_header
 * 0000000180045D41: cmp     cs:dword_180269080, r14d
 * 0000000180045D48: jnz     loc_180045E10
 * 0000000180045D4E: lea     rax, unk_18015AF50
 * 0000000180045D55: mov     qword ptr [rbp+9E20h+var_9E70], rax
 * 0000000180045D59: lea     rax, unk_18015E0F4
 * 0000000180045D60: mov     qword ptr [rbp+9E20h+var_9E70+8], rax
 * 0000000180045D64: movups  xmm0, [rbp+9E20h+var_9E70]
 * 0000000180045D68: movups  [rbp+9E20h+var_8958], xmm0
 * 0000000180045D6F: mov     dword ptr [rbp+9E20h+var_8948], r13d
 * 0000000180045D76: mov     dword ptr [rbp+9E20h+var_8948+4], esi
 * 0000000180045D7C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045D81: movups  xmm0, [rbp+9E20h+var_8948]
 * 0000000180045D88: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045D8D: call    sub_1800455D0
 * 0000000180045D92: mov     r8, rax
 * 0000000180045D95: mov     r9d, r12d
 * 0000000180045D98: mov     edx, 6
 * 0000000180045D9D: lea     rcx, [rbp+9E20h+var_6E28]; Src
 * 0000000180045DA4: call    sub_1800D44B8
 * 0000000180045DA9: nop
 * 0000000180045DAA: mov     r8, rax
 * 0000000180045DAD: lea     rdx, aStandardshader_6; "StandardShader/ShaderModel40/"
 * 0000000180045DB4: lea     rcx, [rbp+9E20h+var_6E48]
 * 0000000180045DBB: call    sub_1800453AC
 * 0000000180045DC0: nop
 * 0000000180045DC1: lea     r8, aPixel_4; "/Pixel"
 * 0000000180045DC8: mov     rdx, rax
 * 0000000180045DCB: lea     rcx, [rbp+9E20h+var_6E68]
 * 0000000180045DD2: call    sub_18002BF78
 * 0000000180045DD7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045DDC: mov     rcx, rax
 * 0000000180045DDF: call    sub_1800D45A4
 * 0000000180045DE4: mov     cs:byte_18026907C, al
 * 0000000180045DEA: lea     rcx, [rbp+9E20h+var_6E48]; void *
 * 0000000180045DF1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045DF6: nop
 * 0000000180045DF7: lea     rcx, [rbp+9E20h+var_6E28]; void *
 * 0000000180045DFE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045E03: nop
 * 0000000180045E04: lea     rcx, dword_180269080
 * 0000000180045E0B: call    _Init_thread_footer
 * 0000000180045E10: mov     rax, [rdi+rbx*8]
 * 0000000180045E14: mov     eax, [r15+rax]
 * 0000000180045E18: cmp     cs:dword_180269088, eax
 * 0000000180045E1E: jle     loc_180045EFF
 * 0000000180045E24: lea     rcx, dword_180269088
 * 0000000180045E2B: call    _Init_thread_header
 * 0000000180045E30: cmp     cs:dword_180269088, r14d
 * 0000000180045E37: jnz     loc_180045EFF
 * 0000000180045E3D: lea     rax, unk_18015EB00
 * 0000000180045E44: mov     qword ptr [rbp+9E20h+var_9E60], rax
 * 0000000180045E48: lea     rax, unk_18016508C
 * 0000000180045E4F: mov     qword ptr [rbp+9E20h+var_9E60+8], rax
 * 0000000180045E53: movups  xmm0, [rbp+9E20h+var_9E60]
 * 0000000180045E57: movups  [rbp+9E20h+var_8938], xmm0
 * 0000000180045E5E: mov     dword ptr [rbp+9E20h+var_8928], r13d
 * 0000000180045E65: mov     dword ptr [rbp+9E20h+var_8928+4], esi
 * 0000000180045E6B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045E70: movups  xmm0, [rbp+9E20h+var_8928]
 * 0000000180045E77: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045E7C: call    sub_1800455D0
 * 0000000180045E81: mov     r8, rax
 * 0000000180045E84: mov     r9d, r12d
 * 0000000180045E87: mov     edx, 8
 * 0000000180045E8C: lea     rcx, [rbp+9E20h+var_6DC8]; Src
 * 0000000180045E93: call    sub_1800D44B8
 * 0000000180045E98: nop
 * 0000000180045E99: mov     r8, rax
 * 0000000180045E9C: lea     rdx, aStandardshader_7; "StandardShader/ShaderModel40/"
 * 0000000180045EA3: lea     rcx, [rbp+9E20h+var_6DE8]
 * 0000000180045EAA: call    sub_1800453AC
 * 0000000180045EAF: nop
 * 0000000180045EB0: lea     r8, aPixel_5; "/Pixel"
 * 0000000180045EB7: mov     rdx, rax
 * 0000000180045EBA: lea     rcx, [rbp+9E20h+var_6E08]
 * 0000000180045EC1: call    sub_18002BF78
 * 0000000180045EC6: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045ECB: mov     rcx, rax
 * 0000000180045ECE: call    sub_1800D45A4
 * 0000000180045ED3: mov     cs:byte_180269084, al
 * 0000000180045ED9: lea     rcx, [rbp+9E20h+var_6DE8]; void *
 * 0000000180045EE0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045EE5: nop
 * 0000000180045EE6: lea     rcx, [rbp+9E20h+var_6DC8]; void *
 * 0000000180045EED: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045EF2: nop
 * 0000000180045EF3: lea     rcx, dword_180269088
 * 0000000180045EFA: call    _Init_thread_footer
 * 0000000180045EFF: mov     rax, [rdi+rbx*8]
 * 0000000180045F03: mov     eax, [r15+rax]
 * 0000000180045F07: cmp     cs:dword_180269090, eax
 * 0000000180045F0D: jle     loc_180045FEC
 * 0000000180045F13: lea     rcx, dword_180269090
 * 0000000180045F1A: call    _Init_thread_header
 * 0000000180045F1F: cmp     cs:dword_180269090, r14d
 * 0000000180045F26: jnz     loc_180045FEC
 * 0000000180045F2C: lea     rax, unk_180165090
 * 0000000180045F33: mov     qword ptr [rbp+9E20h+var_9E50], rax
 * 0000000180045F37: lea     rax, unk_180166158
 * 0000000180045F3E: mov     qword ptr [rbp+9E20h+var_9E50+8], rax
 * 0000000180045F42: movups  xmm0, [rbp+9E20h+var_9E50]
 * 0000000180045F46: movups  [rbp+9E20h+var_8918], xmm0
 * 0000000180045F4D: mov     dword ptr [rbp+9E20h+var_8908], r13d
 * 0000000180045F54: mov     dword ptr [rbp+9E20h+var_8908+4], esi
 * 0000000180045F5A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045F5F: movups  xmm0, [rbp+9E20h+var_8908]
 * 0000000180045F66: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045F6B: call    sub_1800455D0
 * 0000000180045F70: mov     r8, rax
 * 0000000180045F73: mov     r9d, r12d
 * 0000000180045F76: mov     rdx, r12
 * 0000000180045F79: lea     rcx, [rbp+9E20h+var_6D68]; Src
 * 0000000180045F80: call    sub_1800D44B8
 * 0000000180045F85: nop
 * 0000000180045F86: mov     r8, rax
 * 0000000180045F89: lea     rdx, aStandardshader_8; "StandardShader/ShaderModel40/"
 * 0000000180045F90: lea     rcx, [rbp+9E20h+var_6D88]
 * 0000000180045F97: call    sub_1800453AC
 * 0000000180045F9C: nop
 * 0000000180045F9D: lea     r8, aPixel_6; "/Pixel"
 * 0000000180045FA4: mov     rdx, rax
 * 0000000180045FA7: lea     rcx, [rbp+9E20h+var_6DA8]
 * 0000000180045FAE: call    sub_18002BF78
 * 0000000180045FB3: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045FB8: mov     rcx, rax
 * 0000000180045FBB: call    sub_1800D45A4
 * 0000000180045FC0: mov     cs:byte_18026908C, al
 * 0000000180045FC6: lea     rcx, [rbp+9E20h+var_6D88]; void *
 * 0000000180045FCD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045FD2: nop
 * 0000000180045FD3: lea     rcx, [rbp+9E20h+var_6D68]; void *
 * 0000000180045FDA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045FDF: nop
 * 0000000180045FE0: lea     rcx, dword_180269090
 * 0000000180045FE7: call    _Init_thread_footer
 * 0000000180045FEC: mov     rax, [rdi+rbx*8]
 * 0000000180045FF0: mov     eax, [r15+rax]
 * 0000000180045FF4: cmp     cs:dword_180269098, eax
 * 0000000180045FFA: jle     loc_1800460DB
 * 0000000180046000: lea     rcx, dword_180269098
 * 0000000180046007: call    _Init_thread_header
 * 000000018004600C: cmp     cs:dword_180269098, r14d
 * 0000000180046013: jnz     loc_1800460DB
 * 0000000180046019: lea     rax, unk_18015EB00
 * 0000000180046020: mov     qword ptr [rbp+9E20h+var_9E40], rax
 * 0000000180046024: lea     rax, unk_18016508C
 * 000000018004602B: mov     qword ptr [rbp+9E20h+var_9E40+8], rax
 * 000000018004602F: movups  xmm0, [rbp+9E20h+var_9E40]
 * 0000000180046033: movups  [rbp+9E20h+var_88F8], xmm0
 * 000000018004603A: mov     dword ptr [rbp+9E20h+var_88E8], r13d
 * 0000000180046041: mov     dword ptr [rbp+9E20h+var_88E8+4], esi
 * 0000000180046047: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004604C: movups  xmm0, [rbp+9E20h+var_88E8]
 * 0000000180046053: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046058: call    sub_1800455D0
 * 000000018004605D: mov     r8, rax
 * 0000000180046060: mov     r9d, r12d
 * 0000000180046063: mov     edx, 0Ah
 * 0000000180046068: lea     rcx, [rbp+9E20h+var_6D08]; Src
 * 000000018004606F: call    sub_1800D44B8
 * 0000000180046074: nop
 * 0000000180046075: mov     r8, rax
 * 0000000180046078: lea     rdx, aStandardshader_9; "StandardShader/ShaderModel40/"
 * 000000018004607F: lea     rcx, [rbp+9E20h+var_6D28]
 * 0000000180046086: call    sub_1800453AC
 * 000000018004608B: nop
 * 000000018004608C: lea     r8, aPixel_7; "/Pixel"
 * 0000000180046093: mov     rdx, rax
 * 0000000180046096: lea     rcx, [rbp+9E20h+var_6D48]
 * 000000018004609D: call    sub_18002BF78
 * 00000001800460A2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800460A7: mov     rcx, rax
 * 00000001800460AA: call    sub_1800D45A4
 * 00000001800460AF: mov     cs:byte_180269094, al
 * 00000001800460B5: lea     rcx, [rbp+9E20h+var_6D28]; void *
 * 00000001800460BC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800460C1: nop
 * 00000001800460C2: lea     rcx, [rbp+9E20h+var_6D08]; void *
 * 00000001800460C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800460CE: nop
 * 00000001800460CF: lea     rcx, dword_180269098
 * 00000001800460D6: call    _Init_thread_footer
 * 00000001800460DB: mov     rax, [rdi+rbx*8]
 * 00000001800460DF: mov     eax, [r15+rax]
 * 00000001800460E3: cmp     cs:dword_1802690A0, eax
 * 00000001800460E9: jle     loc_1800461CA
 * 00000001800460EF: lea     rcx, dword_1802690A0
 * 00000001800460F6: call    _Init_thread_header
 * 00000001800460FB: cmp     cs:dword_1802690A0, r14d
 * 0000000180046102: jnz     loc_1800461CA
 * 0000000180046108: lea     rax, unk_180166160
 * 000000018004610F: mov     qword ptr [rbp+9E20h+var_9E30], rax
 * 0000000180046113: lea     rax, unk_18016C718
 * 000000018004611A: mov     qword ptr [rbp+9E20h+var_9E30+8], rax
 * 000000018004611E: movups  xmm0, [rbp+9E20h+var_9E30]
 * 0000000180046122: movups  [rbp+9E20h+var_88D8], xmm0
 * 0000000180046129: mov     dword ptr [rbp+9E20h+var_88C8], r13d
 * 0000000180046130: mov     dword ptr [rbp+9E20h+var_88C8+4], esi
 * 0000000180046136: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004613B: movups  xmm0, [rbp+9E20h+var_88C8]
 * 0000000180046142: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046147: call    sub_1800455D0
 * 000000018004614C: mov     r8, rax
 * 000000018004614F: mov     r9d, r12d
 * 0000000180046152: mov     edx, 10h
 * 0000000180046157: lea     rcx, [rbp+9E20h+var_6CA8]; Src
 * 000000018004615E: call    sub_1800D44B8
 * 0000000180046163: nop
 * 0000000180046164: mov     r8, rax
 * 0000000180046167: lea     rdx, aStandardshader_10; "StandardShader/ShaderModel40/"
 * 000000018004616E: lea     rcx, [rbp+9E20h+var_6CC8]
 * 0000000180046175: call    sub_1800453AC
 * 000000018004617A: nop
 * 000000018004617B: lea     r8, aPixel_8; "/Pixel"
 * 0000000180046182: mov     rdx, rax
 * 0000000180046185: lea     rcx, [rbp+9E20h+var_6CE8]
 * 000000018004618C: call    sub_18002BF78
 * 0000000180046191: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046196: mov     rcx, rax
 * 0000000180046199: call    sub_1800D45A4
 * 000000018004619E: mov     cs:byte_18026909C, al
 * 00000001800461A4: lea     rcx, [rbp+9E20h+var_6CC8]; void *
 * 00000001800461AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800461B0: nop
 * 00000001800461B1: lea     rcx, [rbp+9E20h+var_6CA8]; void *
 * 00000001800461B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800461BD: nop
 * 00000001800461BE: lea     rcx, dword_1802690A0
 * 00000001800461C5: call    _Init_thread_footer
 * 00000001800461CA: mov     rax, [rdi+rbx*8]
 * 00000001800461CE: mov     eax, [r15+rax]
 * 00000001800461D2: cmp     cs:dword_1802690A8, eax
 * 00000001800461D8: jle     loc_1800462B9
 * 00000001800461DE: lea     rcx, dword_1802690A8
 * 00000001800461E5: call    _Init_thread_header
 * 00000001800461EA: cmp     cs:dword_1802690A8, r14d
 * 00000001800461F1: jnz     loc_1800462B9
 * 00000001800461F7: lea     rax, unk_180166160
 * 00000001800461FE: mov     qword ptr [rbp+9E20h+var_9E20], rax
 * 0000000180046202: lea     rax, unk_18016C718
 * 0000000180046209: mov     qword ptr [rbp+9E20h+var_9E20+8], rax
 * 000000018004620D: movups  xmm0, [rbp+9E20h+var_9E20]
 * 0000000180046211: movups  [rbp+9E20h+var_88B8], xmm0
 * 0000000180046218: mov     dword ptr [rbp+9E20h+var_88A8], r13d
 * 000000018004621F: mov     dword ptr [rbp+9E20h+var_88A8+4], esi
 * 0000000180046225: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004622A: movups  xmm0, [rbp+9E20h+var_88A8]
 * 0000000180046231: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046236: call    sub_1800455D0
 * 000000018004623B: mov     r8, rax
 * 000000018004623E: mov     r9d, r12d
 * 0000000180046241: mov     edx, 12h
 * 0000000180046246: lea     rcx, [rbp+9E20h+var_6C48]; Src
 * 000000018004624D: call    sub_1800D44B8
 * 0000000180046252: nop
 * 0000000180046253: mov     r8, rax
 * 0000000180046256: lea     rdx, aStandardshader_11; "StandardShader/ShaderModel40/"
 * 000000018004625D: lea     rcx, [rbp+9E20h+var_6C68]
 * 0000000180046264: call    sub_1800453AC
 * 0000000180046269: nop
 * 000000018004626A: lea     r8, aPixel_9; "/Pixel"
 * 0000000180046271: mov     rdx, rax
 * 0000000180046274: lea     rcx, [rbp+9E20h+var_6C88]
 * 000000018004627B: call    sub_18002BF78
 * 0000000180046280: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046285: mov     rcx, rax
 * 0000000180046288: call    sub_1800D45A4
 * 000000018004628D: mov     cs:byte_1802690A4, al
 * 0000000180046293: lea     rcx, [rbp+9E20h+var_6C68]; void *
 * 000000018004629A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004629F: nop
 * 00000001800462A0: lea     rcx, [rbp+9E20h+var_6C48]; void *
 * 00000001800462A7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800462AC: nop
 * 00000001800462AD: lea     rcx, dword_1802690A8
 * 00000001800462B4: call    _Init_thread_footer
 * 00000001800462B9: mov     rax, [rdi+rbx*8]
 * 00000001800462BD: mov     eax, [r15+rax]
 * 00000001800462C1: cmp     cs:dword_1802690B0, eax
 * 00000001800462C7: jle     loc_1800463A8
 * 00000001800462CD: lea     rcx, dword_1802690B0
 * 00000001800462D4: call    _Init_thread_header
 * 00000001800462D9: cmp     cs:dword_1802690B0, r14d
 * 00000001800462E0: jnz     loc_1800463A8
 * 00000001800462E6: lea     rax, unk_18016C720
 * 00000001800462ED: mov     qword ptr [rbp+9E20h+var_9E10], rax
 * 00000001800462F1: lea     rax, unk_18016FA18
 * 00000001800462F8: mov     qword ptr [rbp+9E20h+var_9E10+8], rax
 * 00000001800462FC: movups  xmm0, [rbp+9E20h+var_9E10]
 * 0000000180046300: movups  [rbp+9E20h+var_8898], xmm0
 * 0000000180046307: mov     dword ptr [rbp+9E20h+var_8888], r13d
 * 000000018004630E: mov     dword ptr [rbp+9E20h+var_8888+4], esi
 * 0000000180046314: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046319: movups  xmm0, [rbp+9E20h+var_8888]
 * 0000000180046320: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046325: call    sub_1800455D0
 * 000000018004632A: mov     r8, rax
 * 000000018004632D: mov     r9d, r12d
 * 0000000180046330: mov     edx, 14h
 * 0000000180046335: lea     rcx, [rbp+9E20h+var_6BE8]; Src
 * 000000018004633C: call    sub_1800D44B8
 * 0000000180046341: nop
 * 0000000180046342: mov     r8, rax
 * 0000000180046345: lea     rdx, aStandardshader_12; "StandardShader/ShaderModel40/"
 * 000000018004634C: lea     rcx, [rbp+9E20h+var_6C08]
 * 0000000180046353: call    sub_1800453AC
 * 0000000180046358: nop
 * 0000000180046359: lea     r8, aPixel_10; "/Pixel"
 * 0000000180046360: mov     rdx, rax
 * 0000000180046363: lea     rcx, [rbp+9E20h+var_6C28]
 * 000000018004636A: call    sub_18002BF78
 * 000000018004636F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046374: mov     rcx, rax
 * 0000000180046377: call    sub_1800D45A4
 * 000000018004637C: mov     cs:byte_1802690AC, al
 * 0000000180046382: lea     rcx, [rbp+9E20h+var_6C08]; void *
 * 0000000180046389: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004638E: nop
 * 000000018004638F: lea     rcx, [rbp+9E20h+var_6BE8]; void *
 * 0000000180046396: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004639B: nop
 * 000000018004639C: lea     rcx, dword_1802690B0
 * 00000001800463A3: call    _Init_thread_footer
 * 00000001800463A8: mov     rax, [rdi+rbx*8]
 * 00000001800463AC: mov     eax, [r15+rax]
 * 00000001800463B0: cmp     cs:dword_1802690B8, eax
 * 00000001800463B6: jle     loc_180046497
 * 00000001800463BC: lea     rcx, dword_1802690B8
 * 00000001800463C3: call    _Init_thread_header
 * 00000001800463C8: cmp     cs:dword_1802690B8, r14d
 * 00000001800463CF: jnz     loc_180046497
 * 00000001800463D5: lea     rax, unk_18016C720
 * 00000001800463DC: mov     qword ptr [rbp+9E20h+var_9E00], rax
 * 00000001800463E0: lea     rax, unk_18016FA18
 * 00000001800463E7: mov     qword ptr [rbp+9E20h+var_9E00+8], rax
 * 00000001800463EB: movups  xmm0, [rbp+9E20h+var_9E00]
 * 00000001800463EF: movups  [rbp+9E20h+var_8878], xmm0
 * 00000001800463F6: mov     dword ptr [rbp+9E20h+var_8868], r13d
 * 00000001800463FD: mov     dword ptr [rbp+9E20h+var_8868+4], esi
 * 0000000180046403: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046408: movups  xmm0, [rbp+9E20h+var_8868]
 * 000000018004640F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046414: call    sub_1800455D0
 * 0000000180046419: mov     r8, rax
 * 000000018004641C: mov     r9d, r12d
 * 000000018004641F: mov     edx, 16h
 * 0000000180046424: lea     rcx, [rbp+9E20h+var_6B88]; Src
 * 000000018004642B: call    sub_1800D44B8
 * 0000000180046430: nop
 * 0000000180046431: mov     r8, rax
 * 0000000180046434: lea     rdx, aStandardshader_13; "StandardShader/ShaderModel40/"
 * 000000018004643B: lea     rcx, [rbp+9E20h+var_6BA8]
 * 0000000180046442: call    sub_1800453AC
 * 0000000180046447: nop
 * 0000000180046448: lea     r8, aPixel_11; "/Pixel"
 * 000000018004644F: mov     rdx, rax
 * 0000000180046452: lea     rcx, [rbp+9E20h+var_6BC8]
 * 0000000180046459: call    sub_18002BF78
 * 000000018004645E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046463: mov     rcx, rax
 * 0000000180046466: call    sub_1800D45A4
 * 000000018004646B: mov     cs:byte_1802690B4, al
 * 0000000180046471: lea     rcx, [rbp+9E20h+var_6BA8]; void *
 * 0000000180046478: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004647D: nop
 * 000000018004647E: lea     rcx, [rbp+9E20h+var_6B88]; void *
 * 0000000180046485: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004648A: nop
 * 000000018004648B: lea     rcx, dword_1802690B8
 * 0000000180046492: call    _Init_thread_footer
 * 0000000180046497: mov     rax, [rdi+rbx*8]
 * 000000018004649B: mov     eax, [r15+rax]
 * 000000018004649F: cmp     cs:dword_1802690C0, eax
 * 00000001800464A5: jle     loc_180046586
 * 00000001800464AB: lea     rcx, dword_1802690C0
 * 00000001800464B2: call    _Init_thread_header
 * 00000001800464B7: cmp     cs:dword_1802690C0, r14d
 * 00000001800464BE: jnz     loc_180046586
 * 00000001800464C4: lea     rax, unk_18016FA20
 * 00000001800464CB: mov     qword ptr [rbp+9E20h+var_9DF0], rax
 * 00000001800464CF: lea     rax, unk_1801761AC
 * 00000001800464D6: mov     qword ptr [rbp+9E20h+var_9DF0+8], rax
 * 00000001800464DA: movups  xmm0, [rbp+9E20h+var_9DF0]
 * 00000001800464DE: movups  [rbp+9E20h+var_8858], xmm0
 * 00000001800464E5: mov     dword ptr [rbp+9E20h+var_8848], r13d
 * 00000001800464EC: mov     dword ptr [rbp+9E20h+var_8848+4], esi
 * 00000001800464F2: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800464F7: movups  xmm0, [rbp+9E20h+var_8848]
 * 00000001800464FE: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046503: call    sub_1800455D0
 * 0000000180046508: mov     r8, rax
 * 000000018004650B: mov     r9d, r12d
 * 000000018004650E: mov     edx, 18h
 * 0000000180046513: lea     rcx, [rbp+9E20h+var_6B28]; Src
 * 000000018004651A: call    sub_1800D44B8
 * 000000018004651F: nop
 * 0000000180046520: mov     r8, rax
 * 0000000180046523: lea     rdx, aStandardshader_14; "StandardShader/ShaderModel40/"
 * 000000018004652A: lea     rcx, [rbp+9E20h+var_6B48]
 * 0000000180046531: call    sub_1800453AC
 * 0000000180046536: nop
 * 0000000180046537: lea     r8, aPixel_12; "/Pixel"
 * 000000018004653E: mov     rdx, rax
 * 0000000180046541: lea     rcx, [rbp+9E20h+var_6B68]
 * 0000000180046548: call    sub_18002BF78
 * 000000018004654D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046552: mov     rcx, rax
 * 0000000180046555: call    sub_1800D45A4
 * 000000018004655A: mov     cs:byte_1802690BC, al
 * 0000000180046560: lea     rcx, [rbp+9E20h+var_6B48]; void *
 * 0000000180046567: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004656C: nop
 * 000000018004656D: lea     rcx, [rbp+9E20h+var_6B28]; void *
 * 0000000180046574: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046579: nop
 * 000000018004657A: lea     rcx, dword_1802690C0
 * 0000000180046581: call    _Init_thread_footer
 * 0000000180046586: mov     rax, [rdi+rbx*8]
 * 000000018004658A: mov     eax, [r15+rax]
 * 000000018004658E: cmp     cs:dword_1802690C8, eax
 * 0000000180046594: jle     loc_180046675
 * 000000018004659A: lea     rcx, dword_1802690C8
 * 00000001800465A1: call    _Init_thread_header
 * 00000001800465A6: cmp     cs:dword_1802690C8, r14d
 * 00000001800465AD: jnz     loc_180046675
 * 00000001800465B3: lea     rax, unk_18016FA20
 * 00000001800465BA: mov     qword ptr [rbp+9E20h+var_9DE0], rax
 * 00000001800465BE: lea     rax, unk_1801761AC
 * 00000001800465C5: mov     qword ptr [rbp+9E20h+var_9DE0+8], rax
 * 00000001800465C9: movups  xmm0, [rbp+9E20h+var_9DE0]
 * 00000001800465CD: movups  [rbp+9E20h+var_8838], xmm0
 * 00000001800465D4: mov     dword ptr [rbp+9E20h+var_8828], r13d
 * 00000001800465DB: mov     dword ptr [rbp+9E20h+var_8828+4], esi
 * 00000001800465E1: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800465E6: movups  xmm0, [rbp+9E20h+var_8828]
 * 00000001800465ED: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800465F2: call    sub_1800455D0
 * 00000001800465F7: mov     r8, rax
 * 00000001800465FA: mov     r9d, r12d
 * 00000001800465FD: mov     edx, 1Ah
 * 0000000180046602: lea     rcx, [rbp+9E20h+var_6AC8]; Src
 * 0000000180046609: call    sub_1800D44B8
 * 000000018004660E: nop
 * 000000018004660F: mov     r8, rax
 * 0000000180046612: lea     rdx, aStandardshader_15; "StandardShader/ShaderModel40/"
 * 0000000180046619: lea     rcx, [rbp+9E20h+var_6AE8]
 * 0000000180046620: call    sub_1800453AC
 * 0000000180046625: nop
 * 0000000180046626: lea     r8, aPixel_13; "/Pixel"
 * 000000018004662D: mov     rdx, rax
 * 0000000180046630: lea     rcx, [rbp+9E20h+var_6B08]
 * 0000000180046637: call    sub_18002BF78
 * 000000018004663C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046641: mov     rcx, rax
 * 0000000180046644: call    sub_1800D45A4
 * 0000000180046649: mov     cs:byte_1802690C4, al
 * 000000018004664F: lea     rcx, [rbp+9E20h+var_6AE8]; void *
 * 0000000180046656: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004665B: nop
 * 000000018004665C: lea     rcx, [rbp+9E20h+var_6AC8]; void *
 * 0000000180046663: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046668: nop
 * 0000000180046669: lea     rcx, dword_1802690C8
 * 0000000180046670: call    _Init_thread_footer
 * 0000000180046675: mov     rax, [rdi+rbx*8]
 * 0000000180046679: mov     eax, [r15+rax]
 * 000000018004667D: cmp     cs:dword_1802690D0, eax
 * 0000000180046683: jle     loc_180046764
 * 0000000180046689: lea     rcx, dword_1802690D0
 * 0000000180046690: call    _Init_thread_header
 * 0000000180046695: cmp     cs:dword_1802690D0, r14d
 * 000000018004669C: jnz     loc_180046764
 * 00000001800466A2: lea     rax, unk_180154160
 * 00000001800466A9: mov     qword ptr [rbp+9E20h+var_9DD0], rax
 * 00000001800466AD: lea     rax, unk_18015A544
 * 00000001800466B4: mov     qword ptr [rbp+9E20h+var_9DD0+8], rax
 * 00000001800466B8: movups  xmm0, [rbp+9E20h+var_9DD0]
 * 00000001800466BC: movups  [rbp+9E20h+var_8818], xmm0
 * 00000001800466C3: mov     dword ptr [rbp+9E20h+var_8808], r13d
 * 00000001800466CA: mov     dword ptr [rbp+9E20h+var_8808+4], esi
 * 00000001800466D0: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800466D5: movups  xmm0, [rbp+9E20h+var_8808]
 * 00000001800466DC: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800466E1: call    sub_1800455D0
 * 00000001800466E6: mov     r8, rax
 * 00000001800466E9: mov     r9d, r12d
 * 00000001800466EC: mov     edx, 20h ; ' '
 * 00000001800466F1: lea     rcx, [rbp+9E20h+var_6A68]; Src
 * 00000001800466F8: call    sub_1800D44B8
 * 00000001800466FD: nop
 * 00000001800466FE: mov     r8, rax
 * 0000000180046701: lea     rdx, aStandardshader_16; "StandardShader/ShaderModel40/"
 * 0000000180046708: lea     rcx, [rbp+9E20h+var_6A88]
 * 000000018004670F: call    sub_1800453AC
 * 0000000180046714: nop
 * 0000000180046715: lea     r8, aPixel_14; "/Pixel"
 * 000000018004671C: mov     rdx, rax
 * 000000018004671F: lea     rcx, [rbp+9E20h+var_6AA8]
 * 0000000180046726: call    sub_18002BF78
 * 000000018004672B: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046730: mov     rcx, rax
 * 0000000180046733: call    sub_1800D45A4
 * 0000000180046738: mov     cs:byte_1802690CC, al
 * 000000018004673E: lea     rcx, [rbp+9E20h+var_6A88]; void *
 * 0000000180046745: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004674A: nop
 * 000000018004674B: lea     rcx, [rbp+9E20h+var_6A68]; void *
 * 0000000180046752: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046757: nop
 * 0000000180046758: lea     rcx, dword_1802690D0
 * 000000018004675F: call    _Init_thread_footer
 * 0000000180046764: mov     rax, [rdi+rbx*8]
 * 0000000180046768: mov     eax, [r15+rax]
 * 000000018004676C: cmp     cs:dword_1802690D8, eax
 * 0000000180046772: jle     loc_180046853
 * 0000000180046778: lea     rcx, dword_1802690D8
 * 000000018004677F: call    _Init_thread_header
 * 0000000180046784: cmp     cs:dword_1802690D8, r14d
 * 000000018004678B: jnz     loc_180046853
 * 0000000180046791: lea     rax, unk_18015A550
 * 0000000180046798: mov     qword ptr [rbp+9E20h+var_9DC0], rax
 * 000000018004679C: lea     rax, unk_18015AF48
 * 00000001800467A3: mov     qword ptr [rbp+9E20h+var_9DC0+8], rax
 * 00000001800467A7: movups  xmm0, [rbp+9E20h+var_9DC0]
 * 00000001800467AB: movups  [rbp+9E20h+var_87F8], xmm0
 * 00000001800467B2: mov     dword ptr [rbp+9E20h+var_87E8], r13d
 * 00000001800467B9: mov     dword ptr [rbp+9E20h+var_87E8+4], esi
 * 00000001800467BF: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800467C4: movups  xmm0, [rbp+9E20h+var_87E8]
 * 00000001800467CB: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800467D0: call    sub_1800455D0
 * 00000001800467D5: mov     r8, rax
 * 00000001800467D8: mov     r9d, r12d
 * 00000001800467DB: mov     edx, 21h ; '!'
 * 00000001800467E0: lea     rcx, [rbp+9E20h+var_6A08]; Src
 * 00000001800467E7: call    sub_1800D44B8
 * 00000001800467EC: nop
 * 00000001800467ED: mov     r8, rax
 * 00000001800467F0: lea     rdx, aStandardshader_17; "StandardShader/ShaderModel40/"
 * 00000001800467F7: lea     rcx, [rbp+9E20h+var_6A28]
 * 00000001800467FE: call    sub_1800453AC
 * 0000000180046803: nop
 * 0000000180046804: lea     r8, aPixel_15; "/Pixel"
 * 000000018004680B: mov     rdx, rax
 * 000000018004680E: lea     rcx, [rbp+9E20h+var_6A48]
 * 0000000180046815: call    sub_18002BF78
 * 000000018004681A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004681F: mov     rcx, rax
 * 0000000180046822: call    sub_1800D45A4
 * 0000000180046827: mov     cs:byte_1802690D4, al
 * 000000018004682D: lea     rcx, [rbp+9E20h+var_6A28]; void *
 * 0000000180046834: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046839: nop
 * 000000018004683A: lea     rcx, [rbp+9E20h+var_6A08]; void *
 * 0000000180046841: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046846: nop
 * 0000000180046847: lea     rcx, dword_1802690D8
 * 000000018004684E: call    _Init_thread_footer
 * 0000000180046853: mov     rax, [rdi+rbx*8]
 * 0000000180046857: mov     eax, [r15+rax]
 * 000000018004685B: cmp     cs:dword_1802690E0, eax
 * 0000000180046861: jle     loc_180046942
 * 0000000180046867: lea     rcx, dword_1802690E0
 * 000000018004686E: call    _Init_thread_header
 * 0000000180046873: cmp     cs:dword_1802690E0, r14d
 * 000000018004687A: jnz     loc_180046942
 * 0000000180046880: lea     rax, unk_180154160
 * 0000000180046887: mov     qword ptr [rbp+9E20h+var_9DB0], rax
 * 000000018004688B: lea     rax, unk_18015A544
 * 0000000180046892: mov     qword ptr [rbp+9E20h+var_9DB0+8], rax
 * 0000000180046896: movups  xmm0, [rbp+9E20h+var_9DB0]
 * 000000018004689A: movups  [rbp+9E20h+var_87D8], xmm0
 * 00000001800468A1: mov     dword ptr [rbp+9E20h+var_87C8], r13d
 * 00000001800468A8: mov     dword ptr [rbp+9E20h+var_87C8+4], esi
 * 00000001800468AE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800468B3: movups  xmm0, [rbp+9E20h+var_87C8]
 * 00000001800468BA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800468BF: call    sub_1800455D0
 * 00000001800468C4: mov     r8, rax
 * 00000001800468C7: mov     r9d, r12d
 * 00000001800468CA: mov     edx, 22h ; '"'
 * 00000001800468CF: lea     rcx, [rbp+9E20h+var_69A8]; Src
 * 00000001800468D6: call    sub_1800D44B8
 * 00000001800468DB: nop
 * 00000001800468DC: mov     r8, rax
 * 00000001800468DF: lea     rdx, aStandardshader_18; "StandardShader/ShaderModel40/"
 * 00000001800468E6: lea     rcx, [rbp+9E20h+var_69C8]
 * 00000001800468ED: call    sub_1800453AC
 * 00000001800468F2: nop
 * 00000001800468F3: lea     r8, aPixel_16; "/Pixel"
 * 00000001800468FA: mov     rdx, rax
 * 00000001800468FD: lea     rcx, [rbp+9E20h+var_69E8]
 * 0000000180046904: call    sub_18002BF78
 * 0000000180046909: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004690E: mov     rcx, rax
 * 0000000180046911: call    sub_1800D45A4
 * 0000000180046916: mov     cs:byte_1802690DC, al
 * 000000018004691C: lea     rcx, [rbp+9E20h+var_69C8]; void *
 * 0000000180046923: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046928: nop
 * 0000000180046929: lea     rcx, [rbp+9E20h+var_69A8]; void *
 * 0000000180046930: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046935: nop
 * 0000000180046936: lea     rcx, dword_1802690E0
 * 000000018004693D: call    _Init_thread_footer
 * 0000000180046942: mov     rax, [rdi+rbx*8]
 * 0000000180046946: mov     eax, [r15+rax]
 * 000000018004694A: cmp     cs:dword_1802690E8, eax
 * 0000000180046950: jle     loc_180046A3A
 * 0000000180046956: lea     rcx, dword_1802690E8
 * 000000018004695D: call    _Init_thread_header
 * 0000000180046962: cmp     cs:dword_1802690E8, r14d
 * 0000000180046969: jnz     loc_180046A3A
 * 000000018004696F: lea     rax, unk_18015EB00
 * 0000000180046976: mov     qword ptr [rbp+9E20h+var_9DA0], rax
 * 000000018004697D: lea     rax, unk_18016508C
 * 0000000180046984: mov     qword ptr [rbp+9E20h+var_9DA0+8], rax
 * 000000018004698B: movups  xmm0, [rbp+9E20h+var_9DA0]
 * 0000000180046992: movups  [rbp+9E20h+var_87B8], xmm0
 * 0000000180046999: mov     dword ptr [rbp+9E20h+var_87A8], r13d
 * 00000001800469A0: mov     dword ptr [rbp+9E20h+var_87A8+4], esi
 * 00000001800469A6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800469AB: movups  xmm0, [rbp+9E20h+var_87A8]
 * 00000001800469B2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800469B7: call    sub_1800455D0
 * 00000001800469BC: mov     r8, rax
 * 00000001800469BF: mov     r9d, r12d
 * 00000001800469C2: mov     edx, 28h ; '('
 * 00000001800469C7: lea     rcx, [rbp+9E20h+var_6948]; Src
 * 00000001800469CE: call    sub_1800D44B8
 * 00000001800469D3: nop
 * 00000001800469D4: mov     r8, rax
 * 00000001800469D7: lea     rdx, aStandardshader_19; "StandardShader/ShaderModel40/"
 * 00000001800469DE: lea     rcx, [rbp+9E20h+var_6968]
 * 00000001800469E5: call    sub_1800453AC
 * 00000001800469EA: nop
 * 00000001800469EB: lea     r8, aPixel_17; "/Pixel"
 * 00000001800469F2: mov     rdx, rax
 * 00000001800469F5: lea     rcx, [rbp+9E20h+var_6988]
 * 00000001800469FC: call    sub_18002BF78
 * 0000000180046A01: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046A06: mov     rcx, rax
 * 0000000180046A09: call    sub_1800D45A4
 * 0000000180046A0E: mov     cs:byte_1802690E4, al
 * 0000000180046A14: lea     rcx, [rbp+9E20h+var_6968]; void *
 * 0000000180046A1B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046A20: nop
 * 0000000180046A21: lea     rcx, [rbp+9E20h+var_6948]; void *
 * 0000000180046A28: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046A2D: nop
 * 0000000180046A2E: lea     rcx, dword_1802690E8
 * 0000000180046A35: call    _Init_thread_footer
 * 0000000180046A3A: mov     rax, [rdi+rbx*8]
 * 0000000180046A3E: mov     eax, [r15+rax]
 * 0000000180046A42: cmp     cs:dword_1802690F0, eax
 * 0000000180046A48: jle     loc_180046B32
 * 0000000180046A4E: lea     rcx, dword_1802690F0
 * 0000000180046A55: call    _Init_thread_header
 * 0000000180046A5A: cmp     cs:dword_1802690F0, r14d
 * 0000000180046A61: jnz     loc_180046B32
 * 0000000180046A67: lea     rax, unk_180165090
 * 0000000180046A6E: mov     qword ptr [rbp+9E20h+var_9D90], rax
 * 0000000180046A75: lea     rax, unk_180166158
 * 0000000180046A7C: mov     qword ptr [rbp+9E20h+var_9D90+8], rax
 * 0000000180046A83: movups  xmm0, [rbp+9E20h+var_9D90]
 * 0000000180046A8A: movups  [rbp+9E20h+var_8798], xmm0
 * 0000000180046A91: mov     dword ptr [rbp+9E20h+var_8788], r13d
 * 0000000180046A98: mov     dword ptr [rbp+9E20h+var_8788+4], esi
 * 0000000180046A9E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046AA3: movups  xmm0, [rbp+9E20h+var_8788]
 * 0000000180046AAA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046AAF: call    sub_1800455D0
 * 0000000180046AB4: mov     r8, rax
 * 0000000180046AB7: mov     r9d, r12d
 * 0000000180046ABA: mov     edx, 29h ; ')'
 * 0000000180046ABF: lea     rcx, [rbp+9E20h+var_68E8]; Src
 * 0000000180046AC6: call    sub_1800D44B8
 * 0000000180046ACB: nop
 * 0000000180046ACC: mov     r8, rax
 * 0000000180046ACF: lea     rdx, aStandardshader_20; "StandardShader/ShaderModel40/"
 * 0000000180046AD6: lea     rcx, [rbp+9E20h+var_6908]
 * 0000000180046ADD: call    sub_1800453AC
 * 0000000180046AE2: nop
 * 0000000180046AE3: lea     r8, aPixel_18; "/Pixel"
 * 0000000180046AEA: mov     rdx, rax
 * 0000000180046AED: lea     rcx, [rbp+9E20h+var_6928]
 * 0000000180046AF4: call    sub_18002BF78
 * 0000000180046AF9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046AFE: mov     rcx, rax
 * 0000000180046B01: call    sub_1800D45A4
 * 0000000180046B06: mov     cs:byte_1802690EC, al
 * 0000000180046B0C: lea     rcx, [rbp+9E20h+var_6908]; void *
 * 0000000180046B13: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046B18: nop
 * 0000000180046B19: lea     rcx, [rbp+9E20h+var_68E8]; void *
 * 0000000180046B20: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046B25: nop
 * 0000000180046B26: lea     rcx, dword_1802690F0
 * 0000000180046B2D: call    _Init_thread_footer
 * 0000000180046B32: mov     rax, [rdi+rbx*8]
 * 0000000180046B36: mov     eax, [r15+rax]
 * 0000000180046B3A: cmp     cs:dword_1802690F8, eax
 * 0000000180046B40: jle     loc_180046C2A
 * 0000000180046B46: lea     rcx, dword_1802690F8
 * 0000000180046B4D: call    _Init_thread_header
 * 0000000180046B52: cmp     cs:dword_1802690F8, r14d
 * 0000000180046B59: jnz     loc_180046C2A
 * 0000000180046B5F: lea     rax, unk_18015EB00
 * 0000000180046B66: mov     qword ptr [rbp+9E20h+var_9D80], rax
 * 0000000180046B6D: lea     rax, unk_18016508C
 * 0000000180046B74: mov     qword ptr [rbp+9E20h+var_9D80+8], rax
 * 0000000180046B7B: movups  xmm0, [rbp+9E20h+var_9D80]
 * 0000000180046B82: movups  [rbp+9E20h+var_8778], xmm0
 * 0000000180046B89: mov     dword ptr [rbp+9E20h+var_8768], r13d
 * 0000000180046B90: mov     dword ptr [rbp+9E20h+var_8768+4], esi
 * 0000000180046B96: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046B9B: movups  xmm0, [rbp+9E20h+var_8768]
 * 0000000180046BA2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046BA7: call    sub_1800455D0
 * 0000000180046BAC: mov     r8, rax
 * 0000000180046BAF: mov     r9d, r12d
 * 0000000180046BB2: mov     edx, 2Ah ; '*'
 * 0000000180046BB7: lea     rcx, [rbp+9E20h+var_6888]; Src
 * 0000000180046BBE: call    sub_1800D44B8
 * 0000000180046BC3: nop
 * 0000000180046BC4: mov     r8, rax
 * 0000000180046BC7: lea     rdx, aStandardshader_21; "StandardShader/ShaderModel40/"
 * 0000000180046BCE: lea     rcx, [rbp+9E20h+var_68A8]
 * 0000000180046BD5: call    sub_1800453AC
 * 0000000180046BDA: nop
 * 0000000180046BDB: lea     r8, aPixel_19; "/Pixel"
 * 0000000180046BE2: mov     rdx, rax
 * 0000000180046BE5: lea     rcx, [rbp+9E20h+var_68C8]
 * 0000000180046BEC: call    sub_18002BF78
 * 0000000180046BF1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046BF6: mov     rcx, rax
 * 0000000180046BF9: call    sub_1800D45A4
 * 0000000180046BFE: mov     cs:byte_1802690F4, al
 * 0000000180046C04: lea     rcx, [rbp+9E20h+var_68A8]; void *
 * 0000000180046C0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046C10: nop
 * 0000000180046C11: lea     rcx, [rbp+9E20h+var_6888]; void *
 * 0000000180046C18: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046C1D: nop
 * 0000000180046C1E: lea     rcx, dword_1802690F8
 * 0000000180046C25: call    _Init_thread_footer
 * 0000000180046C2A: mov     rax, [rdi+rbx*8]
 * 0000000180046C2E: mov     eax, [r15+rax]
 * 0000000180046C32: cmp     cs:dword_180269100, eax
 * 0000000180046C38: jle     loc_180046D22
 * 0000000180046C3E: lea     rcx, dword_180269100
 * 0000000180046C45: call    _Init_thread_header
 * 0000000180046C4A: cmp     cs:dword_180269100, r14d
 * 0000000180046C51: jnz     loc_180046D22
 * 0000000180046C57: lea     rax, unk_180166160
 * 0000000180046C5E: mov     qword ptr [rbp+9E20h+var_9D70], rax
 * 0000000180046C65: lea     rax, unk_18016C718
 * 0000000180046C6C: mov     qword ptr [rbp+9E20h+var_9D70+8], rax
 * 0000000180046C73: movups  xmm0, [rbp+9E20h+var_9D70]
 * 0000000180046C7A: movups  [rbp+9E20h+var_8758], xmm0
 * 0000000180046C81: mov     dword ptr [rbp+9E20h+var_8748], r13d
 * 0000000180046C88: mov     dword ptr [rbp+9E20h+var_8748+4], esi
 * 0000000180046C8E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046C93: movups  xmm0, [rbp+9E20h+var_8748]
 * 0000000180046C9A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046C9F: call    sub_1800455D0
 * 0000000180046CA4: mov     r8, rax
 * 0000000180046CA7: mov     r9d, r12d
 * 0000000180046CAA: mov     edx, 30h ; '0'
 * 0000000180046CAF: lea     rcx, [rbp+9E20h+var_6828]; Src
 * 0000000180046CB6: call    sub_1800D44B8
 * 0000000180046CBB: nop
 * 0000000180046CBC: mov     r8, rax
 * 0000000180046CBF: lea     rdx, aStandardshader_22; "StandardShader/ShaderModel40/"
 * 0000000180046CC6: lea     rcx, [rbp+9E20h+var_6848]
 * 0000000180046CCD: call    sub_1800453AC
 * 0000000180046CD2: nop
 * 0000000180046CD3: lea     r8, aPixel_20; "/Pixel"
 * 0000000180046CDA: mov     rdx, rax
 * 0000000180046CDD: lea     rcx, [rbp+9E20h+var_6868]
 * 0000000180046CE4: call    sub_18002BF78
 * 0000000180046CE9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046CEE: mov     rcx, rax
 * 0000000180046CF1: call    sub_1800D45A4
 * 0000000180046CF6: mov     cs:byte_1802690FC, al
 * 0000000180046CFC: lea     rcx, [rbp+9E20h+var_6848]; void *
 * 0000000180046D03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046D08: nop
 * 0000000180046D09: lea     rcx, [rbp+9E20h+var_6828]; void *
 * 0000000180046D10: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046D15: nop
 * 0000000180046D16: lea     rcx, dword_180269100
 * 0000000180046D1D: call    _Init_thread_footer
 * 0000000180046D22: mov     rax, [rdi+rbx*8]
 * 0000000180046D26: mov     eax, [r15+rax]
 * 0000000180046D2A: cmp     cs:dword_180269108, eax
 * 0000000180046D30: jle     loc_180046E1A
 * 0000000180046D36: lea     rcx, dword_180269108
 * 0000000180046D3D: call    _Init_thread_header
 * 0000000180046D42: cmp     cs:dword_180269108, r14d
 * 0000000180046D49: jnz     loc_180046E1A
 * 0000000180046D4F: lea     rax, unk_180166160
 * 0000000180046D56: mov     qword ptr [rbp+9E20h+var_9D60], rax
 * 0000000180046D5D: lea     rax, unk_18016C718
 * 0000000180046D64: mov     qword ptr [rbp+9E20h+var_9D60+8], rax
 * 0000000180046D6B: movups  xmm0, [rbp+9E20h+var_9D60]
 * 0000000180046D72: movups  [rbp+9E20h+var_8738], xmm0
 * 0000000180046D79: mov     dword ptr [rbp+9E20h+var_8728], r13d
 * 0000000180046D80: mov     dword ptr [rbp+9E20h+var_8728+4], esi
 * 0000000180046D86: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046D8B: movups  xmm0, [rbp+9E20h+var_8728]
 * 0000000180046D92: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046D97: call    sub_1800455D0
 * 0000000180046D9C: mov     r8, rax
 * 0000000180046D9F: mov     r9d, r12d
 * 0000000180046DA2: mov     edx, 32h ; '2'
 * 0000000180046DA7: lea     rcx, [rbp+9E20h+var_67C8]; Src
 * 0000000180046DAE: call    sub_1800D44B8
 * 0000000180046DB3: nop
 * 0000000180046DB4: mov     r8, rax
 * 0000000180046DB7: lea     rdx, aStandardshader_23; "StandardShader/ShaderModel40/"
 * 0000000180046DBE: lea     rcx, [rbp+9E20h+var_67E8]
 * 0000000180046DC5: call    sub_1800453AC
 * 0000000180046DCA: nop
 * 0000000180046DCB: lea     r8, aPixel_21; "/Pixel"
 * 0000000180046DD2: mov     rdx, rax
 * 0000000180046DD5: lea     rcx, [rbp+9E20h+var_6808]
 * 0000000180046DDC: call    sub_18002BF78
 * 0000000180046DE1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046DE6: mov     rcx, rax
 * 0000000180046DE9: call    sub_1800D45A4
 * 0000000180046DEE: mov     cs:byte_180269104, al
 * 0000000180046DF4: lea     rcx, [rbp+9E20h+var_67E8]; void *
 * 0000000180046DFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046E00: nop
 * 0000000180046E01: lea     rcx, [rbp+9E20h+var_67C8]; void *
 * 0000000180046E08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046E0D: nop
 * 0000000180046E0E: lea     rcx, dword_180269108
 * 0000000180046E15: call    _Init_thread_footer
 * 0000000180046E1A: mov     rax, [rdi+rbx*8]
 * 0000000180046E1E: mov     eax, [r15+rax]
 * 0000000180046E22: cmp     cs:dword_180269110, eax
 * 0000000180046E28: jle     loc_180046F12
 * 0000000180046E2E: lea     rcx, dword_180269110
 * 0000000180046E35: call    _Init_thread_header
 * 0000000180046E3A: cmp     cs:dword_180269110, r14d
 * 0000000180046E41: jnz     loc_180046F12
 * 0000000180046E47: lea     rax, unk_18016FA20
 * 0000000180046E4E: mov     qword ptr [rbp+9E20h+var_9D50], rax
 * 0000000180046E55: lea     rax, unk_1801761AC
 * 0000000180046E5C: mov     qword ptr [rbp+9E20h+var_9D50+8], rax
 * 0000000180046E63: movups  xmm0, [rbp+9E20h+var_9D50]
 * 0000000180046E6A: movups  [rbp+9E20h+var_8718], xmm0
 * 0000000180046E71: mov     dword ptr [rbp+9E20h+var_8708], r13d
 * 0000000180046E78: mov     dword ptr [rbp+9E20h+var_8708+4], esi
 * 0000000180046E7E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046E83: movups  xmm0, [rbp+9E20h+var_8708]
 * 0000000180046E8A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046E8F: call    sub_1800455D0
 * 0000000180046E94: mov     r8, rax
 * 0000000180046E97: mov     r9d, r12d
 * 0000000180046E9A: mov     edx, 38h ; '8'
 * 0000000180046E9F: lea     rcx, [rbp+9E20h+var_6768]; Src
 * 0000000180046EA6: call    sub_1800D44B8
 * 0000000180046EAB: nop
 * 0000000180046EAC: mov     r8, rax
 * 0000000180046EAF: lea     rdx, aStandardshader_24; "StandardShader/ShaderModel40/"
 * 0000000180046EB6: lea     rcx, [rbp+9E20h+var_6788]
 * 0000000180046EBD: call    sub_1800453AC
 * 0000000180046EC2: nop
 * 0000000180046EC3: lea     r8, aPixel_22; "/Pixel"
 * 0000000180046ECA: mov     rdx, rax
 * 0000000180046ECD: lea     rcx, [rbp+9E20h+var_67A8]
 * 0000000180046ED4: call    sub_18002BF78
 * 0000000180046ED9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046EDE: mov     rcx, rax
 * 0000000180046EE1: call    sub_1800D45A4
 * 0000000180046EE6: mov     cs:byte_18026910C, al
 * 0000000180046EEC: lea     rcx, [rbp+9E20h+var_6788]; void *
 * 0000000180046EF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046EF8: nop
 * 0000000180046EF9: lea     rcx, [rbp+9E20h+var_6768]; void *
 * 0000000180046F00: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046F05: nop
 * 0000000180046F06: lea     rcx, dword_180269110
 * 0000000180046F0D: call    _Init_thread_footer
 * 0000000180046F12: mov     rax, [rdi+rbx*8]
 * 0000000180046F16: mov     eax, [r15+rax]
 * 0000000180046F1A: cmp     cs:dword_180269118, eax
 * 0000000180046F20: jle     loc_18004700A
 * 0000000180046F26: lea     rcx, dword_180269118
 * 0000000180046F2D: call    _Init_thread_header
 * 0000000180046F32: cmp     cs:dword_180269118, r14d
 * 0000000180046F39: jnz     loc_18004700A
 * 0000000180046F3F: lea     rax, unk_18016FA20
 * 0000000180046F46: mov     qword ptr [rbp+9E20h+var_9D40], rax
 * 0000000180046F4D: lea     rax, unk_1801761AC
 * 0000000180046F54: mov     qword ptr [rbp+9E20h+var_9D40+8], rax
 * 0000000180046F5B: movups  xmm0, [rbp+9E20h+var_9D40]
 * 0000000180046F62: movups  [rbp+9E20h+var_86F8], xmm0
 * 0000000180046F69: mov     dword ptr [rbp+9E20h+var_86E8], r13d
 * 0000000180046F70: mov     dword ptr [rbp+9E20h+var_86E8+4], esi
 * 0000000180046F76: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046F7B: movups  xmm0, [rbp+9E20h+var_86E8]
 * 0000000180046F82: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046F87: call    sub_1800455D0
 * 0000000180046F8C: mov     r8, rax
 * 0000000180046F8F: mov     r9d, r12d
 * 0000000180046F92: mov     edx, 3Ah ; ':'
 * 0000000180046F97: lea     rcx, [rbp+9E20h+var_6708]; Src
 * 0000000180046F9E: call    sub_1800D44B8
 * 0000000180046FA3: nop
 * 0000000180046FA4: mov     r8, rax
 * 0000000180046FA7: lea     rdx, aStandardshader_25; "StandardShader/ShaderModel40/"
 * 0000000180046FAE: lea     rcx, [rbp+9E20h+var_6728]
 * 0000000180046FB5: call    sub_1800453AC
 * 0000000180046FBA: nop
 * 0000000180046FBB: lea     r8, aPixel_23; "/Pixel"
 * 0000000180046FC2: mov     rdx, rax
 * 0000000180046FC5: lea     rcx, [rbp+9E20h+var_6748]
 * 0000000180046FCC: call    sub_18002BF78
 * 0000000180046FD1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046FD6: mov     rcx, rax
 * 0000000180046FD9: call    sub_1800D45A4
 * 0000000180046FDE: mov     cs:byte_180269114, al
 * 0000000180046FE4: lea     rcx, [rbp+9E20h+var_6728]; void *
 * 0000000180046FEB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046FF0: nop
 * 0000000180046FF1: lea     rcx, [rbp+9E20h+var_6708]; void *
 * 0000000180046FF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046FFD: nop
 * 0000000180046FFE: lea     rcx, dword_180269118
 * 0000000180047005: call    _Init_thread_footer
 * 000000018004700A: mov     rax, [rdi+rbx*8]
 * 000000018004700E: mov     eax, [r15+rax]
 * 0000000180047012: cmp     cs:dword_180269120, eax
 * 0000000180047018: jle     loc_180047102
 * 000000018004701E: lea     rcx, dword_180269120
 * 0000000180047025: call    _Init_thread_header
 * 000000018004702A: cmp     cs:dword_180269120, r14d
 * 0000000180047031: jnz     loc_180047102
 * 0000000180047037: lea     rax, unk_180154160
 * 000000018004703E: mov     qword ptr [rbp+9E20h+var_9D30], rax
 * 0000000180047045: lea     rax, unk_18015A544
 * 000000018004704C: mov     qword ptr [rbp+9E20h+var_9D30+8], rax
 * 0000000180047053: movups  xmm0, [rbp+9E20h+var_9D30]
 * 000000018004705A: movups  [rbp+9E20h+var_86D8], xmm0
 * 0000000180047061: mov     dword ptr [rbp+9E20h+var_86C8], r13d
 * 0000000180047068: mov     dword ptr [rbp+9E20h+var_86C8+4], esi
 * 000000018004706E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047073: movups  xmm0, [rbp+9E20h+var_86C8]
 * 000000018004707A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004707F: call    sub_1800455D0
 * 0000000180047084: mov     r8, rax
 * 0000000180047087: mov     r9d, r12d
 * 000000018004708A: mov     edx, 40h ; '@'
 * 000000018004708F: lea     rcx, [rbp+9E20h+var_66A8]; Src
 * 0000000180047096: call    sub_1800D44B8
 * 000000018004709B: nop
 * 000000018004709C: mov     r8, rax
 * 000000018004709F: lea     rdx, aStandardshader_26; "StandardShader/ShaderModel40/"
 * 00000001800470A6: lea     rcx, [rbp+9E20h+var_66C8]
 * 00000001800470AD: call    sub_1800453AC
 * 00000001800470B2: nop
 * 00000001800470B3: lea     r8, aPixel_24; "/Pixel"
 * 00000001800470BA: mov     rdx, rax
 * 00000001800470BD: lea     rcx, [rbp+9E20h+var_66E8]
 * 00000001800470C4: call    sub_18002BF78
 * 00000001800470C9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800470CE: mov     rcx, rax
 * 00000001800470D1: call    sub_1800D45A4
 * 00000001800470D6: mov     cs:byte_18026911C, al
 * 00000001800470DC: lea     rcx, [rbp+9E20h+var_66C8]; void *
 * 00000001800470E3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800470E8: nop
 * 00000001800470E9: lea     rcx, [rbp+9E20h+var_66A8]; void *
 * 00000001800470F0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800470F5: nop
 * 00000001800470F6: lea     rcx, dword_180269120
 * 00000001800470FD: call    _Init_thread_footer
 * 0000000180047102: mov     rax, [rdi+rbx*8]
 * 0000000180047106: mov     eax, [r15+rax]
 * 000000018004710A: cmp     cs:dword_180269128, eax
 * 0000000180047110: jle     loc_1800471FA
 * 0000000180047116: lea     rcx, dword_180269128
 * 000000018004711D: call    _Init_thread_header
 * 0000000180047122: cmp     cs:dword_180269128, r14d
 * 0000000180047129: jnz     loc_1800471FA
 * 000000018004712F: lea     rax, unk_180154160
 * 0000000180047136: mov     qword ptr [rbp+9E20h+var_9D20], rax
 * 000000018004713D: lea     rax, unk_18015A544
 * 0000000180047144: mov     qword ptr [rbp+9E20h+var_9D20+8], rax
 * 000000018004714B: movups  xmm0, [rbp+9E20h+var_9D20]
 * 0000000180047152: movups  [rbp+9E20h+var_86B8], xmm0
 * 0000000180047159: mov     dword ptr [rbp+9E20h+var_86A8], r13d
 * 0000000180047160: mov     dword ptr [rbp+9E20h+var_86A8+4], esi
 * 0000000180047166: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004716B: movups  xmm0, [rbp+9E20h+var_86A8]
 * 0000000180047172: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047177: call    sub_1800455D0
 * 000000018004717C: mov     r8, rax
 * 000000018004717F: mov     r9d, r12d
 * 0000000180047182: mov     edx, 42h ; 'B'
 * 0000000180047187: lea     rcx, [rbp+9E20h+var_6648]; Src
 * 000000018004718E: call    sub_1800D44B8
 * 0000000180047193: nop
 * 0000000180047194: mov     r8, rax
 * 0000000180047197: lea     rdx, aStandardshader_27; "StandardShader/ShaderModel40/"
 * 000000018004719E: lea     rcx, [rbp+9E20h+var_6668]
 * 00000001800471A5: call    sub_1800453AC
 * 00000001800471AA: nop
 * 00000001800471AB: lea     r8, aPixel_25; "/Pixel"
 * 00000001800471B2: mov     rdx, rax
 * 00000001800471B5: lea     rcx, [rbp+9E20h+var_6688]
 * 00000001800471BC: call    sub_18002BF78
 * 00000001800471C1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800471C6: mov     rcx, rax
 * 00000001800471C9: call    sub_1800D45A4
 * 00000001800471CE: mov     cs:byte_180269124, al
 * 00000001800471D4: lea     rcx, [rbp+9E20h+var_6668]; void *
 * 00000001800471DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800471E0: nop
 * 00000001800471E1: lea     rcx, [rbp+9E20h+var_6648]; void *
 * 00000001800471E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800471ED: nop
 * 00000001800471EE: lea     rcx, dword_180269128
 * 00000001800471F5: call    _Init_thread_footer
 * 00000001800471FA: mov     rax, [rdi+rbx*8]
 * 00000001800471FE: mov     eax, [r15+rax]
 * 0000000180047202: cmp     cs:dword_180269130, eax
 * 0000000180047208: jle     loc_1800472F2
 * 000000018004720E: lea     rcx, dword_180269130
 * 0000000180047215: call    _Init_thread_header
 * 000000018004721A: cmp     cs:dword_180269130, r14d
 * 0000000180047221: jnz     loc_1800472F2
 * 0000000180047227: lea     rax, unk_18015EB00
 * 000000018004722E: mov     qword ptr [rbp+9E20h+var_9D10], rax
 * 0000000180047235: lea     rax, unk_18016508C
 * 000000018004723C: mov     qword ptr [rbp+9E20h+var_9D10+8], rax
 * 0000000180047243: movups  xmm0, [rbp+9E20h+var_9D10]
 * 000000018004724A: movups  [rbp+9E20h+var_8698], xmm0
 * 0000000180047251: mov     dword ptr [rbp+9E20h+var_8688], r13d
 * 0000000180047258: mov     dword ptr [rbp+9E20h+var_8688+4], esi
 * 000000018004725E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047263: movups  xmm0, [rbp+9E20h+var_8688]
 * 000000018004726A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004726F: call    sub_1800455D0
 * 0000000180047274: mov     r8, rax
 * 0000000180047277: mov     r9d, r12d
 * 000000018004727A: mov     edx, 48h ; 'H'
 * 000000018004727F: lea     rcx, [rbp+9E20h+var_65E8]; Src
 * 0000000180047286: call    sub_1800D44B8
 * 000000018004728B: nop
 * 000000018004728C: mov     r8, rax
 * 000000018004728F: lea     rdx, aStandardshader_28; "StandardShader/ShaderModel40/"
 * 0000000180047296: lea     rcx, [rbp+9E20h+var_6608]
 * 000000018004729D: call    sub_1800453AC
 * 00000001800472A2: nop
 * 00000001800472A3: lea     r8, aPixel_26; "/Pixel"
 * 00000001800472AA: mov     rdx, rax
 * 00000001800472AD: lea     rcx, [rbp+9E20h+var_6628]
 * 00000001800472B4: call    sub_18002BF78
 * 00000001800472B9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800472BE: mov     rcx, rax
 * 00000001800472C1: call    sub_1800D45A4
 * 00000001800472C6: mov     cs:byte_18026912C, al
 * 00000001800472CC: lea     rcx, [rbp+9E20h+var_6608]; void *
 * 00000001800472D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800472D8: nop
 * 00000001800472D9: lea     rcx, [rbp+9E20h+var_65E8]; void *
 * 00000001800472E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800472E5: nop
 * 00000001800472E6: lea     rcx, dword_180269130
 * 00000001800472ED: call    _Init_thread_footer
 * 00000001800472F2: mov     rax, [rdi+rbx*8]
 * 00000001800472F6: mov     eax, [r15+rax]
 * 00000001800472FA: cmp     cs:dword_180269138, eax
 * 0000000180047300: jle     loc_1800473EA
 * 0000000180047306: lea     rcx, dword_180269138
 * 000000018004730D: call    _Init_thread_header
 * 0000000180047312: cmp     cs:dword_180269138, r14d
 * 0000000180047319: jnz     loc_1800473EA
 * 000000018004731F: lea     rax, unk_18015EB00
 * 0000000180047326: mov     qword ptr [rbp+9E20h+var_9D00], rax
 * 000000018004732D: lea     rax, unk_18016508C
 * 0000000180047334: mov     qword ptr [rbp+9E20h+var_9D00+8], rax
 * 000000018004733B: movups  xmm0, [rbp+9E20h+var_9D00]
 * 0000000180047342: movups  [rbp+9E20h+var_8678], xmm0
 * 0000000180047349: mov     dword ptr [rbp+9E20h+var_8668], r13d
 * 0000000180047350: mov     dword ptr [rbp+9E20h+var_8668+4], esi
 * 0000000180047356: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004735B: movups  xmm0, [rbp+9E20h+var_8668]
 * 0000000180047362: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047367: call    sub_1800455D0
 * 000000018004736C: mov     r8, rax
 * 000000018004736F: mov     r9d, r12d
 * 0000000180047372: mov     edx, 4Ah ; 'J'
 * 0000000180047377: lea     rcx, [rbp+9E20h+var_6588]; Src
 * 000000018004737E: call    sub_1800D44B8
 * 0000000180047383: nop
 * 0000000180047384: mov     r8, rax
 * 0000000180047387: lea     rdx, aStandardshader_29; "StandardShader/ShaderModel40/"
 * 000000018004738E: lea     rcx, [rbp+9E20h+var_65A8]
 * 0000000180047395: call    sub_1800453AC
 * 000000018004739A: nop
 * 000000018004739B: lea     r8, aPixel_27; "/Pixel"
 * 00000001800473A2: mov     rdx, rax
 * 00000001800473A5: lea     rcx, [rbp+9E20h+var_65C8]
 * 00000001800473AC: call    sub_18002BF78
 * 00000001800473B1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800473B6: mov     rcx, rax
 * 00000001800473B9: call    sub_1800D45A4
 * 00000001800473BE: mov     cs:byte_180269134, al
 * 00000001800473C4: lea     rcx, [rbp+9E20h+var_65A8]; void *
 * 00000001800473CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800473D0: nop
 * 00000001800473D1: lea     rcx, [rbp+9E20h+var_6588]; void *
 * 00000001800473D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800473DD: nop
 * 00000001800473DE: lea     rcx, dword_180269138
 * 00000001800473E5: call    _Init_thread_footer
 * 00000001800473EA: mov     rax, [rdi+rbx*8]
 * 00000001800473EE: mov     eax, [r15+rax]
 * 00000001800473F2: cmp     cs:dword_180269140, eax
 * 00000001800473F8: jle     loc_1800474E2
 * 00000001800473FE: lea     rcx, dword_180269140
 * 0000000180047405: call    _Init_thread_header
 * 000000018004740A: cmp     cs:dword_180269140, r14d
 * 0000000180047411: jnz     loc_1800474E2
 * 0000000180047417: lea     rax, unk_180166160
 * 000000018004741E: mov     qword ptr [rbp+9E20h+var_9CF0], rax
 * 0000000180047425: lea     rax, unk_18016C718
 * 000000018004742C: mov     qword ptr [rbp+9E20h+var_9CF0+8], rax
 * 0000000180047433: movups  xmm0, [rbp+9E20h+var_9CF0]
 * 000000018004743A: movups  [rbp+9E20h+var_8658], xmm0
 * 0000000180047441: mov     dword ptr [rbp+9E20h+var_8648], r13d
 * 0000000180047448: mov     dword ptr [rbp+9E20h+var_8648+4], esi
 * 000000018004744E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047453: movups  xmm0, [rbp+9E20h+var_8648]
 * 000000018004745A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004745F: call    sub_1800455D0
 * 0000000180047464: mov     r8, rax
 * 0000000180047467: mov     r9d, r12d
 * 000000018004746A: mov     edx, 50h ; 'P'
 * 000000018004746F: lea     rcx, [rbp+9E20h+var_6528]; Src
 * 0000000180047476: call    sub_1800D44B8
 * 000000018004747B: nop
 * 000000018004747C: mov     r8, rax
 * 000000018004747F: lea     rdx, aStandardshader_30; "StandardShader/ShaderModel40/"
 * 0000000180047486: lea     rcx, [rbp+9E20h+var_6548]
 * 000000018004748D: call    sub_1800453AC
 * 0000000180047492: nop
 * 0000000180047493: lea     r8, aPixel_28; "/Pixel"
 * 000000018004749A: mov     rdx, rax
 * 000000018004749D: lea     rcx, [rbp+9E20h+var_6568]
 * 00000001800474A4: call    sub_18002BF78
 * 00000001800474A9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800474AE: mov     rcx, rax
 * 00000001800474B1: call    sub_1800D45A4
 * 00000001800474B6: mov     cs:byte_18026913C, al
 * 00000001800474BC: lea     rcx, [rbp+9E20h+var_6548]; void *
 * 00000001800474C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800474C8: nop
 * 00000001800474C9: lea     rcx, [rbp+9E20h+var_6528]; void *
 * 00000001800474D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800474D5: nop
 * 00000001800474D6: lea     rcx, dword_180269140
 * 00000001800474DD: call    _Init_thread_footer
 * 00000001800474E2: mov     rax, [rdi+rbx*8]
 * 00000001800474E6: mov     eax, [r15+rax]
 * 00000001800474EA: cmp     cs:dword_180269148, eax
 * 00000001800474F0: jle     loc_1800475DA
 * 00000001800474F6: lea     rcx, dword_180269148
 * 00000001800474FD: call    _Init_thread_header
 * 0000000180047502: cmp     cs:dword_180269148, r14d
 * 0000000180047509: jnz     loc_1800475DA
 * 000000018004750F: lea     rax, unk_180166160
 * 0000000180047516: mov     qword ptr [rbp+9E20h+var_9CE0], rax
 * 000000018004751D: lea     rax, unk_18016C718
 * 0000000180047524: mov     qword ptr [rbp+9E20h+var_9CE0+8], rax
 * 000000018004752B: movups  xmm0, [rbp+9E20h+var_9CE0]
 * 0000000180047532: movups  [rbp+9E20h+var_8638], xmm0
 * 0000000180047539: mov     dword ptr [rbp+9E20h+var_8628], r13d
 * 0000000180047540: mov     dword ptr [rbp+9E20h+var_8628+4], esi
 * 0000000180047546: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004754B: movups  xmm0, [rbp+9E20h+var_8628]
 * 0000000180047552: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047557: call    sub_1800455D0
 * 000000018004755C: mov     r8, rax
 * 000000018004755F: mov     r9d, r12d
 * 0000000180047562: mov     edx, 52h ; 'R'
 * 0000000180047567: lea     rcx, [rbp+9E20h+var_64C8]; Src
 * 000000018004756E: call    sub_1800D44B8
 * 0000000180047573: nop
 * 0000000180047574: mov     r8, rax
 * 0000000180047577: lea     rdx, aStandardshader_31; "StandardShader/ShaderModel40/"
 * 000000018004757E: lea     rcx, [rbp+9E20h+var_64E8]
 * 0000000180047585: call    sub_1800453AC
 * 000000018004758A: nop
 * 000000018004758B: lea     r8, aPixel_29; "/Pixel"
 * 0000000180047592: mov     rdx, rax
 * 0000000180047595: lea     rcx, [rbp+9E20h+var_6508]
 * 000000018004759C: call    sub_18002BF78
 * 00000001800475A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800475A6: mov     rcx, rax
 * 00000001800475A9: call    sub_1800D45A4
 * 00000001800475AE: mov     cs:byte_180269144, al
 * 00000001800475B4: lea     rcx, [rbp+9E20h+var_64E8]; void *
 * 00000001800475BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800475C0: nop
 * 00000001800475C1: lea     rcx, [rbp+9E20h+var_64C8]; void *
 * 00000001800475C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800475CD: nop
 * 00000001800475CE: lea     rcx, dword_180269148
 * 00000001800475D5: call    _Init_thread_footer
 * 00000001800475DA: mov     rax, [rdi+rbx*8]
 * 00000001800475DE: mov     eax, [r15+rax]
 * 00000001800475E2: cmp     cs:dword_180269150, eax
 * 00000001800475E8: jle     loc_1800476D2
 * 00000001800475EE: lea     rcx, dword_180269150
 * 00000001800475F5: call    _Init_thread_header
 * 00000001800475FA: cmp     cs:dword_180269150, r14d
 * 0000000180047601: jnz     loc_1800476D2
 * 0000000180047607: lea     rax, unk_18016FA20
 * 000000018004760E: mov     qword ptr [rbp+9E20h+var_9CD0], rax
 * 0000000180047615: lea     rax, unk_1801761AC
 * 000000018004761C: mov     qword ptr [rbp+9E20h+var_9CD0+8], rax
 * 0000000180047623: movups  xmm0, [rbp+9E20h+var_9CD0]
 * 000000018004762A: movups  [rbp+9E20h+var_8618], xmm0
 * 0000000180047631: mov     dword ptr [rbp+9E20h+var_8608], r13d
 * 0000000180047638: mov     dword ptr [rbp+9E20h+var_8608+4], esi
 * 000000018004763E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047643: movups  xmm0, [rbp+9E20h+var_8608]
 * 000000018004764A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004764F: call    sub_1800455D0
 * 0000000180047654: mov     r8, rax
 * 0000000180047657: mov     r9d, r12d
 * 000000018004765A: mov     edx, 58h ; 'X'
 * 000000018004765F: lea     rcx, [rbp+9E20h+var_6468]; Src
 * 0000000180047666: call    sub_1800D44B8
 * 000000018004766B: nop
 * 000000018004766C: mov     r8, rax
 * 000000018004766F: lea     rdx, aStandardshader_32; "StandardShader/ShaderModel40/"
 * 0000000180047676: lea     rcx, [rbp+9E20h+var_6488]
 * 000000018004767D: call    sub_1800453AC
 * 0000000180047682: nop
 * 0000000180047683: lea     r8, aPixel_30; "/Pixel"
 * 000000018004768A: mov     rdx, rax
 * 000000018004768D: lea     rcx, [rbp+9E20h+var_64A8]
 * 0000000180047694: call    sub_18002BF78
 * 0000000180047699: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004769E: mov     rcx, rax
 * 00000001800476A1: call    sub_1800D45A4
 * 00000001800476A6: mov     cs:byte_18026914C, al
 * 00000001800476AC: lea     rcx, [rbp+9E20h+var_6488]; void *
 * 00000001800476B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800476B8: nop
 * 00000001800476B9: lea     rcx, [rbp+9E20h+var_6468]; void *
 * 00000001800476C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800476C5: nop
 * 00000001800476C6: lea     rcx, dword_180269150
 * 00000001800476CD: call    _Init_thread_footer
 * 00000001800476D2: mov     rax, [rdi+rbx*8]
 * 00000001800476D6: mov     eax, [r15+rax]
 * 00000001800476DA: cmp     cs:dword_180269158, eax
 * 00000001800476E0: jle     loc_1800477CA
 * 00000001800476E6: lea     rcx, dword_180269158
 * 00000001800476ED: call    _Init_thread_header
 * 00000001800476F2: cmp     cs:dword_180269158, r14d
 * 00000001800476F9: jnz     loc_1800477CA
 * 00000001800476FF: lea     rax, unk_18016FA20
 * 0000000180047706: mov     qword ptr [rbp+9E20h+var_9CC0], rax
 * 000000018004770D: lea     rax, unk_1801761AC
 * 0000000180047714: mov     qword ptr [rbp+9E20h+var_9CC0+8], rax
 * 000000018004771B: movups  xmm0, [rbp+9E20h+var_9CC0]
 * 0000000180047722: movups  [rbp+9E20h+var_85F8], xmm0
 * 0000000180047729: mov     dword ptr [rbp+9E20h+var_85E8], r13d
 * 0000000180047730: mov     dword ptr [rbp+9E20h+var_85E8+4], esi
 * 0000000180047736: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004773B: movups  xmm0, [rbp+9E20h+var_85E8]
 * 0000000180047742: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047747: call    sub_1800455D0
 * 000000018004774C: mov     r8, rax
 * 000000018004774F: mov     r9d, r12d
 * 0000000180047752: mov     edx, 5Ah ; 'Z'
 * 0000000180047757: lea     rcx, [rbp+9E20h+var_6408]; Src
 * 000000018004775E: call    sub_1800D44B8
 * 0000000180047763: nop
 * 0000000180047764: mov     r8, rax
 * 0000000180047767: lea     rdx, aStandardshader_33; "StandardShader/ShaderModel40/"
 * 000000018004776E: lea     rcx, [rbp+9E20h+var_6428]
 * 0000000180047775: call    sub_1800453AC
 * 000000018004777A: nop
 * 000000018004777B: lea     r8, aPixel_31; "/Pixel"
 * 0000000180047782: mov     rdx, rax
 * 0000000180047785: lea     rcx, [rbp+9E20h+var_6448]
 * 000000018004778C: call    sub_18002BF78
 * 0000000180047791: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047796: mov     rcx, rax
 * 0000000180047799: call    sub_1800D45A4
 * 000000018004779E: mov     cs:byte_180269154, al
 * 00000001800477A4: lea     rcx, [rbp+9E20h+var_6428]; void *
 * 00000001800477AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800477B0: nop
 * 00000001800477B1: lea     rcx, [rbp+9E20h+var_6408]; void *
 * 00000001800477B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800477BD: nop
 * 00000001800477BE: lea     rcx, dword_180269158
 * 00000001800477C5: call    _Init_thread_footer
 * 00000001800477CA: mov     rax, [rdi+rbx*8]
 * 00000001800477CE: mov     eax, [r15+rax]
 * 00000001800477D2: cmp     cs:dword_180269160, eax
 * 00000001800477D8: jle     loc_1800478C2
 * 00000001800477DE: lea     rcx, dword_180269160
 * 00000001800477E5: call    _Init_thread_header
 * 00000001800477EA: cmp     cs:dword_180269160, r14d
 * 00000001800477F1: jnz     loc_1800478C2
 * 00000001800477F7: lea     rax, unk_180154160
 * 00000001800477FE: mov     qword ptr [rbp+9E20h+var_9CB0], rax
 * 0000000180047805: lea     rax, unk_18015A544
 * 000000018004780C: mov     qword ptr [rbp+9E20h+var_9CB0+8], rax
 * 0000000180047813: movups  xmm0, [rbp+9E20h+var_9CB0]
 * 000000018004781A: movups  [rbp+9E20h+var_85D8], xmm0
 * 0000000180047821: mov     dword ptr [rbp+9E20h+var_85C8], r13d
 * 0000000180047828: mov     dword ptr [rbp+9E20h+var_85C8+4], esi
 * 000000018004782E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047833: movups  xmm0, [rbp+9E20h+var_85C8]
 * 000000018004783A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004783F: call    sub_1800455D0
 * 0000000180047844: mov     r8, rax
 * 0000000180047847: mov     r9d, r12d
 * 000000018004784A: mov     edx, 60h ; '`'
 * 000000018004784F: lea     rcx, [rbp+9E20h+var_63A8]; Src
 * 0000000180047856: call    sub_1800D44B8
 * 000000018004785B: nop
 * 000000018004785C: mov     r8, rax
 * 000000018004785F: lea     rdx, aStandardshader_34; "StandardShader/ShaderModel40/"
 * 0000000180047866: lea     rcx, [rbp+9E20h+var_63C8]
 * 000000018004786D: call    sub_1800453AC
 * 0000000180047872: nop
 * 0000000180047873: lea     r8, aPixel_32; "/Pixel"
 * 000000018004787A: mov     rdx, rax
 * 000000018004787D: lea     rcx, [rbp+9E20h+var_63E8]
 * 0000000180047884: call    sub_18002BF78
 * 0000000180047889: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004788E: mov     rcx, rax
 * 0000000180047891: call    sub_1800D45A4
 * 0000000180047896: mov     cs:byte_18026915C, al
 * 000000018004789C: lea     rcx, [rbp+9E20h+var_63C8]; void *
 * 00000001800478A3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800478A8: nop
 * 00000001800478A9: lea     rcx, [rbp+9E20h+var_63A8]; void *
 * 00000001800478B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800478B5: nop
 * 00000001800478B6: lea     rcx, dword_180269160
 * 00000001800478BD: call    _Init_thread_footer
 * 00000001800478C2: mov     rax, [rdi+rbx*8]
 * 00000001800478C6: mov     eax, [r15+rax]
 * 00000001800478CA: cmp     cs:dword_180269168, eax
 * 00000001800478D0: jle     loc_1800479BA
 * 00000001800478D6: lea     rcx, dword_180269168
 * 00000001800478DD: call    _Init_thread_header
 * 00000001800478E2: cmp     cs:dword_180269168, r14d
 * 00000001800478E9: jnz     loc_1800479BA
 * 00000001800478EF: lea     rax, unk_180154160
 * 00000001800478F6: mov     qword ptr [rbp+9E20h+var_9CA0], rax
 * 00000001800478FD: lea     rax, unk_18015A544
 * 0000000180047904: mov     qword ptr [rbp+9E20h+var_9CA0+8], rax
 * 000000018004790B: movups  xmm0, [rbp+9E20h+var_9CA0]
 * 0000000180047912: movups  [rbp+9E20h+var_85B8], xmm0
 * 0000000180047919: mov     dword ptr [rbp+9E20h+var_85A8], r13d
 * 0000000180047920: mov     dword ptr [rbp+9E20h+var_85A8+4], esi
 * 0000000180047926: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004792B: movups  xmm0, [rbp+9E20h+var_85A8]
 * 0000000180047932: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047937: call    sub_1800455D0
 * 000000018004793C: mov     r8, rax
 * 000000018004793F: mov     r9d, r12d
 * 0000000180047942: mov     edx, 62h ; 'b'
 * 0000000180047947: lea     rcx, [rbp+9E20h+var_6348]; Src
 * 000000018004794E: call    sub_1800D44B8
 * 0000000180047953: nop
 * 0000000180047954: mov     r8, rax
 * 0000000180047957: lea     rdx, aStandardshader_35; "StandardShader/ShaderModel40/"
 * 000000018004795E: lea     rcx, [rbp+9E20h+var_6368]
 * 0000000180047965: call    sub_1800453AC
 * 000000018004796A: nop
 * 000000018004796B: lea     r8, aPixel_33; "/Pixel"
 * 0000000180047972: mov     rdx, rax
 * 0000000180047975: lea     rcx, [rbp+9E20h+var_6388]
 * 000000018004797C: call    sub_18002BF78
 * 0000000180047981: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047986: mov     rcx, rax
 * 0000000180047989: call    sub_1800D45A4
 * 000000018004798E: mov     cs:byte_180269164, al
 * 0000000180047994: lea     rcx, [rbp+9E20h+var_6368]; void *
 * 000000018004799B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800479A0: nop
 * 00000001800479A1: lea     rcx, [rbp+9E20h+var_6348]; void *
 * 00000001800479A8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800479AD: nop
 * 00000001800479AE: lea     rcx, dword_180269168
 * 00000001800479B5: call    _Init_thread_footer
 * 00000001800479BA: mov     rax, [rdi+rbx*8]
 * 00000001800479BE: mov     eax, [r15+rax]
 * 00000001800479C2: cmp     cs:dword_180269170, eax
 * 00000001800479C8: jle     loc_180047AB2
 * 00000001800479CE: lea     rcx, dword_180269170
 * 00000001800479D5: call    _Init_thread_header
 * 00000001800479DA: cmp     cs:dword_180269170, r14d
 * 00000001800479E1: jnz     loc_180047AB2
 * 00000001800479E7: lea     rax, unk_18015EB00
 * 00000001800479EE: mov     qword ptr [rbp+9E20h+var_9C90], rax
 * 00000001800479F5: lea     rax, unk_18016508C
 * 00000001800479FC: mov     qword ptr [rbp+9E20h+var_9C90+8], rax
 * 0000000180047A03: movups  xmm0, [rbp+9E20h+var_9C90]
 * 0000000180047A0A: movups  [rbp+9E20h+var_8598], xmm0
 * 0000000180047A11: mov     dword ptr [rbp+9E20h+var_8588], r13d
 * 0000000180047A18: mov     dword ptr [rbp+9E20h+var_8588+4], esi
 * 0000000180047A1E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047A23: movups  xmm0, [rbp+9E20h+var_8588]
 * 0000000180047A2A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047A2F: call    sub_1800455D0
 * 0000000180047A34: mov     r8, rax
 * 0000000180047A37: mov     r9d, r12d
 * 0000000180047A3A: mov     edx, 68h ; 'h'
 * 0000000180047A3F: lea     rcx, [rbp+9E20h+var_62E8]; Src
 * 0000000180047A46: call    sub_1800D44B8
 * 0000000180047A4B: nop
 * 0000000180047A4C: mov     r8, rax
 * 0000000180047A4F: lea     rdx, aStandardshader_36; "StandardShader/ShaderModel40/"
 * 0000000180047A56: lea     rcx, [rbp+9E20h+var_6308]
 * 0000000180047A5D: call    sub_1800453AC
 * 0000000180047A62: nop
 * 0000000180047A63: lea     r8, aPixel_34; "/Pixel"
 * 0000000180047A6A: mov     rdx, rax
 * 0000000180047A6D: lea     rcx, [rbp+9E20h+var_6328]
 * 0000000180047A74: call    sub_18002BF78
 * 0000000180047A79: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047A7E: mov     rcx, rax
 * 0000000180047A81: call    sub_1800D45A4
 * 0000000180047A86: mov     cs:byte_18026916C, al
 * 0000000180047A8C: lea     rcx, [rbp+9E20h+var_6308]; void *
 * 0000000180047A93: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047A98: nop
 * 0000000180047A99: lea     rcx, [rbp+9E20h+var_62E8]; void *
 * 0000000180047AA0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047AA5: nop
 * 0000000180047AA6: lea     rcx, dword_180269170
 * 0000000180047AAD: call    _Init_thread_footer
 * 0000000180047AB2: mov     rax, [rdi+rbx*8]
 * 0000000180047AB6: mov     eax, [r15+rax]
 * 0000000180047ABA: cmp     cs:dword_180269178, eax
 * 0000000180047AC0: jle     loc_180047BAA
 * 0000000180047AC6: lea     rcx, dword_180269178
 * 0000000180047ACD: call    _Init_thread_header
 * 0000000180047AD2: cmp     cs:dword_180269178, r14d
 * 0000000180047AD9: jnz     loc_180047BAA
 * 0000000180047ADF: lea     rax, unk_18015EB00
 * 0000000180047AE6: mov     qword ptr [rbp+9E20h+var_9C80], rax
 * 0000000180047AED: lea     rax, unk_18016508C
 * 0000000180047AF4: mov     qword ptr [rbp+9E20h+var_9C80+8], rax
 * 0000000180047AFB: movups  xmm0, [rbp+9E20h+var_9C80]
 * 0000000180047B02: movups  [rbp+9E20h+var_8578], xmm0
 * 0000000180047B09: mov     dword ptr [rbp+9E20h+var_8568], r13d
 * 0000000180047B10: mov     dword ptr [rbp+9E20h+var_8568+4], esi
 * 0000000180047B16: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047B1B: movups  xmm0, [rbp+9E20h+var_8568]
 * 0000000180047B22: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047B27: call    sub_1800455D0
 * 0000000180047B2C: mov     r8, rax
 * 0000000180047B2F: mov     r9d, r12d
 * 0000000180047B32: mov     edx, 6Ah ; 'j'
 * 0000000180047B37: lea     rcx, [rbp+9E20h+var_6288]; Src
 * 0000000180047B3E: call    sub_1800D44B8
 * 0000000180047B43: nop
 * 0000000180047B44: mov     r8, rax
 * 0000000180047B47: lea     rdx, aStandardshader_37; "StandardShader/ShaderModel40/"
 * 0000000180047B4E: lea     rcx, [rbp+9E20h+var_62A8]
 * 0000000180047B55: call    sub_1800453AC
 * 0000000180047B5A: nop
 * 0000000180047B5B: lea     r8, aPixel_35; "/Pixel"
 * 0000000180047B62: mov     rdx, rax
 * 0000000180047B65: lea     rcx, [rbp+9E20h+var_62C8]
 * 0000000180047B6C: call    sub_18002BF78
 * 0000000180047B71: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047B76: mov     rcx, rax
 * 0000000180047B79: call    sub_1800D45A4
 * 0000000180047B7E: mov     cs:byte_180269174, al
 * 0000000180047B84: lea     rcx, [rbp+9E20h+var_62A8]; void *
 * 0000000180047B8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047B90: nop
 * 0000000180047B91: lea     rcx, [rbp+9E20h+var_6288]; void *
 * 0000000180047B98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047B9D: nop
 * 0000000180047B9E: lea     rcx, dword_180269178
 * 0000000180047BA5: call    _Init_thread_footer
 * 0000000180047BAA: mov     rax, [rdi+rbx*8]
 * 0000000180047BAE: mov     eax, [r15+rax]
 * 0000000180047BB2: cmp     cs:dword_180269180, eax
 * 0000000180047BB8: jle     loc_180047CA2
 * 0000000180047BBE: lea     rcx, dword_180269180
 * 0000000180047BC5: call    _Init_thread_header
 * 0000000180047BCA: cmp     cs:dword_180269180, r14d
 * 0000000180047BD1: jnz     loc_180047CA2
 * 0000000180047BD7: lea     rax, unk_180166160
 * 0000000180047BDE: mov     qword ptr [rbp+9E20h+var_9C70], rax
 * 0000000180047BE5: lea     rax, unk_18016C718
 * 0000000180047BEC: mov     qword ptr [rbp+9E20h+var_9C70+8], rax
 * 0000000180047BF3: movups  xmm0, [rbp+9E20h+var_9C70]
 * 0000000180047BFA: movups  [rbp+9E20h+var_8558], xmm0
 * 0000000180047C01: mov     dword ptr [rbp+9E20h+var_8548], r13d
 * 0000000180047C08: mov     dword ptr [rbp+9E20h+var_8548+4], esi
 * 0000000180047C0E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047C13: movups  xmm0, [rbp+9E20h+var_8548]
 * 0000000180047C1A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047C1F: call    sub_1800455D0
 * 0000000180047C24: mov     r8, rax
 * 0000000180047C27: mov     r9d, r12d
 * 0000000180047C2A: mov     edx, 70h ; 'p'
 * 0000000180047C2F: lea     rcx, [rbp+9E20h+var_6228]; Src
 * 0000000180047C36: call    sub_1800D44B8
 * 0000000180047C3B: nop
 * 0000000180047C3C: mov     r8, rax
 * 0000000180047C3F: lea     rdx, aStandardshader_38; "StandardShader/ShaderModel40/"
 * 0000000180047C46: lea     rcx, [rbp+9E20h+var_6248]
 * 0000000180047C4D: call    sub_1800453AC
 * 0000000180047C52: nop
 * 0000000180047C53: lea     r8, aPixel_36; "/Pixel"
 * 0000000180047C5A: mov     rdx, rax
 * 0000000180047C5D: lea     rcx, [rbp+9E20h+var_6268]
 * 0000000180047C64: call    sub_18002BF78
 * 0000000180047C69: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047C6E: mov     rcx, rax
 * 0000000180047C71: call    sub_1800D45A4
 * 0000000180047C76: mov     cs:byte_18026917C, al
 * 0000000180047C7C: lea     rcx, [rbp+9E20h+var_6248]; void *
 * 0000000180047C83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047C88: nop
 * 0000000180047C89: lea     rcx, [rbp+9E20h+var_6228]; void *
 * 0000000180047C90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047C95: nop
 * 0000000180047C96: lea     rcx, dword_180269180
 * 0000000180047C9D: call    _Init_thread_footer
 * 0000000180047CA2: mov     rax, [rdi+rbx*8]
 * 0000000180047CA6: mov     eax, [r15+rax]
 * 0000000180047CAA: cmp     cs:dword_180269188, eax
 * 0000000180047CB0: jle     loc_180047D9A
 * 0000000180047CB6: lea     rcx, dword_180269188
 * 0000000180047CBD: call    _Init_thread_header
 * 0000000180047CC2: cmp     cs:dword_180269188, r14d
 * 0000000180047CC9: jnz     loc_180047D9A
 * 0000000180047CCF: lea     rax, unk_180166160
 * 0000000180047CD6: mov     qword ptr [rbp+9E20h+var_9C60], rax
 * 0000000180047CDD: lea     rax, unk_18016C718
 * 0000000180047CE4: mov     qword ptr [rbp+9E20h+var_9C60+8], rax
 * 0000000180047CEB: movups  xmm0, [rbp+9E20h+var_9C60]
 * 0000000180047CF2: movups  [rbp+9E20h+var_8538], xmm0
 * 0000000180047CF9: mov     dword ptr [rbp+9E20h+var_8528], r13d
 * 0000000180047D00: mov     dword ptr [rbp+9E20h+var_8528+4], esi
 * 0000000180047D06: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047D0B: movups  xmm0, [rbp+9E20h+var_8528]
 * 0000000180047D12: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047D17: call    sub_1800455D0
 * 0000000180047D1C: mov     r8, rax
 * 0000000180047D1F: mov     r9d, r12d
 * 0000000180047D22: mov     edx, 72h ; 'r'
 * 0000000180047D27: lea     rcx, [rbp+9E20h+var_61C8]; Src
 * 0000000180047D2E: call    sub_1800D44B8
 * 0000000180047D33: nop
 * 0000000180047D34: mov     r8, rax
 * 0000000180047D37: lea     rdx, aStandardshader_39; "StandardShader/ShaderModel40/"
 * 0000000180047D3E: lea     rcx, [rbp+9E20h+var_61E8]
 * 0000000180047D45: call    sub_1800453AC
 * 0000000180047D4A: nop
 * 0000000180047D4B: lea     r8, aPixel_37; "/Pixel"
 * 0000000180047D52: mov     rdx, rax
 * 0000000180047D55: lea     rcx, [rbp+9E20h+var_6208]
 * 0000000180047D5C: call    sub_18002BF78
 * 0000000180047D61: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047D66: mov     rcx, rax
 * 0000000180047D69: call    sub_1800D45A4
 * 0000000180047D6E: mov     cs:byte_180269184, al
 * 0000000180047D74: lea     rcx, [rbp+9E20h+var_61E8]; void *
 * 0000000180047D7B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047D80: nop
 * 0000000180047D81: lea     rcx, [rbp+9E20h+var_61C8]; void *
 * 0000000180047D88: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047D8D: nop
 * 0000000180047D8E: lea     rcx, dword_180269188
 * 0000000180047D95: call    _Init_thread_footer
 * 0000000180047D9A: mov     rax, [rdi+rbx*8]
 * 0000000180047D9E: mov     eax, [r15+rax]
 * 0000000180047DA2: cmp     cs:dword_180269190, eax
 * 0000000180047DA8: jle     loc_180047E92
 * 0000000180047DAE: lea     rcx, dword_180269190
 * 0000000180047DB5: call    _Init_thread_header
 * 0000000180047DBA: cmp     cs:dword_180269190, r14d
 * 0000000180047DC1: jnz     loc_180047E92
 * 0000000180047DC7: lea     rax, unk_18016FA20
 * 0000000180047DCE: mov     qword ptr [rbp+9E20h+var_9C50], rax
 * 0000000180047DD5: lea     rax, unk_1801761AC
 * 0000000180047DDC: mov     qword ptr [rbp+9E20h+var_9C50+8], rax
 * 0000000180047DE3: movups  xmm0, [rbp+9E20h+var_9C50]
 * 0000000180047DEA: movups  [rbp+9E20h+var_8518], xmm0
 * 0000000180047DF1: mov     dword ptr [rbp+9E20h+var_8508], r13d
 * 0000000180047DF8: mov     dword ptr [rbp+9E20h+var_8508+4], esi
 * 0000000180047DFE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047E03: movups  xmm0, [rbp+9E20h+var_8508]
 * 0000000180047E0A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047E0F: call    sub_1800455D0
 * 0000000180047E14: mov     r8, rax
 * 0000000180047E17: mov     r9d, r12d
 * 0000000180047E1A: mov     edx, 78h ; 'x'
 * 0000000180047E1F: lea     rcx, [rbp+9E20h+var_6168]; Src
 * 0000000180047E26: call    sub_1800D44B8
 * 0000000180047E2B: nop
 * 0000000180047E2C: mov     r8, rax
 * 0000000180047E2F: lea     rdx, aStandardshader_40; "StandardShader/ShaderModel40/"
 * 0000000180047E36: lea     rcx, [rbp+9E20h+var_6188]
 * 0000000180047E3D: call    sub_1800453AC
 * 0000000180047E42: nop
 * 0000000180047E43: lea     r8, aPixel_38; "/Pixel"
 * 0000000180047E4A: mov     rdx, rax
 * 0000000180047E4D: lea     rcx, [rbp+9E20h+var_61A8]
 * 0000000180047E54: call    sub_18002BF78
 * 0000000180047E59: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047E5E: mov     rcx, rax
 * 0000000180047E61: call    sub_1800D45A4
 * 0000000180047E66: mov     cs:byte_18026918C, al
 * 0000000180047E6C: lea     rcx, [rbp+9E20h+var_6188]; void *
 * 0000000180047E73: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047E78: nop
 * 0000000180047E79: lea     rcx, [rbp+9E20h+var_6168]; void *
 * 0000000180047E80: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047E85: nop
 * 0000000180047E86: lea     rcx, dword_180269190
 * 0000000180047E8D: call    _Init_thread_footer
 * 0000000180047E92: mov     rax, [rdi+rbx*8]
 * 0000000180047E96: mov     eax, [r15+rax]
 * 0000000180047E9A: cmp     cs:dword_180269198, eax
 * 0000000180047EA0: jle     loc_180047F8A
 * 0000000180047EA6: lea     rcx, dword_180269198
 * 0000000180047EAD: call    _Init_thread_header
 * 0000000180047EB2: cmp     cs:dword_180269198, r14d
 * 0000000180047EB9: jnz     loc_180047F8A
 * 0000000180047EBF: lea     rax, unk_18016FA20
 * 0000000180047EC6: mov     qword ptr [rbp+9E20h+var_9C40], rax
 * 0000000180047ECD: lea     rax, unk_1801761AC
 * 0000000180047ED4: mov     qword ptr [rbp+9E20h+var_9C40+8], rax
 * 0000000180047EDB: movups  xmm0, [rbp+9E20h+var_9C40]
 * 0000000180047EE2: movups  [rbp+9E20h+var_84F8], xmm0
 * 0000000180047EE9: mov     dword ptr [rbp+9E20h+var_84E8], r13d
 * 0000000180047EF0: mov     dword ptr [rbp+9E20h+var_84E8+4], esi
 * 0000000180047EF6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047EFB: movups  xmm0, [rbp+9E20h+var_84E8]
 * 0000000180047F02: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047F07: call    sub_1800455D0
 * 0000000180047F0C: mov     r8, rax
 * 0000000180047F0F: mov     r9d, r12d
 * 0000000180047F12: mov     edx, 7Ah ; 'z'
 * 0000000180047F17: lea     rcx, [rbp+9E20h+var_6108]; Src
 * 0000000180047F1E: call    sub_1800D44B8
 * 0000000180047F23: nop
 * 0000000180047F24: mov     r8, rax
 * 0000000180047F27: lea     rdx, aStandardshader_41; "StandardShader/ShaderModel40/"
 * 0000000180047F2E: lea     rcx, [rbp+9E20h+var_6128]
 * 0000000180047F35: call    sub_1800453AC
 * 0000000180047F3A: nop
 * 0000000180047F3B: lea     r8, aPixel_39; "/Pixel"
 * 0000000180047F42: mov     rdx, rax
 * 0000000180047F45: lea     rcx, [rbp+9E20h+var_6148]
 * 0000000180047F4C: call    sub_18002BF78
 * 0000000180047F51: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047F56: mov     rcx, rax
 * 0000000180047F59: call    sub_1800D45A4
 * 0000000180047F5E: mov     cs:byte_180269194, al
 * 0000000180047F64: lea     rcx, [rbp+9E20h+var_6128]; void *
 * 0000000180047F6B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047F70: nop
 * 0000000180047F71: lea     rcx, [rbp+9E20h+var_6108]; void *
 * 0000000180047F78: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047F7D: nop
 * 0000000180047F7E: lea     rcx, dword_180269198
 * 0000000180047F85: call    _Init_thread_footer
 * 0000000180047F8A: mov     rax, [rdi+rbx*8]
 * 0000000180047F8E: mov     eax, [r15+rax]
 * 0000000180047F92: cmp     cs:dword_1802691A0, eax
 * 0000000180047F98: jle     loc_180048082
 * 0000000180047F9E: lea     rcx, dword_1802691A0
 * 0000000180047FA5: call    _Init_thread_header
 * 0000000180047FAA: cmp     cs:dword_1802691A0, r14d
 * 0000000180047FB1: jnz     loc_180048082
 * 0000000180047FB7: lea     rax, unk_180154160
 * 0000000180047FBE: mov     qword ptr [rbp+9E20h+var_9C30], rax
 * 0000000180047FC5: lea     rax, unk_18015A544
 * 0000000180047FCC: mov     qword ptr [rbp+9E20h+var_9C30+8], rax
 * 0000000180047FD3: movups  xmm0, [rbp+9E20h+var_9C30]
 * 0000000180047FDA: movups  [rbp+9E20h+var_84D8], xmm0
 * 0000000180047FE1: mov     dword ptr [rbp+9E20h+var_84C8], r13d
 * 0000000180047FE8: mov     dword ptr [rbp+9E20h+var_84C8+4], esi
 * 0000000180047FEE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047FF3: movups  xmm0, [rbp+9E20h+var_84C8]
 * 0000000180047FFA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047FFF: call    sub_1800455D0
 * 0000000180048004: mov     r8, rax
 * 0000000180048007: mov     r9d, r12d
 * 000000018004800A: mov     edx, 80h
 * 000000018004800F: lea     rcx, [rbp+9E20h+var_60A8]; Src
 * 0000000180048016: call    sub_1800D44B8
 * 000000018004801B: nop
 * 000000018004801C: mov     r8, rax
 * 000000018004801F: lea     rdx, aStandardshader_42; "StandardShader/ShaderModel40/"
 * 0000000180048026: lea     rcx, [rbp+9E20h+var_60C8]
 * 000000018004802D: call    sub_1800453AC
 * 0000000180048032: nop
 * 0000000180048033: lea     r8, aPixel_40; "/Pixel"
 * 000000018004803A: mov     rdx, rax
 * 000000018004803D: lea     rcx, [rbp+9E20h+var_60E8]
 * 0000000180048044: call    sub_18002BF78
 * 0000000180048049: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004804E: mov     rcx, rax
 * 0000000180048051: call    sub_1800D45A4
 * 0000000180048056: mov     cs:byte_18026919C, al
 * 000000018004805C: lea     rcx, [rbp+9E20h+var_60C8]; void *
 * 0000000180048063: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048068: nop
 * 0000000180048069: lea     rcx, [rbp+9E20h+var_60A8]; void *
 * 0000000180048070: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048075: nop
 * 0000000180048076: lea     rcx, dword_1802691A0
 * 000000018004807D: call    _Init_thread_footer
 * 0000000180048082: mov     rax, [rdi+rbx*8]
 * 0000000180048086: mov     eax, [r15+rax]
 * 000000018004808A: cmp     cs:dword_1802691A8, eax
 * 0000000180048090: jle     loc_18004817A
 * 0000000180048096: lea     rcx, dword_1802691A8
 * 000000018004809D: call    _Init_thread_header
 * 00000001800480A2: cmp     cs:dword_1802691A8, r14d
 * 00000001800480A9: jnz     loc_18004817A
 * 00000001800480AF: lea     rax, unk_180154160
 * 00000001800480B6: mov     qword ptr [rbp+9E20h+var_9C20], rax
 * 00000001800480BD: lea     rax, unk_18015A544
 * 00000001800480C4: mov     qword ptr [rbp+9E20h+var_9C20+8], rax
 * 00000001800480CB: movups  xmm0, [rbp+9E20h+var_9C20]
 * 00000001800480D2: movups  [rbp+9E20h+var_84B8], xmm0
 * 00000001800480D9: mov     dword ptr [rbp+9E20h+var_84A8], r13d
 * 00000001800480E0: mov     dword ptr [rbp+9E20h+var_84A8+4], esi
 * 00000001800480E6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800480EB: movups  xmm0, [rbp+9E20h+var_84A8]
 * 00000001800480F2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800480F7: call    sub_1800455D0
 * 00000001800480FC: mov     r8, rax
 * 00000001800480FF: mov     r9d, r12d
 * 0000000180048102: mov     edx, 82h
 * 0000000180048107: lea     rcx, [rbp+9E20h+var_6048]; Src
 * 000000018004810E: call    sub_1800D44B8
 * 0000000180048113: nop
 * 0000000180048114: mov     r8, rax
 * 0000000180048117: lea     rdx, aStandardshader_43; "StandardShader/ShaderModel40/"
 * 000000018004811E: lea     rcx, [rbp+9E20h+var_6068]
 * 0000000180048125: call    sub_1800453AC
 * 000000018004812A: nop
 * 000000018004812B: lea     r8, aPixel_41; "/Pixel"
 * 0000000180048132: mov     rdx, rax
 * 0000000180048135: lea     rcx, [rbp+9E20h+var_6088]
 * 000000018004813C: call    sub_18002BF78
 * 0000000180048141: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048146: mov     rcx, rax
 * 0000000180048149: call    sub_1800D45A4
 * 000000018004814E: mov     cs:byte_1802691A4, al
 * 0000000180048154: lea     rcx, [rbp+9E20h+var_6068]; void *
 * 000000018004815B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048160: nop
 * 0000000180048161: lea     rcx, [rbp+9E20h+var_6048]; void *
 * 0000000180048168: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004816D: nop
 * 000000018004816E: lea     rcx, dword_1802691A8
 * 0000000180048175: call    _Init_thread_footer
 * 000000018004817A: mov     rax, [rdi+rbx*8]
 * 000000018004817E: mov     eax, [r15+rax]
 * 0000000180048182: cmp     cs:dword_1802691B0, eax
 * 0000000180048188: jle     loc_180048272
 * 000000018004818E: lea     rcx, dword_1802691B0
 * 0000000180048195: call    _Init_thread_header
 * 000000018004819A: cmp     cs:dword_1802691B0, r14d
 * 00000001800481A1: jnz     loc_180048272
 * 00000001800481A7: lea     rax, unk_18015EB00
 * 00000001800481AE: mov     qword ptr [rbp+9E20h+var_9C10], rax
 * 00000001800481B5: lea     rax, unk_18016508C
 * 00000001800481BC: mov     qword ptr [rbp+9E20h+var_9C10+8], rax
 * 00000001800481C3: movups  xmm0, [rbp+9E20h+var_9C10]
 * 00000001800481CA: movups  [rbp+9E20h+var_8498], xmm0
 * 00000001800481D1: mov     dword ptr [rbp+9E20h+var_8488], r13d
 * 00000001800481D8: mov     dword ptr [rbp+9E20h+var_8488+4], esi
 * 00000001800481DE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800481E3: movups  xmm0, [rbp+9E20h+var_8488]
 * 00000001800481EA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800481EF: call    sub_1800455D0
 * 00000001800481F4: mov     r8, rax
 * 00000001800481F7: mov     r9d, r12d
 * 00000001800481FA: mov     edx, 88h
 * 00000001800481FF: lea     rcx, [rbp+9E20h+var_5FE8]; Src
 * 0000000180048206: call    sub_1800D44B8
 * 000000018004820B: nop
 * 000000018004820C: mov     r8, rax
 * 000000018004820F: lea     rdx, aStandardshader_44; "StandardShader/ShaderModel40/"
 * 0000000180048216: lea     rcx, [rbp+9E20h+var_6008]
 * 000000018004821D: call    sub_1800453AC
 * 0000000180048222: nop
 * 0000000180048223: lea     r8, aPixel_42; "/Pixel"
 * 000000018004822A: mov     rdx, rax
 * 000000018004822D: lea     rcx, [rbp+9E20h+var_6028]
 * 0000000180048234: call    sub_18002BF78
 * 0000000180048239: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004823E: mov     rcx, rax
 * 0000000180048241: call    sub_1800D45A4
 * 0000000180048246: mov     cs:byte_1802691AC, al
 * 000000018004824C: lea     rcx, [rbp+9E20h+var_6008]; void *
 * 0000000180048253: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048258: nop
 * 0000000180048259: lea     rcx, [rbp+9E20h+var_5FE8]; void *
 * 0000000180048260: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048265: nop
 * 0000000180048266: lea     rcx, dword_1802691B0
 * 000000018004826D: call    _Init_thread_footer
 * 0000000180048272: mov     rax, [rdi+rbx*8]
 * 0000000180048276: mov     eax, [r15+rax]
 * 000000018004827A: cmp     cs:dword_1802691B8, eax
 * 0000000180048280: jle     loc_18004836A
 * 0000000180048286: lea     rcx, dword_1802691B8
 * 000000018004828D: call    _Init_thread_header
 * 0000000180048292: cmp     cs:dword_1802691B8, r14d
 * 0000000180048299: jnz     loc_18004836A
 * 000000018004829F: lea     rax, unk_18015EB00
 * 00000001800482A6: mov     qword ptr [rbp+9E20h+var_9C00], rax
 * 00000001800482AD: lea     rax, unk_18016508C
 * 00000001800482B4: mov     qword ptr [rbp+9E20h+var_9C00+8], rax
 * 00000001800482BB: movups  xmm0, [rbp+9E20h+var_9C00]
 * 00000001800482C2: movups  [rbp+9E20h+var_8478], xmm0
 * 00000001800482C9: mov     dword ptr [rbp+9E20h+var_8468], r13d
 * 00000001800482D0: mov     dword ptr [rbp+9E20h+var_8468+4], esi
 * 00000001800482D6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800482DB: movups  xmm0, [rbp+9E20h+var_8468]
 * 00000001800482E2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800482E7: call    sub_1800455D0
 * 00000001800482EC: mov     r8, rax
 * 00000001800482EF: mov     r9d, r12d
 * 00000001800482F2: mov     edx, 8Ah
 * 00000001800482F7: lea     rcx, [rbp+9E20h+var_5F88]; Src
 * 00000001800482FE: call    sub_1800D44B8
 * 0000000180048303: nop
 * 0000000180048304: mov     r8, rax
 * 0000000180048307: lea     rdx, aStandardshader_45; "StandardShader/ShaderModel40/"
 * 000000018004830E: lea     rcx, [rbp+9E20h+var_5FA8]
 * 0000000180048315: call    sub_1800453AC
 * 000000018004831A: nop
 * 000000018004831B: lea     r8, aPixel_43; "/Pixel"
 * 0000000180048322: mov     rdx, rax
 * 0000000180048325: lea     rcx, [rbp+9E20h+var_5FC8]
 * 000000018004832C: call    sub_18002BF78
 * 0000000180048331: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048336: mov     rcx, rax
 * 0000000180048339: call    sub_1800D45A4
 * 000000018004833E: mov     cs:byte_1802691B4, al
 * 0000000180048344: lea     rcx, [rbp+9E20h+var_5FA8]; void *
 * 000000018004834B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048350: nop
 * 0000000180048351: lea     rcx, [rbp+9E20h+var_5F88]; void *
 * 0000000180048358: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004835D: nop
 * 000000018004835E: lea     rcx, dword_1802691B8
 * 0000000180048365: call    _Init_thread_footer
 * 000000018004836A: mov     rax, [rdi+rbx*8]
 * 000000018004836E: mov     eax, [r15+rax]
 * 0000000180048372: cmp     cs:dword_1802691C0, eax
 * 0000000180048378: jle     loc_180048462
 * 000000018004837E: lea     rcx, dword_1802691C0
 * 0000000180048385: call    _Init_thread_header
 * 000000018004838A: cmp     cs:dword_1802691C0, r14d
 * 0000000180048391: jnz     loc_180048462
 * 0000000180048397: lea     rax, unk_180166160
 * 000000018004839E: mov     qword ptr [rbp+9E20h+var_9BF0], rax
 * 00000001800483A5: lea     rax, unk_18016C718
 * 00000001800483AC: mov     qword ptr [rbp+9E20h+var_9BF0+8], rax
 * 00000001800483B3: movups  xmm0, [rbp+9E20h+var_9BF0]
 * 00000001800483BA: movups  [rbp+9E20h+var_8458], xmm0
 * 00000001800483C1: mov     dword ptr [rbp+9E20h+var_8448], r13d
 * 00000001800483C8: mov     dword ptr [rbp+9E20h+var_8448+4], esi
 * 00000001800483CE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800483D3: movups  xmm0, [rbp+9E20h+var_8448]
 * 00000001800483DA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800483DF: call    sub_1800455D0
 * 00000001800483E4: mov     r8, rax
 * 00000001800483E7: mov     r9d, r12d
 * 00000001800483EA: mov     edx, 90h
 * 00000001800483EF: lea     rcx, [rbp+9E20h+var_5F28]; Src
 * 00000001800483F6: call    sub_1800D44B8
 * 00000001800483FB: nop
 * 00000001800483FC: mov     r8, rax
 * 00000001800483FF: lea     rdx, aStandardshader_46; "StandardShader/ShaderModel40/"
 * 0000000180048406: lea     rcx, [rbp+9E20h+var_5F48]
 * 000000018004840D: call    sub_1800453AC
 * 0000000180048412: nop
 * 0000000180048413: lea     r8, aPixel_44; "/Pixel"
 * 000000018004841A: mov     rdx, rax
 * 000000018004841D: lea     rcx, [rbp+9E20h+var_5F68]
 * 0000000180048424: call    sub_18002BF78
 * 0000000180048429: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004842E: mov     rcx, rax
 * 0000000180048431: call    sub_1800D45A4
 * 0000000180048436: mov     cs:byte_1802691BC, al
 * 000000018004843C: lea     rcx, [rbp+9E20h+var_5F48]; void *
 * 0000000180048443: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048448: nop
 * 0000000180048449: lea     rcx, [rbp+9E20h+var_5F28]; void *
 * 0000000180048450: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048455: nop
 * 0000000180048456: lea     rcx, dword_1802691C0
 * 000000018004845D: call    _Init_thread_footer
 * 0000000180048462: mov     rax, [rdi+rbx*8]
 * 0000000180048466: mov     eax, [r15+rax]
 * 000000018004846A: cmp     cs:dword_1802691C8, eax
 * 0000000180048470: jle     loc_18004855A
 * 0000000180048476: lea     rcx, dword_1802691C8
 * 000000018004847D: call    _Init_thread_header
 * 0000000180048482: cmp     cs:dword_1802691C8, r14d
 * 0000000180048489: jnz     loc_18004855A
 * 000000018004848F: lea     rax, unk_180166160
 * 0000000180048496: mov     qword ptr [rbp+9E20h+var_9BE0], rax
 * 000000018004849D: lea     rax, unk_18016C718
 * 00000001800484A4: mov     qword ptr [rbp+9E20h+var_9BE0+8], rax
 * 00000001800484AB: movups  xmm0, [rbp+9E20h+var_9BE0]
 * 00000001800484B2: movups  [rbp+9E20h+var_8438], xmm0
 * 00000001800484B9: mov     dword ptr [rbp+9E20h+var_8428], r13d
 * 00000001800484C0: mov     dword ptr [rbp+9E20h+var_8428+4], esi
 * 00000001800484C6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800484CB: movups  xmm0, [rbp+9E20h+var_8428]
 * 00000001800484D2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800484D7: call    sub_1800455D0
 * 00000001800484DC: mov     r8, rax
 * 00000001800484DF: mov     r9d, r12d
 * 00000001800484E2: mov     edx, 92h
 * 00000001800484E7: lea     rcx, [rbp+9E20h+var_5EC8]; Src
 * 00000001800484EE: call    sub_1800D44B8
 * 00000001800484F3: nop
 * 00000001800484F4: mov     r8, rax
 * 00000001800484F7: lea     rdx, aStandardshader_47; "StandardShader/ShaderModel40/"
 * 00000001800484FE: lea     rcx, [rbp+9E20h+var_5EE8]
 * 0000000180048505: call    sub_1800453AC
 * 000000018004850A: nop
 * 000000018004850B: lea     r8, aPixel_45; "/Pixel"
 * 0000000180048512: mov     rdx, rax
 * 0000000180048515: lea     rcx, [rbp+9E20h+var_5F08]
 * 000000018004851C: call    sub_18002BF78
 * 0000000180048521: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048526: mov     rcx, rax
 * 0000000180048529: call    sub_1800D45A4
 * 000000018004852E: mov     cs:byte_1802691C4, al
 * 0000000180048534: lea     rcx, [rbp+9E20h+var_5EE8]; void *
 * 000000018004853B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048540: nop
 * 0000000180048541: lea     rcx, [rbp+9E20h+var_5EC8]; void *
 * 0000000180048548: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004854D: nop
 * 000000018004854E: lea     rcx, dword_1802691C8
 * 0000000180048555: call    _Init_thread_footer
 * 000000018004855A: mov     rax, [rdi+rbx*8]
 * 000000018004855E: mov     eax, [r15+rax]
 * 0000000180048562: cmp     cs:dword_1802691D0, eax
 * 0000000180048568: jle     loc_180048652
 * 000000018004856E: lea     rcx, dword_1802691D0
 * 0000000180048575: call    _Init_thread_header
 * 000000018004857A: cmp     cs:dword_1802691D0, r14d
 * 0000000180048581: jnz     loc_180048652
 * 0000000180048587: lea     rax, unk_18016FA20
 * 000000018004858E: mov     qword ptr [rbp+9E20h+var_9BD0], rax
 * 0000000180048595: lea     rax, unk_1801761AC
 * 000000018004859C: mov     qword ptr [rbp+9E20h+var_9BD0+8], rax
 * 00000001800485A3: movups  xmm0, [rbp+9E20h+var_9BD0]
 * 00000001800485AA: movups  [rbp+9E20h+var_8418], xmm0
 * 00000001800485B1: mov     dword ptr [rbp+9E20h+var_8408], r13d
 * 00000001800485B8: mov     dword ptr [rbp+9E20h+var_8408+4], esi
 * 00000001800485BE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800485C3: movups  xmm0, [rbp+9E20h+var_8408]
 * 00000001800485CA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800485CF: call    sub_1800455D0
 * 00000001800485D4: mov     r8, rax
 * 00000001800485D7: mov     r9d, r12d
 * 00000001800485DA: mov     edx, 98h
 * 00000001800485DF: lea     rcx, [rbp+9E20h+var_5E68]; Src
 * 00000001800485E6: call    sub_1800D44B8
 * 00000001800485EB: nop
 * 00000001800485EC: mov     r8, rax
 * 00000001800485EF: lea     rdx, aStandardshader_48; "StandardShader/ShaderModel40/"
 * 00000001800485F6: lea     rcx, [rbp+9E20h+var_5E88]
 * 00000001800485FD: call    sub_1800453AC
 * 0000000180048602: nop
 * 0000000180048603: lea     r8, aPixel_46; "/Pixel"
 * 000000018004860A: mov     rdx, rax
 * 000000018004860D: lea     rcx, [rbp+9E20h+var_5EA8]
 * 0000000180048614: call    sub_18002BF78
 * 0000000180048619: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004861E: mov     rcx, rax
 * 0000000180048621: call    sub_1800D45A4
 * 0000000180048626: mov     cs:byte_1802691CC, al
 * 000000018004862C: lea     rcx, [rbp+9E20h+var_5E88]; void *
 * 0000000180048633: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048638: nop
 * 0000000180048639: lea     rcx, [rbp+9E20h+var_5E68]; void *
 * 0000000180048640: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048645: nop
 * 0000000180048646: lea     rcx, dword_1802691D0
 * 000000018004864D: call    _Init_thread_footer
 * 0000000180048652: mov     rax, [rdi+rbx*8]
 * 0000000180048656: mov     eax, [r15+rax]
 * 000000018004865A: cmp     cs:dword_1802691D8, eax
 * 0000000180048660: jle     loc_18004874A
 * 0000000180048666: lea     rcx, dword_1802691D8
 * 000000018004866D: call    _Init_thread_header
 * 0000000180048672: cmp     cs:dword_1802691D8, r14d
 * 0000000180048679: jnz     loc_18004874A
 * 000000018004867F: lea     rax, unk_18016FA20
 * 0000000180048686: mov     qword ptr [rbp+9E20h+var_9BC0], rax
 * 000000018004868D: lea     rax, unk_1801761AC
 * 0000000180048694: mov     qword ptr [rbp+9E20h+var_9BC0+8], rax
 * 000000018004869B: movups  xmm0, [rbp+9E20h+var_9BC0]
 * 00000001800486A2: movups  [rbp+9E20h+var_83F8], xmm0
 * 00000001800486A9: mov     dword ptr [rbp+9E20h+var_83E8], r13d
 * 00000001800486B0: mov     dword ptr [rbp+9E20h+var_83E8+4], esi
 * 00000001800486B6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800486BB: movups  xmm0, [rbp+9E20h+var_83E8]
 * 00000001800486C2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800486C7: call    sub_1800455D0
 * 00000001800486CC: mov     r8, rax
 * 00000001800486CF: mov     r9d, r12d
 * 00000001800486D2: mov     edx, 9Ah
 * 00000001800486D7: lea     rcx, [rbp+9E20h+var_5E08]; Src
 * 00000001800486DE: call    sub_1800D44B8
 * 00000001800486E3: nop
 * 00000001800486E4: mov     r8, rax
 * 00000001800486E7: lea     rdx, aStandardshader_49; "StandardShader/ShaderModel40/"
 * 00000001800486EE: lea     rcx, [rbp+9E20h+var_5E28]
 * 00000001800486F5: call    sub_1800453AC
 * 00000001800486FA: nop
 * 00000001800486FB: lea     r8, aPixel_47; "/Pixel"
 * 0000000180048702: mov     rdx, rax
 * 0000000180048705: lea     rcx, [rbp+9E20h+var_5E48]
 * 000000018004870C: call    sub_18002BF78
 * 0000000180048711: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048716: mov     rcx, rax
 * 0000000180048719: call    sub_1800D45A4
 * 000000018004871E: mov     cs:byte_1802691D4, al
 * 0000000180048724: lea     rcx, [rbp+9E20h+var_5E28]; void *
 * 000000018004872B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048730: nop
 * 0000000180048731: lea     rcx, [rbp+9E20h+var_5E08]; void *
 * 0000000180048738: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004873D: nop
 * 000000018004873E: lea     rcx, dword_1802691D8
 * 0000000180048745: call    _Init_thread_footer
 * 000000018004874A: mov     rax, [rdi+rbx*8]
 * 000000018004874E: mov     eax, [r15+rax]
 * 0000000180048752: cmp     cs:dword_1802691E0, eax
 * 0000000180048758: jle     loc_180048842
 * 000000018004875E: lea     rcx, dword_1802691E0
 * 0000000180048765: call    _Init_thread_header
 * 000000018004876A: cmp     cs:dword_1802691E0, r14d
 * 0000000180048771: jnz     loc_180048842
 * 0000000180048777: lea     rax, unk_180154160
 * 000000018004877E: mov     qword ptr [rbp+9E20h+var_9BB0], rax
 * 0000000180048785: lea     rax, unk_18015A544
 * 000000018004878C: mov     qword ptr [rbp+9E20h+var_9BB0+8], rax
 * 0000000180048793: movups  xmm0, [rbp+9E20h+var_9BB0]
 * 000000018004879A: movups  [rbp+9E20h+var_83D8], xmm0
 * 00000001800487A1: mov     dword ptr [rbp+9E20h+var_83C8], r13d
 * 00000001800487A8: mov     dword ptr [rbp+9E20h+var_83C8+4], esi
 * 00000001800487AE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800487B3: movups  xmm0, [rbp+9E20h+var_83C8]
 * 00000001800487BA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800487BF: call    sub_1800455D0
 * 00000001800487C4: mov     r8, rax
 * 00000001800487C7: mov     r9d, r12d
 * 00000001800487CA: mov     edx, 0A0h
 * 00000001800487CF: lea     rcx, [rbp+9E20h+var_5DA8]; Src
 * 00000001800487D6: call    sub_1800D44B8
 * 00000001800487DB: nop
 * 00000001800487DC: mov     r8, rax
 * 00000001800487DF: lea     rdx, aStandardshader_50; "StandardShader/ShaderModel40/"
 * 00000001800487E6: lea     rcx, [rbp+9E20h+var_5DC8]
 * 00000001800487ED: call    sub_1800453AC
 * 00000001800487F2: nop
 * 00000001800487F3: lea     r8, aPixel_48; "/Pixel"
 * 00000001800487FA: mov     rdx, rax
 * 00000001800487FD: lea     rcx, [rbp+9E20h+var_5DE8]
 * 0000000180048804: call    sub_18002BF78
 * 0000000180048809: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004880E: mov     rcx, rax
 * 0000000180048811: call    sub_1800D45A4
 * 0000000180048816: mov     cs:byte_1802691DC, al
 * 000000018004881C: lea     rcx, [rbp+9E20h+var_5DC8]; void *
 * 0000000180048823: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048828: nop
 * 0000000180048829: lea     rcx, [rbp+9E20h+var_5DA8]; void *
 * 0000000180048830: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048835: nop
 * 0000000180048836: lea     rcx, dword_1802691E0
 * 000000018004883D: call    _Init_thread_footer
 * 0000000180048842: mov     rax, [rdi+rbx*8]
 * 0000000180048846: mov     eax, [r15+rax]
 * 000000018004884A: cmp     cs:dword_1802691E8, eax
 * 0000000180048850: jle     loc_18004893A
 * 0000000180048856: lea     rcx, dword_1802691E8
 * 000000018004885D: call    _Init_thread_header
 * 0000000180048862: cmp     cs:dword_1802691E8, r14d
 * 0000000180048869: jnz     loc_18004893A
 * 000000018004886F: lea     rax, unk_180154160
 * 0000000180048876: mov     qword ptr [rbp+9E20h+var_9BA0], rax
 * 000000018004887D: lea     rax, unk_18015A544
 * 0000000180048884: mov     qword ptr [rbp+9E20h+var_9BA0+8], rax
 * 000000018004888B: movups  xmm0, [rbp+9E20h+var_9BA0]
 * 0000000180048892: movups  [rbp+9E20h+var_83B8], xmm0
 * 0000000180048899: mov     dword ptr [rbp+9E20h+var_83A8], r13d
 * 00000001800488A0: mov     dword ptr [rbp+9E20h+var_83A8+4], esi
 * 00000001800488A6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800488AB: movups  xmm0, [rbp+9E20h+var_83A8]
 * 00000001800488B2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800488B7: call    sub_1800455D0
 * 00000001800488BC: mov     r8, rax
 * 00000001800488BF: mov     r9d, r12d
 * 00000001800488C2: mov     edx, 0A2h
 * 00000001800488C7: lea     rcx, [rbp+9E20h+var_5D48]; Src
 * 00000001800488CE: call    sub_1800D44B8
 * 00000001800488D3: nop
 * 00000001800488D4: mov     r8, rax
 * 00000001800488D7: lea     rdx, aStandardshader_51; "StandardShader/ShaderModel40/"
 * 00000001800488DE: lea     rcx, [rbp+9E20h+var_5D68]
 * 00000001800488E5: call    sub_1800453AC
 * 00000001800488EA: nop
 * 00000001800488EB: lea     r8, aPixel_49; "/Pixel"
 * 00000001800488F2: mov     rdx, rax
 * 00000001800488F5: lea     rcx, [rbp+9E20h+var_5D88]
 * 00000001800488FC: call    sub_18002BF78
 * 0000000180048901: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048906: mov     rcx, rax
 * 0000000180048909: call    sub_1800D45A4
 * 000000018004890E: mov     cs:byte_1802691E4, al
 * 0000000180048914: lea     rcx, [rbp+9E20h+var_5D68]; void *
 * 000000018004891B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048920: nop
 * 0000000180048921: lea     rcx, [rbp+9E20h+var_5D48]; void *
 * 0000000180048928: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004892D: nop
 * 000000018004892E: lea     rcx, dword_1802691E8
 * 0000000180048935: call    _Init_thread_footer
 * 000000018004893A: mov     rax, [rdi+rbx*8]
 * 000000018004893E: mov     eax, [r15+rax]
 * 0000000180048942: cmp     cs:dword_1802691F0, eax
 * 0000000180048948: jle     loc_180048A32
 * 000000018004894E: lea     rcx, dword_1802691F0
 * 0000000180048955: call    _Init_thread_header
 * 000000018004895A: cmp     cs:dword_1802691F0, r14d
 * 0000000180048961: jnz     loc_180048A32
 * 0000000180048967: lea     rax, unk_18015EB00
 * 000000018004896E: mov     qword ptr [rbp+9E20h+var_9B90], rax
 * 0000000180048975: lea     rax, unk_18016508C
 * 000000018004897C: mov     qword ptr [rbp+9E20h+var_9B90+8], rax
 * 0000000180048983: movups  xmm0, [rbp+9E20h+var_9B90]
 * 000000018004898A: movups  [rbp+9E20h+var_8398], xmm0
 * 0000000180048991: mov     dword ptr [rbp+9E20h+var_8388], r13d
 * 0000000180048998: mov     dword ptr [rbp+9E20h+var_8388+4], esi
 * 000000018004899E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800489A3: movups  xmm0, [rbp+9E20h+var_8388]
 * 00000001800489AA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800489AF: call    sub_1800455D0
 * 00000001800489B4: mov     r8, rax
 * 00000001800489B7: mov     r9d, r12d
 * 00000001800489BA: mov     edx, 0A8h
 * 00000001800489BF: lea     rcx, [rbp+9E20h+var_5CE8]; Src
 * 00000001800489C6: call    sub_1800D44B8
 * 00000001800489CB: nop
 * 00000001800489CC: mov     r8, rax
 * 00000001800489CF: lea     rdx, aStandardshader_52; "StandardShader/ShaderModel40/"
 * 00000001800489D6: lea     rcx, [rbp+9E20h+var_5D08]
 * 00000001800489DD: call    sub_1800453AC
 * 00000001800489E2: nop
 * 00000001800489E3: lea     r8, aPixel_50; "/Pixel"
 * 00000001800489EA: mov     rdx, rax
 * 00000001800489ED: lea     rcx, [rbp+9E20h+var_5D28]
 * 00000001800489F4: call    sub_18002BF78
 * 00000001800489F9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800489FE: mov     rcx, rax
 * 0000000180048A01: call    sub_1800D45A4
 * 0000000180048A06: mov     cs:byte_1802691EC, al
 * 0000000180048A0C: lea     rcx, [rbp+9E20h+var_5D08]; void *
 * 0000000180048A13: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048A18: nop
 * 0000000180048A19: lea     rcx, [rbp+9E20h+var_5CE8]; void *
 * 0000000180048A20: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048A25: nop
 * 0000000180048A26: lea     rcx, dword_1802691F0
 * 0000000180048A2D: call    _Init_thread_footer
 * 0000000180048A32: mov     rax, [rdi+rbx*8]
 * 0000000180048A36: mov     eax, [r15+rax]
 * 0000000180048A3A: cmp     cs:dword_1802691F8, eax
 * 0000000180048A40: jle     loc_180048B2A
 * 0000000180048A46: lea     rcx, dword_1802691F8
 * 0000000180048A4D: call    _Init_thread_header
 * 0000000180048A52: cmp     cs:dword_1802691F8, r14d
 * 0000000180048A59: jnz     loc_180048B2A
 * 0000000180048A5F: lea     rax, unk_18015EB00
 * 0000000180048A66: mov     qword ptr [rbp+9E20h+var_9B80], rax
 * 0000000180048A6D: lea     rax, unk_18016508C
 * 0000000180048A74: mov     qword ptr [rbp+9E20h+var_9B80+8], rax
 * 0000000180048A7B: movups  xmm0, [rbp+9E20h+var_9B80]
 * 0000000180048A82: movups  [rbp+9E20h+var_8378], xmm0
 * 0000000180048A89: mov     dword ptr [rbp+9E20h+var_8368], r13d
 * 0000000180048A90: mov     dword ptr [rbp+9E20h+var_8368+4], esi
 * 0000000180048A96: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048A9B: movups  xmm0, [rbp+9E20h+var_8368]
 * 0000000180048AA2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048AA7: call    sub_1800455D0
 * 0000000180048AAC: mov     r8, rax
 * 0000000180048AAF: mov     r9d, r12d
 * 0000000180048AB2: mov     edx, 0AAh
 * 0000000180048AB7: lea     rcx, [rbp+9E20h+var_5C88]; Src
 * 0000000180048ABE: call    sub_1800D44B8
 * 0000000180048AC3: nop
 * 0000000180048AC4: mov     r8, rax
 * 0000000180048AC7: lea     rdx, aStandardshader_53; "StandardShader/ShaderModel40/"
 * 0000000180048ACE: lea     rcx, [rbp+9E20h+var_5CA8]
 * 0000000180048AD5: call    sub_1800453AC
 * 0000000180048ADA: nop
 * 0000000180048ADB: lea     r8, aPixel_51; "/Pixel"
 * 0000000180048AE2: mov     rdx, rax
 * 0000000180048AE5: lea     rcx, [rbp+9E20h+var_5CC8]
 * 0000000180048AEC: call    sub_18002BF78
 * 0000000180048AF1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048AF6: mov     rcx, rax
 * 0000000180048AF9: call    sub_1800D45A4
 * 0000000180048AFE: mov     cs:byte_1802691F4, al
 * 0000000180048B04: lea     rcx, [rbp+9E20h+var_5CA8]; void *
 * 0000000180048B0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048B10: nop
 * 0000000180048B11: lea     rcx, [rbp+9E20h+var_5C88]; void *
 * 0000000180048B18: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048B1D: nop
 * 0000000180048B1E: lea     rcx, dword_1802691F8
 * 0000000180048B25: call    _Init_thread_footer
 * 0000000180048B2A: mov     rax, [rdi+rbx*8]
 * 0000000180048B2E: mov     eax, [r15+rax]
 * 0000000180048B32: cmp     cs:dword_180269200, eax
 * 0000000180048B38: jle     loc_180048C22
 * 0000000180048B3E: lea     rcx, dword_180269200
 * 0000000180048B45: call    _Init_thread_header
 * 0000000180048B4A: cmp     cs:dword_180269200, r14d
 * 0000000180048B51: jnz     loc_180048C22
 * 0000000180048B57: lea     rax, unk_180166160
 * 0000000180048B5E: mov     qword ptr [rbp+9E20h+var_9B70], rax
 * 0000000180048B65: lea     rax, unk_18016C718
 * 0000000180048B6C: mov     qword ptr [rbp+9E20h+var_9B70+8], rax
 * 0000000180048B73: movups  xmm0, [rbp+9E20h+var_9B70]
 * 0000000180048B7A: movups  [rbp+9E20h+var_8358], xmm0
 * 0000000180048B81: mov     dword ptr [rbp+9E20h+var_8348], r13d
 * 0000000180048B88: mov     dword ptr [rbp+9E20h+var_8348+4], esi
 * 0000000180048B8E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048B93: movups  xmm0, [rbp+9E20h+var_8348]
 * 0000000180048B9A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048B9F: call    sub_1800455D0
 * 0000000180048BA4: mov     r8, rax
 * 0000000180048BA7: mov     r9d, r12d
 * 0000000180048BAA: mov     edx, 0B0h
 * 0000000180048BAF: lea     rcx, [rbp+9E20h+var_5C28]; Src
 * 0000000180048BB6: call    sub_1800D44B8
 * 0000000180048BBB: nop
 * 0000000180048BBC: mov     r8, rax
 * 0000000180048BBF: lea     rdx, aStandardshader_54; "StandardShader/ShaderModel40/"
 * 0000000180048BC6: lea     rcx, [rbp+9E20h+var_5C48]
 * 0000000180048BCD: call    sub_1800453AC
 * 0000000180048BD2: nop
 * 0000000180048BD3: lea     r8, aPixel_52; "/Pixel"
 * 0000000180048BDA: mov     rdx, rax
 * 0000000180048BDD: lea     rcx, [rbp+9E20h+var_5C68]
 * 0000000180048BE4: call    sub_18002BF78
 * 0000000180048BE9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048BEE: mov     rcx, rax
 * 0000000180048BF1: call    sub_1800D45A4
 * 0000000180048BF6: mov     cs:byte_1802691FC, al
 * 0000000180048BFC: lea     rcx, [rbp+9E20h+var_5C48]; void *
 * 0000000180048C03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048C08: nop
 * 0000000180048C09: lea     rcx, [rbp+9E20h+var_5C28]; void *
 * 0000000180048C10: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048C15: nop
 * 0000000180048C16: lea     rcx, dword_180269200
 * 0000000180048C1D: call    _Init_thread_footer
 * 0000000180048C22: mov     rax, [rdi+rbx*8]
 * 0000000180048C26: mov     eax, [r15+rax]
 * 0000000180048C2A: cmp     cs:dword_180269208, eax
 * 0000000180048C30: jle     loc_180048D1A
 * 0000000180048C36: lea     rcx, dword_180269208
 * 0000000180048C3D: call    _Init_thread_header
 * 0000000180048C42: cmp     cs:dword_180269208, r14d
 * 0000000180048C49: jnz     loc_180048D1A
 * 0000000180048C4F: lea     rax, unk_180166160
 * 0000000180048C56: mov     qword ptr [rbp+9E20h+var_9B60], rax
 * 0000000180048C5D: lea     rax, unk_18016C718
 * 0000000180048C64: mov     qword ptr [rbp+9E20h+var_9B60+8], rax
 * 0000000180048C6B: movups  xmm0, [rbp+9E20h+var_9B60]
 * 0000000180048C72: movups  [rbp+9E20h+var_8338], xmm0
 * 0000000180048C79: mov     dword ptr [rbp+9E20h+var_8328], r13d
 * 0000000180048C80: mov     dword ptr [rbp+9E20h+var_8328+4], esi
 * 0000000180048C86: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048C8B: movups  xmm0, [rbp+9E20h+var_8328]
 * 0000000180048C92: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048C97: call    sub_1800455D0
 * 0000000180048C9C: mov     r8, rax
 * 0000000180048C9F: mov     r9d, r12d
 * 0000000180048CA2: mov     edx, 0B2h
 * 0000000180048CA7: lea     rcx, [rbp+9E20h+var_5BC8]; Src
 * 0000000180048CAE: call    sub_1800D44B8
 * 0000000180048CB3: nop
 * 0000000180048CB4: mov     r8, rax
 * 0000000180048CB7: lea     rdx, aStandardshader_55; "StandardShader/ShaderModel40/"
 * 0000000180048CBE: lea     rcx, [rbp+9E20h+var_5BE8]
 * 0000000180048CC5: call    sub_1800453AC
 * 0000000180048CCA: nop
 * 0000000180048CCB: lea     r8, aPixel_53; "/Pixel"
 * 0000000180048CD2: mov     rdx, rax
 * 0000000180048CD5: lea     rcx, [rbp+9E20h+var_5C08]
 * 0000000180048CDC: call    sub_18002BF78
 * 0000000180048CE1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048CE6: mov     rcx, rax
 * 0000000180048CE9: call    sub_1800D45A4
 * 0000000180048CEE: mov     cs:byte_180269204, al
 * 0000000180048CF4: lea     rcx, [rbp+9E20h+var_5BE8]; void *
 * 0000000180048CFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048D00: nop
 * 0000000180048D01: lea     rcx, [rbp+9E20h+var_5BC8]; void *
 * 0000000180048D08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048D0D: nop
 * 0000000180048D0E: lea     rcx, dword_180269208
 * 0000000180048D15: call    _Init_thread_footer
 * 0000000180048D1A: mov     rax, [rdi+rbx*8]
 * 0000000180048D1E: mov     eax, [r15+rax]
 * 0000000180048D22: cmp     cs:dword_180269210, eax
 * 0000000180048D28: jle     loc_180048E12
 * 0000000180048D2E: lea     rcx, dword_180269210
 * 0000000180048D35: call    _Init_thread_header
 * 0000000180048D3A: cmp     cs:dword_180269210, r14d
 * 0000000180048D41: jnz     loc_180048E12
 * 0000000180048D47: lea     rax, unk_18016FA20
 * 0000000180048D4E: mov     qword ptr [rbp+9E20h+var_9B50], rax
 * 0000000180048D55: lea     rax, unk_1801761AC
 * 0000000180048D5C: mov     qword ptr [rbp+9E20h+var_9B50+8], rax
 * 0000000180048D63: movups  xmm0, [rbp+9E20h+var_9B50]
 * 0000000180048D6A: movups  [rbp+9E20h+var_8318], xmm0
 * 0000000180048D71: mov     dword ptr [rbp+9E20h+var_8308], r13d
 * 0000000180048D78: mov     dword ptr [rbp+9E20h+var_8308+4], esi
 * 0000000180048D7E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048D83: movups  xmm0, [rbp+9E20h+var_8308]
 * 0000000180048D8A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048D8F: call    sub_1800455D0
 * 0000000180048D94: mov     r8, rax
 * 0000000180048D97: mov     r9d, r12d
 * 0000000180048D9A: mov     edx, 0B8h
 * 0000000180048D9F: lea     rcx, [rbp+9E20h+var_5B68]; Src
 * 0000000180048DA6: call    sub_1800D44B8
 * 0000000180048DAB: nop
 * 0000000180048DAC: mov     r8, rax
 * 0000000180048DAF: lea     rdx, aStandardshader_56; "StandardShader/ShaderModel40/"
 * 0000000180048DB6: lea     rcx, [rbp+9E20h+var_5B88]
 * 0000000180048DBD: call    sub_1800453AC
 * 0000000180048DC2: nop
 * 0000000180048DC3: lea     r8, aPixel_54; "/Pixel"
 * 0000000180048DCA: mov     rdx, rax
 * 0000000180048DCD: lea     rcx, [rbp+9E20h+var_5BA8]
 * 0000000180048DD4: call    sub_18002BF78
 * 0000000180048DD9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048DDE: mov     rcx, rax
 * 0000000180048DE1: call    sub_1800D45A4
 * 0000000180048DE6: mov     cs:byte_18026920C, al
 * 0000000180048DEC: lea     rcx, [rbp+9E20h+var_5B88]; void *
 * 0000000180048DF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048DF8: nop
 * 0000000180048DF9: lea     rcx, [rbp+9E20h+var_5B68]; void *
 * 0000000180048E00: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048E05: nop
 * 0000000180048E06: lea     rcx, dword_180269210
 * 0000000180048E0D: call    _Init_thread_footer
 * 0000000180048E12: mov     rax, [rdi+rbx*8]
 * 0000000180048E16: mov     eax, [r15+rax]
 * 0000000180048E1A: cmp     cs:dword_180269218, eax
 * 0000000180048E20: jle     loc_180048F0A
 * 0000000180048E26: lea     rcx, dword_180269218
 * 0000000180048E2D: call    _Init_thread_header
 * 0000000180048E32: cmp     cs:dword_180269218, r14d
 * 0000000180048E39: jnz     loc_180048F0A
 * 0000000180048E3F: lea     rax, unk_18016FA20
 * 0000000180048E46: mov     qword ptr [rbp+9E20h+var_9B40], rax
 * 0000000180048E4D: lea     rax, unk_1801761AC
 * 0000000180048E54: mov     qword ptr [rbp+9E20h+var_9B40+8], rax
 * 0000000180048E5B: movups  xmm0, [rbp+9E20h+var_9B40]
 * 0000000180048E62: movups  [rbp+9E20h+var_82F8], xmm0
 * 0000000180048E69: mov     dword ptr [rbp+9E20h+var_82E8], r13d
 * 0000000180048E70: mov     dword ptr [rbp+9E20h+var_82E8+4], esi
 * 0000000180048E76: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048E7B: movups  xmm0, [rbp+9E20h+var_82E8]
 * 0000000180048E82: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048E87: call    sub_1800455D0
 * 0000000180048E8C: mov     r8, rax
 * 0000000180048E8F: mov     r9d, r12d
 * 0000000180048E92: mov     edx, 0BAh
 * 0000000180048E97: lea     rcx, [rbp+9E20h+var_5B08]; Src
 * 0000000180048E9E: call    sub_1800D44B8
 * 0000000180048EA3: nop
 * 0000000180048EA4: mov     r8, rax
 * 0000000180048EA7: lea     rdx, aStandardshader_57; "StandardShader/ShaderModel40/"
 * 0000000180048EAE: lea     rcx, [rbp+9E20h+var_5B28]
 * 0000000180048EB5: call    sub_1800453AC
 * 0000000180048EBA: nop
 * 0000000180048EBB: lea     r8, aPixel_55; "/Pixel"
 * 0000000180048EC2: mov     rdx, rax
 * 0000000180048EC5: lea     rcx, [rbp+9E20h+var_5B48]
 * 0000000180048ECC: call    sub_18002BF78
 * 0000000180048ED1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048ED6: mov     rcx, rax
 * 0000000180048ED9: call    sub_1800D45A4
 * 0000000180048EDE: mov     cs:byte_180269214, al
 * 0000000180048EE4: lea     rcx, [rbp+9E20h+var_5B28]; void *
 * 0000000180048EEB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048EF0: nop
 * 0000000180048EF1: lea     rcx, [rbp+9E20h+var_5B08]; void *
 * 0000000180048EF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048EFD: nop
 * 0000000180048EFE: lea     rcx, dword_180269218
 * 0000000180048F05: call    _Init_thread_footer
 * 0000000180048F0A: mov     rax, [rdi+rbx*8]
 * 0000000180048F0E: mov     eax, [r15+rax]
 * 0000000180048F12: cmp     cs:dword_180269220, eax
 * 0000000180048F18: jle     loc_180049002
 * 0000000180048F1E: lea     rcx, dword_180269220
 * 0000000180048F25: call    _Init_thread_header
 * 0000000180048F2A: cmp     cs:dword_180269220, r14d
 * 0000000180048F31: jnz     loc_180049002
 * 0000000180048F37: lea     rax, unk_180154160
 * 0000000180048F3E: mov     qword ptr [rbp+9E20h+var_9B30], rax
 * 0000000180048F45: lea     rax, unk_18015A544
 * 0000000180048F4C: mov     qword ptr [rbp+9E20h+var_9B30+8], rax
 * 0000000180048F53: movups  xmm0, [rbp+9E20h+var_9B30]
 * 0000000180048F5A: movups  [rbp+9E20h+var_82D8], xmm0
 * 0000000180048F61: mov     dword ptr [rbp+9E20h+var_82C8], r13d
 * 0000000180048F68: mov     dword ptr [rbp+9E20h+var_82C8+4], esi
 * 0000000180048F6E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048F73: movups  xmm0, [rbp+9E20h+var_82C8]
 * 0000000180048F7A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048F7F: call    sub_1800455D0
 * 0000000180048F84: mov     r8, rax
 * 0000000180048F87: mov     r9d, r12d
 * 0000000180048F8A: mov     edx, 0C0h
 * 0000000180048F8F: lea     rcx, [rbp+9E20h+var_5AA8]; Src
 * 0000000180048F96: call    sub_1800D44B8
 * 0000000180048F9B: nop
 * 0000000180048F9C: mov     r8, rax
 * 0000000180048F9F: lea     rdx, aStandardshader_58; "StandardShader/ShaderModel40/"
 * 0000000180048FA6: lea     rcx, [rbp+9E20h+var_5AC8]
 * 0000000180048FAD: call    sub_1800453AC
 * 0000000180048FB2: nop
 * 0000000180048FB3: lea     r8, aPixel_56; "/Pixel"
 * 0000000180048FBA: mov     rdx, rax
 * 0000000180048FBD: lea     rcx, [rbp+9E20h+var_5AE8]
 * 0000000180048FC4: call    sub_18002BF78
 * 0000000180048FC9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048FCE: mov     rcx, rax
 * 0000000180048FD1: call    sub_1800D45A4
 * 0000000180048FD6: mov     cs:byte_18026921C, al
 * 0000000180048FDC: lea     rcx, [rbp+9E20h+var_5AC8]; void *
 * 0000000180048FE3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048FE8: nop
 * 0000000180048FE9: lea     rcx, [rbp+9E20h+var_5AA8]; void *
 * 0000000180048FF0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048FF5: nop
 * 0000000180048FF6: lea     rcx, dword_180269220
 * 0000000180048FFD: call    _Init_thread_footer
 * 0000000180049002: mov     rax, [rdi+rbx*8]
 * 0000000180049006: mov     eax, [r15+rax]
 * 000000018004900A: cmp     cs:dword_180269228, eax
 * 0000000180049010: jle     loc_1800490FA
 * 0000000180049016: lea     rcx, dword_180269228
 * 000000018004901D: call    _Init_thread_header
 * 0000000180049022: cmp     cs:dword_180269228, r14d
 * 0000000180049029: jnz     loc_1800490FA
 * 000000018004902F: lea     rax, unk_180154160
 * 0000000180049036: mov     qword ptr [rbp+9E20h+var_9B20], rax
 * 000000018004903D: lea     rax, unk_18015A544
 * 0000000180049044: mov     qword ptr [rbp+9E20h+var_9B20+8], rax
 * 000000018004904B: movups  xmm0, [rbp+9E20h+var_9B20]
 * 0000000180049052: movups  [rbp+9E20h+var_82B8], xmm0
 * 0000000180049059: mov     dword ptr [rbp+9E20h+var_82A8], r13d
 * 0000000180049060: mov     dword ptr [rbp+9E20h+var_82A8+4], esi
 * 0000000180049066: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004906B: movups  xmm0, [rbp+9E20h+var_82A8]
 * 0000000180049072: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049077: call    sub_1800455D0
 * 000000018004907C: mov     r8, rax
 * 000000018004907F: mov     r9d, r12d
 * 0000000180049082: mov     edx, 0C2h
 * 0000000180049087: lea     rcx, [rbp+9E20h+var_5A48]; Src
 * 000000018004908E: call    sub_1800D44B8
 * 0000000180049093: nop
 * 0000000180049094: mov     r8, rax
 * 0000000180049097: lea     rdx, aStandardshader_59; "StandardShader/ShaderModel40/"
 * 000000018004909E: lea     rcx, [rbp+9E20h+var_5A68]
 * 00000001800490A5: call    sub_1800453AC
 * 00000001800490AA: nop
 * 00000001800490AB: lea     r8, aPixel_57; "/Pixel"
 * 00000001800490B2: mov     rdx, rax
 * 00000001800490B5: lea     rcx, [rbp+9E20h+var_5A88]
 * 00000001800490BC: call    sub_18002BF78
 * 00000001800490C1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800490C6: mov     rcx, rax
 * 00000001800490C9: call    sub_1800D45A4
 * 00000001800490CE: mov     cs:byte_180269224, al
 * 00000001800490D4: lea     rcx, [rbp+9E20h+var_5A68]; void *
 * 00000001800490DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800490E0: nop
 * 00000001800490E1: lea     rcx, [rbp+9E20h+var_5A48]; void *
 * 00000001800490E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800490ED: nop
 * 00000001800490EE: lea     rcx, dword_180269228
 * 00000001800490F5: call    _Init_thread_footer
 * 00000001800490FA: mov     rax, [rdi+rbx*8]
 * 00000001800490FE: mov     eax, [r15+rax]
 * 0000000180049102: cmp     cs:dword_180269230, eax
 * 0000000180049108: jle     loc_1800491F2
 * 000000018004910E: lea     rcx, dword_180269230
 * 0000000180049115: call    _Init_thread_header
 * 000000018004911A: cmp     cs:dword_180269230, r14d
 * 0000000180049121: jnz     loc_1800491F2
 * 0000000180049127: lea     rax, unk_18015EB00
 * 000000018004912E: mov     qword ptr [rbp+9E20h+var_9B10], rax
 * 0000000180049135: lea     rax, unk_18016508C
 * 000000018004913C: mov     qword ptr [rbp+9E20h+var_9B10+8], rax
 * 0000000180049143: movups  xmm0, [rbp+9E20h+var_9B10]
 * 000000018004914A: movups  [rbp+9E20h+var_8298], xmm0
 * 0000000180049151: mov     dword ptr [rbp+9E20h+var_8288], r13d
 * 0000000180049158: mov     dword ptr [rbp+9E20h+var_8288+4], esi
 * 000000018004915E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049163: movups  xmm0, [rbp+9E20h+var_8288]
 * 000000018004916A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004916F: call    sub_1800455D0
 * 0000000180049174: mov     r8, rax
 * 0000000180049177: mov     r9d, r12d
 * 000000018004917A: mov     edx, 0C8h
 * 000000018004917F: lea     rcx, [rbp+9E20h+var_59E8]; Src
 * 0000000180049186: call    sub_1800D44B8
 * 000000018004918B: nop
 * 000000018004918C: mov     r8, rax
 * 000000018004918F: lea     rdx, aStandardshader_60; "StandardShader/ShaderModel40/"
 * 0000000180049196: lea     rcx, [rbp+9E20h+var_5A08]
 * 000000018004919D: call    sub_1800453AC
 * 00000001800491A2: nop
 * 00000001800491A3: lea     r8, aPixel_58; "/Pixel"
 * 00000001800491AA: mov     rdx, rax
 * 00000001800491AD: lea     rcx, [rbp+9E20h+var_5A28]
 * 00000001800491B4: call    sub_18002BF78
 * 00000001800491B9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800491BE: mov     rcx, rax
 * 00000001800491C1: call    sub_1800D45A4
 * 00000001800491C6: mov     cs:byte_18026922C, al
 * 00000001800491CC: lea     rcx, [rbp+9E20h+var_5A08]; void *
 * 00000001800491D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800491D8: nop
 * 00000001800491D9: lea     rcx, [rbp+9E20h+var_59E8]; void *
 * 00000001800491E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800491E5: nop
 * 00000001800491E6: lea     rcx, dword_180269230
 * 00000001800491ED: call    _Init_thread_footer
 * 00000001800491F2: mov     rax, [rdi+rbx*8]
 * 00000001800491F6: mov     eax, [r15+rax]
 * 00000001800491FA: cmp     cs:dword_180269238, eax
 * 0000000180049200: jle     loc_1800492EA
 * 0000000180049206: lea     rcx, dword_180269238
 * 000000018004920D: call    _Init_thread_header
 * 0000000180049212: cmp     cs:dword_180269238, r14d
 * 0000000180049219: jnz     loc_1800492EA
 * 000000018004921F: lea     rax, unk_18015EB00
 * 0000000180049226: mov     qword ptr [rbp+9E20h+var_9B00], rax
 * 000000018004922D: lea     rax, unk_18016508C
 * 0000000180049234: mov     qword ptr [rbp+9E20h+var_9B00+8], rax
 * 000000018004923B: movups  xmm0, [rbp+9E20h+var_9B00]
 * 0000000180049242: movups  [rbp+9E20h+var_8278], xmm0
 * 0000000180049249: mov     dword ptr [rbp+9E20h+var_8268], r13d
 * 0000000180049250: mov     dword ptr [rbp+9E20h+var_8268+4], esi
 * 0000000180049256: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004925B: movups  xmm0, [rbp+9E20h+var_8268]
 * 0000000180049262: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049267: call    sub_1800455D0
 * 000000018004926C: mov     r8, rax
 * 000000018004926F: mov     r9d, r12d
 * 0000000180049272: mov     edx, 0CAh
 * 0000000180049277: lea     rcx, [rbp+9E20h+var_5988]; Src
 * 000000018004927E: call    sub_1800D44B8
 * 0000000180049283: nop
 * 0000000180049284: mov     r8, rax
 * 0000000180049287: lea     rdx, aStandardshader_61; "StandardShader/ShaderModel40/"
 * 000000018004928E: lea     rcx, [rbp+9E20h+var_59A8]
 * 0000000180049295: call    sub_1800453AC
 * 000000018004929A: nop
 * 000000018004929B: lea     r8, aPixel_59; "/Pixel"
 * 00000001800492A2: mov     rdx, rax
 * 00000001800492A5: lea     rcx, [rbp+9E20h+var_59C8]
 * 00000001800492AC: call    sub_18002BF78
 * 00000001800492B1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800492B6: mov     rcx, rax
 * 00000001800492B9: call    sub_1800D45A4
 * 00000001800492BE: mov     cs:byte_180269234, al
 * 00000001800492C4: lea     rcx, [rbp+9E20h+var_59A8]; void *
 * 00000001800492CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800492D0: nop
 * 00000001800492D1: lea     rcx, [rbp+9E20h+var_5988]; void *
 * 00000001800492D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800492DD: nop
 * 00000001800492DE: lea     rcx, dword_180269238
 * 00000001800492E5: call    _Init_thread_footer
 * 00000001800492EA: mov     rax, [rdi+rbx*8]
 * 00000001800492EE: mov     eax, [r15+rax]
 * 00000001800492F2: cmp     cs:dword_180269240, eax
 * 00000001800492F8: jle     loc_1800493E2
 * 00000001800492FE: lea     rcx, dword_180269240
 * 0000000180049305: call    _Init_thread_header
 * 000000018004930A: cmp     cs:dword_180269240, r14d
 * 0000000180049311: jnz     loc_1800493E2
 * 0000000180049317: lea     rax, unk_180166160
 * 000000018004931E: mov     qword ptr [rbp+9E20h+var_9AF0], rax
 * 0000000180049325: lea     rax, unk_18016C718
 * 000000018004932C: mov     qword ptr [rbp+9E20h+var_9AF0+8], rax
 * 0000000180049333: movups  xmm0, [rbp+9E20h+var_9AF0]
 * 000000018004933A: movups  [rbp+9E20h+var_8258], xmm0
 * 0000000180049341: mov     dword ptr [rbp+9E20h+var_8248], r13d
 * 0000000180049348: mov     dword ptr [rbp+9E20h+var_8248+4], esi
 * 000000018004934E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049353: movups  xmm0, [rbp+9E20h+var_8248]
 * 000000018004935A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004935F: call    sub_1800455D0
 * 0000000180049364: mov     r8, rax
 * 0000000180049367: mov     r9d, r12d
 * 000000018004936A: mov     edx, 0D0h
 * 000000018004936F: lea     rcx, [rbp+9E20h+var_5928]; Src
 * 0000000180049376: call    sub_1800D44B8
 * 000000018004937B: nop
 * 000000018004937C: mov     r8, rax
 * 000000018004937F: lea     rdx, aStandardshader_62; "StandardShader/ShaderModel40/"
 * 0000000180049386: lea     rcx, [rbp+9E20h+var_5948]
 * 000000018004938D: call    sub_1800453AC
 * 0000000180049392: nop
 * 0000000180049393: lea     r8, aPixel_60; "/Pixel"
 * 000000018004939A: mov     rdx, rax
 * 000000018004939D: lea     rcx, [rbp+9E20h+var_5968]
 * 00000001800493A4: call    sub_18002BF78
 * 00000001800493A9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800493AE: mov     rcx, rax
 * 00000001800493B1: call    sub_1800D45A4
 * 00000001800493B6: mov     cs:byte_18026923C, al
 * 00000001800493BC: lea     rcx, [rbp+9E20h+var_5948]; void *
 * 00000001800493C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800493C8: nop
 * 00000001800493C9: lea     rcx, [rbp+9E20h+var_5928]; void *
 * 00000001800493D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800493D5: nop
 * 00000001800493D6: lea     rcx, dword_180269240
 * 00000001800493DD: call    _Init_thread_footer
 * 00000001800493E2: mov     rax, [rdi+rbx*8]
 * 00000001800493E6: mov     eax, [r15+rax]
 * 00000001800493EA: cmp     cs:dword_180269248, eax
 * 00000001800493F0: jle     loc_1800494DA
 * 00000001800493F6: lea     rcx, dword_180269248
 * 00000001800493FD: call    _Init_thread_header
 * 0000000180049402: cmp     cs:dword_180269248, r14d
 * 0000000180049409: jnz     loc_1800494DA
 * 000000018004940F: lea     rax, unk_180166160
 * 0000000180049416: mov     qword ptr [rbp+9E20h+var_9AE0], rax
 * 000000018004941D: lea     rax, unk_18016C718
 * 0000000180049424: mov     qword ptr [rbp+9E20h+var_9AE0+8], rax
 * 000000018004942B: movups  xmm0, [rbp+9E20h+var_9AE0]
 * 0000000180049432: movups  [rbp+9E20h+var_8238], xmm0
 * 0000000180049439: mov     dword ptr [rbp+9E20h+var_8228], r13d
 * 0000000180049440: mov     dword ptr [rbp+9E20h+var_8228+4], esi
 * 0000000180049446: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004944B: movups  xmm0, [rbp+9E20h+var_8228]
 * 0000000180049452: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049457: call    sub_1800455D0
 * 000000018004945C: mov     r8, rax
 * 000000018004945F: mov     r9d, r12d
 * 0000000180049462: mov     edx, 0D2h
 * 0000000180049467: lea     rcx, [rbp+9E20h+var_58C8]; Src
 * 000000018004946E: call    sub_1800D44B8
 * 0000000180049473: nop
 * 0000000180049474: mov     r8, rax
 * 0000000180049477: lea     rdx, aStandardshader_63; "StandardShader/ShaderModel40/"
 * 000000018004947E: lea     rcx, [rbp+9E20h+var_58E8]
 * 0000000180049485: call    sub_1800453AC
 * 000000018004948A: nop
 * 000000018004948B: lea     r8, aPixel_61; "/Pixel"
 * 0000000180049492: mov     rdx, rax
 * 0000000180049495: lea     rcx, [rbp+9E20h+var_5908]
 * 000000018004949C: call    sub_18002BF78
 * 00000001800494A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800494A6: mov     rcx, rax
 * 00000001800494A9: call    sub_1800D45A4
 * 00000001800494AE: mov     cs:byte_180269244, al
 * 00000001800494B4: lea     rcx, [rbp+9E20h+var_58E8]; void *
 * 00000001800494BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800494C0: nop
 * 00000001800494C1: lea     rcx, [rbp+9E20h+var_58C8]; void *
 * 00000001800494C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800494CD: nop
 * 00000001800494CE: lea     rcx, dword_180269248
 * 00000001800494D5: call    _Init_thread_footer
 * 00000001800494DA: mov     rax, [rdi+rbx*8]
 * 00000001800494DE: mov     eax, [r15+rax]
 * 00000001800494E2: cmp     cs:dword_180269250, eax
 * 00000001800494E8: jle     loc_1800495D2
 * 00000001800494EE: lea     rcx, dword_180269250
 * 00000001800494F5: call    _Init_thread_header
 * 00000001800494FA: cmp     cs:dword_180269250, r14d
 * 0000000180049501: jnz     loc_1800495D2
 * 0000000180049507: lea     rax, unk_18016FA20
 * 000000018004950E: mov     qword ptr [rbp+9E20h+var_9AD0], rax
 * 0000000180049515: lea     rax, unk_1801761AC
 * 000000018004951C: mov     qword ptr [rbp+9E20h+var_9AD0+8], rax
 * 0000000180049523: movups  xmm0, [rbp+9E20h+var_9AD0]
 * 000000018004952A: movups  [rbp+9E20h+var_8218], xmm0
 * 0000000180049531: mov     dword ptr [rbp+9E20h+var_8208], r13d
 * 0000000180049538: mov     dword ptr [rbp+9E20h+var_8208+4], esi
 * 000000018004953E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049543: movups  xmm0, [rbp+9E20h+var_8208]
 * 000000018004954A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004954F: call    sub_1800455D0
 * 0000000180049554: mov     r8, rax
 * 0000000180049557: mov     r9d, r12d
 * 000000018004955A: mov     edx, 0D8h
 * 000000018004955F: lea     rcx, [rbp+9E20h+var_5868]; Src
 * 0000000180049566: call    sub_1800D44B8
 * 000000018004956B: nop
 * 000000018004956C: mov     r8, rax
 * 000000018004956F: lea     rdx, aStandardshader_64; "StandardShader/ShaderModel40/"
 * 0000000180049576: lea     rcx, [rbp+9E20h+var_5888]
 * 000000018004957D: call    sub_1800453AC
 * 0000000180049582: nop
 * 0000000180049583: lea     r8, aPixel_62; "/Pixel"
 * 000000018004958A: mov     rdx, rax
 * 000000018004958D: lea     rcx, [rbp+9E20h+var_58A8]
 * 0000000180049594: call    sub_18002BF78
 * 0000000180049599: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004959E: mov     rcx, rax
 * 00000001800495A1: call    sub_1800D45A4
 * 00000001800495A6: mov     cs:byte_18026924C, al
 * 00000001800495AC: lea     rcx, [rbp+9E20h+var_5888]; void *
 * 00000001800495B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800495B8: nop
 * 00000001800495B9: lea     rcx, [rbp+9E20h+var_5868]; void *
 * 00000001800495C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800495C5: nop
 * 00000001800495C6: lea     rcx, dword_180269250
 * 00000001800495CD: call    _Init_thread_footer
 * 00000001800495D2: mov     rax, [rdi+rbx*8]
 * 00000001800495D6: mov     eax, [r15+rax]
 * 00000001800495DA: cmp     cs:dword_180269258, eax
 * 00000001800495E0: jle     loc_1800496CA
 * 00000001800495E6: lea     rcx, dword_180269258
 * 00000001800495ED: call    _Init_thread_header
 * 00000001800495F2: cmp     cs:dword_180269258, r14d
 * 00000001800495F9: jnz     loc_1800496CA
 * 00000001800495FF: lea     rax, unk_18016FA20
 * 0000000180049606: mov     qword ptr [rbp+9E20h+var_9AC0], rax
 * 000000018004960D: lea     rax, unk_1801761AC
 * 0000000180049614: mov     qword ptr [rbp+9E20h+var_9AC0+8], rax
 * 000000018004961B: movups  xmm0, [rbp+9E20h+var_9AC0]
 * 0000000180049622: movups  [rbp+9E20h+var_81F8], xmm0
 * 0000000180049629: mov     dword ptr [rbp+9E20h+var_81E8], r13d
 * 0000000180049630: mov     dword ptr [rbp+9E20h+var_81E8+4], esi
 * 0000000180049636: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004963B: movups  xmm0, [rbp+9E20h+var_81E8]
 * 0000000180049642: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049647: call    sub_1800455D0
 * 000000018004964C: mov     r8, rax
 * 000000018004964F: mov     r9d, r12d
 * 0000000180049652: mov     edx, 0DAh
 * 0000000180049657: lea     rcx, [rbp+9E20h+var_5808]; Src
 * 000000018004965E: call    sub_1800D44B8
 * 0000000180049663: nop
 * 0000000180049664: mov     r8, rax
 * 0000000180049667: lea     rdx, aStandardshader_65; "StandardShader/ShaderModel40/"
 * 000000018004966E: lea     rcx, [rbp+9E20h+var_5828]
 * 0000000180049675: call    sub_1800453AC
 * 000000018004967A: nop
 * 000000018004967B: lea     r8, aPixel_63; "/Pixel"
 * 0000000180049682: mov     rdx, rax
 * 0000000180049685: lea     rcx, [rbp+9E20h+var_5848]
 * 000000018004968C: call    sub_18002BF78
 * 0000000180049691: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049696: mov     rcx, rax
 * 0000000180049699: call    sub_1800D45A4
 * 000000018004969E: mov     cs:byte_180269254, al
 * 00000001800496A4: lea     rcx, [rbp+9E20h+var_5828]; void *
 * 00000001800496AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800496B0: nop
 * 00000001800496B1: lea     rcx, [rbp+9E20h+var_5808]; void *
 * 00000001800496B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800496BD: nop
 * 00000001800496BE: lea     rcx, dword_180269258
 * 00000001800496C5: call    _Init_thread_footer
 * 00000001800496CA: mov     rax, [rdi+rbx*8]
 * 00000001800496CE: mov     eax, [r15+rax]
 * 00000001800496D2: cmp     cs:dword_180269260, eax
 * 00000001800496D8: jle     loc_1800497C2
 * 00000001800496DE: lea     rcx, dword_180269260
 * 00000001800496E5: call    _Init_thread_header
 * 00000001800496EA: cmp     cs:dword_180269260, r14d
 * 00000001800496F1: jnz     loc_1800497C2
 * 00000001800496F7: lea     rax, unk_180154160
 * 00000001800496FE: mov     qword ptr [rbp+9E20h+var_9AB0], rax
 * 0000000180049705: lea     rax, unk_18015A544
 * 000000018004970C: mov     qword ptr [rbp+9E20h+var_9AB0+8], rax
 * 0000000180049713: movups  xmm0, [rbp+9E20h+var_9AB0]
 * 000000018004971A: movups  [rbp+9E20h+var_81D8], xmm0
 * 0000000180049721: mov     dword ptr [rbp+9E20h+var_81C8], r13d
 * 0000000180049728: mov     dword ptr [rbp+9E20h+var_81C8+4], esi
 * 000000018004972E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049733: movups  xmm0, [rbp+9E20h+var_81C8]
 * 000000018004973A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004973F: call    sub_1800455D0
 * 0000000180049744: mov     r8, rax
 * 0000000180049747: mov     r9d, r12d
 * 000000018004974A: mov     edx, 0E0h
 * 000000018004974F: lea     rcx, [rbp+9E20h+var_57A8]; Src
 * 0000000180049756: call    sub_1800D44B8
 * 000000018004975B: nop
 * 000000018004975C: mov     r8, rax
 * 000000018004975F: lea     rdx, aStandardshader_66; "StandardShader/ShaderModel40/"
 * 0000000180049766: lea     rcx, [rbp+9E20h+var_57C8]
 * 000000018004976D: call    sub_1800453AC
 * 0000000180049772: nop
 * 0000000180049773: lea     r8, aPixel_64; "/Pixel"
 * 000000018004977A: mov     rdx, rax
 * 000000018004977D: lea     rcx, [rbp+9E20h+var_57E8]
 * 0000000180049784: call    sub_18002BF78
 * 0000000180049789: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004978E: mov     rcx, rax
 * 0000000180049791: call    sub_1800D45A4
 * 0000000180049796: mov     cs:byte_18026925C, al
 * 000000018004979C: lea     rcx, [rbp+9E20h+var_57C8]; void *
 * 00000001800497A3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800497A8: nop
 * 00000001800497A9: lea     rcx, [rbp+9E20h+var_57A8]; void *
 * 00000001800497B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800497B5: nop
 * 00000001800497B6: lea     rcx, dword_180269260
 * 00000001800497BD: call    _Init_thread_footer
 * 00000001800497C2: mov     rax, [rdi+rbx*8]
 * 00000001800497C6: mov     eax, [r15+rax]
 * 00000001800497CA: cmp     cs:dword_180269268, eax
 * 00000001800497D0: jle     loc_1800498BA
 * 00000001800497D6: lea     rcx, dword_180269268
 * 00000001800497DD: call    _Init_thread_header
 * 00000001800497E2: cmp     cs:dword_180269268, r14d
 * 00000001800497E9: jnz     loc_1800498BA
 * 00000001800497EF: lea     rax, unk_180154160
 * 00000001800497F6: mov     qword ptr [rbp+9E20h+var_9AA0], rax
 * 00000001800497FD: lea     rax, unk_18015A544
 * 0000000180049804: mov     qword ptr [rbp+9E20h+var_9AA0+8], rax
 * 000000018004980B: movups  xmm0, [rbp+9E20h+var_9AA0]
 * 0000000180049812: movups  [rbp+9E20h+var_81B8], xmm0
 * 0000000180049819: mov     dword ptr [rbp+9E20h+var_81A8], r13d
 * 0000000180049820: mov     dword ptr [rbp+9E20h+var_81A8+4], esi
 * 0000000180049826: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004982B: movups  xmm0, [rbp+9E20h+var_81A8]
 * 0000000180049832: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049837: call    sub_1800455D0
 * 000000018004983C: mov     r8, rax
 * 000000018004983F: mov     r9d, r12d
 * 0000000180049842: mov     edx, 0E2h
 * 0000000180049847: lea     rcx, [rbp+9E20h+var_5748]; Src
 * 000000018004984E: call    sub_1800D44B8
 * 0000000180049853: nop
 * 0000000180049854: mov     r8, rax
 * 0000000180049857: lea     rdx, aStandardshader_67; "StandardShader/ShaderModel40/"
 * 000000018004985E: lea     rcx, [rbp+9E20h+var_5768]
 * 0000000180049865: call    sub_1800453AC
 * 000000018004986A: nop
 * 000000018004986B: lea     r8, aPixel_65; "/Pixel"
 * 0000000180049872: mov     rdx, rax
 * 0000000180049875: lea     rcx, [rbp+9E20h+var_5788]
 * 000000018004987C: call    sub_18002BF78
 * 0000000180049881: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049886: mov     rcx, rax
 * 0000000180049889: call    sub_1800D45A4
 * 000000018004988E: mov     cs:byte_180269264, al
 * 0000000180049894: lea     rcx, [rbp+9E20h+var_5768]; void *
 * 000000018004989B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800498A0: nop
 * 00000001800498A1: lea     rcx, [rbp+9E20h+var_5748]; void *
 * 00000001800498A8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800498AD: nop
 * 00000001800498AE: lea     rcx, dword_180269268
 * 00000001800498B5: call    _Init_thread_footer
 * 00000001800498BA: mov     rax, [rdi+rbx*8]
 * 00000001800498BE: mov     eax, [r15+rax]
 * 00000001800498C2: cmp     cs:dword_180269270, eax
 * 00000001800498C8: jle     loc_1800499B2
 * 00000001800498CE: lea     rcx, dword_180269270
 * 00000001800498D5: call    _Init_thread_header
 * 00000001800498DA: cmp     cs:dword_180269270, r14d
 * 00000001800498E1: jnz     loc_1800499B2
 * 00000001800498E7: lea     rax, unk_18015EB00
 * 00000001800498EE: mov     qword ptr [rbp+9E20h+var_9A90], rax
 * 00000001800498F5: lea     rax, unk_18016508C
 * 00000001800498FC: mov     qword ptr [rbp+9E20h+var_9A90+8], rax
 * 0000000180049903: movups  xmm0, [rbp+9E20h+var_9A90]
 * 000000018004990A: movups  [rbp+9E20h+var_8198], xmm0
 * 0000000180049911: mov     dword ptr [rbp+9E20h+var_8188], r13d
 * 0000000180049918: mov     dword ptr [rbp+9E20h+var_8188+4], esi
 * 000000018004991E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049923: movups  xmm0, [rbp+9E20h+var_8188]
 * 000000018004992A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004992F: call    sub_1800455D0
 * 0000000180049934: mov     r8, rax
 * 0000000180049937: mov     r9d, r12d
 * 000000018004993A: mov     edx, 0E8h
 * 000000018004993F: lea     rcx, [rbp+9E20h+var_56E8]; Src
 * 0000000180049946: call    sub_1800D44B8
 * 000000018004994B: nop
 * 000000018004994C: mov     r8, rax
 * 000000018004994F: lea     rdx, aStandardshader_68; "StandardShader/ShaderModel40/"
 * 0000000180049956: lea     rcx, [rbp+9E20h+var_5708]
 * 000000018004995D: call    sub_1800453AC
 * 0000000180049962: nop
 * 0000000180049963: lea     r8, aPixel_66; "/Pixel"
 * 000000018004996A: mov     rdx, rax
 * 000000018004996D: lea     rcx, [rbp+9E20h+var_5728]
 * 0000000180049974: call    sub_18002BF78
 * 0000000180049979: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004997E: mov     rcx, rax
 * 0000000180049981: call    sub_1800D45A4
 * 0000000180049986: mov     cs:byte_18026926C, al
 * 000000018004998C: lea     rcx, [rbp+9E20h+var_5708]; void *
 * 0000000180049993: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049998: nop
 * 0000000180049999: lea     rcx, [rbp+9E20h+var_56E8]; void *
 * 00000001800499A0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800499A5: nop
 * 00000001800499A6: lea     rcx, dword_180269270
 * 00000001800499AD: call    _Init_thread_footer
 * 00000001800499B2: mov     rax, [rdi+rbx*8]
 * 00000001800499B6: mov     eax, [r15+rax]
 * 00000001800499BA: cmp     cs:dword_180269278, eax
 * 00000001800499C0: jle     loc_180049AAA
 * 00000001800499C6: lea     rcx, dword_180269278
 * 00000001800499CD: call    _Init_thread_header
 * 00000001800499D2: cmp     cs:dword_180269278, r14d
 * 00000001800499D9: jnz     loc_180049AAA
 * 00000001800499DF: lea     rax, unk_18015EB00
 * 00000001800499E6: mov     qword ptr [rbp+9E20h+var_9A80], rax
 * 00000001800499ED: lea     rax, unk_18016508C
 * 00000001800499F4: mov     qword ptr [rbp+9E20h+var_9A80+8], rax
 * 00000001800499FB: movups  xmm0, [rbp+9E20h+var_9A80]
 * 0000000180049A02: movups  [rbp+9E20h+var_8178], xmm0
 * 0000000180049A09: mov     dword ptr [rbp+9E20h+var_8168], r13d
 * 0000000180049A10: mov     dword ptr [rbp+9E20h+var_8168+4], esi
 * 0000000180049A16: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049A1B: movups  xmm0, [rbp+9E20h+var_8168]
 * 0000000180049A22: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049A27: call    sub_1800455D0
 * 0000000180049A2C: mov     r8, rax
 * 0000000180049A2F: mov     r9d, r12d
 * 0000000180049A32: mov     edx, 0EAh
 * 0000000180049A37: lea     rcx, [rbp+9E20h+var_5688]; Src
 * 0000000180049A3E: call    sub_1800D44B8
 * 0000000180049A43: nop
 * 0000000180049A44: mov     r8, rax
 * 0000000180049A47: lea     rdx, aStandardshader_69; "StandardShader/ShaderModel40/"
 * 0000000180049A4E: lea     rcx, [rbp+9E20h+var_56A8]
 * 0000000180049A55: call    sub_1800453AC
 * 0000000180049A5A: nop
 * 0000000180049A5B: lea     r8, aPixel_67; "/Pixel"
 * 0000000180049A62: mov     rdx, rax
 * 0000000180049A65: lea     rcx, [rbp+9E20h+var_56C8]
 * 0000000180049A6C: call    sub_18002BF78
 * 0000000180049A71: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049A76: mov     rcx, rax
 * 0000000180049A79: call    sub_1800D45A4
 * 0000000180049A7E: mov     cs:byte_180269274, al
 * 0000000180049A84: lea     rcx, [rbp+9E20h+var_56A8]; void *
 * 0000000180049A8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049A90: nop
 * 0000000180049A91: lea     rcx, [rbp+9E20h+var_5688]; void *
 * 0000000180049A98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049A9D: nop
 * 0000000180049A9E: lea     rcx, dword_180269278
 * 0000000180049AA5: call    _Init_thread_footer
 * 0000000180049AAA: mov     rax, [rdi+rbx*8]
 * 0000000180049AAE: mov     eax, [r15+rax]
 * 0000000180049AB2: cmp     cs:dword_180269280, eax
 * 0000000180049AB8: jle     loc_180049BA2
 * 0000000180049ABE: lea     rcx, dword_180269280
 * 0000000180049AC5: call    _Init_thread_header
 * 0000000180049ACA: cmp     cs:dword_180269280, r14d
 * 0000000180049AD1: jnz     loc_180049BA2
 * 0000000180049AD7: lea     rax, unk_180166160
 * 0000000180049ADE: mov     qword ptr [rbp+9E20h+var_9A70], rax
 * 0000000180049AE5: lea     rax, unk_18016C718
 * 0000000180049AEC: mov     qword ptr [rbp+9E20h+var_9A70+8], rax
 * 0000000180049AF3: movups  xmm0, [rbp+9E20h+var_9A70]
 * 0000000180049AFA: movups  [rbp+9E20h+var_8158], xmm0
 * 0000000180049B01: mov     dword ptr [rbp+9E20h+var_8148], r13d
 * 0000000180049B08: mov     dword ptr [rbp+9E20h+var_8148+4], esi
 * 0000000180049B0E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049B13: movups  xmm0, [rbp+9E20h+var_8148]
 * 0000000180049B1A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049B1F: call    sub_1800455D0
 * 0000000180049B24: mov     r8, rax
 * 0000000180049B27: mov     r9d, r12d
 * 0000000180049B2A: mov     edx, 0F0h
 * 0000000180049B2F: lea     rcx, [rbp+9E20h+var_5628]; Src
 * 0000000180049B36: call    sub_1800D44B8
 * 0000000180049B3B: nop
 * 0000000180049B3C: mov     r8, rax
 * 0000000180049B3F: lea     rdx, aStandardshader_70; "StandardShader/ShaderModel40/"
 * 0000000180049B46: lea     rcx, [rbp+9E20h+var_5648]
 * 0000000180049B4D: call    sub_1800453AC
 * 0000000180049B52: nop
 * 0000000180049B53: lea     r8, aPixel_68; "/Pixel"
 * 0000000180049B5A: mov     rdx, rax
 * 0000000180049B5D: lea     rcx, [rbp+9E20h+var_5668]
 * 0000000180049B64: call    sub_18002BF78
 * 0000000180049B69: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049B6E: mov     rcx, rax
 * 0000000180049B71: call    sub_1800D45A4
 * 0000000180049B76: mov     cs:byte_18026927C, al
 * 0000000180049B7C: lea     rcx, [rbp+9E20h+var_5648]; void *
 * 0000000180049B83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049B88: nop
 * 0000000180049B89: lea     rcx, [rbp+9E20h+var_5628]; void *
 * 0000000180049B90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049B95: nop
 * 0000000180049B96: lea     rcx, dword_180269280
 * 0000000180049B9D: call    _Init_thread_footer
 * 0000000180049BA2: mov     rax, [rdi+rbx*8]
 * 0000000180049BA6: mov     eax, [r15+rax]
 * 0000000180049BAA: cmp     cs:dword_180269288, eax
 * 0000000180049BB0: jle     loc_180049C9A
 * 0000000180049BB6: lea     rcx, dword_180269288
 * 0000000180049BBD: call    _Init_thread_header
 * 0000000180049BC2: cmp     cs:dword_180269288, r14d
 * 0000000180049BC9: jnz     loc_180049C9A
 * 0000000180049BCF: lea     rax, unk_180166160
 * 0000000180049BD6: mov     qword ptr [rbp+9E20h+var_9A60], rax
 * 0000000180049BDD: lea     rax, unk_18016C718
 * 0000000180049BE4: mov     qword ptr [rbp+9E20h+var_9A60+8], rax
 * 0000000180049BEB: movups  xmm0, [rbp+9E20h+var_9A60]
 * 0000000180049BF2: movups  [rbp+9E20h+var_8138], xmm0
 * 0000000180049BF9: mov     dword ptr [rbp+9E20h+var_8128], r13d
 * 0000000180049C00: mov     dword ptr [rbp+9E20h+var_8128+4], esi
 * 0000000180049C06: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049C0B: movups  xmm0, [rbp+9E20h+var_8128]
 * 0000000180049C12: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049C17: call    sub_1800455D0
 * 0000000180049C1C: mov     r8, rax
 * 0000000180049C1F: mov     r9d, r12d
 * 0000000180049C22: mov     edx, 0F2h
 * 0000000180049C27: lea     rcx, [rbp+9E20h+var_55C8]; Src
 * 0000000180049C2E: call    sub_1800D44B8
 * 0000000180049C33: nop
 * 0000000180049C34: mov     r8, rax
 * 0000000180049C37: lea     rdx, aStandardshader_71; "StandardShader/ShaderModel40/"
 * 0000000180049C3E: lea     rcx, [rbp+9E20h+var_55E8]
 * 0000000180049C45: call    sub_1800453AC
 * 0000000180049C4A: nop
 * 0000000180049C4B: lea     r8, aPixel_69; "/Pixel"
 * 0000000180049C52: mov     rdx, rax
 * 0000000180049C55: lea     rcx, [rbp+9E20h+var_5608]
 * 0000000180049C5C: call    sub_18002BF78
 * 0000000180049C61: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049C66: mov     rcx, rax
 * 0000000180049C69: call    sub_1800D45A4
 * 0000000180049C6E: mov     cs:byte_180269284, al
 * 0000000180049C74: lea     rcx, [rbp+9E20h+var_55E8]; void *
 * 0000000180049C7B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049C80: nop
 * 0000000180049C81: lea     rcx, [rbp+9E20h+var_55C8]; void *
 * 0000000180049C88: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049C8D: nop
 * 0000000180049C8E: lea     rcx, dword_180269288
 * 0000000180049C95: call    _Init_thread_footer
 * 0000000180049C9A: mov     rax, [rdi+rbx*8]
 * 0000000180049C9E: mov     eax, [r15+rax]
 * 0000000180049CA2: cmp     cs:dword_180269290, eax
 * 0000000180049CA8: jle     loc_180049D92
 * 0000000180049CAE: lea     rcx, dword_180269290
 * 0000000180049CB5: call    _Init_thread_header
 * 0000000180049CBA: cmp     cs:dword_180269290, r14d
 * 0000000180049CC1: jnz     loc_180049D92
 * 0000000180049CC7: lea     rax, unk_18016FA20
 * 0000000180049CCE: mov     qword ptr [rbp+9E20h+var_9A50], rax
 * 0000000180049CD5: lea     rax, unk_1801761AC
 * 0000000180049CDC: mov     qword ptr [rbp+9E20h+var_9A50+8], rax
 * 0000000180049CE3: movups  xmm0, [rbp+9E20h+var_9A50]
 * 0000000180049CEA: movups  [rbp+9E20h+var_8118], xmm0
 * 0000000180049CF1: mov     dword ptr [rbp+9E20h+var_8108], r13d
 * 0000000180049CF8: mov     dword ptr [rbp+9E20h+var_8108+4], esi
 * 0000000180049CFE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049D03: movups  xmm0, [rbp+9E20h+var_8108]
 * 0000000180049D0A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049D0F: call    sub_1800455D0
 * 0000000180049D14: mov     r8, rax
 * 0000000180049D17: mov     r9d, r12d
 * 0000000180049D1A: mov     edx, 0F8h
 * 0000000180049D1F: lea     rcx, [rbp+9E20h+var_5568]; Src
 * 0000000180049D26: call    sub_1800D44B8
 * 0000000180049D2B: nop
 * 0000000180049D2C: mov     r8, rax
 * 0000000180049D2F: lea     rdx, aStandardshader_72; "StandardShader/ShaderModel40/"
 * 0000000180049D36: lea     rcx, [rbp+9E20h+var_5588]
 * 0000000180049D3D: call    sub_1800453AC
 * 0000000180049D42: nop
 * 0000000180049D43: lea     r8, aPixel_70; "/Pixel"
 * 0000000180049D4A: mov     rdx, rax
 * 0000000180049D4D: lea     rcx, [rbp+9E20h+var_55A8]
 * 0000000180049D54: call    sub_18002BF78
 * 0000000180049D59: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049D5E: mov     rcx, rax
 * 0000000180049D61: call    sub_1800D45A4
 * 0000000180049D66: mov     cs:byte_18026928C, al
 * 0000000180049D6C: lea     rcx, [rbp+9E20h+var_5588]; void *
 * 0000000180049D73: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049D78: nop
 * 0000000180049D79: lea     rcx, [rbp+9E20h+var_5568]; void *
 * 0000000180049D80: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049D85: nop
 * 0000000180049D86: lea     rcx, dword_180269290
 * 0000000180049D8D: call    _Init_thread_footer
 * 0000000180049D92: mov     rax, [rdi+rbx*8]
 * 0000000180049D96: mov     eax, [r15+rax]
 * 0000000180049D9A: cmp     cs:dword_180269298, eax
 * 0000000180049DA0: jle     loc_180049E8A
 * 0000000180049DA6: lea     rcx, dword_180269298
 * 0000000180049DAD: call    _Init_thread_header
 * 0000000180049DB2: cmp     cs:dword_180269298, r14d
 * 0000000180049DB9: jnz     loc_180049E8A
 * 0000000180049DBF: lea     rax, unk_18016FA20
 * 0000000180049DC6: mov     qword ptr [rbp+9E20h+var_9A40], rax
 * 0000000180049DCD: lea     rax, unk_1801761AC
 * 0000000180049DD4: mov     qword ptr [rbp+9E20h+var_9A40+8], rax
 * 0000000180049DDB: movups  xmm0, [rbp+9E20h+var_9A40]
 * 0000000180049DE2: movups  [rbp+9E20h+var_80F8], xmm0
 * 0000000180049DE9: mov     dword ptr [rbp+9E20h+var_80E8], r13d
 * 0000000180049DF0: mov     dword ptr [rbp+9E20h+var_80E8+4], esi
 * 0000000180049DF6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049DFB: movups  xmm0, [rbp+9E20h+var_80E8]
 * 0000000180049E02: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049E07: call    sub_1800455D0
 * 0000000180049E0C: mov     r8, rax
 * 0000000180049E0F: mov     r9d, r12d
 * 0000000180049E12: mov     edx, 0FAh
 * 0000000180049E17: lea     rcx, [rbp+9E20h+var_5508]; Src
 * 0000000180049E1E: call    sub_1800D44B8
 * 0000000180049E23: nop
 * 0000000180049E24: mov     r8, rax
 * 0000000180049E27: lea     rdx, aStandardshader_73; "StandardShader/ShaderModel40/"
 * 0000000180049E2E: lea     rcx, [rbp+9E20h+var_5528]
 * 0000000180049E35: call    sub_1800453AC
 * 0000000180049E3A: nop
 * 0000000180049E3B: lea     r8, aPixel_71; "/Pixel"
 * 0000000180049E42: mov     rdx, rax
 * 0000000180049E45: lea     rcx, [rbp+9E20h+var_5548]
 * 0000000180049E4C: call    sub_18002BF78
 * 0000000180049E51: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049E56: mov     rcx, rax
 * 0000000180049E59: call    sub_1800D45A4
 * 0000000180049E5E: mov     cs:byte_180269294, al
 * 0000000180049E64: lea     rcx, [rbp+9E20h+var_5528]; void *
 * 0000000180049E6B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049E70: nop
 * 0000000180049E71: lea     rcx, [rbp+9E20h+var_5508]; void *
 * 0000000180049E78: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049E7D: nop
 * 0000000180049E7E: lea     rcx, dword_180269298
 * 0000000180049E85: call    _Init_thread_footer
 * 0000000180049E8A: mov     rax, [rdi+rbx*8]
 * 0000000180049E8E: mov     eax, [r15+rax]
 * 0000000180049E92: cmp     cs:dword_1802692A0, eax
 * 0000000180049E98: jle     loc_180049F82
 * 0000000180049E9E: lea     rcx, dword_1802692A0
 * 0000000180049EA5: call    _Init_thread_header
 * 0000000180049EAA: cmp     cs:dword_1802692A0, r14d
 * 0000000180049EB1: jnz     loc_180049F82
 * 0000000180049EB7: lea     rax, unk_1801761B0
 * 0000000180049EBE: mov     qword ptr [rbp+9E20h+var_9A30], rax
 * 0000000180049EC5: lea     rax, unk_18017C8DC
 * 0000000180049ECC: mov     qword ptr [rbp+9E20h+var_9A30+8], rax
 * 0000000180049ED3: movups  xmm0, [rbp+9E20h+var_9A30]
 * 0000000180049EDA: movups  [rbp+9E20h+var_80D8], xmm0
 * 0000000180049EE1: mov     dword ptr [rbp+9E20h+var_80C8], r13d
 * 0000000180049EE8: mov     dword ptr [rbp+9E20h+var_80C8+4], esi
 * 0000000180049EEE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049EF3: movups  xmm0, [rbp+9E20h+var_80C8]
 * 0000000180049EFA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049EFF: call    sub_1800455D0
 * 0000000180049F04: mov     r8, rax
 * 0000000180049F07: mov     r9d, r12d
 * 0000000180049F0A: mov     edx, 100h
 * 0000000180049F0F: lea     rcx, [rbp+9E20h+var_54A8]; Src
 * 0000000180049F16: call    sub_1800D44B8
 * 0000000180049F1B: nop
 * 0000000180049F1C: mov     r8, rax
 * 0000000180049F1F: lea     rdx, aStandardshader_74; "StandardShader/ShaderModel40/"
 * 0000000180049F26: lea     rcx, [rbp+9E20h+var_54C8]
 * 0000000180049F2D: call    sub_1800453AC
 * 0000000180049F32: nop
 * 0000000180049F33: lea     r8, aPixel_72; "/Pixel"
 * 0000000180049F3A: mov     rdx, rax
 * 0000000180049F3D: lea     rcx, [rbp+9E20h+var_54E8]
 * 0000000180049F44: call    sub_18002BF78
 * 0000000180049F49: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049F4E: mov     rcx, rax
 * 0000000180049F51: call    sub_1800D45A4
 * 0000000180049F56: mov     cs:byte_18026929C, al
 * 0000000180049F5C: lea     rcx, [rbp+9E20h+var_54C8]; void *
 * 0000000180049F63: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049F68: nop
 * 0000000180049F69: lea     rcx, [rbp+9E20h+var_54A8]; void *
 * 0000000180049F70: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049F75: nop
 * 0000000180049F76: lea     rcx, dword_1802692A0
 * 0000000180049F7D: call    _Init_thread_footer
 * 0000000180049F82: mov     rax, [rdi+rbx*8]
 * 0000000180049F86: mov     eax, [r15+rax]
 * 0000000180049F8A: cmp     cs:dword_1802692A8, eax
 * 0000000180049F90: jle     loc_18004A07A
 * 0000000180049F96: lea     rcx, dword_1802692A8
 * 0000000180049F9D: call    _Init_thread_header
 * 0000000180049FA2: cmp     cs:dword_1802692A8, r14d
 * 0000000180049FA9: jnz     loc_18004A07A
 * 0000000180049FAF: lea     rax, unk_1801761B0
 * 0000000180049FB6: mov     qword ptr [rbp+9E20h+var_9A20], rax
 * 0000000180049FBD: lea     rax, unk_18017C8DC
 * 0000000180049FC4: mov     qword ptr [rbp+9E20h+var_9A20+8], rax
 * 0000000180049FCB: movups  xmm0, [rbp+9E20h+var_9A20]
 * 0000000180049FD2: movups  [rbp+9E20h+var_80B8], xmm0
 * 0000000180049FD9: mov     dword ptr [rbp+9E20h+var_80A8], r13d
 * 0000000180049FE0: mov     dword ptr [rbp+9E20h+var_80A8+4], esi
 * 0000000180049FE6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049FEB: movups  xmm0, [rbp+9E20h+var_80A8]
 * 0000000180049FF2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049FF7: call    sub_1800455D0
 * 0000000180049FFC: mov     r8, rax
 * 0000000180049FFF: mov     r9d, r12d
 * 000000018004A002: mov     edx, 102h
 * 000000018004A007: lea     rcx, [rbp+9E20h+var_5448]; Src
 * 000000018004A00E: call    sub_1800D44B8
 * 000000018004A013: nop
 * 000000018004A014: mov     r8, rax
 * 000000018004A017: lea     rdx, aStandardshader_75; "StandardShader/ShaderModel40/"
 * 000000018004A01E: lea     rcx, [rbp+9E20h+var_5468]
 * 000000018004A025: call    sub_1800453AC
 * 000000018004A02A: nop
 * 000000018004A02B: lea     r8, aPixel_73; "/Pixel"
 * 000000018004A032: mov     rdx, rax
 * 000000018004A035: lea     rcx, [rbp+9E20h+var_5488]
 * 000000018004A03C: call    sub_18002BF78
 * 000000018004A041: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A046: mov     rcx, rax
 * 000000018004A049: call    sub_1800D45A4
 * 000000018004A04E: mov     cs:byte_1802692A4, al
 * 000000018004A054: lea     rcx, [rbp+9E20h+var_5468]; void *
 * 000000018004A05B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A060: nop
 * 000000018004A061: lea     rcx, [rbp+9E20h+var_5448]; void *
 * 000000018004A068: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A06D: nop
 * 000000018004A06E: lea     rcx, dword_1802692A8
 * 000000018004A075: call    _Init_thread_footer
 * 000000018004A07A: mov     rax, [rdi+rbx*8]
 * 000000018004A07E: mov     eax, [r15+rax]
 * 000000018004A082: cmp     cs:dword_1802692B0, eax
 * 000000018004A088: jle     loc_18004A172
 * 000000018004A08E: lea     rcx, dword_1802692B0
 * 000000018004A095: call    _Init_thread_header
 * 000000018004A09A: cmp     cs:dword_1802692B0, r14d
 * 000000018004A0A1: jnz     loc_18004A172
 * 000000018004A0A7: lea     rax, unk_18017C8E0
 * 000000018004A0AE: mov     qword ptr [rbp+9E20h+var_9A10], rax
 * 000000018004A0B5: lea     rax, unk_18017FDC0
 * 000000018004A0BC: mov     qword ptr [rbp+9E20h+var_9A10+8], rax
 * 000000018004A0C3: movups  xmm0, [rbp+9E20h+var_9A10]
 * 000000018004A0CA: movups  [rbp+9E20h+var_8098], xmm0
 * 000000018004A0D1: mov     dword ptr [rbp+9E20h+var_8088], r13d
 * 000000018004A0D8: mov     dword ptr [rbp+9E20h+var_8088+4], esi
 * 000000018004A0DE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A0E3: movups  xmm0, [rbp+9E20h+var_8088]
 * 000000018004A0EA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A0EF: call    sub_1800455D0
 * 000000018004A0F4: mov     r8, rax
 * 000000018004A0F7: mov     r9d, r12d
 * 000000018004A0FA: mov     edx, 104h
 * 000000018004A0FF: lea     rcx, [rbp+9E20h+var_53E8]; Src
 * 000000018004A106: call    sub_1800D44B8
 * 000000018004A10B: nop
 * 000000018004A10C: mov     r8, rax
 * 000000018004A10F: lea     rdx, aStandardshader_76; "StandardShader/ShaderModel40/"
 * 000000018004A116: lea     rcx, [rbp+9E20h+var_5408]
 * 000000018004A11D: call    sub_1800453AC
 * 000000018004A122: nop
 * 000000018004A123: lea     r8, aPixel_74; "/Pixel"
 * 000000018004A12A: mov     rdx, rax
 * 000000018004A12D: lea     rcx, [rbp+9E20h+var_5428]
 * 000000018004A134: call    sub_18002BF78
 * 000000018004A139: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A13E: mov     rcx, rax
 * 000000018004A141: call    sub_1800D45A4
 * 000000018004A146: mov     cs:byte_1802692AC, al
 * 000000018004A14C: lea     rcx, [rbp+9E20h+var_5408]; void *
 * 000000018004A153: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A158: nop
 * 000000018004A159: lea     rcx, [rbp+9E20h+var_53E8]; void *
 * 000000018004A160: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A165: nop
 * 000000018004A166: lea     rcx, dword_1802692B0
 * 000000018004A16D: call    _Init_thread_footer
 * 000000018004A172: mov     rax, [rdi+rbx*8]
 * 000000018004A176: mov     eax, [r15+rax]
 * 000000018004A17A: cmp     cs:dword_1802692B8, eax
 * 000000018004A180: jle     loc_18004A26A
 * 000000018004A186: lea     rcx, dword_1802692B8
 * 000000018004A18D: call    _Init_thread_header
 * 000000018004A192: cmp     cs:dword_1802692B8, r14d
 * 000000018004A199: jnz     loc_18004A26A
 * 000000018004A19F: lea     rax, unk_18017C8E0
 * 000000018004A1A6: mov     qword ptr [rbp+9E20h+var_9A00], rax
 * 000000018004A1AD: lea     rax, unk_18017FDC0
 * 000000018004A1B4: mov     qword ptr [rbp+9E20h+var_9A00+8], rax
 * 000000018004A1BB: movups  xmm0, [rbp+9E20h+var_9A00]
 * 000000018004A1C2: movups  [rbp+9E20h+var_8078], xmm0
 * 000000018004A1C9: mov     dword ptr [rbp+9E20h+var_8068], r13d
 * 000000018004A1D0: mov     dword ptr [rbp+9E20h+var_8068+4], esi
 * 000000018004A1D6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A1DB: movups  xmm0, [rbp+9E20h+var_8068]
 * 000000018004A1E2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A1E7: call    sub_1800455D0
 * 000000018004A1EC: mov     r8, rax
 * 000000018004A1EF: mov     r9d, r12d
 * 000000018004A1F2: mov     edx, 106h
 * 000000018004A1F7: lea     rcx, [rbp+9E20h+var_5388]; Src
 * 000000018004A1FE: call    sub_1800D44B8
 * 000000018004A203: nop
 * 000000018004A204: mov     r8, rax
 * 000000018004A207: lea     rdx, aStandardshader_77; "StandardShader/ShaderModel40/"
 * 000000018004A20E: lea     rcx, [rbp+9E20h+var_53A8]
 * 000000018004A215: call    sub_1800453AC
 * 000000018004A21A: nop
 * 000000018004A21B: lea     r8, aPixel_75; "/Pixel"
 * 000000018004A222: mov     rdx, rax
 * 000000018004A225: lea     rcx, [rbp+9E20h+var_53C8]
 * 000000018004A22C: call    sub_18002BF78
 * 000000018004A231: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A236: mov     rcx, rax
 * 000000018004A239: call    sub_1800D45A4
 * 000000018004A23E: mov     cs:byte_1802692B4, al
 * 000000018004A244: lea     rcx, [rbp+9E20h+var_53A8]; void *
 * 000000018004A24B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A250: nop
 * 000000018004A251: lea     rcx, [rbp+9E20h+var_5388]; void *
 * 000000018004A258: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A25D: nop
 * 000000018004A25E: lea     rcx, dword_1802692B8
 * 000000018004A265: call    _Init_thread_footer
 * 000000018004A26A: mov     rax, [rdi+rbx*8]
 * 000000018004A26E: mov     eax, [r15+rax]
 * 000000018004A272: cmp     cs:dword_1802692C0, eax
 * 000000018004A278: jle     loc_18004A362
 * 000000018004A27E: lea     rcx, dword_1802692C0
 * 000000018004A285: call    _Init_thread_header
 * 000000018004A28A: cmp     cs:dword_1802692C0, r14d
 * 000000018004A291: jnz     loc_18004A362
 * 000000018004A297: lea     rax, unk_18017FDC0
 * 000000018004A29E: mov     qword ptr [rbp+9E20h+var_99F0], rax
 * 000000018004A2A5: lea     rax, unk_18018667C
 * 000000018004A2AC: mov     qword ptr [rbp+9E20h+var_99F0+8], rax
 * 000000018004A2B3: movups  xmm0, [rbp+9E20h+var_99F0]
 * 000000018004A2BA: movups  [rbp+9E20h+var_8058], xmm0
 * 000000018004A2C1: mov     dword ptr [rbp+9E20h+var_8048], r13d
 * 000000018004A2C8: mov     dword ptr [rbp+9E20h+var_8048+4], esi
 * 000000018004A2CE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A2D3: movups  xmm0, [rbp+9E20h+var_8048]
 * 000000018004A2DA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A2DF: call    sub_1800455D0
 * 000000018004A2E4: mov     r8, rax
 * 000000018004A2E7: mov     r9d, r12d
 * 000000018004A2EA: mov     edx, 108h
 * 000000018004A2EF: lea     rcx, [rbp+9E20h+var_5328]; Src
 * 000000018004A2F6: call    sub_1800D44B8
 * 000000018004A2FB: nop
 * 000000018004A2FC: mov     r8, rax
 * 000000018004A2FF: lea     rdx, aStandardshader_78; "StandardShader/ShaderModel40/"
 * 000000018004A306: lea     rcx, [rbp+9E20h+var_5348]
 * 000000018004A30D: call    sub_1800453AC
 * 000000018004A312: nop
 * 000000018004A313: lea     r8, aPixel_76; "/Pixel"
 * 000000018004A31A: mov     rdx, rax
 * 000000018004A31D: lea     rcx, [rbp+9E20h+var_5368]
 * 000000018004A324: call    sub_18002BF78
 * 000000018004A329: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A32E: mov     rcx, rax
 * 000000018004A331: call    sub_1800D45A4
 * 000000018004A336: mov     cs:byte_1802692BC, al
 * 000000018004A33C: lea     rcx, [rbp+9E20h+var_5348]; void *
 * 000000018004A343: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A348: nop
 * 000000018004A349: lea     rcx, [rbp+9E20h+var_5328]; void *
 * 000000018004A350: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A355: nop
 * 000000018004A356: lea     rcx, dword_1802692C0
 * 000000018004A35D: call    _Init_thread_footer
 * 000000018004A362: mov     rax, [rdi+rbx*8]
 * 000000018004A366: mov     eax, [r15+rax]
 * 000000018004A36A: cmp     cs:dword_1802692C8, eax
 * 000000018004A370: jle     loc_18004A45A
 * 000000018004A376: lea     rcx, dword_1802692C8
 * 000000018004A37D: call    _Init_thread_header
 * 000000018004A382: cmp     cs:dword_1802692C8, r14d
 * 000000018004A389: jnz     loc_18004A45A
 * 000000018004A38F: lea     rax, unk_18017FDC0
 * 000000018004A396: mov     qword ptr [rbp+9E20h+var_99E0], rax
 * 000000018004A39D: lea     rax, unk_18018667C
 * 000000018004A3A4: mov     qword ptr [rbp+9E20h+var_99E0+8], rax
 * 000000018004A3AB: movups  xmm0, [rbp+9E20h+var_99E0]
 * 000000018004A3B2: movups  [rbp+9E20h+var_8038], xmm0
 * 000000018004A3B9: mov     dword ptr [rbp+9E20h+var_8028], r13d
 * 000000018004A3C0: mov     dword ptr [rbp+9E20h+var_8028+4], esi
 * 000000018004A3C6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A3CB: movups  xmm0, [rbp+9E20h+var_8028]
 * 000000018004A3D2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A3D7: call    sub_1800455D0
 * 000000018004A3DC: mov     r8, rax
 * 000000018004A3DF: mov     r9d, r12d
 * 000000018004A3E2: mov     edx, 10Ah
 * 000000018004A3E7: lea     rcx, [rbp+9E20h+var_52C8]; Src
 * 000000018004A3EE: call    sub_1800D44B8
 * 000000018004A3F3: nop
 * 000000018004A3F4: mov     r8, rax
 * 000000018004A3F7: lea     rdx, aStandardshader_79; "StandardShader/ShaderModel40/"
 * 000000018004A3FE: lea     rcx, [rbp+9E20h+var_52E8]
 * 000000018004A405: call    sub_1800453AC
 * 000000018004A40A: nop
 * 000000018004A40B: lea     r8, aPixel_77; "/Pixel"
 * 000000018004A412: mov     rdx, rax
 * 000000018004A415: lea     rcx, [rbp+9E20h+var_5308]
 * 000000018004A41C: call    sub_18002BF78
 * 000000018004A421: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A426: mov     rcx, rax
 * 000000018004A429: call    sub_1800D45A4
 * 000000018004A42E: mov     cs:byte_1802692C4, al
 * 000000018004A434: lea     rcx, [rbp+9E20h+var_52E8]; void *
 * 000000018004A43B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A440: nop
 * 000000018004A441: lea     rcx, [rbp+9E20h+var_52C8]; void *
 * 000000018004A448: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A44D: nop
 * 000000018004A44E: lea     rcx, dword_1802692C8
 * 000000018004A455: call    _Init_thread_footer
 * 000000018004A45A: mov     rax, [rdi+rbx*8]
 * 000000018004A45E: mov     eax, [r15+rax]
 * 000000018004A462: cmp     cs:dword_1802692D0, eax
 * 000000018004A468: jle     loc_18004A552
 * 000000018004A46E: lea     rcx, dword_1802692D0
 * 000000018004A475: call    _Init_thread_header
 * 000000018004A47A: cmp     cs:dword_1802692D0, r14d
 * 000000018004A481: jnz     loc_18004A552
 * 000000018004A487: lea     rax, unk_180186680
 * 000000018004A48E: mov     qword ptr [rbp+9E20h+var_99D0], rax
 * 000000018004A495: lea     rax, unk_18018CF88
 * 000000018004A49C: mov     qword ptr [rbp+9E20h+var_99D0+8], rax
 * 000000018004A4A3: movups  xmm0, [rbp+9E20h+var_99D0]
 * 000000018004A4AA: movups  [rbp+9E20h+var_8018], xmm0
 * 000000018004A4B1: mov     dword ptr [rbp+9E20h+var_8008], r13d
 * 000000018004A4B8: mov     dword ptr [rbp+9E20h+var_8008+4], esi
 * 000000018004A4BE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A4C3: movups  xmm0, [rbp+9E20h+var_8008]
 * 000000018004A4CA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A4CF: call    sub_1800455D0
 * 000000018004A4D4: mov     r8, rax
 * 000000018004A4D7: mov     r9d, r12d
 * 000000018004A4DA: mov     edx, 110h
 * 000000018004A4DF: lea     rcx, [rbp+9E20h+var_5268]; Src
 * 000000018004A4E6: call    sub_1800D44B8
 * 000000018004A4EB: nop
 * 000000018004A4EC: mov     r8, rax
 * 000000018004A4EF: lea     rdx, aStandardshader_80; "StandardShader/ShaderModel40/"
 * 000000018004A4F6: lea     rcx, [rbp+9E20h+var_5288]
 * 000000018004A4FD: call    sub_1800453AC
 * 000000018004A502: nop
 * 000000018004A503: lea     r8, aPixel_78; "/Pixel"
 * 000000018004A50A: mov     rdx, rax
 * 000000018004A50D: lea     rcx, [rbp+9E20h+var_52A8]
 * 000000018004A514: call    sub_18002BF78
 * 000000018004A519: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A51E: mov     rcx, rax
 * 000000018004A521: call    sub_1800D45A4
 * 000000018004A526: mov     cs:byte_1802692CC, al
 * 000000018004A52C: lea     rcx, [rbp+9E20h+var_5288]; void *
 * 000000018004A533: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A538: nop
 * 000000018004A539: lea     rcx, [rbp+9E20h+var_5268]; void *
 * 000000018004A540: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A545: nop
 * 000000018004A546: lea     rcx, dword_1802692D0
 * 000000018004A54D: call    _Init_thread_footer
 * 000000018004A552: mov     rax, [rdi+rbx*8]
 * 000000018004A556: mov     eax, [r15+rax]
 * 000000018004A55A: cmp     cs:dword_1802692D8, eax
 * 000000018004A560: jle     loc_18004A64A
 * 000000018004A566: lea     rcx, dword_1802692D8
 * 000000018004A56D: call    _Init_thread_header
 * 000000018004A572: cmp     cs:dword_1802692D8, r14d
 * 000000018004A579: jnz     loc_18004A64A
 * 000000018004A57F: lea     rax, unk_180186680
 * 000000018004A586: mov     qword ptr [rbp+9E20h+var_99C0], rax
 * 000000018004A58D: lea     rax, unk_18018CF88
 * 000000018004A594: mov     qword ptr [rbp+9E20h+var_99C0+8], rax
 * 000000018004A59B: movups  xmm0, [rbp+9E20h+var_99C0]
 * 000000018004A5A2: movups  [rbp+9E20h+var_7FF8], xmm0
 * 000000018004A5A9: mov     dword ptr [rbp+9E20h+var_7FE8], r13d
 * 000000018004A5B0: mov     dword ptr [rbp+9E20h+var_7FE8+4], esi
 * 000000018004A5B6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A5BB: movups  xmm0, [rbp+9E20h+var_7FE8]
 * 000000018004A5C2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A5C7: call    sub_1800455D0
 * 000000018004A5CC: mov     r8, rax
 * 000000018004A5CF: mov     r9d, r12d
 * 000000018004A5D2: mov     edx, 112h
 * 000000018004A5D7: lea     rcx, [rbp+9E20h+var_5208]; Src
 * 000000018004A5DE: call    sub_1800D44B8
 * 000000018004A5E3: nop
 * 000000018004A5E4: mov     r8, rax
 * 000000018004A5E7: lea     rdx, aStandardshader_81; "StandardShader/ShaderModel40/"
 * 000000018004A5EE: lea     rcx, [rbp+9E20h+var_5228]
 * 000000018004A5F5: call    sub_1800453AC
 * 000000018004A5FA: nop
 * 000000018004A5FB: lea     r8, aPixel_79; "/Pixel"
 * 000000018004A602: mov     rdx, rax
 * 000000018004A605: lea     rcx, [rbp+9E20h+var_5248]
 * 000000018004A60C: call    sub_18002BF78
 * 000000018004A611: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A616: mov     rcx, rax
 * 000000018004A619: call    sub_1800D45A4
 * 000000018004A61E: mov     cs:byte_1802692D4, al
 * 000000018004A624: lea     rcx, [rbp+9E20h+var_5228]; void *
 * 000000018004A62B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A630: nop
 * 000000018004A631: lea     rcx, [rbp+9E20h+var_5208]; void *
 * 000000018004A638: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A63D: nop
 * 000000018004A63E: lea     rcx, dword_1802692D8
 * 000000018004A645: call    _Init_thread_footer
 * 000000018004A64A: mov     rax, [rdi+rbx*8]
 * 000000018004A64E: mov     eax, [r15+rax]
 * 000000018004A652: cmp     cs:dword_1802692E0, eax
 * 000000018004A658: jle     loc_18004A742
 * 000000018004A65E: lea     rcx, dword_1802692E0
 * 000000018004A665: call    _Init_thread_header
 * 000000018004A66A: cmp     cs:dword_1802692E0, r14d
 * 000000018004A671: jnz     loc_18004A742
 * 000000018004A677: lea     rax, unk_18018CF90
 * 000000018004A67E: mov     qword ptr [rbp+9E20h+var_99B0], rax
 * 000000018004A685: lea     rax, unk_1801905AC
 * 000000018004A68C: mov     qword ptr [rbp+9E20h+var_99B0+8], rax
 * 000000018004A693: movups  xmm0, [rbp+9E20h+var_99B0]
 * 000000018004A69A: movups  [rbp+9E20h+var_7FD8], xmm0
 * 000000018004A6A1: mov     dword ptr [rbp+9E20h+var_7FC8], r13d
 * 000000018004A6A8: mov     dword ptr [rbp+9E20h+var_7FC8+4], esi
 * 000000018004A6AE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A6B3: movups  xmm0, [rbp+9E20h+var_7FC8]
 * 000000018004A6BA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A6BF: call    sub_1800455D0
 * 000000018004A6C4: mov     r8, rax
 * 000000018004A6C7: mov     r9d, r12d
 * 000000018004A6CA: mov     edx, 114h
 * 000000018004A6CF: lea     rcx, [rbp+9E20h+var_51A8]; Src
 * 000000018004A6D6: call    sub_1800D44B8
 * 000000018004A6DB: nop
 * 000000018004A6DC: mov     r8, rax
 * 000000018004A6DF: lea     rdx, aStandardshader_82; "StandardShader/ShaderModel40/"
 * 000000018004A6E6: lea     rcx, [rbp+9E20h+var_51C8]
 * 000000018004A6ED: call    sub_1800453AC
 * 000000018004A6F2: nop
 * 000000018004A6F3: lea     r8, aPixel_80; "/Pixel"
 * 000000018004A6FA: mov     rdx, rax
 * 000000018004A6FD: lea     rcx, [rbp+9E20h+var_51E8]
 * 000000018004A704: call    sub_18002BF78
 * 000000018004A709: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A70E: mov     rcx, rax
 * 000000018004A711: call    sub_1800D45A4
 * 000000018004A716: mov     cs:byte_1802692DC, al
 * 000000018004A71C: lea     rcx, [rbp+9E20h+var_51C8]; void *
 * 000000018004A723: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A728: nop
 * 000000018004A729: lea     rcx, [rbp+9E20h+var_51A8]; void *
 * 000000018004A730: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A735: nop
 * 000000018004A736: lea     rcx, dword_1802692E0
 * 000000018004A73D: call    _Init_thread_footer
 * 000000018004A742: mov     rax, [rdi+rbx*8]
 * 000000018004A746: mov     eax, [r15+rax]
 * 000000018004A74A: cmp     cs:dword_1802692E8, eax
 * 000000018004A750: jle     loc_18004A83A
 * 000000018004A756: lea     rcx, dword_1802692E8
 * 000000018004A75D: call    _Init_thread_header
 * 000000018004A762: cmp     cs:dword_1802692E8, r14d
 * 000000018004A769: jnz     loc_18004A83A
 * 000000018004A76F: lea     rax, unk_18018CF90
 * 000000018004A776: mov     qword ptr [rbp+9E20h+var_99A0], rax
 * 000000018004A77D: lea     rax, unk_1801905AC
 * 000000018004A784: mov     qword ptr [rbp+9E20h+var_99A0+8], rax
 * 000000018004A78B: movups  xmm0, [rbp+9E20h+var_99A0]
 * 000000018004A792: movups  [rbp+9E20h+var_7FB8], xmm0
 * 000000018004A799: mov     dword ptr [rbp+9E20h+var_7FA8], r13d
 * 000000018004A7A0: mov     dword ptr [rbp+9E20h+var_7FA8+4], esi
 * 000000018004A7A6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A7AB: movups  xmm0, [rbp+9E20h+var_7FA8]
 * 000000018004A7B2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A7B7: call    sub_1800455D0
 * 000000018004A7BC: mov     r8, rax
 * 000000018004A7BF: mov     r9d, r12d
 * 000000018004A7C2: mov     edx, 116h
 * 000000018004A7C7: lea     rcx, [rbp+9E20h+var_5148]; Src
 * 000000018004A7CE: call    sub_1800D44B8
 * 000000018004A7D3: nop
 * 000000018004A7D4: mov     r8, rax
 * 000000018004A7D7: lea     rdx, aStandardshader_83; "StandardShader/ShaderModel40/"
 * 000000018004A7DE: lea     rcx, [rbp+9E20h+var_5168]
 * 000000018004A7E5: call    sub_1800453AC
 * 000000018004A7EA: nop
 * 000000018004A7EB: lea     r8, aPixel_81; "/Pixel"
 * 000000018004A7F2: mov     rdx, rax
 * 000000018004A7F5: lea     rcx, [rbp+9E20h+var_5188]
 * 000000018004A7FC: call    sub_18002BF78
 * 000000018004A801: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A806: mov     rcx, rax
 * 000000018004A809: call    sub_1800D45A4
 * 000000018004A80E: mov     cs:byte_1802692E4, al
 * 000000018004A814: lea     rcx, [rbp+9E20h+var_5168]; void *
 * 000000018004A81B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A820: nop
 * 000000018004A821: lea     rcx, [rbp+9E20h+var_5148]; void *
 * 000000018004A828: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A82D: nop
 * 000000018004A82E: lea     rcx, dword_1802692E8
 * 000000018004A835: call    _Init_thread_footer
 * 000000018004A83A: mov     rax, [rdi+rbx*8]
 * 000000018004A83E: mov     eax, [r15+rax]
 * 000000018004A842: cmp     cs:dword_1802692F0, eax
 * 000000018004A848: jle     loc_18004A932
 * 000000018004A84E: lea     rcx, dword_1802692F0
 * 000000018004A855: call    _Init_thread_header
 * 000000018004A85A: cmp     cs:dword_1802692F0, r14d
 * 000000018004A861: jnz     loc_18004A932
 * 000000018004A867: lea     rax, unk_1801905B0
 * 000000018004A86E: mov     qword ptr [rbp+9E20h+var_9990], rax
 * 000000018004A875: lea     rax, unk_18019706C
 * 000000018004A87C: mov     qword ptr [rbp+9E20h+var_9990+8], rax
 * 000000018004A883: movups  xmm0, [rbp+9E20h+var_9990]
 * 000000018004A88A: movups  [rbp+9E20h+var_7F98], xmm0
 * 000000018004A891: mov     dword ptr [rbp+9E20h+var_7F88], r13d
 * 000000018004A898: mov     dword ptr [rbp+9E20h+var_7F88+4], esi
 * 000000018004A89E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A8A3: movups  xmm0, [rbp+9E20h+var_7F88]
 * 000000018004A8AA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A8AF: call    sub_1800455D0
 * 000000018004A8B4: mov     r8, rax
 * 000000018004A8B7: mov     r9d, r12d
 * 000000018004A8BA: mov     edx, 118h
 * 000000018004A8BF: lea     rcx, [rbp+9E20h+var_50E8]; Src
 * 000000018004A8C6: call    sub_1800D44B8
 * 000000018004A8CB: nop
 * 000000018004A8CC: mov     r8, rax
 * 000000018004A8CF: lea     rdx, aStandardshader_84; "StandardShader/ShaderModel40/"
 * 000000018004A8D6: lea     rcx, [rbp+9E20h+var_5108]
 * 000000018004A8DD: call    sub_1800453AC
 * 000000018004A8E2: nop
 * 000000018004A8E3: lea     r8, aPixel_82; "/Pixel"
 * 000000018004A8EA: mov     rdx, rax
 * 000000018004A8ED: lea     rcx, [rbp+9E20h+var_5128]
 * 000000018004A8F4: call    sub_18002BF78
 * 000000018004A8F9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A8FE: mov     rcx, rax
 * 000000018004A901: call    sub_1800D45A4
 * 000000018004A906: mov     cs:byte_1802692EC, al
 * 000000018004A90C: lea     rcx, [rbp+9E20h+var_5108]; void *
 * 000000018004A913: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A918: nop
 * 000000018004A919: lea     rcx, [rbp+9E20h+var_50E8]; void *
 * 000000018004A920: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A925: nop
 * 000000018004A926: lea     rcx, dword_1802692F0
 * 000000018004A92D: call    _Init_thread_footer
 * 000000018004A932: mov     rax, [rdi+rbx*8]
 * 000000018004A936: mov     eax, [r15+rax]
 * 000000018004A93A: cmp     cs:dword_1802692F8, eax
 * 000000018004A940: jle     loc_18004AA2A
 * 000000018004A946: lea     rcx, dword_1802692F8
 * 000000018004A94D: call    _Init_thread_header
 * 000000018004A952: cmp     cs:dword_1802692F8, r14d
 * 000000018004A959: jnz     loc_18004AA2A
 * 000000018004A95F: lea     rax, unk_1801905B0
 * 000000018004A966: mov     qword ptr [rbp+9E20h+var_9980], rax
 * 000000018004A96D: lea     rax, unk_18019706C
 * 000000018004A974: mov     qword ptr [rbp+9E20h+var_9980+8], rax
 * 000000018004A97B: movups  xmm0, [rbp+9E20h+var_9980]
 * 000000018004A982: movups  [rbp+9E20h+var_7F78], xmm0
 * 000000018004A989: mov     dword ptr [rbp+9E20h+var_7F68], r13d
 * 000000018004A990: mov     dword ptr [rbp+9E20h+var_7F68+4], esi
 * 000000018004A996: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A99B: movups  xmm0, [rbp+9E20h+var_7F68]
 * 000000018004A9A2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A9A7: call    sub_1800455D0
 * 000000018004A9AC: mov     r8, rax
 * 000000018004A9AF: mov     r9d, r12d
 * 000000018004A9B2: mov     edx, 11Ah
 * 000000018004A9B7: lea     rcx, [rbp+9E20h+var_5088]; Src
 * 000000018004A9BE: call    sub_1800D44B8
 * 000000018004A9C3: nop
 * 000000018004A9C4: mov     r8, rax
 * 000000018004A9C7: lea     rdx, aStandardshader_85; "StandardShader/ShaderModel40/"
 * 000000018004A9CE: lea     rcx, [rbp+9E20h+var_50A8]
 * 000000018004A9D5: call    sub_1800453AC
 * 000000018004A9DA: nop
 * 000000018004A9DB: lea     r8, aPixel_83; "/Pixel"
 * 000000018004A9E2: mov     rdx, rax
 * 000000018004A9E5: lea     rcx, [rbp+9E20h+var_50C8]
 * 000000018004A9EC: call    sub_18002BF78
 * 000000018004A9F1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A9F6: mov     rcx, rax
 * 000000018004A9F9: call    sub_1800D45A4
 * 000000018004A9FE: mov     cs:byte_1802692F4, al
 * 000000018004AA04: lea     rcx, [rbp+9E20h+var_50A8]; void *
 * 000000018004AA0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AA10: nop
 * 000000018004AA11: lea     rcx, [rbp+9E20h+var_5088]; void *
 * 000000018004AA18: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AA1D: nop
 * 000000018004AA1E: lea     rcx, dword_1802692F8
 * 000000018004AA25: call    _Init_thread_footer
 * 000000018004AA2A: mov     rax, [rdi+rbx*8]
 * 000000018004AA2E: mov     eax, [r15+rax]
 * 000000018004AA32: cmp     cs:dword_180269300, eax
 * 000000018004AA38: jle     loc_18004AB22
 * 000000018004AA3E: lea     rcx, dword_180269300
 * 000000018004AA45: call    _Init_thread_header
 * 000000018004AA4A: cmp     cs:dword_180269300, r14d
 * 000000018004AA51: jnz     loc_18004AB22
 * 000000018004AA57: lea     rax, unk_1801761B0
 * 000000018004AA5E: mov     qword ptr [rbp+9E20h+var_9970], rax
 * 000000018004AA65: lea     rax, unk_18017C8DC
 * 000000018004AA6C: mov     qword ptr [rbp+9E20h+var_9970+8], rax
 * 000000018004AA73: movups  xmm0, [rbp+9E20h+var_9970]
 * 000000018004AA7A: movups  [rbp+9E20h+var_7F58], xmm0
 * 000000018004AA81: mov     dword ptr [rbp+9E20h+var_7F48], r13d
 * 000000018004AA88: mov     dword ptr [rbp+9E20h+var_7F48+4], esi
 * 000000018004AA8E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AA93: movups  xmm0, [rbp+9E20h+var_7F48]
 * 000000018004AA9A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AA9F: call    sub_1800455D0
 * 000000018004AAA4: mov     r8, rax
 * 000000018004AAA7: mov     r9d, r12d
 * 000000018004AAAA: mov     edx, 120h
 * 000000018004AAAF: lea     rcx, [rbp+9E20h+var_5028]; Src
 * 000000018004AAB6: call    sub_1800D44B8
 * 000000018004AABB: nop
 * 000000018004AABC: mov     r8, rax
 * 000000018004AABF: lea     rdx, aStandardshader_86; "StandardShader/ShaderModel40/"
 * 000000018004AAC6: lea     rcx, [rbp+9E20h+var_5048]
 * 000000018004AACD: call    sub_1800453AC
 * 000000018004AAD2: nop
 * 000000018004AAD3: lea     r8, aPixel_84; "/Pixel"
 * 000000018004AADA: mov     rdx, rax
 * 000000018004AADD: lea     rcx, [rbp+9E20h+var_5068]
 * 000000018004AAE4: call    sub_18002BF78
 * 000000018004AAE9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004AAEE: mov     rcx, rax
 * 000000018004AAF1: call    sub_1800D45A4
 * 000000018004AAF6: mov     cs:byte_1802692FC, al
 * 000000018004AAFC: lea     rcx, [rbp+9E20h+var_5048]; void *
 * 000000018004AB03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AB08: nop
 * 000000018004AB09: lea     rcx, [rbp+9E20h+var_5028]; void *
 * 000000018004AB10: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AB15: nop
 * 000000018004AB16: lea     rcx, dword_180269300
 * 000000018004AB1D: call    _Init_thread_footer
 * 000000018004AB22: mov     rax, [rdi+rbx*8]
 * 000000018004AB26: mov     eax, [r15+rax]
 * 000000018004AB2A: cmp     cs:dword_180269308, eax
 * 000000018004AB30: jle     loc_18004AC1A
 * 000000018004AB36: lea     rcx, dword_180269308
 * 000000018004AB3D: call    _Init_thread_header
 * 000000018004AB42: cmp     cs:dword_180269308, r14d
 * 000000018004AB49: jnz     loc_18004AC1A
 * 000000018004AB4F: lea     rax, unk_1801761B0
 * 000000018004AB56: mov     qword ptr [rbp+9E20h+var_9960], rax
 * 000000018004AB5D: lea     rax, unk_18017C8DC
 * 000000018004AB64: mov     qword ptr [rbp+9E20h+var_9960+8], rax
 * 000000018004AB6B: movups  xmm0, [rbp+9E20h+var_9960]
 * 000000018004AB72: movups  [rbp+9E20h+var_7F38], xmm0
 * 000000018004AB79: mov     dword ptr [rbp+9E20h+var_7F28], r13d
 * 000000018004AB80: mov     dword ptr [rbp+9E20h+var_7F28+4], esi
 * 000000018004AB86: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AB8B: movups  xmm0, [rbp+9E20h+var_7F28]
 * 000000018004AB92: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AB97: call    sub_1800455D0
 * 000000018004AB9C: mov     r8, rax
 * 000000018004AB9F: mov     r9d, r12d
 * 000000018004ABA2: mov     edx, 122h
 * 000000018004ABA7: lea     rcx, [rbp+9E20h+var_4FC8]; Src
 * 000000018004ABAE: call    sub_1800D44B8
 * 000000018004ABB3: nop
 * 000000018004ABB4: mov     r8, rax
 * 000000018004ABB7: lea     rdx, aStandardshader_87; "StandardShader/ShaderModel40/"
 * 000000018004ABBE: lea     rcx, [rbp+9E20h+var_4FE8]
 * 000000018004ABC5: call    sub_1800453AC
 * 000000018004ABCA: nop
 * 000000018004ABCB: lea     r8, aPixel_85; "/Pixel"
 * 000000018004ABD2: mov     rdx, rax
 * 000000018004ABD5: lea     rcx, [rbp+9E20h+var_5008]
 * 000000018004ABDC: call    sub_18002BF78
 * 000000018004ABE1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004ABE6: mov     rcx, rax
 * 000000018004ABE9: call    sub_1800D45A4
 * 000000018004ABEE: mov     cs:byte_180269304, al
 * 000000018004ABF4: lea     rcx, [rbp+9E20h+var_4FE8]; void *
 * 000000018004ABFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AC00: nop
 * 000000018004AC01: lea     rcx, [rbp+9E20h+var_4FC8]; void *
 * 000000018004AC08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AC0D: nop
 * 000000018004AC0E: lea     rcx, dword_180269308
 * 000000018004AC15: call    _Init_thread_footer
 * 000000018004AC1A: mov     rax, [rdi+rbx*8]
 * 000000018004AC1E: mov     eax, [r15+rax]
 * 000000018004AC22: cmp     cs:dword_180269310, eax
 * 000000018004AC28: jle     loc_18004AD12
 * 000000018004AC2E: lea     rcx, dword_180269310
 * 000000018004AC35: call    _Init_thread_header
 * 000000018004AC3A: cmp     cs:dword_180269310, r14d
 * 000000018004AC41: jnz     loc_18004AD12
 * 000000018004AC47: lea     rax, unk_18017FDC0
 * 000000018004AC4E: mov     qword ptr [rbp+9E20h+var_9950], rax
 * 000000018004AC55: lea     rax, unk_18018667C
 * 000000018004AC5C: mov     qword ptr [rbp+9E20h+var_9950+8], rax
 * 000000018004AC63: movups  xmm0, [rbp+9E20h+var_9950]
 * 000000018004AC6A: movups  [rbp+9E20h+var_7F18], xmm0
 * 000000018004AC71: mov     dword ptr [rbp+9E20h+var_7F08], r13d
 * 000000018004AC78: mov     dword ptr [rbp+9E20h+var_7F08+4], esi
 * 000000018004AC7E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AC83: movups  xmm0, [rbp+9E20h+var_7F08]
 * 000000018004AC8A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AC8F: call    sub_1800455D0
 * 000000018004AC94: mov     r8, rax
 * 000000018004AC97: mov     r9d, r12d
 * 000000018004AC9A: mov     edx, 128h
 * 000000018004AC9F: lea     rcx, [rbp+9E20h+var_4F68]; Src
 * 000000018004ACA6: call    sub_1800D44B8
 * 000000018004ACAB: nop
 * 000000018004ACAC: mov     r8, rax
 * 000000018004ACAF: lea     rdx, aStandardshader_88; "StandardShader/ShaderModel40/"
 * 000000018004ACB6: lea     rcx, [rbp+9E20h+var_4F88]
 * 000000018004ACBD: call    sub_1800453AC
 * 000000018004ACC2: nop
 * 000000018004ACC3: lea     r8, aPixel_86; "/Pixel"
 * 000000018004ACCA: mov     rdx, rax
 * 000000018004ACCD: lea     rcx, [rbp+9E20h+var_4FA8]
 * 000000018004ACD4: call    sub_18002BF78
 * 000000018004ACD9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004ACDE: mov     rcx, rax
 * 000000018004ACE1: call    sub_1800D45A4
 * 000000018004ACE6: mov     cs:byte_18026930C, al
 * 000000018004ACEC: lea     rcx, [rbp+9E20h+var_4F88]; void *
 * 000000018004ACF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ACF8: nop
 * 000000018004ACF9: lea     rcx, [rbp+9E20h+var_4F68]; void *
 * 000000018004AD00: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AD05: nop
 * 000000018004AD06: lea     rcx, dword_180269310
 * 000000018004AD0D: call    _Init_thread_footer
 * 000000018004AD12: mov     rax, [rdi+rbx*8]
 * 000000018004AD16: mov     eax, [r15+rax]
 * 000000018004AD1A: cmp     cs:dword_180269318, eax
 * 000000018004AD20: jle     loc_18004AE0A
 * 000000018004AD26: lea     rcx, dword_180269318
 * 000000018004AD2D: call    _Init_thread_header
 * 000000018004AD32: cmp     cs:dword_180269318, r14d
 * 000000018004AD39: jnz     loc_18004AE0A
 * 000000018004AD3F: lea     rax, unk_18017FDC0
 * 000000018004AD46: mov     qword ptr [rbp+9E20h+var_9940], rax
 * 000000018004AD4D: lea     rax, unk_18018667C
 * 000000018004AD54: mov     qword ptr [rbp+9E20h+var_9940+8], rax
 * 000000018004AD5B: movups  xmm0, [rbp+9E20h+var_9940]
 * 000000018004AD62: movups  [rbp+9E20h+var_7EF8], xmm0
 * 000000018004AD69: mov     dword ptr [rbp+9E20h+var_7EE8], r13d
 * 000000018004AD70: mov     dword ptr [rbp+9E20h+var_7EE8+4], esi
 * 000000018004AD76: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AD7B: movups  xmm0, [rbp+9E20h+var_7EE8]
 * 000000018004AD82: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AD87: call    sub_1800455D0
 * 000000018004AD8C: mov     r8, rax
 * 000000018004AD8F: mov     r9d, r12d
 * 000000018004AD92: mov     edx, 12Ah
 * 000000018004AD97: lea     rcx, [rbp+9E20h+var_4F08]; Src
 * 000000018004AD9E: call    sub_1800D44B8
 * 000000018004ADA3: nop
 * 000000018004ADA4: mov     r8, rax
 * 000000018004ADA7: lea     rdx, aStandardshader_89; "StandardShader/ShaderModel40/"
 * 000000018004ADAE: lea     rcx, [rbp+9E20h+var_4F28]
 * 000000018004ADB5: call    sub_1800453AC
 * 000000018004ADBA: nop
 * 000000018004ADBB: lea     r8, aPixel_87; "/Pixel"
 * 000000018004ADC2: mov     rdx, rax
 * 000000018004ADC5: lea     rcx, [rbp+9E20h+var_4F48]
 * 000000018004ADCC: call    sub_18002BF78
 * 000000018004ADD1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004ADD6: mov     rcx, rax
 * 000000018004ADD9: call    sub_1800D45A4
 * 000000018004ADDE: mov     cs:byte_180269314, al
 * 000000018004ADE4: lea     rcx, [rbp+9E20h+var_4F28]; void *
 * 000000018004ADEB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ADF0: nop
 * 000000018004ADF1: lea     rcx, [rbp+9E20h+var_4F08]; void *
 * 000000018004ADF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ADFD: nop
 * 000000018004ADFE: lea     rcx, dword_180269318
 * 000000018004AE05: call    _Init_thread_footer
 * 000000018004AE0A: mov     rax, [rdi+rbx*8]
 * 000000018004AE0E: mov     eax, [r15+rax]
 * 000000018004AE12: cmp     cs:dword_180269320, eax
 * 000000018004AE18: jle     loc_18004AF02
 * 000000018004AE1E: lea     rcx, dword_180269320
 * 000000018004AE25: call    _Init_thread_header
 * 000000018004AE2A: cmp     cs:dword_180269320, r14d
 * 000000018004AE31: jnz     loc_18004AF02
 * 000000018004AE37: lea     rax, unk_180186680
 * 000000018004AE3E: mov     qword ptr [rbp+9E20h+var_9930], rax
 * 000000018004AE45: lea     rax, unk_18018CF88
 * 000000018004AE4C: mov     qword ptr [rbp+9E20h+var_9930+8], rax
 * 000000018004AE53: movups  xmm0, [rbp+9E20h+var_9930]
 * 000000018004AE5A: movups  [rbp+9E20h+var_7ED8], xmm0
 * 000000018004AE61: mov     dword ptr [rbp+9E20h+var_7EC8], r13d
 * 000000018004AE68: mov     dword ptr [rbp+9E20h+var_7EC8+4], esi
 * 000000018004AE6E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AE73: movups  xmm0, [rbp+9E20h+var_7EC8]
 * 000000018004AE7A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AE7F: call    sub_1800455D0
 * 000000018004AE84: mov     r8, rax
 * 000000018004AE87: mov     r9d, r12d
 * 000000018004AE8A: mov     edx, 130h
 * 000000018004AE8F: lea     rcx, [rbp+9E20h+var_4EA8]; Src
 * 000000018004AE96: call    sub_1800D44B8
 * 000000018004AE9B: nop
 * 000000018004AE9C: mov     r8, rax
 * 000000018004AE9F: lea     rdx, aStandardshader_90; "StandardShader/ShaderModel40/"
 * 000000018004AEA6: lea     rcx, [rbp+9E20h+var_4EC8]
 * 000000018004AEAD: call    sub_1800453AC
 * 000000018004AEB2: nop
 * 000000018004AEB3: lea     r8, aPixel_88; "/Pixel"
 * 000000018004AEBA: mov     rdx, rax
 * 000000018004AEBD: lea     rcx, [rbp+9E20h+var_4EE8]
 * 000000018004AEC4: call    sub_18002BF78
 * 000000018004AEC9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004AECE: mov     rcx, rax
 * 000000018004AED1: call    sub_1800D45A4
 * 000000018004AED6: mov     cs:byte_18026931C, al
 * 000000018004AEDC: lea     rcx, [rbp+9E20h+var_4EC8]; void *
 * 000000018004AEE3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AEE8: nop
 * 000000018004AEE9: lea     rcx, [rbp+9E20h+var_4EA8]; void *
 * 000000018004AEF0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AEF5: nop
 * 000000018004AEF6: lea     rcx, dword_180269320
 * 000000018004AEFD: call    _Init_thread_footer
 * 000000018004AF02: mov     rax, [rdi+rbx*8]
 * 000000018004AF06: mov     eax, [r15+rax]
 * 000000018004AF0A: cmp     cs:dword_180269328, eax
 * 000000018004AF10: jle     loc_18004AFFA
 * 000000018004AF16: lea     rcx, dword_180269328
 * 000000018004AF1D: call    _Init_thread_header
 * 000000018004AF22: cmp     cs:dword_180269328, r14d
 * 000000018004AF29: jnz     loc_18004AFFA
 * 000000018004AF2F: lea     rax, unk_180186680
 * 000000018004AF36: mov     qword ptr [rbp+9E20h+var_9920], rax
 * 000000018004AF3D: lea     rax, unk_18018CF88
 * 000000018004AF44: mov     qword ptr [rbp+9E20h+var_9920+8], rax
 * 000000018004AF4B: movups  xmm0, [rbp+9E20h+var_9920]
 * 000000018004AF52: movups  [rbp+9E20h+var_7EB8], xmm0
 * 000000018004AF59: mov     dword ptr [rbp+9E20h+var_7EA8], r13d
 * 000000018004AF60: mov     dword ptr [rbp+9E20h+var_7EA8+4], esi
 * 000000018004AF66: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AF6B: movups  xmm0, [rbp+9E20h+var_7EA8]
 * 000000018004AF72: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AF77: call    sub_1800455D0
 * 000000018004AF7C: mov     r8, rax
 * 000000018004AF7F: mov     r9d, r12d
 * 000000018004AF82: mov     edx, 132h
 * 000000018004AF87: lea     rcx, [rbp+9E20h+var_4E48]; Src
 * 000000018004AF8E: call    sub_1800D44B8
 * 000000018004AF93: nop
 * 000000018004AF94: mov     r8, rax
 * 000000018004AF97: lea     rdx, aStandardshader_91; "StandardShader/ShaderModel40/"
 * 000000018004AF9E: lea     rcx, [rbp+9E20h+var_4E68]
 * 000000018004AFA5: call    sub_1800453AC
 * 000000018004AFAA: nop
 * 000000018004AFAB: lea     r8, aPixel_89; "/Pixel"
 * 000000018004AFB2: mov     rdx, rax
 * 000000018004AFB5: lea     rcx, [rbp+9E20h+var_4E88]
 * 000000018004AFBC: call    sub_18002BF78
 * 000000018004AFC1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004AFC6: mov     rcx, rax
 * 000000018004AFC9: call    sub_1800D45A4
 * 000000018004AFCE: mov     cs:byte_180269324, al
 * 000000018004AFD4: lea     rcx, [rbp+9E20h+var_4E68]; void *
 * 000000018004AFDB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AFE0: nop
 * 000000018004AFE1: lea     rcx, [rbp+9E20h+var_4E48]; void *
 * 000000018004AFE8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AFED: nop
 * 000000018004AFEE: lea     rcx, dword_180269328
 * 000000018004AFF5: call    _Init_thread_footer
 * 000000018004AFFA: mov     rax, [rdi+rbx*8]
 * 000000018004AFFE: mov     eax, [r15+rax]
 * 000000018004B002: cmp     cs:dword_180269330, eax
 * 000000018004B008: jle     loc_18004B0F2
 * 000000018004B00E: lea     rcx, dword_180269330
 * 000000018004B015: call    _Init_thread_header
 * 000000018004B01A: cmp     cs:dword_180269330, r14d
 * 000000018004B021: jnz     loc_18004B0F2
 * 000000018004B027: lea     rax, unk_1801905B0
 * 000000018004B02E: mov     qword ptr [rbp+9E20h+var_9910], rax
 * 000000018004B035: lea     rax, unk_18019706C
 * 000000018004B03C: mov     qword ptr [rbp+9E20h+var_9910+8], rax
 * 000000018004B043: movups  xmm0, [rbp+9E20h+var_9910]
 * 000000018004B04A: movups  [rbp+9E20h+var_7E98], xmm0
 * 000000018004B051: mov     dword ptr [rbp+9E20h+var_7E88], r13d
 * 000000018004B058: mov     dword ptr [rbp+9E20h+var_7E88+4], esi
 * 000000018004B05E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B063: movups  xmm0, [rbp+9E20h+var_7E88]
 * 000000018004B06A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B06F: call    sub_1800455D0
 * 000000018004B074: mov     r8, rax
 * 000000018004B077: mov     r9d, r12d
 * 000000018004B07A: mov     edx, 138h
 * 000000018004B07F: lea     rcx, [rbp+9E20h+var_4DE8]; Src
 * 000000018004B086: call    sub_1800D44B8
 * 000000018004B08B: nop
 * 000000018004B08C: mov     r8, rax
 * 000000018004B08F: lea     rdx, aStandardshader_92; "StandardShader/ShaderModel40/"
 * 000000018004B096: lea     rcx, [rbp+9E20h+var_4E08]
 * 000000018004B09D: call    sub_1800453AC
 * 000000018004B0A2: nop
 * 000000018004B0A3: lea     r8, aPixel_90; "/Pixel"
 * 000000018004B0AA: mov     rdx, rax
 * 000000018004B0AD: lea     rcx, [rbp+9E20h+var_4E28]
 * 000000018004B0B4: call    sub_18002BF78
 * 000000018004B0B9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B0BE: mov     rcx, rax
 * 000000018004B0C1: call    sub_1800D45A4
 * 000000018004B0C6: mov     cs:byte_18026932C, al
 * 000000018004B0CC: lea     rcx, [rbp+9E20h+var_4E08]; void *
 * 000000018004B0D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B0D8: nop
 * 000000018004B0D9: lea     rcx, [rbp+9E20h+var_4DE8]; void *
 * 000000018004B0E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B0E5: nop
 * 000000018004B0E6: lea     rcx, dword_180269330
 * 000000018004B0ED: call    _Init_thread_footer
 * 000000018004B0F2: mov     rax, [rdi+rbx*8]
 * 000000018004B0F6: mov     eax, [r15+rax]
 * 000000018004B0FA: cmp     cs:dword_180269338, eax
 * 000000018004B100: jle     loc_18004B1EA
 * 000000018004B106: lea     rcx, dword_180269338
 * 000000018004B10D: call    _Init_thread_header
 * 000000018004B112: cmp     cs:dword_180269338, r14d
 * 000000018004B119: jnz     loc_18004B1EA
 * 000000018004B11F: lea     rax, unk_1801905B0
 * 000000018004B126: mov     qword ptr [rbp+9E20h+var_9900], rax
 * 000000018004B12D: lea     rax, unk_18019706C
 * 000000018004B134: mov     qword ptr [rbp+9E20h+var_9900+8], rax
 * 000000018004B13B: movups  xmm0, [rbp+9E20h+var_9900]
 * 000000018004B142: movups  [rbp+9E20h+var_7E78], xmm0
 * 000000018004B149: mov     dword ptr [rbp+9E20h+var_7E68], r13d
 * 000000018004B150: mov     dword ptr [rbp+9E20h+var_7E68+4], esi
 * 000000018004B156: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B15B: movups  xmm0, [rbp+9E20h+var_7E68]
 * 000000018004B162: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B167: call    sub_1800455D0
 * 000000018004B16C: mov     r8, rax
 * 000000018004B16F: mov     r9d, r12d
 * 000000018004B172: mov     edx, 13Ah
 * 000000018004B177: lea     rcx, [rbp+9E20h+var_4D88]; Src
 * 000000018004B17E: call    sub_1800D44B8
 * 000000018004B183: nop
 * 000000018004B184: mov     r8, rax
 * 000000018004B187: lea     rdx, aStandardshader_93; "StandardShader/ShaderModel40/"
 * 000000018004B18E: lea     rcx, [rbp+9E20h+var_4DA8]
 * 000000018004B195: call    sub_1800453AC
 * 000000018004B19A: nop
 * 000000018004B19B: lea     r8, aPixel_91; "/Pixel"
 * 000000018004B1A2: mov     rdx, rax
 * 000000018004B1A5: lea     rcx, [rbp+9E20h+var_4DC8]
 * 000000018004B1AC: call    sub_18002BF78
 * 000000018004B1B1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B1B6: mov     rcx, rax
 * 000000018004B1B9: call    sub_1800D45A4
 * 000000018004B1BE: mov     cs:byte_180269334, al
 * 000000018004B1C4: lea     rcx, [rbp+9E20h+var_4DA8]; void *
 * 000000018004B1CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B1D0: nop
 * 000000018004B1D1: lea     rcx, [rbp+9E20h+var_4D88]; void *
 * 000000018004B1D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B1DD: nop
 * 000000018004B1DE: lea     rcx, dword_180269338
 * 000000018004B1E5: call    _Init_thread_footer
 * 000000018004B1EA: mov     rax, [rdi+rbx*8]
 * 000000018004B1EE: mov     eax, [r15+rax]
 * 000000018004B1F2: cmp     cs:dword_180269340, eax
 * 000000018004B1F8: jle     loc_18004B2E2
 * 000000018004B1FE: lea     rcx, dword_180269340
 * 000000018004B205: call    _Init_thread_header
 * 000000018004B20A: cmp     cs:dword_180269340, r14d
 * 000000018004B211: jnz     loc_18004B2E2
 * 000000018004B217: lea     rax, unk_1801761B0
 * 000000018004B21E: mov     qword ptr [rbp+9E20h+var_98F0], rax
 * 000000018004B225: lea     rax, unk_18017C8DC
 * 000000018004B22C: mov     qword ptr [rbp+9E20h+var_98F0+8], rax
 * 000000018004B233: movups  xmm0, [rbp+9E20h+var_98F0]
 * 000000018004B23A: movups  [rbp+9E20h+var_7E58], xmm0
 * 000000018004B241: mov     dword ptr [rbp+9E20h+var_7E48], r13d
 * 000000018004B248: mov     dword ptr [rbp+9E20h+var_7E48+4], esi
 * 000000018004B24E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B253: movups  xmm0, [rbp+9E20h+var_7E48]
 * 000000018004B25A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B25F: call    sub_1800455D0
 * 000000018004B264: mov     r8, rax
 * 000000018004B267: mov     r9d, r12d
 * 000000018004B26A: mov     edx, 140h
 * 000000018004B26F: lea     rcx, [rbp+9E20h+var_4D28]; Src
 * 000000018004B276: call    sub_1800D44B8
 * 000000018004B27B: nop
 * 000000018004B27C: mov     r8, rax
 * 000000018004B27F: lea     rdx, aStandardshader_94; "StandardShader/ShaderModel40/"
 * 000000018004B286: lea     rcx, [rbp+9E20h+var_4D48]
 * 000000018004B28D: call    sub_1800453AC
 * 000000018004B292: nop
 * 000000018004B293: lea     r8, aPixel_92; "/Pixel"
 * 000000018004B29A: mov     rdx, rax
 * 000000018004B29D: lea     rcx, [rbp+9E20h+var_4D68]
 * 000000018004B2A4: call    sub_18002BF78
 * 000000018004B2A9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B2AE: mov     rcx, rax
 * 000000018004B2B1: call    sub_1800D45A4
 * 000000018004B2B6: mov     cs:byte_18026933C, al
 * 000000018004B2BC: lea     rcx, [rbp+9E20h+var_4D48]; void *
 * 000000018004B2C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B2C8: nop
 * 000000018004B2C9: lea     rcx, [rbp+9E20h+var_4D28]; void *
 * 000000018004B2D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B2D5: nop
 * 000000018004B2D6: lea     rcx, dword_180269340
 * 000000018004B2DD: call    _Init_thread_footer
 * 000000018004B2E2: mov     rax, [rdi+rbx*8]
 * 000000018004B2E6: mov     eax, [r15+rax]
 * 000000018004B2EA: cmp     cs:dword_180269348, eax
 * 000000018004B2F0: jle     loc_18004B3DA
 * 000000018004B2F6: lea     rcx, dword_180269348
 * 000000018004B2FD: call    _Init_thread_header
 * 000000018004B302: cmp     cs:dword_180269348, r14d
 * 000000018004B309: jnz     loc_18004B3DA
 * 000000018004B30F: lea     rax, unk_1801761B0
 * 000000018004B316: mov     qword ptr [rbp+9E20h+var_98E0], rax
 * 000000018004B31D: lea     rax, unk_18017C8DC
 * 000000018004B324: mov     qword ptr [rbp+9E20h+var_98E0+8], rax
 * 000000018004B32B: movups  xmm0, [rbp+9E20h+var_98E0]
 * 000000018004B332: movups  [rbp+9E20h+var_7E38], xmm0
 * 000000018004B339: mov     dword ptr [rbp+9E20h+var_7E28], r13d
 * 000000018004B340: mov     dword ptr [rbp+9E20h+var_7E28+4], esi
 * 000000018004B346: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B34B: movups  xmm0, [rbp+9E20h+var_7E28]
 * 000000018004B352: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B357: call    sub_1800455D0
 * 000000018004B35C: mov     r8, rax
 * 000000018004B35F: mov     r9d, r12d
 * 000000018004B362: mov     edx, 142h
 * 000000018004B367: lea     rcx, [rbp+9E20h+var_4CC8]; Src
 * 000000018004B36E: call    sub_1800D44B8
 * 000000018004B373: nop
 * 000000018004B374: mov     r8, rax
 * 000000018004B377: lea     rdx, aStandardshader_95; "StandardShader/ShaderModel40/"
 * 000000018004B37E: lea     rcx, [rbp+9E20h+var_4CE8]
 * 000000018004B385: call    sub_1800453AC
 * 000000018004B38A: nop
 * 000000018004B38B: lea     r8, aPixel_93; "/Pixel"
 * 000000018004B392: mov     rdx, rax
 * 000000018004B395: lea     rcx, [rbp+9E20h+var_4D08]
 * 000000018004B39C: call    sub_18002BF78
 * 000000018004B3A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B3A6: mov     rcx, rax
 * 000000018004B3A9: call    sub_1800D45A4
 * 000000018004B3AE: mov     cs:byte_180269344, al
 * 000000018004B3B4: lea     rcx, [rbp+9E20h+var_4CE8]; void *
 * 000000018004B3BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B3C0: nop
 * 000000018004B3C1: lea     rcx, [rbp+9E20h+var_4CC8]; void *
 * 000000018004B3C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B3CD: nop
 * 000000018004B3CE: lea     rcx, dword_180269348
 * 000000018004B3D5: call    _Init_thread_footer
 * 000000018004B3DA: mov     rax, [rdi+rbx*8]
 * 000000018004B3DE: mov     eax, [r15+rax]
 * 000000018004B3E2: cmp     cs:dword_180269350, eax
 * 000000018004B3E8: jle     loc_18004B4D2
 * 000000018004B3EE: lea     rcx, dword_180269350
 * 000000018004B3F5: call    _Init_thread_header
 * 000000018004B3FA: cmp     cs:dword_180269350, r14d
 * 000000018004B401: jnz     loc_18004B4D2
 * 000000018004B407: lea     rax, unk_18017FDC0
 * 000000018004B40E: mov     qword ptr [rbp+9E20h+var_98D0], rax
 * 000000018004B415: lea     rax, unk_18018667C
 * 000000018004B41C: mov     qword ptr [rbp+9E20h+var_98D0+8], rax
 * 000000018004B423: movups  xmm0, [rbp+9E20h+var_98D0]
 * 000000018004B42A: movups  [rbp+9E20h+var_7E18], xmm0
 * 000000018004B431: mov     dword ptr [rbp+9E20h+var_7E08], r13d
 * 000000018004B438: mov     dword ptr [rbp+9E20h+var_7E08+4], esi
 * 000000018004B43E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B443: movups  xmm0, [rbp+9E20h+var_7E08]
 * 000000018004B44A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B44F: call    sub_1800455D0
 * 000000018004B454: mov     r8, rax
 * 000000018004B457: mov     r9d, r12d
 * 000000018004B45A: mov     edx, 148h
 * 000000018004B45F: lea     rcx, [rbp+9E20h+var_4C68]; Src
 * 000000018004B466: call    sub_1800D44B8
 * 000000018004B46B: nop
 * 000000018004B46C: mov     r8, rax
 * 000000018004B46F: lea     rdx, aStandardshader_96; "StandardShader/ShaderModel40/"
 * 000000018004B476: lea     rcx, [rbp+9E20h+var_4C88]
 * 000000018004B47D: call    sub_1800453AC
 * 000000018004B482: nop
 * 000000018004B483: lea     r8, aPixel_94; "/Pixel"
 * 000000018004B48A: mov     rdx, rax
 * 000000018004B48D: lea     rcx, [rbp+9E20h+var_4CA8]
 * 000000018004B494: call    sub_18002BF78
 * 000000018004B499: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B49E: mov     rcx, rax
 * 000000018004B4A1: call    sub_1800D45A4
 * 000000018004B4A6: mov     cs:byte_18026934C, al
 * 000000018004B4AC: lea     rcx, [rbp+9E20h+var_4C88]; void *
 * 000000018004B4B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B4B8: nop
 * 000000018004B4B9: lea     rcx, [rbp+9E20h+var_4C68]; void *
 * 000000018004B4C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B4C5: nop
 * 000000018004B4C6: lea     rcx, dword_180269350
 * 000000018004B4CD: call    _Init_thread_footer
 * 000000018004B4D2: mov     rax, [rdi+rbx*8]
 * 000000018004B4D6: mov     eax, [r15+rax]
 * 000000018004B4DA: cmp     cs:dword_180269358, eax
 * 000000018004B4E0: jle     loc_18004B5CA
 * 000000018004B4E6: lea     rcx, dword_180269358
 * 000000018004B4ED: call    _Init_thread_header
 * 000000018004B4F2: cmp     cs:dword_180269358, r14d
 * 000000018004B4F9: jnz     loc_18004B5CA
 * 000000018004B4FF: lea     rax, unk_18017FDC0
 * 000000018004B506: mov     qword ptr [rbp+9E20h+var_98C0], rax
 * 000000018004B50D: lea     rax, unk_18018667C
 * 000000018004B514: mov     qword ptr [rbp+9E20h+var_98C0+8], rax
 * 000000018004B51B: movups  xmm0, [rbp+9E20h+var_98C0]
 * 000000018004B522: movups  [rbp+9E20h+var_7DF8], xmm0
 * 000000018004B529: mov     dword ptr [rbp+9E20h+var_7DE8], r13d
 * 000000018004B530: mov     dword ptr [rbp+9E20h+var_7DE8+4], esi
 * 000000018004B536: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B53B: movups  xmm0, [rbp+9E20h+var_7DE8]
 * 000000018004B542: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B547: call    sub_1800455D0
 * 000000018004B54C: mov     r8, rax
 * 000000018004B54F: mov     r9d, r12d
 * 000000018004B552: mov     edx, 14Ah
 * 000000018004B557: lea     rcx, [rbp+9E20h+var_4C08]; Src
 * 000000018004B55E: call    sub_1800D44B8
 * 000000018004B563: nop
 * 000000018004B564: mov     r8, rax
 * 000000018004B567: lea     rdx, aStandardshader_97; "StandardShader/ShaderModel40/"
 * 000000018004B56E: lea     rcx, [rbp+9E20h+var_4C28]
 * 000000018004B575: call    sub_1800453AC
 * 000000018004B57A: nop
 * 000000018004B57B: lea     r8, aPixel_95; "/Pixel"
 * 000000018004B582: mov     rdx, rax
 * 000000018004B585: lea     rcx, [rbp+9E20h+var_4C48]
 * 000000018004B58C: call    sub_18002BF78
 * 000000018004B591: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B596: mov     rcx, rax
 * 000000018004B599: call    sub_1800D45A4
 * 000000018004B59E: mov     cs:byte_180269354, al
 * 000000018004B5A4: lea     rcx, [rbp+9E20h+var_4C28]; void *
 * 000000018004B5AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B5B0: nop
 * 000000018004B5B1: lea     rcx, [rbp+9E20h+var_4C08]; void *
 * 000000018004B5B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B5BD: nop
 * 000000018004B5BE: lea     rcx, dword_180269358
 * 000000018004B5C5: call    _Init_thread_footer
 * 000000018004B5CA: mov     rax, [rdi+rbx*8]
 * 000000018004B5CE: mov     eax, [r15+rax]
 * 000000018004B5D2: cmp     cs:dword_180269360, eax
 * 000000018004B5D8: jle     loc_18004B6C2
 * 000000018004B5DE: lea     rcx, dword_180269360
 * 000000018004B5E5: call    _Init_thread_header
 * 000000018004B5EA: cmp     cs:dword_180269360, r14d
 * 000000018004B5F1: jnz     loc_18004B6C2
 * 000000018004B5F7: lea     rax, unk_180186680
 * 000000018004B5FE: mov     qword ptr [rbp+9E20h+var_98B0], rax
 * 000000018004B605: lea     rax, unk_18018CF88
 * 000000018004B60C: mov     qword ptr [rbp+9E20h+var_98B0+8], rax
 * 000000018004B613: movups  xmm0, [rbp+9E20h+var_98B0]
 * 000000018004B61A: movups  [rbp+9E20h+var_7DD8], xmm0
 * 000000018004B621: mov     dword ptr [rbp+9E20h+var_7DC8], r13d
 * 000000018004B628: mov     dword ptr [rbp+9E20h+var_7DC8+4], esi
 * 000000018004B62E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B633: movups  xmm0, [rbp+9E20h+var_7DC8]
 * 000000018004B63A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B63F: call    sub_1800455D0
 * 000000018004B644: mov     r8, rax
 * 000000018004B647: mov     r9d, r12d
 * 000000018004B64A: mov     edx, 150h
 * 000000018004B64F: lea     rcx, [rbp+9E20h+var_4BA8]; Src
 * 000000018004B656: call    sub_1800D44B8
 * 000000018004B65B: nop
 * 000000018004B65C: mov     r8, rax
 * 000000018004B65F: lea     rdx, aStandardshader_98; "StandardShader/ShaderModel40/"
 * 000000018004B666: lea     rcx, [rbp+9E20h+var_4BC8]
 * 000000018004B66D: call    sub_1800453AC
 * 000000018004B672: nop
 * 000000018004B673: lea     r8, aPixel_96; "/Pixel"
 * 000000018004B67A: mov     rdx, rax
 * 000000018004B67D: lea     rcx, [rbp+9E20h+var_4BE8]
 * 000000018004B684: call    sub_18002BF78
 * 000000018004B689: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B68E: mov     rcx, rax
 * 000000018004B691: call    sub_1800D45A4
 * 000000018004B696: mov     cs:byte_18026935C, al
 * 000000018004B69C: lea     rcx, [rbp+9E20h+var_4BC8]; void *
 * 000000018004B6A3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B6A8: nop
 * 000000018004B6A9: lea     rcx, [rbp+9E20h+var_4BA8]; void *
 * 000000018004B6B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B6B5: nop
 * 000000018004B6B6: lea     rcx, dword_180269360
 * 000000018004B6BD: call    _Init_thread_footer
 * 000000018004B6C2: mov     rax, [rdi+rbx*8]
 * 000000018004B6C6: mov     eax, [r15+rax]
 * 000000018004B6CA: cmp     cs:dword_180269368, eax
 * 000000018004B6D0: jle     loc_18004B7BA
 * 000000018004B6D6: lea     rcx, dword_180269368
 * 000000018004B6DD: call    _Init_thread_header
 * 000000018004B6E2: cmp     cs:dword_180269368, r14d
 * 000000018004B6E9: jnz     loc_18004B7BA
 * 000000018004B6EF: lea     rax, unk_180186680
 * 000000018004B6F6: mov     qword ptr [rbp+9E20h+var_98A0], rax
 * 000000018004B6FD: lea     rax, unk_18018CF88
 * 000000018004B704: mov     qword ptr [rbp+9E20h+var_98A0+8], rax
 * 000000018004B70B: movups  xmm0, [rbp+9E20h+var_98A0]
 * 000000018004B712: movups  [rbp+9E20h+var_7DB8], xmm0
 * 000000018004B719: mov     dword ptr [rbp+9E20h+var_7DA8], r13d
 * 000000018004B720: mov     dword ptr [rbp+9E20h+var_7DA8+4], esi
 * 000000018004B726: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B72B: movups  xmm0, [rbp+9E20h+var_7DA8]
 * 000000018004B732: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B737: call    sub_1800455D0
 * 000000018004B73C: mov     r8, rax
 * 000000018004B73F: mov     r9d, r12d
 * 000000018004B742: mov     edx, 152h
 * 000000018004B747: lea     rcx, [rbp+9E20h+var_4B48]; Src
 * 000000018004B74E: call    sub_1800D44B8
 * 000000018004B753: nop
 * 000000018004B754: mov     r8, rax
 * 000000018004B757: lea     rdx, aStandardshader_99; "StandardShader/ShaderModel40/"
 * 000000018004B75E: lea     rcx, [rbp+9E20h+var_4B68]
 * 000000018004B765: call    sub_1800453AC
 * 000000018004B76A: nop
 * 000000018004B76B: lea     r8, aPixel_97; "/Pixel"
 * 000000018004B772: mov     rdx, rax
 * 000000018004B775: lea     rcx, [rbp+9E20h+var_4B88]
 * 000000018004B77C: call    sub_18002BF78
 * 000000018004B781: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B786: mov     rcx, rax
 * 000000018004B789: call    sub_1800D45A4
 * 000000018004B78E: mov     cs:byte_180269364, al
 * 000000018004B794: lea     rcx, [rbp+9E20h+var_4B68]; void *
 * 000000018004B79B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B7A0: nop
 * 000000018004B7A1: lea     rcx, [rbp+9E20h+var_4B48]; void *
 * 000000018004B7A8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B7AD: nop
 * 000000018004B7AE: lea     rcx, dword_180269368
 * 000000018004B7B5: call    _Init_thread_footer
 * 000000018004B7BA: mov     rax, [rdi+rbx*8]
 * 000000018004B7BE: mov     eax, [r15+rax]
 * 000000018004B7C2: cmp     cs:dword_180269370, eax
 * 000000018004B7C8: jle     loc_18004B8B2
 * 000000018004B7CE: lea     rcx, dword_180269370
 * 000000018004B7D5: call    _Init_thread_header
 * 000000018004B7DA: cmp     cs:dword_180269370, r14d
 * 000000018004B7E1: jnz     loc_18004B8B2
 * 000000018004B7E7: lea     rax, unk_1801905B0
 * 000000018004B7EE: mov     qword ptr [rbp+9E20h+var_9890], rax
 * 000000018004B7F5: lea     rax, unk_18019706C
 * 000000018004B7FC: mov     qword ptr [rbp+9E20h+var_9890+8], rax
 * 000000018004B803: movups  xmm0, [rbp+9E20h+var_9890]
 * 000000018004B80A: movups  [rbp+9E20h+var_7D98], xmm0
 * 000000018004B811: mov     dword ptr [rbp+9E20h+var_7D88], r13d
 * 000000018004B818: mov     dword ptr [rbp+9E20h+var_7D88+4], esi
 * 000000018004B81E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B823: movups  xmm0, [rbp+9E20h+var_7D88]
 * 000000018004B82A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B82F: call    sub_1800455D0
 * 000000018004B834: mov     r8, rax
 * 000000018004B837: mov     r9d, r12d
 * 000000018004B83A: mov     edx, 158h
 * 000000018004B83F: lea     rcx, [rbp+9E20h+var_4AE8]; Src
 * 000000018004B846: call    sub_1800D44B8
 * 000000018004B84B: nop
 * 000000018004B84C: mov     r8, rax
 * 000000018004B84F: lea     rdx, aStandardshader_100; "StandardShader/ShaderModel40/"
 * 000000018004B856: lea     rcx, [rbp+9E20h+var_4B08]
 * 000000018004B85D: call    sub_1800453AC
 * 000000018004B862: nop
 * 000000018004B863: lea     r8, aPixel_98; "/Pixel"
 * 000000018004B86A: mov     rdx, rax
 * 000000018004B86D: lea     rcx, [rbp+9E20h+var_4B28]
 * 000000018004B874: call    sub_18002BF78
 * 000000018004B879: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B87E: mov     rcx, rax
 * 000000018004B881: call    sub_1800D45A4
 * 000000018004B886: mov     cs:byte_18026936C, al
 * 000000018004B88C: lea     rcx, [rbp+9E20h+var_4B08]; void *
 * 000000018004B893: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B898: nop
 * 000000018004B899: lea     rcx, [rbp+9E20h+var_4AE8]; void *
 * 000000018004B8A0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B8A5: nop
 * 000000018004B8A6: lea     rcx, dword_180269370
 * 000000018004B8AD: call    _Init_thread_footer
 * 000000018004B8B2: mov     rax, [rdi+rbx*8]
 * 000000018004B8B6: mov     eax, [r15+rax]
 * 000000018004B8BA: cmp     cs:dword_180269378, eax
 * 000000018004B8C0: jle     loc_18004B9AA
 * 000000018004B8C6: lea     rcx, dword_180269378
 * 000000018004B8CD: call    _Init_thread_header
 * 000000018004B8D2: cmp     cs:dword_180269378, r14d
 * 000000018004B8D9: jnz     loc_18004B9AA
 * 000000018004B8DF: lea     rax, unk_1801905B0
 * 000000018004B8E6: mov     qword ptr [rbp+9E20h+var_9880], rax
 * 000000018004B8ED: lea     rax, unk_18019706C
 * 000000018004B8F4: mov     qword ptr [rbp+9E20h+var_9880+8], rax
 * 000000018004B8FB: movups  xmm0, [rbp+9E20h+var_9880]
 * 000000018004B902: movups  [rbp+9E20h+var_7D78], xmm0
 * 000000018004B909: mov     dword ptr [rbp+9E20h+var_7D68], r13d
 * 000000018004B910: mov     dword ptr [rbp+9E20h+var_7D68+4], esi
 * 000000018004B916: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B91B: movups  xmm0, [rbp+9E20h+var_7D68]
 * 000000018004B922: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B927: call    sub_1800455D0
 * 000000018004B92C: mov     r8, rax
 * 000000018004B92F: mov     r9d, r12d
 * 000000018004B932: mov     edx, 15Ah
 * 000000018004B937: lea     rcx, [rbp+9E20h+var_4A88]; Src
 * 000000018004B93E: call    sub_1800D44B8
 * 000000018004B943: nop
 * 000000018004B944: mov     r8, rax
 * 000000018004B947: lea     rdx, aStandardshader_101; "StandardShader/ShaderModel40/"
 * 000000018004B94E: lea     rcx, [rbp+9E20h+var_4AA8]
 * 000000018004B955: call    sub_1800453AC
 * 000000018004B95A: nop
 * 000000018004B95B: lea     r8, aPixel_99; "/Pixel"
 * 000000018004B962: mov     rdx, rax
 * 000000018004B965: lea     rcx, [rbp+9E20h+var_4AC8]
 * 000000018004B96C: call    sub_18002BF78
 * 000000018004B971: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B976: mov     rcx, rax
 * 000000018004B979: call    sub_1800D45A4
 * 000000018004B97E: mov     cs:byte_180269374, al
 * 000000018004B984: lea     rcx, [rbp+9E20h+var_4AA8]; void *
 * 000000018004B98B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B990: nop
 * 000000018004B991: lea     rcx, [rbp+9E20h+var_4A88]; void *
 * 000000018004B998: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B99D: nop
 * 000000018004B99E: lea     rcx, dword_180269378
 * 000000018004B9A5: call    _Init_thread_footer
 * 000000018004B9AA: mov     rax, [rdi+rbx*8]
 * 000000018004B9AE: mov     eax, [r15+rax]
 * 000000018004B9B2: cmp     cs:dword_180269380, eax
 * 000000018004B9B8: jle     loc_18004BAA2
 * 000000018004B9BE: lea     rcx, dword_180269380
 * 000000018004B9C5: call    _Init_thread_header
 * 000000018004B9CA: cmp     cs:dword_180269380, r14d
 * 000000018004B9D1: jnz     loc_18004BAA2
 * 000000018004B9D7: lea     rax, unk_1801761B0
 * 000000018004B9DE: mov     qword ptr [rbp+9E20h+var_9870], rax
 * 000000018004B9E5: lea     rax, unk_18017C8DC
 * 000000018004B9EC: mov     qword ptr [rbp+9E20h+var_9870+8], rax
 * 000000018004B9F3: movups  xmm0, [rbp+9E20h+var_9870]
 * 000000018004B9FA: movups  [rbp+9E20h+var_7D58], xmm0
 * 000000018004BA01: mov     dword ptr [rbp+9E20h+var_7D48], r13d
 * 000000018004BA08: mov     dword ptr [rbp+9E20h+var_7D48+4], esi
 * 000000018004BA0E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BA13: movups  xmm0, [rbp+9E20h+var_7D48]
 * 000000018004BA1A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BA1F: call    sub_1800455D0
 * 000000018004BA24: mov     r8, rax
 * 000000018004BA27: mov     r9d, r12d
 * 000000018004BA2A: mov     edx, 160h
 * 000000018004BA2F: lea     rcx, [rbp+9E20h+var_4A28]; Src
 * 000000018004BA36: call    sub_1800D44B8
 * 000000018004BA3B: nop
 * 000000018004BA3C: mov     r8, rax
 * 000000018004BA3F: lea     rdx, aStandardshader_102; "StandardShader/ShaderModel40/"
 * 000000018004BA46: lea     rcx, [rbp+9E20h+var_4A48]
 * 000000018004BA4D: call    sub_1800453AC
 * 000000018004BA52: nop
 * 000000018004BA53: lea     r8, aPixel_100; "/Pixel"
 * 000000018004BA5A: mov     rdx, rax
 * 000000018004BA5D: lea     rcx, [rbp+9E20h+var_4A68]
 * 000000018004BA64: call    sub_18002BF78
 * 000000018004BA69: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BA6E: mov     rcx, rax
 * 000000018004BA71: call    sub_1800D45A4
 * 000000018004BA76: mov     cs:byte_18026937C, al
 * 000000018004BA7C: lea     rcx, [rbp+9E20h+var_4A48]; void *
 * 000000018004BA83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BA88: nop
 * 000000018004BA89: lea     rcx, [rbp+9E20h+var_4A28]; void *
 * 000000018004BA90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BA95: nop
 * 000000018004BA96: lea     rcx, dword_180269380
 * 000000018004BA9D: call    _Init_thread_footer
 * 000000018004BAA2: mov     rax, [rdi+rbx*8]
 * 000000018004BAA6: mov     eax, [r15+rax]
 * 000000018004BAAA: cmp     cs:dword_180269388, eax
 * 000000018004BAB0: jle     loc_18004BB9A
 * 000000018004BAB6: lea     rcx, dword_180269388
 * 000000018004BABD: call    _Init_thread_header
 * 000000018004BAC2: cmp     cs:dword_180269388, r14d
 * 000000018004BAC9: jnz     loc_18004BB9A
 * 000000018004BACF: lea     rax, unk_1801761B0
 * 000000018004BAD6: mov     qword ptr [rbp+9E20h+var_9860], rax
 * 000000018004BADD: lea     rax, unk_18017C8DC
 * 000000018004BAE4: mov     qword ptr [rbp+9E20h+var_9860+8], rax
 * 000000018004BAEB: movups  xmm0, [rbp+9E20h+var_9860]
 * 000000018004BAF2: movups  [rbp+9E20h+var_7D38], xmm0
 * 000000018004BAF9: mov     dword ptr [rbp+9E20h+var_7D28], r13d
 * 000000018004BB00: mov     dword ptr [rbp+9E20h+var_7D28+4], esi
 * 000000018004BB06: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BB0B: movups  xmm0, [rbp+9E20h+var_7D28]
 * 000000018004BB12: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BB17: call    sub_1800455D0
 * 000000018004BB1C: mov     r8, rax
 * 000000018004BB1F: mov     r9d, r12d
 * 000000018004BB22: mov     edx, 162h
 * 000000018004BB27: lea     rcx, [rbp+9E20h+var_49C8]; Src
 * 000000018004BB2E: call    sub_1800D44B8
 * 000000018004BB33: nop
 * 000000018004BB34: mov     r8, rax
 * 000000018004BB37: lea     rdx, aStandardshader_103; "StandardShader/ShaderModel40/"
 * 000000018004BB3E: lea     rcx, [rbp+9E20h+var_49E8]
 * 000000018004BB45: call    sub_1800453AC
 * 000000018004BB4A: nop
 * 000000018004BB4B: lea     r8, aPixel_101; "/Pixel"
 * 000000018004BB52: mov     rdx, rax
 * 000000018004BB55: lea     rcx, [rbp+9E20h+var_4A08]
 * 000000018004BB5C: call    sub_18002BF78
 * 000000018004BB61: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BB66: mov     rcx, rax
 * 000000018004BB69: call    sub_1800D45A4
 * 000000018004BB6E: mov     cs:byte_180269384, al
 * 000000018004BB74: lea     rcx, [rbp+9E20h+var_49E8]; void *
 * 000000018004BB7B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BB80: nop
 * 000000018004BB81: lea     rcx, [rbp+9E20h+var_49C8]; void *
 * 000000018004BB88: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BB8D: nop
 * 000000018004BB8E: lea     rcx, dword_180269388
 * 000000018004BB95: call    _Init_thread_footer
 * 000000018004BB9A: mov     rax, [rdi+rbx*8]
 * 000000018004BB9E: mov     eax, [r15+rax]
 * 000000018004BBA2: cmp     cs:dword_180269390, eax
 * 000000018004BBA8: jle     loc_18004BC92
 * 000000018004BBAE: lea     rcx, dword_180269390
 * 000000018004BBB5: call    _Init_thread_header
 * 000000018004BBBA: cmp     cs:dword_180269390, r14d
 * 000000018004BBC1: jnz     loc_18004BC92
 * 000000018004BBC7: lea     rax, unk_18017FDC0
 * 000000018004BBCE: mov     qword ptr [rbp+9E20h+var_9850], rax
 * 000000018004BBD5: lea     rax, unk_18018667C
 * 000000018004BBDC: mov     qword ptr [rbp+9E20h+var_9850+8], rax
 * 000000018004BBE3: movups  xmm0, [rbp+9E20h+var_9850]
 * 000000018004BBEA: movups  [rbp+9E20h+var_7D18], xmm0
 * 000000018004BBF1: mov     dword ptr [rbp+9E20h+var_7D08], r13d
 * 000000018004BBF8: mov     dword ptr [rbp+9E20h+var_7D08+4], esi
 * 000000018004BBFE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BC03: movups  xmm0, [rbp+9E20h+var_7D08]
 * 000000018004BC0A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BC0F: call    sub_1800455D0
 * 000000018004BC14: mov     r8, rax
 * 000000018004BC17: mov     r9d, r12d
 * 000000018004BC1A: mov     edx, 168h
 * 000000018004BC1F: lea     rcx, [rbp+9E20h+var_4968]; Src
 * 000000018004BC26: call    sub_1800D44B8
 * 000000018004BC2B: nop
 * 000000018004BC2C: mov     r8, rax
 * 000000018004BC2F: lea     rdx, aStandardshader_104; "StandardShader/ShaderModel40/"
 * 000000018004BC36: lea     rcx, [rbp+9E20h+var_4988]
 * 000000018004BC3D: call    sub_1800453AC
 * 000000018004BC42: nop
 * 000000018004BC43: lea     r8, aPixel_102; "/Pixel"
 * 000000018004BC4A: mov     rdx, rax
 * 000000018004BC4D: lea     rcx, [rbp+9E20h+var_49A8]
 * 000000018004BC54: call    sub_18002BF78
 * 000000018004BC59: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BC5E: mov     rcx, rax
 * 000000018004BC61: call    sub_1800D45A4
 * 000000018004BC66: mov     cs:byte_18026938C, al
 * 000000018004BC6C: lea     rcx, [rbp+9E20h+var_4988]; void *
 * 000000018004BC73: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BC78: nop
 * 000000018004BC79: lea     rcx, [rbp+9E20h+var_4968]; void *
 * 000000018004BC80: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BC85: nop
 * 000000018004BC86: lea     rcx, dword_180269390
 * 000000018004BC8D: call    _Init_thread_footer
 * 000000018004BC92: mov     rax, [rdi+rbx*8]
 * 000000018004BC96: mov     eax, [r15+rax]
 * 000000018004BC9A: cmp     cs:dword_180269398, eax
 * 000000018004BCA0: jle     loc_18004BD8A
 * 000000018004BCA6: lea     rcx, dword_180269398
 * 000000018004BCAD: call    _Init_thread_header
 * 000000018004BCB2: cmp     cs:dword_180269398, r14d
 * 000000018004BCB9: jnz     loc_18004BD8A
 * 000000018004BCBF: lea     rax, unk_18017FDC0
 * 000000018004BCC6: mov     qword ptr [rbp+9E20h+var_9840], rax
 * 000000018004BCCD: lea     rax, unk_18018667C
 * 000000018004BCD4: mov     qword ptr [rbp+9E20h+var_9840+8], rax
 * 000000018004BCDB: movups  xmm0, [rbp+9E20h+var_9840]
 * 000000018004BCE2: movups  [rbp+9E20h+var_7CF8], xmm0
 * 000000018004BCE9: mov     dword ptr [rbp+9E20h+var_7CE8], r13d
 * 000000018004BCF0: mov     dword ptr [rbp+9E20h+var_7CE8+4], esi
 * 000000018004BCF6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BCFB: movups  xmm0, [rbp+9E20h+var_7CE8]
 * 000000018004BD02: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BD07: call    sub_1800455D0
 * 000000018004BD0C: mov     r8, rax
 * 000000018004BD0F: mov     r9d, r12d
 * 000000018004BD12: mov     edx, 16Ah
 * 000000018004BD17: lea     rcx, [rbp+9E20h+var_4908]; Src
 * 000000018004BD1E: call    sub_1800D44B8
 * 000000018004BD23: nop
 * 000000018004BD24: mov     r8, rax
 * 000000018004BD27: lea     rdx, aStandardshader_105; "StandardShader/ShaderModel40/"
 * 000000018004BD2E: lea     rcx, [rbp+9E20h+var_4928]
 * 000000018004BD35: call    sub_1800453AC
 * 000000018004BD3A: nop
 * 000000018004BD3B: lea     r8, aPixel_103; "/Pixel"
 * 000000018004BD42: mov     rdx, rax
 * 000000018004BD45: lea     rcx, [rbp+9E20h+var_4948]
 * 000000018004BD4C: call    sub_18002BF78
 * 000000018004BD51: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BD56: mov     rcx, rax
 * 000000018004BD59: call    sub_1800D45A4
 * 000000018004BD5E: mov     cs:byte_180269394, al
 * 000000018004BD64: lea     rcx, [rbp+9E20h+var_4928]; void *
 * 000000018004BD6B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BD70: nop
 * 000000018004BD71: lea     rcx, [rbp+9E20h+var_4908]; void *
 * 000000018004BD78: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BD7D: nop
 * 000000018004BD7E: lea     rcx, dword_180269398
 * 000000018004BD85: call    _Init_thread_footer
 * 000000018004BD8A: mov     rax, [rdi+rbx*8]
 * 000000018004BD8E: mov     eax, [r15+rax]
 * 000000018004BD92: cmp     cs:dword_1802693A0, eax
 * 000000018004BD98: jle     loc_18004BE82
 * 000000018004BD9E: lea     rcx, dword_1802693A0
 * 000000018004BDA5: call    _Init_thread_header
 * 000000018004BDAA: cmp     cs:dword_1802693A0, r14d
 * 000000018004BDB1: jnz     loc_18004BE82
 * 000000018004BDB7: lea     rax, unk_180186680
 * 000000018004BDBE: mov     qword ptr [rbp+9E20h+var_9830], rax
 * 000000018004BDC5: lea     rax, unk_18018CF88
 * 000000018004BDCC: mov     qword ptr [rbp+9E20h+var_9830+8], rax
 * 000000018004BDD3: movups  xmm0, [rbp+9E20h+var_9830]
 * 000000018004BDDA: movups  [rbp+9E20h+var_7CD8], xmm0
 * 000000018004BDE1: mov     dword ptr [rbp+9E20h+var_7CC8], r13d
 * 000000018004BDE8: mov     dword ptr [rbp+9E20h+var_7CC8+4], esi
 * 000000018004BDEE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BDF3: movups  xmm0, [rbp+9E20h+var_7CC8]
 * 000000018004BDFA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BDFF: call    sub_1800455D0
 * 000000018004BE04: mov     r8, rax
 * 000000018004BE07: mov     r9d, r12d
 * 000000018004BE0A: mov     edx, 170h
 * 000000018004BE0F: lea     rcx, [rbp+9E20h+var_48A8]; Src
 * 000000018004BE16: call    sub_1800D44B8
 * 000000018004BE1B: nop
 * 000000018004BE1C: mov     r8, rax
 * 000000018004BE1F: lea     rdx, aStandardshader_106; "StandardShader/ShaderModel40/"
 * 000000018004BE26: lea     rcx, [rbp+9E20h+var_48C8]
 * 000000018004BE2D: call    sub_1800453AC
 * 000000018004BE32: nop
 * 000000018004BE33: lea     r8, aPixel_104; "/Pixel"
 * 000000018004BE3A: mov     rdx, rax
 * 000000018004BE3D: lea     rcx, [rbp+9E20h+var_48E8]
 * 000000018004BE44: call    sub_18002BF78
 * 000000018004BE49: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BE4E: mov     rcx, rax
 * 000000018004BE51: call    sub_1800D45A4
 * 000000018004BE56: mov     cs:byte_18026939C, al
 * 000000018004BE5C: lea     rcx, [rbp+9E20h+var_48C8]; void *
 * 000000018004BE63: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BE68: nop
 * 000000018004BE69: lea     rcx, [rbp+9E20h+var_48A8]; void *
 * 000000018004BE70: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BE75: nop
 * 000000018004BE76: lea     rcx, dword_1802693A0
 * 000000018004BE7D: call    _Init_thread_footer
 * 000000018004BE82: mov     rax, [rdi+rbx*8]
 * 000000018004BE86: mov     eax, [r15+rax]
 * 000000018004BE8A: cmp     cs:dword_1802693A8, eax
 * 000000018004BE90: jle     loc_18004BF7A
 * 000000018004BE96: lea     rcx, dword_1802693A8
 * 000000018004BE9D: call    _Init_thread_header
 * 000000018004BEA2: cmp     cs:dword_1802693A8, r14d
 * 000000018004BEA9: jnz     loc_18004BF7A
 * 000000018004BEAF: lea     rax, unk_180186680
 * 000000018004BEB6: mov     qword ptr [rbp+9E20h+var_9820], rax
 * 000000018004BEBD: lea     rax, unk_18018CF88
 * 000000018004BEC4: mov     qword ptr [rbp+9E20h+var_9820+8], rax
 * 000000018004BECB: movups  xmm0, [rbp+9E20h+var_9820]
 * 000000018004BED2: movups  [rbp+9E20h+var_7CB8], xmm0
 * 000000018004BED9: mov     dword ptr [rbp+9E20h+var_7CA8], r13d
 * 000000018004BEE0: mov     dword ptr [rbp+9E20h+var_7CA8+4], esi
 * 000000018004BEE6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BEEB: movups  xmm0, [rbp+9E20h+var_7CA8]
 * 000000018004BEF2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BEF7: call    sub_1800455D0
 * 000000018004BEFC: mov     r8, rax
 * 000000018004BEFF: mov     r9d, r12d
 * 000000018004BF02: mov     edx, 172h
 * 000000018004BF07: lea     rcx, [rbp+9E20h+var_4848]; Src
 * 000000018004BF0E: call    sub_1800D44B8
 * 000000018004BF13: nop
 * 000000018004BF14: mov     r8, rax
 * 000000018004BF17: lea     rdx, aStandardshader_107; "StandardShader/ShaderModel40/"
 * 000000018004BF1E: lea     rcx, [rbp+9E20h+var_4868]
 * 000000018004BF25: call    sub_1800453AC
 * 000000018004BF2A: nop
 * 000000018004BF2B: lea     r8, aPixel_105; "/Pixel"
 * 000000018004BF32: mov     rdx, rax
 * 000000018004BF35: lea     rcx, [rbp+9E20h+var_4888]
 * 000000018004BF3C: call    sub_18002BF78
 * 000000018004BF41: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BF46: mov     rcx, rax
 * 000000018004BF49: call    sub_1800D45A4
 * 000000018004BF4E: mov     cs:byte_1802693A4, al
 * 000000018004BF54: lea     rcx, [rbp+9E20h+var_4868]; void *
 * 000000018004BF5B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BF60: nop
 * 000000018004BF61: lea     rcx, [rbp+9E20h+var_4848]; void *
 * 000000018004BF68: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BF6D: nop
 * 000000018004BF6E: lea     rcx, dword_1802693A8
 * 000000018004BF75: call    _Init_thread_footer
 * 000000018004BF7A: mov     rax, [rdi+rbx*8]
 * 000000018004BF7E: mov     eax, [r15+rax]
 * 000000018004BF82: cmp     cs:dword_1802693B0, eax
 * 000000018004BF88: jle     loc_18004C072
 * 000000018004BF8E: lea     rcx, dword_1802693B0
 * 000000018004BF95: call    _Init_thread_header
 * 000000018004BF9A: cmp     cs:dword_1802693B0, r14d
 * 000000018004BFA1: jnz     loc_18004C072
 * 000000018004BFA7: lea     rax, unk_1801905B0
 * 000000018004BFAE: mov     qword ptr [rbp+9E20h+var_9810], rax
 * 000000018004BFB5: lea     rax, unk_18019706C
 * 000000018004BFBC: mov     qword ptr [rbp+9E20h+var_9810+8], rax
 * 000000018004BFC3: movups  xmm0, [rbp+9E20h+var_9810]
 * 000000018004BFCA: movups  [rbp+9E20h+var_7C98], xmm0
 * 000000018004BFD1: mov     dword ptr [rbp+9E20h+var_7C88], r13d
 * 000000018004BFD8: mov     dword ptr [rbp+9E20h+var_7C88+4], esi
 * 000000018004BFDE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BFE3: movups  xmm0, [rbp+9E20h+var_7C88]
 * 000000018004BFEA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BFEF: call    sub_1800455D0
 * 000000018004BFF4: mov     r8, rax
 * 000000018004BFF7: mov     r9d, r12d
 * 000000018004BFFA: mov     edx, 178h
 * 000000018004BFFF: lea     rcx, [rbp+9E20h+var_47E8]; Src
 * 000000018004C006: call    sub_1800D44B8
 * 000000018004C00B: nop
 * 000000018004C00C: mov     r8, rax
 * 000000018004C00F: lea     rdx, aStandardshader_108; "StandardShader/ShaderModel40/"
 * 000000018004C016: lea     rcx, [rbp+9E20h+var_4808]
 * 000000018004C01D: call    sub_1800453AC
 * 000000018004C022: nop
 * 000000018004C023: lea     r8, aPixel_106; "/Pixel"
 * 000000018004C02A: mov     rdx, rax
 * 000000018004C02D: lea     rcx, [rbp+9E20h+var_4828]
 * 000000018004C034: call    sub_18002BF78
 * 000000018004C039: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C03E: mov     rcx, rax
 * 000000018004C041: call    sub_1800D45A4
 * 000000018004C046: mov     cs:byte_1802693AC, al
 * 000000018004C04C: lea     rcx, [rbp+9E20h+var_4808]; void *
 * 000000018004C053: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C058: nop
 * 000000018004C059: lea     rcx, [rbp+9E20h+var_47E8]; void *
 * 000000018004C060: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C065: nop
 * 000000018004C066: lea     rcx, dword_1802693B0
 * 000000018004C06D: call    _Init_thread_footer
 * 000000018004C072: mov     rax, [rdi+rbx*8]
 * 000000018004C076: mov     eax, [r15+rax]
 * 000000018004C07A: cmp     cs:dword_1802693B8, eax
 * 000000018004C080: jle     loc_18004C16A
 * 000000018004C086: lea     rcx, dword_1802693B8
 * 000000018004C08D: call    _Init_thread_header
 * 000000018004C092: cmp     cs:dword_1802693B8, r14d
 * 000000018004C099: jnz     loc_18004C16A
 * 000000018004C09F: lea     rax, unk_1801905B0
 * 000000018004C0A6: mov     qword ptr [rbp+9E20h+var_9800], rax
 * 000000018004C0AD: lea     rax, unk_18019706C
 * 000000018004C0B4: mov     qword ptr [rbp+9E20h+var_9800+8], rax
 * 000000018004C0BB: movups  xmm0, [rbp+9E20h+var_9800]
 * 000000018004C0C2: movups  [rbp+9E20h+var_7C78], xmm0
 * 000000018004C0C9: mov     dword ptr [rbp+9E20h+var_7C68], r13d
 * 000000018004C0D0: mov     dword ptr [rbp+9E20h+var_7C68+4], esi
 * 000000018004C0D6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C0DB: movups  xmm0, [rbp+9E20h+var_7C68]
 * 000000018004C0E2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C0E7: call    sub_1800455D0
 * 000000018004C0EC: mov     r8, rax
 * 000000018004C0EF: mov     r9d, r12d
 * 000000018004C0F2: mov     edx, 17Ah
 * 000000018004C0F7: lea     rcx, [rbp+9E20h+var_4788]; Src
 * 000000018004C0FE: call    sub_1800D44B8
 * 000000018004C103: nop
 * 000000018004C104: mov     r8, rax
 * 000000018004C107: lea     rdx, aStandardshader_109; "StandardShader/ShaderModel40/"
 * 000000018004C10E: lea     rcx, [rbp+9E20h+var_47A8]
 * 000000018004C115: call    sub_1800453AC
 * 000000018004C11A: nop
 * 000000018004C11B: lea     r8, aPixel_107; "/Pixel"
 * 000000018004C122: mov     rdx, rax
 * 000000018004C125: lea     rcx, [rbp+9E20h+var_47C8]
 * 000000018004C12C: call    sub_18002BF78
 * 000000018004C131: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C136: mov     rcx, rax
 * 000000018004C139: call    sub_1800D45A4
 * 000000018004C13E: mov     cs:byte_1802693B4, al
 * 000000018004C144: lea     rcx, [rbp+9E20h+var_47A8]; void *
 * 000000018004C14B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C150: nop
 * 000000018004C151: lea     rcx, [rbp+9E20h+var_4788]; void *
 * 000000018004C158: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C15D: nop
 * 000000018004C15E: lea     rcx, dword_1802693B8
 * 000000018004C165: call    _Init_thread_footer
 * 000000018004C16A: mov     rax, [rdi+rbx*8]
 * 000000018004C16E: mov     eax, [r15+rax]
 * 000000018004C172: cmp     cs:dword_1802693C0, eax
 * 000000018004C178: jle     loc_18004C262
 * 000000018004C17E: lea     rcx, dword_1802693C0
 * 000000018004C185: call    _Init_thread_header
 * 000000018004C18A: cmp     cs:dword_1802693C0, r14d
 * 000000018004C191: jnz     loc_18004C262
 * 000000018004C197: lea     rax, unk_1801761B0
 * 000000018004C19E: mov     qword ptr [rbp+9E20h+var_97F0], rax
 * 000000018004C1A5: lea     rax, unk_18017C8DC
 * 000000018004C1AC: mov     qword ptr [rbp+9E20h+var_97F0+8], rax
 * 000000018004C1B3: movups  xmm0, [rbp+9E20h+var_97F0]
 * 000000018004C1BA: movups  [rbp+9E20h+var_7C58], xmm0
 * 000000018004C1C1: mov     dword ptr [rbp+9E20h+var_7C48], r13d
 * 000000018004C1C8: mov     dword ptr [rbp+9E20h+var_7C48+4], esi
 * 000000018004C1CE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C1D3: movups  xmm0, [rbp+9E20h+var_7C48]
 * 000000018004C1DA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C1DF: call    sub_1800455D0
 * 000000018004C1E4: mov     r8, rax
 * 000000018004C1E7: mov     r9d, r12d
 * 000000018004C1EA: mov     edx, 180h
 * 000000018004C1EF: lea     rcx, [rbp+9E20h+var_4728]; Src
 * 000000018004C1F6: call    sub_1800D44B8
 * 000000018004C1FB: nop
 * 000000018004C1FC: mov     r8, rax
 * 000000018004C1FF: lea     rdx, aStandardshader_110; "StandardShader/ShaderModel40/"
 * 000000018004C206: lea     rcx, [rbp+9E20h+var_4748]
 * 000000018004C20D: call    sub_1800453AC
 * 000000018004C212: nop
 * 000000018004C213: lea     r8, aPixel_108; "/Pixel"
 * 000000018004C21A: mov     rdx, rax
 * 000000018004C21D: lea     rcx, [rbp+9E20h+var_4768]
 * 000000018004C224: call    sub_18002BF78
 * 000000018004C229: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C22E: mov     rcx, rax
 * 000000018004C231: call    sub_1800D45A4
 * 000000018004C236: mov     cs:byte_1802693BC, al
 * 000000018004C23C: lea     rcx, [rbp+9E20h+var_4748]; void *
 * 000000018004C243: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C248: nop
 * 000000018004C249: lea     rcx, [rbp+9E20h+var_4728]; void *
 * 000000018004C250: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C255: nop
 * 000000018004C256: lea     rcx, dword_1802693C0
 * 000000018004C25D: call    _Init_thread_footer
 * 000000018004C262: mov     rax, [rdi+rbx*8]
 * 000000018004C266: mov     eax, [r15+rax]
 * 000000018004C26A: cmp     cs:dword_1802693C8, eax
 * 000000018004C270: jle     loc_18004C35A
 * 000000018004C276: lea     rcx, dword_1802693C8
 * 000000018004C27D: call    _Init_thread_header
 * 000000018004C282: cmp     cs:dword_1802693C8, r14d
 * 000000018004C289: jnz     loc_18004C35A
 * 000000018004C28F: lea     rax, unk_1801761B0
 * 000000018004C296: mov     qword ptr [rbp+9E20h+var_97E0], rax
 * 000000018004C29D: lea     rax, unk_18017C8DC
 * 000000018004C2A4: mov     qword ptr [rbp+9E20h+var_97E0+8], rax
 * 000000018004C2AB: movups  xmm0, [rbp+9E20h+var_97E0]
 * 000000018004C2B2: movups  [rbp+9E20h+var_7C38], xmm0
 * 000000018004C2B9: mov     dword ptr [rbp+9E20h+var_7C28], r13d
 * 000000018004C2C0: mov     dword ptr [rbp+9E20h+var_7C28+4], esi
 * 000000018004C2C6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C2CB: movups  xmm0, [rbp+9E20h+var_7C28]
 * 000000018004C2D2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C2D7: call    sub_1800455D0
 * 000000018004C2DC: mov     r8, rax
 * 000000018004C2DF: mov     r9d, r12d
 * 000000018004C2E2: mov     edx, 182h
 * 000000018004C2E7: lea     rcx, [rbp+9E20h+var_46C8]; Src
 * 000000018004C2EE: call    sub_1800D44B8
 * 000000018004C2F3: nop
 * 000000018004C2F4: mov     r8, rax
 * 000000018004C2F7: lea     rdx, aStandardshader_111; "StandardShader/ShaderModel40/"
 * 000000018004C2FE: lea     rcx, [rbp+9E20h+var_46E8]
 * 000000018004C305: call    sub_1800453AC
 * 000000018004C30A: nop
 * 000000018004C30B: lea     r8, aPixel_109; "/Pixel"
 * 000000018004C312: mov     rdx, rax
 * 000000018004C315: lea     rcx, [rbp+9E20h+var_4708]
 * 000000018004C31C: call    sub_18002BF78
 * 000000018004C321: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C326: mov     rcx, rax
 * 000000018004C329: call    sub_1800D45A4
 * 000000018004C32E: mov     cs:byte_1802693C4, al
 * 000000018004C334: lea     rcx, [rbp+9E20h+var_46E8]; void *
 * 000000018004C33B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C340: nop
 * 000000018004C341: lea     rcx, [rbp+9E20h+var_46C8]; void *
 * 000000018004C348: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C34D: nop
 * 000000018004C34E: lea     rcx, dword_1802693C8
 * 000000018004C355: call    _Init_thread_footer
 * 000000018004C35A: mov     rax, [rdi+rbx*8]
 * 000000018004C35E: mov     eax, [r15+rax]
 * 000000018004C362: cmp     cs:dword_1802693D0, eax
 * 000000018004C368: jle     loc_18004C452
 * 000000018004C36E: lea     rcx, dword_1802693D0
 * 000000018004C375: call    _Init_thread_header
 * 000000018004C37A: cmp     cs:dword_1802693D0, r14d
 * 000000018004C381: jnz     loc_18004C452
 * 000000018004C387: lea     rax, unk_18017FDC0
 * 000000018004C38E: mov     qword ptr [rbp+9E20h+var_97D0], rax
 * 000000018004C395: lea     rax, unk_18018667C
 * 000000018004C39C: mov     qword ptr [rbp+9E20h+var_97D0+8], rax
 * 000000018004C3A3: movups  xmm0, [rbp+9E20h+var_97D0]
 * 000000018004C3AA: movups  [rbp+9E20h+var_7C18], xmm0
 * 000000018004C3B1: mov     dword ptr [rbp+9E20h+var_7C08], r13d
 * 000000018004C3B8: mov     dword ptr [rbp+9E20h+var_7C08+4], esi
 * 000000018004C3BE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C3C3: movups  xmm0, [rbp+9E20h+var_7C08]
 * 000000018004C3CA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C3CF: call    sub_1800455D0
 * 000000018004C3D4: mov     r8, rax
 * 000000018004C3D7: mov     r9d, r12d
 * 000000018004C3DA: mov     edx, 188h
 * 000000018004C3DF: lea     rcx, [rbp+9E20h+var_4668]; Src
 * 000000018004C3E6: call    sub_1800D44B8
 * 000000018004C3EB: nop
 * 000000018004C3EC: mov     r8, rax
 * 000000018004C3EF: lea     rdx, aStandardshader_112; "StandardShader/ShaderModel40/"
 * 000000018004C3F6: lea     rcx, [rbp+9E20h+var_4688]
 * 000000018004C3FD: call    sub_1800453AC
 * 000000018004C402: nop
 * 000000018004C403: lea     r8, aPixel_110; "/Pixel"
 * 000000018004C40A: mov     rdx, rax
 * 000000018004C40D: lea     rcx, [rbp+9E20h+var_46A8]
 * 000000018004C414: call    sub_18002BF78
 * 000000018004C419: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C41E: mov     rcx, rax
 * 000000018004C421: call    sub_1800D45A4
 * 000000018004C426: mov     cs:byte_1802693CC, al
 * 000000018004C42C: lea     rcx, [rbp+9E20h+var_4688]; void *
 * 000000018004C433: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C438: nop
 * 000000018004C439: lea     rcx, [rbp+9E20h+var_4668]; void *
 * 000000018004C440: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C445: nop
 * 000000018004C446: lea     rcx, dword_1802693D0
 * 000000018004C44D: call    _Init_thread_footer
 * 000000018004C452: mov     rax, [rdi+rbx*8]
 * 000000018004C456: mov     eax, [r15+rax]
 * 000000018004C45A: cmp     cs:dword_1802693D8, eax
 * 000000018004C460: jle     loc_18004C54A
 * 000000018004C466: lea     rcx, dword_1802693D8
 * 000000018004C46D: call    _Init_thread_header
 * 000000018004C472: cmp     cs:dword_1802693D8, r14d
 * 000000018004C479: jnz     loc_18004C54A
 * 000000018004C47F: lea     rax, unk_18017FDC0
 * 000000018004C486: mov     qword ptr [rbp+9E20h+var_97C0], rax
 * 000000018004C48D: lea     rax, unk_18018667C
 * 000000018004C494: mov     qword ptr [rbp+9E20h+var_97C0+8], rax
 * 000000018004C49B: movups  xmm0, [rbp+9E20h+var_97C0]
 * 000000018004C4A2: movups  [rbp+9E20h+var_7BF8], xmm0
 * 000000018004C4A9: mov     dword ptr [rbp+9E20h+var_7BE8], r13d
 * 000000018004C4B0: mov     dword ptr [rbp+9E20h+var_7BE8+4], esi
 * 000000018004C4B6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C4BB: movups  xmm0, [rbp+9E20h+var_7BE8]
 * 000000018004C4C2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C4C7: call    sub_1800455D0
 * 000000018004C4CC: mov     r8, rax
 * 000000018004C4CF: mov     r9d, r12d
 * 000000018004C4D2: mov     edx, 18Ah
 * 000000018004C4D7: lea     rcx, [rbp+9E20h+var_4608]; Src
 * 000000018004C4DE: call    sub_1800D44B8
 * 000000018004C4E3: nop
 * 000000018004C4E4: mov     r8, rax
 * 000000018004C4E7: lea     rdx, aStandardshader_113; "StandardShader/ShaderModel40/"
 * 000000018004C4EE: lea     rcx, [rbp+9E20h+var_4628]
 * 000000018004C4F5: call    sub_1800453AC
 * 000000018004C4FA: nop
 * 000000018004C4FB: lea     r8, aPixel_111; "/Pixel"
 * 000000018004C502: mov     rdx, rax
 * 000000018004C505: lea     rcx, [rbp+9E20h+var_4648]
 * 000000018004C50C: call    sub_18002BF78
 * 000000018004C511: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C516: mov     rcx, rax
 * 000000018004C519: call    sub_1800D45A4
 * 000000018004C51E: mov     cs:byte_1802693D4, al
 * 000000018004C524: lea     rcx, [rbp+9E20h+var_4628]; void *
 * 000000018004C52B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C530: nop
 * 000000018004C531: lea     rcx, [rbp+9E20h+var_4608]; void *
 * 000000018004C538: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C53D: nop
 * 000000018004C53E: lea     rcx, dword_1802693D8
 * 000000018004C545: call    _Init_thread_footer
 * 000000018004C54A: mov     rax, [rdi+rbx*8]
 * 000000018004C54E: mov     eax, [r15+rax]
 * 000000018004C552: cmp     cs:dword_1802693E0, eax
 * 000000018004C558: jle     loc_18004C642
 * 000000018004C55E: lea     rcx, dword_1802693E0
 * 000000018004C565: call    _Init_thread_header
 * 000000018004C56A: cmp     cs:dword_1802693E0, r14d
 * 000000018004C571: jnz     loc_18004C642
 * 000000018004C577: lea     rax, unk_180186680
 * 000000018004C57E: mov     qword ptr [rbp+9E20h+var_97B0], rax
 * 000000018004C585: lea     rax, unk_18018CF88
 * 000000018004C58C: mov     qword ptr [rbp+9E20h+var_97B0+8], rax
 * 000000018004C593: movups  xmm0, [rbp+9E20h+var_97B0]
 * 000000018004C59A: movups  [rbp+9E20h+var_7BD8], xmm0
 * 000000018004C5A1: mov     dword ptr [rbp+9E20h+var_7BC8], r13d
 * 000000018004C5A8: mov     dword ptr [rbp+9E20h+var_7BC8+4], esi
 * 000000018004C5AE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C5B3: movups  xmm0, [rbp+9E20h+var_7BC8]
 * 000000018004C5BA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C5BF: call    sub_1800455D0
 * 000000018004C5C4: mov     r8, rax
 * 000000018004C5C7: mov     r9d, r12d
 * 000000018004C5CA: mov     edx, 190h
 * 000000018004C5CF: lea     rcx, [rbp+9E20h+var_45A8]; Src
 * 000000018004C5D6: call    sub_1800D44B8
 * 000000018004C5DB: nop
 * 000000018004C5DC: mov     r8, rax
 * 000000018004C5DF: lea     rdx, aStandardshader_114; "StandardShader/ShaderModel40/"
 * 000000018004C5E6: lea     rcx, [rbp+9E20h+var_45C8]
 * 000000018004C5ED: call    sub_1800453AC
 * 000000018004C5F2: nop
 * 000000018004C5F3: lea     r8, aPixel_112; "/Pixel"
 * 000000018004C5FA: mov     rdx, rax
 * 000000018004C5FD: lea     rcx, [rbp+9E20h+var_45E8]
 * 000000018004C604: call    sub_18002BF78
 * 000000018004C609: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C60E: mov     rcx, rax
 * 000000018004C611: call    sub_1800D45A4
 * 000000018004C616: mov     cs:byte_1802693DC, al
 * 000000018004C61C: lea     rcx, [rbp+9E20h+var_45C8]; void *
 * 000000018004C623: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C628: nop
 * 000000018004C629: lea     rcx, [rbp+9E20h+var_45A8]; void *
 * 000000018004C630: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C635: nop
 * 000000018004C636: lea     rcx, dword_1802693E0
 * 000000018004C63D: call    _Init_thread_footer
 * 000000018004C642: mov     rax, [rdi+rbx*8]
 * 000000018004C646: mov     eax, [r15+rax]
 * 000000018004C64A: cmp     cs:dword_1802693E8, eax
 * 000000018004C650: jle     loc_18004C73A
 * 000000018004C656: lea     rcx, dword_1802693E8
 * 000000018004C65D: call    _Init_thread_header
 * 000000018004C662: cmp     cs:dword_1802693E8, r14d
 * 000000018004C669: jnz     loc_18004C73A
 * 000000018004C66F: lea     rax, unk_180186680
 * 000000018004C676: mov     qword ptr [rbp+9E20h+var_97A0], rax
 * 000000018004C67D: lea     rax, unk_18018CF88
 * 000000018004C684: mov     qword ptr [rbp+9E20h+var_97A0+8], rax
 * 000000018004C68B: movups  xmm0, [rbp+9E20h+var_97A0]
 * 000000018004C692: movups  [rbp+9E20h+var_7BB8], xmm0
 * 000000018004C699: mov     dword ptr [rbp+9E20h+var_7BA8], r13d
 * 000000018004C6A0: mov     dword ptr [rbp+9E20h+var_7BA8+4], esi
 * 000000018004C6A6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C6AB: movups  xmm0, [rbp+9E20h+var_7BA8]
 * 000000018004C6B2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C6B7: call    sub_1800455D0
 * 000000018004C6BC: mov     r8, rax
 * 000000018004C6BF: mov     r9d, r12d
 * 000000018004C6C2: mov     edx, 192h
 * 000000018004C6C7: lea     rcx, [rbp+9E20h+var_4548]; Src
 * 000000018004C6CE: call    sub_1800D44B8
 * 000000018004C6D3: nop
 * 000000018004C6D4: mov     r8, rax
 * 000000018004C6D7: lea     rdx, aStandardshader_115; "StandardShader/ShaderModel40/"
 * 000000018004C6DE: lea     rcx, [rbp+9E20h+var_4568]
 * 000000018004C6E5: call    sub_1800453AC
 * 000000018004C6EA: nop
 * 000000018004C6EB: lea     r8, aPixel_113; "/Pixel"
 * 000000018004C6F2: mov     rdx, rax
 * 000000018004C6F5: lea     rcx, [rbp+9E20h+var_4588]
 * 000000018004C6FC: call    sub_18002BF78
 * 000000018004C701: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C706: mov     rcx, rax
 * 000000018004C709: call    sub_1800D45A4
 * 000000018004C70E: mov     cs:byte_1802693E4, al
 * 000000018004C714: lea     rcx, [rbp+9E20h+var_4568]; void *
 * 000000018004C71B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C720: nop
 * 000000018004C721: lea     rcx, [rbp+9E20h+var_4548]; void *
 * 000000018004C728: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C72D: nop
 * 000000018004C72E: lea     rcx, dword_1802693E8
 * 000000018004C735: call    _Init_thread_footer
 * 000000018004C73A: mov     rax, [rdi+rbx*8]
 * 000000018004C73E: mov     eax, [r15+rax]
 * 000000018004C742: cmp     cs:dword_1802693F0, eax
 * 000000018004C748: jle     loc_18004C832
 * 000000018004C74E: lea     rcx, dword_1802693F0
 * 000000018004C755: call    _Init_thread_header
 * 000000018004C75A: cmp     cs:dword_1802693F0, r14d
 * 000000018004C761: jnz     loc_18004C832
 * 000000018004C767: lea     rax, unk_1801905B0
 * 000000018004C76E: mov     qword ptr [rbp+9E20h+var_9790], rax
 * 000000018004C775: lea     rax, unk_18019706C
 * 000000018004C77C: mov     qword ptr [rbp+9E20h+var_9790+8], rax
 * 000000018004C783: movups  xmm0, [rbp+9E20h+var_9790]
 * 000000018004C78A: movups  [rbp+9E20h+var_7B98], xmm0
 * 000000018004C791: mov     dword ptr [rbp+9E20h+var_7B88], r13d
 * 000000018004C798: mov     dword ptr [rbp+9E20h+var_7B88+4], esi
 * 000000018004C79E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C7A3: movups  xmm0, [rbp+9E20h+var_7B88]
 * 000000018004C7AA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C7AF: call    sub_1800455D0
 * 000000018004C7B4: mov     r8, rax
 * 000000018004C7B7: mov     r9d, r12d
 * 000000018004C7BA: mov     edx, 198h
 * 000000018004C7BF: lea     rcx, [rbp+9E20h+var_44E8]; Src
 * 000000018004C7C6: call    sub_1800D44B8
 * 000000018004C7CB: nop
 * 000000018004C7CC: mov     r8, rax
 * 000000018004C7CF: lea     rdx, aStandardshader_116; "StandardShader/ShaderModel40/"
 * 000000018004C7D6: lea     rcx, [rbp+9E20h+var_4508]
 * 000000018004C7DD: call    sub_1800453AC
 * 000000018004C7E2: nop
 * 000000018004C7E3: lea     r8, aPixel_114; "/Pixel"
 * 000000018004C7EA: mov     rdx, rax
 * 000000018004C7ED: lea     rcx, [rbp+9E20h+var_4528]
 * 000000018004C7F4: call    sub_18002BF78
 * 000000018004C7F9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C7FE: mov     rcx, rax
 * 000000018004C801: call    sub_1800D45A4
 * 000000018004C806: mov     cs:byte_1802693EC, al
 * 000000018004C80C: lea     rcx, [rbp+9E20h+var_4508]; void *
 * 000000018004C813: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C818: nop
 * 000000018004C819: lea     rcx, [rbp+9E20h+var_44E8]; void *
 * 000000018004C820: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C825: nop
 * 000000018004C826: lea     rcx, dword_1802693F0
 * 000000018004C82D: call    _Init_thread_footer
 * 000000018004C832: mov     rax, [rdi+rbx*8]
 * 000000018004C836: mov     eax, [r15+rax]
 * 000000018004C83A: cmp     cs:dword_1802693F8, eax
 * 000000018004C840: jle     loc_18004C92A
 * 000000018004C846: lea     rcx, dword_1802693F8
 * 000000018004C84D: call    _Init_thread_header
 * 000000018004C852: cmp     cs:dword_1802693F8, r14d
 * 000000018004C859: jnz     loc_18004C92A
 * 000000018004C85F: lea     rax, unk_1801905B0
 * 000000018004C866: mov     qword ptr [rbp+9E20h+var_9780], rax
 * 000000018004C86D: lea     rax, unk_18019706C
 * 000000018004C874: mov     qword ptr [rbp+9E20h+var_9780+8], rax
 * 000000018004C87B: movups  xmm0, [rbp+9E20h+var_9780]
 * 000000018004C882: movups  [rbp+9E20h+var_7B78], xmm0
 * 000000018004C889: mov     dword ptr [rbp+9E20h+var_7B68], r13d
 * 000000018004C890: mov     dword ptr [rbp+9E20h+var_7B68+4], esi
 * 000000018004C896: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C89B: movups  xmm0, [rbp+9E20h+var_7B68]
 * 000000018004C8A2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C8A7: call    sub_1800455D0
 * 000000018004C8AC: mov     r8, rax
 * 000000018004C8AF: mov     r9d, r12d
 * 000000018004C8B2: mov     edx, 19Ah
 * 000000018004C8B7: lea     rcx, [rbp+9E20h+var_4488]; Src
 * 000000018004C8BE: call    sub_1800D44B8
 * 000000018004C8C3: nop
 * 000000018004C8C4: mov     r8, rax
 * 000000018004C8C7: lea     rdx, aStandardshader_117; "StandardShader/ShaderModel40/"
 * 000000018004C8CE: lea     rcx, [rbp+9E20h+var_44A8]
 * 000000018004C8D5: call    sub_1800453AC
 * 000000018004C8DA: nop
 * 000000018004C8DB: lea     r8, aPixel_115; "/Pixel"
 * 000000018004C8E2: mov     rdx, rax
 * 000000018004C8E5: lea     rcx, [rbp+9E20h+var_44C8]
 * 000000018004C8EC: call    sub_18002BF78
 * 000000018004C8F1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C8F6: mov     rcx, rax
 * 000000018004C8F9: call    sub_1800D45A4
 * 000000018004C8FE: mov     cs:byte_1802693F4, al
 * 000000018004C904: lea     rcx, [rbp+9E20h+var_44A8]; void *
 * 000000018004C90B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C910: nop
 * 000000018004C911: lea     rcx, [rbp+9E20h+var_4488]; void *
 * 000000018004C918: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C91D: nop
 * 000000018004C91E: lea     rcx, dword_1802693F8
 * 000000018004C925: call    _Init_thread_footer
 * 000000018004C92A: mov     rax, [rdi+rbx*8]
 * 000000018004C92E: mov     eax, [r15+rax]
 * 000000018004C932: cmp     cs:dword_180269400, eax
 * 000000018004C938: jle     loc_18004CA22
 * 000000018004C93E: lea     rcx, dword_180269400
 * 000000018004C945: call    _Init_thread_header
 * 000000018004C94A: cmp     cs:dword_180269400, r14d
 * 000000018004C951: jnz     loc_18004CA22
 * 000000018004C957: lea     rax, unk_1801761B0
 * 000000018004C95E: mov     qword ptr [rbp+9E20h+var_9770], rax
 * 000000018004C965: lea     rax, unk_18017C8DC
 * 000000018004C96C: mov     qword ptr [rbp+9E20h+var_9770+8], rax
 * 000000018004C973: movups  xmm0, [rbp+9E20h+var_9770]
 * 000000018004C97A: movups  [rbp+9E20h+var_7B58], xmm0
 * 000000018004C981: mov     dword ptr [rbp+9E20h+var_7B48], r13d
 * 000000018004C988: mov     dword ptr [rbp+9E20h+var_7B48+4], esi
 * 000000018004C98E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C993: movups  xmm0, [rbp+9E20h+var_7B48]
 * 000000018004C99A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C99F: call    sub_1800455D0
 * 000000018004C9A4: mov     r8, rax
 * 000000018004C9A7: mov     r9d, r12d
 * 000000018004C9AA: mov     edx, 1A0h
 * 000000018004C9AF: lea     rcx, [rbp+9E20h+var_4428]; Src
 * 000000018004C9B6: call    sub_1800D44B8
 * 000000018004C9BB: nop
 * 000000018004C9BC: mov     r8, rax
 * 000000018004C9BF: lea     rdx, aStandardshader_118; "StandardShader/ShaderModel40/"
 * 000000018004C9C6: lea     rcx, [rbp+9E20h+var_4448]
 * 000000018004C9CD: call    sub_1800453AC
 * 000000018004C9D2: nop
 * 000000018004C9D3: lea     r8, aPixel_116; "/Pixel"
 * 000000018004C9DA: mov     rdx, rax
 * 000000018004C9DD: lea     rcx, [rbp+9E20h+var_4468]
 * 000000018004C9E4: call    sub_18002BF78
 * 000000018004C9E9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C9EE: mov     rcx, rax
 * 000000018004C9F1: call    sub_1800D45A4
 * 000000018004C9F6: mov     cs:byte_1802693FC, al
 * 000000018004C9FC: lea     rcx, [rbp+9E20h+var_4448]; void *
 * 000000018004CA03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CA08: nop
 * 000000018004CA09: lea     rcx, [rbp+9E20h+var_4428]; void *
 * 000000018004CA10: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CA15: nop
 * 000000018004CA16: lea     rcx, dword_180269400
 * 000000018004CA1D: call    _Init_thread_footer
 * 000000018004CA22: mov     rax, [rdi+rbx*8]
 * 000000018004CA26: mov     eax, [r15+rax]
 * 000000018004CA2A: cmp     cs:dword_180269408, eax
 * 000000018004CA30: jle     loc_18004CB1A
 * 000000018004CA36: lea     rcx, dword_180269408
 * 000000018004CA3D: call    _Init_thread_header
 * 000000018004CA42: cmp     cs:dword_180269408, r14d
 * 000000018004CA49: jnz     loc_18004CB1A
 * 000000018004CA4F: lea     rax, unk_1801761B0
 * 000000018004CA56: mov     qword ptr [rbp+9E20h+var_9760], rax
 * 000000018004CA5D: lea     rax, unk_18017C8DC
 * 000000018004CA64: mov     qword ptr [rbp+9E20h+var_9760+8], rax
 * 000000018004CA6B: movups  xmm0, [rbp+9E20h+var_9760]
 * 000000018004CA72: movups  [rbp+9E20h+var_7B38], xmm0
 * 000000018004CA79: mov     dword ptr [rbp+9E20h+var_7B28], r13d
 * 000000018004CA80: mov     dword ptr [rbp+9E20h+var_7B28+4], esi
 * 000000018004CA86: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CA8B: movups  xmm0, [rbp+9E20h+var_7B28]
 * 000000018004CA92: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CA97: call    sub_1800455D0
 * 000000018004CA9C: mov     r8, rax
 * 000000018004CA9F: mov     r9d, r12d
 * 000000018004CAA2: mov     edx, 1A2h
 * 000000018004CAA7: lea     rcx, [rbp+9E20h+var_43C8]; Src
 * 000000018004CAAE: call    sub_1800D44B8
 * 000000018004CAB3: nop
 * 000000018004CAB4: mov     r8, rax
 * 000000018004CAB7: lea     rdx, aStandardshader_119; "StandardShader/ShaderModel40/"
 * 000000018004CABE: lea     rcx, [rbp+9E20h+var_43E8]
 * 000000018004CAC5: call    sub_1800453AC
 * 000000018004CACA: nop
 * 000000018004CACB: lea     r8, aPixel_117; "/Pixel"
 * 000000018004CAD2: mov     rdx, rax
 * 000000018004CAD5: lea     rcx, [rbp+9E20h+var_4408]
 * 000000018004CADC: call    sub_18002BF78
 * 000000018004CAE1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CAE6: mov     rcx, rax
 * 000000018004CAE9: call    sub_1800D45A4
 * 000000018004CAEE: mov     cs:byte_180269404, al
 * 000000018004CAF4: lea     rcx, [rbp+9E20h+var_43E8]; void *
 * 000000018004CAFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CB00: nop
 * 000000018004CB01: lea     rcx, [rbp+9E20h+var_43C8]; void *
 * 000000018004CB08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CB0D: nop
 * 000000018004CB0E: lea     rcx, dword_180269408
 * 000000018004CB15: call    _Init_thread_footer
 * 000000018004CB1A: mov     rax, [rdi+rbx*8]
 * 000000018004CB1E: mov     eax, [r15+rax]
 * 000000018004CB22: cmp     cs:dword_180269410, eax
 * 000000018004CB28: jle     loc_18004CC12
 * 000000018004CB2E: lea     rcx, dword_180269410
 * 000000018004CB35: call    _Init_thread_header
 * 000000018004CB3A: cmp     cs:dword_180269410, r14d
 * 000000018004CB41: jnz     loc_18004CC12
 * 000000018004CB47: lea     rax, unk_18017FDC0
 * 000000018004CB4E: mov     qword ptr [rbp+9E20h+var_9750], rax
 * 000000018004CB55: lea     rax, unk_18018667C
 * 000000018004CB5C: mov     qword ptr [rbp+9E20h+var_9750+8], rax
 * 000000018004CB63: movups  xmm0, [rbp+9E20h+var_9750]
 * 000000018004CB6A: movups  [rbp+9E20h+var_7B18], xmm0
 * 000000018004CB71: mov     dword ptr [rbp+9E20h+var_7B08], r13d
 * 000000018004CB78: mov     dword ptr [rbp+9E20h+var_7B08+4], esi
 * 000000018004CB7E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CB83: movups  xmm0, [rbp+9E20h+var_7B08]
 * 000000018004CB8A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CB8F: call    sub_1800455D0
 * 000000018004CB94: mov     r8, rax
 * 000000018004CB97: mov     r9d, r12d
 * 000000018004CB9A: mov     edx, 1A8h
 * 000000018004CB9F: lea     rcx, [rbp+9E20h+var_4368]; Src
 * 000000018004CBA6: call    sub_1800D44B8
 * 000000018004CBAB: nop
 * 000000018004CBAC: mov     r8, rax
 * 000000018004CBAF: lea     rdx, aStandardshader_120; "StandardShader/ShaderModel40/"
 * 000000018004CBB6: lea     rcx, [rbp+9E20h+var_4388]
 * 000000018004CBBD: call    sub_1800453AC
 * 000000018004CBC2: nop
 * 000000018004CBC3: lea     r8, aPixel_118; "/Pixel"
 * 000000018004CBCA: mov     rdx, rax
 * 000000018004CBCD: lea     rcx, [rbp+9E20h+var_43A8]
 * 000000018004CBD4: call    sub_18002BF78
 * 000000018004CBD9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CBDE: mov     rcx, rax
 * 000000018004CBE1: call    sub_1800D45A4
 * 000000018004CBE6: mov     cs:byte_18026940C, al
 * 000000018004CBEC: lea     rcx, [rbp+9E20h+var_4388]; void *
 * 000000018004CBF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CBF8: nop
 * 000000018004CBF9: lea     rcx, [rbp+9E20h+var_4368]; void *
 * 000000018004CC00: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CC05: nop
 * 000000018004CC06: lea     rcx, dword_180269410
 * 000000018004CC0D: call    _Init_thread_footer
 * 000000018004CC12: mov     rax, [rdi+rbx*8]
 * 000000018004CC16: mov     eax, [r15+rax]
 * 000000018004CC1A: cmp     cs:dword_180269418, eax
 * 000000018004CC20: jle     loc_18004CD0A
 * 000000018004CC26: lea     rcx, dword_180269418
 * 000000018004CC2D: call    _Init_thread_header
 * 000000018004CC32: cmp     cs:dword_180269418, r14d
 * 000000018004CC39: jnz     loc_18004CD0A
 * 000000018004CC3F: lea     rax, unk_18017FDC0
 * 000000018004CC46: mov     qword ptr [rbp+9E20h+var_9740], rax
 * 000000018004CC4D: lea     rax, unk_18018667C
 * 000000018004CC54: mov     qword ptr [rbp+9E20h+var_9740+8], rax
 * 000000018004CC5B: movups  xmm0, [rbp+9E20h+var_9740]
 * 000000018004CC62: movups  [rbp+9E20h+var_7AF8], xmm0
 * 000000018004CC69: mov     dword ptr [rbp+9E20h+var_7AE8], r13d
 * 000000018004CC70: mov     dword ptr [rbp+9E20h+var_7AE8+4], esi
 * 000000018004CC76: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CC7B: movups  xmm0, [rbp+9E20h+var_7AE8]
 * 000000018004CC82: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CC87: call    sub_1800455D0
 * 000000018004CC8C: mov     r8, rax
 * 000000018004CC8F: mov     r9d, r12d
 * 000000018004CC92: mov     edx, 1AAh
 * 000000018004CC97: lea     rcx, [rbp+9E20h+var_4308]; Src
 * 000000018004CC9E: call    sub_1800D44B8
 * 000000018004CCA3: nop
 * 000000018004CCA4: mov     r8, rax
 * 000000018004CCA7: lea     rdx, aStandardshader_121; "StandardShader/ShaderModel40/"
 * 000000018004CCAE: lea     rcx, [rbp+9E20h+var_4328]
 * 000000018004CCB5: call    sub_1800453AC
 * 000000018004CCBA: nop
 * 000000018004CCBB: lea     r8, aPixel_119; "/Pixel"
 * 000000018004CCC2: mov     rdx, rax
 * 000000018004CCC5: lea     rcx, [rbp+9E20h+var_4348]
 * 000000018004CCCC: call    sub_18002BF78
 * 000000018004CCD1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CCD6: mov     rcx, rax
 * 000000018004CCD9: call    sub_1800D45A4
 * 000000018004CCDE: mov     cs:byte_180269414, al
 * 000000018004CCE4: lea     rcx, [rbp+9E20h+var_4328]; void *
 * 000000018004CCEB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CCF0: nop
 * 000000018004CCF1: lea     rcx, [rbp+9E20h+var_4308]; void *
 * 000000018004CCF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CCFD: nop
 * 000000018004CCFE: lea     rcx, dword_180269418
 * 000000018004CD05: call    _Init_thread_footer
 * 000000018004CD0A: mov     rax, [rdi+rbx*8]
 * 000000018004CD0E: mov     eax, [r15+rax]
 * 000000018004CD12: cmp     cs:dword_180269420, eax
 * 000000018004CD18: jle     loc_18004CE02
 * 000000018004CD1E: lea     rcx, dword_180269420
 * 000000018004CD25: call    _Init_thread_header
 * 000000018004CD2A: cmp     cs:dword_180269420, r14d
 * 000000018004CD31: jnz     loc_18004CE02
 * 000000018004CD37: lea     rax, unk_180186680
 * 000000018004CD3E: mov     qword ptr [rbp+9E20h+var_9730], rax
 * 000000018004CD45: lea     rax, unk_18018CF88
 * 000000018004CD4C: mov     qword ptr [rbp+9E20h+var_9730+8], rax
 * 000000018004CD53: movups  xmm0, [rbp+9E20h+var_9730]
 * 000000018004CD5A: movups  [rbp+9E20h+var_7AD8], xmm0
 * 000000018004CD61: mov     dword ptr [rbp+9E20h+var_7AC8], r13d
 * 000000018004CD68: mov     dword ptr [rbp+9E20h+var_7AC8+4], esi
 * 000000018004CD6E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CD73: movups  xmm0, [rbp+9E20h+var_7AC8]
 * 000000018004CD7A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CD7F: call    sub_1800455D0
 * 000000018004CD84: mov     r8, rax
 * 000000018004CD87: mov     r9d, r12d
 * 000000018004CD8A: mov     edx, 1B0h
 * 000000018004CD8F: lea     rcx, [rbp+9E20h+var_42A8]; Src
 * 000000018004CD96: call    sub_1800D44B8
 * 000000018004CD9B: nop
 * 000000018004CD9C: mov     r8, rax
 * 000000018004CD9F: lea     rdx, aStandardshader_122; "StandardShader/ShaderModel40/"
 * 000000018004CDA6: lea     rcx, [rbp+9E20h+var_42C8]
 * 000000018004CDAD: call    sub_1800453AC
 * 000000018004CDB2: nop
 * 000000018004CDB3: lea     r8, aPixel_120; "/Pixel"
 * 000000018004CDBA: mov     rdx, rax
 * 000000018004CDBD: lea     rcx, [rbp+9E20h+var_42E8]
 * 000000018004CDC4: call    sub_18002BF78
 * 000000018004CDC9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CDCE: mov     rcx, rax
 * 000000018004CDD1: call    sub_1800D45A4
 * 000000018004CDD6: mov     cs:byte_18026941C, al
 * 000000018004CDDC: lea     rcx, [rbp+9E20h+var_42C8]; void *
 * 000000018004CDE3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CDE8: nop
 * 000000018004CDE9: lea     rcx, [rbp+9E20h+var_42A8]; void *
 * 000000018004CDF0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CDF5: nop
 * 000000018004CDF6: lea     rcx, dword_180269420
 * 000000018004CDFD: call    _Init_thread_footer
 * 000000018004CE02: mov     rax, [rdi+rbx*8]
 * 000000018004CE06: mov     eax, [r15+rax]
 * 000000018004CE0A: cmp     cs:dword_180269428, eax
 * 000000018004CE10: jle     loc_18004CEFA
 * 000000018004CE16: lea     rcx, dword_180269428
 * 000000018004CE1D: call    _Init_thread_header
 * 000000018004CE22: cmp     cs:dword_180269428, r14d
 * 000000018004CE29: jnz     loc_18004CEFA
 * 000000018004CE2F: lea     rax, unk_180186680
 * 000000018004CE36: mov     qword ptr [rbp+9E20h+var_9720], rax
 * 000000018004CE3D: lea     rax, unk_18018CF88
 * 000000018004CE44: mov     qword ptr [rbp+9E20h+var_9720+8], rax
 * 000000018004CE4B: movups  xmm0, [rbp+9E20h+var_9720]
 * 000000018004CE52: movups  [rbp+9E20h+var_7AB8], xmm0
 * 000000018004CE59: mov     dword ptr [rbp+9E20h+var_7AA8], r13d
 * 000000018004CE60: mov     dword ptr [rbp+9E20h+var_7AA8+4], esi
 * 000000018004CE66: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CE6B: movups  xmm0, [rbp+9E20h+var_7AA8]
 * 000000018004CE72: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CE77: call    sub_1800455D0
 * 000000018004CE7C: mov     r8, rax
 * 000000018004CE7F: mov     r9d, r12d
 * 000000018004CE82: mov     edx, 1B2h
 * 000000018004CE87: lea     rcx, [rbp+9E20h+var_4248]; Src
 * 000000018004CE8E: call    sub_1800D44B8
 * 000000018004CE93: nop
 * 000000018004CE94: mov     r8, rax
 * 000000018004CE97: lea     rdx, aStandardshader_123; "StandardShader/ShaderModel40/"
 * 000000018004CE9E: lea     rcx, [rbp+9E20h+var_4268]
 * 000000018004CEA5: call    sub_1800453AC
 * 000000018004CEAA: nop
 * 000000018004CEAB: lea     r8, aPixel_121; "/Pixel"
 * 000000018004CEB2: mov     rdx, rax
 * 000000018004CEB5: lea     rcx, [rbp+9E20h+var_4288]
 * 000000018004CEBC: call    sub_18002BF78
 * 000000018004CEC1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CEC6: mov     rcx, rax
 * 000000018004CEC9: call    sub_1800D45A4
 * 000000018004CECE: mov     cs:byte_180269424, al
 * 000000018004CED4: lea     rcx, [rbp+9E20h+var_4268]; void *
 * 000000018004CEDB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CEE0: nop
 * 000000018004CEE1: lea     rcx, [rbp+9E20h+var_4248]; void *
 * 000000018004CEE8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CEED: nop
 * 000000018004CEEE: lea     rcx, dword_180269428
 * 000000018004CEF5: call    _Init_thread_footer
 * 000000018004CEFA: mov     rax, [rdi+rbx*8]
 * 000000018004CEFE: mov     eax, [r15+rax]
 * 000000018004CF02: cmp     cs:dword_180269430, eax
 * 000000018004CF08: jle     loc_18004CFF2
 * 000000018004CF0E: lea     rcx, dword_180269430
 * 000000018004CF15: call    _Init_thread_header
 * 000000018004CF1A: cmp     cs:dword_180269430, r14d
 * 000000018004CF21: jnz     loc_18004CFF2
 * 000000018004CF27: lea     rax, unk_1801905B0
 * 000000018004CF2E: mov     qword ptr [rbp+9E20h+var_9710], rax
 * 000000018004CF35: lea     rax, unk_18019706C
 * 000000018004CF3C: mov     qword ptr [rbp+9E20h+var_9710+8], rax
 * 000000018004CF43: movups  xmm0, [rbp+9E20h+var_9710]
 * 000000018004CF4A: movups  [rbp+9E20h+var_7A98], xmm0
 * 000000018004CF51: mov     dword ptr [rbp+9E20h+var_7A88], r13d
 * 000000018004CF58: mov     dword ptr [rbp+9E20h+var_7A88+4], esi
 * 000000018004CF5E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CF63: movups  xmm0, [rbp+9E20h+var_7A88]
 * 000000018004CF6A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CF6F: call    sub_1800455D0
 * 000000018004CF74: mov     r8, rax
 * 000000018004CF77: mov     r9d, r12d
 * 000000018004CF7A: mov     edx, 1B8h
 * 000000018004CF7F: lea     rcx, [rbp+9E20h+var_41E8]; Src
 * 000000018004CF86: call    sub_1800D44B8
 * 000000018004CF8B: nop
 * 000000018004CF8C: mov     r8, rax
 * 000000018004CF8F: lea     rdx, aStandardshader_124; "StandardShader/ShaderModel40/"
 * 000000018004CF96: lea     rcx, [rbp+9E20h+var_4208]
 * 000000018004CF9D: call    sub_1800453AC
 * 000000018004CFA2: nop
 * 000000018004CFA3: lea     r8, aPixel_122; "/Pixel"
 * 000000018004CFAA: mov     rdx, rax
 * 000000018004CFAD: lea     rcx, [rbp+9E20h+var_4228]
 * 000000018004CFB4: call    sub_18002BF78
 * 000000018004CFB9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CFBE: mov     rcx, rax
 * 000000018004CFC1: call    sub_1800D45A4
 * 000000018004CFC6: mov     cs:byte_18026942C, al
 * 000000018004CFCC: lea     rcx, [rbp+9E20h+var_4208]; void *
 * 000000018004CFD3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CFD8: nop
 * 000000018004CFD9: lea     rcx, [rbp+9E20h+var_41E8]; void *
 * 000000018004CFE0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CFE5: nop
 * 000000018004CFE6: lea     rcx, dword_180269430
 * 000000018004CFED: call    _Init_thread_footer
 * 000000018004CFF2: mov     rax, [rdi+rbx*8]
 * 000000018004CFF6: mov     eax, [r15+rax]
 * 000000018004CFFA: cmp     cs:dword_180269438, eax
 * 000000018004D000: jle     loc_18004D0EA
 * 000000018004D006: lea     rcx, dword_180269438
 * 000000018004D00D: call    _Init_thread_header
 * 000000018004D012: cmp     cs:dword_180269438, r14d
 * 000000018004D019: jnz     loc_18004D0EA
 * 000000018004D01F: lea     rax, unk_1801905B0
 * 000000018004D026: mov     qword ptr [rbp+9E20h+var_9700], rax
 * 000000018004D02D: lea     rax, unk_18019706C
 * 000000018004D034: mov     qword ptr [rbp+9E20h+var_9700+8], rax
 * 000000018004D03B: movups  xmm0, [rbp+9E20h+var_9700]
 * 000000018004D042: movups  [rbp+9E20h+var_7A78], xmm0
 * 000000018004D049: mov     dword ptr [rbp+9E20h+var_7A68], r13d
 * 000000018004D050: mov     dword ptr [rbp+9E20h+var_7A68+4], esi
 * 000000018004D056: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D05B: movups  xmm0, [rbp+9E20h+var_7A68]
 * 000000018004D062: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D067: call    sub_1800455D0
 * 000000018004D06C: mov     r8, rax
 * 000000018004D06F: mov     r9d, r12d
 * 000000018004D072: mov     edx, 1BAh
 * 000000018004D077: lea     rcx, [rbp+9E20h+var_4188]; Src
 * 000000018004D07E: call    sub_1800D44B8
 * 000000018004D083: nop
 * 000000018004D084: mov     r8, rax
 * 000000018004D087: lea     rdx, aStandardshader_125; "StandardShader/ShaderModel40/"
 * 000000018004D08E: lea     rcx, [rbp+9E20h+var_41A8]
 * 000000018004D095: call    sub_1800453AC
 * 000000018004D09A: nop
 * 000000018004D09B: lea     r8, aPixel_123; "/Pixel"
 * 000000018004D0A2: mov     rdx, rax
 * 000000018004D0A5: lea     rcx, [rbp+9E20h+var_41C8]
 * 000000018004D0AC: call    sub_18002BF78
 * 000000018004D0B1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D0B6: mov     rcx, rax
 * 000000018004D0B9: call    sub_1800D45A4
 * 000000018004D0BE: mov     cs:byte_180269434, al
 * 000000018004D0C4: lea     rcx, [rbp+9E20h+var_41A8]; void *
 * 000000018004D0CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D0D0: nop
 * 000000018004D0D1: lea     rcx, [rbp+9E20h+var_4188]; void *
 * 000000018004D0D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D0DD: nop
 * 000000018004D0DE: lea     rcx, dword_180269438
 * 000000018004D0E5: call    _Init_thread_footer
 * 000000018004D0EA: mov     rax, [rdi+rbx*8]
 * 000000018004D0EE: mov     eax, [r15+rax]
 * 000000018004D0F2: cmp     cs:dword_180269440, eax
 * 000000018004D0F8: jle     loc_18004D1E2
 * 000000018004D0FE: lea     rcx, dword_180269440
 * 000000018004D105: call    _Init_thread_header
 * 000000018004D10A: cmp     cs:dword_180269440, r14d
 * 000000018004D111: jnz     loc_18004D1E2
 * 000000018004D117: lea     rax, unk_1801761B0
 * 000000018004D11E: mov     qword ptr [rbp+9E20h+var_96F0], rax
 * 000000018004D125: lea     rax, unk_18017C8DC
 * 000000018004D12C: mov     qword ptr [rbp+9E20h+var_96F0+8], rax
 * 000000018004D133: movups  xmm0, [rbp+9E20h+var_96F0]
 * 000000018004D13A: movups  [rbp+9E20h+var_7A58], xmm0
 * 000000018004D141: mov     dword ptr [rbp+9E20h+var_7A48], r13d
 * 000000018004D148: mov     dword ptr [rbp+9E20h+var_7A48+4], esi
 * 000000018004D14E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D153: movups  xmm0, [rbp+9E20h+var_7A48]
 * 000000018004D15A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D15F: call    sub_1800455D0
 * 000000018004D164: mov     r8, rax
 * 000000018004D167: mov     r9d, r12d
 * 000000018004D16A: mov     edx, 1C0h
 * 000000018004D16F: lea     rcx, [rbp+9E20h+var_4128]; Src
 * 000000018004D176: call    sub_1800D44B8
 * 000000018004D17B: nop
 * 000000018004D17C: mov     r8, rax
 * 000000018004D17F: lea     rdx, aStandardshader_126; "StandardShader/ShaderModel40/"
 * 000000018004D186: lea     rcx, [rbp+9E20h+var_4148]
 * 000000018004D18D: call    sub_1800453AC
 * 000000018004D192: nop
 * 000000018004D193: lea     r8, aPixel_124; "/Pixel"
 * 000000018004D19A: mov     rdx, rax
 * 000000018004D19D: lea     rcx, [rbp+9E20h+var_4168]
 * 000000018004D1A4: call    sub_18002BF78
 * 000000018004D1A9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D1AE: mov     rcx, rax
 * 000000018004D1B1: call    sub_1800D45A4
 * 000000018004D1B6: mov     cs:byte_18026943C, al
 * 000000018004D1BC: lea     rcx, [rbp+9E20h+var_4148]; void *
 * 000000018004D1C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D1C8: nop
 * 000000018004D1C9: lea     rcx, [rbp+9E20h+var_4128]; void *
 * 000000018004D1D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D1D5: nop
 * 000000018004D1D6: lea     rcx, dword_180269440
 * 000000018004D1DD: call    _Init_thread_footer
 * 000000018004D1E2: mov     rax, [rdi+rbx*8]
 * 000000018004D1E6: mov     eax, [r15+rax]
 * 000000018004D1EA: cmp     cs:dword_180269448, eax
 * 000000018004D1F0: jle     loc_18004D2DA
 * 000000018004D1F6: lea     rcx, dword_180269448
 * 000000018004D1FD: call    _Init_thread_header
 * 000000018004D202: cmp     cs:dword_180269448, r14d
 * 000000018004D209: jnz     loc_18004D2DA
 * 000000018004D20F: lea     rax, unk_1801761B0
 * 000000018004D216: mov     qword ptr [rbp+9E20h+var_96E0], rax
 * 000000018004D21D: lea     rax, unk_18017C8DC
 * 000000018004D224: mov     qword ptr [rbp+9E20h+var_96E0+8], rax
 * 000000018004D22B: movups  xmm0, [rbp+9E20h+var_96E0]
 * 000000018004D232: movups  [rbp+9E20h+var_7A38], xmm0
 * 000000018004D239: mov     dword ptr [rbp+9E20h+var_7A28], r13d
 * 000000018004D240: mov     dword ptr [rbp+9E20h+var_7A28+4], esi
 * 000000018004D246: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D24B: movups  xmm0, [rbp+9E20h+var_7A28]
 * 000000018004D252: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D257: call    sub_1800455D0
 * 000000018004D25C: mov     r8, rax
 * 000000018004D25F: mov     r9d, r12d
 * 000000018004D262: mov     edx, 1C2h
 * 000000018004D267: lea     rcx, [rbp+9E20h+var_40C8]; Src
 * 000000018004D26E: call    sub_1800D44B8
 * 000000018004D273: nop
 * 000000018004D274: mov     r8, rax
 * 000000018004D277: lea     rdx, aStandardshader_127; "StandardShader/ShaderModel40/"
 * 000000018004D27E: lea     rcx, [rbp+9E20h+var_40E8]
 * 000000018004D285: call    sub_1800453AC
 * 000000018004D28A: nop
 * 000000018004D28B: lea     r8, aPixel_125; "/Pixel"
 * 000000018004D292: mov     rdx, rax
 * 000000018004D295: lea     rcx, [rbp+9E20h+var_4108]
 * 000000018004D29C: call    sub_18002BF78
 * 000000018004D2A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D2A6: mov     rcx, rax
 * 000000018004D2A9: call    sub_1800D45A4
 * 000000018004D2AE: mov     cs:byte_180269444, al
 * 000000018004D2B4: lea     rcx, [rbp+9E20h+var_40E8]; void *
 * 000000018004D2BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D2C0: nop
 * 000000018004D2C1: lea     rcx, [rbp+9E20h+var_40C8]; void *
 * 000000018004D2C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D2CD: nop
 * 000000018004D2CE: lea     rcx, dword_180269448
 * 000000018004D2D5: call    _Init_thread_footer
 * 000000018004D2DA: mov     rax, [rdi+rbx*8]
 * 000000018004D2DE: mov     eax, [r15+rax]
 * 000000018004D2E2: cmp     cs:dword_180269450, eax
 * 000000018004D2E8: jle     loc_18004D3D2
 * 000000018004D2EE: lea     rcx, dword_180269450
 * 000000018004D2F5: call    _Init_thread_header
 * 000000018004D2FA: cmp     cs:dword_180269450, r14d
 * 000000018004D301: jnz     loc_18004D3D2
 * 000000018004D307: lea     rax, unk_18017FDC0
 * 000000018004D30E: mov     qword ptr [rbp+9E20h+var_96D0], rax
 * 000000018004D315: lea     rax, unk_18018667C
 * 000000018004D31C: mov     qword ptr [rbp+9E20h+var_96D0+8], rax
 * 000000018004D323: movups  xmm0, [rbp+9E20h+var_96D0]
 * 000000018004D32A: movups  [rbp+9E20h+var_7A18], xmm0
 * 000000018004D331: mov     dword ptr [rbp+9E20h+var_7A08], r13d
 * 000000018004D338: mov     dword ptr [rbp+9E20h+var_7A08+4], esi
 * 000000018004D33E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D343: movups  xmm0, [rbp+9E20h+var_7A08]
 * 000000018004D34A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D34F: call    sub_1800455D0
 * 000000018004D354: mov     r8, rax
 * 000000018004D357: mov     r9d, r12d
 * 000000018004D35A: mov     edx, 1C8h
 * 000000018004D35F: lea     rcx, [rbp+9E20h+var_4068]; Src
 * 000000018004D366: call    sub_1800D44B8
 * 000000018004D36B: nop
 * 000000018004D36C: mov     r8, rax
 * 000000018004D36F: lea     rdx, aStandardshader_128; "StandardShader/ShaderModel40/"
 * 000000018004D376: lea     rcx, [rbp+9E20h+var_4088]
 * 000000018004D37D: call    sub_1800453AC
 * 000000018004D382: nop
 * 000000018004D383: lea     r8, aPixel_126; "/Pixel"
 * 000000018004D38A: mov     rdx, rax
 * 000000018004D38D: lea     rcx, [rbp+9E20h+var_40A8]
 * 000000018004D394: call    sub_18002BF78
 * 000000018004D399: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D39E: mov     rcx, rax
 * 000000018004D3A1: call    sub_1800D45A4
 * 000000018004D3A6: mov     cs:byte_18026944C, al
 * 000000018004D3AC: lea     rcx, [rbp+9E20h+var_4088]; void *
 * 000000018004D3B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D3B8: nop
 * 000000018004D3B9: lea     rcx, [rbp+9E20h+var_4068]; void *
 * 000000018004D3C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D3C5: nop
 * 000000018004D3C6: lea     rcx, dword_180269450
 * 000000018004D3CD: call    _Init_thread_footer
 * 000000018004D3D2: mov     rax, [rdi+rbx*8]
 * 000000018004D3D6: mov     eax, [r15+rax]
 * 000000018004D3DA: cmp     cs:dword_180269458, eax
 * 000000018004D3E0: jle     loc_18004D4CA
 * 000000018004D3E6: lea     rcx, dword_180269458
 * 000000018004D3ED: call    _Init_thread_header
 * 000000018004D3F2: cmp     cs:dword_180269458, r14d
 * 000000018004D3F9: jnz     loc_18004D4CA
 * 000000018004D3FF: lea     rax, unk_18017FDC0
 * 000000018004D406: mov     qword ptr [rbp+9E20h+var_96C0], rax
 * 000000018004D40D: lea     rax, unk_18018667C
 * 000000018004D414: mov     qword ptr [rbp+9E20h+var_96C0+8], rax
 * 000000018004D41B: movups  xmm0, [rbp+9E20h+var_96C0]
 * 000000018004D422: movups  [rbp+9E20h+var_79F8], xmm0
 * 000000018004D429: mov     dword ptr [rbp+9E20h+var_79E8], r13d
 * 000000018004D430: mov     dword ptr [rbp+9E20h+var_79E8+4], esi
 * 000000018004D436: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D43B: movups  xmm0, [rbp+9E20h+var_79E8]
 * 000000018004D442: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D447: call    sub_1800455D0
 * 000000018004D44C: mov     r8, rax
 * 000000018004D44F: mov     r9d, r12d
 * 000000018004D452: mov     edx, 1CAh
 * 000000018004D457: lea     rcx, [rbp+9E20h+var_4008]; Src
 * 000000018004D45E: call    sub_1800D44B8
 * 000000018004D463: nop
 * 000000018004D464: mov     r8, rax
 * 000000018004D467: lea     rdx, aStandardshader_129; "StandardShader/ShaderModel40/"
 * 000000018004D46E: lea     rcx, [rbp+9E20h+var_4028]
 * 000000018004D475: call    sub_1800453AC
 * 000000018004D47A: nop
 * 000000018004D47B: lea     r8, aPixel_127; "/Pixel"
 * 000000018004D482: mov     rdx, rax
 * 000000018004D485: lea     rcx, [rbp+9E20h+var_4048]
 * 000000018004D48C: call    sub_18002BF78
 * 000000018004D491: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D496: mov     rcx, rax
 * 000000018004D499: call    sub_1800D45A4
 * 000000018004D49E: mov     cs:byte_180269454, al
 * 000000018004D4A4: lea     rcx, [rbp+9E20h+var_4028]; void *
 * 000000018004D4AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D4B0: nop
 * 000000018004D4B1: lea     rcx, [rbp+9E20h+var_4008]; void *
 * 000000018004D4B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D4BD: nop
 * 000000018004D4BE: lea     rcx, dword_180269458
 * 000000018004D4C5: call    _Init_thread_footer
 * 000000018004D4CA: mov     rax, [rdi+rbx*8]
 * 000000018004D4CE: mov     eax, [r15+rax]
 * 000000018004D4D2: cmp     cs:dword_180269460, eax
 * 000000018004D4D8: jle     loc_18004D5C2
 * 000000018004D4DE: lea     rcx, dword_180269460
 * 000000018004D4E5: call    _Init_thread_header
 * 000000018004D4EA: cmp     cs:dword_180269460, r14d
 * 000000018004D4F1: jnz     loc_18004D5C2
 * 000000018004D4F7: lea     rax, unk_180186680
 * 000000018004D4FE: mov     qword ptr [rbp+9E20h+var_96B0], rax
 * 000000018004D505: lea     rax, unk_18018CF88
 * 000000018004D50C: mov     qword ptr [rbp+9E20h+var_96B0+8], rax
 * 000000018004D513: movups  xmm0, [rbp+9E20h+var_96B0]
 * 000000018004D51A: movups  [rbp+9E20h+var_79D8], xmm0
 * 000000018004D521: mov     dword ptr [rbp+9E20h+var_79C8], r13d
 * 000000018004D528: mov     dword ptr [rbp+9E20h+var_79C8+4], esi
 * 000000018004D52E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D533: movups  xmm0, [rbp+9E20h+var_79C8]
 * 000000018004D53A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D53F: call    sub_1800455D0
 * 000000018004D544: mov     r8, rax
 * 000000018004D547: mov     r9d, r12d
 * 000000018004D54A: mov     edx, 1D0h
 * 000000018004D54F: lea     rcx, [rbp+9E20h+var_3FA8]; Src
 * 000000018004D556: call    sub_1800D44B8
 * 000000018004D55B: nop
 * 000000018004D55C: mov     r8, rax
 * 000000018004D55F: lea     rdx, aStandardshader_130; "StandardShader/ShaderModel40/"
 * 000000018004D566: lea     rcx, [rbp+9E20h+var_3FC8]
 * 000000018004D56D: call    sub_1800453AC
 * 000000018004D572: nop
 * 000000018004D573: lea     r8, aPixel_128; "/Pixel"
 * 000000018004D57A: mov     rdx, rax
 * 000000018004D57D: lea     rcx, [rbp+9E20h+var_3FE8]
 * 000000018004D584: call    sub_18002BF78
 * 000000018004D589: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D58E: mov     rcx, rax
 * 000000018004D591: call    sub_1800D45A4
 * 000000018004D596: mov     cs:byte_18026945C, al
 * 000000018004D59C: lea     rcx, [rbp+9E20h+var_3FC8]; void *
 * 000000018004D5A3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D5A8: nop
 * 000000018004D5A9: lea     rcx, [rbp+9E20h+var_3FA8]; void *
 * 000000018004D5B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D5B5: nop
 * 000000018004D5B6: lea     rcx, dword_180269460
 * 000000018004D5BD: call    _Init_thread_footer
 * 000000018004D5C2: mov     rax, [rdi+rbx*8]
 * 000000018004D5C6: mov     eax, [r15+rax]
 * 000000018004D5CA: cmp     cs:dword_180269468, eax
 * 000000018004D5D0: jle     loc_18004D6BA
 * 000000018004D5D6: lea     rcx, dword_180269468
 * 000000018004D5DD: call    _Init_thread_header
 * 000000018004D5E2: cmp     cs:dword_180269468, r14d
 * 000000018004D5E9: jnz     loc_18004D6BA
 * 000000018004D5EF: lea     rax, unk_180186680
 * 000000018004D5F6: mov     qword ptr [rbp+9E20h+var_96A0], rax
 * 000000018004D5FD: lea     rax, unk_18018CF88
 * 000000018004D604: mov     qword ptr [rbp+9E20h+var_96A0+8], rax
 * 000000018004D60B: movups  xmm0, [rbp+9E20h+var_96A0]
 * 000000018004D612: movups  [rbp+9E20h+var_79B8], xmm0
 * 000000018004D619: mov     dword ptr [rbp+9E20h+var_79A8], r13d
 * 000000018004D620: mov     dword ptr [rbp+9E20h+var_79A8+4], esi
 * 000000018004D626: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D62B: movups  xmm0, [rbp+9E20h+var_79A8]
 * 000000018004D632: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D637: call    sub_1800455D0
 * 000000018004D63C: mov     r8, rax
 * 000000018004D63F: mov     r9d, r12d
 * 000000018004D642: mov     edx, 1D2h
 * 000000018004D647: lea     rcx, [rbp+9E20h+var_3F48]; Src
 * 000000018004D64E: call    sub_1800D44B8
 * 000000018004D653: nop
 * 000000018004D654: mov     r8, rax
 * 000000018004D657: lea     rdx, aStandardshader_131; "StandardShader/ShaderModel40/"
 * 000000018004D65E: lea     rcx, [rbp+9E20h+var_3F68]
 * 000000018004D665: call    sub_1800453AC
 * 000000018004D66A: nop
 * 000000018004D66B: lea     r8, aPixel_129; "/Pixel"
 * 000000018004D672: mov     rdx, rax
 * 000000018004D675: lea     rcx, [rbp+9E20h+var_3F88]
 * 000000018004D67C: call    sub_18002BF78
 * 000000018004D681: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D686: mov     rcx, rax
 * 000000018004D689: call    sub_1800D45A4
 * 000000018004D68E: mov     cs:byte_180269464, al
 * 000000018004D694: lea     rcx, [rbp+9E20h+var_3F68]; void *
 * 000000018004D69B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D6A0: nop
 * 000000018004D6A1: lea     rcx, [rbp+9E20h+var_3F48]; void *
 * 000000018004D6A8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D6AD: nop
 * 000000018004D6AE: lea     rcx, dword_180269468
 * 000000018004D6B5: call    _Init_thread_footer
 * 000000018004D6BA: mov     rax, [rdi+rbx*8]
 * 000000018004D6BE: mov     eax, [r15+rax]
 * 000000018004D6C2: cmp     cs:dword_180269470, eax
 * 000000018004D6C8: jle     loc_18004D7B2
 * 000000018004D6CE: lea     rcx, dword_180269470
 * 000000018004D6D5: call    _Init_thread_header
 * 000000018004D6DA: cmp     cs:dword_180269470, r14d
 * 000000018004D6E1: jnz     loc_18004D7B2
 * 000000018004D6E7: lea     rax, unk_1801905B0
 * 000000018004D6EE: mov     qword ptr [rbp+9E20h+var_9690], rax
 * 000000018004D6F5: lea     rax, unk_18019706C
 * 000000018004D6FC: mov     qword ptr [rbp+9E20h+var_9690+8], rax
 * 000000018004D703: movups  xmm0, [rbp+9E20h+var_9690]
 * 000000018004D70A: movups  [rbp+9E20h+var_7998], xmm0
 * 000000018004D711: mov     dword ptr [rbp+9E20h+var_7988], r13d
 * 000000018004D718: mov     dword ptr [rbp+9E20h+var_7988+4], esi
 * 000000018004D71E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D723: movups  xmm0, [rbp+9E20h+var_7988]
 * 000000018004D72A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D72F: call    sub_1800455D0
 * 000000018004D734: mov     r8, rax
 * 000000018004D737: mov     r9d, r12d
 * 000000018004D73A: mov     edx, 1D8h
 * 000000018004D73F: lea     rcx, [rbp+9E20h+var_3EE8]; Src
 * 000000018004D746: call    sub_1800D44B8
 * 000000018004D74B: nop
 * 000000018004D74C: mov     r8, rax
 * 000000018004D74F: lea     rdx, aStandardshader_132; "StandardShader/ShaderModel40/"
 * 000000018004D756: lea     rcx, [rbp+9E20h+var_3F08]
 * 000000018004D75D: call    sub_1800453AC
 * 000000018004D762: nop
 * 000000018004D763: lea     r8, aPixel_130; "/Pixel"
 * 000000018004D76A: mov     rdx, rax
 * 000000018004D76D: lea     rcx, [rbp+9E20h+var_3F28]
 * 000000018004D774: call    sub_18002BF78
 * 000000018004D779: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D77E: mov     rcx, rax
 * 000000018004D781: call    sub_1800D45A4
 * 000000018004D786: mov     cs:byte_18026946C, al
 * 000000018004D78C: lea     rcx, [rbp+9E20h+var_3F08]; void *
 * 000000018004D793: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D798: nop
 * 000000018004D799: lea     rcx, [rbp+9E20h+var_3EE8]; void *
 * 000000018004D7A0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D7A5: nop
 * 000000018004D7A6: lea     rcx, dword_180269470
 * 000000018004D7AD: call    _Init_thread_footer
 * 000000018004D7B2: mov     rax, [rdi+rbx*8]
 * 000000018004D7B6: mov     eax, [r15+rax]
 * 000000018004D7BA: cmp     cs:dword_180269478, eax
 * 000000018004D7C0: jle     loc_18004D8AA
 * 000000018004D7C6: lea     rcx, dword_180269478
 * 000000018004D7CD: call    _Init_thread_header
 * 000000018004D7D2: cmp     cs:dword_180269478, r14d
 * 000000018004D7D9: jnz     loc_18004D8AA
 * 000000018004D7DF: lea     rax, unk_1801905B0
 * 000000018004D7E6: mov     qword ptr [rbp+9E20h+var_9680], rax
 * 000000018004D7ED: lea     rax, unk_18019706C
 * 000000018004D7F4: mov     qword ptr [rbp+9E20h+var_9680+8], rax
 * 000000018004D7FB: movups  xmm0, [rbp+9E20h+var_9680]
 * 000000018004D802: movups  [rbp+9E20h+var_7978], xmm0
 * 000000018004D809: mov     dword ptr [rbp+9E20h+var_7968], r13d
 * 000000018004D810: mov     dword ptr [rbp+9E20h+var_7968+4], esi
 * 000000018004D816: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D81B: movups  xmm0, [rbp+9E20h+var_7968]
 * 000000018004D822: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D827: call    sub_1800455D0
 * 000000018004D82C: mov     r8, rax
 * 000000018004D82F: mov     r9d, r12d
 * 000000018004D832: mov     edx, 1DAh
 * 000000018004D837: lea     rcx, [rbp+9E20h+var_3E88]; Src
 * 000000018004D83E: call    sub_1800D44B8
 * 000000018004D843: nop
 * 000000018004D844: mov     r8, rax
 * 000000018004D847: lea     rdx, aStandardshader_133; "StandardShader/ShaderModel40/"
 * 000000018004D84E: lea     rcx, [rbp+9E20h+var_3EA8]
 * 000000018004D855: call    sub_1800453AC
 * 000000018004D85A: nop
 * 000000018004D85B: lea     r8, aPixel_131; "/Pixel"
 * 000000018004D862: mov     rdx, rax
 * 000000018004D865: lea     rcx, [rbp+9E20h+var_3EC8]
 * 000000018004D86C: call    sub_18002BF78
 * 000000018004D871: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D876: mov     rcx, rax
 * 000000018004D879: call    sub_1800D45A4
 * 000000018004D87E: mov     cs:byte_180269474, al
 * 000000018004D884: lea     rcx, [rbp+9E20h+var_3EA8]; void *
 * 000000018004D88B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D890: nop
 * 000000018004D891: lea     rcx, [rbp+9E20h+var_3E88]; void *
 * 000000018004D898: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D89D: nop
 * 000000018004D89E: lea     rcx, dword_180269478
 * 000000018004D8A5: call    _Init_thread_footer
 * 000000018004D8AA: mov     rax, [rdi+rbx*8]
 * 000000018004D8AE: mov     eax, [r15+rax]
 * 000000018004D8B2: cmp     cs:dword_180269480, eax
 * 000000018004D8B8: jle     loc_18004D9A2
 * 000000018004D8BE: lea     rcx, dword_180269480
 * 000000018004D8C5: call    _Init_thread_header
 * 000000018004D8CA: cmp     cs:dword_180269480, r14d
 * 000000018004D8D1: jnz     loc_18004D9A2
 * 000000018004D8D7: lea     rax, unk_1801761B0
 * 000000018004D8DE: mov     qword ptr [rbp+9E20h+var_9670], rax
 * 000000018004D8E5: lea     rax, unk_18017C8DC
 * 000000018004D8EC: mov     qword ptr [rbp+9E20h+var_9670+8], rax
 * 000000018004D8F3: movups  xmm0, [rbp+9E20h+var_9670]
 * 000000018004D8FA: movups  [rbp+9E20h+var_7958], xmm0
 * 000000018004D901: mov     dword ptr [rbp+9E20h+var_7948], r13d
 * 000000018004D908: mov     dword ptr [rbp+9E20h+var_7948+4], esi
 * 000000018004D90E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D913: movups  xmm0, [rbp+9E20h+var_7948]
 * 000000018004D91A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D91F: call    sub_1800455D0
 * 000000018004D924: mov     r8, rax
 * 000000018004D927: mov     r9d, r12d
 * 000000018004D92A: mov     edx, 1E0h
 * 000000018004D92F: lea     rcx, [rbp+9E20h+var_3E28]; Src
 * 000000018004D936: call    sub_1800D44B8
 * 000000018004D93B: nop
 * 000000018004D93C: mov     r8, rax
 * 000000018004D93F: lea     rdx, aStandardshader_134; "StandardShader/ShaderModel40/"
 * 000000018004D946: lea     rcx, [rbp+9E20h+var_3E48]
 * 000000018004D94D: call    sub_1800453AC
 * 000000018004D952: nop
 * 000000018004D953: lea     r8, aPixel_132; "/Pixel"
 * 000000018004D95A: mov     rdx, rax
 * 000000018004D95D: lea     rcx, [rbp+9E20h+var_3E68]
 * 000000018004D964: call    sub_18002BF78
 * 000000018004D969: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D96E: mov     rcx, rax
 * 000000018004D971: call    sub_1800D45A4
 * 000000018004D976: mov     cs:byte_18026947C, al
 * 000000018004D97C: lea     rcx, [rbp+9E20h+var_3E48]; void *
 * 000000018004D983: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D988: nop
 * 000000018004D989: lea     rcx, [rbp+9E20h+var_3E28]; void *
 * 000000018004D990: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D995: nop
 * 000000018004D996: lea     rcx, dword_180269480
 * 000000018004D99D: call    _Init_thread_footer
 * 000000018004D9A2: mov     rax, [rdi+rbx*8]
 * 000000018004D9A6: mov     eax, [r15+rax]
 * 000000018004D9AA: cmp     cs:dword_180269488, eax
 * 000000018004D9B0: jle     loc_18004DA9A
 * 000000018004D9B6: lea     rcx, dword_180269488
 * 000000018004D9BD: call    _Init_thread_header
 * 000000018004D9C2: cmp     cs:dword_180269488, r14d
 * 000000018004D9C9: jnz     loc_18004DA9A
 * 000000018004D9CF: lea     rax, unk_1801761B0
 * 000000018004D9D6: mov     qword ptr [rbp+9E20h+var_9660], rax
 * 000000018004D9DD: lea     rax, unk_18017C8DC
 * 000000018004D9E4: mov     qword ptr [rbp+9E20h+var_9660+8], rax
 * 000000018004D9EB: movups  xmm0, [rbp+9E20h+var_9660]
 * 000000018004D9F2: movups  [rbp+9E20h+var_7938], xmm0
 * 000000018004D9F9: mov     dword ptr [rbp+9E20h+var_7928], r13d
 * 000000018004DA00: mov     dword ptr [rbp+9E20h+var_7928+4], esi
 * 000000018004DA06: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DA0B: movups  xmm0, [rbp+9E20h+var_7928]
 * 000000018004DA12: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DA17: call    sub_1800455D0
 * 000000018004DA1C: mov     r8, rax
 * 000000018004DA1F: mov     r9d, r12d
 * 000000018004DA22: mov     edx, 1E2h
 * 000000018004DA27: lea     rcx, [rbp+9E20h+var_3DC8]; Src
 * 000000018004DA2E: call    sub_1800D44B8
 * 000000018004DA33: nop
 * 000000018004DA34: mov     r8, rax
 * 000000018004DA37: lea     rdx, aStandardshader_135; "StandardShader/ShaderModel40/"
 * 000000018004DA3E: lea     rcx, [rbp+9E20h+var_3DE8]
 * 000000018004DA45: call    sub_1800453AC
 * 000000018004DA4A: nop
 * 000000018004DA4B: lea     r8, aPixel_133; "/Pixel"
 * 000000018004DA52: mov     rdx, rax
 * 000000018004DA55: lea     rcx, [rbp+9E20h+var_3E08]
 * 000000018004DA5C: call    sub_18002BF78
 * 000000018004DA61: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DA66: mov     rcx, rax
 * 000000018004DA69: call    sub_1800D45A4
 * 000000018004DA6E: mov     cs:byte_180269484, al
 * 000000018004DA74: lea     rcx, [rbp+9E20h+var_3DE8]; void *
 * 000000018004DA7B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DA80: nop
 * 000000018004DA81: lea     rcx, [rbp+9E20h+var_3DC8]; void *
 * 000000018004DA88: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DA8D: nop
 * 000000018004DA8E: lea     rcx, dword_180269488
 * 000000018004DA95: call    _Init_thread_footer
 * 000000018004DA9A: mov     rax, [rdi+rbx*8]
 * 000000018004DA9E: mov     eax, [r15+rax]
 * 000000018004DAA2: cmp     cs:dword_180269490, eax
 * 000000018004DAA8: jle     loc_18004DB92
 * 000000018004DAAE: lea     rcx, dword_180269490
 * 000000018004DAB5: call    _Init_thread_header
 * 000000018004DABA: cmp     cs:dword_180269490, r14d
 * 000000018004DAC1: jnz     loc_18004DB92
 * 000000018004DAC7: lea     rax, unk_18017FDC0
 * 000000018004DACE: mov     qword ptr [rbp+9E20h+var_9650], rax
 * 000000018004DAD5: lea     rax, unk_18018667C
 * 000000018004DADC: mov     qword ptr [rbp+9E20h+var_9650+8], rax
 * 000000018004DAE3: movups  xmm0, [rbp+9E20h+var_9650]
 * 000000018004DAEA: movups  [rbp+9E20h+var_7918], xmm0
 * 000000018004DAF1: mov     dword ptr [rbp+9E20h+var_7908], r13d
 * 000000018004DAF8: mov     dword ptr [rbp+9E20h+var_7908+4], esi
 * 000000018004DAFE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DB03: movups  xmm0, [rbp+9E20h+var_7908]
 * 000000018004DB0A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DB0F: call    sub_1800455D0
 * 000000018004DB14: mov     r8, rax
 * 000000018004DB17: mov     r9d, r12d
 * 000000018004DB1A: mov     edx, 1E8h
 * 000000018004DB1F: lea     rcx, [rbp+9E20h+var_3D68]; Src
 * 000000018004DB26: call    sub_1800D44B8
 * 000000018004DB2B: nop
 * 000000018004DB2C: mov     r8, rax
 * 000000018004DB2F: lea     rdx, aStandardshader_136; "StandardShader/ShaderModel40/"
 * 000000018004DB36: lea     rcx, [rbp+9E20h+var_3D88]
 * 000000018004DB3D: call    sub_1800453AC
 * 000000018004DB42: nop
 * 000000018004DB43: lea     r8, aPixel_134; "/Pixel"
 * 000000018004DB4A: mov     rdx, rax
 * 000000018004DB4D: lea     rcx, [rbp+9E20h+var_3DA8]
 * 000000018004DB54: call    sub_18002BF78
 * 000000018004DB59: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DB5E: mov     rcx, rax
 * 000000018004DB61: call    sub_1800D45A4
 * 000000018004DB66: mov     cs:byte_18026948C, al
 * 000000018004DB6C: lea     rcx, [rbp+9E20h+var_3D88]; void *
 * 000000018004DB73: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DB78: nop
 * 000000018004DB79: lea     rcx, [rbp+9E20h+var_3D68]; void *
 * 000000018004DB80: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DB85: nop
 * 000000018004DB86: lea     rcx, dword_180269490
 * 000000018004DB8D: call    _Init_thread_footer
 * 000000018004DB92: mov     rax, [rdi+rbx*8]
 * 000000018004DB96: mov     eax, [r15+rax]
 * 000000018004DB9A: cmp     cs:dword_180269498, eax
 * 000000018004DBA0: jle     loc_18004DC8A
 * 000000018004DBA6: lea     rcx, dword_180269498
 * 000000018004DBAD: call    _Init_thread_header
 * 000000018004DBB2: cmp     cs:dword_180269498, r14d
 * 000000018004DBB9: jnz     loc_18004DC8A
 * 000000018004DBBF: lea     rax, unk_18017FDC0
 * 000000018004DBC6: mov     qword ptr [rbp+9E20h+var_9640], rax
 * 000000018004DBCD: lea     rax, unk_18018667C
 * 000000018004DBD4: mov     qword ptr [rbp+9E20h+var_9640+8], rax
 * 000000018004DBDB: movups  xmm0, [rbp+9E20h+var_9640]
 * 000000018004DBE2: movups  [rbp+9E20h+var_78F8], xmm0
 * 000000018004DBE9: mov     dword ptr [rbp+9E20h+var_78E8], r13d
 * 000000018004DBF0: mov     dword ptr [rbp+9E20h+var_78E8+4], esi
 * 000000018004DBF6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DBFB: movups  xmm0, [rbp+9E20h+var_78E8]
 * 000000018004DC02: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DC07: call    sub_1800455D0
 * 000000018004DC0C: mov     r8, rax
 * 000000018004DC0F: mov     r9d, r12d
 * 000000018004DC12: mov     edx, 1EAh
 * 000000018004DC17: lea     rcx, [rbp+9E20h+var_3D08]; Src
 * 000000018004DC1E: call    sub_1800D44B8
 * 000000018004DC23: nop
 * 000000018004DC24: mov     r8, rax
 * 000000018004DC27: lea     rdx, aStandardshader_137; "StandardShader/ShaderModel40/"
 * 000000018004DC2E: lea     rcx, [rbp+9E20h+var_3D28]
 * 000000018004DC35: call    sub_1800453AC
 * 000000018004DC3A: nop
 * 000000018004DC3B: lea     r8, aPixel_135; "/Pixel"
 * 000000018004DC42: mov     rdx, rax
 * 000000018004DC45: lea     rcx, [rbp+9E20h+var_3D48]
 * 000000018004DC4C: call    sub_18002BF78
 * 000000018004DC51: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DC56: mov     rcx, rax
 * 000000018004DC59: call    sub_1800D45A4
 * 000000018004DC5E: mov     cs:byte_180269494, al
 * 000000018004DC64: lea     rcx, [rbp+9E20h+var_3D28]; void *
 * 000000018004DC6B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DC70: nop
 * 000000018004DC71: lea     rcx, [rbp+9E20h+var_3D08]; void *
 * 000000018004DC78: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DC7D: nop
 * 000000018004DC7E: lea     rcx, dword_180269498
 * 000000018004DC85: call    _Init_thread_footer
 * 000000018004DC8A: mov     rax, [rdi+rbx*8]
 * 000000018004DC8E: mov     eax, [r15+rax]
 * 000000018004DC92: cmp     cs:dword_1802694A0, eax
 * 000000018004DC98: jle     loc_18004DD82
 * 000000018004DC9E: lea     rcx, dword_1802694A0
 * 000000018004DCA5: call    _Init_thread_header
 * 000000018004DCAA: cmp     cs:dword_1802694A0, r14d
 * 000000018004DCB1: jnz     loc_18004DD82
 * 000000018004DCB7: lea     rax, unk_180186680
 * 000000018004DCBE: mov     qword ptr [rbp+9E20h+var_9630], rax
 * 000000018004DCC5: lea     rax, unk_18018CF88
 * 000000018004DCCC: mov     qword ptr [rbp+9E20h+var_9630+8], rax
 * 000000018004DCD3: movups  xmm0, [rbp+9E20h+var_9630]
 * 000000018004DCDA: movups  [rbp+9E20h+var_78D8], xmm0
 * 000000018004DCE1: mov     dword ptr [rbp+9E20h+var_78C8], r13d
 * 000000018004DCE8: mov     dword ptr [rbp+9E20h+var_78C8+4], esi
 * 000000018004DCEE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DCF3: movups  xmm0, [rbp+9E20h+var_78C8]
 * 000000018004DCFA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DCFF: call    sub_1800455D0
 * 000000018004DD04: mov     r8, rax
 * 000000018004DD07: mov     r9d, r12d
 * 000000018004DD0A: mov     edx, 1F0h
 * 000000018004DD0F: lea     rcx, [rbp+9E20h+var_3CA8]; Src
 * 000000018004DD16: call    sub_1800D44B8
 * 000000018004DD1B: nop
 * 000000018004DD1C: mov     r8, rax
 * 000000018004DD1F: lea     rdx, aStandardshader_138; "StandardShader/ShaderModel40/"
 * 000000018004DD26: lea     rcx, [rbp+9E20h+var_3CC8]
 * 000000018004DD2D: call    sub_1800453AC
 * 000000018004DD32: nop
 * 000000018004DD33: lea     r8, aPixel_136; "/Pixel"
 * 000000018004DD3A: mov     rdx, rax
 * 000000018004DD3D: lea     rcx, [rbp+9E20h+var_3CE8]
 * 000000018004DD44: call    sub_18002BF78
 * 000000018004DD49: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DD4E: mov     rcx, rax
 * 000000018004DD51: call    sub_1800D45A4
 * 000000018004DD56: mov     cs:byte_18026949C, al
 * 000000018004DD5C: lea     rcx, [rbp+9E20h+var_3CC8]; void *
 * 000000018004DD63: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DD68: nop
 * 000000018004DD69: lea     rcx, [rbp+9E20h+var_3CA8]; void *
 * 000000018004DD70: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DD75: nop
 * 000000018004DD76: lea     rcx, dword_1802694A0
 * 000000018004DD7D: call    _Init_thread_footer
 * 000000018004DD82: mov     rax, [rdi+rbx*8]
 * 000000018004DD86: mov     eax, [r15+rax]
 * 000000018004DD8A: cmp     cs:dword_1802694A8, eax
 * 000000018004DD90: jle     loc_18004DE7A
 * 000000018004DD96: lea     rcx, dword_1802694A8
 * 000000018004DD9D: call    _Init_thread_header
 * 000000018004DDA2: cmp     cs:dword_1802694A8, r14d
 * 000000018004DDA9: jnz     loc_18004DE7A
 * 000000018004DDAF: lea     rax, unk_180186680
 * 000000018004DDB6: mov     qword ptr [rbp+9E20h+var_9620], rax
 * 000000018004DDBD: lea     rax, unk_18018CF88
 * 000000018004DDC4: mov     qword ptr [rbp+9E20h+var_9620+8], rax
 * 000000018004DDCB: movups  xmm0, [rbp+9E20h+var_9620]
 * 000000018004DDD2: movups  [rbp+9E20h+var_78B8], xmm0
 * 000000018004DDD9: mov     dword ptr [rbp+9E20h+var_78A8], r13d
 * 000000018004DDE0: mov     dword ptr [rbp+9E20h+var_78A8+4], esi
 * 000000018004DDE6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DDEB: movups  xmm0, [rbp+9E20h+var_78A8]
 * 000000018004DDF2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DDF7: call    sub_1800455D0
 * 000000018004DDFC: mov     r8, rax
 * 000000018004DDFF: mov     r9d, r12d
 * 000000018004DE02: mov     edx, 1F2h
 * 000000018004DE07: lea     rcx, [rbp+9E20h+var_3C48]; Src
 * 000000018004DE0E: call    sub_1800D44B8
 * 000000018004DE13: nop
 * 000000018004DE14: mov     r8, rax
 * 000000018004DE17: lea     rdx, aStandardshader_139; "StandardShader/ShaderModel40/"
 * 000000018004DE1E: lea     rcx, [rbp+9E20h+var_3C68]
 * 000000018004DE25: call    sub_1800453AC
 * 000000018004DE2A: nop
 * 000000018004DE2B: lea     r8, aPixel_137; "/Pixel"
 * 000000018004DE32: mov     rdx, rax
 * 000000018004DE35: lea     rcx, [rbp+9E20h+var_3C88]
 * 000000018004DE3C: call    sub_18002BF78
 * 000000018004DE41: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DE46: mov     rcx, rax
 * 000000018004DE49: call    sub_1800D45A4
 * 000000018004DE4E: mov     cs:byte_1802694A4, al
 * 000000018004DE54: lea     rcx, [rbp+9E20h+var_3C68]; void *
 * 000000018004DE5B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DE60: nop
 * 000000018004DE61: lea     rcx, [rbp+9E20h+var_3C48]; void *
 * 000000018004DE68: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DE6D: nop
 * 000000018004DE6E: lea     rcx, dword_1802694A8
 * 000000018004DE75: call    _Init_thread_footer
 * 000000018004DE7A: mov     rax, [rdi+rbx*8]
 * 000000018004DE7E: mov     eax, [r15+rax]
 * 000000018004DE82: cmp     cs:dword_1802694B0, eax
 * 000000018004DE88: jle     loc_18004DF72
 * 000000018004DE8E: lea     rcx, dword_1802694B0
 * 000000018004DE95: call    _Init_thread_header
 * 000000018004DE9A: cmp     cs:dword_1802694B0, r14d
 * 000000018004DEA1: jnz     loc_18004DF72
 * 000000018004DEA7: lea     rax, unk_1801905B0
 * 000000018004DEAE: mov     qword ptr [rbp+9E20h+var_9610], rax
 * 000000018004DEB5: lea     rax, unk_18019706C
 * 000000018004DEBC: mov     qword ptr [rbp+9E20h+var_9610+8], rax
 * 000000018004DEC3: movups  xmm0, [rbp+9E20h+var_9610]
 * 000000018004DECA: movups  [rbp+9E20h+var_7898], xmm0
 * 000000018004DED1: mov     dword ptr [rbp+9E20h+var_7888], r13d
 * 000000018004DED8: mov     dword ptr [rbp+9E20h+var_7888+4], esi
 * 000000018004DEDE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DEE3: movups  xmm0, [rbp+9E20h+var_7888]
 * 000000018004DEEA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DEEF: call    sub_1800455D0
 * 000000018004DEF4: mov     r8, rax
 * 000000018004DEF7: mov     r9d, r12d
 * 000000018004DEFA: mov     edx, 1F8h
 * 000000018004DEFF: lea     rcx, [rbp+9E20h+var_3BE8]; Src
 * 000000018004DF06: call    sub_1800D44B8
 * 000000018004DF0B: nop
 * 000000018004DF0C: mov     r8, rax
 * 000000018004DF0F: lea     rdx, aStandardshader_140; "StandardShader/ShaderModel40/"
 * 000000018004DF16: lea     rcx, [rbp+9E20h+var_3C08]
 * 000000018004DF1D: call    sub_1800453AC
 * 000000018004DF22: nop
 * 000000018004DF23: lea     r8, aPixel_138; "/Pixel"
 * 000000018004DF2A: mov     rdx, rax
 * 000000018004DF2D: lea     rcx, [rbp+9E20h+var_3C28]
 * 000000018004DF34: call    sub_18002BF78
 * 000000018004DF39: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DF3E: mov     rcx, rax
 * 000000018004DF41: call    sub_1800D45A4
 * 000000018004DF46: mov     cs:byte_1802694AC, al
 * 000000018004DF4C: lea     rcx, [rbp+9E20h+var_3C08]; void *
 * 000000018004DF53: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DF58: nop
 * 000000018004DF59: lea     rcx, [rbp+9E20h+var_3BE8]; void *
 * 000000018004DF60: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DF65: nop
 * 000000018004DF66: lea     rcx, dword_1802694B0
 * 000000018004DF6D: call    _Init_thread_footer
 * 000000018004DF72: mov     rax, [rdi+rbx*8]
 * 000000018004DF76: mov     eax, [r15+rax]
 * 000000018004DF7A: cmp     cs:dword_1802694B8, eax
 * 000000018004DF80: jle     loc_18004E06A
 * 000000018004DF86: lea     rcx, dword_1802694B8
 * 000000018004DF8D: call    _Init_thread_header
 * 000000018004DF92: cmp     cs:dword_1802694B8, r14d
 * 000000018004DF99: jnz     loc_18004E06A
 * 000000018004DF9F: lea     rax, unk_1801905B0
 * 000000018004DFA6: mov     qword ptr [rbp+9E20h+var_9600], rax
 * 000000018004DFAD: lea     rax, unk_18019706C
 * 000000018004DFB4: mov     qword ptr [rbp+9E20h+var_9600+8], rax
 * 000000018004DFBB: movups  xmm0, [rbp+9E20h+var_9600]
 * 000000018004DFC2: movups  [rbp+9E20h+var_7878], xmm0
 * 000000018004DFC9: mov     dword ptr [rbp+9E20h+var_7868], r13d
 * 000000018004DFD0: mov     dword ptr [rbp+9E20h+var_7868+4], esi
 * 000000018004DFD6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DFDB: movups  xmm0, [rbp+9E20h+var_7868]
 * 000000018004DFE2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DFE7: call    sub_1800455D0
 * 000000018004DFEC: mov     r8, rax
 * 000000018004DFEF: mov     r9d, r12d
 * 000000018004DFF2: mov     edx, 1FAh
 * 000000018004DFF7: lea     rcx, [rbp+9E20h+var_3B88]; Src
 * 000000018004DFFE: call    sub_1800D44B8
 * 000000018004E003: nop
 * 000000018004E004: mov     r8, rax
 * 000000018004E007: lea     rdx, aStandardshader_141; "StandardShader/ShaderModel40/"
 * 000000018004E00E: lea     rcx, [rbp+9E20h+var_3BA8]
 * 000000018004E015: call    sub_1800453AC
 * 000000018004E01A: nop
 * 000000018004E01B: lea     r8, aPixel_139; "/Pixel"
 * 000000018004E022: mov     rdx, rax
 * 000000018004E025: lea     rcx, [rbp+9E20h+var_3BC8]
 * 000000018004E02C: call    sub_18002BF78
 * 000000018004E031: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E036: mov     rcx, rax
 * 000000018004E039: call    sub_1800D45A4
 * 000000018004E03E: mov     cs:byte_1802694B4, al
 * 000000018004E044: lea     rcx, [rbp+9E20h+var_3BA8]; void *
 * 000000018004E04B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E050: nop
 * 000000018004E051: lea     rcx, [rbp+9E20h+var_3B88]; void *
 * 000000018004E058: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E05D: nop
 * 000000018004E05E: lea     rcx, dword_1802694B8
 * 000000018004E065: call    _Init_thread_footer
 * 000000018004E06A: mov     rax, [rdi+rbx*8]
 * 000000018004E06E: mov     eax, [r15+rax]
 * 000000018004E072: cmp     cs:dword_1802694C0, eax
 * 000000018004E078: jle     loc_18004E15E
 * 000000018004E07E: lea     rcx, dword_1802694C0
 * 000000018004E085: call    _Init_thread_header
 * 000000018004E08A: cmp     cs:dword_1802694C0, r14d
 * 000000018004E091: jnz     loc_18004E15E
 * 000000018004E097: lea     rax, unk_180197070
 * 000000018004E09E: mov     qword ptr [rbp+9E20h+var_95F0], rax
 * 000000018004E0A5: lea     rax, unk_180198088
 * 000000018004E0AC: mov     qword ptr [rbp+9E20h+var_95F0+8], rax
 * 000000018004E0B3: movups  xmm0, [rbp+9E20h+var_95F0]
 * 000000018004E0BA: movups  [rbp+9E20h+var_7858], xmm0
 * 000000018004E0C1: mov     dword ptr [rbp+9E20h+var_7848], esi
 * 000000018004E0C7: mov     dword ptr [rbp+9E20h+var_7848+4], esi
 * 000000018004E0CD: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E0D2: movups  xmm0, [rbp+9E20h+var_7848]
 * 000000018004E0D9: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E0DE: call    sub_1800455D0
 * 000000018004E0E3: mov     r8, rax
 * 000000018004E0E6: mov     r9d, r12d
 * 000000018004E0E9: xor     edx, edx
 * 000000018004E0EB: lea     rcx, [rbp+9E20h+var_3B28]; Src
 * 000000018004E0F2: call    sub_1800D44B8
 * 000000018004E0F7: nop
 * 000000018004E0F8: mov     r8, rax
 * 000000018004E0FB: lea     rdx, aStandardshader_142; "StandardShader/ShaderModel40/"
 * 000000018004E102: lea     rcx, [rbp+9E20h+var_3B48]
 * 000000018004E109: call    sub_1800453AC
 * 000000018004E10E: nop
 * 000000018004E10F: lea     r8, aVertex; "/Vertex"
 * 000000018004E116: mov     rdx, rax
 * 000000018004E119: lea     rcx, [rbp+9E20h+var_3B68]
 * 000000018004E120: call    sub_18002BF78
 * 000000018004E125: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E12A: mov     rcx, rax
 * 000000018004E12D: call    sub_1800D45A4
 * 000000018004E132: mov     cs:byte_1802694BC, al
 * 000000018004E138: lea     rcx, [rbp+9E20h+var_3B48]; void *
 * 000000018004E13F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E144: nop
 * 000000018004E145: lea     rcx, [rbp+9E20h+var_3B28]; void *
 * 000000018004E14C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E151: nop
 * 000000018004E152: lea     rcx, dword_1802694C0
 * 000000018004E159: call    _Init_thread_footer
 * 000000018004E15E: mov     rax, [rdi+rbx*8]
 * 000000018004E162: mov     eax, [r15+rax]
 * 000000018004E166: cmp     cs:dword_1802694C8, eax
 * 000000018004E16C: jle     loc_18004E253
 * 000000018004E172: lea     rcx, dword_1802694C8
 * 000000018004E179: call    _Init_thread_header
 * 000000018004E17E: cmp     cs:dword_1802694C8, r14d
 * 000000018004E185: jnz     loc_18004E253
 * 000000018004E18B: lea     rax, unk_180198090
 * 000000018004E192: mov     qword ptr [rbp+9E20h+var_95E0], rax
 * 000000018004E199: lea     rax, unk_180198614
 * 000000018004E1A0: mov     qword ptr [rbp+9E20h+var_95E0+8], rax
 * 000000018004E1A7: movups  xmm0, [rbp+9E20h+var_95E0]
 * 000000018004E1AE: movups  [rbp+9E20h+var_7838], xmm0
 * 000000018004E1B5: mov     dword ptr [rbp+9E20h+var_7828], esi
 * 000000018004E1BB: mov     dword ptr [rbp+9E20h+var_7828+4], esi
 * 000000018004E1C1: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E1C6: movups  xmm0, [rbp+9E20h+var_7828]
 * 000000018004E1CD: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E1D2: call    sub_1800455D0
 * 000000018004E1D7: mov     r8, rax
 * 000000018004E1DA: mov     r9d, r12d
 * 000000018004E1DD: mov     rdx, rsi
 * 000000018004E1E0: lea     rcx, [rbp+9E20h+var_3AC8]; Src
 * 000000018004E1E7: call    sub_1800D44B8
 * 000000018004E1EC: nop
 * 000000018004E1ED: mov     r8, rax
 * 000000018004E1F0: lea     rdx, aStandardshader_143; "StandardShader/ShaderModel40/"
 * 000000018004E1F7: lea     rcx, [rbp+9E20h+var_3AE8]
 * 000000018004E1FE: call    sub_1800453AC
 * 000000018004E203: nop
 * 000000018004E204: lea     r8, aVertex_0; "/Vertex"
 * 000000018004E20B: mov     rdx, rax
 * 000000018004E20E: lea     rcx, [rbp+9E20h+var_3B08]
 * 000000018004E215: call    sub_18002BF78
 * 000000018004E21A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E21F: mov     rcx, rax
 * 000000018004E222: call    sub_1800D45A4
 * 000000018004E227: mov     cs:byte_1802694C4, al
 * 000000018004E22D: lea     rcx, [rbp+9E20h+var_3AE8]; void *
 * 000000018004E234: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E239: nop
 * 000000018004E23A: lea     rcx, [rbp+9E20h+var_3AC8]; void *
 * 000000018004E241: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E246: nop
 * 000000018004E247: lea     rcx, dword_1802694C8
 * 000000018004E24E: call    _Init_thread_footer
 * 000000018004E253: mov     rax, [rdi+rbx*8]
 * 000000018004E257: mov     ecx, [r15+rax]
 * 000000018004E25B: cmp     cs:dword_1802694D0, ecx
 * 000000018004E261: jle     loc_18004E34A
 * 000000018004E267: lea     rcx, dword_1802694D0
 * 000000018004E26E: call    _Init_thread_header
 * 000000018004E273: cmp     cs:dword_1802694D0, r14d
 * 000000018004E27A: jnz     loc_18004E34A
 * 000000018004E280: lea     rax, unk_180197070
 * 000000018004E287: mov     qword ptr [rbp+9E20h+var_95D0], rax
 * 000000018004E28E: lea     rax, unk_180198088
 * 000000018004E295: mov     qword ptr [rbp+9E20h+var_95D0+8], rax
 * 000000018004E29C: movups  xmm0, [rbp+9E20h+var_95D0]
 * 000000018004E2A3: movups  [rbp+9E20h+var_7818], xmm0
 * 000000018004E2AA: mov     dword ptr [rbp+9E20h+var_7808], esi
 * 000000018004E2B0: mov     dword ptr [rbp+9E20h+var_7808+4], esi
 * 000000018004E2B6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E2BB: movups  xmm0, [rbp+9E20h+var_7808]
 * 000000018004E2C2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E2C7: call    sub_1800455D0
 * 000000018004E2CC: mov     r8, rax
 * 000000018004E2CF: mov     r9d, r12d
 * 000000018004E2D2: mov     edx, 2
 * 000000018004E2D7: lea     rcx, [rbp+9E20h+var_3A68]; Src
 * 000000018004E2DE: call    sub_1800D44B8
 * 000000018004E2E3: nop
 * 000000018004E2E4: mov     r8, rax
 * 000000018004E2E7: lea     rdx, aStandardshader_144; "StandardShader/ShaderModel40/"
 * 000000018004E2EE: lea     rcx, [rbp+9E20h+var_3A88]
 * 000000018004E2F5: call    sub_1800453AC
 * 000000018004E2FA: nop
 * 000000018004E2FB: lea     r8, aVertex_1; "/Vertex"
 * 000000018004E302: mov     rdx, rax
 * 000000018004E305: lea     rcx, [rbp+9E20h+var_3AA8]
 * 000000018004E30C: call    sub_18002BF78
 * 000000018004E311: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E316: mov     rcx, rax
 * 000000018004E319: call    sub_1800D45A4
 * 000000018004E31E: mov     cs:byte_1802694CC, al
 * 000000018004E324: lea     rcx, [rbp+9E20h+var_3A88]; void *
 * 000000018004E32B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E330: nop
 * 000000018004E331: lea     rcx, [rbp+9E20h+var_3A68]; void *
 * 000000018004E338: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E33D: nop
 * 000000018004E33E: lea     rcx, dword_1802694D0
 * 000000018004E345: call    _Init_thread_footer
 * 000000018004E34A: mov     rax, [rdi+rbx*8]
 * 000000018004E34E: mov     ecx, [r15+rax]
 * 000000018004E352: cmp     cs:dword_1802694D8, ecx
 * 000000018004E358: jle     loc_18004E441
 * 000000018004E35E: lea     rcx, dword_1802694D8
 * 000000018004E365: call    _Init_thread_header
 * 000000018004E36A: cmp     cs:dword_1802694D8, r14d
 * 000000018004E371: jnz     loc_18004E441
 * 000000018004E377: lea     rax, unk_180197070
 * 000000018004E37E: mov     qword ptr [rbp+9E20h+var_95C0], rax
 * 000000018004E385: lea     rax, unk_180198088
 * 000000018004E38C: mov     qword ptr [rbp+9E20h+var_95C0+8], rax
 * 000000018004E393: movups  xmm0, [rbp+9E20h+var_95C0]
 * 000000018004E39A: movups  [rbp+9E20h+var_77F8], xmm0
 * 000000018004E3A1: mov     dword ptr [rbp+9E20h+var_77E8], esi
 * 000000018004E3A7: mov     dword ptr [rbp+9E20h+var_77E8+4], esi
 * 000000018004E3AD: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E3B2: movups  xmm0, [rbp+9E20h+var_77E8]
 * 000000018004E3B9: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E3BE: call    sub_1800455D0
 * 000000018004E3C3: mov     r8, rax
 * 000000018004E3C6: mov     r9d, r12d
 * 000000018004E3C9: mov     edx, 4
 * 000000018004E3CE: lea     rcx, [rbp+9E20h+var_3A08]; Src
 * 000000018004E3D5: call    sub_1800D44B8
 * 000000018004E3DA: nop
 * 000000018004E3DB: mov     r8, rax
 * 000000018004E3DE: lea     rdx, aStandardshader_145; "StandardShader/ShaderModel40/"
 * 000000018004E3E5: lea     rcx, [rbp+9E20h+var_3A28]
 * 000000018004E3EC: call    sub_1800453AC
 * 000000018004E3F1: nop
 * 000000018004E3F2: lea     r8, aVertex_2; "/Vertex"
 * 000000018004E3F9: mov     rdx, rax
 * 000000018004E3FC: lea     rcx, [rbp+9E20h+var_3A48]
 * 000000018004E403: call    sub_18002BF78
 * 000000018004E408: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E40D: mov     rcx, rax
 * 000000018004E410: call    sub_1800D45A4
 * 000000018004E415: mov     cs:byte_1802694D4, al
 * 000000018004E41B: lea     rcx, [rbp+9E20h+var_3A28]; void *
 * 000000018004E422: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E427: nop
 * 000000018004E428: lea     rcx, [rbp+9E20h+var_3A08]; void *
 * 000000018004E42F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E434: nop
 * 000000018004E435: lea     rcx, dword_1802694D8
 * 000000018004E43C: call    _Init_thread_footer
 * 000000018004E441: mov     rax, [rdi+rbx*8]
 * 000000018004E445: mov     ecx, [r15+rax]
 * 000000018004E449: cmp     cs:dword_1802694E0, ecx
 * 000000018004E44F: jle     loc_18004E536
 * 000000018004E455: lea     rcx, dword_1802694E0
 * 000000018004E45C: call    _Init_thread_header
 * 000000018004E461: cmp     cs:dword_1802694E0, r14d
 * 000000018004E468: jnz     loc_18004E536
 * 000000018004E46E: lea     rax, unk_180198090
 * 000000018004E475: mov     qword ptr [rbp+9E20h+var_95B0], rax
 * 000000018004E47C: lea     rax, unk_180198614
 * 000000018004E483: mov     qword ptr [rbp+9E20h+var_95B0+8], rax
 * 000000018004E48A: movups  xmm0, [rbp+9E20h+var_95B0]
 * 000000018004E491: movups  [rbp+9E20h+var_77D8], xmm0
 * 000000018004E498: mov     dword ptr [rbp+9E20h+var_77C8], esi
 * 000000018004E49E: mov     dword ptr [rbp+9E20h+var_77C8+4], esi
 * 000000018004E4A4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E4A9: movups  xmm0, [rbp+9E20h+var_77C8]
 * 000000018004E4B0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E4B5: call    sub_1800455D0
 * 000000018004E4BA: mov     r8, rax
 * 000000018004E4BD: mov     r9d, r12d
 * 000000018004E4C0: mov     rdx, r13
 * 000000018004E4C3: lea     rcx, [rbp+9E20h+var_39A8]; Src
 * 000000018004E4CA: call    sub_1800D44B8
 * 000000018004E4CF: nop
 * 000000018004E4D0: mov     r8, rax
 * 000000018004E4D3: lea     rdx, aStandardshader_146; "StandardShader/ShaderModel40/"
 * 000000018004E4DA: lea     rcx, [rbp+9E20h+var_39C8]
 * 000000018004E4E1: call    sub_1800453AC
 * 000000018004E4E6: nop
 * 000000018004E4E7: lea     r8, aVertex_3; "/Vertex"
 * 000000018004E4EE: mov     rdx, rax
 * 000000018004E4F1: lea     rcx, [rbp+9E20h+var_39E8]
 * 000000018004E4F8: call    sub_18002BF78
 * 000000018004E4FD: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E502: mov     rcx, rax
 * 000000018004E505: call    sub_1800D45A4
 * 000000018004E50A: mov     cs:byte_1802694DC, al
 * 000000018004E510: lea     rcx, [rbp+9E20h+var_39C8]; void *
 * 000000018004E517: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E51C: nop
 * 000000018004E51D: lea     rcx, [rbp+9E20h+var_39A8]; void *
 * 000000018004E524: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E529: nop
 * 000000018004E52A: lea     rcx, dword_1802694E0
 * 000000018004E531: call    _Init_thread_footer
 * 000000018004E536: mov     rax, [rdi+rbx*8]
 * 000000018004E53A: mov     ecx, [r15+rax]
 * 000000018004E53E: cmp     cs:dword_1802694E8, ecx
 * 000000018004E544: jle     loc_18004E62F
 * 000000018004E54A: lea     rcx, dword_1802694E8
 * 000000018004E551: call    _Init_thread_header
 * 000000018004E556: cmp     cs:dword_1802694E8, r14d
 * 000000018004E55D: jnz     loc_18004E62F
 * 000000018004E563: lea     r13, unk_180197070
 * 000000018004E56A: mov     qword ptr [rbp+9E20h+var_95A0], r13
 * 000000018004E571: lea     rax, unk_180198088
 * 000000018004E578: mov     qword ptr [rbp+9E20h+var_95A0+8], rax
 * 000000018004E57F: movups  xmm0, [rbp+9E20h+var_95A0]
 * 000000018004E586: movups  [rbp+9E20h+var_77B8], xmm0
 * 000000018004E58D: mov     dword ptr [rbp+9E20h+var_77A8], esi
 * 000000018004E593: mov     dword ptr [rbp+9E20h+var_77A8+4], esi
 * 000000018004E599: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E59E: movups  xmm0, [rbp+9E20h+var_77A8]
 * 000000018004E5A5: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E5AA: call    sub_1800455D0
 * 000000018004E5AF: mov     r8, rax
 * 000000018004E5B2: mov     r9d, r12d
 * 000000018004E5B5: mov     edx, 6
 * 000000018004E5BA: lea     rcx, [rbp+9E20h+var_3948]; Src
 * 000000018004E5C1: call    sub_1800D44B8
 * 000000018004E5C6: nop
 * 000000018004E5C7: mov     r8, rax
 * 000000018004E5CA: lea     rdx, aStandardshader_147; "StandardShader/ShaderModel40/"
 * 000000018004E5D1: lea     rcx, [rbp+9E20h+var_3968]
 * 000000018004E5D8: call    sub_1800453AC
 * 000000018004E5DD: nop
 * 000000018004E5DE: lea     r8, aVertex_4; "/Vertex"
 * 000000018004E5E5: mov     rdx, rax
 * 000000018004E5E8: lea     rcx, [rbp+9E20h+var_3988]
 * 000000018004E5EF: call    sub_18002BF78
 * 000000018004E5F4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E5F9: mov     rcx, rax
 * 000000018004E5FC: call    sub_1800D45A4
 * 000000018004E601: mov     cs:byte_1802694E4, al
 * 000000018004E607: lea     rcx, [rbp+9E20h+var_3968]; void *
 * 000000018004E60E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E613: nop
 * 000000018004E614: lea     rcx, [rbp+9E20h+var_3948]; void *
 * 000000018004E61B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E620: nop
 * 000000018004E621: lea     rcx, dword_1802694E8
 * 000000018004E628: call    _Init_thread_footer
 * 000000018004E62D: jmp     short loc_18004E636
 * 000000018004E62F: lea     r13, unk_180197070
 * 000000018004E636: mov     rax, [rdi+rbx*8]
 * 000000018004E63A: mov     ecx, [r15+rax]
 * 000000018004E63E: cmp     cs:dword_1802694F0, ecx
 * 000000018004E644: jle     loc_18004E726
 * 000000018004E64A: lea     rcx, dword_1802694F0
 * 000000018004E651: call    _Init_thread_header
 * 000000018004E656: cmp     cs:dword_1802694F0, r14d
 * 000000018004E65D: jnz     loc_18004E726
 * 000000018004E663: mov     qword ptr [rbp+9E20h+var_9590], r13
 * 000000018004E66A: lea     rax, unk_180198088
 * 000000018004E671: mov     qword ptr [rbp+9E20h+var_9590+8], rax
 * 000000018004E678: movups  xmm0, [rbp+9E20h+var_9590]
 * 000000018004E67F: movups  [rbp+9E20h+var_7798], xmm0
 * 000000018004E686: mov     dword ptr [rbp+9E20h+var_7788], esi
 * 000000018004E68C: mov     dword ptr [rbp+9E20h+var_7788+4], esi
 * 000000018004E692: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E697: movups  xmm0, [rbp+9E20h+var_7788]
 * 000000018004E69E: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E6A3: call    sub_1800455D0
 * 000000018004E6A8: mov     r8, rax
 * 000000018004E6AB: mov     r9d, r12d
 * 000000018004E6AE: mov     edx, 8
 * 000000018004E6B3: lea     rcx, [rbp+9E20h+var_38E8]; Src
 * 000000018004E6BA: call    sub_1800D44B8
 * 000000018004E6BF: nop
 * 000000018004E6C0: mov     r8, rax
 * 000000018004E6C3: lea     rdx, aStandardshader_148; "StandardShader/ShaderModel40/"
 * 000000018004E6CA: lea     rcx, [rbp+9E20h+var_3908]
 * 000000018004E6D1: call    sub_1800453AC
 * 000000018004E6D6: nop
 * 000000018004E6D7: lea     r8, aVertex_5; "/Vertex"
 * 000000018004E6DE: mov     rdx, rax
 * 000000018004E6E1: lea     rcx, [rbp+9E20h+var_3928]
 * 000000018004E6E8: call    sub_18002BF78
 * 000000018004E6ED: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E6F2: mov     rcx, rax
 * 000000018004E6F5: call    sub_1800D45A4
 * 000000018004E6FA: mov     cs:byte_1802694EC, al
 * 000000018004E700: lea     rcx, [rbp+9E20h+var_3908]; void *
 * 000000018004E707: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E70C: nop
 * 000000018004E70D: lea     rcx, [rbp+9E20h+var_38E8]; void *
 * 000000018004E714: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E719: nop
 * 000000018004E71A: lea     rcx, dword_1802694F0
 * 000000018004E721: call    _Init_thread_footer
 * 000000018004E726: mov     rax, [rdi+rbx*8]
 * 000000018004E72A: mov     ecx, [r15+rax]
 * 000000018004E72E: cmp     cs:dword_1802694F8, ecx
 * 000000018004E734: jle     loc_18004E81B
 * 000000018004E73A: lea     rcx, dword_1802694F8
 * 000000018004E741: call    _Init_thread_header
 * 000000018004E746: cmp     cs:dword_1802694F8, r14d
 * 000000018004E74D: jnz     loc_18004E81B
 * 000000018004E753: lea     rax, unk_180198620
 * 000000018004E75A: mov     qword ptr [rbp+9E20h+var_9580], rax
 * 000000018004E761: lea     rax, unk_180198D2C
 * 000000018004E768: mov     qword ptr [rbp+9E20h+var_9580+8], rax
 * 000000018004E76F: movups  xmm0, [rbp+9E20h+var_9580]
 * 000000018004E776: movups  [rbp+9E20h+var_7778], xmm0
 * 000000018004E77D: mov     dword ptr [rbp+9E20h+var_7768], esi
 * 000000018004E783: mov     dword ptr [rbp+9E20h+var_7768+4], esi
 * 000000018004E789: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E78E: movups  xmm0, [rbp+9E20h+var_7768]
 * 000000018004E795: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E79A: call    sub_1800455D0
 * 000000018004E79F: mov     r8, rax
 * 000000018004E7A2: mov     r9d, r12d
 * 000000018004E7A5: mov     rdx, r12
 * 000000018004E7A8: lea     rcx, [rbp+9E20h+var_3888]; Src
 * 000000018004E7AF: call    sub_1800D44B8
 * 000000018004E7B4: nop
 * 000000018004E7B5: mov     r8, rax
 * 000000018004E7B8: lea     rdx, aStandardshader_149; "StandardShader/ShaderModel40/"
 * 000000018004E7BF: lea     rcx, [rbp+9E20h+var_38A8]
 * 000000018004E7C6: call    sub_1800453AC
 * 000000018004E7CB: nop
 * 000000018004E7CC: lea     r8, aVertex_6; "/Vertex"
 * 000000018004E7D3: mov     rdx, rax
 * 000000018004E7D6: lea     rcx, [rbp+9E20h+var_38C8]
 * 000000018004E7DD: call    sub_18002BF78
 * 000000018004E7E2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E7E7: mov     rcx, rax
 * 000000018004E7EA: call    sub_1800D45A4
 * 000000018004E7EF: mov     cs:byte_1802694F4, al
 * 000000018004E7F5: lea     rcx, [rbp+9E20h+var_38A8]; void *
 * 000000018004E7FC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E801: nop
 * 000000018004E802: lea     rcx, [rbp+9E20h+var_3888]; void *
 * 000000018004E809: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E80E: nop
 * 000000018004E80F: lea     rcx, dword_1802694F8
 * 000000018004E816: call    _Init_thread_footer
 * 000000018004E81B: mov     rax, [rdi+rbx*8]
 * 000000018004E81F: mov     ecx, [r15+rax]
 * 000000018004E823: cmp     cs:dword_180269500, ecx
 * 000000018004E829: jle     loc_18004E90B
 * 000000018004E82F: lea     rcx, dword_180269500
 * 000000018004E836: call    _Init_thread_header
 * 000000018004E83B: cmp     cs:dword_180269500, r14d
 * 000000018004E842: jnz     loc_18004E90B
 * 000000018004E848: mov     qword ptr [rbp+9E20h+var_9570], r13
 * 000000018004E84F: lea     rax, unk_180198088
 * 000000018004E856: mov     qword ptr [rbp+9E20h+var_9570+8], rax
 * 000000018004E85D: movups  xmm0, [rbp+9E20h+var_9570]
 * 000000018004E864: movups  [rbp+9E20h+var_7758], xmm0
 * 000000018004E86B: mov     dword ptr [rbp+9E20h+var_7748], esi
 * 000000018004E871: mov     dword ptr [rbp+9E20h+var_7748+4], esi
 * 000000018004E877: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E87C: movups  xmm0, [rbp+9E20h+var_7748]
 * 000000018004E883: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E888: call    sub_1800455D0
 * 000000018004E88D: mov     r8, rax
 * 000000018004E890: mov     r9d, r12d
 * 000000018004E893: mov     edx, 0Ah
 * 000000018004E898: lea     rcx, [rbp+9E20h+var_3828]; Src
 * 000000018004E89F: call    sub_1800D44B8
 * 000000018004E8A4: nop
 * 000000018004E8A5: mov     r8, rax
 * 000000018004E8A8: lea     rdx, aStandardshader_150; "StandardShader/ShaderModel40/"
 * 000000018004E8AF: lea     rcx, [rbp+9E20h+var_3848]
 * 000000018004E8B6: call    sub_1800453AC
 * 000000018004E8BB: nop
 * 000000018004E8BC: lea     r8, aVertex_7; "/Vertex"
 * 000000018004E8C3: mov     rdx, rax
 * 000000018004E8C6: lea     rcx, [rbp+9E20h+var_3868]
 * 000000018004E8CD: call    sub_18002BF78
 * 000000018004E8D2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E8D7: mov     rcx, rax
 * 000000018004E8DA: call    sub_1800D45A4
 * 000000018004E8DF: mov     cs:byte_1802694FC, al
 * 000000018004E8E5: lea     rcx, [rbp+9E20h+var_3848]; void *
 * 000000018004E8EC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E8F1: nop
 * 000000018004E8F2: lea     rcx, [rbp+9E20h+var_3828]; void *
 * 000000018004E8F9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E8FE: nop
 * 000000018004E8FF: lea     rcx, dword_180269500
 * 000000018004E906: call    _Init_thread_footer
 * 000000018004E90B: mov     rax, [rdi+rbx*8]
 * 000000018004E90F: mov     ecx, [r15+rax]
 * 000000018004E913: cmp     cs:dword_180269508, ecx
 * 000000018004E919: jle     loc_18004E9FB
 * 000000018004E91F: lea     rcx, dword_180269508
 * 000000018004E926: call    _Init_thread_header
 * 000000018004E92B: cmp     cs:dword_180269508, r14d
 * 000000018004E932: jnz     loc_18004E9FB
 * 000000018004E938: mov     qword ptr [rbp+9E20h+var_9560], r13
 * 000000018004E93F: lea     rax, unk_180198088
 * 000000018004E946: mov     qword ptr [rbp+9E20h+var_9560+8], rax
 * 000000018004E94D: movups  xmm0, [rbp+9E20h+var_9560]
 * 000000018004E954: movups  [rbp+9E20h+var_7738], xmm0
 * 000000018004E95B: mov     dword ptr [rbp+9E20h+var_7728], esi
 * 000000018004E961: mov     dword ptr [rbp+9E20h+var_7728+4], esi
 * 000000018004E967: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E96C: movups  xmm0, [rbp+9E20h+var_7728]
 * 000000018004E973: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E978: call    sub_1800455D0
 * 000000018004E97D: mov     r8, rax
 * 000000018004E980: mov     r9d, r12d
 * 000000018004E983: mov     edx, 10h
 * 000000018004E988: lea     rcx, [rbp+9E20h+var_37C8]; Src
 * 000000018004E98F: call    sub_1800D44B8
 * 000000018004E994: nop
 * 000000018004E995: mov     r8, rax
 * 000000018004E998: lea     rdx, aStandardshader_151; "StandardShader/ShaderModel40/"
 * 000000018004E99F: lea     rcx, [rbp+9E20h+var_37E8]
 * 000000018004E9A6: call    sub_1800453AC
 * 000000018004E9AB: nop
 * 000000018004E9AC: lea     r8, aVertex_8; "/Vertex"
 * 000000018004E9B3: mov     rdx, rax
 * 000000018004E9B6: lea     rcx, [rbp+9E20h+var_3808]
 * 000000018004E9BD: call    sub_18002BF78
 * 000000018004E9C2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E9C7: mov     rcx, rax
 * 000000018004E9CA: call    sub_1800D45A4
 * 000000018004E9CF: mov     cs:byte_180269504, al
 * 000000018004E9D5: lea     rcx, [rbp+9E20h+var_37E8]; void *
 * 000000018004E9DC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E9E1: nop
 * 000000018004E9E2: lea     rcx, [rbp+9E20h+var_37C8]; void *
 * 000000018004E9E9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E9EE: nop
 * 000000018004E9EF: lea     rcx, dword_180269508
 * 000000018004E9F6: call    _Init_thread_footer
 * 000000018004E9FB: mov     rax, [rdi+rbx*8]
 * 000000018004E9FF: mov     ecx, [r15+rax]
 * 000000018004EA03: cmp     cs:dword_180269510, ecx
 * 000000018004EA09: jle     loc_18004EAEB
 * 000000018004EA0F: lea     rcx, dword_180269510
 * 000000018004EA16: call    _Init_thread_header
 * 000000018004EA1B: cmp     cs:dword_180269510, r14d
 * 000000018004EA22: jnz     loc_18004EAEB
 * 000000018004EA28: mov     qword ptr [rbp+9E20h+var_9550], r13
 * 000000018004EA2F: lea     rax, unk_180198088
 * 000000018004EA36: mov     qword ptr [rbp+9E20h+var_9550+8], rax
 * 000000018004EA3D: movups  xmm0, [rbp+9E20h+var_9550]
 * 000000018004EA44: movups  [rbp+9E20h+var_7718], xmm0
 * 000000018004EA4B: mov     dword ptr [rbp+9E20h+var_7708], esi
 * 000000018004EA51: mov     dword ptr [rbp+9E20h+var_7708+4], esi
 * 000000018004EA57: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EA5C: movups  xmm0, [rbp+9E20h+var_7708]
 * 000000018004EA63: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EA68: call    sub_1800455D0
 * 000000018004EA6D: mov     r8, rax
 * 000000018004EA70: mov     r9d, r12d
 * 000000018004EA73: mov     edx, 12h
 * 000000018004EA78: lea     rcx, [rbp+9E20h+var_3768]; Src
 * 000000018004EA7F: call    sub_1800D44B8
 * 000000018004EA84: nop
 * 000000018004EA85: mov     r8, rax
 * 000000018004EA88: lea     rdx, aStandardshader_152; "StandardShader/ShaderModel40/"
 * 000000018004EA8F: lea     rcx, [rbp+9E20h+var_3788]
 * 000000018004EA96: call    sub_1800453AC
 * 000000018004EA9B: nop
 * 000000018004EA9C: lea     r8, aVertex_9; "/Vertex"
 * 000000018004EAA3: mov     rdx, rax
 * 000000018004EAA6: lea     rcx, [rbp+9E20h+var_37A8]
 * 000000018004EAAD: call    sub_18002BF78
 * 000000018004EAB2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EAB7: mov     rcx, rax
 * 000000018004EABA: call    sub_1800D45A4
 * 000000018004EABF: mov     cs:byte_18026950C, al
 * 000000018004EAC5: lea     rcx, [rbp+9E20h+var_3788]; void *
 * 000000018004EACC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EAD1: nop
 * 000000018004EAD2: lea     rcx, [rbp+9E20h+var_3768]; void *
 * 000000018004EAD9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EADE: nop
 * 000000018004EADF: lea     rcx, dword_180269510
 * 000000018004EAE6: call    _Init_thread_footer
 * 000000018004EAEB: mov     rax, [rdi+rbx*8]
 * 000000018004EAEF: mov     ecx, [r15+rax]
 * 000000018004EAF3: cmp     cs:dword_180269518, ecx
 * 000000018004EAF9: jle     loc_18004EBDB
 * 000000018004EAFF: lea     rcx, dword_180269518
 * 000000018004EB06: call    _Init_thread_header
 * 000000018004EB0B: cmp     cs:dword_180269518, r14d
 * 000000018004EB12: jnz     loc_18004EBDB
 * 000000018004EB18: mov     qword ptr [rbp+9E20h+var_9540], r13
 * 000000018004EB1F: lea     rax, unk_180198088
 * 000000018004EB26: mov     qword ptr [rbp+9E20h+var_9540+8], rax
 * 000000018004EB2D: movups  xmm0, [rbp+9E20h+var_9540]
 * 000000018004EB34: movups  [rbp+9E20h+var_76F8], xmm0
 * 000000018004EB3B: mov     dword ptr [rbp+9E20h+var_76E8], esi
 * 000000018004EB41: mov     dword ptr [rbp+9E20h+var_76E8+4], esi
 * 000000018004EB47: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EB4C: movups  xmm0, [rbp+9E20h+var_76E8]
 * 000000018004EB53: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EB58: call    sub_1800455D0
 * 000000018004EB5D: mov     r8, rax
 * 000000018004EB60: mov     r9d, r12d
 * 000000018004EB63: mov     edx, 14h
 * 000000018004EB68: lea     rcx, [rbp+9E20h+var_3708]; Src
 * 000000018004EB6F: call    sub_1800D44B8
 * 000000018004EB74: nop
 * 000000018004EB75: mov     r8, rax
 * 000000018004EB78: lea     rdx, aStandardshader_153; "StandardShader/ShaderModel40/"
 * 000000018004EB7F: lea     rcx, [rbp+9E20h+var_3728]
 * 000000018004EB86: call    sub_1800453AC
 * 000000018004EB8B: nop
 * 000000018004EB8C: lea     r8, aVertex_10; "/Vertex"
 * 000000018004EB93: mov     rdx, rax
 * 000000018004EB96: lea     rcx, [rbp+9E20h+var_3748]
 * 000000018004EB9D: call    sub_18002BF78
 * 000000018004EBA2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EBA7: mov     rcx, rax
 * 000000018004EBAA: call    sub_1800D45A4
 * 000000018004EBAF: mov     cs:byte_180269514, al
 * 000000018004EBB5: lea     rcx, [rbp+9E20h+var_3728]; void *
 * 000000018004EBBC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EBC1: nop
 * 000000018004EBC2: lea     rcx, [rbp+9E20h+var_3708]; void *
 * 000000018004EBC9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EBCE: nop
 * 000000018004EBCF: lea     rcx, dword_180269518
 * 000000018004EBD6: call    _Init_thread_footer
 * 000000018004EBDB: mov     rax, [rdi+rbx*8]
 * 000000018004EBDF: mov     ecx, [r15+rax]
 * 000000018004EBE3: cmp     cs:dword_180269520, ecx
 * 000000018004EBE9: jle     loc_18004ECCB
 * 000000018004EBEF: lea     rcx, dword_180269520
 * 000000018004EBF6: call    _Init_thread_header
 * 000000018004EBFB: cmp     cs:dword_180269520, r14d
 * 000000018004EC02: jnz     loc_18004ECCB
 * 000000018004EC08: mov     qword ptr [rbp+9E20h+var_9530], r13
 * 000000018004EC0F: lea     rax, unk_180198088
 * 000000018004EC16: mov     qword ptr [rbp+9E20h+var_9530+8], rax
 * 000000018004EC1D: movups  xmm0, [rbp+9E20h+var_9530]
 * 000000018004EC24: movups  [rbp+9E20h+var_76D8], xmm0
 * 000000018004EC2B: mov     dword ptr [rbp+9E20h+var_76C8], esi
 * 000000018004EC31: mov     dword ptr [rbp+9E20h+var_76C8+4], esi
 * 000000018004EC37: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EC3C: movups  xmm0, [rbp+9E20h+var_76C8]
 * 000000018004EC43: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EC48: call    sub_1800455D0
 * 000000018004EC4D: mov     r8, rax
 * 000000018004EC50: mov     r9d, r12d
 * 000000018004EC53: mov     edx, 16h
 * 000000018004EC58: lea     rcx, [rbp+9E20h+var_36A8]; Src
 * 000000018004EC5F: call    sub_1800D44B8
 * 000000018004EC64: nop
 * 000000018004EC65: mov     r8, rax
 * 000000018004EC68: lea     rdx, aStandardshader_154; "StandardShader/ShaderModel40/"
 * 000000018004EC6F: lea     rcx, [rbp+9E20h+var_36C8]
 * 000000018004EC76: call    sub_1800453AC
 * 000000018004EC7B: nop
 * 000000018004EC7C: lea     r8, aVertex_11; "/Vertex"
 * 000000018004EC83: mov     rdx, rax
 * 000000018004EC86: lea     rcx, [rbp+9E20h+var_36E8]
 * 000000018004EC8D: call    sub_18002BF78
 * 000000018004EC92: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EC97: mov     rcx, rax
 * 000000018004EC9A: call    sub_1800D45A4
 * 000000018004EC9F: mov     cs:byte_18026951C, al
 * 000000018004ECA5: lea     rcx, [rbp+9E20h+var_36C8]; void *
 * 000000018004ECAC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ECB1: nop
 * 000000018004ECB2: lea     rcx, [rbp+9E20h+var_36A8]; void *
 * 000000018004ECB9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ECBE: nop
 * 000000018004ECBF: lea     rcx, dword_180269520
 * 000000018004ECC6: call    _Init_thread_footer
 * 000000018004ECCB: mov     rax, [rdi+rbx*8]
 * 000000018004ECCF: mov     ecx, [r15+rax]
 * 000000018004ECD3: cmp     cs:dword_180269528, ecx
 * 000000018004ECD9: jle     loc_18004EDBB
 * 000000018004ECDF: lea     rcx, dword_180269528
 * 000000018004ECE6: call    _Init_thread_header
 * 000000018004ECEB: cmp     cs:dword_180269528, r14d
 * 000000018004ECF2: jnz     loc_18004EDBB
 * 000000018004ECF8: mov     qword ptr [rbp+9E20h+var_9520], r13
 * 000000018004ECFF: lea     rax, unk_180198088
 * 000000018004ED06: mov     qword ptr [rbp+9E20h+var_9520+8], rax
 * 000000018004ED0D: movups  xmm0, [rbp+9E20h+var_9520]
 * 000000018004ED14: movups  [rbp+9E20h+var_76B8], xmm0
 * 000000018004ED1B: mov     dword ptr [rbp+9E20h+var_76A8], esi
 * 000000018004ED21: mov     dword ptr [rbp+9E20h+var_76A8+4], esi
 * 000000018004ED27: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004ED2C: movups  xmm0, [rbp+9E20h+var_76A8]
 * 000000018004ED33: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004ED38: call    sub_1800455D0
 * 000000018004ED3D: mov     r8, rax
 * 000000018004ED40: mov     r9d, r12d
 * 000000018004ED43: mov     edx, 18h
 * 000000018004ED48: lea     rcx, [rbp+9E20h+var_3648]; Src
 * 000000018004ED4F: call    sub_1800D44B8
 * 000000018004ED54: nop
 * 000000018004ED55: mov     r8, rax
 * 000000018004ED58: lea     rdx, aStandardshader_155; "StandardShader/ShaderModel40/"
 * 000000018004ED5F: lea     rcx, [rbp+9E20h+var_3668]
 * 000000018004ED66: call    sub_1800453AC
 * 000000018004ED6B: nop
 * 000000018004ED6C: lea     r8, aVertex_12; "/Vertex"
 * 000000018004ED73: mov     rdx, rax
 * 000000018004ED76: lea     rcx, [rbp+9E20h+var_3688]
 * 000000018004ED7D: call    sub_18002BF78
 * 000000018004ED82: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004ED87: mov     rcx, rax
 * 000000018004ED8A: call    sub_1800D45A4
 * 000000018004ED8F: mov     cs:byte_180269524, al
 * 000000018004ED95: lea     rcx, [rbp+9E20h+var_3668]; void *
 * 000000018004ED9C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EDA1: nop
 * 000000018004EDA2: lea     rcx, [rbp+9E20h+var_3648]; void *
 * 000000018004EDA9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EDAE: nop
 * 000000018004EDAF: lea     rcx, dword_180269528
 * 000000018004EDB6: call    _Init_thread_footer
 * 000000018004EDBB: mov     rax, [rdi+rbx*8]
 * 000000018004EDBF: mov     ecx, [r15+rax]
 * 000000018004EDC3: cmp     cs:dword_180269530, ecx
 * 000000018004EDC9: jle     loc_18004EEAB
 * 000000018004EDCF: lea     rcx, dword_180269530
 * 000000018004EDD6: call    _Init_thread_header
 * 000000018004EDDB: cmp     cs:dword_180269530, r14d
 * 000000018004EDE2: jnz     loc_18004EEAB
 * 000000018004EDE8: mov     qword ptr [rbp+9E20h+var_9510], r13
 * 000000018004EDEF: lea     rax, unk_180198088
 * 000000018004EDF6: mov     qword ptr [rbp+9E20h+var_9510+8], rax
 * 000000018004EDFD: movups  xmm0, [rbp+9E20h+var_9510]
 * 000000018004EE04: movups  [rbp+9E20h+var_7698], xmm0
 * 000000018004EE0B: mov     dword ptr [rbp+9E20h+var_7688], esi
 * 000000018004EE11: mov     dword ptr [rbp+9E20h+var_7688+4], esi
 * 000000018004EE17: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EE1C: movups  xmm0, [rbp+9E20h+var_7688]
 * 000000018004EE23: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EE28: call    sub_1800455D0
 * 000000018004EE2D: mov     r8, rax
 * 000000018004EE30: mov     r9d, r12d
 * 000000018004EE33: mov     edx, 1Ah
 * 000000018004EE38: lea     rcx, [rbp+9E20h+var_35E8]; Src
 * 000000018004EE3F: call    sub_1800D44B8
 * 000000018004EE44: nop
 * 000000018004EE45: mov     r8, rax
 * 000000018004EE48: lea     rdx, aStandardshader_156; "StandardShader/ShaderModel40/"
 * 000000018004EE4F: lea     rcx, [rbp+9E20h+var_3608]
 * 000000018004EE56: call    sub_1800453AC
 * 000000018004EE5B: nop
 * 000000018004EE5C: lea     r8, aVertex_13; "/Vertex"
 * 000000018004EE63: mov     rdx, rax
 * 000000018004EE66: lea     rcx, [rbp+9E20h+var_3628]
 * 000000018004EE6D: call    sub_18002BF78
 * 000000018004EE72: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EE77: mov     rcx, rax
 * 000000018004EE7A: call    sub_1800D45A4
 * 000000018004EE7F: mov     cs:byte_18026952C, al
 * 000000018004EE85: lea     rcx, [rbp+9E20h+var_3608]; void *
 * 000000018004EE8C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EE91: nop
 * 000000018004EE92: lea     rcx, [rbp+9E20h+var_35E8]; void *
 * 000000018004EE99: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EE9E: nop
 * 000000018004EE9F: lea     rcx, dword_180269530
 * 000000018004EEA6: call    _Init_thread_footer
 * 000000018004EEAB: mov     rax, [rdi+rbx*8]
 * 000000018004EEAF: lea     r13, unk_180198D30
 * 000000018004EEB6: mov     eax, [r15+rax]
 * 000000018004EEBA: cmp     cs:dword_180269538, eax
 * 000000018004EEC0: jle     loc_18004EFA2
 * 000000018004EEC6: lea     rcx, dword_180269538
 * 000000018004EECD: call    _Init_thread_header
 * 000000018004EED2: cmp     cs:dword_180269538, r14d
 * 000000018004EED9: jnz     loc_18004EFA2
 * 000000018004EEDF: mov     qword ptr [rbp+9E20h+var_9500], r13
 * 000000018004EEE6: lea     rax, unk_18019A748
 * 000000018004EEED: mov     qword ptr [rbp+9E20h+var_9500+8], rax
 * 000000018004EEF4: movups  xmm0, [rbp+9E20h+var_9500]
 * 000000018004EEFB: movups  [rbp+9E20h+var_7678], xmm0
 * 000000018004EF02: mov     dword ptr [rbp+9E20h+var_7668], esi
 * 000000018004EF08: mov     dword ptr [rbp+9E20h+var_7668+4], esi
 * 000000018004EF0E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EF13: movups  xmm0, [rbp+9E20h+var_7668]
 * 000000018004EF1A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EF1F: call    sub_1800455D0
 * 000000018004EF24: mov     r8, rax
 * 000000018004EF27: mov     r9d, r12d
 * 000000018004EF2A: mov     edx, 20h ; ' '
 * 000000018004EF2F: lea     rcx, [rbp+9E20h+var_3588]; Src
 * 000000018004EF36: call    sub_1800D44B8
 * 000000018004EF3B: nop
 * 000000018004EF3C: mov     r8, rax
 * 000000018004EF3F: lea     rdx, aStandardshader_157; "StandardShader/ShaderModel40/"
 * 000000018004EF46: lea     rcx, [rbp+9E20h+var_35A8]
 * 000000018004EF4D: call    sub_1800453AC
 * 000000018004EF52: nop
 * 000000018004EF53: lea     r8, aVertex_14; "/Vertex"
 * 000000018004EF5A: mov     rdx, rax
 * 000000018004EF5D: lea     rcx, [rbp+9E20h+var_35C8]
 * 000000018004EF64: call    sub_18002BF78
 * 000000018004EF69: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EF6E: mov     rcx, rax
 * 000000018004EF71: call    sub_1800D45A4
 * 000000018004EF76: mov     cs:byte_180269534, al
 * 000000018004EF7C: lea     rcx, [rbp+9E20h+var_35A8]; void *
 * 000000018004EF83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EF88: nop
 * 000000018004EF89: lea     rcx, [rbp+9E20h+var_3588]; void *
 * 000000018004EF90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EF95: nop
 * 000000018004EF96: lea     rcx, dword_180269538
 * 000000018004EF9D: call    _Init_thread_footer
 * 000000018004EFA2: mov     rax, [rdi+rbx*8]
 * 000000018004EFA6: mov     ecx, [r15+rax]
 * 000000018004EFAA: cmp     cs:dword_180269540, ecx
 * 000000018004EFB0: jle     loc_18004F099
 * 000000018004EFB6: lea     rcx, dword_180269540
 * 000000018004EFBD: call    _Init_thread_header
 * 000000018004EFC2: cmp     cs:dword_180269540, r14d
 * 000000018004EFC9: jnz     loc_18004F099
 * 000000018004EFCF: lea     rax, unk_18019A750
 * 000000018004EFD6: mov     qword ptr [rbp+9E20h+var_94F0], rax
 * 000000018004EFDD: lea     rax, unk_18019B0F8
 * 000000018004EFE4: mov     qword ptr [rbp+9E20h+var_94F0+8], rax
 * 000000018004EFEB: movups  xmm0, [rbp+9E20h+var_94F0]
 * 000000018004EFF2: movups  [rbp+9E20h+var_7658], xmm0
 * 000000018004EFF9: mov     dword ptr [rbp+9E20h+var_7648], esi
 * 000000018004EFFF: mov     dword ptr [rbp+9E20h+var_7648+4], esi
 * 000000018004F005: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F00A: movups  xmm0, [rbp+9E20h+var_7648]
 * 000000018004F011: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F016: call    sub_1800455D0
 * 000000018004F01B: mov     r8, rax
 * 000000018004F01E: mov     r9d, r12d
 * 000000018004F021: mov     edx, 21h ; '!'
 * 000000018004F026: lea     rcx, [rbp+9E20h+var_3528]; Src
 * 000000018004F02D: call    sub_1800D44B8
 * 000000018004F032: nop
 * 000000018004F033: mov     r8, rax
 * 000000018004F036: lea     rdx, aStandardshader_158; "StandardShader/ShaderModel40/"
 * 000000018004F03D: lea     rcx, [rbp+9E20h+var_3548]
 * 000000018004F044: call    sub_1800453AC
 * 000000018004F049: nop
 * 000000018004F04A: lea     r8, aVertex_15; "/Vertex"
 * 000000018004F051: mov     rdx, rax
 * 000000018004F054: lea     rcx, [rbp+9E20h+var_3568]
 * 000000018004F05B: call    sub_18002BF78
 * 000000018004F060: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F065: mov     rcx, rax
 * 000000018004F068: call    sub_1800D45A4
 * 000000018004F06D: mov     cs:byte_18026953C, al
 * 000000018004F073: lea     rcx, [rbp+9E20h+var_3548]; void *
 * 000000018004F07A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F07F: nop
 * 000000018004F080: lea     rcx, [rbp+9E20h+var_3528]; void *
 * 000000018004F087: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F08C: nop
 * 000000018004F08D: lea     rcx, dword_180269540
 * 000000018004F094: call    _Init_thread_footer
 * 000000018004F099: mov     rax, [rdi+rbx*8]
 * 000000018004F09D: mov     ecx, [r15+rax]
 * 000000018004F0A1: cmp     cs:dword_180269548, ecx
 * 000000018004F0A7: jle     loc_18004F189
 * 000000018004F0AD: lea     rcx, dword_180269548
 * 000000018004F0B4: call    _Init_thread_header
 * 000000018004F0B9: cmp     cs:dword_180269548, r14d
 * 000000018004F0C0: jnz     loc_18004F189
 * 000000018004F0C6: mov     qword ptr [rbp+9E20h+var_94E0], r13
 * 000000018004F0CD: lea     rax, unk_18019A748
 * 000000018004F0D4: mov     qword ptr [rbp+9E20h+var_94E0+8], rax
 * 000000018004F0DB: movups  xmm0, [rbp+9E20h+var_94E0]
 * 000000018004F0E2: movups  [rbp+9E20h+var_7638], xmm0
 * 000000018004F0E9: mov     dword ptr [rbp+9E20h+var_7628], esi
 * 000000018004F0EF: mov     dword ptr [rbp+9E20h+var_7628+4], esi
 * 000000018004F0F5: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F0FA: movups  xmm0, [rbp+9E20h+var_7628]
 * 000000018004F101: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F106: call    sub_1800455D0
 * 000000018004F10B: mov     r8, rax
 * 000000018004F10E: mov     r9d, r12d
 * 000000018004F111: mov     edx, 22h ; '"'
 * 000000018004F116: lea     rcx, [rbp+9E20h+var_34C8]; Src
 * 000000018004F11D: call    sub_1800D44B8
 * 000000018004F122: nop
 * 000000018004F123: mov     r8, rax
 * 000000018004F126: lea     rdx, aStandardshader_159; "StandardShader/ShaderModel40/"
 * 000000018004F12D: lea     rcx, [rbp+9E20h+var_34E8]
 * 000000018004F134: call    sub_1800453AC
 * 000000018004F139: nop
 * 000000018004F13A: lea     r8, aVertex_16; "/Vertex"
 * 000000018004F141: mov     rdx, rax
 * 000000018004F144: lea     rcx, [rbp+9E20h+var_3508]
 * 000000018004F14B: call    sub_18002BF78
 * 000000018004F150: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F155: mov     rcx, rax
 * 000000018004F158: call    sub_1800D45A4
 * 000000018004F15D: mov     cs:byte_180269544, al
 * 000000018004F163: lea     rcx, [rbp+9E20h+var_34E8]; void *
 * 000000018004F16A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F16F: nop
 * 000000018004F170: lea     rcx, [rbp+9E20h+var_34C8]; void *
 * 000000018004F177: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F17C: nop
 * 000000018004F17D: lea     rcx, dword_180269548
 * 000000018004F184: call    _Init_thread_footer
 * 000000018004F189: mov     rax, [rdi+rbx*8]
 * 000000018004F18D: mov     ecx, [r15+rax]
 * 000000018004F191: cmp     cs:dword_180269550, ecx
 * 000000018004F197: jle     loc_18004F279
 * 000000018004F19D: lea     rcx, dword_180269550
 * 000000018004F1A4: call    _Init_thread_header
 * 000000018004F1A9: cmp     cs:dword_180269550, r14d
 * 000000018004F1B0: jnz     loc_18004F279
 * 000000018004F1B6: mov     qword ptr [rbp+9E20h+var_94D0], r13
 * 000000018004F1BD: lea     rax, unk_18019A748
 * 000000018004F1C4: mov     qword ptr [rbp+9E20h+var_94D0+8], rax
 * 000000018004F1CB: movups  xmm0, [rbp+9E20h+var_94D0]
 * 000000018004F1D2: movups  [rbp+9E20h+var_7618], xmm0
 * 000000018004F1D9: mov     dword ptr [rbp+9E20h+var_7608], esi
 * 000000018004F1DF: mov     dword ptr [rbp+9E20h+var_7608+4], esi
 * 000000018004F1E5: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F1EA: movups  xmm0, [rbp+9E20h+var_7608]
 * 000000018004F1F1: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F1F6: call    sub_1800455D0
 * 000000018004F1FB: mov     r8, rax
 * 000000018004F1FE: mov     r9d, r12d
 * 000000018004F201: mov     edx, 28h ; '('
 * 000000018004F206: lea     rcx, [rbp+9E20h+var_3468]; Src
 * 000000018004F20D: call    sub_1800D44B8
 * 000000018004F212: nop
 * 000000018004F213: mov     r8, rax
 * 000000018004F216: lea     rdx, aStandardshader_160; "StandardShader/ShaderModel40/"
 * 000000018004F21D: lea     rcx, [rbp+9E20h+var_3488]
 * 000000018004F224: call    sub_1800453AC
 * 000000018004F229: nop
 * 000000018004F22A: lea     r8, aVertex_17; "/Vertex"
 * 000000018004F231: mov     rdx, rax
 * 000000018004F234: lea     rcx, [rbp+9E20h+var_34A8]
 * 000000018004F23B: call    sub_18002BF78
 * 000000018004F240: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F245: mov     rcx, rax
 * 000000018004F248: call    sub_1800D45A4
 * 000000018004F24D: mov     cs:byte_18026954C, al
 * 000000018004F253: lea     rcx, [rbp+9E20h+var_3488]; void *
 * 000000018004F25A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F25F: nop
 * 000000018004F260: lea     rcx, [rbp+9E20h+var_3468]; void *
 * 000000018004F267: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F26C: nop
 * 000000018004F26D: lea     rcx, dword_180269550
 * 000000018004F274: call    _Init_thread_footer
 * 000000018004F279: mov     rax, [rdi+rbx*8]
 * 000000018004F27D: mov     ecx, [r15+rax]
 * 000000018004F281: cmp     cs:dword_180269558, ecx
 * 000000018004F287: jle     loc_18004F370
 * 000000018004F28D: lea     rcx, dword_180269558
 * 000000018004F294: call    _Init_thread_header
 * 000000018004F299: cmp     cs:dword_180269558, r14d
 * 000000018004F2A0: jnz     loc_18004F370
 * 000000018004F2A6: lea     rax, unk_18019B100
 * 000000018004F2AD: mov     qword ptr [rbp+9E20h+var_94C0], rax
 * 000000018004F2B4: lea     rax, unk_18019BC3C
 * 000000018004F2BB: mov     qword ptr [rbp+9E20h+var_94C0+8], rax
 * 000000018004F2C2: movups  xmm0, [rbp+9E20h+var_94C0]
 * 000000018004F2C9: movups  [rbp+9E20h+var_75F8], xmm0
 * 000000018004F2D0: mov     dword ptr [rbp+9E20h+var_75E8], esi
 * 000000018004F2D6: mov     dword ptr [rbp+9E20h+var_75E8+4], esi
 * 000000018004F2DC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F2E1: movups  xmm0, [rbp+9E20h+var_75E8]
 * 000000018004F2E8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F2ED: call    sub_1800455D0
 * 000000018004F2F2: mov     r8, rax
 * 000000018004F2F5: mov     r9d, r12d
 * 000000018004F2F8: mov     edx, 29h ; ')'
 * 000000018004F2FD: lea     rcx, [rbp+9E20h+var_3408]; Src
 * 000000018004F304: call    sub_1800D44B8
 * 000000018004F309: nop
 * 000000018004F30A: mov     r8, rax
 * 000000018004F30D: lea     rdx, aStandardshader_161; "StandardShader/ShaderModel40/"
 * 000000018004F314: lea     rcx, [rbp+9E20h+var_3428]
 * 000000018004F31B: call    sub_1800453AC
 * 000000018004F320: nop
 * 000000018004F321: lea     r8, aVertex_18; "/Vertex"
 * 000000018004F328: mov     rdx, rax
 * 000000018004F32B: lea     rcx, [rbp+9E20h+var_3448]
 * 000000018004F332: call    sub_18002BF78
 * 000000018004F337: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F33C: mov     rcx, rax
 * 000000018004F33F: call    sub_1800D45A4
 * 000000018004F344: mov     cs:byte_180269554, al
 * 000000018004F34A: lea     rcx, [rbp+9E20h+var_3428]; void *
 * 000000018004F351: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F356: nop
 * 000000018004F357: lea     rcx, [rbp+9E20h+var_3408]; void *
 * 000000018004F35E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F363: nop
 * 000000018004F364: lea     rcx, dword_180269558
 * 000000018004F36B: call    _Init_thread_footer
 * 000000018004F370: mov     rax, [rdi+rbx*8]
 * 000000018004F374: mov     ecx, [r15+rax]
 * 000000018004F378: cmp     cs:dword_180269560, ecx
 * 000000018004F37E: jle     loc_18004F460
 * 000000018004F384: lea     rcx, dword_180269560
 * 000000018004F38B: call    _Init_thread_header
 * 000000018004F390: cmp     cs:dword_180269560, r14d
 * 000000018004F397: jnz     loc_18004F460
 * 000000018004F39D: mov     qword ptr [rbp+9E20h+var_94B0], r13
 * 000000018004F3A4: lea     rax, unk_18019A748
 * 000000018004F3AB: mov     qword ptr [rbp+9E20h+var_94B0+8], rax
 * 000000018004F3B2: movups  xmm0, [rbp+9E20h+var_94B0]
 * 000000018004F3B9: movups  [rbp+9E20h+var_75D8], xmm0
 * 000000018004F3C0: mov     dword ptr [rbp+9E20h+var_75C8], esi
 * 000000018004F3C6: mov     dword ptr [rbp+9E20h+var_75C8+4], esi
 * 000000018004F3CC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F3D1: movups  xmm0, [rbp+9E20h+var_75C8]
 * 000000018004F3D8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F3DD: call    sub_1800455D0
 * 000000018004F3E2: mov     r8, rax
 * 000000018004F3E5: mov     r9d, r12d
 * 000000018004F3E8: mov     edx, 2Ah ; '*'
 * 000000018004F3ED: lea     rcx, [rbp+9E20h+var_33A8]; Src
 * 000000018004F3F4: call    sub_1800D44B8
 * 000000018004F3F9: nop
 * 000000018004F3FA: mov     r8, rax
 * 000000018004F3FD: lea     rdx, aStandardshader_162; "StandardShader/ShaderModel40/"
 * 000000018004F404: lea     rcx, [rbp+9E20h+var_33C8]
 * 000000018004F40B: call    sub_1800453AC
 * 000000018004F410: nop
 * 000000018004F411: lea     r8, aVertex_19; "/Vertex"
 * 000000018004F418: mov     rdx, rax
 * 000000018004F41B: lea     rcx, [rbp+9E20h+var_33E8]
 * 000000018004F422: call    sub_18002BF78
 * 000000018004F427: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F42C: mov     rcx, rax
 * 000000018004F42F: call    sub_1800D45A4
 * 000000018004F434: mov     cs:byte_18026955C, al
 * 000000018004F43A: lea     rcx, [rbp+9E20h+var_33C8]; void *
 * 000000018004F441: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F446: nop
 * 000000018004F447: lea     rcx, [rbp+9E20h+var_33A8]; void *
 * 000000018004F44E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F453: nop
 * 000000018004F454: lea     rcx, dword_180269560
 * 000000018004F45B: call    _Init_thread_footer
 * 000000018004F460: mov     rax, [rdi+rbx*8]
 * 000000018004F464: mov     ecx, [r15+rax]
 * 000000018004F468: cmp     cs:dword_180269568, ecx
 * 000000018004F46E: jle     loc_18004F550
 * 000000018004F474: lea     rcx, dword_180269568
 * 000000018004F47B: call    _Init_thread_header
 * 000000018004F480: cmp     cs:dword_180269568, r14d
 * 000000018004F487: jnz     loc_18004F550
 * 000000018004F48D: mov     qword ptr [rbp+9E20h+var_94A0], r13
 * 000000018004F494: lea     rax, unk_18019A748
 * 000000018004F49B: mov     qword ptr [rbp+9E20h+var_94A0+8], rax
 * 000000018004F4A2: movups  xmm0, [rbp+9E20h+var_94A0]
 * 000000018004F4A9: movups  [rbp+9E20h+var_75B8], xmm0
 * 000000018004F4B0: mov     dword ptr [rbp+9E20h+var_75A8], esi
 * 000000018004F4B6: mov     dword ptr [rbp+9E20h+var_75A8+4], esi
 * 000000018004F4BC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F4C1: movups  xmm0, [rbp+9E20h+var_75A8]
 * 000000018004F4C8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F4CD: call    sub_1800455D0
 * 000000018004F4D2: mov     r8, rax
 * 000000018004F4D5: mov     r9d, r12d
 * 000000018004F4D8: mov     edx, 30h ; '0'
 * 000000018004F4DD: lea     rcx, [rbp+9E20h+var_3348]; Src
 * 000000018004F4E4: call    sub_1800D44B8
 * 000000018004F4E9: nop
 * 000000018004F4EA: mov     r8, rax
 * 000000018004F4ED: lea     rdx, aStandardshader_163; "StandardShader/ShaderModel40/"
 * 000000018004F4F4: lea     rcx, [rbp+9E20h+var_3368]
 * 000000018004F4FB: call    sub_1800453AC
 * 000000018004F500: nop
 * 000000018004F501: lea     r8, aVertex_20; "/Vertex"
 * 000000018004F508: mov     rdx, rax
 * 000000018004F50B: lea     rcx, [rbp+9E20h+var_3388]
 * 000000018004F512: call    sub_18002BF78
 * 000000018004F517: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F51C: mov     rcx, rax
 * 000000018004F51F: call    sub_1800D45A4
 * 000000018004F524: mov     cs:byte_180269564, al
 * 000000018004F52A: lea     rcx, [rbp+9E20h+var_3368]; void *
 * 000000018004F531: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F536: nop
 * 000000018004F537: lea     rcx, [rbp+9E20h+var_3348]; void *
 * 000000018004F53E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F543: nop
 * 000000018004F544: lea     rcx, dword_180269568
 * 000000018004F54B: call    _Init_thread_footer
 * 000000018004F550: mov     rax, [rdi+rbx*8]
 * 000000018004F554: mov     ecx, [r15+rax]
 * 000000018004F558: cmp     cs:dword_180269570, ecx
 * 000000018004F55E: jle     loc_18004F640
 * 000000018004F564: lea     rcx, dword_180269570
 * 000000018004F56B: call    _Init_thread_header
 * 000000018004F570: cmp     cs:dword_180269570, r14d
 * 000000018004F577: jnz     loc_18004F640
 * 000000018004F57D: mov     qword ptr [rbp+9E20h+var_9490], r13
 * 000000018004F584: lea     rax, unk_18019A748
 * 000000018004F58B: mov     qword ptr [rbp+9E20h+var_9490+8], rax
 * 000000018004F592: movups  xmm0, [rbp+9E20h+var_9490]
 * 000000018004F599: movups  [rbp+9E20h+var_7598], xmm0
 * 000000018004F5A0: mov     dword ptr [rbp+9E20h+var_7588], esi
 * 000000018004F5A6: mov     dword ptr [rbp+9E20h+var_7588+4], esi
 * 000000018004F5AC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F5B1: movups  xmm0, [rbp+9E20h+var_7588]
 * 000000018004F5B8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F5BD: call    sub_1800455D0
 * 000000018004F5C2: mov     r8, rax
 * 000000018004F5C5: mov     r9d, r12d
 * 000000018004F5C8: mov     edx, 32h ; '2'
 * 000000018004F5CD: lea     rcx, [rbp+9E20h+var_32E8]; Src
 * 000000018004F5D4: call    sub_1800D44B8
 * 000000018004F5D9: nop
 * 000000018004F5DA: mov     r8, rax
 * 000000018004F5DD: lea     rdx, aStandardshader_164; "StandardShader/ShaderModel40/"
 * 000000018004F5E4: lea     rcx, [rbp+9E20h+var_3308]
 * 000000018004F5EB: call    sub_1800453AC
 * 000000018004F5F0: nop
 * 000000018004F5F1: lea     r8, aVertex_21; "/Vertex"
 * 000000018004F5F8: mov     rdx, rax
 * 000000018004F5FB: lea     rcx, [rbp+9E20h+var_3328]
 * 000000018004F602: call    sub_18002BF78
 * 000000018004F607: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F60C: mov     rcx, rax
 * 000000018004F60F: call    sub_1800D45A4
 * 000000018004F614: mov     cs:byte_18026956C, al
 * 000000018004F61A: lea     rcx, [rbp+9E20h+var_3308]; void *
 * 000000018004F621: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F626: nop
 * 000000018004F627: lea     rcx, [rbp+9E20h+var_32E8]; void *
 * 000000018004F62E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F633: nop
 * 000000018004F634: lea     rcx, dword_180269570
 * 000000018004F63B: call    _Init_thread_footer
 * 000000018004F640: mov     rax, [rdi+rbx*8]
 * 000000018004F644: mov     ecx, [r15+rax]
 * 000000018004F648: cmp     cs:dword_180269578, ecx
 * 000000018004F64E: jle     loc_18004F730
 * 000000018004F654: lea     rcx, dword_180269578
 * 000000018004F65B: call    _Init_thread_header
 * 000000018004F660: cmp     cs:dword_180269578, r14d
 * 000000018004F667: jnz     loc_18004F730
 * 000000018004F66D: mov     qword ptr [rbp+9E20h+var_9480], r13
 * 000000018004F674: lea     rax, unk_18019A748
 * 000000018004F67B: mov     qword ptr [rbp+9E20h+var_9480+8], rax
 * 000000018004F682: movups  xmm0, [rbp+9E20h+var_9480]
 * 000000018004F689: movups  [rbp+9E20h+var_7578], xmm0
 * 000000018004F690: mov     dword ptr [rbp+9E20h+var_7568], esi
 * 000000018004F696: mov     dword ptr [rbp+9E20h+var_7568+4], esi
 * 000000018004F69C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F6A1: movups  xmm0, [rbp+9E20h+var_7568]
 * 000000018004F6A8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F6AD: call    sub_1800455D0
 * 000000018004F6B2: mov     r8, rax
 * 000000018004F6B5: mov     r9d, r12d
 * 000000018004F6B8: mov     edx, 38h ; '8'
 * 000000018004F6BD: lea     rcx, [rbp+9E20h+var_3288]; Src
 * 000000018004F6C4: call    sub_1800D44B8
 * 000000018004F6C9: nop
 * 000000018004F6CA: mov     r8, rax
 * 000000018004F6CD: lea     rdx, aStandardshader_165; "StandardShader/ShaderModel40/"
 * 000000018004F6D4: lea     rcx, [rbp+9E20h+var_32A8]
 * 000000018004F6DB: call    sub_1800453AC
 * 000000018004F6E0: nop
 * 000000018004F6E1: lea     r8, aVertex_22; "/Vertex"
 * 000000018004F6E8: mov     rdx, rax
 * 000000018004F6EB: lea     rcx, [rbp+9E20h+var_32C8]
 * 000000018004F6F2: call    sub_18002BF78
 * 000000018004F6F7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F6FC: mov     rcx, rax
 * 000000018004F6FF: call    sub_1800D45A4
 * 000000018004F704: mov     cs:byte_180269574, al
 * 000000018004F70A: lea     rcx, [rbp+9E20h+var_32A8]; void *
 * 000000018004F711: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F716: nop
 * 000000018004F717: lea     rcx, [rbp+9E20h+var_3288]; void *
 * 000000018004F71E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F723: nop
 * 000000018004F724: lea     rcx, dword_180269578
 * 000000018004F72B: call    _Init_thread_footer
 * 000000018004F730: mov     rax, [rdi+rbx*8]
 * 000000018004F734: mov     ecx, [r15+rax]
 * 000000018004F738: cmp     cs:dword_180269580, ecx
 * 000000018004F73E: jle     loc_18004F820
 * 000000018004F744: lea     rcx, dword_180269580
 * 000000018004F74B: call    _Init_thread_header
 * 000000018004F750: cmp     cs:dword_180269580, r14d
 * 000000018004F757: jnz     loc_18004F820
 * 000000018004F75D: mov     qword ptr [rbp+9E20h+var_9470], r13
 * 000000018004F764: lea     rax, unk_18019A748
 * 000000018004F76B: mov     qword ptr [rbp+9E20h+var_9470+8], rax
 * 000000018004F772: movups  xmm0, [rbp+9E20h+var_9470]
 * 000000018004F779: movups  [rbp+9E20h+var_7558], xmm0
 * 000000018004F780: mov     dword ptr [rbp+9E20h+var_7548], esi
 * 000000018004F786: mov     dword ptr [rbp+9E20h+var_7548+4], esi
 * 000000018004F78C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F791: movups  xmm0, [rbp+9E20h+var_7548]
 * 000000018004F798: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F79D: call    sub_1800455D0
 * 000000018004F7A2: mov     r8, rax
 * 000000018004F7A5: mov     r9d, r12d
 * 000000018004F7A8: mov     edx, 3Ah ; ':'
 * 000000018004F7AD: lea     rcx, [rbp+9E20h+var_3228]; Src
 * 000000018004F7B4: call    sub_1800D44B8
 * 000000018004F7B9: nop
 * 000000018004F7BA: mov     r8, rax
 * 000000018004F7BD: lea     rdx, aStandardshader_166; "StandardShader/ShaderModel40/"
 * 000000018004F7C4: lea     rcx, [rbp+9E20h+var_3248]
 * 000000018004F7CB: call    sub_1800453AC
 * 000000018004F7D0: nop
 * 000000018004F7D1: lea     r8, aVertex_23; "/Vertex"
 * 000000018004F7D8: mov     rdx, rax
 * 000000018004F7DB: lea     rcx, [rbp+9E20h+var_3268]
 * 000000018004F7E2: call    sub_18002BF78
 * 000000018004F7E7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F7EC: mov     rcx, rax
 * 000000018004F7EF: call    sub_1800D45A4
 * 000000018004F7F4: mov     cs:byte_18026957C, al
 * 000000018004F7FA: lea     rcx, [rbp+9E20h+var_3248]; void *
 * 000000018004F801: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F806: nop
 * 000000018004F807: lea     rcx, [rbp+9E20h+var_3228]; void *
 * 000000018004F80E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F813: nop
 * 000000018004F814: lea     rcx, dword_180269580
 * 000000018004F81B: call    _Init_thread_footer
 * 000000018004F820: mov     rax, [rdi+rbx*8]
 * 000000018004F824: lea     r13, unk_18019BC40
 * 000000018004F82B: mov     eax, [r15+rax]
 * 000000018004F82F: cmp     cs:dword_180269588, eax
 * 000000018004F835: jle     loc_18004F917
 * 000000018004F83B: lea     rcx, dword_180269588
 * 000000018004F842: call    _Init_thread_header
 * 000000018004F847: cmp     cs:dword_180269588, r14d
 * 000000018004F84E: jnz     loc_18004F917
 * 000000018004F854: mov     qword ptr [rbp+9E20h+var_9460], r13
 * 000000018004F85B: lea     rax, unk_18019CC90
 * 000000018004F862: mov     qword ptr [rbp+9E20h+var_9460+8], rax
 * 000000018004F869: movups  xmm0, [rbp+9E20h+var_9460]
 * 000000018004F870: movups  [rbp+9E20h+var_7538], xmm0
 * 000000018004F877: mov     dword ptr [rbp+9E20h+var_7528], esi
 * 000000018004F87D: mov     dword ptr [rbp+9E20h+var_7528+4], esi
 * 000000018004F883: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F888: movups  xmm0, [rbp+9E20h+var_7528]
 * 000000018004F88F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F894: call    sub_1800455D0
 * 000000018004F899: mov     r8, rax
 * 000000018004F89C: mov     r9d, r12d
 * 000000018004F89F: mov     edx, 40h ; '@'
 * 000000018004F8A4: lea     rcx, [rbp+9E20h+var_31C8]; Src
 * 000000018004F8AB: call    sub_1800D44B8
 * 000000018004F8B0: nop
 * 000000018004F8B1: mov     r8, rax
 * 000000018004F8B4: lea     rdx, aStandardshader_167; "StandardShader/ShaderModel40/"
 * 000000018004F8BB: lea     rcx, [rbp+9E20h+var_31E8]
 * 000000018004F8C2: call    sub_1800453AC
 * 000000018004F8C7: nop
 * 000000018004F8C8: lea     r8, aVertex_24; "/Vertex"
 * 000000018004F8CF: mov     rdx, rax
 * 000000018004F8D2: lea     rcx, [rbp+9E20h+var_3208]
 * 000000018004F8D9: call    sub_18002BF78
 * 000000018004F8DE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F8E3: mov     rcx, rax
 * 000000018004F8E6: call    sub_1800D45A4
 * 000000018004F8EB: mov     cs:byte_180269584, al
 * 000000018004F8F1: lea     rcx, [rbp+9E20h+var_31E8]; void *
 * 000000018004F8F8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F8FD: nop
 * 000000018004F8FE: lea     rcx, [rbp+9E20h+var_31C8]; void *
 * 000000018004F905: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F90A: nop
 * 000000018004F90B: lea     rcx, dword_180269588
 * 000000018004F912: call    _Init_thread_footer
 * 000000018004F917: mov     rax, [rdi+rbx*8]
 * 000000018004F91B: mov     ecx, [r15+rax]
 * 000000018004F91F: cmp     cs:dword_180269590, ecx
 * 000000018004F925: jle     loc_18004FA07
 * 000000018004F92B: lea     rcx, dword_180269590
 * 000000018004F932: call    _Init_thread_header
 * 000000018004F937: cmp     cs:dword_180269590, r14d
 * 000000018004F93E: jnz     loc_18004FA07
 * 000000018004F944: mov     qword ptr [rbp+9E20h+var_9450], r13
 * 000000018004F94B: lea     rax, unk_18019CC90
 * 000000018004F952: mov     qword ptr [rbp+9E20h+var_9450+8], rax
 * 000000018004F959: movups  xmm0, [rbp+9E20h+var_9450]
 * 000000018004F960: movups  [rbp+9E20h+var_7518], xmm0
 * 000000018004F967: mov     dword ptr [rbp+9E20h+var_7508], esi
 * 000000018004F96D: mov     dword ptr [rbp+9E20h+var_7508+4], esi
 * 000000018004F973: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F978: movups  xmm0, [rbp+9E20h+var_7508]
 * 000000018004F97F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F984: call    sub_1800455D0
 * 000000018004F989: mov     r8, rax
 * 000000018004F98C: mov     r9d, r12d
 * 000000018004F98F: mov     edx, 42h ; 'B'
 * 000000018004F994: lea     rcx, [rbp+9E20h+var_3168]; Src
 * 000000018004F99B: call    sub_1800D44B8
 * 000000018004F9A0: nop
 * 000000018004F9A1: mov     r8, rax
 * 000000018004F9A4: lea     rdx, aStandardshader_168; "StandardShader/ShaderModel40/"
 * 000000018004F9AB: lea     rcx, [rbp+9E20h+var_3188]
 * 000000018004F9B2: call    sub_1800453AC
 * 000000018004F9B7: nop
 * 000000018004F9B8: lea     r8, aVertex_25; "/Vertex"
 * 000000018004F9BF: mov     rdx, rax
 * 000000018004F9C2: lea     rcx, [rbp+9E20h+var_31A8]
 * 000000018004F9C9: call    sub_18002BF78
 * 000000018004F9CE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F9D3: mov     rcx, rax
 * 000000018004F9D6: call    sub_1800D45A4
 * 000000018004F9DB: mov     cs:byte_18026958C, al
 * 000000018004F9E1: lea     rcx, [rbp+9E20h+var_3188]; void *
 * 000000018004F9E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F9ED: nop
 * 000000018004F9EE: lea     rcx, [rbp+9E20h+var_3168]; void *
 * 000000018004F9F5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F9FA: nop
 * 000000018004F9FB: lea     rcx, dword_180269590
 * 000000018004FA02: call    _Init_thread_footer
 * 000000018004FA07: mov     rax, [rdi+rbx*8]
 * 000000018004FA0B: mov     ecx, [r15+rax]
 * 000000018004FA0F: cmp     cs:dword_180269598, ecx
 * 000000018004FA15: jle     loc_18004FAF7
 * 000000018004FA1B: lea     rcx, dword_180269598
 * 000000018004FA22: call    _Init_thread_header
 * 000000018004FA27: cmp     cs:dword_180269598, r14d
 * 000000018004FA2E: jnz     loc_18004FAF7
 * 000000018004FA34: mov     qword ptr [rbp+9E20h+var_9440], r13
 * 000000018004FA3B: lea     rax, unk_18019CC90
 * 000000018004FA42: mov     qword ptr [rbp+9E20h+var_9440+8], rax
 * 000000018004FA49: movups  xmm0, [rbp+9E20h+var_9440]
 * 000000018004FA50: movups  [rbp+9E20h+var_74F8], xmm0
 * 000000018004FA57: mov     dword ptr [rbp+9E20h+var_74E8], esi
 * 000000018004FA5D: mov     dword ptr [rbp+9E20h+var_74E8+4], esi
 * 000000018004FA63: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FA68: movups  xmm0, [rbp+9E20h+var_74E8]
 * 000000018004FA6F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FA74: call    sub_1800455D0
 * 000000018004FA79: mov     r8, rax
 * 000000018004FA7C: mov     r9d, r12d
 * 000000018004FA7F: mov     edx, 48h ; 'H'
 * 000000018004FA84: lea     rcx, [rbp+9E20h+var_3108]; Src
 * 000000018004FA8B: call    sub_1800D44B8
 * 000000018004FA90: nop
 * 000000018004FA91: mov     r8, rax
 * 000000018004FA94: lea     rdx, aStandardshader_169; "StandardShader/ShaderModel40/"
 * 000000018004FA9B: lea     rcx, [rbp+9E20h+var_3128]
 * 000000018004FAA2: call    sub_1800453AC
 * 000000018004FAA7: nop
 * 000000018004FAA8: lea     r8, aVertex_26; "/Vertex"
 * 000000018004FAAF: mov     rdx, rax
 * 000000018004FAB2: lea     rcx, [rbp+9E20h+var_3148]
 * 000000018004FAB9: call    sub_18002BF78
 * 000000018004FABE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FAC3: mov     rcx, rax
 * 000000018004FAC6: call    sub_1800D45A4
 * 000000018004FACB: mov     cs:byte_180269594, al
 * 000000018004FAD1: lea     rcx, [rbp+9E20h+var_3128]; void *
 * 000000018004FAD8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FADD: nop
 * 000000018004FADE: lea     rcx, [rbp+9E20h+var_3108]; void *
 * 000000018004FAE5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FAEA: nop
 * 000000018004FAEB: lea     rcx, dword_180269598
 * 000000018004FAF2: call    _Init_thread_footer
 * 000000018004FAF7: mov     rax, [rdi+rbx*8]
 * 000000018004FAFB: mov     ecx, [r15+rax]
 * 000000018004FAFF: cmp     cs:dword_1802695A0, ecx
 * 000000018004FB05: jle     loc_18004FBE7
 * 000000018004FB0B: lea     rcx, dword_1802695A0
 * 000000018004FB12: call    _Init_thread_header
 * 000000018004FB17: cmp     cs:dword_1802695A0, r14d
 * 000000018004FB1E: jnz     loc_18004FBE7
 * 000000018004FB24: mov     qword ptr [rbp+9E20h+var_9430], r13
 * 000000018004FB2B: lea     rax, unk_18019CC90
 * 000000018004FB32: mov     qword ptr [rbp+9E20h+var_9430+8], rax
 * 000000018004FB39: movups  xmm0, [rbp+9E20h+var_9430]
 * 000000018004FB40: movups  [rbp+9E20h+var_74D8], xmm0
 * 000000018004FB47: mov     dword ptr [rbp+9E20h+var_74C8], esi
 * 000000018004FB4D: mov     dword ptr [rbp+9E20h+var_74C8+4], esi
 * 000000018004FB53: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FB58: movups  xmm0, [rbp+9E20h+var_74C8]
 * 000000018004FB5F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FB64: call    sub_1800455D0
 * 000000018004FB69: mov     r8, rax
 * 000000018004FB6C: mov     r9d, r12d
 * 000000018004FB6F: mov     edx, 4Ah ; 'J'
 * 000000018004FB74: lea     rcx, [rbp+9E20h+var_30A8]; Src
 * 000000018004FB7B: call    sub_1800D44B8
 * 000000018004FB80: nop
 * 000000018004FB81: mov     r8, rax
 * 000000018004FB84: lea     rdx, aStandardshader_170; "StandardShader/ShaderModel40/"
 * 000000018004FB8B: lea     rcx, [rbp+9E20h+var_30C8]
 * 000000018004FB92: call    sub_1800453AC
 * 000000018004FB97: nop
 * 000000018004FB98: lea     r8, aVertex_27; "/Vertex"
 * 000000018004FB9F: mov     rdx, rax
 * 000000018004FBA2: lea     rcx, [rbp+9E20h+var_30E8]
 * 000000018004FBA9: call    sub_18002BF78
 * 000000018004FBAE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FBB3: mov     rcx, rax
 * 000000018004FBB6: call    sub_1800D45A4
 * 000000018004FBBB: mov     cs:byte_18026959C, al
 * 000000018004FBC1: lea     rcx, [rbp+9E20h+var_30C8]; void *
 * 000000018004FBC8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FBCD: nop
 * 000000018004FBCE: lea     rcx, [rbp+9E20h+var_30A8]; void *
 * 000000018004FBD5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FBDA: nop
 * 000000018004FBDB: lea     rcx, dword_1802695A0
 * 000000018004FBE2: call    _Init_thread_footer
 * 000000018004FBE7: mov     rax, [rdi+rbx*8]
 * 000000018004FBEB: mov     ecx, [r15+rax]
 * 000000018004FBEF: cmp     cs:dword_1802695A8, ecx
 * 000000018004FBF5: jle     loc_18004FCD7
 * 000000018004FBFB: lea     rcx, dword_1802695A8
 * 000000018004FC02: call    _Init_thread_header
 * 000000018004FC07: cmp     cs:dword_1802695A8, r14d
 * 000000018004FC0E: jnz     loc_18004FCD7
 * 000000018004FC14: mov     qword ptr [rbp+9E20h+var_9420], r13
 * 000000018004FC1B: lea     rax, unk_18019CC90
 * 000000018004FC22: mov     qword ptr [rbp+9E20h+var_9420+8], rax
 * 000000018004FC29: movups  xmm0, [rbp+9E20h+var_9420]
 * 000000018004FC30: movups  [rbp+9E20h+var_74B8], xmm0
 * 000000018004FC37: mov     dword ptr [rbp+9E20h+var_74A8], esi
 * 000000018004FC3D: mov     dword ptr [rbp+9E20h+var_74A8+4], esi
 * 000000018004FC43: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FC48: movups  xmm0, [rbp+9E20h+var_74A8]
 * 000000018004FC4F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FC54: call    sub_1800455D0
 * 000000018004FC59: mov     r8, rax
 * 000000018004FC5C: mov     r9d, r12d
 * 000000018004FC5F: mov     edx, 50h ; 'P'
 * 000000018004FC64: lea     rcx, [rbp+9E20h+var_3048]; Src
 * 000000018004FC6B: call    sub_1800D44B8
 * 000000018004FC70: nop
 * 000000018004FC71: mov     r8, rax
 * 000000018004FC74: lea     rdx, aStandardshader_171; "StandardShader/ShaderModel40/"
 * 000000018004FC7B: lea     rcx, [rbp+9E20h+var_3068]
 * 000000018004FC82: call    sub_1800453AC
 * 000000018004FC87: nop
 * 000000018004FC88: lea     r8, aVertex_28; "/Vertex"
 * 000000018004FC8F: mov     rdx, rax
 * 000000018004FC92: lea     rcx, [rbp+9E20h+var_3088]
 * 000000018004FC99: call    sub_18002BF78
 * 000000018004FC9E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FCA3: mov     rcx, rax
 * 000000018004FCA6: call    sub_1800D45A4
 * 000000018004FCAB: mov     cs:byte_1802695A4, al
 * 000000018004FCB1: lea     rcx, [rbp+9E20h+var_3068]; void *
 * 000000018004FCB8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FCBD: nop
 * 000000018004FCBE: lea     rcx, [rbp+9E20h+var_3048]; void *
 * 000000018004FCC5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FCCA: nop
 * 000000018004FCCB: lea     rcx, dword_1802695A8
 * 000000018004FCD2: call    _Init_thread_footer
 * 000000018004FCD7: mov     rax, [rdi+rbx*8]
 * 000000018004FCDB: mov     ecx, [r15+rax]
 * 000000018004FCDF: cmp     cs:dword_1802695B0, ecx
 * 000000018004FCE5: jle     loc_18004FDC7
 * 000000018004FCEB: lea     rcx, dword_1802695B0
 * 000000018004FCF2: call    _Init_thread_header
 * 000000018004FCF7: cmp     cs:dword_1802695B0, r14d
 * 000000018004FCFE: jnz     loc_18004FDC7
 * 000000018004FD04: mov     qword ptr [rbp+9E20h+var_9410], r13
 * 000000018004FD0B: lea     rax, unk_18019CC90
 * 000000018004FD12: mov     qword ptr [rbp+9E20h+var_9410+8], rax
 * 000000018004FD19: movups  xmm0, [rbp+9E20h+var_9410]
 * 000000018004FD20: movups  [rbp+9E20h+var_7498], xmm0
 * 000000018004FD27: mov     dword ptr [rbp+9E20h+var_7488], esi
 * 000000018004FD2D: mov     dword ptr [rbp+9E20h+var_7488+4], esi
 * 000000018004FD33: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FD38: movups  xmm0, [rbp+9E20h+var_7488]
 * 000000018004FD3F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FD44: call    sub_1800455D0
 * 000000018004FD49: mov     r8, rax
 * 000000018004FD4C: mov     r9d, r12d
 * 000000018004FD4F: mov     edx, 52h ; 'R'
 * 000000018004FD54: lea     rcx, [rbp+9E20h+var_2FE8]; Src
 * 000000018004FD5B: call    sub_1800D44B8
 * 000000018004FD60: nop
 * 000000018004FD61: mov     r8, rax
 * 000000018004FD64: lea     rdx, aStandardshader_172; "StandardShader/ShaderModel40/"
 * 000000018004FD6B: lea     rcx, [rbp+9E20h+var_3008]
 * 000000018004FD72: call    sub_1800453AC
 * 000000018004FD77: nop
 * 000000018004FD78: lea     r8, aVertex_29; "/Vertex"
 * 000000018004FD7F: mov     rdx, rax
 * 000000018004FD82: lea     rcx, [rbp+9E20h+var_3028]
 * 000000018004FD89: call    sub_18002BF78
 * 000000018004FD8E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FD93: mov     rcx, rax
 * 000000018004FD96: call    sub_1800D45A4
 * 000000018004FD9B: mov     cs:byte_1802695AC, al
 * 000000018004FDA1: lea     rcx, [rbp+9E20h+var_3008]; void *
 * 000000018004FDA8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FDAD: nop
 * 000000018004FDAE: lea     rcx, [rbp+9E20h+var_2FE8]; void *
 * 000000018004FDB5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FDBA: nop
 * 000000018004FDBB: lea     rcx, dword_1802695B0
 * 000000018004FDC2: call    _Init_thread_footer
 * 000000018004FDC7: mov     rax, [rdi+rbx*8]
 * 000000018004FDCB: mov     ecx, [r15+rax]
 * 000000018004FDCF: cmp     cs:dword_1802695B8, ecx
 * 000000018004FDD5: jle     loc_18004FEB7
 * 000000018004FDDB: lea     rcx, dword_1802695B8
 * 000000018004FDE2: call    _Init_thread_header
 * 000000018004FDE7: cmp     cs:dword_1802695B8, r14d
 * 000000018004FDEE: jnz     loc_18004FEB7
 * 000000018004FDF4: mov     qword ptr [rbp+9E20h+var_9400], r13
 * 000000018004FDFB: lea     rax, unk_18019CC90
 * 000000018004FE02: mov     qword ptr [rbp+9E20h+var_9400+8], rax
 * 000000018004FE09: movups  xmm0, [rbp+9E20h+var_9400]
 * 000000018004FE10: movups  [rbp+9E20h+var_7478], xmm0
 * 000000018004FE17: mov     dword ptr [rbp+9E20h+var_7468], esi
 * 000000018004FE1D: mov     dword ptr [rbp+9E20h+var_7468+4], esi
 * 000000018004FE23: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FE28: movups  xmm0, [rbp+9E20h+var_7468]
 * 000000018004FE2F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FE34: call    sub_1800455D0
 * 000000018004FE39: mov     r8, rax
 * 000000018004FE3C: mov     r9d, r12d
 * 000000018004FE3F: mov     edx, 58h ; 'X'
 * 000000018004FE44: lea     rcx, [rbp+9E20h+var_2F88]; Src
 * 000000018004FE4B: call    sub_1800D44B8
 * 000000018004FE50: nop
 * 000000018004FE51: mov     r8, rax
 * 000000018004FE54: lea     rdx, aStandardshader_173; "StandardShader/ShaderModel40/"
 * 000000018004FE5B: lea     rcx, [rbp+9E20h+var_2FA8]
 * 000000018004FE62: call    sub_1800453AC
 * 000000018004FE67: nop
 * 000000018004FE68: lea     r8, aVertex_30; "/Vertex"
 * 000000018004FE6F: mov     rdx, rax
 * 000000018004FE72: lea     rcx, [rbp+9E20h+var_2FC8]
 * 000000018004FE79: call    sub_18002BF78
 * 000000018004FE7E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FE83: mov     rcx, rax
 * 000000018004FE86: call    sub_1800D45A4
 * 000000018004FE8B: mov     cs:byte_1802695B4, al
 * 000000018004FE91: lea     rcx, [rbp+9E20h+var_2FA8]; void *
 * 000000018004FE98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FE9D: nop
 * 000000018004FE9E: lea     rcx, [rbp+9E20h+var_2F88]; void *
 * 000000018004FEA5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FEAA: nop
 * 000000018004FEAB: lea     rcx, dword_1802695B8
 * 000000018004FEB2: call    _Init_thread_footer
 * 000000018004FEB7: mov     rax, [rdi+rbx*8]
 * 000000018004FEBB: mov     ecx, [r15+rax]
 * 000000018004FEBF: cmp     cs:dword_1802695C0, ecx
 * 000000018004FEC5: jle     loc_18004FFA7
 * 000000018004FECB: lea     rcx, dword_1802695C0
 * 000000018004FED2: call    _Init_thread_header
 * 000000018004FED7: cmp     cs:dword_1802695C0, r14d
 * 000000018004FEDE: jnz     loc_18004FFA7
 * 000000018004FEE4: mov     qword ptr [rbp+9E20h+var_93E0], r13
 * 000000018004FEEB: lea     rax, unk_18019CC90
 * 000000018004FEF2: mov     qword ptr [rbp+9E20h+var_93E0+8], rax
 * 000000018004FEF9: movups  xmm0, [rbp+9E20h+var_93E0]
 * 000000018004FF00: movups  [rbp+9E20h+var_7458], xmm0
 * 000000018004FF07: mov     dword ptr [rbp+9E20h+var_7448], esi
 * 000000018004FF0D: mov     dword ptr [rbp+9E20h+var_7448+4], esi
 * 000000018004FF13: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FF18: movups  xmm0, [rbp+9E20h+var_7448]
 * 000000018004FF1F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FF24: call    sub_1800455D0
 * 000000018004FF29: mov     r8, rax
 * 000000018004FF2C: mov     r9d, r12d
 * 000000018004FF2F: mov     edx, 5Ah ; 'Z'
 * 000000018004FF34: lea     rcx, [rbp+9E20h+var_2F28]; Src
 * 000000018004FF3B: call    sub_1800D44B8
 * 000000018004FF40: nop
 * 000000018004FF41: mov     r8, rax
 * 000000018004FF44: lea     rdx, aStandardshader_174; "StandardShader/ShaderModel40/"
 * 000000018004FF4B: lea     rcx, [rbp+9E20h+var_2F48]
 * 000000018004FF52: call    sub_1800453AC
 * 000000018004FF57: nop
 * 000000018004FF58: lea     r8, aVertex_31; "/Vertex"
 * 000000018004FF5F: mov     rdx, rax
 * 000000018004FF62: lea     rcx, [rbp+9E20h+var_2F68]
 * 000000018004FF69: call    sub_18002BF78
 * 000000018004FF6E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FF73: mov     rcx, rax
 * 000000018004FF76: call    sub_1800D45A4
 * 000000018004FF7B: mov     cs:byte_1802695BC, al
 * 000000018004FF81: lea     rcx, [rbp+9E20h+var_2F48]; void *
 * 000000018004FF88: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FF8D: nop
 * 000000018004FF8E: lea     rcx, [rbp+9E20h+var_2F28]; void *
 * 000000018004FF95: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FF9A: nop
 * 000000018004FF9B: lea     rcx, dword_1802695C0
 * 000000018004FFA2: call    _Init_thread_footer
 * 000000018004FFA7: mov     rax, [rdi+rbx*8]
 * 000000018004FFAB: lea     r13, unk_18019CC90
 * 000000018004FFB2: mov     eax, [r15+rax]
 * 000000018004FFB6: cmp     cs:dword_1802695C8, eax
 * 000000018004FFBC: jle     loc_18005009E
 * 000000018004FFC2: lea     rcx, dword_1802695C8
 * 000000018004FFC9: call    _Init_thread_header
 * 000000018004FFCE: cmp     cs:dword_1802695C8, r14d
 * 000000018004FFD5: jnz     loc_18005009E
 * 000000018004FFDB: mov     qword ptr [rbp+9E20h+var_93F0], r13
 * 000000018004FFE2: lea     rax, aBlur8_0; "Blur8"
 * 000000018004FFE9: mov     qword ptr [rbp+9E20h+var_93F0+8], rax
 * 000000018004FFF0: movups  xmm0, [rbp+9E20h+var_93F0]
 * 000000018004FFF7: movups  [rbp+9E20h+var_7438], xmm0
 * 000000018004FFFE: mov     dword ptr [rbp+9E20h+var_7428], esi
 * 0000000180050004: mov     dword ptr [rbp+9E20h+var_7428+4], esi
 * 000000018005000A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005000F: movups  xmm0, [rbp+9E20h+var_7428]
 * 0000000180050016: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005001B: call    sub_1800455D0
 * 0000000180050020: mov     r8, rax
 * 0000000180050023: mov     r9d, r12d
 * 0000000180050026: mov     edx, 60h ; '`'
 * 000000018005002B: lea     rcx, [rbp+9E20h+var_2EC8]; Src
 * 0000000180050032: call    sub_1800D44B8
 * 0000000180050037: nop
 * 0000000180050038: mov     r8, rax
 * 000000018005003B: lea     rdx, aStandardshader_175; "StandardShader/ShaderModel40/"
 * 0000000180050042: lea     rcx, [rbp+9E20h+var_2EE8]
 * 0000000180050049: call    sub_1800453AC
 * 000000018005004E: nop
 * 000000018005004F: lea     r8, aVertex_32; "/Vertex"
 * 0000000180050056: mov     rdx, rax
 * 0000000180050059: lea     rcx, [rbp+9E20h+var_2F08]
 * 0000000180050060: call    sub_18002BF78
 * 0000000180050065: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005006A: mov     rcx, rax
 * 000000018005006D: call    sub_1800D45A4
 * 0000000180050072: mov     cs:byte_1802695C4, al
 * 0000000180050078: lea     rcx, [rbp+9E20h+var_2EE8]; void *
 * 000000018005007F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050084: nop
 * 0000000180050085: lea     rcx, [rbp+9E20h+var_2EC8]; void *
 * 000000018005008C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050091: nop
 * 0000000180050092: lea     rcx, dword_1802695C8
 * 0000000180050099: call    _Init_thread_footer
 * 000000018005009E: mov     rax, [rdi+rbx*8]
 * 00000001800500A2: mov     ecx, [r15+rax]
 * 00000001800500A6: cmp     cs:dword_1802695D0, ecx
 * 00000001800500AC: jle     loc_180050188
 * 00000001800500B2: lea     rcx, dword_1802695D0
 * 00000001800500B9: call    _Init_thread_header
 * 00000001800500BE: cmp     cs:dword_1802695D0, r14d
 * 00000001800500C5: jnz     loc_180050188
 * 00000001800500CB: mov     qword ptr [rsp+9F20h+var_9ED0], r13
 * 00000001800500D0: lea     rax, aBlur8_0; "Blur8"
 * 00000001800500D7: mov     qword ptr [rsp+9F20h+var_9ED0+8], rax
 * 00000001800500DC: movups  xmm0, [rsp+9F20h+var_9ED0]
 * 00000001800500E1: movups  [rbp+9E20h+var_7418], xmm0
 * 00000001800500E8: mov     dword ptr [rbp+9E20h+var_7408], esi
 * 00000001800500EE: mov     dword ptr [rbp+9E20h+var_7408+4], esi
 * 00000001800500F4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800500F9: movups  xmm0, [rbp+9E20h+var_7408]
 * 0000000180050100: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050105: call    sub_1800455D0
 * 000000018005010A: mov     r8, rax
 * 000000018005010D: mov     r9d, r12d
 * 0000000180050110: mov     edx, 62h ; 'b'
 * 0000000180050115: lea     rcx, [rbp+9E20h+var_2E68]; Src
 * 000000018005011C: call    sub_1800D44B8
 * 0000000180050121: nop
 * 0000000180050122: mov     r8, rax
 * 0000000180050125: lea     rdx, aStandardshader_176; "StandardShader/ShaderModel40/"
 * 000000018005012C: lea     rcx, [rbp+9E20h+var_2E88]
 * 0000000180050133: call    sub_1800453AC
 * 0000000180050138: nop
 * 0000000180050139: lea     r8, aVertex_33; "/Vertex"
 * 0000000180050140: mov     rdx, rax
 * 0000000180050143: lea     rcx, [rbp+9E20h+var_2EA8]
 * 000000018005014A: call    sub_18002BF78
 * 000000018005014F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050154: mov     rcx, rax
 * 0000000180050157: call    sub_1800D45A4
 * 000000018005015C: mov     cs:byte_1802695CC, al
 * 0000000180050162: lea     rcx, [rbp+9E20h+var_2E88]; void *
 * 0000000180050169: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005016E: nop
 * 000000018005016F: lea     rcx, [rbp+9E20h+var_2E68]; void *
 * 0000000180050176: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005017B: nop
 * 000000018005017C: lea     rcx, dword_1802695D0
 * 0000000180050183: call    _Init_thread_footer
 * 0000000180050188: mov     rax, [rdi+rbx*8]
 * 000000018005018C: mov     ecx, [r15+rax]
 * 0000000180050190: cmp     cs:dword_1802695D8, ecx
 * 0000000180050196: jle     loc_180050278
 * 000000018005019C: lea     rcx, dword_1802695D8
 * 00000001800501A3: call    _Init_thread_header
 * 00000001800501A8: cmp     cs:dword_1802695D8, r14d
 * 00000001800501AF: jnz     loc_180050278
 * 00000001800501B5: mov     qword ptr [rbp+9E20h+var_93D0], r13
 * 00000001800501BC: lea     rax, aBlur8_0; "Blur8"
 * 00000001800501C3: mov     qword ptr [rbp+9E20h+var_93D0+8], rax
 * 00000001800501CA: movups  xmm0, [rbp+9E20h+var_93D0]
 * 00000001800501D1: movups  [rbp+9E20h+var_73F8], xmm0
 * 00000001800501D8: mov     dword ptr [rbp+9E20h+var_73E8], esi
 * 00000001800501DE: mov     dword ptr [rbp+9E20h+var_73E8+4], esi
 * 00000001800501E4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800501E9: movups  xmm0, [rbp+9E20h+var_73E8]
 * 00000001800501F0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800501F5: call    sub_1800455D0
 * 00000001800501FA: mov     r8, rax
 * 00000001800501FD: mov     r9d, r12d
 * 0000000180050200: mov     edx, 68h ; 'h'
 * 0000000180050205: lea     rcx, [rbp+9E20h+var_2E08]; Src
 * 000000018005020C: call    sub_1800D44B8
 * 0000000180050211: nop
 * 0000000180050212: mov     r8, rax
 * 0000000180050215: lea     rdx, aStandardshader_177; "StandardShader/ShaderModel40/"
 * 000000018005021C: lea     rcx, [rbp+9E20h+var_2E28]
 * 0000000180050223: call    sub_1800453AC
 * 0000000180050228: nop
 * 0000000180050229: lea     r8, aVertex_34; "/Vertex"
 * 0000000180050230: mov     rdx, rax
 * 0000000180050233: lea     rcx, [rbp+9E20h+var_2E48]
 * 000000018005023A: call    sub_18002BF78
 * 000000018005023F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050244: mov     rcx, rax
 * 0000000180050247: call    sub_1800D45A4
 * 000000018005024C: mov     cs:byte_1802695D4, al
 * 0000000180050252: lea     rcx, [rbp+9E20h+var_2E28]; void *
 * 0000000180050259: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005025E: nop
 * 000000018005025F: lea     rcx, [rbp+9E20h+var_2E08]; void *
 * 0000000180050266: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005026B: nop
 * 000000018005026C: lea     rcx, dword_1802695D8
 * 0000000180050273: call    _Init_thread_footer
 * 0000000180050278: mov     rax, [rdi+rbx*8]
 * 000000018005027C: mov     ecx, [r15+rax]
 * 0000000180050280: cmp     cs:dword_1802695E0, ecx
 * 0000000180050286: jle     loc_180050368
 * 000000018005028C: lea     rcx, dword_1802695E0
 * 0000000180050293: call    _Init_thread_header
 * 0000000180050298: cmp     cs:dword_1802695E0, r14d
 * 000000018005029F: jnz     loc_180050368
 * 00000001800502A5: mov     qword ptr [rbp+9E20h+var_93C0], r13
 * 00000001800502AC: lea     rax, aBlur8_0; "Blur8"
 * 00000001800502B3: mov     qword ptr [rbp+9E20h+var_93C0+8], rax
 * 00000001800502BA: movups  xmm0, [rbp+9E20h+var_93C0]
 * 00000001800502C1: movups  [rbp+9E20h+var_73D8], xmm0
 * 00000001800502C8: mov     dword ptr [rbp+9E20h+var_73C8], esi
 * 00000001800502CE: mov     dword ptr [rbp+9E20h+var_73C8+4], esi
 * 00000001800502D4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800502D9: movups  xmm0, [rbp+9E20h+var_73C8]
 * 00000001800502E0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800502E5: call    sub_1800455D0
 * 00000001800502EA: mov     r8, rax
 * 00000001800502ED: mov     r9d, r12d
 * 00000001800502F0: mov     edx, 6Ah ; 'j'
 * 00000001800502F5: lea     rcx, [rbp+9E20h+var_2DA8]; Src
 * 00000001800502FC: call    sub_1800D44B8
 * 0000000180050301: nop
 * 0000000180050302: mov     r8, rax
 * 0000000180050305: lea     rdx, aStandardshader_178; "StandardShader/ShaderModel40/"
 * 000000018005030C: lea     rcx, [rbp+9E20h+var_2DC8]
 * 0000000180050313: call    sub_1800453AC
 * 0000000180050318: nop
 * 0000000180050319: lea     r8, aVertex_35; "/Vertex"
 * 0000000180050320: mov     rdx, rax
 * 0000000180050323: lea     rcx, [rbp+9E20h+var_2DE8]
 * 000000018005032A: call    sub_18002BF78
 * 000000018005032F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050334: mov     rcx, rax
 * 0000000180050337: call    sub_1800D45A4
 * 000000018005033C: mov     cs:byte_1802695DC, al
 * 0000000180050342: lea     rcx, [rbp+9E20h+var_2DC8]; void *
 * 0000000180050349: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005034E: nop
 * 000000018005034F: lea     rcx, [rbp+9E20h+var_2DA8]; void *
 * 0000000180050356: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005035B: nop
 * 000000018005035C: lea     rcx, dword_1802695E0
 * 0000000180050363: call    _Init_thread_footer
 * 0000000180050368: mov     rax, [rdi+rbx*8]
 * 000000018005036C: mov     ecx, [r15+rax]
 * 0000000180050370: cmp     cs:dword_1802695E8, ecx
 * 0000000180050376: jle     loc_180050458
 * 000000018005037C: lea     rcx, dword_1802695E8
 * 0000000180050383: call    _Init_thread_header
 * 0000000180050388: cmp     cs:dword_1802695E8, r14d
 * 000000018005038F: jnz     loc_180050458
 * 0000000180050395: mov     qword ptr [rbp+9E20h+var_93B0], r13
 * 000000018005039C: lea     rax, aBlur8_0; "Blur8"
 * 00000001800503A3: mov     qword ptr [rbp+9E20h+var_93B0+8], rax
 * 00000001800503AA: movups  xmm0, [rbp+9E20h+var_93B0]
 * 00000001800503B1: movups  [rbp+9E20h+var_73B8], xmm0
 * 00000001800503B8: mov     dword ptr [rbp+9E20h+var_73A8], esi
 * 00000001800503BE: mov     dword ptr [rbp+9E20h+var_73A8+4], esi
 * 00000001800503C4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800503C9: movups  xmm0, [rbp+9E20h+var_73A8]
 * 00000001800503D0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800503D5: call    sub_1800455D0
 * 00000001800503DA: mov     r8, rax
 * 00000001800503DD: mov     r9d, r12d
 * 00000001800503E0: mov     edx, 70h ; 'p'
 * 00000001800503E5: lea     rcx, [rbp+9E20h+var_2D48]; Src
 * 00000001800503EC: call    sub_1800D44B8
 * 00000001800503F1: nop
 * 00000001800503F2: mov     r8, rax
 * 00000001800503F5: lea     rdx, aStandardshader_179; "StandardShader/ShaderModel40/"
 * 00000001800503FC: lea     rcx, [rbp+9E20h+var_2D68]
 * 0000000180050403: call    sub_1800453AC
 * 0000000180050408: nop
 * 0000000180050409: lea     r8, aVertex_36; "/Vertex"
 * 0000000180050410: mov     rdx, rax
 * 0000000180050413: lea     rcx, [rbp+9E20h+var_2D88]
 * 000000018005041A: call    sub_18002BF78
 * 000000018005041F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050424: mov     rcx, rax
 * 0000000180050427: call    sub_1800D45A4
 * 000000018005042C: mov     cs:byte_1802695E4, al
 * 0000000180050432: lea     rcx, [rbp+9E20h+var_2D68]; void *
 * 0000000180050439: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005043E: nop
 * 000000018005043F: lea     rcx, [rbp+9E20h+var_2D48]; void *
 * 0000000180050446: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005044B: nop
 * 000000018005044C: lea     rcx, dword_1802695E8
 * 0000000180050453: call    _Init_thread_footer
 * 0000000180050458: mov     rax, [rdi+rbx*8]
 * 000000018005045C: mov     ecx, [r15+rax]
 * 0000000180050460: cmp     cs:dword_1802695F0, ecx
 * 0000000180050466: jle     loc_180050548
 * 000000018005046C: lea     rcx, dword_1802695F0
 * 0000000180050473: call    _Init_thread_header
 * 0000000180050478: cmp     cs:dword_1802695F0, r14d
 * 000000018005047F: jnz     loc_180050548
 * 0000000180050485: mov     qword ptr [rbp+9E20h+var_93A0], r13
 * 000000018005048C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180050493: mov     qword ptr [rbp+9E20h+var_93A0+8], rax
 * 000000018005049A: movups  xmm0, [rbp+9E20h+var_93A0]
 * 00000001800504A1: movups  [rbp+9E20h+var_7398], xmm0
 * 00000001800504A8: mov     dword ptr [rbp+9E20h+var_7388], esi
 * 00000001800504AE: mov     dword ptr [rbp+9E20h+var_7388+4], esi
 * 00000001800504B4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800504B9: movups  xmm0, [rbp+9E20h+var_7388]
 * 00000001800504C0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800504C5: call    sub_1800455D0
 * 00000001800504CA: mov     r8, rax
 * 00000001800504CD: mov     r9d, r12d
 * 00000001800504D0: mov     edx, 72h ; 'r'
 * 00000001800504D5: lea     rcx, [rbp+9E20h+var_2CE8]; Src
 * 00000001800504DC: call    sub_1800D44B8
 * 00000001800504E1: nop
 * 00000001800504E2: mov     r8, rax
 * 00000001800504E5: lea     rdx, aStandardshader_180; "StandardShader/ShaderModel40/"
 * 00000001800504EC: lea     rcx, [rbp+9E20h+var_2D08]
 * 00000001800504F3: call    sub_1800453AC
 * 00000001800504F8: nop
 * 00000001800504F9: lea     r8, aVertex_37; "/Vertex"
 * 0000000180050500: mov     rdx, rax
 * 0000000180050503: lea     rcx, [rbp+9E20h+var_2D28]
 * 000000018005050A: call    sub_18002BF78
 * 000000018005050F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050514: mov     rcx, rax
 * 0000000180050517: call    sub_1800D45A4
 * 000000018005051C: mov     cs:byte_1802695EC, al
 * 0000000180050522: lea     rcx, [rbp+9E20h+var_2D08]; void *
 * 0000000180050529: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005052E: nop
 * 000000018005052F: lea     rcx, [rbp+9E20h+var_2CE8]; void *
 * 0000000180050536: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005053B: nop
 * 000000018005053C: lea     rcx, dword_1802695F0
 * 0000000180050543: call    _Init_thread_footer
 * 0000000180050548: mov     rax, [rdi+rbx*8]
 * 000000018005054C: mov     ecx, [r15+rax]
 * 0000000180050550: cmp     cs:dword_1802695F8, ecx
 * 0000000180050556: jle     loc_180050638
 * 000000018005055C: lea     rcx, dword_1802695F8
 * 0000000180050563: call    _Init_thread_header
 * 0000000180050568: cmp     cs:dword_1802695F8, r14d
 * 000000018005056F: jnz     loc_180050638
 * 0000000180050575: mov     qword ptr [rbp+9E20h+var_9390], r13
 * 000000018005057C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180050583: mov     qword ptr [rbp+9E20h+var_9390+8], rax
 * 000000018005058A: movups  xmm0, [rbp+9E20h+var_9390]
 * 0000000180050591: movups  [rbp+9E20h+var_9058], xmm0
 * 0000000180050598: mov     dword ptr [rbp+9E20h+var_9048], esi
 * 000000018005059E: mov     dword ptr [rbp+9E20h+var_9048+4], esi
 * 00000001800505A4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800505A9: movups  xmm0, [rbp+9E20h+var_9048]
 * 00000001800505B0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800505B5: call    sub_1800455D0
 * 00000001800505BA: mov     r8, rax
 * 00000001800505BD: mov     r9d, r12d
 * 00000001800505C0: mov     edx, 78h ; 'x'
 * 00000001800505C5: lea     rcx, [rbp+9E20h+var_2C88]; Src
 * 00000001800505CC: call    sub_1800D44B8
 * 00000001800505D1: nop
 * 00000001800505D2: mov     r8, rax
 * 00000001800505D5: lea     rdx, aStandardshader_181; "StandardShader/ShaderModel40/"
 * 00000001800505DC: lea     rcx, [rbp+9E20h+var_2CA8]
 * 00000001800505E3: call    sub_1800453AC
 * 00000001800505E8: nop
 * 00000001800505E9: lea     r8, aVertex_38; "/Vertex"
 * 00000001800505F0: mov     rdx, rax
 * 00000001800505F3: lea     rcx, [rbp+9E20h+var_2CC8]
 * 00000001800505FA: call    sub_18002BF78
 * 00000001800505FF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050604: mov     rcx, rax
 * 0000000180050607: call    sub_1800D45A4
 * 000000018005060C: mov     cs:byte_1802695F4, al
 * 0000000180050612: lea     rcx, [rbp+9E20h+var_2CA8]; void *
 * 0000000180050619: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005061E: nop
 * 000000018005061F: lea     rcx, [rbp+9E20h+var_2C88]; void *
 * 0000000180050626: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005062B: nop
 * 000000018005062C: lea     rcx, dword_1802695F8
 * 0000000180050633: call    _Init_thread_footer
 * 0000000180050638: mov     rax, [rdi+rbx*8]
 * 000000018005063C: mov     ecx, [r15+rax]
 * 0000000180050640: cmp     cs:dword_180269600, ecx
 * 0000000180050646: jle     loc_180050728
 * 000000018005064C: lea     rcx, dword_180269600
 * 0000000180050653: call    _Init_thread_header
 * 0000000180050658: cmp     cs:dword_180269600, r14d
 * 000000018005065F: jnz     loc_180050728
 * 0000000180050665: mov     qword ptr [rbp+9E20h+var_9380], r13
 * 000000018005066C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180050673: mov     qword ptr [rbp+9E20h+var_9380+8], rax
 * 000000018005067A: movups  xmm0, [rbp+9E20h+var_9380]
 * 0000000180050681: movups  [rbp+9E20h+var_9038], xmm0
 * 0000000180050688: mov     dword ptr [rbp+9E20h+var_9028], esi
 * 000000018005068E: mov     dword ptr [rbp+9E20h+var_9028+4], esi
 * 0000000180050694: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050699: movups  xmm0, [rbp+9E20h+var_9028]
 * 00000001800506A0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800506A5: call    sub_1800455D0
 * 00000001800506AA: mov     r8, rax
 * 00000001800506AD: mov     r9d, r12d
 * 00000001800506B0: mov     edx, 7Ah ; 'z'
 * 00000001800506B5: lea     rcx, [rbp+9E20h+var_2C28]; Src
 * 00000001800506BC: call    sub_1800D44B8
 * 00000001800506C1: nop
 * 00000001800506C2: mov     r8, rax
 * 00000001800506C5: lea     rdx, aStandardshader_182; "StandardShader/ShaderModel40/"
 * 00000001800506CC: lea     rcx, [rbp+9E20h+var_2C48]
 * 00000001800506D3: call    sub_1800453AC
 * 00000001800506D8: nop
 * 00000001800506D9: lea     r8, aVertex_39; "/Vertex"
 * 00000001800506E0: mov     rdx, rax
 * 00000001800506E3: lea     rcx, [rbp+9E20h+var_2C68]
 * 00000001800506EA: call    sub_18002BF78
 * 00000001800506EF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800506F4: mov     rcx, rax
 * 00000001800506F7: call    sub_1800D45A4
 * 00000001800506FC: mov     cs:byte_1802695FC, al
 * 0000000180050702: lea     rcx, [rbp+9E20h+var_2C48]; void *
 * 0000000180050709: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005070E: nop
 * 000000018005070F: lea     rcx, [rbp+9E20h+var_2C28]; void *
 * 0000000180050716: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005071B: nop
 * 000000018005071C: lea     rcx, dword_180269600
 * 0000000180050723: call    _Init_thread_footer
 * 0000000180050728: mov     rax, [rdi+rbx*8]
 * 000000018005072C: mov     ecx, [r15+rax]
 * 0000000180050730: cmp     cs:dword_180269608, ecx
 * 0000000180050736: jle     loc_18005081F
 * 000000018005073C: lea     rcx, dword_180269608
 * 0000000180050743: call    _Init_thread_header
 * 0000000180050748: cmp     cs:dword_180269608, r14d
 * 000000018005074F: jnz     loc_18005081F
 * 0000000180050755: lea     rax, unk_18019BC40
 * 000000018005075C: mov     qword ptr [rbp+9E20h+var_9370], rax
 * 0000000180050763: lea     rax, unk_18019CC90
 * 000000018005076A: mov     qword ptr [rbp+9E20h+var_9370+8], rax
 * 0000000180050771: movups  xmm0, [rbp+9E20h+var_9370]
 * 0000000180050778: movups  [rbp+9E20h+var_9018], xmm0
 * 000000018005077F: mov     dword ptr [rbp+9E20h+var_9008], esi
 * 0000000180050785: mov     dword ptr [rbp+9E20h+var_9008+4], esi
 * 000000018005078B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050790: movups  xmm0, [rbp+9E20h+var_9008]
 * 0000000180050797: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005079C: call    sub_1800455D0
 * 00000001800507A1: mov     r8, rax
 * 00000001800507A4: mov     r9d, r12d
 * 00000001800507A7: mov     edx, 80h
 * 00000001800507AC: lea     rcx, [rbp+9E20h+var_2BC8]; Src
 * 00000001800507B3: call    sub_1800D44B8
 * 00000001800507B8: nop
 * 00000001800507B9: mov     r8, rax
 * 00000001800507BC: lea     rdx, aStandardshader_183; "StandardShader/ShaderModel40/"
 * 00000001800507C3: lea     rcx, [rbp+9E20h+var_2BE8]
 * 00000001800507CA: call    sub_1800453AC
 * 00000001800507CF: nop
 * 00000001800507D0: lea     r8, aVertex_40; "/Vertex"
 * 00000001800507D7: mov     rdx, rax
 * 00000001800507DA: lea     rcx, [rbp+9E20h+var_2C08]
 * 00000001800507E1: call    sub_18002BF78
 * 00000001800507E6: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800507EB: mov     rcx, rax
 * 00000001800507EE: call    sub_1800D45A4
 * 00000001800507F3: mov     cs:byte_180269604, al
 * 00000001800507F9: lea     rcx, [rbp+9E20h+var_2BE8]; void *
 * 0000000180050800: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050805: nop
 * 0000000180050806: lea     rcx, [rbp+9E20h+var_2BC8]; void *
 * 000000018005080D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050812: nop
 * 0000000180050813: lea     rcx, dword_180269608
 * 000000018005081A: call    _Init_thread_footer
 * 000000018005081F: mov     rax, [rdi+rbx*8]
 * 0000000180050823: mov     ecx, [r15+rax]
 * 0000000180050827: cmp     cs:dword_180269610, ecx
 * 000000018005082D: jle     loc_180050916
 * 0000000180050833: lea     rcx, dword_180269610
 * 000000018005083A: call    _Init_thread_header
 * 000000018005083F: cmp     cs:dword_180269610, r14d
 * 0000000180050846: jnz     loc_180050916
 * 000000018005084C: lea     rax, unk_18019BC40
 * 0000000180050853: mov     qword ptr [rbp+9E20h+var_9360], rax
 * 000000018005085A: lea     rax, unk_18019CC90
 * 0000000180050861: mov     qword ptr [rbp+9E20h+var_9360+8], rax
 * 0000000180050868: movups  xmm0, [rbp+9E20h+var_9360]
 * 000000018005086F: movups  [rbp+9E20h+var_8FF8], xmm0
 * 0000000180050876: mov     dword ptr [rbp+9E20h+var_8FE8], esi
 * 000000018005087C: mov     dword ptr [rbp+9E20h+var_8FE8+4], esi
 * 0000000180050882: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050887: movups  xmm0, [rbp+9E20h+var_8FE8]
 * 000000018005088E: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050893: call    sub_1800455D0
 * 0000000180050898: mov     r8, rax
 * 000000018005089B: mov     r9d, r12d
 * 000000018005089E: mov     edx, 82h
 * 00000001800508A3: lea     rcx, [rbp+9E20h+var_2B68]; Src
 * 00000001800508AA: call    sub_1800D44B8
 * 00000001800508AF: nop
 * 00000001800508B0: mov     r8, rax
 * 00000001800508B3: lea     rdx, aStandardshader_184; "StandardShader/ShaderModel40/"
 * 00000001800508BA: lea     rcx, [rbp+9E20h+var_2B88]
 * 00000001800508C1: call    sub_1800453AC
 * 00000001800508C6: nop
 * 00000001800508C7: lea     r8, aVertex_41; "/Vertex"
 * 00000001800508CE: mov     rdx, rax
 * 00000001800508D1: lea     rcx, [rbp+9E20h+var_2BA8]
 * 00000001800508D8: call    sub_18002BF78
 * 00000001800508DD: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800508E2: mov     rcx, rax
 * 00000001800508E5: call    sub_1800D45A4
 * 00000001800508EA: mov     cs:byte_18026960C, al
 * 00000001800508F0: lea     rcx, [rbp+9E20h+var_2B88]; void *
 * 00000001800508F7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800508FC: nop
 * 00000001800508FD: lea     rcx, [rbp+9E20h+var_2B68]; void *
 * 0000000180050904: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050909: nop
 * 000000018005090A: lea     rcx, dword_180269610
 * 0000000180050911: call    _Init_thread_footer
 * 0000000180050916: mov     rax, [rdi+rbx*8]
 * 000000018005091A: mov     ecx, [r15+rax]
 * 000000018005091E: cmp     cs:dword_180269618, ecx
 * 0000000180050924: jle     loc_180050A0D
 * 000000018005092A: lea     rcx, dword_180269618
 * 0000000180050931: call    _Init_thread_header
 * 0000000180050936: cmp     cs:dword_180269618, r14d
 * 000000018005093D: jnz     loc_180050A0D
 * 0000000180050943: lea     rax, unk_18019BC40
 * 000000018005094A: mov     qword ptr [rbp+9E20h+var_9350], rax
 * 0000000180050951: lea     rax, unk_18019CC90
 * 0000000180050958: mov     qword ptr [rbp+9E20h+var_9350+8], rax
 * 000000018005095F: movups  xmm0, [rbp+9E20h+var_9350]
 * 0000000180050966: movups  [rbp+9E20h+var_8FD8], xmm0
 * 000000018005096D: mov     dword ptr [rbp+9E20h+var_8FC8], esi
 * 0000000180050973: mov     dword ptr [rbp+9E20h+var_8FC8+4], esi
 * 0000000180050979: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005097E: movups  xmm0, [rbp+9E20h+var_8FC8]
 * 0000000180050985: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005098A: call    sub_1800455D0
 * 000000018005098F: mov     r8, rax
 * 0000000180050992: mov     r9d, r12d
 * 0000000180050995: mov     edx, 88h
 * 000000018005099A: lea     rcx, [rbp+9E20h+var_2B08]; Src
 * 00000001800509A1: call    sub_1800D44B8
 * 00000001800509A6: nop
 * 00000001800509A7: mov     r8, rax
 * 00000001800509AA: lea     rdx, aStandardshader_185; "StandardShader/ShaderModel40/"
 * 00000001800509B1: lea     rcx, [rbp+9E20h+var_2B28]
 * 00000001800509B8: call    sub_1800453AC
 * 00000001800509BD: nop
 * 00000001800509BE: lea     r8, aVertex_42; "/Vertex"
 * 00000001800509C5: mov     rdx, rax
 * 00000001800509C8: lea     rcx, [rbp+9E20h+var_2B48]
 * 00000001800509CF: call    sub_18002BF78
 * 00000001800509D4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800509D9: mov     rcx, rax
 * 00000001800509DC: call    sub_1800D45A4
 * 00000001800509E1: mov     cs:byte_180269614, al
 * 00000001800509E7: lea     rcx, [rbp+9E20h+var_2B28]; void *
 * 00000001800509EE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800509F3: nop
 * 00000001800509F4: lea     rcx, [rbp+9E20h+var_2B08]; void *
 * 00000001800509FB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050A00: nop
 * 0000000180050A01: lea     rcx, dword_180269618
 * 0000000180050A08: call    _Init_thread_footer
 * 0000000180050A0D: mov     rax, [rdi+rbx*8]
 * 0000000180050A11: mov     ecx, [r15+rax]
 * 0000000180050A15: cmp     cs:dword_180269620, ecx
 * 0000000180050A1B: jle     loc_180050B04
 * 0000000180050A21: lea     rcx, dword_180269620
 * 0000000180050A28: call    _Init_thread_header
 * 0000000180050A2D: cmp     cs:dword_180269620, r14d
 * 0000000180050A34: jnz     loc_180050B04
 * 0000000180050A3A: lea     rax, unk_18019BC40
 * 0000000180050A41: mov     qword ptr [rbp+9E20h+var_9340], rax
 * 0000000180050A48: lea     rax, unk_18019CC90
 * 0000000180050A4F: mov     qword ptr [rbp+9E20h+var_9340+8], rax
 * 0000000180050A56: movups  xmm0, [rbp+9E20h+var_9340]
 * 0000000180050A5D: movups  [rbp+9E20h+var_8FB8], xmm0
 * 0000000180050A64: mov     dword ptr [rbp+9E20h+var_8FA8], esi
 * 0000000180050A6A: mov     dword ptr [rbp+9E20h+var_8FA8+4], esi
 * 0000000180050A70: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050A75: movups  xmm0, [rbp+9E20h+var_8FA8]
 * 0000000180050A7C: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050A81: call    sub_1800455D0
 * 0000000180050A86: mov     r8, rax
 * 0000000180050A89: mov     r9d, r12d
 * 0000000180050A8C: mov     edx, 8Ah
 * 0000000180050A91: lea     rcx, [rbp+9E20h+var_2AA8]; Src
 * 0000000180050A98: call    sub_1800D44B8
 * 0000000180050A9D: nop
 * 0000000180050A9E: mov     r8, rax
 * 0000000180050AA1: lea     rdx, aStandardshader_186; "StandardShader/ShaderModel40/"
 * 0000000180050AA8: lea     rcx, [rbp+9E20h+var_2AC8]
 * 0000000180050AAF: call    sub_1800453AC
 * 0000000180050AB4: nop
 * 0000000180050AB5: lea     r8, aVertex_43; "/Vertex"
 * 0000000180050ABC: mov     rdx, rax
 * 0000000180050ABF: lea     rcx, [rbp+9E20h+var_2AE8]
 * 0000000180050AC6: call    sub_18002BF78
 * 0000000180050ACB: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050AD0: mov     rcx, rax
 * 0000000180050AD3: call    sub_1800D45A4
 * 0000000180050AD8: mov     cs:byte_18026961C, al
 * 0000000180050ADE: lea     rcx, [rbp+9E20h+var_2AC8]; void *
 * 0000000180050AE5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050AEA: nop
 * 0000000180050AEB: lea     rcx, [rbp+9E20h+var_2AA8]; void *
 * 0000000180050AF2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050AF7: nop
 * 0000000180050AF8: lea     rcx, dword_180269620
 * 0000000180050AFF: call    _Init_thread_footer
 * 0000000180050B04: mov     rax, [rdi+rbx*8]
 * 0000000180050B08: mov     ecx, [r15+rax]
 * 0000000180050B0C: cmp     cs:dword_180269628, ecx
 * 0000000180050B12: jle     loc_180050BFB
 * 0000000180050B18: lea     rcx, dword_180269628
 * 0000000180050B1F: call    _Init_thread_header
 * 0000000180050B24: cmp     cs:dword_180269628, r14d
 * 0000000180050B2B: jnz     loc_180050BFB
 * 0000000180050B31: lea     rax, unk_18019BC40
 * 0000000180050B38: mov     qword ptr [rbp+9E20h+var_9330], rax
 * 0000000180050B3F: lea     rax, unk_18019CC90
 * 0000000180050B46: mov     qword ptr [rbp+9E20h+var_9330+8], rax
 * 0000000180050B4D: movups  xmm0, [rbp+9E20h+var_9330]
 * 0000000180050B54: movups  [rbp+9E20h+var_8F98], xmm0
 * 0000000180050B5B: mov     dword ptr [rbp+9E20h+var_8F88], esi
 * 0000000180050B61: mov     dword ptr [rbp+9E20h+var_8F88+4], esi
 * 0000000180050B67: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050B6C: movups  xmm0, [rbp+9E20h+var_8F88]
 * 0000000180050B73: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050B78: call    sub_1800455D0
 * 0000000180050B7D: mov     r8, rax
 * 0000000180050B80: mov     r9d, r12d
 * 0000000180050B83: mov     edx, 90h
 * 0000000180050B88: lea     rcx, [rbp+9E20h+var_2A48]; Src
 * 0000000180050B8F: call    sub_1800D44B8
 * 0000000180050B94: nop
 * 0000000180050B95: mov     r8, rax
 * 0000000180050B98: lea     rdx, aStandardshader_187; "StandardShader/ShaderModel40/"
 * 0000000180050B9F: lea     rcx, [rbp+9E20h+var_2A68]
 * 0000000180050BA6: call    sub_1800453AC
 * 0000000180050BAB: nop
 * 0000000180050BAC: lea     r8, aVertex_44; "/Vertex"
 * 0000000180050BB3: mov     rdx, rax
 * 0000000180050BB6: lea     rcx, [rbp+9E20h+var_2A88]
 * 0000000180050BBD: call    sub_18002BF78
 * 0000000180050BC2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050BC7: mov     rcx, rax
 * 0000000180050BCA: call    sub_1800D45A4
 * 0000000180050BCF: mov     cs:byte_180269624, al
 * 0000000180050BD5: lea     rcx, [rbp+9E20h+var_2A68]; void *
 * 0000000180050BDC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050BE1: nop
 * 0000000180050BE2: lea     rcx, [rbp+9E20h+var_2A48]; void *
 * 0000000180050BE9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050BEE: nop
 * 0000000180050BEF: lea     rcx, dword_180269628
 * 0000000180050BF6: call    _Init_thread_footer
 * 0000000180050BFB: mov     rax, [rdi+rbx*8]
 * 0000000180050BFF: mov     ecx, [r15+rax]
 * 0000000180050C03: cmp     cs:dword_180269630, ecx
 * 0000000180050C09: jle     loc_180050CF2
 * 0000000180050C0F: lea     rcx, dword_180269630
 * 0000000180050C16: call    _Init_thread_header
 * 0000000180050C1B: cmp     cs:dword_180269630, r14d
 * 0000000180050C22: jnz     loc_180050CF2
 * 0000000180050C28: lea     rax, unk_18019BC40
 * 0000000180050C2F: mov     qword ptr [rbp+9E20h+var_9320], rax
 * 0000000180050C36: lea     rax, unk_18019CC90
 * 0000000180050C3D: mov     qword ptr [rbp+9E20h+var_9320+8], rax
 * 0000000180050C44: movups  xmm0, [rbp+9E20h+var_9320]
 * 0000000180050C4B: movups  [rbp+9E20h+var_8F78], xmm0
 * 0000000180050C52: mov     dword ptr [rbp+9E20h+var_8F68], esi
 * 0000000180050C58: mov     dword ptr [rbp+9E20h+var_8F68+4], esi
 * 0000000180050C5E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050C63: movups  xmm0, [rbp+9E20h+var_8F68]
 * 0000000180050C6A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050C6F: call    sub_1800455D0
 * 0000000180050C74: mov     r8, rax
 * 0000000180050C77: mov     r9d, r12d
 * 0000000180050C7A: mov     edx, 92h
 * 0000000180050C7F: lea     rcx, [rbp+9E20h+var_29E8]; Src
 * 0000000180050C86: call    sub_1800D44B8
 * 0000000180050C8B: nop
 * 0000000180050C8C: mov     r8, rax
 * 0000000180050C8F: lea     rdx, aStandardshader_188; "StandardShader/ShaderModel40/"
 * 0000000180050C96: lea     rcx, [rbp+9E20h+var_2A08]
 * 0000000180050C9D: call    sub_1800453AC
 * 0000000180050CA2: nop
 * 0000000180050CA3: lea     r8, aVertex_45; "/Vertex"
 * 0000000180050CAA: mov     rdx, rax
 * 0000000180050CAD: lea     rcx, [rbp+9E20h+var_2A28]
 * 0000000180050CB4: call    sub_18002BF78
 * 0000000180050CB9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050CBE: mov     rcx, rax
 * 0000000180050CC1: call    sub_1800D45A4
 * 0000000180050CC6: mov     cs:byte_18026962C, al
 * 0000000180050CCC: lea     rcx, [rbp+9E20h+var_2A08]; void *
 * 0000000180050CD3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050CD8: nop
 * 0000000180050CD9: lea     rcx, [rbp+9E20h+var_29E8]; void *
 * 0000000180050CE0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050CE5: nop
 * 0000000180050CE6: lea     rcx, dword_180269630
 * 0000000180050CED: call    _Init_thread_footer
 * 0000000180050CF2: mov     rax, [rdi+rbx*8]
 * 0000000180050CF6: mov     ecx, [r15+rax]
 * 0000000180050CFA: cmp     cs:dword_180269638, ecx
 * 0000000180050D00: jle     loc_180050DE9
 * 0000000180050D06: lea     rcx, dword_180269638
 * 0000000180050D0D: call    _Init_thread_header
 * 0000000180050D12: cmp     cs:dword_180269638, r14d
 * 0000000180050D19: jnz     loc_180050DE9
 * 0000000180050D1F: lea     rax, unk_18019BC40
 * 0000000180050D26: mov     qword ptr [rbp+9E20h+var_9310], rax
 * 0000000180050D2D: lea     rax, unk_18019CC90
 * 0000000180050D34: mov     qword ptr [rbp+9E20h+var_9310+8], rax
 * 0000000180050D3B: movups  xmm0, [rbp+9E20h+var_9310]
 * 0000000180050D42: movups  [rbp+9E20h+var_8F58], xmm0
 * 0000000180050D49: mov     dword ptr [rbp+9E20h+var_8F48], esi
 * 0000000180050D4F: mov     dword ptr [rbp+9E20h+var_8F48+4], esi
 * 0000000180050D55: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050D5A: movups  xmm0, [rbp+9E20h+var_8F48]
 * 0000000180050D61: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050D66: call    sub_1800455D0
 * 0000000180050D6B: mov     r8, rax
 * 0000000180050D6E: mov     r9d, r12d
 * 0000000180050D71: mov     edx, 98h
 * 0000000180050D76: lea     rcx, [rbp+9E20h+var_2988]; Src
 * 0000000180050D7D: call    sub_1800D44B8
 * 0000000180050D82: nop
 * 0000000180050D83: mov     r8, rax
 * 0000000180050D86: lea     rdx, aStandardshader_189; "StandardShader/ShaderModel40/"
 * 0000000180050D8D: lea     rcx, [rbp+9E20h+var_29A8]
 * 0000000180050D94: call    sub_1800453AC
 * 0000000180050D99: nop
 * 0000000180050D9A: lea     r8, aVertex_46; "/Vertex"
 * 0000000180050DA1: mov     rdx, rax
 * 0000000180050DA4: lea     rcx, [rbp+9E20h+var_29C8]
 * 0000000180050DAB: call    sub_18002BF78
 * 0000000180050DB0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050DB5: mov     rcx, rax
 * 0000000180050DB8: call    sub_1800D45A4
 * 0000000180050DBD: mov     cs:byte_180269634, al
 * 0000000180050DC3: lea     rcx, [rbp+9E20h+var_29A8]; void *
 * 0000000180050DCA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050DCF: nop
 * 0000000180050DD0: lea     rcx, [rbp+9E20h+var_2988]; void *
 * 0000000180050DD7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050DDC: nop
 * 0000000180050DDD: lea     rcx, dword_180269638
 * 0000000180050DE4: call    _Init_thread_footer
 * 0000000180050DE9: mov     rax, [rdi+rbx*8]
 * 0000000180050DED: mov     ecx, [r15+rax]
 * 0000000180050DF1: cmp     cs:dword_180269640, ecx
 * 0000000180050DF7: jle     loc_180050EE0
 * 0000000180050DFD: lea     rcx, dword_180269640
 * 0000000180050E04: call    _Init_thread_header
 * 0000000180050E09: cmp     cs:dword_180269640, r14d
 * 0000000180050E10: jnz     loc_180050EE0
 * 0000000180050E16: lea     rax, unk_18019BC40
 * 0000000180050E1D: mov     qword ptr [rbp+9E20h+var_9300], rax
 * 0000000180050E24: lea     rax, unk_18019CC90
 * 0000000180050E2B: mov     qword ptr [rbp+9E20h+var_9300+8], rax
 * 0000000180050E32: movups  xmm0, [rbp+9E20h+var_9300]
 * 0000000180050E39: movups  [rbp+9E20h+var_8F38], xmm0
 * 0000000180050E40: mov     dword ptr [rbp+9E20h+var_8F28], esi
 * 0000000180050E46: mov     dword ptr [rbp+9E20h+var_8F28+4], esi
 * 0000000180050E4C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050E51: movups  xmm0, [rbp+9E20h+var_8F28]
 * 0000000180050E58: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050E5D: call    sub_1800455D0
 * 0000000180050E62: mov     r8, rax
 * 0000000180050E65: mov     r9d, r12d
 * 0000000180050E68: mov     edx, 9Ah
 * 0000000180050E6D: lea     rcx, [rbp+9E20h+var_2928]; Src
 * 0000000180050E74: call    sub_1800D44B8
 * 0000000180050E79: nop
 * 0000000180050E7A: mov     r8, rax
 * 0000000180050E7D: lea     rdx, aStandardshader_190; "StandardShader/ShaderModel40/"
 * 0000000180050E84: lea     rcx, [rbp+9E20h+var_2948]
 * 0000000180050E8B: call    sub_1800453AC
 * 0000000180050E90: nop
 * 0000000180050E91: lea     r8, aVertex_47; "/Vertex"
 * 0000000180050E98: mov     rdx, rax
 * 0000000180050E9B: lea     rcx, [rbp+9E20h+var_2968]
 * 0000000180050EA2: call    sub_18002BF78
 * 0000000180050EA7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050EAC: mov     rcx, rax
 * 0000000180050EAF: call    sub_1800D45A4
 * 0000000180050EB4: mov     cs:byte_18026963C, al
 * 0000000180050EBA: lea     rcx, [rbp+9E20h+var_2948]; void *
 * 0000000180050EC1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050EC6: nop
 * 0000000180050EC7: lea     rcx, [rbp+9E20h+var_2928]; void *
 * 0000000180050ECE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050ED3: nop
 * 0000000180050ED4: lea     rcx, dword_180269640
 * 0000000180050EDB: call    _Init_thread_footer
 * 0000000180050EE0: mov     rax, [rdi+rbx*8]
 * 0000000180050EE4: mov     ecx, [r15+rax]
 * 0000000180050EE8: cmp     cs:dword_180269648, ecx
 * 0000000180050EEE: jle     loc_180050FD0
 * 0000000180050EF4: lea     rcx, dword_180269648
 * 0000000180050EFB: call    _Init_thread_header
 * 0000000180050F00: cmp     cs:dword_180269648, r14d
 * 0000000180050F07: jnz     loc_180050FD0
 * 0000000180050F0D: mov     qword ptr [rbp+9E20h+var_92F0], r13
 * 0000000180050F14: lea     rax, aBlur8_0; "Blur8"
 * 0000000180050F1B: mov     qword ptr [rbp+9E20h+var_92F0+8], rax
 * 0000000180050F22: movups  xmm0, [rbp+9E20h+var_92F0]
 * 0000000180050F29: movups  [rbp+9E20h+var_8F18], xmm0
 * 0000000180050F30: mov     dword ptr [rbp+9E20h+var_8F08], esi
 * 0000000180050F36: mov     dword ptr [rbp+9E20h+var_8F08+4], esi
 * 0000000180050F3C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050F41: movups  xmm0, [rbp+9E20h+var_8F08]
 * 0000000180050F48: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050F4D: call    sub_1800455D0
 * 0000000180050F52: mov     r8, rax
 * 0000000180050F55: mov     r9d, r12d
 * 0000000180050F58: mov     edx, 0A0h
 * 0000000180050F5D: lea     rcx, [rbp+9E20h+var_28C8]; Src
 * 0000000180050F64: call    sub_1800D44B8
 * 0000000180050F69: nop
 * 0000000180050F6A: mov     r8, rax
 * 0000000180050F6D: lea     rdx, aStandardshader_191; "StandardShader/ShaderModel40/"
 * 0000000180050F74: lea     rcx, [rbp+9E20h+var_28E8]
 * 0000000180050F7B: call    sub_1800453AC
 * 0000000180050F80: nop
 * 0000000180050F81: lea     r8, aVertex_48; "/Vertex"
 * 0000000180050F88: mov     rdx, rax
 * 0000000180050F8B: lea     rcx, [rbp+9E20h+var_2908]
 * 0000000180050F92: call    sub_18002BF78
 * 0000000180050F97: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050F9C: mov     rcx, rax
 * 0000000180050F9F: call    sub_1800D45A4
 * 0000000180050FA4: mov     cs:byte_180269644, al
 * 0000000180050FAA: lea     rcx, [rbp+9E20h+var_28E8]; void *
 * 0000000180050FB1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050FB6: nop
 * 0000000180050FB7: lea     rcx, [rbp+9E20h+var_28C8]; void *
 * 0000000180050FBE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050FC3: nop
 * 0000000180050FC4: lea     rcx, dword_180269648
 * 0000000180050FCB: call    _Init_thread_footer
 * 0000000180050FD0: mov     rax, [rdi+rbx*8]
 * 0000000180050FD4: mov     ecx, [r15+rax]
 * 0000000180050FD8: cmp     cs:dword_180269650, ecx
 * 0000000180050FDE: jle     loc_1800510C0
 * 0000000180050FE4: lea     rcx, dword_180269650
 * 0000000180050FEB: call    _Init_thread_header
 * 0000000180050FF0: cmp     cs:dword_180269650, r14d
 * 0000000180050FF7: jnz     loc_1800510C0
 * 0000000180050FFD: mov     qword ptr [rbp+9E20h+var_92E0], r13
 * 0000000180051004: lea     rax, aBlur8_0; "Blur8"
 * 000000018005100B: mov     qword ptr [rbp+9E20h+var_92E0+8], rax
 * 0000000180051012: movups  xmm0, [rbp+9E20h+var_92E0]
 * 0000000180051019: movups  [rbp+9E20h+var_8EF8], xmm0
 * 0000000180051020: mov     dword ptr [rbp+9E20h+var_8EE8], esi
 * 0000000180051026: mov     dword ptr [rbp+9E20h+var_8EE8+4], esi
 * 000000018005102C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051031: movups  xmm0, [rbp+9E20h+var_8EE8]
 * 0000000180051038: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005103D: call    sub_1800455D0
 * 0000000180051042: mov     r8, rax
 * 0000000180051045: mov     r9d, r12d
 * 0000000180051048: mov     edx, 0A2h
 * 000000018005104D: lea     rcx, [rbp+9E20h+var_2868]; Src
 * 0000000180051054: call    sub_1800D44B8
 * 0000000180051059: nop
 * 000000018005105A: mov     r8, rax
 * 000000018005105D: lea     rdx, aStandardshader_192; "StandardShader/ShaderModel40/"
 * 0000000180051064: lea     rcx, [rbp+9E20h+var_2888]
 * 000000018005106B: call    sub_1800453AC
 * 0000000180051070: nop
 * 0000000180051071: lea     r8, aVertex_49; "/Vertex"
 * 0000000180051078: mov     rdx, rax
 * 000000018005107B: lea     rcx, [rbp+9E20h+var_28A8]
 * 0000000180051082: call    sub_18002BF78
 * 0000000180051087: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005108C: mov     rcx, rax
 * 000000018005108F: call    sub_1800D45A4
 * 0000000180051094: mov     cs:byte_18026964C, al
 * 000000018005109A: lea     rcx, [rbp+9E20h+var_2888]; void *
 * 00000001800510A1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800510A6: nop
 * 00000001800510A7: lea     rcx, [rbp+9E20h+var_2868]; void *
 * 00000001800510AE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800510B3: nop
 * 00000001800510B4: lea     rcx, dword_180269650
 * 00000001800510BB: call    _Init_thread_footer
 * 00000001800510C0: mov     rax, [rdi+rbx*8]
 * 00000001800510C4: mov     ecx, [r15+rax]
 * 00000001800510C8: cmp     cs:dword_180269658, ecx
 * 00000001800510CE: jle     loc_1800511B0
 * 00000001800510D4: lea     rcx, dword_180269658
 * 00000001800510DB: call    _Init_thread_header
 * 00000001800510E0: cmp     cs:dword_180269658, r14d
 * 00000001800510E7: jnz     loc_1800511B0
 * 00000001800510ED: mov     qword ptr [rbp+9E20h+var_92D0], r13
 * 00000001800510F4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800510FB: mov     qword ptr [rbp+9E20h+var_92D0+8], rax
 * 0000000180051102: movups  xmm0, [rbp+9E20h+var_92D0]
 * 0000000180051109: movups  [rbp+9E20h+var_8ED8], xmm0
 * 0000000180051110: mov     dword ptr [rbp+9E20h+var_8EC8], esi
 * 0000000180051116: mov     dword ptr [rbp+9E20h+var_8EC8+4], esi
 * 000000018005111C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051121: movups  xmm0, [rbp+9E20h+var_8EC8]
 * 0000000180051128: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005112D: call    sub_1800455D0
 * 0000000180051132: mov     r8, rax
 * 0000000180051135: mov     r9d, r12d
 * 0000000180051138: mov     edx, 0A8h
 * 000000018005113D: lea     rcx, [rbp+9E20h+var_2808]; Src
 * 0000000180051144: call    sub_1800D44B8
 * 0000000180051149: nop
 * 000000018005114A: mov     r8, rax
 * 000000018005114D: lea     rdx, aStandardshader_193; "StandardShader/ShaderModel40/"
 * 0000000180051154: lea     rcx, [rbp+9E20h+var_2828]
 * 000000018005115B: call    sub_1800453AC
 * 0000000180051160: nop
 * 0000000180051161: lea     r8, aVertex_50; "/Vertex"
 * 0000000180051168: mov     rdx, rax
 * 000000018005116B: lea     rcx, [rbp+9E20h+var_2848]
 * 0000000180051172: call    sub_18002BF78
 * 0000000180051177: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005117C: mov     rcx, rax
 * 000000018005117F: call    sub_1800D45A4
 * 0000000180051184: mov     cs:byte_180269654, al
 * 000000018005118A: lea     rcx, [rbp+9E20h+var_2828]; void *
 * 0000000180051191: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051196: nop
 * 0000000180051197: lea     rcx, [rbp+9E20h+var_2808]; void *
 * 000000018005119E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800511A3: nop
 * 00000001800511A4: lea     rcx, dword_180269658
 * 00000001800511AB: call    _Init_thread_footer
 * 00000001800511B0: mov     rax, [rdi+rbx*8]
 * 00000001800511B4: mov     ecx, [r15+rax]
 * 00000001800511B8: cmp     cs:dword_180269660, ecx
 * 00000001800511BE: jle     loc_1800512A0
 * 00000001800511C4: lea     rcx, dword_180269660
 * 00000001800511CB: call    _Init_thread_header
 * 00000001800511D0: cmp     cs:dword_180269660, r14d
 * 00000001800511D7: jnz     loc_1800512A0
 * 00000001800511DD: mov     qword ptr [rbp+9E20h+var_92C0], r13
 * 00000001800511E4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800511EB: mov     qword ptr [rbp+9E20h+var_92C0+8], rax
 * 00000001800511F2: movups  xmm0, [rbp+9E20h+var_92C0]
 * 00000001800511F9: movups  [rbp+9E20h+var_8EB8], xmm0
 * 0000000180051200: mov     dword ptr [rbp+9E20h+var_8EA8], esi
 * 0000000180051206: mov     dword ptr [rbp+9E20h+var_8EA8+4], esi
 * 000000018005120C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051211: movups  xmm0, [rbp+9E20h+var_8EA8]
 * 0000000180051218: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005121D: call    sub_1800455D0
 * 0000000180051222: mov     r8, rax
 * 0000000180051225: mov     r9d, r12d
 * 0000000180051228: mov     edx, 0AAh
 * 000000018005122D: lea     rcx, [rbp+9E20h+var_27A8]; Src
 * 0000000180051234: call    sub_1800D44B8
 * 0000000180051239: nop
 * 000000018005123A: mov     r8, rax
 * 000000018005123D: lea     rdx, aStandardshader_194; "StandardShader/ShaderModel40/"
 * 0000000180051244: lea     rcx, [rbp+9E20h+var_27C8]
 * 000000018005124B: call    sub_1800453AC
 * 0000000180051250: nop
 * 0000000180051251: lea     r8, aVertex_51; "/Vertex"
 * 0000000180051258: mov     rdx, rax
 * 000000018005125B: lea     rcx, [rbp+9E20h+var_27E8]
 * 0000000180051262: call    sub_18002BF78
 * 0000000180051267: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005126C: mov     rcx, rax
 * 000000018005126F: call    sub_1800D45A4
 * 0000000180051274: mov     cs:byte_18026965C, al
 * 000000018005127A: lea     rcx, [rbp+9E20h+var_27C8]; void *
 * 0000000180051281: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051286: nop
 * 0000000180051287: lea     rcx, [rbp+9E20h+var_27A8]; void *
 * 000000018005128E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051293: nop
 * 0000000180051294: lea     rcx, dword_180269660
 * 000000018005129B: call    _Init_thread_footer
 * 00000001800512A0: mov     rax, [rdi+rbx*8]
 * 00000001800512A4: mov     ecx, [r15+rax]
 * 00000001800512A8: cmp     cs:dword_180269668, ecx
 * 00000001800512AE: jle     loc_180051390
 * 00000001800512B4: lea     rcx, dword_180269668
 * 00000001800512BB: call    _Init_thread_header
 * 00000001800512C0: cmp     cs:dword_180269668, r14d
 * 00000001800512C7: jnz     loc_180051390
 * 00000001800512CD: mov     qword ptr [rbp+9E20h+var_92B0], r13
 * 00000001800512D4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800512DB: mov     qword ptr [rbp+9E20h+var_92B0+8], rax
 * 00000001800512E2: movups  xmm0, [rbp+9E20h+var_92B0]
 * 00000001800512E9: movups  [rbp+9E20h+var_8E98], xmm0
 * 00000001800512F0: mov     dword ptr [rbp+9E20h+var_8E88], esi
 * 00000001800512F6: mov     dword ptr [rbp+9E20h+var_8E88+4], esi
 * 00000001800512FC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051301: movups  xmm0, [rbp+9E20h+var_8E88]
 * 0000000180051308: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005130D: call    sub_1800455D0
 * 0000000180051312: mov     r8, rax
 * 0000000180051315: mov     r9d, r12d
 * 0000000180051318: mov     edx, 0B0h
 * 000000018005131D: lea     rcx, [rbp+9E20h+var_2748]; Src
 * 0000000180051324: call    sub_1800D44B8
 * 0000000180051329: nop
 * 000000018005132A: mov     r8, rax
 * 000000018005132D: lea     rdx, aStandardshader_195; "StandardShader/ShaderModel40/"
 * 0000000180051334: lea     rcx, [rbp+9E20h+var_2768]
 * 000000018005133B: call    sub_1800453AC
 * 0000000180051340: nop
 * 0000000180051341: lea     r8, aVertex_52; "/Vertex"
 * 0000000180051348: mov     rdx, rax
 * 000000018005134B: lea     rcx, [rbp+9E20h+var_2788]
 * 0000000180051352: call    sub_18002BF78
 * 0000000180051357: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005135C: mov     rcx, rax
 * 000000018005135F: call    sub_1800D45A4
 * 0000000180051364: mov     cs:byte_180269664, al
 * 000000018005136A: lea     rcx, [rbp+9E20h+var_2768]; void *
 * 0000000180051371: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051376: nop
 * 0000000180051377: lea     rcx, [rbp+9E20h+var_2748]; void *
 * 000000018005137E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051383: nop
 * 0000000180051384: lea     rcx, dword_180269668
 * 000000018005138B: call    _Init_thread_footer
 * 0000000180051390: mov     rax, [rdi+rbx*8]
 * 0000000180051394: mov     ecx, [r15+rax]
 * 0000000180051398: cmp     cs:dword_180269670, ecx
 * 000000018005139E: jle     loc_180051480
 * 00000001800513A4: lea     rcx, dword_180269670
 * 00000001800513AB: call    _Init_thread_header
 * 00000001800513B0: cmp     cs:dword_180269670, r14d
 * 00000001800513B7: jnz     loc_180051480
 * 00000001800513BD: mov     qword ptr [rbp+9E20h+var_92A0], r13
 * 00000001800513C4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800513CB: mov     qword ptr [rbp+9E20h+var_92A0+8], rax
 * 00000001800513D2: movups  xmm0, [rbp+9E20h+var_92A0]
 * 00000001800513D9: movups  [rbp+9E20h+var_8E78], xmm0
 * 00000001800513E0: mov     dword ptr [rbp+9E20h+var_8E68], esi
 * 00000001800513E6: mov     dword ptr [rbp+9E20h+var_8E68+4], esi
 * 00000001800513EC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800513F1: movups  xmm0, [rbp+9E20h+var_8E68]
 * 00000001800513F8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800513FD: call    sub_1800455D0
 * 0000000180051402: mov     r8, rax
 * 0000000180051405: mov     r9d, r12d
 * 0000000180051408: mov     edx, 0B2h
 * 000000018005140D: lea     rcx, [rbp+9E20h+var_26E8]; Src
 * 0000000180051414: call    sub_1800D44B8
 * 0000000180051419: nop
 * 000000018005141A: mov     r8, rax
 * 000000018005141D: lea     rdx, aStandardshader_196; "StandardShader/ShaderModel40/"
 * 0000000180051424: lea     rcx, [rbp+9E20h+var_2708]
 * 000000018005142B: call    sub_1800453AC
 * 0000000180051430: nop
 * 0000000180051431: lea     r8, aVertex_53; "/Vertex"
 * 0000000180051438: mov     rdx, rax
 * 000000018005143B: lea     rcx, [rbp+9E20h+var_2728]
 * 0000000180051442: call    sub_18002BF78
 * 0000000180051447: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005144C: mov     rcx, rax
 * 000000018005144F: call    sub_1800D45A4
 * 0000000180051454: mov     cs:byte_18026966C, al
 * 000000018005145A: lea     rcx, [rbp+9E20h+var_2708]; void *
 * 0000000180051461: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051466: nop
 * 0000000180051467: lea     rcx, [rbp+9E20h+var_26E8]; void *
 * 000000018005146E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051473: nop
 * 0000000180051474: lea     rcx, dword_180269670
 * 000000018005147B: call    _Init_thread_footer
 * 0000000180051480: mov     rax, [rdi+rbx*8]
 * 0000000180051484: mov     ecx, [r15+rax]
 * 0000000180051488: cmp     cs:dword_180269678, ecx
 * 000000018005148E: jle     loc_180051570
 * 0000000180051494: lea     rcx, dword_180269678
 * 000000018005149B: call    _Init_thread_header
 * 00000001800514A0: cmp     cs:dword_180269678, r14d
 * 00000001800514A7: jnz     loc_180051570
 * 00000001800514AD: mov     qword ptr [rbp+9E20h+var_9290], r13
 * 00000001800514B4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800514BB: mov     qword ptr [rbp+9E20h+var_9290+8], rax
 * 00000001800514C2: movups  xmm0, [rbp+9E20h+var_9290]
 * 00000001800514C9: movups  [rbp+9E20h+var_8E58], xmm0
 * 00000001800514D0: mov     dword ptr [rbp+9E20h+var_8E48], esi
 * 00000001800514D6: mov     dword ptr [rbp+9E20h+var_8E48+4], esi
 * 00000001800514DC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800514E1: movups  xmm0, [rbp+9E20h+var_8E48]
 * 00000001800514E8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800514ED: call    sub_1800455D0
 * 00000001800514F2: mov     r8, rax
 * 00000001800514F5: mov     r9d, r12d
 * 00000001800514F8: mov     edx, 0B8h
 * 00000001800514FD: lea     rcx, [rbp+9E20h+var_2688]; Src
 * 0000000180051504: call    sub_1800D44B8
 * 0000000180051509: nop
 * 000000018005150A: mov     r8, rax
 * 000000018005150D: lea     rdx, aStandardshader_197; "StandardShader/ShaderModel40/"
 * 0000000180051514: lea     rcx, [rbp+9E20h+var_26A8]
 * 000000018005151B: call    sub_1800453AC
 * 0000000180051520: nop
 * 0000000180051521: lea     r8, aVertex_54; "/Vertex"
 * 0000000180051528: mov     rdx, rax
 * 000000018005152B: lea     rcx, [rbp+9E20h+var_26C8]
 * 0000000180051532: call    sub_18002BF78
 * 0000000180051537: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005153C: mov     rcx, rax
 * 000000018005153F: call    sub_1800D45A4
 * 0000000180051544: mov     cs:byte_180269674, al
 * 000000018005154A: lea     rcx, [rbp+9E20h+var_26A8]; void *
 * 0000000180051551: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051556: nop
 * 0000000180051557: lea     rcx, [rbp+9E20h+var_2688]; void *
 * 000000018005155E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051563: nop
 * 0000000180051564: lea     rcx, dword_180269678
 * 000000018005156B: call    _Init_thread_footer
 * 0000000180051570: mov     rax, [rdi+rbx*8]
 * 0000000180051574: mov     ecx, [r15+rax]
 * 0000000180051578: cmp     cs:dword_180269680, ecx
 * 000000018005157E: jle     loc_180051660
 * 0000000180051584: lea     rcx, dword_180269680
 * 000000018005158B: call    _Init_thread_header
 * 0000000180051590: cmp     cs:dword_180269680, r14d
 * 0000000180051597: jnz     loc_180051660
 * 000000018005159D: mov     qword ptr [rbp+9E20h+var_9280], r13
 * 00000001800515A4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800515AB: mov     qword ptr [rbp+9E20h+var_9280+8], rax
 * 00000001800515B2: movups  xmm0, [rbp+9E20h+var_9280]
 * 00000001800515B9: movups  [rbp+9E20h+var_8E38], xmm0
 * 00000001800515C0: mov     dword ptr [rbp+9E20h+var_8E28], esi
 * 00000001800515C6: mov     dword ptr [rbp+9E20h+var_8E28+4], esi
 * 00000001800515CC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800515D1: movups  xmm0, [rbp+9E20h+var_8E28]
 * 00000001800515D8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800515DD: call    sub_1800455D0
 * 00000001800515E2: mov     r8, rax
 * 00000001800515E5: mov     r9d, r12d
 * 00000001800515E8: mov     edx, 0BAh
 * 00000001800515ED: lea     rcx, [rbp+9E20h+var_2628]; Src
 * 00000001800515F4: call    sub_1800D44B8
 * 00000001800515F9: nop
 * 00000001800515FA: mov     r8, rax
 * 00000001800515FD: lea     rdx, aStandardshader_198; "StandardShader/ShaderModel40/"
 * 0000000180051604: lea     rcx, [rbp+9E20h+var_2648]
 * 000000018005160B: call    sub_1800453AC
 * 0000000180051610: nop
 * 0000000180051611: lea     r8, aVertex_55; "/Vertex"
 * 0000000180051618: mov     rdx, rax
 * 000000018005161B: lea     rcx, [rbp+9E20h+var_2668]
 * 0000000180051622: call    sub_18002BF78
 * 0000000180051627: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005162C: mov     rcx, rax
 * 000000018005162F: call    sub_1800D45A4
 * 0000000180051634: mov     cs:byte_18026967C, al
 * 000000018005163A: lea     rcx, [rbp+9E20h+var_2648]; void *
 * 0000000180051641: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051646: nop
 * 0000000180051647: lea     rcx, [rbp+9E20h+var_2628]; void *
 * 000000018005164E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051653: nop
 * 0000000180051654: lea     rcx, dword_180269680
 * 000000018005165B: call    _Init_thread_footer
 * 0000000180051660: mov     rax, [rdi+rbx*8]
 * 0000000180051664: mov     ecx, [r15+rax]
 * 0000000180051668: cmp     cs:dword_180269688, ecx
 * 000000018005166E: jle     loc_180051757
 * 0000000180051674: lea     rcx, dword_180269688
 * 000000018005167B: call    _Init_thread_header
 * 0000000180051680: cmp     cs:dword_180269688, r14d
 * 0000000180051687: jnz     loc_180051757
 * 000000018005168D: lea     rax, unk_18019BC40
 * 0000000180051694: mov     qword ptr [rbp+9E20h+var_9270], rax
 * 000000018005169B: lea     rax, unk_18019CC90
 * 00000001800516A2: mov     qword ptr [rbp+9E20h+var_9270+8], rax
 * 00000001800516A9: movups  xmm0, [rbp+9E20h+var_9270]
 * 00000001800516B0: movups  [rbp+9E20h+var_8E18], xmm0
 * 00000001800516B7: mov     dword ptr [rbp+9E20h+var_8E08], esi
 * 00000001800516BD: mov     dword ptr [rbp+9E20h+var_8E08+4], esi
 * 00000001800516C3: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800516C8: movups  xmm0, [rbp+9E20h+var_8E08]
 * 00000001800516CF: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800516D4: call    sub_1800455D0
 * 00000001800516D9: mov     r8, rax
 * 00000001800516DC: mov     r9d, r12d
 * 00000001800516DF: mov     edx, 0C0h
 * 00000001800516E4: lea     rcx, [rbp+9E20h+var_25C8]; Src
 * 00000001800516EB: call    sub_1800D44B8
 * 00000001800516F0: nop
 * 00000001800516F1: mov     r8, rax
 * 00000001800516F4: lea     rdx, aStandardshader_199; "StandardShader/ShaderModel40/"
 * 00000001800516FB: lea     rcx, [rbp+9E20h+var_25E8]
 * 0000000180051702: call    sub_1800453AC
 * 0000000180051707: nop
 * 0000000180051708: lea     r8, aVertex_56; "/Vertex"
 * 000000018005170F: mov     rdx, rax
 * 0000000180051712: lea     rcx, [rbp+9E20h+var_2608]
 * 0000000180051719: call    sub_18002BF78
 * 000000018005171E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051723: mov     rcx, rax
 * 0000000180051726: call    sub_1800D45A4
 * 000000018005172B: mov     cs:byte_180269684, al
 * 0000000180051731: lea     rcx, [rbp+9E20h+var_25E8]; void *
 * 0000000180051738: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005173D: nop
 * 000000018005173E: lea     rcx, [rbp+9E20h+var_25C8]; void *
 * 0000000180051745: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005174A: nop
 * 000000018005174B: lea     rcx, dword_180269688
 * 0000000180051752: call    _Init_thread_footer
 * 0000000180051757: mov     rax, [rdi+rbx*8]
 * 000000018005175B: mov     ecx, [r15+rax]
 * 000000018005175F: cmp     cs:dword_180269690, ecx
 * 0000000180051765: jle     loc_18005184E
 * 000000018005176B: lea     rcx, dword_180269690
 * 0000000180051772: call    _Init_thread_header
 * 0000000180051777: cmp     cs:dword_180269690, r14d
 * 000000018005177E: jnz     loc_18005184E
 * 0000000180051784: lea     rax, unk_18019BC40
 * 000000018005178B: mov     qword ptr [rbp+9E20h+var_9260], rax
 * 0000000180051792: lea     rax, unk_18019CC90
 * 0000000180051799: mov     qword ptr [rbp+9E20h+var_9260+8], rax
 * 00000001800517A0: movups  xmm0, [rbp+9E20h+var_9260]
 * 00000001800517A7: movups  [rbp+9E20h+var_8DF8], xmm0
 * 00000001800517AE: mov     dword ptr [rbp+9E20h+var_8DE8], esi
 * 00000001800517B4: mov     dword ptr [rbp+9E20h+var_8DE8+4], esi
 * 00000001800517BA: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800517BF: movups  xmm0, [rbp+9E20h+var_8DE8]
 * 00000001800517C6: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800517CB: call    sub_1800455D0
 * 00000001800517D0: mov     r8, rax
 * 00000001800517D3: mov     r9d, r12d
 * 00000001800517D6: mov     edx, 0C2h
 * 00000001800517DB: lea     rcx, [rbp+9E20h+var_2568]; Src
 * 00000001800517E2: call    sub_1800D44B8
 * 00000001800517E7: nop
 * 00000001800517E8: mov     r8, rax
 * 00000001800517EB: lea     rdx, aStandardshader_200; "StandardShader/ShaderModel40/"
 * 00000001800517F2: lea     rcx, [rbp+9E20h+var_2588]
 * 00000001800517F9: call    sub_1800453AC
 * 00000001800517FE: nop
 * 00000001800517FF: lea     r8, aVertex_57; "/Vertex"
 * 0000000180051806: mov     rdx, rax
 * 0000000180051809: lea     rcx, [rbp+9E20h+var_25A8]
 * 0000000180051810: call    sub_18002BF78
 * 0000000180051815: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005181A: mov     rcx, rax
 * 000000018005181D: call    sub_1800D45A4
 * 0000000180051822: mov     cs:byte_18026968C, al
 * 0000000180051828: lea     rcx, [rbp+9E20h+var_2588]; void *
 * 000000018005182F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051834: nop
 * 0000000180051835: lea     rcx, [rbp+9E20h+var_2568]; void *
 * 000000018005183C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051841: nop
 * 0000000180051842: lea     rcx, dword_180269690
 * 0000000180051849: call    _Init_thread_footer
 * 000000018005184E: mov     rax, [rdi+rbx*8]
 * 0000000180051852: mov     ecx, [r15+rax]
 * 0000000180051856: cmp     cs:dword_180269698, ecx
 * 000000018005185C: jle     loc_180051945
 * 0000000180051862: lea     rcx, dword_180269698
 * 0000000180051869: call    _Init_thread_header
 * 000000018005186E: cmp     cs:dword_180269698, r14d
 * 0000000180051875: jnz     loc_180051945
 * 000000018005187B: lea     rax, unk_18019BC40
 * 0000000180051882: mov     qword ptr [rbp+9E20h+var_9250], rax
 * 0000000180051889: lea     rax, unk_18019CC90
 * 0000000180051890: mov     qword ptr [rbp+9E20h+var_9250+8], rax
 * 0000000180051897: movups  xmm0, [rbp+9E20h+var_9250]
 * 000000018005189E: movups  [rbp+9E20h+var_8DD8], xmm0
 * 00000001800518A5: mov     dword ptr [rbp+9E20h+var_8DC8], esi
 * 00000001800518AB: mov     dword ptr [rbp+9E20h+var_8DC8+4], esi
 * 00000001800518B1: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800518B6: movups  xmm0, [rbp+9E20h+var_8DC8]
 * 00000001800518BD: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800518C2: call    sub_1800455D0
 * 00000001800518C7: mov     r8, rax
 * 00000001800518CA: mov     r9d, r12d
 * 00000001800518CD: mov     edx, 0C8h
 * 00000001800518D2: lea     rcx, [rbp+9E20h+var_2508]; Src
 * 00000001800518D9: call    sub_1800D44B8
 * 00000001800518DE: nop
 * 00000001800518DF: mov     r8, rax
 * 00000001800518E2: lea     rdx, aStandardshader_201; "StandardShader/ShaderModel40/"
 * 00000001800518E9: lea     rcx, [rbp+9E20h+var_2528]
 * 00000001800518F0: call    sub_1800453AC
 * 00000001800518F5: nop
 * 00000001800518F6: lea     r8, aVertex_58; "/Vertex"
 * 00000001800518FD: mov     rdx, rax
 * 0000000180051900: lea     rcx, [rbp+9E20h+var_2548]
 * 0000000180051907: call    sub_18002BF78
 * 000000018005190C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051911: mov     rcx, rax
 * 0000000180051914: call    sub_1800D45A4
 * 0000000180051919: mov     cs:byte_180269694, al
 * 000000018005191F: lea     rcx, [rbp+9E20h+var_2528]; void *
 * 0000000180051926: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005192B: nop
 * 000000018005192C: lea     rcx, [rbp+9E20h+var_2508]; void *
 * 0000000180051933: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051938: nop
 * 0000000180051939: lea     rcx, dword_180269698
 * 0000000180051940: call    _Init_thread_footer
 * 0000000180051945: mov     rax, [rdi+rbx*8]
 * 0000000180051949: mov     ecx, [r15+rax]
 * 000000018005194D: cmp     cs:dword_1802696A0, ecx
 * 0000000180051953: jle     loc_180051A3C
 * 0000000180051959: lea     rcx, dword_1802696A0
 * 0000000180051960: call    _Init_thread_header
 * 0000000180051965: cmp     cs:dword_1802696A0, r14d
 * 000000018005196C: jnz     loc_180051A3C
 * 0000000180051972: lea     rax, unk_18019BC40
 * 0000000180051979: mov     qword ptr [rbp+9E20h+var_9240], rax
 * 0000000180051980: lea     rax, unk_18019CC90
 * 0000000180051987: mov     qword ptr [rbp+9E20h+var_9240+8], rax
 * 000000018005198E: movups  xmm0, [rbp+9E20h+var_9240]
 * 0000000180051995: movups  [rbp+9E20h+var_8DB8], xmm0
 * 000000018005199C: mov     dword ptr [rbp+9E20h+var_8DA8], esi
 * 00000001800519A2: mov     dword ptr [rbp+9E20h+var_8DA8+4], esi
 * 00000001800519A8: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800519AD: movups  xmm0, [rbp+9E20h+var_8DA8]
 * 00000001800519B4: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800519B9: call    sub_1800455D0
 * 00000001800519BE: mov     r8, rax
 * 00000001800519C1: mov     r9d, r12d
 * 00000001800519C4: mov     edx, 0CAh
 * 00000001800519C9: lea     rcx, [rbp+9E20h+var_24A8]; Src
 * 00000001800519D0: call    sub_1800D44B8
 * 00000001800519D5: nop
 * 00000001800519D6: mov     r8, rax
 * 00000001800519D9: lea     rdx, aStandardshader_202; "StandardShader/ShaderModel40/"
 * 00000001800519E0: lea     rcx, [rbp+9E20h+var_24C8]
 * 00000001800519E7: call    sub_1800453AC
 * 00000001800519EC: nop
 * 00000001800519ED: lea     r8, aVertex_59; "/Vertex"
 * 00000001800519F4: mov     rdx, rax
 * 00000001800519F7: lea     rcx, [rbp+9E20h+var_24E8]
 * 00000001800519FE: call    sub_18002BF78
 * 0000000180051A03: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051A08: mov     rcx, rax
 * 0000000180051A0B: call    sub_1800D45A4
 * 0000000180051A10: mov     cs:byte_18026969C, al
 * 0000000180051A16: lea     rcx, [rbp+9E20h+var_24C8]; void *
 * 0000000180051A1D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051A22: nop
 * 0000000180051A23: lea     rcx, [rbp+9E20h+var_24A8]; void *
 * 0000000180051A2A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051A2F: nop
 * 0000000180051A30: lea     rcx, dword_1802696A0
 * 0000000180051A37: call    _Init_thread_footer
 * 0000000180051A3C: mov     rax, [rdi+rbx*8]
 * 0000000180051A40: mov     ecx, [r15+rax]
 * 0000000180051A44: cmp     cs:dword_1802696A8, ecx
 * 0000000180051A4A: jle     loc_180051B33
 * 0000000180051A50: lea     rcx, dword_1802696A8
 * 0000000180051A57: call    _Init_thread_header
 * 0000000180051A5C: cmp     cs:dword_1802696A8, r14d
 * 0000000180051A63: jnz     loc_180051B33
 * 0000000180051A69: lea     rax, unk_18019BC40
 * 0000000180051A70: mov     qword ptr [rbp+9E20h+var_9230], rax
 * 0000000180051A77: lea     rax, unk_18019CC90
 * 0000000180051A7E: mov     qword ptr [rbp+9E20h+var_9230+8], rax
 * 0000000180051A85: movups  xmm0, [rbp+9E20h+var_9230]
 * 0000000180051A8C: movups  [rbp+9E20h+var_8D98], xmm0
 * 0000000180051A93: mov     dword ptr [rbp+9E20h+var_8D88], esi
 * 0000000180051A99: mov     dword ptr [rbp+9E20h+var_8D88+4], esi
 * 0000000180051A9F: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051AA4: movups  xmm0, [rbp+9E20h+var_8D88]
 * 0000000180051AAB: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051AB0: call    sub_1800455D0
 * 0000000180051AB5: mov     r8, rax
 * 0000000180051AB8: mov     r9d, r12d
 * 0000000180051ABB: mov     edx, 0D0h
 * 0000000180051AC0: lea     rcx, [rbp+9E20h+var_2448]; Src
 * 0000000180051AC7: call    sub_1800D44B8
 * 0000000180051ACC: nop
 * 0000000180051ACD: mov     r8, rax
 * 0000000180051AD0: lea     rdx, aStandardshader_203; "StandardShader/ShaderModel40/"
 * 0000000180051AD7: lea     rcx, [rbp+9E20h+var_2468]
 * 0000000180051ADE: call    sub_1800453AC
 * 0000000180051AE3: nop
 * 0000000180051AE4: lea     r8, aVertex_60; "/Vertex"
 * 0000000180051AEB: mov     rdx, rax
 * 0000000180051AEE: lea     rcx, [rbp+9E20h+var_2488]
 * 0000000180051AF5: call    sub_18002BF78
 * 0000000180051AFA: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051AFF: mov     rcx, rax
 * 0000000180051B02: call    sub_1800D45A4
 * 0000000180051B07: mov     cs:byte_1802696A4, al
 * 0000000180051B0D: lea     rcx, [rbp+9E20h+var_2468]; void *
 * 0000000180051B14: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051B19: nop
 * 0000000180051B1A: lea     rcx, [rbp+9E20h+var_2448]; void *
 * 0000000180051B21: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051B26: nop
 * 0000000180051B27: lea     rcx, dword_1802696A8
 * 0000000180051B2E: call    _Init_thread_footer
 * 0000000180051B33: mov     rax, [rdi+rbx*8]
 * 0000000180051B37: mov     ecx, [r15+rax]
 * 0000000180051B3B: cmp     cs:dword_1802696B0, ecx
 * 0000000180051B41: jle     loc_180051C2A
 * 0000000180051B47: lea     rcx, dword_1802696B0
 * 0000000180051B4E: call    _Init_thread_header
 * 0000000180051B53: cmp     cs:dword_1802696B0, r14d
 * 0000000180051B5A: jnz     loc_180051C2A
 * 0000000180051B60: lea     rax, unk_18019BC40
 * 0000000180051B67: mov     qword ptr [rbp+9E20h+var_9220], rax
 * 0000000180051B6E: lea     rax, unk_18019CC90
 * 0000000180051B75: mov     qword ptr [rbp+9E20h+var_9220+8], rax
 * 0000000180051B7C: movups  xmm0, [rbp+9E20h+var_9220]
 * 0000000180051B83: movups  [rbp+9E20h+var_8D78], xmm0
 * 0000000180051B8A: mov     dword ptr [rbp+9E20h+var_8D68], esi
 * 0000000180051B90: mov     dword ptr [rbp+9E20h+var_8D68+4], esi
 * 0000000180051B96: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051B9B: movups  xmm0, [rbp+9E20h+var_8D68]
 * 0000000180051BA2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051BA7: call    sub_1800455D0
 * 0000000180051BAC: mov     r8, rax
 * 0000000180051BAF: mov     r9d, r12d
 * 0000000180051BB2: mov     edx, 0D2h
 * 0000000180051BB7: lea     rcx, [rbp+9E20h+var_23E8]; Src
 * 0000000180051BBE: call    sub_1800D44B8
 * 0000000180051BC3: nop
 * 0000000180051BC4: mov     r8, rax
 * 0000000180051BC7: lea     rdx, aStandardshader_204; "StandardShader/ShaderModel40/"
 * 0000000180051BCE: lea     rcx, [rbp+9E20h+var_2408]
 * 0000000180051BD5: call    sub_1800453AC
 * 0000000180051BDA: nop
 * 0000000180051BDB: lea     r8, aVertex_61; "/Vertex"
 * 0000000180051BE2: mov     rdx, rax
 * 0000000180051BE5: lea     rcx, [rbp+9E20h+var_2428]
 * 0000000180051BEC: call    sub_18002BF78
 * 0000000180051BF1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051BF6: mov     rcx, rax
 * 0000000180051BF9: call    sub_1800D45A4
 * 0000000180051BFE: mov     cs:byte_1802696AC, al
 * 0000000180051C04: lea     rcx, [rbp+9E20h+var_2408]; void *
 * 0000000180051C0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051C10: nop
 * 0000000180051C11: lea     rcx, [rbp+9E20h+var_23E8]; void *
 * 0000000180051C18: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051C1D: nop
 * 0000000180051C1E: lea     rcx, dword_1802696B0
 * 0000000180051C25: call    _Init_thread_footer
 * 0000000180051C2A: mov     rax, [rdi+rbx*8]
 * 0000000180051C2E: mov     ecx, [r15+rax]
 * 0000000180051C32: cmp     cs:dword_1802696B8, ecx
 * 0000000180051C38: jle     loc_180051D21
 * 0000000180051C3E: lea     rcx, dword_1802696B8
 * 0000000180051C45: call    _Init_thread_header
 * 0000000180051C4A: cmp     cs:dword_1802696B8, r14d
 * 0000000180051C51: jnz     loc_180051D21
 * 0000000180051C57: lea     rax, unk_18019BC40
 * 0000000180051C5E: mov     qword ptr [rbp+9E20h+var_9210], rax
 * 0000000180051C65: lea     rax, unk_18019CC90
 * 0000000180051C6C: mov     qword ptr [rbp+9E20h+var_9210+8], rax
 * 0000000180051C73: movups  xmm0, [rbp+9E20h+var_9210]
 * 0000000180051C7A: movups  [rbp+9E20h+var_8D58], xmm0
 * 0000000180051C81: mov     dword ptr [rbp+9E20h+var_8D48], esi
 * 0000000180051C87: mov     dword ptr [rbp+9E20h+var_8D48+4], esi
 * 0000000180051C8D: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051C92: movups  xmm0, [rbp+9E20h+var_8D48]
 * 0000000180051C99: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051C9E: call    sub_1800455D0
 * 0000000180051CA3: mov     r8, rax
 * 0000000180051CA6: mov     r9d, r12d
 * 0000000180051CA9: mov     edx, 0D8h
 * 0000000180051CAE: lea     rcx, [rbp+9E20h+var_2388]; Src
 * 0000000180051CB5: call    sub_1800D44B8
 * 0000000180051CBA: nop
 * 0000000180051CBB: mov     r8, rax
 * 0000000180051CBE: lea     rdx, aStandardshader_205; "StandardShader/ShaderModel40/"
 * 0000000180051CC5: lea     rcx, [rbp+9E20h+var_23A8]
 * 0000000180051CCC: call    sub_1800453AC
 * 0000000180051CD1: nop
 * 0000000180051CD2: lea     r8, aVertex_62; "/Vertex"
 * 0000000180051CD9: mov     rdx, rax
 * 0000000180051CDC: lea     rcx, [rbp+9E20h+var_23C8]
 * 0000000180051CE3: call    sub_18002BF78
 * 0000000180051CE8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051CED: mov     rcx, rax
 * 0000000180051CF0: call    sub_1800D45A4
 * 0000000180051CF5: mov     cs:byte_1802696B4, al
 * 0000000180051CFB: lea     rcx, [rbp+9E20h+var_23A8]; void *
 * 0000000180051D02: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051D07: nop
 * 0000000180051D08: lea     rcx, [rbp+9E20h+var_2388]; void *
 * 0000000180051D0F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051D14: nop
 * 0000000180051D15: lea     rcx, dword_1802696B8
 * 0000000180051D1C: call    _Init_thread_footer
 * 0000000180051D21: mov     rax, [rdi+rbx*8]
 * 0000000180051D25: mov     ecx, [r15+rax]
 * 0000000180051D29: cmp     cs:dword_1802696C0, ecx
 * 0000000180051D2F: jle     loc_180051E18
 * 0000000180051D35: lea     rcx, dword_1802696C0
 * 0000000180051D3C: call    _Init_thread_header
 * 0000000180051D41: cmp     cs:dword_1802696C0, r14d
 * 0000000180051D48: jnz     loc_180051E18
 * 0000000180051D4E: lea     rax, unk_18019BC40
 * 0000000180051D55: mov     qword ptr [rbp+9E20h+var_9200], rax
 * 0000000180051D5C: lea     rax, unk_18019CC90
 * 0000000180051D63: mov     qword ptr [rbp+9E20h+var_9200+8], rax
 * 0000000180051D6A: movups  xmm0, [rbp+9E20h+var_9200]
 * 0000000180051D71: movups  [rbp+9E20h+var_8D38], xmm0
 * 0000000180051D78: mov     dword ptr [rbp+9E20h+var_8D28], esi
 * 0000000180051D7E: mov     dword ptr [rbp+9E20h+var_8D28+4], esi
 * 0000000180051D84: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051D89: movups  xmm0, [rbp+9E20h+var_8D28]
 * 0000000180051D90: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051D95: call    sub_1800455D0
 * 0000000180051D9A: mov     r8, rax
 * 0000000180051D9D: mov     r9d, r12d
 * 0000000180051DA0: mov     edx, 0DAh
 * 0000000180051DA5: lea     rcx, [rbp+9E20h+var_2328]; Src
 * 0000000180051DAC: call    sub_1800D44B8
 * 0000000180051DB1: nop
 * 0000000180051DB2: mov     r8, rax
 * 0000000180051DB5: lea     rdx, aStandardshader_206; "StandardShader/ShaderModel40/"
 * 0000000180051DBC: lea     rcx, [rbp+9E20h+var_2348]
 * 0000000180051DC3: call    sub_1800453AC
 * 0000000180051DC8: nop
 * 0000000180051DC9: lea     r8, aVertex_63; "/Vertex"
 * 0000000180051DD0: mov     rdx, rax
 * 0000000180051DD3: lea     rcx, [rbp+9E20h+var_2368]
 * 0000000180051DDA: call    sub_18002BF78
 * 0000000180051DDF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051DE4: mov     rcx, rax
 * 0000000180051DE7: call    sub_1800D45A4
 * 0000000180051DEC: mov     cs:byte_1802696BC, al
 * 0000000180051DF2: lea     rcx, [rbp+9E20h+var_2348]; void *
 * 0000000180051DF9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051DFE: nop
 * 0000000180051DFF: lea     rcx, [rbp+9E20h+var_2328]; void *
 * 0000000180051E06: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051E0B: nop
 * 0000000180051E0C: lea     rcx, dword_1802696C0
 * 0000000180051E13: call    _Init_thread_footer
 * 0000000180051E18: mov     rax, [rdi+rbx*8]
 * 0000000180051E1C: mov     ecx, [r15+rax]
 * 0000000180051E20: cmp     cs:dword_1802696C8, ecx
 * 0000000180051E26: jle     loc_180051F08
 * 0000000180051E2C: lea     rcx, dword_1802696C8
 * 0000000180051E33: call    _Init_thread_header
 * 0000000180051E38: cmp     cs:dword_1802696C8, r14d
 * 0000000180051E3F: jnz     loc_180051F08
 * 0000000180051E45: mov     qword ptr [rbp+9E20h+var_91F0], r13
 * 0000000180051E4C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180051E53: mov     qword ptr [rbp+9E20h+var_91F0+8], rax
 * 0000000180051E5A: movups  xmm0, [rbp+9E20h+var_91F0]
 * 0000000180051E61: movups  [rbp+9E20h+var_8D18], xmm0
 * 0000000180051E68: mov     dword ptr [rbp+9E20h+var_8D08], esi
 * 0000000180051E6E: mov     dword ptr [rbp+9E20h+var_8D08+4], esi
 * 0000000180051E74: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051E79: movups  xmm0, [rbp+9E20h+var_8D08]
 * 0000000180051E80: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051E85: call    sub_1800455D0
 * 0000000180051E8A: mov     r8, rax
 * 0000000180051E8D: mov     r9d, r12d
 * 0000000180051E90: mov     edx, 0E0h
 * 0000000180051E95: lea     rcx, [rbp+9E20h+var_22C8]; Src
 * 0000000180051E9C: call    sub_1800D44B8
 * 0000000180051EA1: nop
 * 0000000180051EA2: mov     r8, rax
 * 0000000180051EA5: lea     rdx, aStandardshader_207; "StandardShader/ShaderModel40/"
 * 0000000180051EAC: lea     rcx, [rbp+9E20h+var_22E8]
 * 0000000180051EB3: call    sub_1800453AC
 * 0000000180051EB8: nop
 * 0000000180051EB9: lea     r8, aVertex_64; "/Vertex"
 * 0000000180051EC0: mov     rdx, rax
 * 0000000180051EC3: lea     rcx, [rbp+9E20h+var_2308]
 * 0000000180051ECA: call    sub_18002BF78
 * 0000000180051ECF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051ED4: mov     rcx, rax
 * 0000000180051ED7: call    sub_1800D45A4
 * 0000000180051EDC: mov     cs:byte_1802696C4, al
 * 0000000180051EE2: lea     rcx, [rbp+9E20h+var_22E8]; void *
 * 0000000180051EE9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051EEE: nop
 * 0000000180051EEF: lea     rcx, [rbp+9E20h+var_22C8]; void *
 * 0000000180051EF6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051EFB: nop
 * 0000000180051EFC: lea     rcx, dword_1802696C8
 * 0000000180051F03: call    _Init_thread_footer
 * 0000000180051F08: mov     rax, [rdi+rbx*8]
 * 0000000180051F0C: mov     ecx, [r15+rax]
 * 0000000180051F10: cmp     cs:dword_1802696D0, ecx
 * 0000000180051F16: jle     loc_180051FF8
 * 0000000180051F1C: lea     rcx, dword_1802696D0
 * 0000000180051F23: call    _Init_thread_header
 * 0000000180051F28: cmp     cs:dword_1802696D0, r14d
 * 0000000180051F2F: jnz     loc_180051FF8
 * 0000000180051F35: mov     qword ptr [rbp+9E20h+var_91E0], r13
 * 0000000180051F3C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180051F43: mov     qword ptr [rbp+9E20h+var_91E0+8], rax
 * 0000000180051F4A: movups  xmm0, [rbp+9E20h+var_91E0]
 * 0000000180051F51: movups  [rbp+9E20h+var_8CF8], xmm0
 * 0000000180051F58: mov     dword ptr [rbp+9E20h+var_8CE8], esi
 * 0000000180051F5E: mov     dword ptr [rbp+9E20h+var_8CE8+4], esi
 * 0000000180051F64: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051F69: movups  xmm0, [rbp+9E20h+var_8CE8]
 * 0000000180051F70: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051F75: call    sub_1800455D0
 * 0000000180051F7A: mov     r8, rax
 * 0000000180051F7D: mov     r9d, r12d
 * 0000000180051F80: mov     edx, 0E2h
 * 0000000180051F85: lea     rcx, [rbp+9E20h+var_2268]; Src
 * 0000000180051F8C: call    sub_1800D44B8
 * 0000000180051F91: nop
 * 0000000180051F92: mov     r8, rax
 * 0000000180051F95: lea     rdx, aStandardshader_208; "StandardShader/ShaderModel40/"
 * 0000000180051F9C: lea     rcx, [rbp+9E20h+var_2288]
 * 0000000180051FA3: call    sub_1800453AC
 * 0000000180051FA8: nop
 * 0000000180051FA9: lea     r8, aVertex_65; "/Vertex"
 * 0000000180051FB0: mov     rdx, rax
 * 0000000180051FB3: lea     rcx, [rbp+9E20h+var_22A8]
 * 0000000180051FBA: call    sub_18002BF78
 * 0000000180051FBF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051FC4: mov     rcx, rax
 * 0000000180051FC7: call    sub_1800D45A4
 * 0000000180051FCC: mov     cs:byte_1802696CC, al
 * 0000000180051FD2: lea     rcx, [rbp+9E20h+var_2288]; void *
 * 0000000180051FD9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051FDE: nop
 * 0000000180051FDF: lea     rcx, [rbp+9E20h+var_2268]; void *
 * 0000000180051FE6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051FEB: nop
 * 0000000180051FEC: lea     rcx, dword_1802696D0
 * 0000000180051FF3: call    _Init_thread_footer
 * 0000000180051FF8: mov     rax, [rdi+rbx*8]
 * 0000000180051FFC: mov     ecx, [r15+rax]
 * 0000000180052000: cmp     cs:dword_1802696D8, ecx
 * 0000000180052006: jle     loc_1800520E8
 * 000000018005200C: lea     rcx, dword_1802696D8
 * 0000000180052013: call    _Init_thread_header
 * 0000000180052018: cmp     cs:dword_1802696D8, r14d
 * 000000018005201F: jnz     loc_1800520E8
 * 0000000180052025: mov     qword ptr [rbp+9E20h+var_91D0], r13
 * 000000018005202C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052033: mov     qword ptr [rbp+9E20h+var_91D0+8], rax
 * 000000018005203A: movups  xmm0, [rbp+9E20h+var_91D0]
 * 0000000180052041: movups  [rbp+9E20h+var_8CD8], xmm0
 * 0000000180052048: mov     dword ptr [rbp+9E20h+var_8CC8], esi
 * 000000018005204E: mov     dword ptr [rbp+9E20h+var_8CC8+4], esi
 * 0000000180052054: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052059: movups  xmm0, [rbp+9E20h+var_8CC8]
 * 0000000180052060: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052065: call    sub_1800455D0
 * 000000018005206A: mov     r8, rax
 * 000000018005206D: mov     r9d, r12d
 * 0000000180052070: mov     edx, 0E8h
 * 0000000180052075: lea     rcx, [rbp+9E20h+var_2208]; Src
 * 000000018005207C: call    sub_1800D44B8
 * 0000000180052081: nop
 * 0000000180052082: mov     r8, rax
 * 0000000180052085: lea     rdx, aStandardshader_209; "StandardShader/ShaderModel40/"
 * 000000018005208C: lea     rcx, [rbp+9E20h+var_2228]
 * 0000000180052093: call    sub_1800453AC
 * 0000000180052098: nop
 * 0000000180052099: lea     r8, aVertex_66; "/Vertex"
 * 00000001800520A0: mov     rdx, rax
 * 00000001800520A3: lea     rcx, [rbp+9E20h+var_2248]
 * 00000001800520AA: call    sub_18002BF78
 * 00000001800520AF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800520B4: mov     rcx, rax
 * 00000001800520B7: call    sub_1800D45A4
 * 00000001800520BC: mov     cs:byte_1802696D4, al
 * 00000001800520C2: lea     rcx, [rbp+9E20h+var_2228]; void *
 * 00000001800520C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800520CE: nop
 * 00000001800520CF: lea     rcx, [rbp+9E20h+var_2208]; void *
 * 00000001800520D6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800520DB: nop
 * 00000001800520DC: lea     rcx, dword_1802696D8
 * 00000001800520E3: call    _Init_thread_footer
 * 00000001800520E8: mov     rax, [rdi+rbx*8]
 * 00000001800520EC: mov     ecx, [r15+rax]
 * 00000001800520F0: cmp     cs:dword_1802696E0, ecx
 * 00000001800520F6: jle     loc_1800521D8
 * 00000001800520FC: lea     rcx, dword_1802696E0
 * 0000000180052103: call    _Init_thread_header
 * 0000000180052108: cmp     cs:dword_1802696E0, r14d
 * 000000018005210F: jnz     loc_1800521D8
 * 0000000180052115: mov     qword ptr [rbp+9E20h+var_91C0], r13
 * 000000018005211C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052123: mov     qword ptr [rbp+9E20h+var_91C0+8], rax
 * 000000018005212A: movups  xmm0, [rbp+9E20h+var_91C0]
 * 0000000180052131: movups  [rbp+9E20h+var_8CB8], xmm0
 * 0000000180052138: mov     dword ptr [rbp+9E20h+var_8CA8], esi
 * 000000018005213E: mov     dword ptr [rbp+9E20h+var_8CA8+4], esi
 * 0000000180052144: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052149: movups  xmm0, [rbp+9E20h+var_8CA8]
 * 0000000180052150: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052155: call    sub_1800455D0
 * 000000018005215A: mov     r8, rax
 * 000000018005215D: mov     r9d, r12d
 * 0000000180052160: mov     edx, 0EAh
 * 0000000180052165: lea     rcx, [rbp+9E20h+var_21A8]; Src
 * 000000018005216C: call    sub_1800D44B8
 * 0000000180052171: nop
 * 0000000180052172: mov     r8, rax
 * 0000000180052175: lea     rdx, aStandardshader_210; "StandardShader/ShaderModel40/"
 * 000000018005217C: lea     rcx, [rbp+9E20h+var_21C8]
 * 0000000180052183: call    sub_1800453AC
 * 0000000180052188: nop
 * 0000000180052189: lea     r8, aVertex_67; "/Vertex"
 * 0000000180052190: mov     rdx, rax
 * 0000000180052193: lea     rcx, [rbp+9E20h+var_21E8]
 * 000000018005219A: call    sub_18002BF78
 * 000000018005219F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800521A4: mov     rcx, rax
 * 00000001800521A7: call    sub_1800D45A4
 * 00000001800521AC: mov     cs:byte_1802696DC, al
 * 00000001800521B2: lea     rcx, [rbp+9E20h+var_21C8]; void *
 * 00000001800521B9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800521BE: nop
 * 00000001800521BF: lea     rcx, [rbp+9E20h+var_21A8]; void *
 * 00000001800521C6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800521CB: nop
 * 00000001800521CC: lea     rcx, dword_1802696E0
 * 00000001800521D3: call    _Init_thread_footer
 * 00000001800521D8: mov     rax, [rdi+rbx*8]
 * 00000001800521DC: mov     ecx, [r15+rax]
 * 00000001800521E0: cmp     cs:dword_1802696E8, ecx
 * 00000001800521E6: jle     loc_1800522C8
 * 00000001800521EC: lea     rcx, dword_1802696E8
 * 00000001800521F3: call    _Init_thread_header
 * 00000001800521F8: cmp     cs:dword_1802696E8, r14d
 * 00000001800521FF: jnz     loc_1800522C8
 * 0000000180052205: mov     qword ptr [rbp+9E20h+var_91B0], r13
 * 000000018005220C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052213: mov     qword ptr [rbp+9E20h+var_91B0+8], rax
 * 000000018005221A: movups  xmm0, [rbp+9E20h+var_91B0]
 * 0000000180052221: movups  [rbp+9E20h+var_8C98], xmm0
 * 0000000180052228: mov     dword ptr [rbp+9E20h+var_8C88], esi
 * 000000018005222E: mov     dword ptr [rbp+9E20h+var_8C88+4], esi
 * 0000000180052234: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052239: movups  xmm0, [rbp+9E20h+var_8C88]
 * 0000000180052240: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052245: call    sub_1800455D0
 * 000000018005224A: mov     r8, rax
 * 000000018005224D: mov     r9d, r12d
 * 0000000180052250: mov     edx, 0F0h
 * 0000000180052255: lea     rcx, [rbp+9E20h+var_2148]; Src
 * 000000018005225C: call    sub_1800D44B8
 * 0000000180052261: nop
 * 0000000180052262: mov     r8, rax
 * 0000000180052265: lea     rdx, aStandardshader_211; "StandardShader/ShaderModel40/"
 * 000000018005226C: lea     rcx, [rbp+9E20h+var_2168]
 * 0000000180052273: call    sub_1800453AC
 * 0000000180052278: nop
 * 0000000180052279: lea     r8, aVertex_68; "/Vertex"
 * 0000000180052280: mov     rdx, rax
 * 0000000180052283: lea     rcx, [rbp+9E20h+var_2188]
 * 000000018005228A: call    sub_18002BF78
 * 000000018005228F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052294: mov     rcx, rax
 * 0000000180052297: call    sub_1800D45A4
 * 000000018005229C: mov     cs:byte_1802696E4, al
 * 00000001800522A2: lea     rcx, [rbp+9E20h+var_2168]; void *
 * 00000001800522A9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800522AE: nop
 * 00000001800522AF: lea     rcx, [rbp+9E20h+var_2148]; void *
 * 00000001800522B6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800522BB: nop
 * 00000001800522BC: lea     rcx, dword_1802696E8
 * 00000001800522C3: call    _Init_thread_footer
 * 00000001800522C8: mov     rax, [rdi+rbx*8]
 * 00000001800522CC: mov     ecx, [r15+rax]
 * 00000001800522D0: cmp     cs:dword_1802696F0, ecx
 * 00000001800522D6: jle     loc_1800523B8
 * 00000001800522DC: lea     rcx, dword_1802696F0
 * 00000001800522E3: call    _Init_thread_header
 * 00000001800522E8: cmp     cs:dword_1802696F0, r14d
 * 00000001800522EF: jnz     loc_1800523B8
 * 00000001800522F5: mov     qword ptr [rbp+9E20h+var_91A0], r13
 * 00000001800522FC: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052303: mov     qword ptr [rbp+9E20h+var_91A0+8], rax
 * 000000018005230A: movups  xmm0, [rbp+9E20h+var_91A0]
 * 0000000180052311: movups  [rbp+9E20h+var_8C78], xmm0
 * 0000000180052318: mov     dword ptr [rbp+9E20h+var_8C68], esi
 * 000000018005231E: mov     dword ptr [rbp+9E20h+var_8C68+4], esi
 * 0000000180052324: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052329: movups  xmm0, [rbp+9E20h+var_8C68]
 * 0000000180052330: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052335: call    sub_1800455D0
 * 000000018005233A: mov     r8, rax
 * 000000018005233D: mov     r9d, r12d
 * 0000000180052340: mov     edx, 0F2h
 * 0000000180052345: lea     rcx, [rbp+9E20h+var_20E8]; Src
 * 000000018005234C: call    sub_1800D44B8
 * 0000000180052351: nop
 * 0000000180052352: mov     r8, rax
 * 0000000180052355: lea     rdx, aStandardshader_212; "StandardShader/ShaderModel40/"
 * 000000018005235C: lea     rcx, [rbp+9E20h+var_2108]
 * 0000000180052363: call    sub_1800453AC
 * 0000000180052368: nop
 * 0000000180052369: lea     r8, aVertex_69; "/Vertex"
 * 0000000180052370: mov     rdx, rax
 * 0000000180052373: lea     rcx, [rbp+9E20h+var_2128]
 * 000000018005237A: call    sub_18002BF78
 * 000000018005237F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052384: mov     rcx, rax
 * 0000000180052387: call    sub_1800D45A4
 * 000000018005238C: mov     cs:byte_1802696EC, al
 * 0000000180052392: lea     rcx, [rbp+9E20h+var_2108]; void *
 * 0000000180052399: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005239E: nop
 * 000000018005239F: lea     rcx, [rbp+9E20h+var_20E8]; void *
 * 00000001800523A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800523AB: nop
 * 00000001800523AC: lea     rcx, dword_1802696F0
 * 00000001800523B3: call    _Init_thread_footer
 * 00000001800523B8: mov     rax, [rdi+rbx*8]
 * 00000001800523BC: mov     ecx, [r15+rax]
 * 00000001800523C0: cmp     cs:dword_1802696F8, ecx
 * 00000001800523C6: jle     loc_1800524A8
 * 00000001800523CC: lea     rcx, dword_1802696F8
 * 00000001800523D3: call    _Init_thread_header
 * 00000001800523D8: cmp     cs:dword_1802696F8, r14d
 * 00000001800523DF: jnz     loc_1800524A8
 * 00000001800523E5: mov     qword ptr [rbp+9E20h+var_9190], r13
 * 00000001800523EC: lea     rax, aBlur8_0; "Blur8"
 * 00000001800523F3: mov     qword ptr [rbp+9E20h+var_9190+8], rax
 * 00000001800523FA: movups  xmm0, [rbp+9E20h+var_9190]
 * 0000000180052401: movups  [rbp+9E20h+var_8C58], xmm0
 * 0000000180052408: mov     dword ptr [rbp+9E20h+var_8C48], esi
 * 000000018005240E: mov     dword ptr [rbp+9E20h+var_8C48+4], esi
 * 0000000180052414: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052419: movups  xmm0, [rbp+9E20h+var_8C48]
 * 0000000180052420: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052425: call    sub_1800455D0
 * 000000018005242A: mov     r8, rax
 * 000000018005242D: mov     r9d, r12d
 * 0000000180052430: mov     edx, 0F8h
 * 0000000180052435: lea     rcx, [rbp+9E20h+var_2088]; Src
 * 000000018005243C: call    sub_1800D44B8
 * 0000000180052441: nop
 * 0000000180052442: mov     r8, rax
 * 0000000180052445: lea     rdx, aStandardshader_213; "StandardShader/ShaderModel40/"
 * 000000018005244C: lea     rcx, [rbp+9E20h+var_20A8]
 * 0000000180052453: call    sub_1800453AC
 * 0000000180052458: nop
 * 0000000180052459: lea     r8, aVertex_70; "/Vertex"
 * 0000000180052460: mov     rdx, rax
 * 0000000180052463: lea     rcx, [rbp+9E20h+var_20C8]
 * 000000018005246A: call    sub_18002BF78
 * 000000018005246F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052474: mov     rcx, rax
 * 0000000180052477: call    sub_1800D45A4
 * 000000018005247C: mov     cs:byte_1802696F4, al
 * 0000000180052482: lea     rcx, [rbp+9E20h+var_20A8]; void *
 * 0000000180052489: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005248E: nop
 * 000000018005248F: lea     rcx, [rbp+9E20h+var_2088]; void *
 * 0000000180052496: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005249B: nop
 * 000000018005249C: lea     rcx, dword_1802696F8
 * 00000001800524A3: call    _Init_thread_footer
 * 00000001800524A8: mov     rax, [rdi+rbx*8]
 * 00000001800524AC: mov     ecx, [r15+rax]
 * 00000001800524B0: cmp     cs:dword_180269700, ecx
 * 00000001800524B6: jle     loc_180052598
 * 00000001800524BC: lea     rcx, dword_180269700
 * 00000001800524C3: call    _Init_thread_header
 * 00000001800524C8: cmp     cs:dword_180269700, r14d
 * 00000001800524CF: jnz     loc_180052598
 * 00000001800524D5: mov     qword ptr [rbp+9E20h+var_9180], r13
 * 00000001800524DC: lea     rax, aBlur8_0; "Blur8"
 * 00000001800524E3: mov     qword ptr [rbp+9E20h+var_9180+8], rax
 * 00000001800524EA: movups  xmm0, [rbp+9E20h+var_9180]
 * 00000001800524F1: movups  [rbp+9E20h+var_8C38], xmm0
 * 00000001800524F8: mov     dword ptr [rbp+9E20h+var_8C28], esi
 * 00000001800524FE: mov     dword ptr [rbp+9E20h+var_8C28+4], esi
 * 0000000180052504: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052509: movups  xmm0, [rbp+9E20h+var_8C28]
 * 0000000180052510: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052515: call    sub_1800455D0
 * 000000018005251A: mov     r8, rax
 * 000000018005251D: mov     r9d, r12d
 * 0000000180052520: mov     edx, 0FAh
 * 0000000180052525: lea     rcx, [rbp+9E20h+var_2028]; Src
 * 000000018005252C: call    sub_1800D44B8
 * 0000000180052531: nop
 * 0000000180052532: mov     r8, rax
 * 0000000180052535: lea     rdx, aStandardshader_214; "StandardShader/ShaderModel40/"
 * 000000018005253C: lea     rcx, [rbp+9E20h+var_2048]
 * 0000000180052543: call    sub_1800453AC
 * 0000000180052548: nop
 * 0000000180052549: lea     r8, aVertex_71; "/Vertex"
 * 0000000180052550: mov     rdx, rax
 * 0000000180052553: lea     rcx, [rbp+9E20h+var_2068]
 * 000000018005255A: call    sub_18002BF78
 * 000000018005255F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052564: mov     rcx, rax
 * 0000000180052567: call    sub_1800D45A4
 * 000000018005256C: mov     cs:byte_1802696FC, al
 * 0000000180052572: lea     rcx, [rbp+9E20h+var_2048]; void *
 * 0000000180052579: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005257E: nop
 * 000000018005257F: lea     rcx, [rbp+9E20h+var_2028]; void *
 * 0000000180052586: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005258B: nop
 * 000000018005258C: lea     rcx, dword_180269700
 * 0000000180052593: call    _Init_thread_footer
 * 0000000180052598: mov     rax, [rdi+rbx*8]
 * 000000018005259C: mov     ecx, [r15+rax]
 * 00000001800525A0: cmp     cs:dword_180269708, ecx
 * 00000001800525A6: jle     loc_180052691
 * 00000001800525AC: lea     rcx, dword_180269708
 * 00000001800525B3: call    _Init_thread_header
 * 00000001800525B8: cmp     cs:dword_180269708, r14d
 * 00000001800525BF: jnz     loc_180052691
 * 00000001800525C5: lea     r13, unk_180197070
 * 00000001800525CC: mov     qword ptr [rbp+9E20h+var_9170], r13
 * 00000001800525D3: lea     rax, unk_180198088
 * 00000001800525DA: mov     qword ptr [rbp+9E20h+var_9170+8], rax
 * 00000001800525E1: movups  xmm0, [rbp+9E20h+var_9170]
 * 00000001800525E8: movups  [rbp+9E20h+var_8C18], xmm0
 * 00000001800525EF: mov     dword ptr [rbp+9E20h+var_8C08], esi
 * 00000001800525F5: mov     dword ptr [rbp+9E20h+var_8C08+4], esi
 * 00000001800525FB: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052600: movups  xmm0, [rbp+9E20h+var_8C08]
 * 0000000180052607: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005260C: call    sub_1800455D0
 * 0000000180052611: mov     r8, rax
 * 0000000180052614: mov     r9d, r12d
 * 0000000180052617: mov     edx, 100h
 * 000000018005261C: lea     rcx, [rbp+9E20h+var_1FC8]; Src
 * 0000000180052623: call    sub_1800D44B8
 * 0000000180052628: nop
 * 0000000180052629: mov     r8, rax
 * 000000018005262C: lea     rdx, aStandardshader_215; "StandardShader/ShaderModel40/"
 * 0000000180052633: lea     rcx, [rbp+9E20h+var_1FE8]
 * 000000018005263A: call    sub_1800453AC
 * 000000018005263F: nop
 * 0000000180052640: lea     r8, aVertex_72; "/Vertex"
 * 0000000180052647: mov     rdx, rax
 * 000000018005264A: lea     rcx, [rbp+9E20h+var_2008]
 * 0000000180052651: call    sub_18002BF78
 * 0000000180052656: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005265B: mov     rcx, rax
 * 000000018005265E: call    sub_1800D45A4
 * 0000000180052663: mov     cs:byte_180269704, al
 * 0000000180052669: lea     rcx, [rbp+9E20h+var_1FE8]; void *
 * 0000000180052670: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052675: nop
 * 0000000180052676: lea     rcx, [rbp+9E20h+var_1FC8]; void *
 * 000000018005267D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052682: nop
 * 0000000180052683: lea     rcx, dword_180269708
 * 000000018005268A: call    _Init_thread_footer
 * 000000018005268F: jmp     short loc_180052698
 * 0000000180052691: lea     r13, unk_180197070
 * 0000000180052698: mov     rax, [rdi+rbx*8]
 * 000000018005269C: mov     ecx, [r15+rax]
 * 00000001800526A0: cmp     cs:dword_180269710, ecx
 * 00000001800526A6: jle     loc_180052788
 * 00000001800526AC: lea     rcx, dword_180269710
 * 00000001800526B3: call    _Init_thread_header
 * 00000001800526B8: cmp     cs:dword_180269710, r14d
 * 00000001800526BF: jnz     loc_180052788
 * 00000001800526C5: mov     qword ptr [rbp+9E20h+var_9160], r13
 * 00000001800526CC: lea     rax, unk_180198088
 * 00000001800526D3: mov     qword ptr [rbp+9E20h+var_9160+8], rax
 * 00000001800526DA: movups  xmm0, [rbp+9E20h+var_9160]
 * 00000001800526E1: movups  [rbp+9E20h+var_8BF8], xmm0
 * 00000001800526E8: mov     dword ptr [rbp+9E20h+var_8BE8], esi
 * 00000001800526EE: mov     dword ptr [rbp+9E20h+var_8BE8+4], esi
 * 00000001800526F4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800526F9: movups  xmm0, [rbp+9E20h+var_8BE8]
 * 0000000180052700: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052705: call    sub_1800455D0
 * 000000018005270A: mov     r8, rax
 * 000000018005270D: mov     r9d, r12d
 * 0000000180052710: mov     edx, 102h
 * 0000000180052715: lea     rcx, [rbp+9E20h+var_1F68]; Src
 * 000000018005271C: call    sub_1800D44B8
 * 0000000180052721: nop
 * 0000000180052722: mov     r8, rax
 * 0000000180052725: lea     rdx, aStandardshader_216; "StandardShader/ShaderModel40/"
 * 000000018005272C: lea     rcx, [rbp+9E20h+var_1F88]
 * 0000000180052733: call    sub_1800453AC
 * 0000000180052738: nop
 * 0000000180052739: lea     r8, aVertex_73; "/Vertex"
 * 0000000180052740: mov     rdx, rax
 * 0000000180052743: lea     rcx, [rbp+9E20h+var_1FA8]
 * 000000018005274A: call    sub_18002BF78
 * 000000018005274F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052754: mov     rcx, rax
 * 0000000180052757: call    sub_1800D45A4
 * 000000018005275C: mov     cs:byte_18026970C, al
 * 0000000180052762: lea     rcx, [rbp+9E20h+var_1F88]; void *
 * 0000000180052769: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005276E: nop
 * 000000018005276F: lea     rcx, [rbp+9E20h+var_1F68]; void *
 * 0000000180052776: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005277B: nop
 * 000000018005277C: lea     rcx, dword_180269710
 * 0000000180052783: call    _Init_thread_footer
 * 0000000180052788: mov     rax, [rdi+rbx*8]
 * 000000018005278C: mov     ecx, [r15+rax]
 * 0000000180052790: cmp     cs:dword_180269718, ecx
 * 0000000180052796: jle     loc_180052878
 * 000000018005279C: lea     rcx, dword_180269718
 * 00000001800527A3: call    _Init_thread_header
 * 00000001800527A8: cmp     cs:dword_180269718, r14d
 * 00000001800527AF: jnz     loc_180052878
 * 00000001800527B5: mov     qword ptr [rbp+9E20h+var_9150], r13
 * 00000001800527BC: lea     rax, unk_180198088
 * 00000001800527C3: mov     qword ptr [rbp+9E20h+var_9150+8], rax
 * 00000001800527CA: movups  xmm0, [rbp+9E20h+var_9150]
 * 00000001800527D1: movups  [rbp+9E20h+var_8BD8], xmm0
 * 00000001800527D8: mov     dword ptr [rbp+9E20h+var_8BC8], esi
 * 00000001800527DE: mov     dword ptr [rbp+9E20h+var_8BC8+4], esi
 * 00000001800527E4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800527E9: movups  xmm0, [rbp+9E20h+var_8BC8]
 * 00000001800527F0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800527F5: call    sub_1800455D0
 * 00000001800527FA: mov     r8, rax
 * 00000001800527FD: mov     r9d, r12d
 * 0000000180052800: mov     edx, 104h
 * 0000000180052805: lea     rcx, [rbp+9E20h+var_1F08]; Src
 * 000000018005280C: call    sub_1800D44B8
 * 0000000180052811: nop
 * 0000000180052812: mov     r8, rax
 * 0000000180052815: lea     rdx, aStandardshader_217; "StandardShader/ShaderModel40/"
 * 000000018005281C: lea     rcx, [rbp+9E20h+var_1F28]
 * 0000000180052823: call    sub_1800453AC
 * 0000000180052828: nop
 * 0000000180052829: lea     r8, aVertex_74; "/Vertex"
 * 0000000180052830: mov     rdx, rax
 * 0000000180052833: lea     rcx, [rbp+9E20h+var_1F48]
 * 000000018005283A: call    sub_18002BF78
 * 000000018005283F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052844: mov     rcx, rax
 * 0000000180052847: call    sub_1800D45A4
 * 000000018005284C: mov     cs:byte_180269714, al
 * 0000000180052852: lea     rcx, [rbp+9E20h+var_1F28]; void *
 * 0000000180052859: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005285E: nop
 * 000000018005285F: lea     rcx, [rbp+9E20h+var_1F08]; void *
 * 0000000180052866: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005286B: nop
 * 000000018005286C: lea     rcx, dword_180269718
 * 0000000180052873: call    _Init_thread_footer
 * 0000000180052878: mov     rax, [rdi+rbx*8]
 * 000000018005287C: mov     ecx, [r15+rax]
 * 0000000180052880: cmp     cs:dword_180269720, ecx
 * 0000000180052886: jle     loc_180052968
 * 000000018005288C: lea     rcx, dword_180269720
 * 0000000180052893: call    _Init_thread_header
 * 0000000180052898: cmp     cs:dword_180269720, r14d
 * 000000018005289F: jnz     loc_180052968
 * 00000001800528A5: mov     qword ptr [rbp+9E20h+var_9140], r13
 * 00000001800528AC: lea     rax, unk_180198088
 * 00000001800528B3: mov     qword ptr [rbp+9E20h+var_9140+8], rax
 * 00000001800528BA: movups  xmm0, [rbp+9E20h+var_9140]
 * 00000001800528C1: movups  [rbp+9E20h+var_8BB8], xmm0
 * 00000001800528C8: mov     dword ptr [rbp+9E20h+var_8BA8], esi
 * 00000001800528CE: mov     dword ptr [rbp+9E20h+var_8BA8+4], esi
 * 00000001800528D4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800528D9: movups  xmm0, [rbp+9E20h+var_8BA8]
 * 00000001800528E0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800528E5: call    sub_1800455D0
 * 00000001800528EA: mov     r8, rax
 * 00000001800528ED: mov     r9d, r12d
 * 00000001800528F0: mov     edx, 106h
 * 00000001800528F5: lea     rcx, [rbp+9E20h+var_1EA8]; Src
 * 00000001800528FC: call    sub_1800D44B8
 * 0000000180052901: nop
 * 0000000180052902: mov     r8, rax
 * 0000000180052905: lea     rdx, aStandardshader_218; "StandardShader/ShaderModel40/"
 * 000000018005290C: lea     rcx, [rbp+9E20h+var_1EC8]
 * 0000000180052913: call    sub_1800453AC
 * 0000000180052918: nop
 * 0000000180052919: lea     r8, aVertex_75; "/Vertex"
 * 0000000180052920: mov     rdx, rax
 * 0000000180052923: lea     rcx, [rbp+9E20h+var_1EE8]
 * 000000018005292A: call    sub_18002BF78
 * 000000018005292F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052934: mov     rcx, rax
 * 0000000180052937: call    sub_1800D45A4
 * 000000018005293C: mov     cs:byte_18026971C, al
 * 0000000180052942: lea     rcx, [rbp+9E20h+var_1EC8]; void *
 * 0000000180052949: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005294E: nop
 * 000000018005294F: lea     rcx, [rbp+9E20h+var_1EA8]; void *
 * 0000000180052956: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005295B: nop
 * 000000018005295C: lea     rcx, dword_180269720
 * 0000000180052963: call    _Init_thread_footer
 * 0000000180052968: mov     rax, [rdi+rbx*8]
 * 000000018005296C: mov     ecx, [r15+rax]
 * 0000000180052970: cmp     cs:dword_180269728, ecx
 * 0000000180052976: jle     loc_180052A58
 * 000000018005297C: lea     rcx, dword_180269728
 * 0000000180052983: call    _Init_thread_header
 * 0000000180052988: cmp     cs:dword_180269728, r14d
 * 000000018005298F: jnz     loc_180052A58
 * 0000000180052995: mov     qword ptr [rbp+9E20h+var_9130], r13
 * 000000018005299C: lea     rax, unk_180198088
 * 00000001800529A3: mov     qword ptr [rbp+9E20h+var_9130+8], rax
 * 00000001800529AA: movups  xmm0, [rbp+9E20h+var_9130]
 * 00000001800529B1: movups  [rbp+9E20h+var_8B98], xmm0
 * 00000001800529B8: mov     dword ptr [rbp+9E20h+var_8B88], esi
 * 00000001800529BE: mov     dword ptr [rbp+9E20h+var_8B88+4], esi
 * 00000001800529C4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800529C9: movups  xmm0, [rbp+9E20h+var_8B88]
 * 00000001800529D0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800529D5: call    sub_1800455D0
 * 00000001800529DA: mov     r8, rax
 * 00000001800529DD: mov     r9d, r12d
 * 00000001800529E0: mov     edx, 108h
 * 00000001800529E5: lea     rcx, [rbp+9E20h+var_1E48]; Src
 * 00000001800529EC: call    sub_1800D44B8
 * 00000001800529F1: nop
 * 00000001800529F2: mov     r8, rax
 * 00000001800529F5: lea     rdx, aStandardshader_219; "StandardShader/ShaderModel40/"
 * 00000001800529FC: lea     rcx, [rbp+9E20h+var_1E68]
 * 0000000180052A03: call    sub_1800453AC
 * 0000000180052A08: nop
 * 0000000180052A09: lea     r8, aVertex_76; "/Vertex"
 * 0000000180052A10: mov     rdx, rax
 * 0000000180052A13: lea     rcx, [rbp+9E20h+var_1E88]
 * 0000000180052A1A: call    sub_18002BF78
 * 0000000180052A1F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052A24: mov     rcx, rax
 * 0000000180052A27: call    sub_1800D45A4
 * 0000000180052A2C: mov     cs:byte_180269724, al
 * 0000000180052A32: lea     rcx, [rbp+9E20h+var_1E68]; void *
 * 0000000180052A39: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052A3E: nop
 * 0000000180052A3F: lea     rcx, [rbp+9E20h+var_1E48]; void *
 * 0000000180052A46: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052A4B: nop
 * 0000000180052A4C: lea     rcx, dword_180269728
 * 0000000180052A53: call    _Init_thread_footer
 * 0000000180052A58: mov     rax, [rdi+rbx*8]
 * 0000000180052A5C: mov     ecx, [r15+rax]
 * 0000000180052A60: cmp     cs:dword_180269730, ecx
 * 0000000180052A66: jle     loc_180052B48
 * 0000000180052A6C: lea     rcx, dword_180269730
 * 0000000180052A73: call    _Init_thread_header
 * 0000000180052A78: cmp     cs:dword_180269730, r14d
 * 0000000180052A7F: jnz     loc_180052B48
 * 0000000180052A85: mov     qword ptr [rbp+9E20h+var_9120], r13
 * 0000000180052A8C: lea     rax, unk_180198088
 * 0000000180052A93: mov     qword ptr [rbp+9E20h+var_9120+8], rax
 * 0000000180052A9A: movups  xmm0, [rbp+9E20h+var_9120]
 * 0000000180052AA1: movups  [rbp+9E20h+var_8B78], xmm0
 * 0000000180052AA8: mov     dword ptr [rbp+9E20h+var_8B68], esi
 * 0000000180052AAE: mov     dword ptr [rbp+9E20h+var_8B68+4], esi
 * 0000000180052AB4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052AB9: movups  xmm0, [rbp+9E20h+var_8B68]
 * 0000000180052AC0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052AC5: call    sub_1800455D0
 * 0000000180052ACA: mov     r8, rax
 * 0000000180052ACD: mov     r9d, r12d
 * 0000000180052AD0: mov     edx, 10Ah
 * 0000000180052AD5: lea     rcx, [rbp+9E20h+var_1DE8]; Src
 * 0000000180052ADC: call    sub_1800D44B8
 * 0000000180052AE1: nop
 * 0000000180052AE2: mov     r8, rax
 * 0000000180052AE5: lea     rdx, aStandardshader_220; "StandardShader/ShaderModel40/"
 * 0000000180052AEC: lea     rcx, [rbp+9E20h+var_1E08]
 * 0000000180052AF3: call    sub_1800453AC
 * 0000000180052AF8: nop
 * 0000000180052AF9: lea     r8, aVertex_77; "/Vertex"
 * 0000000180052B00: mov     rdx, rax
 * 0000000180052B03: lea     rcx, [rbp+9E20h+var_1E28]
 * 0000000180052B0A: call    sub_18002BF78
 * 0000000180052B0F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052B14: mov     rcx, rax
 * 0000000180052B17: call    sub_1800D45A4
 * 0000000180052B1C: mov     cs:byte_18026972C, al
 * 0000000180052B22: lea     rcx, [rbp+9E20h+var_1E08]; void *
 * 0000000180052B29: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052B2E: nop
 * 0000000180052B2F: lea     rcx, [rbp+9E20h+var_1DE8]; void *
 * 0000000180052B36: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052B3B: nop
 * 0000000180052B3C: lea     rcx, dword_180269730
 * 0000000180052B43: call    _Init_thread_footer
 * 0000000180052B48: mov     rax, [rdi+rbx*8]
 * 0000000180052B4C: mov     ecx, [r15+rax]
 * 0000000180052B50: cmp     cs:dword_180269738, ecx
 * 0000000180052B56: jle     loc_180052C38
 * 0000000180052B5C: lea     rcx, dword_180269738
 * 0000000180052B63: call    _Init_thread_header
 * 0000000180052B68: cmp     cs:dword_180269738, r14d
 * 0000000180052B6F: jnz     loc_180052C38
 * 0000000180052B75: mov     qword ptr [rbp+9E20h+var_9110], r13
 * 0000000180052B7C: lea     rax, unk_180198088
 * 0000000180052B83: mov     qword ptr [rbp+9E20h+var_9110+8], rax
 * 0000000180052B8A: movups  xmm0, [rbp+9E20h+var_9110]
 * 0000000180052B91: movups  [rbp+9E20h+var_8B58], xmm0
 * 0000000180052B98: mov     dword ptr [rbp+9E20h+var_8B48], esi
 * 0000000180052B9E: mov     dword ptr [rbp+9E20h+var_8B48+4], esi
 * 0000000180052BA4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052BA9: movups  xmm0, [rbp+9E20h+var_8B48]
 * 0000000180052BB0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052BB5: call    sub_1800455D0
 * 0000000180052BBA: mov     r8, rax
 * 0000000180052BBD: mov     r9d, r12d
 * 0000000180052BC0: mov     edx, 110h
 * 0000000180052BC5: lea     rcx, [rbp+9E20h+var_1D88]; Src
 * 0000000180052BCC: call    sub_1800D44B8
 * 0000000180052BD1: nop
 * 0000000180052BD2: mov     r8, rax
 * 0000000180052BD5: lea     rdx, aStandardshader_221; "StandardShader/ShaderModel40/"
 * 0000000180052BDC: lea     rcx, [rbp+9E20h+var_1DA8]
 * 0000000180052BE3: call    sub_1800453AC
 * 0000000180052BE8: nop
 * 0000000180052BE9: lea     r8, aVertex_78; "/Vertex"
 * 0000000180052BF0: mov     rdx, rax
 * 0000000180052BF3: lea     rcx, [rbp+9E20h+var_1DC8]
 * 0000000180052BFA: call    sub_18002BF78
 * 0000000180052BFF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052C04: mov     rcx, rax
 * 0000000180052C07: call    sub_1800D45A4
 * 0000000180052C0C: mov     cs:byte_180269734, al
 * 0000000180052C12: lea     rcx, [rbp+9E20h+var_1DA8]; void *
 * 0000000180052C19: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052C1E: nop
 * 0000000180052C1F: lea     rcx, [rbp+9E20h+var_1D88]; void *
 * 0000000180052C26: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052C2B: nop
 * 0000000180052C2C: lea     rcx, dword_180269738
 * 0000000180052C33: call    _Init_thread_footer
 * 0000000180052C38: mov     rax, [rdi+rbx*8]
 * 0000000180052C3C: mov     ecx, [r15+rax]
 * 0000000180052C40: cmp     cs:dword_180269740, ecx
 * 0000000180052C46: jle     loc_180052D28
 * 0000000180052C4C: lea     rcx, dword_180269740
 * 0000000180052C53: call    _Init_thread_header
 * 0000000180052C58: cmp     cs:dword_180269740, r14d
 * 0000000180052C5F: jnz     loc_180052D28
 * 0000000180052C65: mov     qword ptr [rbp+9E20h+var_9100], r13
 * 0000000180052C6C: lea     rax, unk_180198088
 * 0000000180052C73: mov     qword ptr [rbp+9E20h+var_9100+8], rax
 * 0000000180052C7A: movups  xmm0, [rbp+9E20h+var_9100]
 * 0000000180052C81: movups  [rbp+9E20h+var_8B38], xmm0
 * 0000000180052C88: mov     dword ptr [rbp+9E20h+var_8B28], esi
 * 0000000180052C8E: mov     dword ptr [rbp+9E20h+var_8B28+4], esi
 * 0000000180052C94: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052C99: movups  xmm0, [rbp+9E20h+var_8B28]
 * 0000000180052CA0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052CA5: call    sub_1800455D0
 * 0000000180052CAA: mov     r8, rax
 * 0000000180052CAD: mov     r9d, r12d
 * 0000000180052CB0: mov     edx, 112h
 * 0000000180052CB5: lea     rcx, [rbp+9E20h+var_1D28]; Src
 * 0000000180052CBC: call    sub_1800D44B8
 * 0000000180052CC1: nop
 * 0000000180052CC2: mov     r8, rax
 * 0000000180052CC5: lea     rdx, aStandardshader_222; "StandardShader/ShaderModel40/"
 * 0000000180052CCC: lea     rcx, [rbp+9E20h+var_1D48]
 * 0000000180052CD3: call    sub_1800453AC
 * 0000000180052CD8: nop
 * 0000000180052CD9: lea     r8, aVertex_79; "/Vertex"
 * 0000000180052CE0: mov     rdx, rax
 * 0000000180052CE3: lea     rcx, [rbp+9E20h+var_1D68]
 * 0000000180052CEA: call    sub_18002BF78
 * 0000000180052CEF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052CF4: mov     rcx, rax
 * 0000000180052CF7: call    sub_1800D45A4
 * 0000000180052CFC: mov     cs:byte_18026973C, al
 * 0000000180052D02: lea     rcx, [rbp+9E20h+var_1D48]; void *
 * 0000000180052D09: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052D0E: nop
 * 0000000180052D0F: lea     rcx, [rbp+9E20h+var_1D28]; void *
 * 0000000180052D16: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052D1B: nop
 * 0000000180052D1C: lea     rcx, dword_180269740
 * 0000000180052D23: call    _Init_thread_footer
 * 0000000180052D28: mov     rax, [rdi+rbx*8]
 * 0000000180052D2C: mov     ecx, [r15+rax]
 * 0000000180052D30: cmp     cs:dword_180269748, ecx
 * 0000000180052D36: jle     loc_180052E18
 * 0000000180052D3C: lea     rcx, dword_180269748
 * 0000000180052D43: call    _Init_thread_header
 * 0000000180052D48: cmp     cs:dword_180269748, r14d
 * 0000000180052D4F: jnz     loc_180052E18
 * 0000000180052D55: mov     qword ptr [rbp+9E20h+var_90F0], r13
 * 0000000180052D5C: lea     rax, unk_180198088
 * 0000000180052D63: mov     qword ptr [rbp+9E20h+var_90F0+8], rax
 * 0000000180052D6A: movups  xmm0, [rbp+9E20h+var_90F0]
 * 0000000180052D71: movups  [rbp+9E20h+var_8B18], xmm0
 * 0000000180052D78: mov     dword ptr [rbp+9E20h+var_8B08], esi
 * 0000000180052D7E: mov     dword ptr [rbp+9E20h+var_8B08+4], esi
 * 0000000180052D84: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052D89: movups  xmm0, [rbp+9E20h+var_8B08]
 * 0000000180052D90: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052D95: call    sub_1800455D0
 * 0000000180052D9A: mov     r8, rax
 * 0000000180052D9D: mov     r9d, r12d
 * 0000000180052DA0: mov     edx, 114h
 * 0000000180052DA5: lea     rcx, [rbp+9E20h+var_1CC8]; Src
 * 0000000180052DAC: call    sub_1800D44B8
 * 0000000180052DB1: nop
 * 0000000180052DB2: mov     r8, rax
 * 0000000180052DB5: lea     rdx, aStandardshader_223; "StandardShader/ShaderModel40/"
 * 0000000180052DBC: lea     rcx, [rbp+9E20h+var_1CE8]
 * 0000000180052DC3: call    sub_1800453AC
 * 0000000180052DC8: nop
 * 0000000180052DC9: lea     r8, aVertex_80; "/Vertex"
 * 0000000180052DD0: mov     rdx, rax
 * 0000000180052DD3: lea     rcx, [rbp+9E20h+var_1D08]
 * 0000000180052DDA: call    sub_18002BF78
 * 0000000180052DDF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052DE4: mov     rcx, rax
 * 0000000180052DE7: call    sub_1800D45A4
 * 0000000180052DEC: mov     cs:byte_180269744, al
 * 0000000180052DF2: lea     rcx, [rbp+9E20h+var_1CE8]; void *
 * 0000000180052DF9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052DFE: nop
 * 0000000180052DFF: lea     rcx, [rbp+9E20h+var_1CC8]; void *
 * 0000000180052E06: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052E0B: nop
 * 0000000180052E0C: lea     rcx, dword_180269748
 * 0000000180052E13: call    _Init_thread_footer
 * 0000000180052E18: mov     rax, [rdi+rbx*8]
 * 0000000180052E1C: mov     ecx, [r15+rax]
 * 0000000180052E20: cmp     cs:dword_180269750, ecx
 * 0000000180052E26: jle     loc_180052F08
 * 0000000180052E2C: lea     rcx, dword_180269750
 * 0000000180052E33: call    _Init_thread_header
 * 0000000180052E38: cmp     cs:dword_180269750, r14d
 * 0000000180052E3F: jnz     loc_180052F08
 * 0000000180052E45: mov     qword ptr [rbp+9E20h+var_90E0], r13
 * 0000000180052E4C: lea     rax, unk_180198088
 * 0000000180052E53: mov     qword ptr [rbp+9E20h+var_90E0+8], rax
 * 0000000180052E5A: movups  xmm0, [rbp+9E20h+var_90E0]
 * 0000000180052E61: movups  [rbp+9E20h+var_8AF8], xmm0
 * 0000000180052E68: mov     dword ptr [rbp+9E20h+var_8AE8], esi
 * 0000000180052E6E: mov     dword ptr [rbp+9E20h+var_8AE8+4], esi
 * 0000000180052E74: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052E79: movups  xmm0, [rbp+9E20h+var_8AE8]
 * 0000000180052E80: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052E85: call    sub_1800455D0
 * 0000000180052E8A: mov     r8, rax
 * 0000000180052E8D: mov     r9d, r12d
 * 0000000180052E90: mov     edx, 116h
 * 0000000180052E95: lea     rcx, [rbp+9E20h+var_1C68]; Src
 * 0000000180052E9C: call    sub_1800D44B8
 * 0000000180052EA1: nop
 * 0000000180052EA2: mov     r8, rax
 * 0000000180052EA5: lea     rdx, aStandardshader_224; "StandardShader/ShaderModel40/"
 * 0000000180052EAC: lea     rcx, [rbp+9E20h+var_1C88]
 * 0000000180052EB3: call    sub_1800453AC
 * 0000000180052EB8: nop
 * 0000000180052EB9: lea     r8, aVertex_81; "/Vertex"
 * 0000000180052EC0: mov     rdx, rax
 * 0000000180052EC3: lea     rcx, [rbp+9E20h+var_1CA8]
 * 0000000180052ECA: call    sub_18002BF78
 * 0000000180052ECF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052ED4: mov     rcx, rax
 * 0000000180052ED7: call    sub_1800D45A4
 * 0000000180052EDC: mov     cs:byte_18026974C, al
 * 0000000180052EE2: lea     rcx, [rbp+9E20h+var_1C88]; void *
 * 0000000180052EE9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052EEE: nop
 * 0000000180052EEF: lea     rcx, [rbp+9E20h+var_1C68]; void *
 * 0000000180052EF6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052EFB: nop
 * 0000000180052EFC: lea     rcx, dword_180269750
 * 0000000180052F03: call    _Init_thread_footer
 * 0000000180052F08: mov     rax, [rdi+rbx*8]
 * 0000000180052F0C: mov     ecx, [r15+rax]
 * 0000000180052F10: cmp     cs:dword_180269758, ecx
 * 0000000180052F16: jle     loc_180052FF8
 * 0000000180052F1C: lea     rcx, dword_180269758
 * 0000000180052F23: call    _Init_thread_header
 * 0000000180052F28: cmp     cs:dword_180269758, r14d
 * 0000000180052F2F: jnz     loc_180052FF8
 * 0000000180052F35: mov     qword ptr [rbp+9E20h+var_90D0], r13
 * 0000000180052F3C: lea     rax, unk_180198088
 * 0000000180052F43: mov     qword ptr [rbp+9E20h+var_90D0+8], rax
 * 0000000180052F4A: movups  xmm0, [rbp+9E20h+var_90D0]
 * 0000000180052F51: movups  [rbp+9E20h+var_8AD8], xmm0
 * 0000000180052F58: mov     dword ptr [rbp+9E20h+var_8AC8], esi
 * 0000000180052F5E: mov     dword ptr [rbp+9E20h+var_8AC8+4], esi
 * 0000000180052F64: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052F69: movups  xmm0, [rbp+9E20h+var_8AC8]
 * 0000000180052F70: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052F75: call    sub_1800455D0
 * 0000000180052F7A: mov     r8, rax
 * 0000000180052F7D: mov     r9d, r12d
 * 0000000180052F80: mov     edx, 118h
 * 0000000180052F85: lea     rcx, [rbp+9E20h+var_1C08]; Src
 * 0000000180052F8C: call    sub_1800D44B8
 * 0000000180052F91: nop
 * 0000000180052F92: mov     r8, rax
 * 0000000180052F95: lea     rdx, aStandardshader_225; "StandardShader/ShaderModel40/"
 * 0000000180052F9C: lea     rcx, [rbp+9E20h+var_1C28]
 * 0000000180052FA3: call    sub_1800453AC
 * 0000000180052FA8: nop
 * 0000000180052FA9: lea     r8, aVertex_82; "/Vertex"
 * 0000000180052FB0: mov     rdx, rax
 * 0000000180052FB3: lea     rcx, [rbp+9E20h+var_1C48]
 * 0000000180052FBA: call    sub_18002BF78
 * 0000000180052FBF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052FC4: mov     rcx, rax
 * 0000000180052FC7: call    sub_1800D45A4
 * 0000000180052FCC: mov     cs:byte_180269754, al
 * 0000000180052FD2: lea     rcx, [rbp+9E20h+var_1C28]; void *
 * 0000000180052FD9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052FDE: nop
 * 0000000180052FDF: lea     rcx, [rbp+9E20h+var_1C08]; void *
 * 0000000180052FE6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052FEB: nop
 * 0000000180052FEC: lea     rcx, dword_180269758
 * 0000000180052FF3: call    _Init_thread_footer
 * 0000000180052FF8: mov     rax, [rdi+rbx*8]
 * 0000000180052FFC: mov     ecx, [r15+rax]
 * 0000000180053000: cmp     cs:dword_180269760, ecx
 * 0000000180053006: jle     loc_1800530E8
 * 000000018005300C: lea     rcx, dword_180269760
 * 0000000180053013: call    _Init_thread_header
 * 0000000180053018: cmp     cs:dword_180269760, r14d
 * 000000018005301F: jnz     loc_1800530E8
 * 0000000180053025: mov     qword ptr [rbp+9E20h+var_90C0], r13
 * 000000018005302C: lea     rax, unk_180198088
 * 0000000180053033: mov     qword ptr [rbp+9E20h+var_90C0+8], rax
 * 000000018005303A: movups  xmm0, [rbp+9E20h+var_90C0]
 * 0000000180053041: movups  [rbp+9E20h+var_8AB8], xmm0
 * 0000000180053048: mov     dword ptr [rbp+9E20h+var_8AA8], esi
 * 000000018005304E: mov     dword ptr [rbp+9E20h+var_8AA8+4], esi
 * 0000000180053054: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053059: movups  xmm0, [rbp+9E20h+var_8AA8]
 * 0000000180053060: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053065: call    sub_1800455D0
 * 000000018005306A: mov     r8, rax
 * 000000018005306D: mov     r9d, r12d
 * 0000000180053070: mov     edx, 11Ah
 * 0000000180053075: lea     rcx, [rbp+9E20h+var_1BA8]; Src
 * 000000018005307C: call    sub_1800D44B8
 * 0000000180053081: nop
 * 0000000180053082: mov     r8, rax
 * 0000000180053085: lea     rdx, aStandardshader_226; "StandardShader/ShaderModel40/"
 * 000000018005308C: lea     rcx, [rbp+9E20h+var_1BC8]
 * 0000000180053093: call    sub_1800453AC
 * 0000000180053098: nop
 * 0000000180053099: lea     r8, aVertex_83; "/Vertex"
 * 00000001800530A0: mov     rdx, rax
 * 00000001800530A3: lea     rcx, [rbp+9E20h+var_1BE8]
 * 00000001800530AA: call    sub_18002BF78
 * 00000001800530AF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800530B4: mov     rcx, rax
 * 00000001800530B7: call    sub_1800D45A4
 * 00000001800530BC: mov     cs:byte_18026975C, al
 * 00000001800530C2: lea     rcx, [rbp+9E20h+var_1BC8]; void *
 * 00000001800530C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800530CE: nop
 * 00000001800530CF: lea     rcx, [rbp+9E20h+var_1BA8]; void *
 * 00000001800530D6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800530DB: nop
 * 00000001800530DC: lea     rcx, dword_180269760
 * 00000001800530E3: call    _Init_thread_footer
 * 00000001800530E8: mov     rax, [rdi+rbx*8]
 * 00000001800530EC: mov     ecx, [r15+rax]
 * 00000001800530F0: cmp     cs:dword_180269768, ecx
 * 00000001800530F6: jle     loc_1800531E1
 * 00000001800530FC: lea     rcx, dword_180269768
 * 0000000180053103: call    _Init_thread_header
 * 0000000180053108: cmp     cs:dword_180269768, r14d
 * 000000018005310F: jnz     loc_1800531E1
 * 0000000180053115: lea     r13, unk_180198D30
 * 000000018005311C: mov     qword ptr [rbp+9E20h+var_90B0], r13
 * 0000000180053123: lea     rax, unk_18019A748
 * 000000018005312A: mov     qword ptr [rbp+9E20h+var_90B0+8], rax
 * 0000000180053131: movups  xmm0, [rbp+9E20h+var_90B0]
 * 0000000180053138: movups  [rbp+9E20h+var_8A98], xmm0
 * 000000018005313F: mov     dword ptr [rbp+9E20h+var_8A88], esi
 * 0000000180053145: mov     dword ptr [rbp+9E20h+var_8A88+4], esi
 * 000000018005314B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053150: movups  xmm0, [rbp+9E20h+var_8A88]
 * 0000000180053157: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005315C: call    sub_1800455D0
 * 0000000180053161: mov     r8, rax
 * 0000000180053164: mov     r9d, r12d
 * 0000000180053167: mov     edx, 120h
 * 000000018005316C: lea     rcx, [rbp+9E20h+var_1B48]; Src
 * 0000000180053173: call    sub_1800D44B8
 * 0000000180053178: nop
 * 0000000180053179: mov     r8, rax
 * 000000018005317C: lea     rdx, aStandardshader_227; "StandardShader/ShaderModel40/"
 * 0000000180053183: lea     rcx, [rbp+9E20h+var_1B68]
 * 000000018005318A: call    sub_1800453AC
 * 000000018005318F: nop
 * 0000000180053190: lea     r8, aVertex_84; "/Vertex"
 * 0000000180053197: mov     rdx, rax
 * 000000018005319A: lea     rcx, [rbp+9E20h+var_1B88]
 * 00000001800531A1: call    sub_18002BF78
 * 00000001800531A6: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800531AB: mov     rcx, rax
 * 00000001800531AE: call    sub_1800D45A4
 * 00000001800531B3: mov     cs:byte_180269764, al
 * 00000001800531B9: lea     rcx, [rbp+9E20h+var_1B68]; void *
 * 00000001800531C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800531C5: nop
 * 00000001800531C6: lea     rcx, [rbp+9E20h+var_1B48]; void *
 * 00000001800531CD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800531D2: nop
 * 00000001800531D3: lea     rcx, dword_180269768
 * 00000001800531DA: call    _Init_thread_footer
 * 00000001800531DF: jmp     short loc_1800531E8
 * 00000001800531E1: lea     r13, unk_180198D30
 * 00000001800531E8: mov     rax, [rdi+rbx*8]
 * 00000001800531EC: mov     ecx, [r15+rax]
 * 00000001800531F0: cmp     cs:dword_180269770, ecx
 * 00000001800531F6: jle     loc_1800532D8
 * 00000001800531FC: lea     rcx, dword_180269770
 * 0000000180053203: call    _Init_thread_header
 * 0000000180053208: cmp     cs:dword_180269770, r14d
 * 000000018005320F: jnz     loc_1800532D8
 * 0000000180053215: mov     qword ptr [rbp+9E20h+var_90A0], r13
 * 000000018005321C: lea     rax, unk_18019A748
 * 0000000180053223: mov     qword ptr [rbp+9E20h+var_90A0+8], rax
 * 000000018005322A: movups  xmm0, [rbp+9E20h+var_90A0]
 * 0000000180053231: movups  [rbp+9E20h+var_8A78], xmm0
 * 0000000180053238: mov     dword ptr [rbp+9E20h+var_8A68], esi
 * 000000018005323E: mov     dword ptr [rbp+9E20h+var_8A68+4], esi
 * 0000000180053244: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053249: movups  xmm0, [rbp+9E20h+var_8A68]
 * 0000000180053250: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053255: call    sub_1800455D0
 * 000000018005325A: mov     r8, rax
 * 000000018005325D: mov     r9d, r12d
 * 0000000180053260: mov     edx, 122h
 * 0000000180053265: lea     rcx, [rbp+9E20h+var_1AE8]; Src
 * 000000018005326C: call    sub_1800D44B8
 * 0000000180053271: nop
 * 0000000180053272: mov     r8, rax
 * 0000000180053275: lea     rdx, aStandardshader_228; "StandardShader/ShaderModel40/"
 * 000000018005327C: lea     rcx, [rbp+9E20h+var_1B08]
 * 0000000180053283: call    sub_1800453AC
 * 0000000180053288: nop
 * 0000000180053289: lea     r8, aVertex_85; "/Vertex"
 * 0000000180053290: mov     rdx, rax
 * 0000000180053293: lea     rcx, [rbp+9E20h+var_1B28]
 * 000000018005329A: call    sub_18002BF78
 * 000000018005329F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800532A4: mov     rcx, rax
 * 00000001800532A7: call    sub_1800D45A4
 * 00000001800532AC: mov     cs:byte_18026976C, al
 * 00000001800532B2: lea     rcx, [rbp+9E20h+var_1B08]; void *
 * 00000001800532B9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800532BE: nop
 * 00000001800532BF: lea     rcx, [rbp+9E20h+var_1AE8]; void *
 * 00000001800532C6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800532CB: nop
 * 00000001800532CC: lea     rcx, dword_180269770
 * 00000001800532D3: call    _Init_thread_footer
 * 00000001800532D8: mov     rax, [rdi+rbx*8]
 * 00000001800532DC: mov     ecx, [r15+rax]
 * 00000001800532E0: cmp     cs:dword_180269778, ecx
 * 00000001800532E6: jle     loc_1800533C8
 * 00000001800532EC: lea     rcx, dword_180269778
 * 00000001800532F3: call    _Init_thread_header
 * 00000001800532F8: cmp     cs:dword_180269778, r14d
 * 00000001800532FF: jnz     loc_1800533C8
 * 0000000180053305: mov     qword ptr [rbp+9E20h+var_9090], r13
 * 000000018005330C: lea     rax, unk_18019A748
 * 0000000180053313: mov     qword ptr [rbp+9E20h+var_9090+8], rax
 * 000000018005331A: movups  xmm0, [rbp+9E20h+var_9090]
 * 0000000180053321: movups  [rbp+9E20h+var_8A58], xmm0
 * 0000000180053328: mov     dword ptr [rbp+9E20h+var_8A48], esi
 * 000000018005332E: mov     dword ptr [rbp+9E20h+var_8A48+4], esi
 * 0000000180053334: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053339: movups  xmm0, [rbp+9E20h+var_8A48]
 * 0000000180053340: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053345: call    sub_1800455D0
 * 000000018005334A: mov     r8, rax
 * 000000018005334D: mov     r9d, r12d
 * 0000000180053350: mov     edx, 128h
 * 0000000180053355: lea     rcx, [rbp+9E20h+var_1A88]; Src
 * 000000018005335C: call    sub_1800D44B8
 * 0000000180053361: nop
 * 0000000180053362: mov     r8, rax
 * 0000000180053365: lea     rdx, aStandardshader_229; "StandardShader/ShaderModel40/"
 * 000000018005336C: lea     rcx, [rbp+9E20h+var_1AA8]
 * 0000000180053373: call    sub_1800453AC
 * 0000000180053378: nop
 * 0000000180053379: lea     r8, aVertex_86; "/Vertex"
 * 0000000180053380: mov     rdx, rax
 * 0000000180053383: lea     rcx, [rbp+9E20h+var_1AC8]
 * 000000018005338A: call    sub_18002BF78
 * 000000018005338F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053394: mov     rcx, rax
 * 0000000180053397: call    sub_1800D45A4
 * 000000018005339C: mov     cs:byte_180269774, al
 * 00000001800533A2: lea     rcx, [rbp+9E20h+var_1AA8]; void *
 * 00000001800533A9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800533AE: nop
 * 00000001800533AF: lea     rcx, [rbp+9E20h+var_1A88]; void *
 * 00000001800533B6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800533BB: nop
 * 00000001800533BC: lea     rcx, dword_180269778
 * 00000001800533C3: call    _Init_thread_footer
 * 00000001800533C8: mov     rax, [rdi+rbx*8]
 * 00000001800533CC: mov     ecx, [r15+rax]
 * 00000001800533D0: cmp     cs:dword_180269780, ecx
 * 00000001800533D6: jle     loc_1800534B8
 * 00000001800533DC: lea     rcx, dword_180269780
 * 00000001800533E3: call    _Init_thread_header
 * 00000001800533E8: cmp     cs:dword_180269780, r14d
 * 00000001800533EF: jnz     loc_1800534B8
 * 00000001800533F5: mov     qword ptr [rbp+9E20h+var_9080], r13
 * 00000001800533FC: lea     rax, unk_18019A748
 * 0000000180053403: mov     qword ptr [rbp+9E20h+var_9080+8], rax
 * 000000018005340A: movups  xmm0, [rbp+9E20h+var_9080]
 * 0000000180053411: movups  [rbp+9E20h+var_8A38], xmm0
 * 0000000180053418: mov     dword ptr [rbp+9E20h+var_8A28], esi
 * 000000018005341E: mov     dword ptr [rbp+9E20h+var_8A28+4], esi
 * 0000000180053424: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053429: movups  xmm0, [rbp+9E20h+var_8A28]
 * 0000000180053430: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053435: call    sub_1800455D0
 * 000000018005343A: mov     r8, rax
 * 000000018005343D: mov     r9d, r12d
 * 0000000180053440: mov     edx, 12Ah
 * 0000000180053445: lea     rcx, [rbp+9E20h+var_1A28]; Src
 * 000000018005344C: call    sub_1800D44B8
 * 0000000180053451: nop
 * 0000000180053452: mov     r8, rax
 * 0000000180053455: lea     rdx, aStandardshader_230; "StandardShader/ShaderModel40/"
 * 000000018005345C: lea     rcx, [rbp+9E20h+var_1A48]
 * 0000000180053463: call    sub_1800453AC
 * 0000000180053468: nop
 * 0000000180053469: lea     r8, aVertex_87; "/Vertex"
 * 0000000180053470: mov     rdx, rax
 * 0000000180053473: lea     rcx, [rbp+9E20h+var_1A68]
 * 000000018005347A: call    sub_18002BF78
 * 000000018005347F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053484: mov     rcx, rax
 * 0000000180053487: call    sub_1800D45A4
 * 000000018005348C: mov     cs:byte_18026977C, al
 * 0000000180053492: lea     rcx, [rbp+9E20h+var_1A48]; void *
 * 0000000180053499: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005349E: nop
 * 000000018005349F: lea     rcx, [rbp+9E20h+var_1A28]; void *
 * 00000001800534A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800534AB: nop
 * 00000001800534AC: lea     rcx, dword_180269780
 * 00000001800534B3: call    _Init_thread_footer
 * 00000001800534B8: mov     rax, [rdi+rbx*8]
 * 00000001800534BC: mov     ecx, [r15+rax]
 * 00000001800534C0: cmp     cs:dword_180269788, ecx
 * 00000001800534C6: jle     loc_1800535A8
 * 00000001800534CC: lea     rcx, dword_180269788
 * 00000001800534D3: call    _Init_thread_header
 * 00000001800534D8: cmp     cs:dword_180269788, r14d
 * 00000001800534DF: jnz     loc_1800535A8
 * 00000001800534E5: mov     qword ptr [rbp+9E20h+var_9070], r13
 * 00000001800534EC: lea     rax, unk_18019A748
 * 00000001800534F3: mov     qword ptr [rbp+9E20h+var_9070+8], rax
 * 00000001800534FA: movups  xmm0, [rbp+9E20h+var_9070]
 * 0000000180053501: movups  [rbp+9E20h+var_8A18], xmm0
 * 0000000180053508: mov     dword ptr [rbp+9E20h+var_8A08], esi
 * 000000018005350E: mov     dword ptr [rbp+9E20h+var_8A08+4], esi
 * 0000000180053514: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053519: movups  xmm0, [rbp+9E20h+var_8A08]
 * 0000000180053520: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053525: call    sub_1800455D0
 * 000000018005352A: mov     r8, rax
 * 000000018005352D: mov     r9d, r12d
 * 0000000180053530: mov     edx, 130h
 * 0000000180053535: lea     rcx, [rbp+9E20h+var_19C8]; Src
 * 000000018005353C: call    sub_1800D44B8
 * 0000000180053541: nop
 * 0000000180053542: mov     r8, rax
 * 0000000180053545: lea     rdx, aStandardshader_231; "StandardShader/ShaderModel40/"
 * 000000018005354C: lea     rcx, [rbp+9E20h+var_19E8]
 * 0000000180053553: call    sub_1800453AC
 * 0000000180053558: nop
 * 0000000180053559: lea     r8, aVertex_88; "/Vertex"
 * 0000000180053560: mov     rdx, rax
 * 0000000180053563: lea     rcx, [rbp+9E20h+var_1A08]
 * 000000018005356A: call    sub_18002BF78
 * 000000018005356F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053574: mov     rcx, rax
 * 0000000180053577: call    sub_1800D45A4
 * 000000018005357C: mov     cs:byte_180269784, al
 * 0000000180053582: lea     rcx, [rbp+9E20h+var_19E8]; void *
 * 0000000180053589: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005358E: nop
 * 000000018005358F: lea     rcx, [rbp+9E20h+var_19C8]; void *
 * 0000000180053596: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005359B: nop
 * 000000018005359C: lea     rcx, dword_180269788
 * 00000001800535A3: call    _Init_thread_footer
 * 00000001800535A8: mov     rax, [rdi+rbx*8]
 * 00000001800535AC: mov     r13d, 1A18h
 * 00000001800535B2: mov     eax, [r15+rax]
 * 00000001800535B6: cmp     cs:dword_180269790, eax
 * 00000001800535BC: jle     loc_1800536AF
 * 00000001800535C2: lea     rcx, dword_180269790
 * 00000001800535C9: call    _Init_thread_header
 * 00000001800535CE: cmp     cs:dword_180269790, r14d
 * 00000001800535D5: jnz     loc_1800536AF
 * 00000001800535DB: mov     r8d, r13d
 * 00000001800535DE: lea     rdx, unk_180198D30
 * 00000001800535E5: lea     rcx, [rbp+9E20h+var_7378]
 * 00000001800535EC: call    sub_1800455BC
 * 00000001800535F1: movups  xmm0, xmmword ptr [rax]
 * 00000001800535F4: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800535FA: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053600: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053604: mov     r9d, esi
 * 0000000180053607: mov     r8d, esi
 * 000000018005360A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005360F: lea     rcx, [rbp+9E20h+var_688]
 * 0000000180053616: call    sub_1800455A8
 * 000000018005361B: movups  xmm0, xmmword ptr [rax]
 * 000000018005361E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053623: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053627: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005362C: call    sub_1800455D0
 * 0000000180053631: mov     r8, rax
 * 0000000180053634: mov     r9d, r12d
 * 0000000180053637: mov     edx, 132h
 * 000000018005363C: lea     rcx, [rbp+9E20h+var_1968]; Src
 * 0000000180053643: call    sub_1800D44B8
 * 0000000180053648: nop
 * 0000000180053649: mov     r8, rax
 * 000000018005364C: lea     rdx, aStandardshader_232; "StandardShader/ShaderModel40/"
 * 0000000180053653: lea     rcx, [rbp+9E20h+var_1988]
 * 000000018005365A: call    sub_1800453AC
 * 000000018005365F: nop
 * 0000000180053660: lea     r8, aVertex_89; "/Vertex"
 * 0000000180053667: mov     rdx, rax
 * 000000018005366A: lea     rcx, [rbp+9E20h+var_19A8]
 * 0000000180053671: call    sub_18002BF78
 * 0000000180053676: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005367B: mov     rcx, rax
 * 000000018005367E: call    sub_1800D45A4
 * 0000000180053683: mov     cs:byte_18026978C, al
 * 0000000180053689: lea     rcx, [rbp+9E20h+var_1988]; void *
 * 0000000180053690: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053695: nop
 * 0000000180053696: lea     rcx, [rbp+9E20h+var_1968]; void *
 * 000000018005369D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800536A2: nop
 * 00000001800536A3: lea     rcx, dword_180269790
 * 00000001800536AA: call    _Init_thread_footer
 * 00000001800536AF: mov     rax, [rdi+rbx*8]
 * 00000001800536B3: mov     ecx, [r15+rax]
 * 00000001800536B7: cmp     cs:dword_180269798, ecx
 * 00000001800536BD: jle     loc_1800537B0
 * 00000001800536C3: lea     rcx, dword_180269798
 * 00000001800536CA: call    _Init_thread_header
 * 00000001800536CF: cmp     cs:dword_180269798, r14d
 * 00000001800536D6: jnz     loc_1800537B0
 * 00000001800536DC: mov     r8d, r13d
 * 00000001800536DF: lea     rdx, unk_180198D30
 * 00000001800536E6: lea     rcx, [rbp+9E20h+var_7368]
 * 00000001800536ED: call    sub_1800455BC
 * 00000001800536F2: movups  xmm0, xmmword ptr [rax]
 * 00000001800536F5: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800536FB: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053701: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053705: mov     r9d, esi
 * 0000000180053708: mov     r8d, esi
 * 000000018005370B: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053710: lea     rcx, [rbp+9E20h+var_668]
 * 0000000180053717: call    sub_1800455A8
 * 000000018005371C: movups  xmm0, xmmword ptr [rax]
 * 000000018005371F: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053724: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053728: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005372D: call    sub_1800455D0
 * 0000000180053732: mov     r8, rax
 * 0000000180053735: mov     r9d, r12d
 * 0000000180053738: mov     edx, 138h
 * 000000018005373D: lea     rcx, [rbp+9E20h+var_1908]; Src
 * 0000000180053744: call    sub_1800D44B8
 * 0000000180053749: nop
 * 000000018005374A: mov     r8, rax
 * 000000018005374D: lea     rdx, aStandardshader_233; "StandardShader/ShaderModel40/"
 * 0000000180053754: lea     rcx, [rbp+9E20h+var_1928]
 * 000000018005375B: call    sub_1800453AC
 * 0000000180053760: nop
 * 0000000180053761: lea     r8, aVertex_90; "/Vertex"
 * 0000000180053768: mov     rdx, rax
 * 000000018005376B: lea     rcx, [rbp+9E20h+var_1948]
 * 0000000180053772: call    sub_18002BF78
 * 0000000180053777: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005377C: mov     rcx, rax
 * 000000018005377F: call    sub_1800D45A4
 * 0000000180053784: mov     cs:byte_180269794, al
 * 000000018005378A: lea     rcx, [rbp+9E20h+var_1928]; void *
 * 0000000180053791: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053796: nop
 * 0000000180053797: lea     rcx, [rbp+9E20h+var_1908]; void *
 * 000000018005379E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800537A3: nop
 * 00000001800537A4: lea     rcx, dword_180269798
 * 00000001800537AB: call    _Init_thread_footer
 * 00000001800537B0: mov     rax, [rdi+rbx*8]
 * 00000001800537B4: mov     ecx, [r15+rax]
 * 00000001800537B8: cmp     cs:dword_1802697A0, ecx
 * 00000001800537BE: jle     loc_1800538B1
 * 00000001800537C4: lea     rcx, dword_1802697A0
 * 00000001800537CB: call    _Init_thread_header
 * 00000001800537D0: cmp     cs:dword_1802697A0, r14d
 * 00000001800537D7: jnz     loc_1800538B1
 * 00000001800537DD: mov     r8d, r13d
 * 00000001800537E0: lea     rdx, unk_180198D30
 * 00000001800537E7: lea     rcx, [rbp+9E20h+var_7358]
 * 00000001800537EE: call    sub_1800455BC
 * 00000001800537F3: movups  xmm0, xmmword ptr [rax]
 * 00000001800537F6: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800537FC: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053802: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053806: mov     r9d, esi
 * 0000000180053809: mov     r8d, esi
 * 000000018005380C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053811: lea     rcx, [rbp+9E20h+var_648]
 * 0000000180053818: call    sub_1800455A8
 * 000000018005381D: movups  xmm0, xmmword ptr [rax]
 * 0000000180053820: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053825: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053829: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005382E: call    sub_1800455D0
 * 0000000180053833: mov     r8, rax
 * 0000000180053836: mov     r9d, r12d
 * 0000000180053839: mov     edx, 13Ah
 * 000000018005383E: lea     rcx, [rbp+9E20h+var_18A8]; Src
 * 0000000180053845: call    sub_1800D44B8
 * 000000018005384A: nop
 * 000000018005384B: mov     r8, rax
 * 000000018005384E: lea     rdx, aStandardshader_234; "StandardShader/ShaderModel40/"
 * 0000000180053855: lea     rcx, [rbp+9E20h+var_18C8]
 * 000000018005385C: call    sub_1800453AC
 * 0000000180053861: nop
 * 0000000180053862: lea     r8, aVertex_91; "/Vertex"
 * 0000000180053869: mov     rdx, rax
 * 000000018005386C: lea     rcx, [rbp+9E20h+var_18E8]
 * 0000000180053873: call    sub_18002BF78
 * 0000000180053878: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005387D: mov     rcx, rax
 * 0000000180053880: call    sub_1800D45A4
 * 0000000180053885: mov     cs:byte_18026979C, al
 * 000000018005388B: lea     rcx, [rbp+9E20h+var_18C8]; void *
 * 0000000180053892: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053897: nop
 * 0000000180053898: lea     rcx, [rbp+9E20h+var_18A8]; void *
 * 000000018005389F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800538A4: nop
 * 00000001800538A5: lea     rcx, dword_1802697A0
 * 00000001800538AC: call    _Init_thread_footer
 * 00000001800538B1: mov     rax, [rdi+rbx*8]
 * 00000001800538B5: mov     r13d, 1050h
 * 00000001800538BB: mov     eax, [r15+rax]
 * 00000001800538BF: cmp     cs:dword_1802697A8, eax
 * 00000001800538C5: jle     loc_1800539B8
 * 00000001800538CB: lea     rcx, dword_1802697A8
 * 00000001800538D2: call    _Init_thread_header
 * 00000001800538D7: cmp     cs:dword_1802697A8, r14d
 * 00000001800538DE: jnz     loc_1800539B8
 * 00000001800538E4: mov     r8d, r13d
 * 00000001800538E7: lea     rdx, unk_18019BC40
 * 00000001800538EE: lea     rcx, [rbp+9E20h+var_7348]
 * 00000001800538F5: call    sub_1800455BC
 * 00000001800538FA: movups  xmm0, xmmword ptr [rax]
 * 00000001800538FD: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053903: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053909: mov     [rsp+9F20h+var_9F00], al
 * 000000018005390D: mov     r9d, esi
 * 0000000180053910: mov     r8d, esi
 * 0000000180053913: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053918: lea     rcx, [rbp+9E20h+var_628]
 * 000000018005391F: call    sub_1800455A8
 * 0000000180053924: movups  xmm0, xmmword ptr [rax]
 * 0000000180053927: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005392C: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053930: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053935: call    sub_1800455D0
 * 000000018005393A: mov     r8, rax
 * 000000018005393D: mov     r9d, r12d
 * 0000000180053940: mov     edx, 140h
 * 0000000180053945: lea     rcx, [rbp+9E20h+var_1848]; Src
 * 000000018005394C: call    sub_1800D44B8
 * 0000000180053951: nop
 * 0000000180053952: mov     r8, rax
 * 0000000180053955: lea     rdx, aStandardshader_235; "StandardShader/ShaderModel40/"
 * 000000018005395C: lea     rcx, [rbp+9E20h+var_1868]
 * 0000000180053963: call    sub_1800453AC
 * 0000000180053968: nop
 * 0000000180053969: lea     r8, aVertex_92; "/Vertex"
 * 0000000180053970: mov     rdx, rax
 * 0000000180053973: lea     rcx, [rbp+9E20h+var_1888]
 * 000000018005397A: call    sub_18002BF78
 * 000000018005397F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053984: mov     rcx, rax
 * 0000000180053987: call    sub_1800D45A4
 * 000000018005398C: mov     cs:byte_1802697A4, al
 * 0000000180053992: lea     rcx, [rbp+9E20h+var_1868]; void *
 * 0000000180053999: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005399E: nop
 * 000000018005399F: lea     rcx, [rbp+9E20h+var_1848]; void *
 * 00000001800539A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800539AB: nop
 * 00000001800539AC: lea     rcx, dword_1802697A8
 * 00000001800539B3: call    _Init_thread_footer
 * 00000001800539B8: mov     rax, [rdi+rbx*8]
 * 00000001800539BC: mov     ecx, [r15+rax]
 * 00000001800539C0: cmp     cs:dword_1802697B0, ecx
 * 00000001800539C6: jle     loc_180053AB9
 * 00000001800539CC: lea     rcx, dword_1802697B0
 * 00000001800539D3: call    _Init_thread_header
 * 00000001800539D8: cmp     cs:dword_1802697B0, r14d
 * 00000001800539DF: jnz     loc_180053AB9
 * 00000001800539E5: mov     r8d, r13d
 * 00000001800539E8: lea     rdx, unk_18019BC40
 * 00000001800539EF: lea     rcx, [rbp+9E20h+var_7338]
 * 00000001800539F6: call    sub_1800455BC
 * 00000001800539FB: movups  xmm0, xmmword ptr [rax]
 * 00000001800539FE: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053A04: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053A0A: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053A0E: mov     r9d, esi
 * 0000000180053A11: mov     r8d, esi
 * 0000000180053A14: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053A19: lea     rcx, [rbp+9E20h+var_608]
 * 0000000180053A20: call    sub_1800455A8
 * 0000000180053A25: movups  xmm0, xmmword ptr [rax]
 * 0000000180053A28: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053A2D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053A31: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053A36: call    sub_1800455D0
 * 0000000180053A3B: mov     r8, rax
 * 0000000180053A3E: mov     r9d, r12d
 * 0000000180053A41: mov     edx, 142h
 * 0000000180053A46: lea     rcx, [rbp+9E20h+var_17E8]; Src
 * 0000000180053A4D: call    sub_1800D44B8
 * 0000000180053A52: nop
 * 0000000180053A53: mov     r8, rax
 * 0000000180053A56: lea     rdx, aStandardshader_236; "StandardShader/ShaderModel40/"
 * 0000000180053A5D: lea     rcx, [rbp+9E20h+var_1808]
 * 0000000180053A64: call    sub_1800453AC
 * 0000000180053A69: nop
 * 0000000180053A6A: lea     r8, aVertex_93; "/Vertex"
 * 0000000180053A71: mov     rdx, rax
 * 0000000180053A74: lea     rcx, [rbp+9E20h+var_1828]
 * 0000000180053A7B: call    sub_18002BF78
 * 0000000180053A80: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053A85: mov     rcx, rax
 * 0000000180053A88: call    sub_1800D45A4
 * 0000000180053A8D: mov     cs:byte_1802697AC, al
 * 0000000180053A93: lea     rcx, [rbp+9E20h+var_1808]; void *
 * 0000000180053A9A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053A9F: nop
 * 0000000180053AA0: lea     rcx, [rbp+9E20h+var_17E8]; void *
 * 0000000180053AA7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053AAC: nop
 * 0000000180053AAD: lea     rcx, dword_1802697B0
 * 0000000180053AB4: call    _Init_thread_footer
 * 0000000180053AB9: mov     rax, [rdi+rbx*8]
 * 0000000180053ABD: mov     ecx, [r15+rax]
 * 0000000180053AC1: cmp     cs:dword_1802697B8, ecx
 * 0000000180053AC7: jle     loc_180053BBA
 * 0000000180053ACD: lea     rcx, dword_1802697B8
 * 0000000180053AD4: call    _Init_thread_header
 * 0000000180053AD9: cmp     cs:dword_1802697B8, r14d
 * 0000000180053AE0: jnz     loc_180053BBA
 * 0000000180053AE6: mov     r8d, r13d
 * 0000000180053AE9: lea     rdx, unk_18019BC40
 * 0000000180053AF0: lea     rcx, [rbp+9E20h+var_7328]
 * 0000000180053AF7: call    sub_1800455BC
 * 0000000180053AFC: movups  xmm0, xmmword ptr [rax]
 * 0000000180053AFF: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053B05: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053B0B: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053B0F: mov     r9d, esi
 * 0000000180053B12: mov     r8d, esi
 * 0000000180053B15: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053B1A: lea     rcx, [rbp+9E20h+var_5E8]
 * 0000000180053B21: call    sub_1800455A8
 * 0000000180053B26: movups  xmm0, xmmword ptr [rax]
 * 0000000180053B29: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053B2E: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053B32: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053B37: call    sub_1800455D0
 * 0000000180053B3C: mov     r8, rax
 * 0000000180053B3F: mov     r9d, r12d
 * 0000000180053B42: mov     edx, 148h
 * 0000000180053B47: lea     rcx, [rbp+9E20h+var_1788]; Src
 * 0000000180053B4E: call    sub_1800D44B8
 * 0000000180053B53: nop
 * 0000000180053B54: mov     r8, rax
 * 0000000180053B57: lea     rdx, aStandardshader_237; "StandardShader/ShaderModel40/"
 * 0000000180053B5E: lea     rcx, [rbp+9E20h+var_17A8]
 * 0000000180053B65: call    sub_1800453AC
 * 0000000180053B6A: nop
 * 0000000180053B6B: lea     r8, aVertex_94; "/Vertex"
 * 0000000180053B72: mov     rdx, rax
 * 0000000180053B75: lea     rcx, [rbp+9E20h+var_17C8]
 * 0000000180053B7C: call    sub_18002BF78
 * 0000000180053B81: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053B86: mov     rcx, rax
 * 0000000180053B89: call    sub_1800D45A4
 * 0000000180053B8E: mov     cs:byte_1802697B4, al
 * 0000000180053B94: lea     rcx, [rbp+9E20h+var_17A8]; void *
 * 0000000180053B9B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053BA0: nop
 * 0000000180053BA1: lea     rcx, [rbp+9E20h+var_1788]; void *
 * 0000000180053BA8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053BAD: nop
 * 0000000180053BAE: lea     rcx, dword_1802697B8
 * 0000000180053BB5: call    _Init_thread_footer
 * 0000000180053BBA: mov     rax, [rdi+rbx*8]
 * 0000000180053BBE: mov     ecx, [r15+rax]
 * 0000000180053BC2: cmp     cs:dword_1802697C0, ecx
 * 0000000180053BC8: jle     loc_180053CBB
 * 0000000180053BCE: lea     rcx, dword_1802697C0
 * 0000000180053BD5: call    _Init_thread_header
 * 0000000180053BDA: cmp     cs:dword_1802697C0, r14d
 * 0000000180053BE1: jnz     loc_180053CBB
 * 0000000180053BE7: mov     r8d, r13d
 * 0000000180053BEA: lea     rdx, unk_18019BC40
 * 0000000180053BF1: lea     rcx, [rbp+9E20h+var_7318]
 * 0000000180053BF8: call    sub_1800455BC
 * 0000000180053BFD: movups  xmm0, xmmword ptr [rax]
 * 0000000180053C00: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053C06: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053C0C: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053C10: mov     r9d, esi
 * 0000000180053C13: mov     r8d, esi
 * 0000000180053C16: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053C1B: lea     rcx, [rbp+9E20h+var_5C8]
 * 0000000180053C22: call    sub_1800455A8
 * 0000000180053C27: movups  xmm0, xmmword ptr [rax]
 * 0000000180053C2A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053C2F: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053C33: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053C38: call    sub_1800455D0
 * 0000000180053C3D: mov     r8, rax
 * 0000000180053C40: mov     r9d, r12d
 * 0000000180053C43: mov     edx, 14Ah
 * 0000000180053C48: lea     rcx, [rbp+9E20h+var_1728]; Src
 * 0000000180053C4F: call    sub_1800D44B8
 * 0000000180053C54: nop
 * 0000000180053C55: mov     r8, rax
 * 0000000180053C58: lea     rdx, aStandardshader_238; "StandardShader/ShaderModel40/"
 * 0000000180053C5F: lea     rcx, [rbp+9E20h+var_1748]
 * 0000000180053C66: call    sub_1800453AC
 * 0000000180053C6B: nop
 * 0000000180053C6C: lea     r8, aVertex_95; "/Vertex"
 * 0000000180053C73: mov     rdx, rax
 * 0000000180053C76: lea     rcx, [rbp+9E20h+var_1768]
 * 0000000180053C7D: call    sub_18002BF78
 * 0000000180053C82: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053C87: mov     rcx, rax
 * 0000000180053C8A: call    sub_1800D45A4
 * 0000000180053C8F: mov     cs:byte_1802697BC, al
 * 0000000180053C95: lea     rcx, [rbp+9E20h+var_1748]; void *
 * 0000000180053C9C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053CA1: nop
 * 0000000180053CA2: lea     rcx, [rbp+9E20h+var_1728]; void *
 * 0000000180053CA9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053CAE: nop
 * 0000000180053CAF: lea     rcx, dword_1802697C0
 * 0000000180053CB6: call    _Init_thread_footer
 * 0000000180053CBB: mov     rax, [rdi+rbx*8]
 * 0000000180053CBF: mov     ecx, [r15+rax]
 * 0000000180053CC3: cmp     cs:dword_1802697C8, ecx
 * 0000000180053CC9: jle     loc_180053DBC
 * 0000000180053CCF: lea     rcx, dword_1802697C8
 * 0000000180053CD6: call    _Init_thread_header
 * 0000000180053CDB: cmp     cs:dword_1802697C8, r14d
 * 0000000180053CE2: jnz     loc_180053DBC
 * 0000000180053CE8: mov     r8d, r13d
 * 0000000180053CEB: lea     rdx, unk_18019BC40
 * 0000000180053CF2: lea     rcx, [rbp+9E20h+var_7308]
 * 0000000180053CF9: call    sub_1800455BC
 * 0000000180053CFE: movups  xmm0, xmmword ptr [rax]
 * 0000000180053D01: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053D07: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053D0D: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053D11: mov     r9d, esi
 * 0000000180053D14: mov     r8d, esi
 * 0000000180053D17: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053D1C: lea     rcx, [rbp+9E20h+var_5A8]
 * 0000000180053D23: call    sub_1800455A8
 * 0000000180053D28: movups  xmm0, xmmword ptr [rax]
 * 0000000180053D2B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053D30: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053D34: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053D39: call    sub_1800455D0
 * 0000000180053D3E: mov     r8, rax
 * 0000000180053D41: mov     r9d, r12d
 * 0000000180053D44: mov     edx, 150h
 * 0000000180053D49: lea     rcx, [rbp+9E20h+var_16C8]; Src
 * 0000000180053D50: call    sub_1800D44B8
 * 0000000180053D55: nop
 * 0000000180053D56: mov     r8, rax
 * 0000000180053D59: lea     rdx, aStandardshader_239; "StandardShader/ShaderModel40/"
 * 0000000180053D60: lea     rcx, [rbp+9E20h+var_16E8]
 * 0000000180053D67: call    sub_1800453AC
 * 0000000180053D6C: nop
 * 0000000180053D6D: lea     r8, aVertex_96; "/Vertex"
 * 0000000180053D74: mov     rdx, rax
 * 0000000180053D77: lea     rcx, [rbp+9E20h+var_1708]
 * 0000000180053D7E: call    sub_18002BF78
 * 0000000180053D83: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053D88: mov     rcx, rax
 * 0000000180053D8B: call    sub_1800D45A4
 * 0000000180053D90: mov     cs:byte_1802697C4, al
 * 0000000180053D96: lea     rcx, [rbp+9E20h+var_16E8]; void *
 * 0000000180053D9D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053DA2: nop
 * 0000000180053DA3: lea     rcx, [rbp+9E20h+var_16C8]; void *
 * 0000000180053DAA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053DAF: nop
 * 0000000180053DB0: lea     rcx, dword_1802697C8
 * 0000000180053DB7: call    _Init_thread_footer
 * 0000000180053DBC: mov     rax, [rdi+rbx*8]
 * 0000000180053DC0: mov     ecx, [r15+rax]
 * 0000000180053DC4: cmp     cs:dword_1802697D0, ecx
 * 0000000180053DCA: jle     loc_180053EBD
 * 0000000180053DD0: lea     rcx, dword_1802697D0
 * 0000000180053DD7: call    _Init_thread_header
 * 0000000180053DDC: cmp     cs:dword_1802697D0, r14d
 * 0000000180053DE3: jnz     loc_180053EBD
 * 0000000180053DE9: mov     r8d, r13d
 * 0000000180053DEC: lea     rdx, unk_18019BC40
 * 0000000180053DF3: lea     rcx, [rbp+9E20h+var_72F8]
 * 0000000180053DFA: call    sub_1800455BC
 * 0000000180053DFF: movups  xmm0, xmmword ptr [rax]
 * 0000000180053E02: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053E08: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053E0E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053E12: mov     r9d, esi
 * 0000000180053E15: mov     r8d, esi
 * 0000000180053E18: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053E1D: lea     rcx, [rbp+9E20h+var_588]
 * 0000000180053E24: call    sub_1800455A8
 * 0000000180053E29: movups  xmm0, xmmword ptr [rax]
 * 0000000180053E2C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053E31: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053E35: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053E3A: call    sub_1800455D0
 * 0000000180053E3F: mov     r8, rax
 * 0000000180053E42: mov     r9d, r12d
 * 0000000180053E45: mov     edx, 152h
 * 0000000180053E4A: lea     rcx, [rbp+9E20h+var_1668]; Src
 * 0000000180053E51: call    sub_1800D44B8
 * 0000000180053E56: nop
 * 0000000180053E57: mov     r8, rax
 * 0000000180053E5A: lea     rdx, aStandardshader_240; "StandardShader/ShaderModel40/"
 * 0000000180053E61: lea     rcx, [rbp+9E20h+var_1688]
 * 0000000180053E68: call    sub_1800453AC
 * 0000000180053E6D: nop
 * 0000000180053E6E: lea     r8, aVertex_97; "/Vertex"
 * 0000000180053E75: mov     rdx, rax
 * 0000000180053E78: lea     rcx, [rbp+9E20h+var_16A8]
 * 0000000180053E7F: call    sub_18002BF78
 * 0000000180053E84: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053E89: mov     rcx, rax
 * 0000000180053E8C: call    sub_1800D45A4
 * 0000000180053E91: mov     cs:byte_1802697CC, al
 * 0000000180053E97: lea     rcx, [rbp+9E20h+var_1688]; void *
 * 0000000180053E9E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053EA3: nop
 * 0000000180053EA4: lea     rcx, [rbp+9E20h+var_1668]; void *
 * 0000000180053EAB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053EB0: nop
 * 0000000180053EB1: lea     rcx, dword_1802697D0
 * 0000000180053EB8: call    _Init_thread_footer
 * 0000000180053EBD: mov     rax, [rdi+rbx*8]
 * 0000000180053EC1: mov     ecx, [r15+rax]
 * 0000000180053EC5: cmp     cs:dword_1802697D8, ecx
 * 0000000180053ECB: jle     loc_180053FBE
 * 0000000180053ED1: lea     rcx, dword_1802697D8
 * 0000000180053ED8: call    _Init_thread_header
 * 0000000180053EDD: cmp     cs:dword_1802697D8, r14d
 * 0000000180053EE4: jnz     loc_180053FBE
 * 0000000180053EEA: mov     r8d, r13d
 * 0000000180053EED: lea     rdx, unk_18019BC40
 * 0000000180053EF4: lea     rcx, [rbp+9E20h+var_72E8]
 * 0000000180053EFB: call    sub_1800455BC
 * 0000000180053F00: movups  xmm0, xmmword ptr [rax]
 * 0000000180053F03: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053F09: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053F0F: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053F13: mov     r9d, esi
 * 0000000180053F16: mov     r8d, esi
 * 0000000180053F19: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053F1E: lea     rcx, [rbp+9E20h+var_568]
 * 0000000180053F25: call    sub_1800455A8
 * 0000000180053F2A: movups  xmm0, xmmword ptr [rax]
 * 0000000180053F2D: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053F32: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053F36: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053F3B: call    sub_1800455D0
 * 0000000180053F40: mov     r8, rax
 * 0000000180053F43: mov     r9d, r12d
 * 0000000180053F46: mov     edx, 158h
 * 0000000180053F4B: lea     rcx, [rbp+9E20h+var_1608]; Src
 * 0000000180053F52: call    sub_1800D44B8
 * 0000000180053F57: nop
 * 0000000180053F58: mov     r8, rax
 * 0000000180053F5B: lea     rdx, aStandardshader_241; "StandardShader/ShaderModel40/"
 * 0000000180053F62: lea     rcx, [rbp+9E20h+var_1628]
 * 0000000180053F69: call    sub_1800453AC
 * 0000000180053F6E: nop
 * 0000000180053F6F: lea     r8, aVertex_98; "/Vertex"
 * 0000000180053F76: mov     rdx, rax
 * 0000000180053F79: lea     rcx, [rbp+9E20h+var_1648]
 * 0000000180053F80: call    sub_18002BF78
 * 0000000180053F85: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053F8A: mov     rcx, rax
 * 0000000180053F8D: call    sub_1800D45A4
 * 0000000180053F92: mov     cs:byte_1802697D4, al
 * 0000000180053F98: lea     rcx, [rbp+9E20h+var_1628]; void *
 * 0000000180053F9F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053FA4: nop
 * 0000000180053FA5: lea     rcx, [rbp+9E20h+var_1608]; void *
 * 0000000180053FAC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053FB1: nop
 * 0000000180053FB2: lea     rcx, dword_1802697D8
 * 0000000180053FB9: call    _Init_thread_footer
 * 0000000180053FBE: mov     rax, [rdi+rbx*8]
 * 0000000180053FC2: mov     ecx, [r15+rax]
 * 0000000180053FC6: cmp     cs:dword_1802697E0, ecx
 * 0000000180053FCC: jle     loc_1800540BF
 * 0000000180053FD2: lea     rcx, dword_1802697E0
 * 0000000180053FD9: call    _Init_thread_header
 * 0000000180053FDE: cmp     cs:dword_1802697E0, r14d
 * 0000000180053FE5: jnz     loc_1800540BF
 * 0000000180053FEB: mov     r8d, r13d
 * 0000000180053FEE: lea     rdx, unk_18019BC40
 * 0000000180053FF5: lea     rcx, [rbp+9E20h+var_72D8]
 * 0000000180053FFC: call    sub_1800455BC
 * 0000000180054001: movups  xmm0, xmmword ptr [rax]
 * 0000000180054004: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005400A: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054010: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054014: mov     r9d, esi
 * 0000000180054017: mov     r8d, esi
 * 000000018005401A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005401F: lea     rcx, [rbp+9E20h+var_548]
 * 0000000180054026: call    sub_1800455A8
 * 000000018005402B: movups  xmm0, xmmword ptr [rax]
 * 000000018005402E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054033: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054037: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005403C: call    sub_1800455D0
 * 0000000180054041: mov     r8, rax
 * 0000000180054044: mov     r9d, r12d
 * 0000000180054047: mov     edx, 15Ah
 * 000000018005404C: lea     rcx, [rbp+9E20h+var_15A8]; Src
 * 0000000180054053: call    sub_1800D44B8
 * 0000000180054058: nop
 * 0000000180054059: mov     r8, rax
 * 000000018005405C: lea     rdx, aStandardshader_242; "StandardShader/ShaderModel40/"
 * 0000000180054063: lea     rcx, [rbp+9E20h+var_15C8]
 * 000000018005406A: call    sub_1800453AC
 * 000000018005406F: nop
 * 0000000180054070: lea     r8, aVertex_99; "/Vertex"
 * 0000000180054077: mov     rdx, rax
 * 000000018005407A: lea     rcx, [rbp+9E20h+var_15E8]
 * 0000000180054081: call    sub_18002BF78
 * 0000000180054086: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005408B: mov     rcx, rax
 * 000000018005408E: call    sub_1800D45A4
 * 0000000180054093: mov     cs:byte_1802697DC, al
 * 0000000180054099: lea     rcx, [rbp+9E20h+var_15C8]; void *
 * 00000001800540A0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800540A5: nop
 * 00000001800540A6: lea     rcx, [rbp+9E20h+var_15A8]; void *
 * 00000001800540AD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800540B2: nop
 * 00000001800540B3: lea     rcx, dword_1802697E0
 * 00000001800540BA: call    _Init_thread_footer
 * 00000001800540BF: mov     rax, [rdi+rbx*8]
 * 00000001800540C3: mov     r13d, 1A50h
 * 00000001800540C9: mov     eax, [r15+rax]
 * 00000001800540CD: cmp     cs:dword_1802697E8, eax
 * 00000001800540D3: jle     loc_1800541C6
 * 00000001800540D9: lea     rcx, dword_1802697E8
 * 00000001800540E0: call    _Init_thread_header
 * 00000001800540E5: cmp     cs:dword_1802697E8, r14d
 * 00000001800540EC: jnz     loc_1800541C6
 * 00000001800540F2: mov     r8d, r13d
 * 00000001800540F5: lea     rdx, unk_18019CC90
 * 00000001800540FC: lea     rcx, [rbp+9E20h+var_72C8]
 * 0000000180054103: call    sub_1800455BC
 * 0000000180054108: movups  xmm0, xmmword ptr [rax]
 * 000000018005410B: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054111: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054117: mov     [rsp+9F20h+var_9F00], al
 * 000000018005411B: mov     r9d, esi
 * 000000018005411E: mov     r8d, esi
 * 0000000180054121: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054126: lea     rcx, [rbp+9E20h+var_528]
 * 000000018005412D: call    sub_1800455A8
 * 0000000180054132: movups  xmm0, xmmword ptr [rax]
 * 0000000180054135: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005413A: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005413E: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054143: call    sub_1800455D0
 * 0000000180054148: mov     r8, rax
 * 000000018005414B: mov     r9d, r12d
 * 000000018005414E: mov     edx, 160h
 * 0000000180054153: lea     rcx, [rbp+9E20h+var_1548]; Src
 * 000000018005415A: call    sub_1800D44B8
 * 000000018005415F: nop
 * 0000000180054160: mov     r8, rax
 * 0000000180054163: lea     rdx, aStandardshader_243; "StandardShader/ShaderModel40/"
 * 000000018005416A: lea     rcx, [rbp+9E20h+var_1568]
 * 0000000180054171: call    sub_1800453AC
 * 0000000180054176: nop
 * 0000000180054177: lea     r8, aVertex_100; "/Vertex"
 * 000000018005417E: mov     rdx, rax
 * 0000000180054181: lea     rcx, [rbp+9E20h+var_1588]
 * 0000000180054188: call    sub_18002BF78
 * 000000018005418D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054192: mov     rcx, rax
 * 0000000180054195: call    sub_1800D45A4
 * 000000018005419A: mov     cs:byte_1802697E4, al
 * 00000001800541A0: lea     rcx, [rbp+9E20h+var_1568]; void *
 * 00000001800541A7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800541AC: nop
 * 00000001800541AD: lea     rcx, [rbp+9E20h+var_1548]; void *
 * 00000001800541B4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800541B9: nop
 * 00000001800541BA: lea     rcx, dword_1802697E8
 * 00000001800541C1: call    _Init_thread_footer
 * 00000001800541C6: mov     rax, [rdi+rbx*8]
 * 00000001800541CA: mov     ecx, [r15+rax]
 * 00000001800541CE: cmp     cs:dword_1802697F0, ecx
 * 00000001800541D4: jle     loc_1800542C7
 * 00000001800541DA: lea     rcx, dword_1802697F0
 * 00000001800541E1: call    _Init_thread_header
 * 00000001800541E6: cmp     cs:dword_1802697F0, r14d
 * 00000001800541ED: jnz     loc_1800542C7
 * 00000001800541F3: mov     r8d, r13d
 * 00000001800541F6: lea     rdx, unk_18019CC90
 * 00000001800541FD: lea     rcx, [rbp+9E20h+var_72B8]
 * 0000000180054204: call    sub_1800455BC
 * 0000000180054209: movups  xmm0, xmmword ptr [rax]
 * 000000018005420C: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054212: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054218: mov     [rsp+9F20h+var_9F00], al
 * 000000018005421C: mov     r9d, esi
 * 000000018005421F: mov     r8d, esi
 * 0000000180054222: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054227: lea     rcx, [rbp+9E20h+var_508]
 * 000000018005422E: call    sub_1800455A8
 * 0000000180054233: movups  xmm0, xmmword ptr [rax]
 * 0000000180054236: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005423B: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005423F: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054244: call    sub_1800455D0
 * 0000000180054249: mov     r8, rax
 * 000000018005424C: mov     r9d, r12d
 * 000000018005424F: mov     edx, 162h
 * 0000000180054254: lea     rcx, [rbp+9E20h+var_14E8]; Src
 * 000000018005425B: call    sub_1800D44B8
 * 0000000180054260: nop
 * 0000000180054261: mov     r8, rax
 * 0000000180054264: lea     rdx, aStandardshader_244; "StandardShader/ShaderModel40/"
 * 000000018005426B: lea     rcx, [rbp+9E20h+var_1508]
 * 0000000180054272: call    sub_1800453AC
 * 0000000180054277: nop
 * 0000000180054278: lea     r8, aVertex_101; "/Vertex"
 * 000000018005427F: mov     rdx, rax
 * 0000000180054282: lea     rcx, [rbp+9E20h+var_1528]
 * 0000000180054289: call    sub_18002BF78
 * 000000018005428E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054293: mov     rcx, rax
 * 0000000180054296: call    sub_1800D45A4
 * 000000018005429B: mov     cs:byte_1802697EC, al
 * 00000001800542A1: lea     rcx, [rbp+9E20h+var_1508]; void *
 * 00000001800542A8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800542AD: nop
 * 00000001800542AE: lea     rcx, [rbp+9E20h+var_14E8]; void *
 * 00000001800542B5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800542BA: nop
 * 00000001800542BB: lea     rcx, dword_1802697F0
 * 00000001800542C2: call    _Init_thread_footer
 * 00000001800542C7: mov     rax, [rdi+rbx*8]
 * 00000001800542CB: mov     ecx, [r15+rax]
 * 00000001800542CF: cmp     cs:dword_1802697F8, ecx
 * 00000001800542D5: jle     loc_1800543C8
 * 00000001800542DB: lea     rcx, dword_1802697F8
 * 00000001800542E2: call    _Init_thread_header
 * 00000001800542E7: cmp     cs:dword_1802697F8, r14d
 * 00000001800542EE: jnz     loc_1800543C8
 * 00000001800542F4: mov     r8d, r13d
 * 00000001800542F7: lea     rdx, unk_18019CC90
 * 00000001800542FE: lea     rcx, [rbp+9E20h+var_72A8]
 * 0000000180054305: call    sub_1800455BC
 * 000000018005430A: movups  xmm0, xmmword ptr [rax]
 * 000000018005430D: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054313: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054319: mov     [rsp+9F20h+var_9F00], al
 * 000000018005431D: mov     r9d, esi
 * 0000000180054320: mov     r8d, esi
 * 0000000180054323: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054328: lea     rcx, [rbp+9E20h+var_4E8]
 * 000000018005432F: call    sub_1800455A8
 * 0000000180054334: movups  xmm0, xmmword ptr [rax]
 * 0000000180054337: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005433C: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054340: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054345: call    sub_1800455D0
 * 000000018005434A: mov     r8, rax
 * 000000018005434D: mov     r9d, r12d
 * 0000000180054350: mov     edx, 168h
 * 0000000180054355: lea     rcx, [rbp+9E20h+var_1488]; Src
 * 000000018005435C: call    sub_1800D44B8
 * 0000000180054361: nop
 * 0000000180054362: mov     r8, rax
 * 0000000180054365: lea     rdx, aStandardshader_245; "StandardShader/ShaderModel40/"
 * 000000018005436C: lea     rcx, [rbp+9E20h+var_14A8]
 * 0000000180054373: call    sub_1800453AC
 * 0000000180054378: nop
 * 0000000180054379: lea     r8, aVertex_102; "/Vertex"
 * 0000000180054380: mov     rdx, rax
 * 0000000180054383: lea     rcx, [rbp+9E20h+var_14C8]
 * 000000018005438A: call    sub_18002BF78
 * 000000018005438F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054394: mov     rcx, rax
 * 0000000180054397: call    sub_1800D45A4
 * 000000018005439C: mov     cs:byte_1802697F4, al
 * 00000001800543A2: lea     rcx, [rbp+9E20h+var_14A8]; void *
 * 00000001800543A9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800543AE: nop
 * 00000001800543AF: lea     rcx, [rbp+9E20h+var_1488]; void *
 * 00000001800543B6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800543BB: nop
 * 00000001800543BC: lea     rcx, dword_1802697F8
 * 00000001800543C3: call    _Init_thread_footer
 * 00000001800543C8: mov     rax, [rdi+rbx*8]
 * 00000001800543CC: mov     ecx, [r15+rax]
 * 00000001800543D0: cmp     cs:dword_180269800, ecx
 * 00000001800543D6: jle     loc_1800544C9
 * 00000001800543DC: lea     rcx, dword_180269800
 * 00000001800543E3: call    _Init_thread_header
 * 00000001800543E8: cmp     cs:dword_180269800, r14d
 * 00000001800543EF: jnz     loc_1800544C9
 * 00000001800543F5: mov     r8d, r13d
 * 00000001800543F8: lea     rdx, unk_18019CC90
 * 00000001800543FF: lea     rcx, [rbp+9E20h+var_7298]
 * 0000000180054406: call    sub_1800455BC
 * 000000018005440B: movups  xmm0, xmmword ptr [rax]
 * 000000018005440E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054414: mov     al, [rbp+9E20h+arg_0]
 * 000000018005441A: mov     [rsp+9F20h+var_9F00], al
 * 000000018005441E: mov     r9d, esi
 * 0000000180054421: mov     r8d, esi
 * 0000000180054424: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054429: lea     rcx, [rbp+9E20h+var_4C8]
 * 0000000180054430: call    sub_1800455A8
 * 0000000180054435: movups  xmm0, xmmword ptr [rax]
 * 0000000180054438: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005443D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054441: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054446: call    sub_1800455D0
 * 000000018005444B: mov     r8, rax
 * 000000018005444E: mov     r9d, r12d
 * 0000000180054451: mov     edx, 16Ah
 * 0000000180054456: lea     rcx, [rbp+9E20h+var_1428]; Src
 * 000000018005445D: call    sub_1800D44B8
 * 0000000180054462: nop
 * 0000000180054463: mov     r8, rax
 * 0000000180054466: lea     rdx, aStandardshader_246; "StandardShader/ShaderModel40/"
 * 000000018005446D: lea     rcx, [rbp+9E20h+var_1448]
 * 0000000180054474: call    sub_1800453AC
 * 0000000180054479: nop
 * 000000018005447A: lea     r8, aVertex_103; "/Vertex"
 * 0000000180054481: mov     rdx, rax
 * 0000000180054484: lea     rcx, [rbp+9E20h+var_1468]
 * 000000018005448B: call    sub_18002BF78
 * 0000000180054490: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054495: mov     rcx, rax
 * 0000000180054498: call    sub_1800D45A4
 * 000000018005449D: mov     cs:byte_1802697FC, al
 * 00000001800544A3: lea     rcx, [rbp+9E20h+var_1448]; void *
 * 00000001800544AA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800544AF: nop
 * 00000001800544B0: lea     rcx, [rbp+9E20h+var_1428]; void *
 * 00000001800544B7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800544BC: nop
 * 00000001800544BD: lea     rcx, dword_180269800
 * 00000001800544C4: call    _Init_thread_footer
 * 00000001800544C9: mov     rax, [rdi+rbx*8]
 * 00000001800544CD: mov     ecx, [r15+rax]
 * 00000001800544D1: cmp     cs:dword_180269808, ecx
 * 00000001800544D7: jle     loc_1800545CA
 * 00000001800544DD: lea     rcx, dword_180269808
 * 00000001800544E4: call    _Init_thread_header
 * 00000001800544E9: cmp     cs:dword_180269808, r14d
 * 00000001800544F0: jnz     loc_1800545CA
 * 00000001800544F6: mov     r8d, r13d
 * 00000001800544F9: lea     rdx, unk_18019CC90
 * 0000000180054500: lea     rcx, [rbp+9E20h+var_7288]
 * 0000000180054507: call    sub_1800455BC
 * 000000018005450C: movups  xmm0, xmmword ptr [rax]
 * 000000018005450F: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054515: mov     al, [rbp+9E20h+arg_0]
 * 000000018005451B: mov     [rsp+9F20h+var_9F00], al
 * 000000018005451F: mov     r9d, esi
 * 0000000180054522: mov     r8d, esi
 * 0000000180054525: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005452A: lea     rcx, [rbp+9E20h+var_4A8]
 * 0000000180054531: call    sub_1800455A8
 * 0000000180054536: movups  xmm0, xmmword ptr [rax]
 * 0000000180054539: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005453E: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054542: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054547: call    sub_1800455D0
 * 000000018005454C: mov     r8, rax
 * 000000018005454F: mov     r9d, r12d
 * 0000000180054552: mov     edx, 170h
 * 0000000180054557: lea     rcx, [rbp+9E20h+var_13C8]; Src
 * 000000018005455E: call    sub_1800D44B8
 * 0000000180054563: nop
 * 0000000180054564: mov     r8, rax
 * 0000000180054567: lea     rdx, aStandardshader_247; "StandardShader/ShaderModel40/"
 * 000000018005456E: lea     rcx, [rbp+9E20h+var_13E8]
 * 0000000180054575: call    sub_1800453AC
 * 000000018005457A: nop
 * 000000018005457B: lea     r8, aVertex_104; "/Vertex"
 * 0000000180054582: mov     rdx, rax
 * 0000000180054585: lea     rcx, [rbp+9E20h+var_1408]
 * 000000018005458C: call    sub_18002BF78
 * 0000000180054591: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054596: mov     rcx, rax
 * 0000000180054599: call    sub_1800D45A4
 * 000000018005459E: mov     cs:byte_180269804, al
 * 00000001800545A4: lea     rcx, [rbp+9E20h+var_13E8]; void *
 * 00000001800545AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800545B0: nop
 * 00000001800545B1: lea     rcx, [rbp+9E20h+var_13C8]; void *
 * 00000001800545B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800545BD: nop
 * 00000001800545BE: lea     rcx, dword_180269808
 * 00000001800545C5: call    _Init_thread_footer
 * 00000001800545CA: mov     rax, [rdi+rbx*8]
 * 00000001800545CE: mov     ecx, [r15+rax]
 * 00000001800545D2: cmp     cs:dword_180269810, ecx
 * 00000001800545D8: jle     loc_1800546CB
 * 00000001800545DE: lea     rcx, dword_180269810
 * 00000001800545E5: call    _Init_thread_header
 * 00000001800545EA: cmp     cs:dword_180269810, r14d
 * 00000001800545F1: jnz     loc_1800546CB
 * 00000001800545F7: mov     r8d, r13d
 * 00000001800545FA: lea     rdx, unk_18019CC90
 * 0000000180054601: lea     rcx, [rbp+9E20h+var_7278]
 * 0000000180054608: call    sub_1800455BC
 * 000000018005460D: movups  xmm0, xmmword ptr [rax]
 * 0000000180054610: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054616: mov     al, [rbp+9E20h+arg_0]
 * 000000018005461C: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054620: mov     r9d, esi
 * 0000000180054623: mov     r8d, esi
 * 0000000180054626: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005462B: lea     rcx, [rbp+9E20h+var_488]
 * 0000000180054632: call    sub_1800455A8
 * 0000000180054637: movups  xmm0, xmmword ptr [rax]
 * 000000018005463A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005463F: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054643: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054648: call    sub_1800455D0
 * 000000018005464D: mov     r8, rax
 * 0000000180054650: mov     r9d, r12d
 * 0000000180054653: mov     edx, 172h
 * 0000000180054658: lea     rcx, [rbp+9E20h+var_1368]; Src
 * 000000018005465F: call    sub_1800D44B8
 * 0000000180054664: nop
 * 0000000180054665: mov     r8, rax
 * 0000000180054668: lea     rdx, aStandardshader_248; "StandardShader/ShaderModel40/"
 * 000000018005466F: lea     rcx, [rbp+9E20h+var_1388]
 * 0000000180054676: call    sub_1800453AC
 * 000000018005467B: nop
 * 000000018005467C: lea     r8, aVertex_105; "/Vertex"
 * 0000000180054683: mov     rdx, rax
 * 0000000180054686: lea     rcx, [rbp+9E20h+var_13A8]
 * 000000018005468D: call    sub_18002BF78
 * 0000000180054692: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054697: mov     rcx, rax
 * 000000018005469A: call    sub_1800D45A4
 * 000000018005469F: mov     cs:byte_18026980C, al
 * 00000001800546A5: lea     rcx, [rbp+9E20h+var_1388]; void *
 * 00000001800546AC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800546B1: nop
 * 00000001800546B2: lea     rcx, [rbp+9E20h+var_1368]; void *
 * 00000001800546B9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800546BE: nop
 * 00000001800546BF: lea     rcx, dword_180269810
 * 00000001800546C6: call    _Init_thread_footer
 * 00000001800546CB: mov     rax, [rdi+rbx*8]
 * 00000001800546CF: mov     ecx, [r15+rax]
 * 00000001800546D3: cmp     cs:dword_180269818, ecx
 * 00000001800546D9: jle     loc_1800547CC
 * 00000001800546DF: lea     rcx, dword_180269818
 * 00000001800546E6: call    _Init_thread_header
 * 00000001800546EB: cmp     cs:dword_180269818, r14d
 * 00000001800546F2: jnz     loc_1800547CC
 * 00000001800546F8: mov     r8d, r13d
 * 00000001800546FB: lea     rdx, unk_18019CC90
 * 0000000180054702: lea     rcx, [rbp+9E20h+var_7268]
 * 0000000180054709: call    sub_1800455BC
 * 000000018005470E: movups  xmm0, xmmword ptr [rax]
 * 0000000180054711: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054717: mov     al, [rbp+9E20h+arg_0]
 * 000000018005471D: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054721: mov     r9d, esi
 * 0000000180054724: mov     r8d, esi
 * 0000000180054727: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005472C: lea     rcx, [rbp+9E20h+var_468]
 * 0000000180054733: call    sub_1800455A8
 * 0000000180054738: movups  xmm0, xmmword ptr [rax]
 * 000000018005473B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054740: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054744: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054749: call    sub_1800455D0
 * 000000018005474E: mov     r8, rax
 * 0000000180054751: mov     r9d, r12d
 * 0000000180054754: mov     edx, 178h
 * 0000000180054759: lea     rcx, [rbp+9E20h+var_1308]; Src
 * 0000000180054760: call    sub_1800D44B8
 * 0000000180054765: nop
 * 0000000180054766: mov     r8, rax
 * 0000000180054769: lea     rdx, aStandardshader_249; "StandardShader/ShaderModel40/"
 * 0000000180054770: lea     rcx, [rbp+9E20h+var_1328]
 * 0000000180054777: call    sub_1800453AC
 * 000000018005477C: nop
 * 000000018005477D: lea     r8, aVertex_106; "/Vertex"
 * 0000000180054784: mov     rdx, rax
 * 0000000180054787: lea     rcx, [rbp+9E20h+var_1348]
 * 000000018005478E: call    sub_18002BF78
 * 0000000180054793: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054798: mov     rcx, rax
 * 000000018005479B: call    sub_1800D45A4
 * 00000001800547A0: mov     cs:byte_180269814, al
 * 00000001800547A6: lea     rcx, [rbp+9E20h+var_1328]; void *
 * 00000001800547AD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800547B2: nop
 * 00000001800547B3: lea     rcx, [rbp+9E20h+var_1308]; void *
 * 00000001800547BA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800547BF: nop
 * 00000001800547C0: lea     rcx, dword_180269818
 * 00000001800547C7: call    _Init_thread_footer
 * 00000001800547CC: mov     rax, [rdi+rbx*8]
 * 00000001800547D0: mov     ecx, [r15+rax]
 * 00000001800547D4: cmp     cs:dword_180269820, ecx
 * 00000001800547DA: jle     loc_1800548CD
 * 00000001800547E0: lea     rcx, dword_180269820
 * 00000001800547E7: call    _Init_thread_header
 * 00000001800547EC: cmp     cs:dword_180269820, r14d
 * 00000001800547F3: jnz     loc_1800548CD
 * 00000001800547F9: mov     r8d, r13d
 * 00000001800547FC: lea     rdx, unk_18019CC90
 * 0000000180054803: lea     rcx, [rbp+9E20h+var_7258]
 * 000000018005480A: call    sub_1800455BC
 * 000000018005480F: movups  xmm0, xmmword ptr [rax]
 * 0000000180054812: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054818: mov     al, [rbp+9E20h+arg_0]
 * 000000018005481E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054822: mov     r9d, esi
 * 0000000180054825: mov     r8d, esi
 * 0000000180054828: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005482D: lea     rcx, [rbp+9E20h+var_448]
 * 0000000180054834: call    sub_1800455A8
 * 0000000180054839: movups  xmm0, xmmword ptr [rax]
 * 000000018005483C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054841: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054845: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005484A: call    sub_1800455D0
 * 000000018005484F: mov     r8, rax
 * 0000000180054852: mov     r9d, r12d
 * 0000000180054855: mov     edx, 17Ah
 * 000000018005485A: lea     rcx, [rbp+9E20h+var_12A8]; Src
 * 0000000180054861: call    sub_1800D44B8
 * 0000000180054866: nop
 * 0000000180054867: mov     r8, rax
 * 000000018005486A: lea     rdx, aStandardshader_250; "StandardShader/ShaderModel40/"
 * 0000000180054871: lea     rcx, [rbp+9E20h+var_12C8]
 * 0000000180054878: call    sub_1800453AC
 * 000000018005487D: nop
 * 000000018005487E: lea     r8, aVertex_107; "/Vertex"
 * 0000000180054885: mov     rdx, rax
 * 0000000180054888: lea     rcx, [rbp+9E20h+var_12E8]
 * 000000018005488F: call    sub_18002BF78
 * 0000000180054894: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054899: mov     rcx, rax
 * 000000018005489C: call    sub_1800D45A4
 * 00000001800548A1: mov     cs:byte_18026981C, al
 * 00000001800548A7: lea     rcx, [rbp+9E20h+var_12C8]; void *
 * 00000001800548AE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800548B3: nop
 * 00000001800548B4: lea     rcx, [rbp+9E20h+var_12A8]; void *
 * 00000001800548BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800548C0: nop
 * 00000001800548C1: lea     rcx, dword_180269820
 * 00000001800548C8: call    _Init_thread_footer
 * 00000001800548CD: mov     rax, [rdi+rbx*8]
 * 00000001800548D1: mov     ecx, [r15+rax]
 * 00000001800548D5: cmp     cs:dword_180269828, ecx
 * 00000001800548DB: jle     loc_1800549D1
 * 00000001800548E1: lea     rcx, dword_180269828
 * 00000001800548E8: call    _Init_thread_header
 * 00000001800548ED: cmp     cs:dword_180269828, r14d
 * 00000001800548F4: jnz     loc_1800549D1
 * 00000001800548FA: mov     r8d, 1050h
 * 0000000180054900: lea     rdx, unk_18019BC40
 * 0000000180054907: lea     rcx, [rbp+9E20h+var_7248]
 * 000000018005490E: call    sub_1800455BC
 * 0000000180054913: movups  xmm0, xmmword ptr [rax]
 * 0000000180054916: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005491C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054922: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054926: mov     r9d, esi
 * 0000000180054929: mov     r8d, esi
 * 000000018005492C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054931: lea     rcx, [rbp+9E20h+var_428]
 * 0000000180054938: call    sub_1800455A8
 * 000000018005493D: movups  xmm0, xmmword ptr [rax]
 * 0000000180054940: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054945: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054949: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005494E: call    sub_1800455D0
 * 0000000180054953: mov     r8, rax
 * 0000000180054956: mov     r9d, r12d
 * 0000000180054959: mov     edx, 180h
 * 000000018005495E: lea     rcx, [rbp+9E20h+var_1248]; Src
 * 0000000180054965: call    sub_1800D44B8
 * 000000018005496A: nop
 * 000000018005496B: mov     r8, rax
 * 000000018005496E: lea     rdx, aStandardshader_251; "StandardShader/ShaderModel40/"
 * 0000000180054975: lea     rcx, [rbp+9E20h+var_1268]
 * 000000018005497C: call    sub_1800453AC
 * 0000000180054981: nop
 * 0000000180054982: lea     r8, aVertex_108; "/Vertex"
 * 0000000180054989: mov     rdx, rax
 * 000000018005498C: lea     rcx, [rbp+9E20h+var_1288]
 * 0000000180054993: call    sub_18002BF78
 * 0000000180054998: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005499D: mov     rcx, rax
 * 00000001800549A0: call    sub_1800D45A4
 * 00000001800549A5: mov     cs:byte_180269824, al
 * 00000001800549AB: lea     rcx, [rbp+9E20h+var_1268]; void *
 * 00000001800549B2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800549B7: nop
 * 00000001800549B8: lea     rcx, [rbp+9E20h+var_1248]; void *
 * 00000001800549BF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800549C4: nop
 * 00000001800549C5: lea     rcx, dword_180269828
 * 00000001800549CC: call    _Init_thread_footer
 * 00000001800549D1: mov     rax, [rdi+rbx*8]
 * 00000001800549D5: mov     ecx, [r15+rax]
 * 00000001800549D9: cmp     cs:dword_180269830, ecx
 * 00000001800549DF: jle     loc_180054AD5
 * 00000001800549E5: lea     rcx, dword_180269830
 * 00000001800549EC: call    _Init_thread_header
 * 00000001800549F1: cmp     cs:dword_180269830, r14d
 * 00000001800549F8: jnz     loc_180054AD5
 * 00000001800549FE: mov     r8d, 1050h
 * 0000000180054A04: lea     rdx, unk_18019BC40
 * 0000000180054A0B: lea     rcx, [rbp+9E20h+var_7238]
 * 0000000180054A12: call    sub_1800455BC
 * 0000000180054A17: movups  xmm0, xmmword ptr [rax]
 * 0000000180054A1A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054A20: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054A26: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054A2A: mov     r9d, esi
 * 0000000180054A2D: mov     r8d, esi
 * 0000000180054A30: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054A35: lea     rcx, [rbp+9E20h+var_408]
 * 0000000180054A3C: call    sub_1800455A8
 * 0000000180054A41: movups  xmm0, xmmword ptr [rax]
 * 0000000180054A44: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054A49: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054A4D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054A52: call    sub_1800455D0
 * 0000000180054A57: mov     r8, rax
 * 0000000180054A5A: mov     r9d, r12d
 * 0000000180054A5D: mov     edx, 182h
 * 0000000180054A62: lea     rcx, [rbp+9E20h+var_11E8]; Src
 * 0000000180054A69: call    sub_1800D44B8
 * 0000000180054A6E: nop
 * 0000000180054A6F: mov     r8, rax
 * 0000000180054A72: lea     rdx, aStandardshader_252; "StandardShader/ShaderModel40/"
 * 0000000180054A79: lea     rcx, [rbp+9E20h+var_1208]
 * 0000000180054A80: call    sub_1800453AC
 * 0000000180054A85: nop
 * 0000000180054A86: lea     r8, aVertex_109; "/Vertex"
 * 0000000180054A8D: mov     rdx, rax
 * 0000000180054A90: lea     rcx, [rbp+9E20h+var_1228]
 * 0000000180054A97: call    sub_18002BF78
 * 0000000180054A9C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054AA1: mov     rcx, rax
 * 0000000180054AA4: call    sub_1800D45A4
 * 0000000180054AA9: mov     cs:byte_18026982C, al
 * 0000000180054AAF: lea     rcx, [rbp+9E20h+var_1208]; void *
 * 0000000180054AB6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054ABB: nop
 * 0000000180054ABC: lea     rcx, [rbp+9E20h+var_11E8]; void *
 * 0000000180054AC3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054AC8: nop
 * 0000000180054AC9: lea     rcx, dword_180269830
 * 0000000180054AD0: call    _Init_thread_footer
 * 0000000180054AD5: mov     rax, [rdi+rbx*8]
 * 0000000180054AD9: mov     ecx, [r15+rax]
 * 0000000180054ADD: cmp     cs:dword_180269838, ecx
 * 0000000180054AE3: jle     loc_180054BD9
 * 0000000180054AE9: lea     rcx, dword_180269838
 * 0000000180054AF0: call    _Init_thread_header
 * 0000000180054AF5: cmp     cs:dword_180269838, r14d
 * 0000000180054AFC: jnz     loc_180054BD9
 * 0000000180054B02: mov     r8d, 1050h
 * 0000000180054B08: lea     rdx, unk_18019BC40
 * 0000000180054B0F: lea     rcx, [rbp+9E20h+var_7228]
 * 0000000180054B16: call    sub_1800455BC
 * 0000000180054B1B: movups  xmm0, xmmword ptr [rax]
 * 0000000180054B1E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054B24: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054B2A: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054B2E: mov     r9d, esi
 * 0000000180054B31: mov     r8d, esi
 * 0000000180054B34: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054B39: lea     rcx, [rbp+9E20h+var_3E8]
 * 0000000180054B40: call    sub_1800455A8
 * 0000000180054B45: movups  xmm0, xmmword ptr [rax]
 * 0000000180054B48: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054B4D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054B51: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054B56: call    sub_1800455D0
 * 0000000180054B5B: mov     r8, rax
 * 0000000180054B5E: mov     r9d, r12d
 * 0000000180054B61: mov     edx, 188h
 * 0000000180054B66: lea     rcx, [rbp+9E20h+var_1188]; Src
 * 0000000180054B6D: call    sub_1800D44B8
 * 0000000180054B72: nop
 * 0000000180054B73: mov     r8, rax
 * 0000000180054B76: lea     rdx, aStandardshader_253; "StandardShader/ShaderModel40/"
 * 0000000180054B7D: lea     rcx, [rbp+9E20h+var_11A8]
 * 0000000180054B84: call    sub_1800453AC
 * 0000000180054B89: nop
 * 0000000180054B8A: lea     r8, aVertex_110; "/Vertex"
 * 0000000180054B91: mov     rdx, rax
 * 0000000180054B94: lea     rcx, [rbp+9E20h+var_11C8]
 * 0000000180054B9B: call    sub_18002BF78
 * 0000000180054BA0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054BA5: mov     rcx, rax
 * 0000000180054BA8: call    sub_1800D45A4
 * 0000000180054BAD: mov     cs:byte_180269834, al
 * 0000000180054BB3: lea     rcx, [rbp+9E20h+var_11A8]; void *
 * 0000000180054BBA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054BBF: nop
 * 0000000180054BC0: lea     rcx, [rbp+9E20h+var_1188]; void *
 * 0000000180054BC7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054BCC: nop
 * 0000000180054BCD: lea     rcx, dword_180269838
 * 0000000180054BD4: call    _Init_thread_footer
 * 0000000180054BD9: mov     rax, [rdi+rbx*8]
 * 0000000180054BDD: mov     ecx, [r15+rax]
 * 0000000180054BE1: cmp     cs:dword_180269840, ecx
 * 0000000180054BE7: jle     loc_180054CDD
 * 0000000180054BED: lea     rcx, dword_180269840
 * 0000000180054BF4: call    _Init_thread_header
 * 0000000180054BF9: cmp     cs:dword_180269840, r14d
 * 0000000180054C00: jnz     loc_180054CDD
 * 0000000180054C06: mov     r8d, 1050h
 * 0000000180054C0C: lea     rdx, unk_18019BC40
 * 0000000180054C13: lea     rcx, [rbp+9E20h+var_7218]
 * 0000000180054C1A: call    sub_1800455BC
 * 0000000180054C1F: movups  xmm0, xmmword ptr [rax]
 * 0000000180054C22: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054C28: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054C2E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054C32: mov     r9d, esi
 * 0000000180054C35: mov     r8d, esi
 * 0000000180054C38: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054C3D: lea     rcx, [rbp+9E20h+var_3C8]
 * 0000000180054C44: call    sub_1800455A8
 * 0000000180054C49: movups  xmm0, xmmword ptr [rax]
 * 0000000180054C4C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054C51: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054C55: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054C5A: call    sub_1800455D0
 * 0000000180054C5F: mov     r8, rax
 * 0000000180054C62: mov     r9d, r12d
 * 0000000180054C65: mov     edx, 18Ah
 * 0000000180054C6A: lea     rcx, [rbp+9E20h+var_1128]; Src
 * 0000000180054C71: call    sub_1800D44B8
 * 0000000180054C76: nop
 * 0000000180054C77: mov     r8, rax
 * 0000000180054C7A: lea     rdx, aStandardshader_254; "StandardShader/ShaderModel40/"
 * 0000000180054C81: lea     rcx, [rbp+9E20h+var_1148]
 * 0000000180054C88: call    sub_1800453AC
 * 0000000180054C8D: nop
 * 0000000180054C8E: lea     r8, aVertex_111; "/Vertex"
 * 0000000180054C95: mov     rdx, rax
 * 0000000180054C98: lea     rcx, [rbp+9E20h+var_1168]
 * 0000000180054C9F: call    sub_18002BF78
 * 0000000180054CA4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054CA9: mov     rcx, rax
 * 0000000180054CAC: call    sub_1800D45A4
 * 0000000180054CB1: mov     cs:byte_18026983C, al
 * 0000000180054CB7: lea     rcx, [rbp+9E20h+var_1148]; void *
 * 0000000180054CBE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054CC3: nop
 * 0000000180054CC4: lea     rcx, [rbp+9E20h+var_1128]; void *
 * 0000000180054CCB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054CD0: nop
 * 0000000180054CD1: lea     rcx, dword_180269840
 * 0000000180054CD8: call    _Init_thread_footer
 * 0000000180054CDD: mov     rax, [rdi+rbx*8]
 * 0000000180054CE1: mov     ecx, [r15+rax]
 * 0000000180054CE5: cmp     cs:dword_180269848, ecx
 * 0000000180054CEB: jle     loc_180054DE1
 * 0000000180054CF1: lea     rcx, dword_180269848
 * 0000000180054CF8: call    _Init_thread_header
 * 0000000180054CFD: cmp     cs:dword_180269848, r14d
 * 0000000180054D04: jnz     loc_180054DE1
 * 0000000180054D0A: mov     r8d, 1050h
 * 0000000180054D10: lea     rdx, unk_18019BC40
 * 0000000180054D17: lea     rcx, [rbp+9E20h+var_7208]
 * 0000000180054D1E: call    sub_1800455BC
 * 0000000180054D23: movups  xmm0, xmmword ptr [rax]
 * 0000000180054D26: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054D2C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054D32: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054D36: mov     r9d, esi
 * 0000000180054D39: mov     r8d, esi
 * 0000000180054D3C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054D41: lea     rcx, [rbp+9E20h+var_3A8]
 * 0000000180054D48: call    sub_1800455A8
 * 0000000180054D4D: movups  xmm0, xmmword ptr [rax]
 * 0000000180054D50: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054D55: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054D59: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054D5E: call    sub_1800455D0
 * 0000000180054D63: mov     r8, rax
 * 0000000180054D66: mov     r9d, r12d
 * 0000000180054D69: mov     edx, 190h
 * 0000000180054D6E: lea     rcx, [rbp+9E20h+var_10C8]; Src
 * 0000000180054D75: call    sub_1800D44B8
 * 0000000180054D7A: nop
 * 0000000180054D7B: mov     r8, rax
 * 0000000180054D7E: lea     rdx, aStandardshader_255; "StandardShader/ShaderModel40/"
 * 0000000180054D85: lea     rcx, [rbp+9E20h+var_10E8]
 * 0000000180054D8C: call    sub_1800453AC
 * 0000000180054D91: nop
 * 0000000180054D92: lea     r8, aVertex_112; "/Vertex"
 * 0000000180054D99: mov     rdx, rax
 * 0000000180054D9C: lea     rcx, [rbp+9E20h+var_1108]
 * 0000000180054DA3: call    sub_18002BF78
 * 0000000180054DA8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054DAD: mov     rcx, rax
 * 0000000180054DB0: call    sub_1800D45A4
 * 0000000180054DB5: mov     cs:byte_180269844, al
 * 0000000180054DBB: lea     rcx, [rbp+9E20h+var_10E8]; void *
 * 0000000180054DC2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054DC7: nop
 * 0000000180054DC8: lea     rcx, [rbp+9E20h+var_10C8]; void *
 * 0000000180054DCF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054DD4: nop
 * 0000000180054DD5: lea     rcx, dword_180269848
 * 0000000180054DDC: call    _Init_thread_footer
 * 0000000180054DE1: mov     rax, [rdi+rbx*8]
 * 0000000180054DE5: mov     ecx, [r15+rax]
 * 0000000180054DE9: cmp     cs:dword_180269850, ecx
 * 0000000180054DEF: jle     loc_180054EE5
 * 0000000180054DF5: lea     rcx, dword_180269850
 * 0000000180054DFC: call    _Init_thread_header
 * 0000000180054E01: cmp     cs:dword_180269850, r14d
 * 0000000180054E08: jnz     loc_180054EE5
 * 0000000180054E0E: mov     r8d, 1050h
 * 0000000180054E14: lea     rdx, unk_18019BC40
 * 0000000180054E1B: lea     rcx, [rbp+9E20h+var_71F8]
 * 0000000180054E22: call    sub_1800455BC
 * 0000000180054E27: movups  xmm0, xmmword ptr [rax]
 * 0000000180054E2A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054E30: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054E36: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054E3A: mov     r9d, esi
 * 0000000180054E3D: mov     r8d, esi
 * 0000000180054E40: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054E45: lea     rcx, [rbp+9E20h+var_388]
 * 0000000180054E4C: call    sub_1800455A8
 * 0000000180054E51: movups  xmm0, xmmword ptr [rax]
 * 0000000180054E54: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054E59: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054E5D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054E62: call    sub_1800455D0
 * 0000000180054E67: mov     r8, rax
 * 0000000180054E6A: mov     r9d, r12d
 * 0000000180054E6D: mov     edx, 192h
 * 0000000180054E72: lea     rcx, [rbp+9E20h+var_1068]; Src
 * 0000000180054E79: call    sub_1800D44B8
 * 0000000180054E7E: nop
 * 0000000180054E7F: mov     r8, rax
 * 0000000180054E82: lea     rdx, aStandardshader_256; "StandardShader/ShaderModel40/"
 * 0000000180054E89: lea     rcx, [rbp+9E20h+var_1088]
 * 0000000180054E90: call    sub_1800453AC
 * 0000000180054E95: nop
 * 0000000180054E96: lea     r8, aVertex_113; "/Vertex"
 * 0000000180054E9D: mov     rdx, rax
 * 0000000180054EA0: lea     rcx, [rbp+9E20h+var_10A8]
 * 0000000180054EA7: call    sub_18002BF78
 * 0000000180054EAC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054EB1: mov     rcx, rax
 * 0000000180054EB4: call    sub_1800D45A4
 * 0000000180054EB9: mov     cs:byte_18026984C, al
 * 0000000180054EBF: lea     rcx, [rbp+9E20h+var_1088]; void *
 * 0000000180054EC6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054ECB: nop
 * 0000000180054ECC: lea     rcx, [rbp+9E20h+var_1068]; void *
 * 0000000180054ED3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054ED8: nop
 * 0000000180054ED9: lea     rcx, dword_180269850
 * 0000000180054EE0: call    _Init_thread_footer
 * 0000000180054EE5: mov     rax, [rdi+rbx*8]
 * 0000000180054EE9: mov     ecx, [r15+rax]
 * 0000000180054EED: cmp     cs:dword_180269858, ecx
 * 0000000180054EF3: jle     loc_180054FE9
 * 0000000180054EF9: lea     rcx, dword_180269858
 * 0000000180054F00: call    _Init_thread_header
 * 0000000180054F05: cmp     cs:dword_180269858, r14d
 * 0000000180054F0C: jnz     loc_180054FE9
 * 0000000180054F12: mov     r8d, 1050h
 * 0000000180054F18: lea     rdx, unk_18019BC40
 * 0000000180054F1F: lea     rcx, [rbp+9E20h+var_71E8]
 * 0000000180054F26: call    sub_1800455BC
 * 0000000180054F2B: movups  xmm0, xmmword ptr [rax]
 * 0000000180054F2E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054F34: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054F3A: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054F3E: mov     r9d, esi
 * 0000000180054F41: mov     r8d, esi
 * 0000000180054F44: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054F49: lea     rcx, [rbp+9E20h+var_368]
 * 0000000180054F50: call    sub_1800455A8
 * 0000000180054F55: movups  xmm0, xmmword ptr [rax]
 * 0000000180054F58: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054F5D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054F61: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054F66: call    sub_1800455D0
 * 0000000180054F6B: mov     r8, rax
 * 0000000180054F6E: mov     r9d, r12d
 * 0000000180054F71: mov     edx, 198h
 * 0000000180054F76: lea     rcx, [rbp+9E20h+var_1008]; Src
 * 0000000180054F7D: call    sub_1800D44B8
 * 0000000180054F82: nop
 * 0000000180054F83: mov     r8, rax
 * 0000000180054F86: lea     rdx, aStandardshader_257; "StandardShader/ShaderModel40/"
 * 0000000180054F8D: lea     rcx, [rbp+9E20h+var_1028]
 * 0000000180054F94: call    sub_1800453AC
 * 0000000180054F99: nop
 * 0000000180054F9A: lea     r8, aVertex_114; "/Vertex"
 * 0000000180054FA1: mov     rdx, rax
 * 0000000180054FA4: lea     rcx, [rbp+9E20h+var_1048]
 * 0000000180054FAB: call    sub_18002BF78
 * 0000000180054FB0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054FB5: mov     rcx, rax
 * 0000000180054FB8: call    sub_1800D45A4
 * 0000000180054FBD: mov     cs:byte_180269854, al
 * 0000000180054FC3: lea     rcx, [rbp+9E20h+var_1028]; void *
 * 0000000180054FCA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054FCF: nop
 * 0000000180054FD0: lea     rcx, [rbp+9E20h+var_1008]; void *
 * 0000000180054FD7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054FDC: nop
 * 0000000180054FDD: lea     rcx, dword_180269858
 * 0000000180054FE4: call    _Init_thread_footer
 * 0000000180054FE9: mov     rax, [rdi+rbx*8]
 * 0000000180054FED: mov     ecx, [r15+rax]
 * 0000000180054FF1: cmp     cs:dword_180269860, ecx
 * 0000000180054FF7: jle     loc_1800550ED
 * 0000000180054FFD: lea     rcx, dword_180269860
 * 0000000180055004: call    _Init_thread_header
 * 0000000180055009: cmp     cs:dword_180269860, r14d
 * 0000000180055010: jnz     loc_1800550ED
 * 0000000180055016: mov     r8d, 1050h
 * 000000018005501C: lea     rdx, unk_18019BC40
 * 0000000180055023: lea     rcx, [rbp+9E20h+var_71D8]
 * 000000018005502A: call    sub_1800455BC
 * 000000018005502F: movups  xmm0, xmmword ptr [rax]
 * 0000000180055032: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055038: mov     al, [rbp+9E20h+arg_0]
 * 000000018005503E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055042: mov     r9d, esi
 * 0000000180055045: mov     r8d, esi
 * 0000000180055048: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005504D: lea     rcx, [rbp+9E20h+var_348]
 * 0000000180055054: call    sub_1800455A8
 * 0000000180055059: movups  xmm0, xmmword ptr [rax]
 * 000000018005505C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055061: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055065: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005506A: call    sub_1800455D0
 * 000000018005506F: mov     r8, rax
 * 0000000180055072: mov     r9d, r12d
 * 0000000180055075: mov     edx, 19Ah
 * 000000018005507A: lea     rcx, [rbp+9E20h+var_FA8]; Src
 * 0000000180055081: call    sub_1800D44B8
 * 0000000180055086: nop
 * 0000000180055087: mov     r8, rax
 * 000000018005508A: lea     rdx, aStandardshader_258; "StandardShader/ShaderModel40/"
 * 0000000180055091: lea     rcx, [rbp+9E20h+var_FC8]
 * 0000000180055098: call    sub_1800453AC
 * 000000018005509D: nop
 * 000000018005509E: lea     r8, aVertex_115; "/Vertex"
 * 00000001800550A5: mov     rdx, rax
 * 00000001800550A8: lea     rcx, [rbp+9E20h+var_FE8]
 * 00000001800550AF: call    sub_18002BF78
 * 00000001800550B4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800550B9: mov     rcx, rax
 * 00000001800550BC: call    sub_1800D45A4
 * 00000001800550C1: mov     cs:byte_18026985C, al
 * 00000001800550C7: lea     rcx, [rbp+9E20h+var_FC8]; void *
 * 00000001800550CE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800550D3: nop
 * 00000001800550D4: lea     rcx, [rbp+9E20h+var_FA8]; void *
 * 00000001800550DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800550E0: nop
 * 00000001800550E1: lea     rcx, dword_180269860
 * 00000001800550E8: call    _Init_thread_footer
 * 00000001800550ED: mov     rax, [rdi+rbx*8]
 * 00000001800550F1: mov     ecx, [r15+rax]
 * 00000001800550F5: cmp     cs:dword_180269868, ecx
 * 00000001800550FB: jle     loc_1800551EE
 * 0000000180055101: lea     rcx, dword_180269868
 * 0000000180055108: call    _Init_thread_header
 * 000000018005510D: cmp     cs:dword_180269868, r14d
 * 0000000180055114: jnz     loc_1800551EE
 * 000000018005511A: mov     r8d, r13d
 * 000000018005511D: lea     rdx, unk_18019CC90
 * 0000000180055124: lea     rcx, [rbp+9E20h+var_71C8]
 * 000000018005512B: call    sub_1800455BC
 * 0000000180055130: movups  xmm0, xmmword ptr [rax]
 * 0000000180055133: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055139: mov     al, [rbp+9E20h+arg_0]
 * 000000018005513F: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055143: mov     r9d, esi
 * 0000000180055146: mov     r8d, esi
 * 0000000180055149: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005514E: lea     rcx, [rbp+9E20h+var_328]
 * 0000000180055155: call    sub_1800455A8
 * 000000018005515A: movups  xmm0, xmmword ptr [rax]
 * 000000018005515D: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055162: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055166: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005516B: call    sub_1800455D0
 * 0000000180055170: mov     r8, rax
 * 0000000180055173: mov     r9d, r12d
 * 0000000180055176: mov     edx, 1A0h
 * 000000018005517B: lea     rcx, [rbp+9E20h+var_F48]; Src
 * 0000000180055182: call    sub_1800D44B8
 * 0000000180055187: nop
 * 0000000180055188: mov     r8, rax
 * 000000018005518B: lea     rdx, aStandardshader_259; "StandardShader/ShaderModel40/"
 * 0000000180055192: lea     rcx, [rbp+9E20h+var_F68]
 * 0000000180055199: call    sub_1800453AC
 * 000000018005519E: nop
 * 000000018005519F: lea     r8, aVertex_116; "/Vertex"
 * 00000001800551A6: mov     rdx, rax
 * 00000001800551A9: lea     rcx, [rbp+9E20h+var_F88]
 * 00000001800551B0: call    sub_18002BF78
 * 00000001800551B5: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800551BA: mov     rcx, rax
 * 00000001800551BD: call    sub_1800D45A4
 * 00000001800551C2: mov     cs:byte_180269864, al
 * 00000001800551C8: lea     rcx, [rbp+9E20h+var_F68]; void *
 * 00000001800551CF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800551D4: nop
 * 00000001800551D5: lea     rcx, [rbp+9E20h+var_F48]; void *
 * 00000001800551DC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800551E1: nop
 * 00000001800551E2: lea     rcx, dword_180269868
 * 00000001800551E9: call    _Init_thread_footer
 * 00000001800551EE: mov     rax, [rdi+rbx*8]
 * 00000001800551F2: mov     ecx, [r15+rax]
 * 00000001800551F6: cmp     cs:dword_180269870, ecx
 * 00000001800551FC: jle     loc_1800552EF
 * 0000000180055202: lea     rcx, dword_180269870
 * 0000000180055209: call    _Init_thread_header
 * 000000018005520E: cmp     cs:dword_180269870, r14d
 * 0000000180055215: jnz     loc_1800552EF
 * 000000018005521B: mov     r8d, r13d
 * 000000018005521E: lea     rdx, unk_18019CC90
 * 0000000180055225: lea     rcx, [rbp+9E20h+var_71B8]
 * 000000018005522C: call    sub_1800455BC
 * 0000000180055231: movups  xmm0, xmmword ptr [rax]
 * 0000000180055234: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005523A: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055240: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055244: mov     r9d, esi
 * 0000000180055247: mov     r8d, esi
 * 000000018005524A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005524F: lea     rcx, [rbp+9E20h+var_308]
 * 0000000180055256: call    sub_1800455A8
 * 000000018005525B: movups  xmm0, xmmword ptr [rax]
 * 000000018005525E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055263: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055267: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005526C: call    sub_1800455D0
 * 0000000180055271: mov     r8, rax
 * 0000000180055274: mov     r9d, r12d
 * 0000000180055277: mov     edx, 1A2h
 * 000000018005527C: lea     rcx, [rbp+9E20h+var_EE8]; Src
 * 0000000180055283: call    sub_1800D44B8
 * 0000000180055288: nop
 * 0000000180055289: mov     r8, rax
 * 000000018005528C: lea     rdx, aStandardshader_260; "StandardShader/ShaderModel40/"
 * 0000000180055293: lea     rcx, [rbp+9E20h+var_F08]
 * 000000018005529A: call    sub_1800453AC
 * 000000018005529F: nop
 * 00000001800552A0: lea     r8, aVertex_117; "/Vertex"
 * 00000001800552A7: mov     rdx, rax
 * 00000001800552AA: lea     rcx, [rbp+9E20h+var_F28]
 * 00000001800552B1: call    sub_18002BF78
 * 00000001800552B6: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800552BB: mov     rcx, rax
 * 00000001800552BE: call    sub_1800D45A4
 * 00000001800552C3: mov     cs:byte_18026986C, al
 * 00000001800552C9: lea     rcx, [rbp+9E20h+var_F08]; void *
 * 00000001800552D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800552D5: nop
 * 00000001800552D6: lea     rcx, [rbp+9E20h+var_EE8]; void *
 * 00000001800552DD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800552E2: nop
 * 00000001800552E3: lea     rcx, dword_180269870
 * 00000001800552EA: call    _Init_thread_footer
 * 00000001800552EF: mov     rax, [rdi+rbx*8]
 * 00000001800552F3: mov     ecx, [r15+rax]
 * 00000001800552F7: cmp     cs:dword_180269878, ecx
 * 00000001800552FD: jle     loc_1800553F0
 * 0000000180055303: lea     rcx, dword_180269878
 * 000000018005530A: call    _Init_thread_header
 * 000000018005530F: cmp     cs:dword_180269878, r14d
 * 0000000180055316: jnz     loc_1800553F0
 * 000000018005531C: mov     r8d, r13d
 * 000000018005531F: lea     rdx, unk_18019CC90
 * 0000000180055326: lea     rcx, [rbp+9E20h+var_71A8]
 * 000000018005532D: call    sub_1800455BC
 * 0000000180055332: movups  xmm0, xmmword ptr [rax]
 * 0000000180055335: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005533B: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055341: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055345: mov     r9d, esi
 * 0000000180055348: mov     r8d, esi
 * 000000018005534B: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055350: lea     rcx, [rbp+9E20h+var_2E8]
 * 0000000180055357: call    sub_1800455A8
 * 000000018005535C: movups  xmm0, xmmword ptr [rax]
 * 000000018005535F: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055364: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055368: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005536D: call    sub_1800455D0
 * 0000000180055372: mov     r8, rax
 * 0000000180055375: mov     r9d, r12d
 * 0000000180055378: mov     edx, 1A8h
 * 000000018005537D: lea     rcx, [rbp+9E20h+var_E88]; Src
 * 0000000180055384: call    sub_1800D44B8
 * 0000000180055389: nop
 * 000000018005538A: mov     r8, rax
 * 000000018005538D: lea     rdx, aStandardshader_261; "StandardShader/ShaderModel40/"
 * 0000000180055394: lea     rcx, [rbp+9E20h+var_EA8]
 * 000000018005539B: call    sub_1800453AC
 * 00000001800553A0: nop
 * 00000001800553A1: lea     r8, aVertex_118; "/Vertex"
 * 00000001800553A8: mov     rdx, rax
 * 00000001800553AB: lea     rcx, [rbp+9E20h+var_EC8]
 * 00000001800553B2: call    sub_18002BF78
 * 00000001800553B7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800553BC: mov     rcx, rax
 * 00000001800553BF: call    sub_1800D45A4
 * 00000001800553C4: mov     cs:byte_180269874, al
 * 00000001800553CA: lea     rcx, [rbp+9E20h+var_EA8]; void *
 * 00000001800553D1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800553D6: nop
 * 00000001800553D7: lea     rcx, [rbp+9E20h+var_E88]; void *
 * 00000001800553DE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800553E3: nop
 * 00000001800553E4: lea     rcx, dword_180269878
 * 00000001800553EB: call    _Init_thread_footer
 * 00000001800553F0: mov     rax, [rdi+rbx*8]
 * 00000001800553F4: mov     ecx, [r15+rax]
 * 00000001800553F8: cmp     cs:dword_180269880, ecx
 * 00000001800553FE: jle     loc_1800554F1
 * 0000000180055404: lea     rcx, dword_180269880
 * 000000018005540B: call    _Init_thread_header
 * 0000000180055410: cmp     cs:dword_180269880, r14d
 * 0000000180055417: jnz     loc_1800554F1
 * 000000018005541D: mov     r8d, r13d
 * 0000000180055420: lea     rdx, unk_18019CC90
 * 0000000180055427: lea     rcx, [rbp+9E20h+var_7198]
 * 000000018005542E: call    sub_1800455BC
 * 0000000180055433: movups  xmm0, xmmword ptr [rax]
 * 0000000180055436: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005543C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055442: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055446: mov     r9d, esi
 * 0000000180055449: mov     r8d, esi
 * 000000018005544C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055451: lea     rcx, [rbp+9E20h+var_2C8]
 * 0000000180055458: call    sub_1800455A8
 * 000000018005545D: movups  xmm0, xmmword ptr [rax]
 * 0000000180055460: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055465: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055469: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005546E: call    sub_1800455D0
 * 0000000180055473: mov     r8, rax
 * 0000000180055476: mov     r9d, r12d
 * 0000000180055479: mov     edx, 1AAh
 * 000000018005547E: lea     rcx, [rbp+9E20h+var_E28]; Src
 * 0000000180055485: call    sub_1800D44B8
 * 000000018005548A: nop
 * 000000018005548B: mov     r8, rax
 * 000000018005548E: lea     rdx, aStandardshader_262; "StandardShader/ShaderModel40/"
 * 0000000180055495: lea     rcx, [rbp+9E20h+var_E48]
 * 000000018005549C: call    sub_1800453AC
 * 00000001800554A1: nop
 * 00000001800554A2: lea     r8, aVertex_119; "/Vertex"
 * 00000001800554A9: mov     rdx, rax
 * 00000001800554AC: lea     rcx, [rbp+9E20h+var_E68]
 * 00000001800554B3: call    sub_18002BF78
 * 00000001800554B8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800554BD: mov     rcx, rax
 * 00000001800554C0: call    sub_1800D45A4
 * 00000001800554C5: mov     cs:byte_18026987C, al
 * 00000001800554CB: lea     rcx, [rbp+9E20h+var_E48]; void *
 * 00000001800554D2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800554D7: nop
 * 00000001800554D8: lea     rcx, [rbp+9E20h+var_E28]; void *
 * 00000001800554DF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800554E4: nop
 * 00000001800554E5: lea     rcx, dword_180269880
 * 00000001800554EC: call    _Init_thread_footer
 * 00000001800554F1: mov     rax, [rdi+rbx*8]
 * 00000001800554F5: mov     ecx, [r15+rax]
 * 00000001800554F9: cmp     cs:dword_180269888, ecx
 * 00000001800554FF: jle     loc_1800555F2
 * 0000000180055505: lea     rcx, dword_180269888
 * 000000018005550C: call    _Init_thread_header
 * 0000000180055511: cmp     cs:dword_180269888, r14d
 * 0000000180055518: jnz     loc_1800555F2
 * 000000018005551E: mov     r8d, r13d
 * 0000000180055521: lea     rdx, unk_18019CC90
 * 0000000180055528: lea     rcx, [rbp+9E20h+var_7188]
 * 000000018005552F: call    sub_1800455BC
 * 0000000180055534: movups  xmm0, xmmword ptr [rax]
 * 0000000180055537: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005553D: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055543: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055547: mov     r9d, esi
 * 000000018005554A: mov     r8d, esi
 * 000000018005554D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055552: lea     rcx, [rbp+9E20h+var_2A8]
 * 0000000180055559: call    sub_1800455A8
 * 000000018005555E: movups  xmm0, xmmword ptr [rax]
 * 0000000180055561: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055566: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005556A: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005556F: call    sub_1800455D0
 * 0000000180055574: mov     r8, rax
 * 0000000180055577: mov     r9d, r12d
 * 000000018005557A: mov     edx, 1B0h
 * 000000018005557F: lea     rcx, [rbp+9E20h+var_DC8]; Src
 * 0000000180055586: call    sub_1800D44B8
 * 000000018005558B: nop
 * 000000018005558C: mov     r8, rax
 * 000000018005558F: lea     rdx, aStandardshader_263; "StandardShader/ShaderModel40/"
 * 0000000180055596: lea     rcx, [rbp+9E20h+var_DE8]
 * 000000018005559D: call    sub_1800453AC
 * 00000001800555A2: nop
 * 00000001800555A3: lea     r8, aVertex_120; "/Vertex"
 * 00000001800555AA: mov     rdx, rax
 * 00000001800555AD: lea     rcx, [rbp+9E20h+var_E08]
 * 00000001800555B4: call    sub_18002BF78
 * 00000001800555B9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800555BE: mov     rcx, rax
 * 00000001800555C1: call    sub_1800D45A4
 * 00000001800555C6: mov     cs:byte_180269884, al
 * 00000001800555CC: lea     rcx, [rbp+9E20h+var_DE8]; void *
 * 00000001800555D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800555D8: nop
 * 00000001800555D9: lea     rcx, [rbp+9E20h+var_DC8]; void *
 * 00000001800555E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800555E5: nop
 * 00000001800555E6: lea     rcx, dword_180269888
 * 00000001800555ED: call    _Init_thread_footer
 * 00000001800555F2: mov     rax, [rdi+rbx*8]
 * 00000001800555F6: mov     ecx, [r15+rax]
 * 00000001800555FA: cmp     cs:dword_180269890, ecx
 * 0000000180055600: jle     loc_1800556F3
 * 0000000180055606: lea     rcx, dword_180269890
 * 000000018005560D: call    _Init_thread_header
 * 0000000180055612: cmp     cs:dword_180269890, r14d
 * 0000000180055619: jnz     loc_1800556F3
 * 000000018005561F: mov     r8d, r13d
 * 0000000180055622: lea     rdx, unk_18019CC90
 * 0000000180055629: lea     rcx, [rbp+9E20h+var_7178]
 * 0000000180055630: call    sub_1800455BC
 * 0000000180055635: movups  xmm0, xmmword ptr [rax]
 * 0000000180055638: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005563E: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055644: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055648: mov     r9d, esi
 * 000000018005564B: mov     r8d, esi
 * 000000018005564E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055653: lea     rcx, [rbp+9E20h+var_288]
 * 000000018005565A: call    sub_1800455A8
 * 000000018005565F: movups  xmm0, xmmword ptr [rax]
 * 0000000180055662: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055667: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005566B: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055670: call    sub_1800455D0
 * 0000000180055675: mov     r8, rax
 * 0000000180055678: mov     r9d, r12d
 * 000000018005567B: mov     edx, 1B2h
 * 0000000180055680: lea     rcx, [rbp+9E20h+var_D68]; Src
 * 0000000180055687: call    sub_1800D44B8
 * 000000018005568C: nop
 * 000000018005568D: mov     r8, rax
 * 0000000180055690: lea     rdx, aStandardshader_264; "StandardShader/ShaderModel40/"
 * 0000000180055697: lea     rcx, [rbp+9E20h+var_D88]
 * 000000018005569E: call    sub_1800453AC
 * 00000001800556A3: nop
 * 00000001800556A4: lea     r8, aVertex_121; "/Vertex"
 * 00000001800556AB: mov     rdx, rax
 * 00000001800556AE: lea     rcx, [rbp+9E20h+var_DA8]
 * 00000001800556B5: call    sub_18002BF78
 * 00000001800556BA: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800556BF: mov     rcx, rax
 * 00000001800556C2: call    sub_1800D45A4
 * 00000001800556C7: mov     cs:byte_18026988C, al
 * 00000001800556CD: lea     rcx, [rbp+9E20h+var_D88]; void *
 * 00000001800556D4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800556D9: nop
 * 00000001800556DA: lea     rcx, [rbp+9E20h+var_D68]; void *
 * 00000001800556E1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800556E6: nop
 * 00000001800556E7: lea     rcx, dword_180269890
 * 00000001800556EE: call    _Init_thread_footer
 * 00000001800556F3: mov     rax, [rdi+rbx*8]
 * 00000001800556F7: mov     ecx, [r15+rax]
 * 00000001800556FB: cmp     cs:dword_180269898, ecx
 * 0000000180055701: jle     loc_1800557F4
 * 0000000180055707: lea     rcx, dword_180269898
 * 000000018005570E: call    _Init_thread_header
 * 0000000180055713: cmp     cs:dword_180269898, r14d
 * 000000018005571A: jnz     loc_1800557F4
 * 0000000180055720: mov     r8d, r13d
 * 0000000180055723: lea     rdx, unk_18019CC90
 * 000000018005572A: lea     rcx, [rbp+9E20h+var_7168]
 * 0000000180055731: call    sub_1800455BC
 * 0000000180055736: movups  xmm0, xmmword ptr [rax]
 * 0000000180055739: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005573F: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055745: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055749: mov     r9d, esi
 * 000000018005574C: mov     r8d, esi
 * 000000018005574F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055754: lea     rcx, [rbp+9E20h+var_268]
 * 000000018005575B: call    sub_1800455A8
 * 0000000180055760: movups  xmm0, xmmword ptr [rax]
 * 0000000180055763: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055768: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005576C: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055771: call    sub_1800455D0
 * 0000000180055776: mov     r8, rax
 * 0000000180055779: mov     r9d, r12d
 * 000000018005577C: mov     edx, 1B8h
 * 0000000180055781: lea     rcx, [rbp+9E20h+var_D08]; Src
 * 0000000180055788: call    sub_1800D44B8
 * 000000018005578D: nop
 * 000000018005578E: mov     r8, rax
 * 0000000180055791: lea     rdx, aStandardshader_265; "StandardShader/ShaderModel40/"
 * 0000000180055798: lea     rcx, [rbp+9E20h+var_D28]
 * 000000018005579F: call    sub_1800453AC
 * 00000001800557A4: nop
 * 00000001800557A5: lea     r8, aVertex_122; "/Vertex"
 * 00000001800557AC: mov     rdx, rax
 * 00000001800557AF: lea     rcx, [rbp+9E20h+var_D48]
 * 00000001800557B6: call    sub_18002BF78
 * 00000001800557BB: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800557C0: mov     rcx, rax
 * 00000001800557C3: call    sub_1800D45A4
 * 00000001800557C8: mov     cs:byte_180269894, al
 * 00000001800557CE: lea     rcx, [rbp+9E20h+var_D28]; void *
 * 00000001800557D5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800557DA: nop
 * 00000001800557DB: lea     rcx, [rbp+9E20h+var_D08]; void *
 * 00000001800557E2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800557E7: nop
 * 00000001800557E8: lea     rcx, dword_180269898
 * 00000001800557EF: call    _Init_thread_footer
 * 00000001800557F4: mov     rax, [rdi+rbx*8]
 * 00000001800557F8: mov     ecx, [r15+rax]
 * 00000001800557FC: cmp     cs:dword_1802698A0, ecx
 * 0000000180055802: jle     loc_1800558F5
 * 0000000180055808: lea     rcx, dword_1802698A0
 * 000000018005580F: call    _Init_thread_header
 * 0000000180055814: cmp     cs:dword_1802698A0, r14d
 * 000000018005581B: jnz     loc_1800558F5
 * 0000000180055821: mov     r8d, r13d
 * 0000000180055824: lea     rdx, unk_18019CC90
 * 000000018005582B: lea     rcx, [rbp+9E20h+var_7158]
 * 0000000180055832: call    sub_1800455BC
 * 0000000180055837: movups  xmm0, xmmword ptr [rax]
 * 000000018005583A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055840: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055846: mov     [rsp+9F20h+var_9F00], al
 * 000000018005584A: mov     r9d, esi
 * 000000018005584D: mov     r8d, esi
 * 0000000180055850: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055855: lea     rcx, [rbp+9E20h+var_248]
 * 000000018005585C: call    sub_1800455A8
 * 0000000180055861: movups  xmm0, xmmword ptr [rax]
 * 0000000180055864: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055869: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005586D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055872: call    sub_1800455D0
 * 0000000180055877: mov     r8, rax
 * 000000018005587A: mov     r9d, r12d
 * 000000018005587D: mov     edx, 1BAh
 * 0000000180055882: lea     rcx, [rbp+9E20h+var_CA8]; Src
 * 0000000180055889: call    sub_1800D44B8
 * 000000018005588E: nop
 * 000000018005588F: mov     r8, rax
 * 0000000180055892: lea     rdx, aStandardshader_266; "StandardShader/ShaderModel40/"
 * 0000000180055899: lea     rcx, [rbp+9E20h+var_CC8]
 * 00000001800558A0: call    sub_1800453AC
 * 00000001800558A5: nop
 * 00000001800558A6: lea     r8, aVertex_123; "/Vertex"
 * 00000001800558AD: mov     rdx, rax
 * 00000001800558B0: lea     rcx, [rbp+9E20h+var_CE8]
 * 00000001800558B7: call    sub_18002BF78
 * 00000001800558BC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800558C1: mov     rcx, rax
 * 00000001800558C4: call    sub_1800D45A4
 * 00000001800558C9: mov     cs:byte_18026989C, al
 * 00000001800558CF: lea     rcx, [rbp+9E20h+var_CC8]; void *
 * 00000001800558D6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800558DB: nop
 * 00000001800558DC: lea     rcx, [rbp+9E20h+var_CA8]; void *
 * 00000001800558E3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800558E8: nop
 * 00000001800558E9: lea     rcx, dword_1802698A0
 * 00000001800558F0: call    _Init_thread_footer
 * 00000001800558F5: mov     rax, [rdi+rbx*8]
 * 00000001800558F9: mov     ecx, [r15+rax]
 * 00000001800558FD: cmp     cs:dword_1802698A8, ecx
 * 0000000180055903: jle     loc_1800559F9
 * 0000000180055909: lea     rcx, dword_1802698A8
 * 0000000180055910: call    _Init_thread_header
 * 0000000180055915: cmp     cs:dword_1802698A8, r14d
 * 000000018005591C: jnz     loc_1800559F9
 * 0000000180055922: mov     r8d, 1050h
 * 0000000180055928: lea     rdx, unk_18019BC40
 * 000000018005592F: lea     rcx, [rbp+9E20h+var_7148]
 * 0000000180055936: call    sub_1800455BC
 * 000000018005593B: movups  xmm0, xmmword ptr [rax]
 * 000000018005593E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055944: mov     al, [rbp+9E20h+arg_0]
 * 000000018005594A: mov     [rsp+9F20h+var_9F00], al
 * 000000018005594E: mov     r9d, esi
 * 0000000180055951: mov     r8d, esi
 * 0000000180055954: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055959: lea     rcx, [rbp+9E20h+var_228]
 * 0000000180055960: call    sub_1800455A8
 * 0000000180055965: movups  xmm0, xmmword ptr [rax]
 * 0000000180055968: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005596D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055971: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055976: call    sub_1800455D0
 * 000000018005597B: mov     r8, rax
 * 000000018005597E: mov     r9d, r12d
 * 0000000180055981: mov     edx, 1C0h
 * 0000000180055986: lea     rcx, [rbp+9E20h+var_C48]; Src
 * 000000018005598D: call    sub_1800D44B8
 * 0000000180055992: nop
 * 0000000180055993: mov     r8, rax
 * 0000000180055996: lea     rdx, aStandardshader_267; "StandardShader/ShaderModel40/"
 * 000000018005599D: lea     rcx, [rbp+9E20h+var_C68]
 * 00000001800559A4: call    sub_1800453AC
 * 00000001800559A9: nop
 * 00000001800559AA: lea     r8, aVertex_124; "/Vertex"
 * 00000001800559B1: mov     rdx, rax
 * 00000001800559B4: lea     rcx, [rbp+9E20h+var_C88]
 * 00000001800559BB: call    sub_18002BF78
 * 00000001800559C0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800559C5: mov     rcx, rax
 * 00000001800559C8: call    sub_1800D45A4
 * 00000001800559CD: mov     cs:byte_1802698A4, al
 * 00000001800559D3: lea     rcx, [rbp+9E20h+var_C68]; void *
 * 00000001800559DA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800559DF: nop
 * 00000001800559E0: lea     rcx, [rbp+9E20h+var_C48]; void *
 * 00000001800559E7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800559EC: nop
 * 00000001800559ED: lea     rcx, dword_1802698A8
 * 00000001800559F4: call    _Init_thread_footer
 * 00000001800559F9: mov     rax, [rdi+rbx*8]
 * 00000001800559FD: mov     ecx, [r15+rax]
 * 0000000180055A01: cmp     cs:dword_1802698B0, ecx
 * 0000000180055A07: jle     loc_180055AFD
 * 0000000180055A0D: lea     rcx, dword_1802698B0
 * 0000000180055A14: call    _Init_thread_header
 * 0000000180055A19: cmp     cs:dword_1802698B0, r14d
 * 0000000180055A20: jnz     loc_180055AFD
 * 0000000180055A26: mov     r8d, 1050h
 * 0000000180055A2C: lea     rdx, unk_18019BC40
 * 0000000180055A33: lea     rcx, [rbp+9E20h+var_7138]
 * 0000000180055A3A: call    sub_1800455BC
 * 0000000180055A3F: movups  xmm0, xmmword ptr [rax]
 * 0000000180055A42: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055A48: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055A4E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055A52: mov     r9d, esi
 * 0000000180055A55: mov     r8d, esi
 * 0000000180055A58: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055A5D: lea     rcx, [rbp+9E20h+var_208]
 * 0000000180055A64: call    sub_1800455A8
 * 0000000180055A69: movups  xmm0, xmmword ptr [rax]
 * 0000000180055A6C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055A71: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055A75: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055A7A: call    sub_1800455D0
 * 0000000180055A7F: mov     r8, rax
 * 0000000180055A82: mov     r9d, r12d
 * 0000000180055A85: mov     edx, 1C2h
 * 0000000180055A8A: lea     rcx, [rbp+9E20h+var_BE8]; Src
 * 0000000180055A91: call    sub_1800D44B8
 * 0000000180055A96: nop
 * 0000000180055A97: mov     r8, rax
 * 0000000180055A9A: lea     rdx, aStandardshader_268; "StandardShader/ShaderModel40/"
 * 0000000180055AA1: lea     rcx, [rbp+9E20h+var_C08]
 * 0000000180055AA8: call    sub_1800453AC
 * 0000000180055AAD: nop
 * 0000000180055AAE: lea     r8, aVertex_125; "/Vertex"
 * 0000000180055AB5: mov     rdx, rax
 * 0000000180055AB8: lea     rcx, [rbp+9E20h+var_C28]
 * 0000000180055ABF: call    sub_18002BF78
 * 0000000180055AC4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055AC9: mov     rcx, rax
 * 0000000180055ACC: call    sub_1800D45A4
 * 0000000180055AD1: mov     cs:byte_1802698AC, al
 * 0000000180055AD7: lea     rcx, [rbp+9E20h+var_C08]; void *
 * 0000000180055ADE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055AE3: nop
 * 0000000180055AE4: lea     rcx, [rbp+9E20h+var_BE8]; void *
 * 0000000180055AEB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055AF0: nop
 * 0000000180055AF1: lea     rcx, dword_1802698B0
 * 0000000180055AF8: call    _Init_thread_footer
 * 0000000180055AFD: mov     rax, [rdi+rbx*8]
 * 0000000180055B01: mov     ecx, [r15+rax]
 * 0000000180055B05: cmp     cs:dword_1802698B8, ecx
 * 0000000180055B0B: jle     loc_180055C01
 * 0000000180055B11: lea     rcx, dword_1802698B8
 * 0000000180055B18: call    _Init_thread_header
 * 0000000180055B1D: cmp     cs:dword_1802698B8, r14d
 * 0000000180055B24: jnz     loc_180055C01
 * 0000000180055B2A: mov     r8d, 1050h
 * 0000000180055B30: lea     rdx, unk_18019BC40
 * 0000000180055B37: lea     rcx, [rbp+9E20h+var_7128]
 * 0000000180055B3E: call    sub_1800455BC
 * 0000000180055B43: movups  xmm0, xmmword ptr [rax]
 * 0000000180055B46: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055B4C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055B52: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055B56: mov     r9d, esi
 * 0000000180055B59: mov     r8d, esi
 * 0000000180055B5C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055B61: lea     rcx, [rbp+9E20h+var_1E8]
 * 0000000180055B68: call    sub_1800455A8
 * 0000000180055B6D: movups  xmm0, xmmword ptr [rax]
 * 0000000180055B70: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055B75: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055B79: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055B7E: call    sub_1800455D0
 * 0000000180055B83: mov     r8, rax
 * 0000000180055B86: mov     r9d, r12d
 * 0000000180055B89: mov     edx, 1C8h
 * 0000000180055B8E: lea     rcx, [rbp+9E20h+var_B88]; Src
 * 0000000180055B95: call    sub_1800D44B8
 * 0000000180055B9A: nop
 * 0000000180055B9B: mov     r8, rax
 * 0000000180055B9E: lea     rdx, aStandardshader_269; "StandardShader/ShaderModel40/"
 * 0000000180055BA5: lea     rcx, [rbp+9E20h+var_BA8]
 * 0000000180055BAC: call    sub_1800453AC
 * 0000000180055BB1: nop
 * 0000000180055BB2: lea     r8, aVertex_126; "/Vertex"
 * 0000000180055BB9: mov     rdx, rax
 * 0000000180055BBC: lea     rcx, [rbp+9E20h+var_BC8]
 * 0000000180055BC3: call    sub_18002BF78
 * 0000000180055BC8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055BCD: mov     rcx, rax
 * 0000000180055BD0: call    sub_1800D45A4
 * 0000000180055BD5: mov     cs:byte_1802698B4, al
 * 0000000180055BDB: lea     rcx, [rbp+9E20h+var_BA8]; void *
 * 0000000180055BE2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055BE7: nop
 * 0000000180055BE8: lea     rcx, [rbp+9E20h+var_B88]; void *
 * 0000000180055BEF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055BF4: nop
 * 0000000180055BF5: lea     rcx, dword_1802698B8
 * 0000000180055BFC: call    _Init_thread_footer
 * 0000000180055C01: mov     rax, [rdi+rbx*8]
 * 0000000180055C05: mov     ecx, [r15+rax]
 * 0000000180055C09: cmp     cs:dword_1802698C0, ecx
 * 0000000180055C0F: jle     loc_180055D05
 * 0000000180055C15: lea     rcx, dword_1802698C0
 * 0000000180055C1C: call    _Init_thread_header
 * 0000000180055C21: cmp     cs:dword_1802698C0, r14d
 * 0000000180055C28: jnz     loc_180055D05
 * 0000000180055C2E: mov     r8d, 1050h
 * 0000000180055C34: lea     rdx, unk_18019BC40
 * 0000000180055C3B: lea     rcx, [rbp+9E20h+var_7118]
 * 0000000180055C42: call    sub_1800455BC
 * 0000000180055C47: movups  xmm0, xmmword ptr [rax]
 * 0000000180055C4A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055C50: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055C56: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055C5A: mov     r9d, esi
 * 0000000180055C5D: mov     r8d, esi
 * 0000000180055C60: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055C65: lea     rcx, [rbp+9E20h+var_1C8]
 * 0000000180055C6C: call    sub_1800455A8
 * 0000000180055C71: movups  xmm0, xmmword ptr [rax]
 * 0000000180055C74: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055C79: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055C7D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055C82: call    sub_1800455D0
 * 0000000180055C87: mov     r8, rax
 * 0000000180055C8A: mov     r9d, r12d
 * 0000000180055C8D: mov     edx, 1CAh
 * 0000000180055C92: lea     rcx, [rbp+9E20h+var_B28]; Src
 * 0000000180055C99: call    sub_1800D44B8
 * 0000000180055C9E: nop
 * 0000000180055C9F: mov     r8, rax
 * 0000000180055CA2: lea     rdx, aStandardshader_270; "StandardShader/ShaderModel40/"
 * 0000000180055CA9: lea     rcx, [rbp+9E20h+var_B48]
 * 0000000180055CB0: call    sub_1800453AC
 * 0000000180055CB5: nop
 * 0000000180055CB6: lea     r8, aVertex_127; "/Vertex"
 * 0000000180055CBD: mov     rdx, rax
 * 0000000180055CC0: lea     rcx, [rbp+9E20h+var_B68]
 * 0000000180055CC7: call    sub_18002BF78
 * 0000000180055CCC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055CD1: mov     rcx, rax
 * 0000000180055CD4: call    sub_1800D45A4
 * 0000000180055CD9: mov     cs:byte_1802698BC, al
 * 0000000180055CDF: lea     rcx, [rbp+9E20h+var_B48]; void *
 * 0000000180055CE6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055CEB: nop
 * 0000000180055CEC: lea     rcx, [rbp+9E20h+var_B28]; void *
 * 0000000180055CF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055CF8: nop
 * 0000000180055CF9: lea     rcx, dword_1802698C0
 * 0000000180055D00: call    _Init_thread_footer
 * 0000000180055D05: mov     rax, [rdi+rbx*8]
 * 0000000180055D09: mov     ecx, [r15+rax]
 * 0000000180055D0D: cmp     cs:dword_1802698C8, ecx
 * 0000000180055D13: jle     loc_180055E09
 * 0000000180055D19: lea     rcx, dword_1802698C8
 * 0000000180055D20: call    _Init_thread_header
 * 0000000180055D25: cmp     cs:dword_1802698C8, r14d
 * 0000000180055D2C: jnz     loc_180055E09
 * 0000000180055D32: mov     r8d, 1050h
 * 0000000180055D38: lea     rdx, unk_18019BC40
 * 0000000180055D3F: lea     rcx, [rbp+9E20h+var_7108]
 * 0000000180055D46: call    sub_1800455BC
 * 0000000180055D4B: movups  xmm0, xmmword ptr [rax]
 * 0000000180055D4E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055D54: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055D5A: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055D5E: mov     r9d, esi
 * 0000000180055D61: mov     r8d, esi
 * 0000000180055D64: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055D69: lea     rcx, [rbp+9E20h+var_1A8]
 * 0000000180055D70: call    sub_1800455A8
 * 0000000180055D75: movups  xmm0, xmmword ptr [rax]
 * 0000000180055D78: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055D7D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055D81: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055D86: call    sub_1800455D0
 * 0000000180055D8B: mov     r8, rax
 * 0000000180055D8E: mov     r9d, r12d
 * 0000000180055D91: mov     edx, 1D0h
 * 0000000180055D96: lea     rcx, [rbp+9E20h+var_AC8]; Src
 * 0000000180055D9D: call    sub_1800D44B8
 * 0000000180055DA2: nop
 * 0000000180055DA3: mov     r8, rax
 * 0000000180055DA6: lea     rdx, aStandardshader_271; "StandardShader/ShaderModel40/"
 * 0000000180055DAD: lea     rcx, [rbp+9E20h+var_AE8]
 * 0000000180055DB4: call    sub_1800453AC
 * 0000000180055DB9: nop
 * 0000000180055DBA: lea     r8, aVertex_128; "/Vertex"
 * 0000000180055DC1: mov     rdx, rax
 * 0000000180055DC4: lea     rcx, [rbp+9E20h+var_B08]
 * 0000000180055DCB: call    sub_18002BF78
 * 0000000180055DD0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055DD5: mov     rcx, rax
 * 0000000180055DD8: call    sub_1800D45A4
 * 0000000180055DDD: mov     cs:byte_1802698C4, al
 * 0000000180055DE3: lea     rcx, [rbp+9E20h+var_AE8]; void *
 * 0000000180055DEA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055DEF: nop
 * 0000000180055DF0: lea     rcx, [rbp+9E20h+var_AC8]; void *
 * 0000000180055DF7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055DFC: nop
 * 0000000180055DFD: lea     rcx, dword_1802698C8
 * 0000000180055E04: call    _Init_thread_footer
 * 0000000180055E09: mov     rax, [rdi+rbx*8]
 * 0000000180055E0D: mov     ecx, [r15+rax]
 * 0000000180055E11: cmp     cs:dword_1802698D0, ecx
 * 0000000180055E17: jle     loc_180055F0D
 * 0000000180055E1D: lea     rcx, dword_1802698D0
 * 0000000180055E24: call    _Init_thread_header
 * 0000000180055E29: cmp     cs:dword_1802698D0, r14d
 * 0000000180055E30: jnz     loc_180055F0D
 * 0000000180055E36: mov     r8d, 1050h
 * 0000000180055E3C: lea     rdx, unk_18019BC40
 * 0000000180055E43: lea     rcx, [rbp+9E20h+var_70F8]
 * 0000000180055E4A: call    sub_1800455BC
 * 0000000180055E4F: movups  xmm0, xmmword ptr [rax]
 * 0000000180055E52: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055E58: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055E5E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055E62: mov     r9d, esi
 * 0000000180055E65: mov     r8d, esi
 * 0000000180055E68: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055E6D: lea     rcx, [rbp+9E20h+var_188]
 * 0000000180055E74: call    sub_1800455A8
 * 0000000180055E79: movups  xmm0, xmmword ptr [rax]
 * 0000000180055E7C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055E81: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055E85: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055E8A: call    sub_1800455D0
 * 0000000180055E8F: mov     r8, rax
 * 0000000180055E92: mov     r9d, r12d
 * 0000000180055E95: mov     edx, 1D2h
 * 0000000180055E9A: lea     rcx, [rbp+9E20h+var_A68]; Src
 * 0000000180055EA1: call    sub_1800D44B8
 * 0000000180055EA6: nop
 * 0000000180055EA7: mov     r8, rax
 * 0000000180055EAA: lea     rdx, aStandardshader_272; "StandardShader/ShaderModel40/"
 * 0000000180055EB1: lea     rcx, [rbp+9E20h+var_A88]
 * 0000000180055EB8: call    sub_1800453AC
 * 0000000180055EBD: nop
 * 0000000180055EBE: lea     r8, aVertex_129; "/Vertex"
 * 0000000180055EC5: mov     rdx, rax
 * 0000000180055EC8: lea     rcx, [rbp+9E20h+var_AA8]
 * 0000000180055ECF: call    sub_18002BF78
 * 0000000180055ED4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055ED9: mov     rcx, rax
 * 0000000180055EDC: call    sub_1800D45A4
 * 0000000180055EE1: mov     cs:byte_1802698CC, al
 * 0000000180055EE7: lea     rcx, [rbp+9E20h+var_A88]; void *
 * 0000000180055EEE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055EF3: nop
 * 0000000180055EF4: lea     rcx, [rbp+9E20h+var_A68]; void *
 * 0000000180055EFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055F00: nop
 * 0000000180055F01: lea     rcx, dword_1802698D0
 * 0000000180055F08: call    _Init_thread_footer
 * 0000000180055F0D: mov     rax, [rdi+rbx*8]
 * 0000000180055F11: mov     ecx, [r15+rax]
 * 0000000180055F15: cmp     cs:dword_1802698D8, ecx
 * 0000000180055F1B: jle     loc_180056011
 * 0000000180055F21: lea     rcx, dword_1802698D8
 * 0000000180055F28: call    _Init_thread_header
 * 0000000180055F2D: cmp     cs:dword_1802698D8, r14d
 * 0000000180055F34: jnz     loc_180056011
 * 0000000180055F3A: mov     r8d, 1050h
 * 0000000180055F40: lea     rdx, unk_18019BC40
 * 0000000180055F47: lea     rcx, [rbp+9E20h+var_70E8]
 * 0000000180055F4E: call    sub_1800455BC
 * 0000000180055F53: movups  xmm0, xmmword ptr [rax]
 * 0000000180055F56: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055F5C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055F62: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055F66: mov     r9d, esi
 * 0000000180055F69: mov     r8d, esi
 * 0000000180055F6C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055F71: lea     rcx, [rbp+9E20h+var_168]
 * 0000000180055F78: call    sub_1800455A8
 * 0000000180055F7D: movups  xmm0, xmmword ptr [rax]
 * 0000000180055F80: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055F85: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055F89: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055F8E: call    sub_1800455D0
 * 0000000180055F93: mov     r8, rax
 * 0000000180055F96: mov     r9d, r12d
 * 0000000180055F99: mov     edx, 1D8h
 * 0000000180055F9E: lea     rcx, [rbp+9E20h+var_A08]; Src
 * 0000000180055FA5: call    sub_1800D44B8
 * 0000000180055FAA: nop
 * 0000000180055FAB: mov     r8, rax
 * 0000000180055FAE: lea     rdx, aStandardshader_273; "StandardShader/ShaderModel40/"
 * 0000000180055FB5: lea     rcx, [rbp+9E20h+var_A28]
 * 0000000180055FBC: call    sub_1800453AC
 * 0000000180055FC1: nop
 * 0000000180055FC2: lea     r8, aVertex_130; "/Vertex"
 * 0000000180055FC9: mov     rdx, rax
 * 0000000180055FCC: lea     rcx, [rbp+9E20h+var_A48]
 * 0000000180055FD3: call    sub_18002BF78
 * 0000000180055FD8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055FDD: mov     rcx, rax
 * 0000000180055FE0: call    sub_1800D45A4
 * 0000000180055FE5: mov     cs:byte_1802698D4, al
 * 0000000180055FEB: lea     rcx, [rbp+9E20h+var_A28]; void *
 * 0000000180055FF2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055FF7: nop
 * 0000000180055FF8: lea     rcx, [rbp+9E20h+var_A08]; void *
 * 0000000180055FFF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056004: nop
 * 0000000180056005: lea     rcx, dword_1802698D8
 * 000000018005600C: call    _Init_thread_footer
 * 0000000180056011: mov     rax, [rdi+rbx*8]
 * 0000000180056015: mov     ecx, [r15+rax]
 * 0000000180056019: cmp     cs:dword_1802698E0, ecx
 * 000000018005601F: jle     loc_180056115
 * 0000000180056025: lea     rcx, dword_1802698E0
 * 000000018005602C: call    _Init_thread_header
 * 0000000180056031: cmp     cs:dword_1802698E0, r14d
 * 0000000180056038: jnz     loc_180056115
 * 000000018005603E: mov     r8d, 1050h
 * 0000000180056044: lea     rdx, unk_18019BC40
 * 000000018005604B: lea     rcx, [rbp+9E20h+var_70D8]
 * 0000000180056052: call    sub_1800455BC
 * 0000000180056057: movups  xmm0, xmmword ptr [rax]
 * 000000018005605A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056060: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056066: mov     [rsp+9F20h+var_9F00], al
 * 000000018005606A: mov     r9d, esi
 * 000000018005606D: mov     r8d, esi
 * 0000000180056070: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056075: lea     rcx, [rbp+9E20h+var_148]
 * 000000018005607C: call    sub_1800455A8
 * 0000000180056081: movups  xmm0, xmmword ptr [rax]
 * 0000000180056084: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056089: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005608D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180056092: call    sub_1800455D0
 * 0000000180056097: mov     r8, rax
 * 000000018005609A: mov     r9d, r12d
 * 000000018005609D: mov     edx, 1DAh
 * 00000001800560A2: lea     rcx, [rbp+9E20h+var_9A8]; Src
 * 00000001800560A9: call    sub_1800D44B8
 * 00000001800560AE: nop
 * 00000001800560AF: mov     r8, rax
 * 00000001800560B2: lea     rdx, aStandardshader_274; "StandardShader/ShaderModel40/"
 * 00000001800560B9: lea     rcx, [rbp+9E20h+var_9C8]
 * 00000001800560C0: call    sub_1800453AC
 * 00000001800560C5: nop
 * 00000001800560C6: lea     r8, aVertex_131; "/Vertex"
 * 00000001800560CD: mov     rdx, rax
 * 00000001800560D0: lea     rcx, [rbp+9E20h+var_9E8]
 * 00000001800560D7: call    sub_18002BF78
 * 00000001800560DC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800560E1: mov     rcx, rax
 * 00000001800560E4: call    sub_1800D45A4
 * 00000001800560E9: mov     cs:byte_1802698DC, al
 * 00000001800560EF: lea     rcx, [rbp+9E20h+var_9C8]; void *
 * 00000001800560F6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800560FB: nop
 * 00000001800560FC: lea     rcx, [rbp+9E20h+var_9A8]; void *
 * 0000000180056103: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056108: nop
 * 0000000180056109: lea     rcx, dword_1802698E0
 * 0000000180056110: call    _Init_thread_footer
 * 0000000180056115: mov     rax, [rdi+rbx*8]
 * 0000000180056119: mov     ecx, [r15+rax]
 * 000000018005611D: cmp     cs:dword_1802698E8, ecx
 * 0000000180056123: jle     loc_180056216
 * 0000000180056129: lea     rcx, dword_1802698E8
 * 0000000180056130: call    _Init_thread_header
 * 0000000180056135: cmp     cs:dword_1802698E8, r14d
 * 000000018005613C: jnz     loc_180056216
 * 0000000180056142: mov     r8d, r13d
 * 0000000180056145: lea     rdx, unk_18019CC90
 * 000000018005614C: lea     rcx, [rbp+9E20h+var_70C8]
 * 0000000180056153: call    sub_1800455BC
 * 0000000180056158: movups  xmm0, xmmword ptr [rax]
 * 000000018005615B: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056161: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056167: mov     [rsp+9F20h+var_9F00], al
 * 000000018005616B: mov     r9d, esi
 * 000000018005616E: mov     r8d, esi
 * 0000000180056171: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056176: lea     rcx, [rbp+9E20h+var_128]
 * 000000018005617D: call    sub_1800455A8
 * 0000000180056182: movups  xmm0, xmmword ptr [rax]
 * 0000000180056185: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005618A: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005618E: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180056193: call    sub_1800455D0
 * 0000000180056198: mov     r8, rax
 * 000000018005619B: mov     r9d, r12d
 * 000000018005619E: mov     edx, 1E0h
 * 00000001800561A3: lea     rcx, [rbp+9E20h+var_948]; Src
 * 00000001800561AA: call    sub_1800D44B8
 * 00000001800561AF: nop
 * 00000001800561B0: mov     r8, rax
 * 00000001800561B3: lea     rdx, aStandardshader_275; "StandardShader/ShaderModel40/"
 * 00000001800561BA: lea     rcx, [rbp+9E20h+var_968]
 * 00000001800561C1: call    sub_1800453AC
 * 00000001800561C6: nop
 * 00000001800561C7: lea     r8, aVertex_132; "/Vertex"
 * 00000001800561CE: mov     rdx, rax
 * 00000001800561D1: lea     rcx, [rbp+9E20h+var_988]
 * 00000001800561D8: call    sub_18002BF78
 * 00000001800561DD: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800561E2: mov     rcx, rax
 * 00000001800561E5: call    sub_1800D45A4
 * 00000001800561EA: mov     cs:byte_1802698E4, al
 * 00000001800561F0: lea     rcx, [rbp+9E20h+var_968]; void *
 * 00000001800561F7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800561FC: nop
 * 00000001800561FD: lea     rcx, [rbp+9E20h+var_948]; void *
 * 0000000180056204: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056209: nop
 * 000000018005620A: lea     rcx, dword_1802698E8
 * 0000000180056211: call    _Init_thread_footer
 * 0000000180056216: mov     rax, [rdi+rbx*8]
 * 000000018005621A: mov     ecx, [r15+rax]
 * 000000018005621E: cmp     cs:dword_1802698F0, ecx
 * 0000000180056224: jle     loc_180056317
 * 000000018005622A: lea     rcx, dword_1802698F0
 * 0000000180056231: call    _Init_thread_header
 * 0000000180056236: cmp     cs:dword_1802698F0, r14d
 * 000000018005623D: jnz     loc_180056317
 * 0000000180056243: mov     r8d, r13d
 * 0000000180056246: lea     rdx, unk_18019CC90
 * 000000018005624D: lea     rcx, [rbp+9E20h+var_70B8]
 * 0000000180056254: call    sub_1800455BC
 * 0000000180056259: movups  xmm0, xmmword ptr [rax]
 * 000000018005625C: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056262: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056268: mov     [rsp+9F20h+var_9F00], al
 * 000000018005626C: mov     r9d, esi
 * 000000018005626F: mov     r8d, esi
 * 0000000180056272: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056277: lea     rcx, [rbp+9E20h+var_108]
 * 000000018005627E: call    sub_1800455A8
 * 0000000180056283: movups  xmm0, xmmword ptr [rax]
 * 0000000180056286: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005628B: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005628F: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180056294: call    sub_1800455D0
 * 0000000180056299: mov     r8, rax
 * 000000018005629C: mov     r9d, r12d
 * 000000018005629F: mov     edx, 1E2h
 * 00000001800562A4: lea     rcx, [rbp+9E20h+var_8E8]; Src
 * 00000001800562AB: call    sub_1800D44B8
 * 00000001800562B0: nop
 * 00000001800562B1: mov     r8, rax
 * 00000001800562B4: lea     rdx, aStandardshader_276; "StandardShader/ShaderModel40/"
 * 00000001800562BB: lea     rcx, [rbp+9E20h+var_908]
 * 00000001800562C2: call    sub_1800453AC
 * 00000001800562C7: nop
 * 00000001800562C8: lea     r8, aVertex_133; "/Vertex"
 * 00000001800562CF: mov     rdx, rax
 * 00000001800562D2: lea     rcx, [rbp+9E20h+var_928]
 * 00000001800562D9: call    sub_18002BF78
 * 00000001800562DE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800562E3: mov     rcx, rax
 * 00000001800562E6: call    sub_1800D45A4
 * 00000001800562EB: mov     cs:byte_1802698EC, al
 * 00000001800562F1: lea     rcx, [rbp+9E20h+var_908]; void *
 * 00000001800562F8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800562FD: nop
 * 00000001800562FE: lea     rcx, [rbp+9E20h+var_8E8]; void *
 * 0000000180056305: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005630A: nop
 * 000000018005630B: lea     rcx, dword_1802698F0
 * 0000000180056312: call    _Init_thread_footer
 * 0000000180056317: mov     rax, [rdi+rbx*8]
 * 000000018005631B: mov     ecx, [r15+rax]
 * 000000018005631F: cmp     cs:dword_1802698F8, ecx
 * 0000000180056325: jle     loc_180056418
 * 000000018005632B: lea     rcx, dword_1802698F8
 * 0000000180056332: call    _Init_thread_header
 * 0000000180056337: cmp     cs:dword_1802698F8, r14d
 * 000000018005633E: jnz     loc_180056418
 * 0000000180056344: mov     r8d, r13d
 * 0000000180056347: lea     rdx, unk_18019CC90
 * 000000018005634E: lea     rcx, [rbp+9E20h+var_70A8]
 * 0000000180056355: call    sub_1800455BC
 * 000000018005635A: movups  xmm0, xmmword ptr [rax]
 * 000000018005635D: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056363: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056369: mov     [rsp+9F20h+var_9F00], al
 * 000000018005636D: mov     r9d, esi
 * 0000000180056370: mov     r8d, esi
 * 0000000180056373: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056378: lea     rcx, [rbp+9E20h+var_E8]
 * 000000018005637F: call    sub_1800455A8
 * 0000000180056384: movups  xmm0, xmmword ptr [rax]
 * 0000000180056387: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005638C: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180056390: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180056395: call    sub_1800455D0
 * 000000018005639A: mov     r8, rax
 * 000000018005639D: mov     r9d, r12d
 * 00000001800563A0: mov     edx, 1E8h
 * 00000001800563A5: lea     rcx, [rbp+9E20h+var_888]; Src
 * 00000001800563AC: call    sub_1800D44B8
 * 00000001800563B1: nop
 * 00000001800563B2: mov     r8, rax
 * 00000001800563B5: lea     rdx, aStandardshader_277; "StandardShader/ShaderModel40/"
 * 00000001800563BC: lea     rcx, [rbp+9E20h+var_8A8]
 * 00000001800563C3: call    sub_1800453AC
 * 00000001800563C8: nop
 * 00000001800563C9: lea     r8, aVertex_134; "/Vertex"
 * 00000001800563D0: mov     rdx, rax
 * 00000001800563D3: lea     rcx, [rbp+9E20h+var_8C8]
 * 00000001800563DA: call    sub_18002BF78
 * 00000001800563DF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800563E4: mov     rcx, rax
 * 00000001800563E7: call    sub_1800D45A4
 * 00000001800563EC: mov     cs:byte_1802698F4, al
 * 00000001800563F2: lea     rcx, [rbp+9E20h+var_8A8]; void *
 * 00000001800563F9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800563FE: nop
 * 00000001800563FF: lea     rcx, [rbp+9E20h+var_888]; void *
 * 0000000180056406: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005640B: nop
 * 000000018005640C: lea     rcx, dword_1802698F8
 * 0000000180056413: call    _Init_thread_footer
 * 0000000180056418: mov     rax, [rdi+rbx*8]
 * 000000018005641C: mov     ecx, [r15+rax]
 * 0000000180056420: cmp     cs:dword_180269900, ecx
 * 0000000180056426: jle     loc_180056519
 * 000000018005642C: lea     rcx, dword_180269900
 * 0000000180056433: call    _Init_thread_header
 * 0000000180056438: cmp     cs:dword_180269900, r14d
 * 000000018005643F: jnz     loc_180056519
 * 0000000180056445: mov     r8d, r13d
 * 0000000180056448: lea     rdx, unk_18019CC90
 * 000000018005644F: lea     rcx, [rbp+9E20h+var_7098]
 * 0000000180056456: call    sub_1800455BC
 * 000000018005645B: movups  xmm0, xmmword ptr [rax]
 * 000000018005645E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056464: mov     al, [rbp+9E20h+arg_0]
 * 000000018005646A: mov     [rsp+9F20h+var_9F00], al
 * 000000018005646E: mov     r9d, esi
 * 0000000180056471: mov     r8d, esi
 * 0000000180056474: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056479: lea     rcx, [rbp+9E20h+var_C8]
 * 0000000180056480: call    sub_1800455A8
 * 0000000180056485: movups  xmm0, xmmword ptr [rax]
 * 0000000180056488: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005648D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180056491: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180056496: call    sub_1800455D0
 * 000000018005649B: mov     r8, rax
 * 000000018005649E: mov     r9d, r12d
 * 00000001800564A1: mov     edx, 1EAh
 * 00000001800564A6: lea     rcx, [rbp+9E20h+var_828]; Src
 * 00000001800564AD: call    sub_1800D44B8
 * 00000001800564B2: nop
 * 00000001800564B3: mov     r8, rax
 * 00000001800564B6: lea     rdx, aStandardshader_278; "StandardShader/ShaderModel40/"
 * 00000001800564BD: lea     rcx, [rbp+9E20h+var_848]
 * 00000001800564C4: call    sub_1800453AC
 * 00000001800564C9: nop
 * 00000001800564CA: lea     r8, aVertex_135; "/Vertex"
 * 00000001800564D1: mov     rdx, rax
 * 00000001800564D4: lea     rcx, [rbp+9E20h+var_868]
 * 00000001800564DB: call    sub_18002BF78
 * 00000001800564E0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800564E5: mov     rcx, rax
 * 00000001800564E8: call    sub_1800D45A4
 * 00000001800564ED: mov     cs:byte_1802698FC, al
 * 00000001800564F3: lea     rcx, [rbp+9E20h+var_848]; void *
 * 00000001800564FA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800564FF: nop
 * 0000000180056500: lea     rcx, [rbp+9E20h+var_828]; void *
 * 0000000180056507: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005650C: nop
 * 000000018005650D: lea     rcx, dword_180269900
 * 0000000180056514: call    _Init_thread_footer
 * 0000000180056519: mov     rax, [rdi+rbx*8]
 * 000000018005651D: mov     ecx, [r15+rax]
 * 0000000180056521: cmp     cs:dword_180269908, ecx
 * 0000000180056527: jle     loc_18005661A
 * 000000018005652D: lea     rcx, dword_180269908
 * 0000000180056534: call    _Init_thread_header
 * 0000000180056539: cmp     cs:dword_180269908, r14d
 * 0000000180056540: jnz     loc_18005661A
 * 0000000180056546: mov     r8d, r13d
 * 0000000180056549: lea     rdx, unk_18019CC90
 * 0000000180056550: lea     rcx, [rbp+9E20h+var_7088]
 * 0000000180056557: call    sub_1800455BC
 * 000000018005655C: movups  xmm0, xmmword ptr [rax]
 * 000000018005655F: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056565: mov     al, [rbp+9E20h+arg_0]
 * 000000018005656B: mov     [rsp+9F20h+var_9F00], al
 * 000000018005656F: mov     r9d, esi
 * 0000000180056572: mov     r8d, esi
 * 0000000180056575: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005657A: lea     rcx, [rbp+9E20h+var_A8]
 * 0000000180056581: call    sub_1800455A8
 * 0000000180056586: movups  xmm0, xmmword ptr [rax]
 * 0000000180056589: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005658E: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180056592: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180056597: call    sub_1800455D0
 * 000000018005659C: mov     r8, rax
 * 000000018005659F: mov     r9d, r12d
 * 00000001800565A2: mov     edx, 1F0h
 * 00000001800565A7: lea     rcx, [rbp+9E20h+var_7C8]; Src
 * 00000001800565AE: call    sub_1800D44B8
 * 00000001800565B3: nop
 * 00000001800565B4: mov     r8, rax
 * 00000001800565B7: lea     rdx, aStandardshader_279; "StandardShader/ShaderModel40/"
 * 00000001800565BE: lea     rcx, [rbp+9E20h+var_7E8]
 * 00000001800565C5: call    sub_1800453AC
 * 00000001800565CA: nop
 * 00000001800565CB: lea     r8, aVertex_136; "/Vertex"
 * 00000001800565D2: mov     rdx, rax
 * 00000001800565D5: lea     rcx, [rbp+9E20h+var_808]
 * 00000001800565DC: call    sub_18002BF78
 * 00000001800565E1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800565E6: mov     rcx, rax
 * 00000001800565E9: call    sub_1800D45A4
 * 00000001800565EE: mov     cs:byte_180269904, al
 * 00000001800565F4: lea     rcx, [rbp+9E20h+var_7E8]; void *
 * 00000001800565FB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056600: nop
 * 0000000180056601: lea     rcx, [rbp+9E20h+var_7C8]; void *
 * 0000000180056608: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005660D: nop
 * 000000018005660E: lea     rcx, dword_180269908
 * 0000000180056615: call    _Init_thread_footer
 * 000000018005661A: mov     rax, [rdi+rbx*8]
 * 000000018005661E: mov     ecx, [r15+rax]
 * 0000000180056622: cmp     cs:dword_180269910, ecx
 * 0000000180056628: jle     loc_18005671B
 * 000000018005662E: lea     rcx, dword_180269910
 * 0000000180056635: call    _Init_thread_header
 * 000000018005663A: cmp     cs:dword_180269910, r14d
 * 0000000180056641: jnz     loc_18005671B
 * 0000000180056647: mov     r8d, r13d
 * 000000018005664A: lea     rdx, unk_18019CC90
 * 0000000180056651: lea     rcx, [rbp+9E20h+var_7078]
 * 0000000180056658: call    sub_1800455BC
 * 000000018005665D: movups  xmm0, xmmword ptr [rax]
 * 0000000180056660: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056666: mov     al, [rbp+9E20h+arg_0]
 * 000000018005666C: mov     [rsp+9F20h+var_9F00], al
 * 0000000180056670: mov     r9d, esi
 * 0000000180056673: mov     r8d, esi
 * 0000000180056676: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005667B: lea     rcx, [rbp+9E20h+var_88]
 * 0000000180056682: call    sub_1800455A8
 * 0000000180056687: movups  xmm0, xmmword ptr [rax]
 * 000000018005668A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005668F: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180056693: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180056698: call    sub_1800455D0
 * 000000018005669D: mov     r8, rax
 * 00000001800566A0: mov     r9d, r12d
 * 00000001800566A3: mov     edx, 1F2h
 * 00000001800566A8: lea     rcx, [rbp+9E20h+var_768]; Src
 * 00000001800566AF: call    sub_1800D44B8
 * 00000001800566B4: nop
 * 00000001800566B5: mov     r8, rax
 * 00000001800566B8: lea     rdx, aStandardshader_280; "StandardShader/ShaderModel40/"
 * 00000001800566BF: lea     rcx, [rbp+9E20h+var_788]
 * 00000001800566C6: call    sub_1800453AC
 * 00000001800566CB: nop
 * 00000001800566CC: lea     r8, aVertex_137; "/Vertex"
 * 00000001800566D3: mov     rdx, rax
 * 00000001800566D6: lea     rcx, [rbp+9E20h+var_7A8]
 * 00000001800566DD: call    sub_18002BF78
 * 00000001800566E2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800566E7: mov     rcx, rax
 * 00000001800566EA: call    sub_1800D45A4
 * 00000001800566EF: mov     cs:byte_18026990C, al
 * 00000001800566F5: lea     rcx, [rbp+9E20h+var_788]; void *
 * 00000001800566FC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056701: nop
 * 0000000180056702: lea     rcx, [rbp+9E20h+var_768]; void *
 * 0000000180056709: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005670E: nop
 * 000000018005670F: lea     rcx, dword_180269910
 * 0000000180056716: call    _Init_thread_footer
 * 000000018005671B: mov     rax, [rdi+rbx*8]
 * 000000018005671F: mov     ecx, [r15+rax]
 * 0000000180056723: cmp     cs:dword_180269918, ecx
 * 0000000180056729: jle     loc_18005681C
 * 000000018005672F: lea     rcx, dword_180269918
 * 0000000180056736: call    _Init_thread_header
 * 000000018005673B: cmp     cs:dword_180269918, r14d
 * 0000000180056742: jnz     loc_18005681C
 * 0000000180056748: mov     r8d, r13d
 * 000000018005674B: lea     rdx, unk_18019CC90
 * 0000000180056752: lea     rcx, [rbp+9E20h+var_7068]
 * 0000000180056759: call    sub_1800455BC
 * 000000018005675E: movups  xmm0, xmmword ptr [rax]
 * 0000000180056761: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056767: mov     al, [rbp+9E20h+arg_0]
 * 000000018005676D: mov     [rsp+9F20h+var_9F00], al
 * 0000000180056771: mov     r9d, esi
 * 0000000180056774: mov     r8d, esi
 * 0000000180056777: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005677C: lea     rcx, [rbp+9E20h+var_68]
 * 0000000180056783: call    sub_1800455A8
 * 0000000180056788: movups  xmm0, xmmword ptr [rax]
 * 000000018005678B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056790: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180056794: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180056799: call    sub_1800455D0
 * 000000018005679E: mov     r8, rax
 * 00000001800567A1: mov     r9d, r12d
 * 00000001800567A4: mov     edx, 1F8h
 * 00000001800567A9: lea     rcx, [rbp+9E20h+var_708]; Src
 * 00000001800567B0: call    sub_1800D44B8
 * 00000001800567B5: nop
 * 00000001800567B6: mov     r8, rax
 * 00000001800567B9: lea     rdx, aStandardshader_281; "StandardShader/ShaderModel40/"
 * 00000001800567C0: lea     rcx, [rbp+9E20h+var_728]
 * 00000001800567C7: call    sub_1800453AC
 * 00000001800567CC: nop
 * 00000001800567CD: lea     r8, aVertex_138; "/Vertex"
 * 00000001800567D4: mov     rdx, rax
 * 00000001800567D7: lea     rcx, [rbp+9E20h+var_748]
 * 00000001800567DE: call    sub_18002BF78
 * 00000001800567E3: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800567E8: mov     rcx, rax
 * 00000001800567EB: call    sub_1800D45A4
 * 00000001800567F0: mov     cs:byte_180269914, al
 * 00000001800567F6: lea     rcx, [rbp+9E20h+var_728]; void *
 * 00000001800567FD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056802: nop
 * 0000000180056803: lea     rcx, [rbp+9E20h+var_708]; void *
 * 000000018005680A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005680F: nop
 * 0000000180056810: lea     rcx, dword_180269918
 * 0000000180056817: call    _Init_thread_footer
 * 000000018005681C: mov     rax, [rdi+rbx*8]
 * 0000000180056820: mov     ecx, [r15+rax]
 * 0000000180056824: cmp     cs:dword_180269920, ecx
 * 000000018005682A: jle     loc_18005691D
 * 0000000180056830: lea     rcx, dword_180269920
 * 0000000180056837: call    _Init_thread_header
 * 000000018005683C: cmp     cs:dword_180269920, r14d
 * 0000000180056843: jnz     loc_18005691D
 * 0000000180056849: mov     r8d, r13d
 * 000000018005684C: lea     rdx, unk_18019CC90
 * 0000000180056853: lea     rcx, [rbp+9E20h+var_7058]
 * 000000018005685A: call    sub_1800455BC
 * 000000018005685F: movups  xmm0, xmmword ptr [rax]
 * 0000000180056862: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056868: mov     al, [rbp+9E20h+arg_0]
 * 000000018005686E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180056872: mov     r9d, esi
 * 0000000180056875: mov     r8d, esi
 * 0000000180056878: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005687D: lea     rcx, [rbp+9E20h+var_48]
 * 0000000180056884: call    sub_1800455A8
 * 0000000180056889: movups  xmm0, xmmword ptr [rax]
 * 000000018005688C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056891: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180056895: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005689A: call    sub_1800455D0
 * 000000018005689F: mov     r8, rax
 * 00000001800568A2: mov     r9d, r12d
 * 00000001800568A5: mov     edx, 1FAh
 * 00000001800568AA: lea     rcx, [rbp+9E20h+var_6A8]; Src
 * 00000001800568B1: call    sub_1800D44B8
 * 00000001800568B6: nop
 * 00000001800568B7: mov     r8, rax
 * 00000001800568BA: lea     rdx, aStandardshader_282; "StandardShader/ShaderModel40/"
 * 00000001800568C1: lea     rcx, [rbp+9E20h+var_6C8]
 * 00000001800568C8: call    sub_1800453AC
 * 00000001800568CD: nop
 * 00000001800568CE: lea     r8, aVertex_139; "/Vertex"
 * 00000001800568D5: mov     rdx, rax
 * 00000001800568D8: lea     rcx, [rbp+9E20h+var_6E8]
 * 00000001800568DF: call    sub_18002BF78
 * 00000001800568E4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800568E9: mov     rcx, rax
 * 00000001800568EC: call    sub_1800D45A4
 * 00000001800568F1: mov     cs:byte_18026991C, al
 * 00000001800568F7: lea     rcx, [rbp+9E20h+var_6C8]; void *
 * 00000001800568FE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056903: nop
 * 0000000180056904: lea     rcx, [rbp+9E20h+var_6A8]; void *
 * 000000018005690B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056910: nop
 * 0000000180056911: lea     rcx, dword_180269920
 * 0000000180056918: call    _Init_thread_footer
 * 000000018005691D: xor     eax, eax
 * 000000018005691F: lea     r11, [rsp+9F20h+var_20]
 * 0000000180056927: mov     rbx, [r11+38h]
 * 000000018005692B: mov     rsi, [r11+40h]
 * 000000018005692F: mov     rdi, [r11+48h]
 * 0000000180056933: mov     rsp, r11
 * 0000000180056936: pop     r15
 * 0000000180056938: pop     r14
 * 000000018005693A: pop     r13
 * 000000018005693C: pop     r12
 * 000000018005693E: pop     rbp
 * 000000018005693F: retn
 */
