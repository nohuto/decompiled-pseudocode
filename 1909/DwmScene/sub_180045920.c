/*
 * XREFs of sub_180045920 @ 0x180045920
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
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     sub_1800456B8 @ 0x1800456B8 (sub_1800456B8.c)
 *     sub_1800456CC @ 0x1800456CC (sub_1800456CC.c)
 *     sub_1800456E0 @ 0x1800456E0 (sub_1800456E0.c)
 *     sub_1800D45C8 @ 0x1800D45C8 (sub_1800D45C8.c)
 *     sub_1800D46B4 @ 0x1800D46B4 (sub_1800D46B4.c)
 *     _alloca_probe @ 0x180126130 (_alloca_probe.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180045920 @ 0x180045920
 * Reason: Hex-Rays returned no pseudocode for 0x180045920
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180045920: push    rbp
 * 0000000180045922: push    r12
 * 0000000180045924: push    r13
 * 0000000180045926: push    r14
 * 0000000180045928: push    r15
 * 000000018004592A: lea     rbp, [rsp-9E00h]
 * 0000000180045932: mov     eax, 9F00h
 * 0000000180045937: call    _alloca_probe
 * 000000018004593C: sub     rsp, rax
 * 000000018004593F: mov     [rbp+9E20h+var_9060], 0FFFFFFFFFFFFFFFEh
 * 000000018004594A: mov     [rsp+9F20h+arg_8], rbx
 * 0000000180045952: mov     [rsp+9F20h+arg_10], rsi
 * 000000018004595A: mov     [rsp+9F20h+arg_18], rdi
 * 0000000180045962: mov     ebx, cs:TlsIndex
 * 0000000180045968: mov     rdi, gs:58h
 * 0000000180045971: mov     r15d, 2Ch ; ','
 * 0000000180045977: mov     rax, [rdi+rbx*8]
 * 000000018004597B: or      r14d, 0FFFFFFFFh
 * 000000018004597F: lea     esi, [r14+2]
 * 0000000180045983: lea     r13d, [r14+6]
 * 0000000180045987: lea     r12d, [r14+0Ah]
 * 000000018004598B: mov     eax, [r15+rax]
 * 000000018004598F: cmp     cs:dword_18026A058, eax
 * 0000000180045995: jle     loc_180045A76
 * 000000018004599B: lea     rcx, dword_18026A058
 * 00000001800459A2: call    _Init_thread_header
 * 00000001800459A7: cmp     cs:dword_18026A058, r14d
 * 00000001800459AE: jnz     loc_180045A76
 * 00000001800459B4: lea     rax, unk_180155160
 * 00000001800459BB: mov     qword ptr [rsp+9F20h+var_9EC0], rax
 * 00000001800459C0: lea     rax, unk_18015B544
 * 00000001800459C7: mov     qword ptr [rsp+9F20h+var_9EC0+8], rax
 * 00000001800459CC: movups  xmm0, [rsp+9F20h+var_9EC0]
 * 00000001800459D1: movups  [rbp+9E20h+var_89F8], xmm0
 * 00000001800459D8: mov     dword ptr [rbp+9E20h+var_89E8], r13d
 * 00000001800459DF: mov     dword ptr [rbp+9E20h+var_89E8+4], esi
 * 00000001800459E5: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800459EA: movups  xmm0, [rbp+9E20h+var_89E8]
 * 00000001800459F1: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800459F6: call    sub_1800456E0
 * 00000001800459FB: mov     r8, rax
 * 00000001800459FE: mov     r9d, r12d
 * 0000000180045A01: xor     edx, edx
 * 0000000180045A03: lea     rcx, [rbp+9E20h+Src]; Src
 * 0000000180045A0A: call    sub_1800D45C8
 * 0000000180045A0F: nop
 * 0000000180045A10: mov     r8, rax
 * 0000000180045A13: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 0000000180045A1A: lea     rcx, [rbp+9E20h+var_7028]
 * 0000000180045A21: call    sub_1800454BC
 * 0000000180045A26: nop
 * 0000000180045A27: lea     r8, aPixel; "/Pixel"
 * 0000000180045A2E: mov     rdx, rax
 * 0000000180045A31: lea     rcx, [rbp+9E20h+var_7048]
 * 0000000180045A38: call    sub_18002C088
 * 0000000180045A3D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045A42: mov     rcx, rax
 * 0000000180045A45: call    sub_1800D46B4
 * 0000000180045A4A: mov     cs:byte_18026A054, al
 * 0000000180045A50: lea     rcx, [rbp+9E20h+var_7028]; void *
 * 0000000180045A57: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045A5C: nop
 * 0000000180045A5D: lea     rcx, [rbp+9E20h+Src]; void *
 * 0000000180045A64: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045A69: nop
 * 0000000180045A6A: lea     rcx, dword_18026A058
 * 0000000180045A71: call    _Init_thread_footer
 * 0000000180045A76: mov     rax, [rdi+rbx*8]
 * 0000000180045A7A: mov     eax, [r15+rax]
 * 0000000180045A7E: cmp     cs:dword_18026A060, eax
 * 0000000180045A84: jle     loc_180045B66
 * 0000000180045A8A: lea     rcx, dword_18026A060
 * 0000000180045A91: call    _Init_thread_header
 * 0000000180045A96: cmp     cs:dword_18026A060, r14d
 * 0000000180045A9D: jnz     loc_180045B66
 * 0000000180045AA3: lea     rax, unk_18015B550
 * 0000000180045AAA: mov     qword ptr [rsp+9F20h+var_9EB0], rax
 * 0000000180045AAF: lea     rax, unk_18015BF48
 * 0000000180045AB6: mov     qword ptr [rsp+9F20h+var_9EB0+8], rax
 * 0000000180045ABB: movups  xmm0, [rsp+9F20h+var_9EB0]
 * 0000000180045AC0: movups  [rbp+9E20h+var_89D8], xmm0
 * 0000000180045AC7: mov     dword ptr [rbp+9E20h+var_89C8], r13d
 * 0000000180045ACE: mov     dword ptr [rbp+9E20h+var_89C8+4], esi
 * 0000000180045AD4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045AD9: movups  xmm0, [rbp+9E20h+var_89C8]
 * 0000000180045AE0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045AE5: call    sub_1800456E0
 * 0000000180045AEA: mov     r8, rax
 * 0000000180045AED: mov     r9d, r12d
 * 0000000180045AF0: mov     rdx, rsi
 * 0000000180045AF3: lea     rcx, [rbp+9E20h+var_6FA8]; Src
 * 0000000180045AFA: call    sub_1800D45C8
 * 0000000180045AFF: nop
 * 0000000180045B00: mov     r8, rax
 * 0000000180045B03: lea     rdx, aStandardshader_2; "StandardShader/ShaderModel40/"
 * 0000000180045B0A: lea     rcx, [rbp+9E20h+var_6FC8]
 * 0000000180045B11: call    sub_1800454BC
 * 0000000180045B16: nop
 * 0000000180045B17: lea     r8, aPixel_0; "/Pixel"
 * 0000000180045B1E: mov     rdx, rax
 * 0000000180045B21: lea     rcx, [rbp+9E20h+var_6FE8]
 * 0000000180045B28: call    sub_18002C088
 * 0000000180045B2D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045B32: mov     rcx, rax
 * 0000000180045B35: call    sub_1800D46B4
 * 0000000180045B3A: mov     cs:byte_18026A05C, al
 * 0000000180045B40: lea     rcx, [rbp+9E20h+var_6FC8]; void *
 * 0000000180045B47: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045B4C: nop
 * 0000000180045B4D: lea     rcx, [rbp+9E20h+var_6FA8]; void *
 * 0000000180045B54: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045B59: nop
 * 0000000180045B5A: lea     rcx, dword_18026A060
 * 0000000180045B61: call    _Init_thread_footer
 * 0000000180045B66: mov     rax, [rdi+rbx*8]
 * 0000000180045B6A: mov     eax, [r15+rax]
 * 0000000180045B6E: cmp     cs:dword_18026A068, eax
 * 0000000180045B74: jle     loc_180045C55
 * 0000000180045B7A: lea     rcx, dword_18026A068
 * 0000000180045B81: call    _Init_thread_header
 * 0000000180045B86: cmp     cs:dword_18026A068, r14d
 * 0000000180045B8D: jnz     loc_180045C55
 * 0000000180045B93: lea     rax, unk_180155160
 * 0000000180045B9A: mov     qword ptr [rbp+9E20h+var_9EA0], rax
 * 0000000180045B9E: lea     rax, unk_18015B544
 * 0000000180045BA5: mov     qword ptr [rbp+9E20h+var_9EA0+8], rax
 * 0000000180045BA9: movups  xmm0, [rbp+9E20h+var_9EA0]
 * 0000000180045BAD: movups  [rbp+9E20h+var_89B8], xmm0
 * 0000000180045BB4: mov     dword ptr [rbp+9E20h+var_89A8], r13d
 * 0000000180045BBB: mov     dword ptr [rbp+9E20h+var_89A8+4], esi
 * 0000000180045BC1: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045BC6: movups  xmm0, [rbp+9E20h+var_89A8]
 * 0000000180045BCD: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045BD2: call    sub_1800456E0
 * 0000000180045BD7: mov     r8, rax
 * 0000000180045BDA: mov     r9d, r12d
 * 0000000180045BDD: mov     edx, 2
 * 0000000180045BE2: lea     rcx, [rbp+9E20h+var_6F48]; Src
 * 0000000180045BE9: call    sub_1800D45C8
 * 0000000180045BEE: nop
 * 0000000180045BEF: mov     r8, rax
 * 0000000180045BF2: lea     rdx, aStandardshader_3; "StandardShader/ShaderModel40/"
 * 0000000180045BF9: lea     rcx, [rbp+9E20h+var_6F68]
 * 0000000180045C00: call    sub_1800454BC
 * 0000000180045C05: nop
 * 0000000180045C06: lea     r8, aPixel_1; "/Pixel"
 * 0000000180045C0D: mov     rdx, rax
 * 0000000180045C10: lea     rcx, [rbp+9E20h+var_6F88]
 * 0000000180045C17: call    sub_18002C088
 * 0000000180045C1C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045C21: mov     rcx, rax
 * 0000000180045C24: call    sub_1800D46B4
 * 0000000180045C29: mov     cs:byte_18026A064, al
 * 0000000180045C2F: lea     rcx, [rbp+9E20h+var_6F68]; void *
 * 0000000180045C36: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045C3B: nop
 * 0000000180045C3C: lea     rcx, [rbp+9E20h+var_6F48]; void *
 * 0000000180045C43: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045C48: nop
 * 0000000180045C49: lea     rcx, dword_18026A068
 * 0000000180045C50: call    _Init_thread_footer
 * 0000000180045C55: mov     rax, [rdi+rbx*8]
 * 0000000180045C59: mov     eax, [r15+rax]
 * 0000000180045C5D: cmp     cs:dword_18026A070, eax
 * 0000000180045C63: jle     loc_180045D44
 * 0000000180045C69: lea     rcx, dword_18026A070
 * 0000000180045C70: call    _Init_thread_header
 * 0000000180045C75: cmp     cs:dword_18026A070, r14d
 * 0000000180045C7C: jnz     loc_180045D44
 * 0000000180045C82: lea     rax, unk_18015BF50
 * 0000000180045C89: mov     qword ptr [rbp+9E20h+var_9E90], rax
 * 0000000180045C8D: lea     rax, unk_18015F0F4
 * 0000000180045C94: mov     qword ptr [rbp+9E20h+var_9E90+8], rax
 * 0000000180045C98: movups  xmm0, [rbp+9E20h+var_9E90]
 * 0000000180045C9C: movups  [rbp+9E20h+var_8998], xmm0
 * 0000000180045CA3: mov     dword ptr [rbp+9E20h+var_8988], r13d
 * 0000000180045CAA: mov     dword ptr [rbp+9E20h+var_8988+4], esi
 * 0000000180045CB0: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045CB5: movups  xmm0, [rbp+9E20h+var_8988]
 * 0000000180045CBC: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045CC1: call    sub_1800456E0
 * 0000000180045CC6: mov     r8, rax
 * 0000000180045CC9: mov     r9d, r12d
 * 0000000180045CCC: mov     edx, 4
 * 0000000180045CD1: lea     rcx, [rbp+9E20h+var_6EE8]; Src
 * 0000000180045CD8: call    sub_1800D45C8
 * 0000000180045CDD: nop
 * 0000000180045CDE: mov     r8, rax
 * 0000000180045CE1: lea     rdx, aStandardshader_4; "StandardShader/ShaderModel40/"
 * 0000000180045CE8: lea     rcx, [rbp+9E20h+var_6F08]
 * 0000000180045CEF: call    sub_1800454BC
 * 0000000180045CF4: nop
 * 0000000180045CF5: lea     r8, aPixel_2; "/Pixel"
 * 0000000180045CFC: mov     rdx, rax
 * 0000000180045CFF: lea     rcx, [rbp+9E20h+var_6F28]
 * 0000000180045D06: call    sub_18002C088
 * 0000000180045D0B: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045D10: mov     rcx, rax
 * 0000000180045D13: call    sub_1800D46B4
 * 0000000180045D18: mov     cs:byte_18026A06C, al
 * 0000000180045D1E: lea     rcx, [rbp+9E20h+var_6F08]; void *
 * 0000000180045D25: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045D2A: nop
 * 0000000180045D2B: lea     rcx, [rbp+9E20h+var_6EE8]; void *
 * 0000000180045D32: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045D37: nop
 * 0000000180045D38: lea     rcx, dword_18026A070
 * 0000000180045D3F: call    _Init_thread_footer
 * 0000000180045D44: mov     rax, [rdi+rbx*8]
 * 0000000180045D48: mov     ecx, [r15+rax]
 * 0000000180045D4C: cmp     cs:dword_18026A078, ecx
 * 0000000180045D52: jle     loc_180045E31
 * 0000000180045D58: lea     rcx, dword_18026A078
 * 0000000180045D5F: call    _Init_thread_header
 * 0000000180045D64: cmp     cs:dword_18026A078, r14d
 * 0000000180045D6B: jnz     loc_180045E31
 * 0000000180045D71: lea     rax, unk_18015F100
 * 0000000180045D78: mov     qword ptr [rbp+9E20h+var_9E80], rax
 * 0000000180045D7C: lea     rax, unk_18015FAF8
 * 0000000180045D83: mov     qword ptr [rbp+9E20h+var_9E80+8], rax
 * 0000000180045D87: movups  xmm0, [rbp+9E20h+var_9E80]
 * 0000000180045D8B: movups  [rbp+9E20h+var_8978], xmm0
 * 0000000180045D92: mov     dword ptr [rbp+9E20h+var_8968], r13d
 * 0000000180045D99: mov     dword ptr [rbp+9E20h+var_8968+4], esi
 * 0000000180045D9F: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045DA4: movups  xmm0, [rbp+9E20h+var_8968]
 * 0000000180045DAB: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045DB0: call    sub_1800456E0
 * 0000000180045DB5: mov     r8, rax
 * 0000000180045DB8: mov     r9d, r12d
 * 0000000180045DBB: mov     rdx, r13
 * 0000000180045DBE: lea     rcx, [rbp+9E20h+var_6E88]; Src
 * 0000000180045DC5: call    sub_1800D45C8
 * 0000000180045DCA: nop
 * 0000000180045DCB: mov     r8, rax
 * 0000000180045DCE: lea     rdx, aStandardshader_5; "StandardShader/ShaderModel40/"
 * 0000000180045DD5: lea     rcx, [rbp+9E20h+var_6EA8]
 * 0000000180045DDC: call    sub_1800454BC
 * 0000000180045DE1: nop
 * 0000000180045DE2: lea     r8, aPixel_3; "/Pixel"
 * 0000000180045DE9: mov     rdx, rax
 * 0000000180045DEC: lea     rcx, [rbp+9E20h+var_6EC8]
 * 0000000180045DF3: call    sub_18002C088
 * 0000000180045DF8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045DFD: mov     rcx, rax
 * 0000000180045E00: call    sub_1800D46B4
 * 0000000180045E05: mov     cs:byte_18026A074, al
 * 0000000180045E0B: lea     rcx, [rbp+9E20h+var_6EA8]; void *
 * 0000000180045E12: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045E17: nop
 * 0000000180045E18: lea     rcx, [rbp+9E20h+var_6E88]; void *
 * 0000000180045E1F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045E24: nop
 * 0000000180045E25: lea     rcx, dword_18026A078
 * 0000000180045E2C: call    _Init_thread_footer
 * 0000000180045E31: mov     rax, [rdi+rbx*8]
 * 0000000180045E35: mov     eax, [r15+rax]
 * 0000000180045E39: cmp     cs:dword_18026A080, eax
 * 0000000180045E3F: jle     loc_180045F20
 * 0000000180045E45: lea     rcx, dword_18026A080
 * 0000000180045E4C: call    _Init_thread_header
 * 0000000180045E51: cmp     cs:dword_18026A080, r14d
 * 0000000180045E58: jnz     loc_180045F20
 * 0000000180045E5E: lea     rax, unk_18015BF50
 * 0000000180045E65: mov     qword ptr [rbp+9E20h+var_9E70], rax
 * 0000000180045E69: lea     rax, unk_18015F0F4
 * 0000000180045E70: mov     qword ptr [rbp+9E20h+var_9E70+8], rax
 * 0000000180045E74: movups  xmm0, [rbp+9E20h+var_9E70]
 * 0000000180045E78: movups  [rbp+9E20h+var_8958], xmm0
 * 0000000180045E7F: mov     dword ptr [rbp+9E20h+var_8948], r13d
 * 0000000180045E86: mov     dword ptr [rbp+9E20h+var_8948+4], esi
 * 0000000180045E8C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045E91: movups  xmm0, [rbp+9E20h+var_8948]
 * 0000000180045E98: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045E9D: call    sub_1800456E0
 * 0000000180045EA2: mov     r8, rax
 * 0000000180045EA5: mov     r9d, r12d
 * 0000000180045EA8: mov     edx, 6
 * 0000000180045EAD: lea     rcx, [rbp+9E20h+var_6E28]; Src
 * 0000000180045EB4: call    sub_1800D45C8
 * 0000000180045EB9: nop
 * 0000000180045EBA: mov     r8, rax
 * 0000000180045EBD: lea     rdx, aStandardshader_6; "StandardShader/ShaderModel40/"
 * 0000000180045EC4: lea     rcx, [rbp+9E20h+var_6E48]
 * 0000000180045ECB: call    sub_1800454BC
 * 0000000180045ED0: nop
 * 0000000180045ED1: lea     r8, aPixel_4; "/Pixel"
 * 0000000180045ED8: mov     rdx, rax
 * 0000000180045EDB: lea     rcx, [rbp+9E20h+var_6E68]
 * 0000000180045EE2: call    sub_18002C088
 * 0000000180045EE7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045EEC: mov     rcx, rax
 * 0000000180045EEF: call    sub_1800D46B4
 * 0000000180045EF4: mov     cs:byte_18026A07C, al
 * 0000000180045EFA: lea     rcx, [rbp+9E20h+var_6E48]; void *
 * 0000000180045F01: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045F06: nop
 * 0000000180045F07: lea     rcx, [rbp+9E20h+var_6E28]; void *
 * 0000000180045F0E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045F13: nop
 * 0000000180045F14: lea     rcx, dword_18026A080
 * 0000000180045F1B: call    _Init_thread_footer
 * 0000000180045F20: mov     rax, [rdi+rbx*8]
 * 0000000180045F24: mov     eax, [r15+rax]
 * 0000000180045F28: cmp     cs:dword_18026A088, eax
 * 0000000180045F2E: jle     loc_18004600F
 * 0000000180045F34: lea     rcx, dword_18026A088
 * 0000000180045F3B: call    _Init_thread_header
 * 0000000180045F40: cmp     cs:dword_18026A088, r14d
 * 0000000180045F47: jnz     loc_18004600F
 * 0000000180045F4D: lea     rax, unk_18015FB00
 * 0000000180045F54: mov     qword ptr [rbp+9E20h+var_9E60], rax
 * 0000000180045F58: lea     rax, unk_18016608C
 * 0000000180045F5F: mov     qword ptr [rbp+9E20h+var_9E60+8], rax
 * 0000000180045F63: movups  xmm0, [rbp+9E20h+var_9E60]
 * 0000000180045F67: movups  [rbp+9E20h+var_8938], xmm0
 * 0000000180045F6E: mov     dword ptr [rbp+9E20h+var_8928], r13d
 * 0000000180045F75: mov     dword ptr [rbp+9E20h+var_8928+4], esi
 * 0000000180045F7B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180045F80: movups  xmm0, [rbp+9E20h+var_8928]
 * 0000000180045F87: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180045F8C: call    sub_1800456E0
 * 0000000180045F91: mov     r8, rax
 * 0000000180045F94: mov     r9d, r12d
 * 0000000180045F97: mov     edx, 8
 * 0000000180045F9C: lea     rcx, [rbp+9E20h+var_6DC8]; Src
 * 0000000180045FA3: call    sub_1800D45C8
 * 0000000180045FA8: nop
 * 0000000180045FA9: mov     r8, rax
 * 0000000180045FAC: lea     rdx, aStandardshader_7; "StandardShader/ShaderModel40/"
 * 0000000180045FB3: lea     rcx, [rbp+9E20h+var_6DE8]
 * 0000000180045FBA: call    sub_1800454BC
 * 0000000180045FBF: nop
 * 0000000180045FC0: lea     r8, aPixel_5; "/Pixel"
 * 0000000180045FC7: mov     rdx, rax
 * 0000000180045FCA: lea     rcx, [rbp+9E20h+var_6E08]
 * 0000000180045FD1: call    sub_18002C088
 * 0000000180045FD6: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180045FDB: mov     rcx, rax
 * 0000000180045FDE: call    sub_1800D46B4
 * 0000000180045FE3: mov     cs:byte_18026A084, al
 * 0000000180045FE9: lea     rcx, [rbp+9E20h+var_6DE8]; void *
 * 0000000180045FF0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045FF5: nop
 * 0000000180045FF6: lea     rcx, [rbp+9E20h+var_6DC8]; void *
 * 0000000180045FFD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046002: nop
 * 0000000180046003: lea     rcx, dword_18026A088
 * 000000018004600A: call    _Init_thread_footer
 * 000000018004600F: mov     rax, [rdi+rbx*8]
 * 0000000180046013: mov     eax, [r15+rax]
 * 0000000180046017: cmp     cs:dword_18026A090, eax
 * 000000018004601D: jle     loc_1800460FC
 * 0000000180046023: lea     rcx, dword_18026A090
 * 000000018004602A: call    _Init_thread_header
 * 000000018004602F: cmp     cs:dword_18026A090, r14d
 * 0000000180046036: jnz     loc_1800460FC
 * 000000018004603C: lea     rax, unk_180166090
 * 0000000180046043: mov     qword ptr [rbp+9E20h+var_9E50], rax
 * 0000000180046047: lea     rax, unk_180167158
 * 000000018004604E: mov     qword ptr [rbp+9E20h+var_9E50+8], rax
 * 0000000180046052: movups  xmm0, [rbp+9E20h+var_9E50]
 * 0000000180046056: movups  [rbp+9E20h+var_8918], xmm0
 * 000000018004605D: mov     dword ptr [rbp+9E20h+var_8908], r13d
 * 0000000180046064: mov     dword ptr [rbp+9E20h+var_8908+4], esi
 * 000000018004606A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004606F: movups  xmm0, [rbp+9E20h+var_8908]
 * 0000000180046076: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004607B: call    sub_1800456E0
 * 0000000180046080: mov     r8, rax
 * 0000000180046083: mov     r9d, r12d
 * 0000000180046086: mov     rdx, r12
 * 0000000180046089: lea     rcx, [rbp+9E20h+var_6D68]; Src
 * 0000000180046090: call    sub_1800D45C8
 * 0000000180046095: nop
 * 0000000180046096: mov     r8, rax
 * 0000000180046099: lea     rdx, aStandardshader_8; "StandardShader/ShaderModel40/"
 * 00000001800460A0: lea     rcx, [rbp+9E20h+var_6D88]
 * 00000001800460A7: call    sub_1800454BC
 * 00000001800460AC: nop
 * 00000001800460AD: lea     r8, aPixel_6; "/Pixel"
 * 00000001800460B4: mov     rdx, rax
 * 00000001800460B7: lea     rcx, [rbp+9E20h+var_6DA8]
 * 00000001800460BE: call    sub_18002C088
 * 00000001800460C3: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800460C8: mov     rcx, rax
 * 00000001800460CB: call    sub_1800D46B4
 * 00000001800460D0: mov     cs:byte_18026A08C, al
 * 00000001800460D6: lea     rcx, [rbp+9E20h+var_6D88]; void *
 * 00000001800460DD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800460E2: nop
 * 00000001800460E3: lea     rcx, [rbp+9E20h+var_6D68]; void *
 * 00000001800460EA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800460EF: nop
 * 00000001800460F0: lea     rcx, dword_18026A090
 * 00000001800460F7: call    _Init_thread_footer
 * 00000001800460FC: mov     rax, [rdi+rbx*8]
 * 0000000180046100: mov     eax, [r15+rax]
 * 0000000180046104: cmp     cs:dword_18026A098, eax
 * 000000018004610A: jle     loc_1800461EB
 * 0000000180046110: lea     rcx, dword_18026A098
 * 0000000180046117: call    _Init_thread_header
 * 000000018004611C: cmp     cs:dword_18026A098, r14d
 * 0000000180046123: jnz     loc_1800461EB
 * 0000000180046129: lea     rax, unk_18015FB00
 * 0000000180046130: mov     qword ptr [rbp+9E20h+var_9E40], rax
 * 0000000180046134: lea     rax, unk_18016608C
 * 000000018004613B: mov     qword ptr [rbp+9E20h+var_9E40+8], rax
 * 000000018004613F: movups  xmm0, [rbp+9E20h+var_9E40]
 * 0000000180046143: movups  [rbp+9E20h+var_88F8], xmm0
 * 000000018004614A: mov     dword ptr [rbp+9E20h+var_88E8], r13d
 * 0000000180046151: mov     dword ptr [rbp+9E20h+var_88E8+4], esi
 * 0000000180046157: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004615C: movups  xmm0, [rbp+9E20h+var_88E8]
 * 0000000180046163: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046168: call    sub_1800456E0
 * 000000018004616D: mov     r8, rax
 * 0000000180046170: mov     r9d, r12d
 * 0000000180046173: mov     edx, 0Ah
 * 0000000180046178: lea     rcx, [rbp+9E20h+var_6D08]; Src
 * 000000018004617F: call    sub_1800D45C8
 * 0000000180046184: nop
 * 0000000180046185: mov     r8, rax
 * 0000000180046188: lea     rdx, aStandardshader_9; "StandardShader/ShaderModel40/"
 * 000000018004618F: lea     rcx, [rbp+9E20h+var_6D28]
 * 0000000180046196: call    sub_1800454BC
 * 000000018004619B: nop
 * 000000018004619C: lea     r8, aPixel_7; "/Pixel"
 * 00000001800461A3: mov     rdx, rax
 * 00000001800461A6: lea     rcx, [rbp+9E20h+var_6D48]
 * 00000001800461AD: call    sub_18002C088
 * 00000001800461B2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800461B7: mov     rcx, rax
 * 00000001800461BA: call    sub_1800D46B4
 * 00000001800461BF: mov     cs:byte_18026A094, al
 * 00000001800461C5: lea     rcx, [rbp+9E20h+var_6D28]; void *
 * 00000001800461CC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800461D1: nop
 * 00000001800461D2: lea     rcx, [rbp+9E20h+var_6D08]; void *
 * 00000001800461D9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800461DE: nop
 * 00000001800461DF: lea     rcx, dword_18026A098
 * 00000001800461E6: call    _Init_thread_footer
 * 00000001800461EB: mov     rax, [rdi+rbx*8]
 * 00000001800461EF: mov     eax, [r15+rax]
 * 00000001800461F3: cmp     cs:dword_18026A0A0, eax
 * 00000001800461F9: jle     loc_1800462DA
 * 00000001800461FF: lea     rcx, dword_18026A0A0
 * 0000000180046206: call    _Init_thread_header
 * 000000018004620B: cmp     cs:dword_18026A0A0, r14d
 * 0000000180046212: jnz     loc_1800462DA
 * 0000000180046218: lea     rax, unk_180167160
 * 000000018004621F: mov     qword ptr [rbp+9E20h+var_9E30], rax
 * 0000000180046223: lea     rax, unk_18016D718
 * 000000018004622A: mov     qword ptr [rbp+9E20h+var_9E30+8], rax
 * 000000018004622E: movups  xmm0, [rbp+9E20h+var_9E30]
 * 0000000180046232: movups  [rbp+9E20h+var_88D8], xmm0
 * 0000000180046239: mov     dword ptr [rbp+9E20h+var_88C8], r13d
 * 0000000180046240: mov     dword ptr [rbp+9E20h+var_88C8+4], esi
 * 0000000180046246: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004624B: movups  xmm0, [rbp+9E20h+var_88C8]
 * 0000000180046252: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046257: call    sub_1800456E0
 * 000000018004625C: mov     r8, rax
 * 000000018004625F: mov     r9d, r12d
 * 0000000180046262: mov     edx, 10h
 * 0000000180046267: lea     rcx, [rbp+9E20h+var_6CA8]; Src
 * 000000018004626E: call    sub_1800D45C8
 * 0000000180046273: nop
 * 0000000180046274: mov     r8, rax
 * 0000000180046277: lea     rdx, aStandardshader_10; "StandardShader/ShaderModel40/"
 * 000000018004627E: lea     rcx, [rbp+9E20h+var_6CC8]
 * 0000000180046285: call    sub_1800454BC
 * 000000018004628A: nop
 * 000000018004628B: lea     r8, aPixel_8; "/Pixel"
 * 0000000180046292: mov     rdx, rax
 * 0000000180046295: lea     rcx, [rbp+9E20h+var_6CE8]
 * 000000018004629C: call    sub_18002C088
 * 00000001800462A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800462A6: mov     rcx, rax
 * 00000001800462A9: call    sub_1800D46B4
 * 00000001800462AE: mov     cs:byte_18026A09C, al
 * 00000001800462B4: lea     rcx, [rbp+9E20h+var_6CC8]; void *
 * 00000001800462BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800462C0: nop
 * 00000001800462C1: lea     rcx, [rbp+9E20h+var_6CA8]; void *
 * 00000001800462C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800462CD: nop
 * 00000001800462CE: lea     rcx, dword_18026A0A0
 * 00000001800462D5: call    _Init_thread_footer
 * 00000001800462DA: mov     rax, [rdi+rbx*8]
 * 00000001800462DE: mov     eax, [r15+rax]
 * 00000001800462E2: cmp     cs:dword_18026A0A8, eax
 * 00000001800462E8: jle     loc_1800463C9
 * 00000001800462EE: lea     rcx, dword_18026A0A8
 * 00000001800462F5: call    _Init_thread_header
 * 00000001800462FA: cmp     cs:dword_18026A0A8, r14d
 * 0000000180046301: jnz     loc_1800463C9
 * 0000000180046307: lea     rax, unk_180167160
 * 000000018004630E: mov     qword ptr [rbp+9E20h+var_9E20], rax
 * 0000000180046312: lea     rax, unk_18016D718
 * 0000000180046319: mov     qword ptr [rbp+9E20h+var_9E20+8], rax
 * 000000018004631D: movups  xmm0, [rbp+9E20h+var_9E20]
 * 0000000180046321: movups  [rbp+9E20h+var_88B8], xmm0
 * 0000000180046328: mov     dword ptr [rbp+9E20h+var_88A8], r13d
 * 000000018004632F: mov     dword ptr [rbp+9E20h+var_88A8+4], esi
 * 0000000180046335: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004633A: movups  xmm0, [rbp+9E20h+var_88A8]
 * 0000000180046341: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046346: call    sub_1800456E0
 * 000000018004634B: mov     r8, rax
 * 000000018004634E: mov     r9d, r12d
 * 0000000180046351: mov     edx, 12h
 * 0000000180046356: lea     rcx, [rbp+9E20h+var_6C48]; Src
 * 000000018004635D: call    sub_1800D45C8
 * 0000000180046362: nop
 * 0000000180046363: mov     r8, rax
 * 0000000180046366: lea     rdx, aStandardshader_11; "StandardShader/ShaderModel40/"
 * 000000018004636D: lea     rcx, [rbp+9E20h+var_6C68]
 * 0000000180046374: call    sub_1800454BC
 * 0000000180046379: nop
 * 000000018004637A: lea     r8, aPixel_9; "/Pixel"
 * 0000000180046381: mov     rdx, rax
 * 0000000180046384: lea     rcx, [rbp+9E20h+var_6C88]
 * 000000018004638B: call    sub_18002C088
 * 0000000180046390: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046395: mov     rcx, rax
 * 0000000180046398: call    sub_1800D46B4
 * 000000018004639D: mov     cs:byte_18026A0A4, al
 * 00000001800463A3: lea     rcx, [rbp+9E20h+var_6C68]; void *
 * 00000001800463AA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800463AF: nop
 * 00000001800463B0: lea     rcx, [rbp+9E20h+var_6C48]; void *
 * 00000001800463B7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800463BC: nop
 * 00000001800463BD: lea     rcx, dword_18026A0A8
 * 00000001800463C4: call    _Init_thread_footer
 * 00000001800463C9: mov     rax, [rdi+rbx*8]
 * 00000001800463CD: mov     eax, [r15+rax]
 * 00000001800463D1: cmp     cs:dword_18026A0B0, eax
 * 00000001800463D7: jle     loc_1800464B8
 * 00000001800463DD: lea     rcx, dword_18026A0B0
 * 00000001800463E4: call    _Init_thread_header
 * 00000001800463E9: cmp     cs:dword_18026A0B0, r14d
 * 00000001800463F0: jnz     loc_1800464B8
 * 00000001800463F6: lea     rax, unk_18016D720
 * 00000001800463FD: mov     qword ptr [rbp+9E20h+var_9E10], rax
 * 0000000180046401: lea     rax, unk_180170A18
 * 0000000180046408: mov     qword ptr [rbp+9E20h+var_9E10+8], rax
 * 000000018004640C: movups  xmm0, [rbp+9E20h+var_9E10]
 * 0000000180046410: movups  [rbp+9E20h+var_8898], xmm0
 * 0000000180046417: mov     dword ptr [rbp+9E20h+var_8888], r13d
 * 000000018004641E: mov     dword ptr [rbp+9E20h+var_8888+4], esi
 * 0000000180046424: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046429: movups  xmm0, [rbp+9E20h+var_8888]
 * 0000000180046430: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046435: call    sub_1800456E0
 * 000000018004643A: mov     r8, rax
 * 000000018004643D: mov     r9d, r12d
 * 0000000180046440: mov     edx, 14h
 * 0000000180046445: lea     rcx, [rbp+9E20h+var_6BE8]; Src
 * 000000018004644C: call    sub_1800D45C8
 * 0000000180046451: nop
 * 0000000180046452: mov     r8, rax
 * 0000000180046455: lea     rdx, aStandardshader_12; "StandardShader/ShaderModel40/"
 * 000000018004645C: lea     rcx, [rbp+9E20h+var_6C08]
 * 0000000180046463: call    sub_1800454BC
 * 0000000180046468: nop
 * 0000000180046469: lea     r8, aPixel_10; "/Pixel"
 * 0000000180046470: mov     rdx, rax
 * 0000000180046473: lea     rcx, [rbp+9E20h+var_6C28]
 * 000000018004647A: call    sub_18002C088
 * 000000018004647F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046484: mov     rcx, rax
 * 0000000180046487: call    sub_1800D46B4
 * 000000018004648C: mov     cs:byte_18026A0AC, al
 * 0000000180046492: lea     rcx, [rbp+9E20h+var_6C08]; void *
 * 0000000180046499: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004649E: nop
 * 000000018004649F: lea     rcx, [rbp+9E20h+var_6BE8]; void *
 * 00000001800464A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800464AB: nop
 * 00000001800464AC: lea     rcx, dword_18026A0B0
 * 00000001800464B3: call    _Init_thread_footer
 * 00000001800464B8: mov     rax, [rdi+rbx*8]
 * 00000001800464BC: mov     eax, [r15+rax]
 * 00000001800464C0: cmp     cs:dword_18026A0B8, eax
 * 00000001800464C6: jle     loc_1800465A7
 * 00000001800464CC: lea     rcx, dword_18026A0B8
 * 00000001800464D3: call    _Init_thread_header
 * 00000001800464D8: cmp     cs:dword_18026A0B8, r14d
 * 00000001800464DF: jnz     loc_1800465A7
 * 00000001800464E5: lea     rax, unk_18016D720
 * 00000001800464EC: mov     qword ptr [rbp+9E20h+var_9E00], rax
 * 00000001800464F0: lea     rax, unk_180170A18
 * 00000001800464F7: mov     qword ptr [rbp+9E20h+var_9E00+8], rax
 * 00000001800464FB: movups  xmm0, [rbp+9E20h+var_9E00]
 * 00000001800464FF: movups  [rbp+9E20h+var_8878], xmm0
 * 0000000180046506: mov     dword ptr [rbp+9E20h+var_8868], r13d
 * 000000018004650D: mov     dword ptr [rbp+9E20h+var_8868+4], esi
 * 0000000180046513: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046518: movups  xmm0, [rbp+9E20h+var_8868]
 * 000000018004651F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046524: call    sub_1800456E0
 * 0000000180046529: mov     r8, rax
 * 000000018004652C: mov     r9d, r12d
 * 000000018004652F: mov     edx, 16h
 * 0000000180046534: lea     rcx, [rbp+9E20h+var_6B88]; Src
 * 000000018004653B: call    sub_1800D45C8
 * 0000000180046540: nop
 * 0000000180046541: mov     r8, rax
 * 0000000180046544: lea     rdx, aStandardshader_13; "StandardShader/ShaderModel40/"
 * 000000018004654B: lea     rcx, [rbp+9E20h+var_6BA8]
 * 0000000180046552: call    sub_1800454BC
 * 0000000180046557: nop
 * 0000000180046558: lea     r8, aPixel_11; "/Pixel"
 * 000000018004655F: mov     rdx, rax
 * 0000000180046562: lea     rcx, [rbp+9E20h+var_6BC8]
 * 0000000180046569: call    sub_18002C088
 * 000000018004656E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046573: mov     rcx, rax
 * 0000000180046576: call    sub_1800D46B4
 * 000000018004657B: mov     cs:byte_18026A0B4, al
 * 0000000180046581: lea     rcx, [rbp+9E20h+var_6BA8]; void *
 * 0000000180046588: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004658D: nop
 * 000000018004658E: lea     rcx, [rbp+9E20h+var_6B88]; void *
 * 0000000180046595: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004659A: nop
 * 000000018004659B: lea     rcx, dword_18026A0B8
 * 00000001800465A2: call    _Init_thread_footer
 * 00000001800465A7: mov     rax, [rdi+rbx*8]
 * 00000001800465AB: mov     eax, [r15+rax]
 * 00000001800465AF: cmp     cs:dword_18026A0C0, eax
 * 00000001800465B5: jle     loc_180046696
 * 00000001800465BB: lea     rcx, dword_18026A0C0
 * 00000001800465C2: call    _Init_thread_header
 * 00000001800465C7: cmp     cs:dword_18026A0C0, r14d
 * 00000001800465CE: jnz     loc_180046696
 * 00000001800465D4: lea     rax, unk_180170A20
 * 00000001800465DB: mov     qword ptr [rbp+9E20h+var_9DF0], rax
 * 00000001800465DF: lea     rax, unk_1801771AC
 * 00000001800465E6: mov     qword ptr [rbp+9E20h+var_9DF0+8], rax
 * 00000001800465EA: movups  xmm0, [rbp+9E20h+var_9DF0]
 * 00000001800465EE: movups  [rbp+9E20h+var_8858], xmm0
 * 00000001800465F5: mov     dword ptr [rbp+9E20h+var_8848], r13d
 * 00000001800465FC: mov     dword ptr [rbp+9E20h+var_8848+4], esi
 * 0000000180046602: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046607: movups  xmm0, [rbp+9E20h+var_8848]
 * 000000018004660E: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046613: call    sub_1800456E0
 * 0000000180046618: mov     r8, rax
 * 000000018004661B: mov     r9d, r12d
 * 000000018004661E: mov     edx, 18h
 * 0000000180046623: lea     rcx, [rbp+9E20h+var_6B28]; Src
 * 000000018004662A: call    sub_1800D45C8
 * 000000018004662F: nop
 * 0000000180046630: mov     r8, rax
 * 0000000180046633: lea     rdx, aStandardshader_14; "StandardShader/ShaderModel40/"
 * 000000018004663A: lea     rcx, [rbp+9E20h+var_6B48]
 * 0000000180046641: call    sub_1800454BC
 * 0000000180046646: nop
 * 0000000180046647: lea     r8, aPixel_12; "/Pixel"
 * 000000018004664E: mov     rdx, rax
 * 0000000180046651: lea     rcx, [rbp+9E20h+var_6B68]
 * 0000000180046658: call    sub_18002C088
 * 000000018004665D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046662: mov     rcx, rax
 * 0000000180046665: call    sub_1800D46B4
 * 000000018004666A: mov     cs:byte_18026A0BC, al
 * 0000000180046670: lea     rcx, [rbp+9E20h+var_6B48]; void *
 * 0000000180046677: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004667C: nop
 * 000000018004667D: lea     rcx, [rbp+9E20h+var_6B28]; void *
 * 0000000180046684: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046689: nop
 * 000000018004668A: lea     rcx, dword_18026A0C0
 * 0000000180046691: call    _Init_thread_footer
 * 0000000180046696: mov     rax, [rdi+rbx*8]
 * 000000018004669A: mov     eax, [r15+rax]
 * 000000018004669E: cmp     cs:dword_18026A0C8, eax
 * 00000001800466A4: jle     loc_180046785
 * 00000001800466AA: lea     rcx, dword_18026A0C8
 * 00000001800466B1: call    _Init_thread_header
 * 00000001800466B6: cmp     cs:dword_18026A0C8, r14d
 * 00000001800466BD: jnz     loc_180046785
 * 00000001800466C3: lea     rax, unk_180170A20
 * 00000001800466CA: mov     qword ptr [rbp+9E20h+var_9DE0], rax
 * 00000001800466CE: lea     rax, unk_1801771AC
 * 00000001800466D5: mov     qword ptr [rbp+9E20h+var_9DE0+8], rax
 * 00000001800466D9: movups  xmm0, [rbp+9E20h+var_9DE0]
 * 00000001800466DD: movups  [rbp+9E20h+var_8838], xmm0
 * 00000001800466E4: mov     dword ptr [rbp+9E20h+var_8828], r13d
 * 00000001800466EB: mov     dword ptr [rbp+9E20h+var_8828+4], esi
 * 00000001800466F1: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800466F6: movups  xmm0, [rbp+9E20h+var_8828]
 * 00000001800466FD: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046702: call    sub_1800456E0
 * 0000000180046707: mov     r8, rax
 * 000000018004670A: mov     r9d, r12d
 * 000000018004670D: mov     edx, 1Ah
 * 0000000180046712: lea     rcx, [rbp+9E20h+var_6AC8]; Src
 * 0000000180046719: call    sub_1800D45C8
 * 000000018004671E: nop
 * 000000018004671F: mov     r8, rax
 * 0000000180046722: lea     rdx, aStandardshader_15; "StandardShader/ShaderModel40/"
 * 0000000180046729: lea     rcx, [rbp+9E20h+var_6AE8]
 * 0000000180046730: call    sub_1800454BC
 * 0000000180046735: nop
 * 0000000180046736: lea     r8, aPixel_13; "/Pixel"
 * 000000018004673D: mov     rdx, rax
 * 0000000180046740: lea     rcx, [rbp+9E20h+var_6B08]
 * 0000000180046747: call    sub_18002C088
 * 000000018004674C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046751: mov     rcx, rax
 * 0000000180046754: call    sub_1800D46B4
 * 0000000180046759: mov     cs:byte_18026A0C4, al
 * 000000018004675F: lea     rcx, [rbp+9E20h+var_6AE8]; void *
 * 0000000180046766: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004676B: nop
 * 000000018004676C: lea     rcx, [rbp+9E20h+var_6AC8]; void *
 * 0000000180046773: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046778: nop
 * 0000000180046779: lea     rcx, dword_18026A0C8
 * 0000000180046780: call    _Init_thread_footer
 * 0000000180046785: mov     rax, [rdi+rbx*8]
 * 0000000180046789: mov     eax, [r15+rax]
 * 000000018004678D: cmp     cs:dword_18026A0D0, eax
 * 0000000180046793: jle     loc_180046874
 * 0000000180046799: lea     rcx, dword_18026A0D0
 * 00000001800467A0: call    _Init_thread_header
 * 00000001800467A5: cmp     cs:dword_18026A0D0, r14d
 * 00000001800467AC: jnz     loc_180046874
 * 00000001800467B2: lea     rax, unk_180155160
 * 00000001800467B9: mov     qword ptr [rbp+9E20h+var_9DD0], rax
 * 00000001800467BD: lea     rax, unk_18015B544
 * 00000001800467C4: mov     qword ptr [rbp+9E20h+var_9DD0+8], rax
 * 00000001800467C8: movups  xmm0, [rbp+9E20h+var_9DD0]
 * 00000001800467CC: movups  [rbp+9E20h+var_8818], xmm0
 * 00000001800467D3: mov     dword ptr [rbp+9E20h+var_8808], r13d
 * 00000001800467DA: mov     dword ptr [rbp+9E20h+var_8808+4], esi
 * 00000001800467E0: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800467E5: movups  xmm0, [rbp+9E20h+var_8808]
 * 00000001800467EC: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800467F1: call    sub_1800456E0
 * 00000001800467F6: mov     r8, rax
 * 00000001800467F9: mov     r9d, r12d
 * 00000001800467FC: mov     edx, 20h ; ' '
 * 0000000180046801: lea     rcx, [rbp+9E20h+var_6A68]; Src
 * 0000000180046808: call    sub_1800D45C8
 * 000000018004680D: nop
 * 000000018004680E: mov     r8, rax
 * 0000000180046811: lea     rdx, aStandardshader_16; "StandardShader/ShaderModel40/"
 * 0000000180046818: lea     rcx, [rbp+9E20h+var_6A88]
 * 000000018004681F: call    sub_1800454BC
 * 0000000180046824: nop
 * 0000000180046825: lea     r8, aPixel_14; "/Pixel"
 * 000000018004682C: mov     rdx, rax
 * 000000018004682F: lea     rcx, [rbp+9E20h+var_6AA8]
 * 0000000180046836: call    sub_18002C088
 * 000000018004683B: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046840: mov     rcx, rax
 * 0000000180046843: call    sub_1800D46B4
 * 0000000180046848: mov     cs:byte_18026A0CC, al
 * 000000018004684E: lea     rcx, [rbp+9E20h+var_6A88]; void *
 * 0000000180046855: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004685A: nop
 * 000000018004685B: lea     rcx, [rbp+9E20h+var_6A68]; void *
 * 0000000180046862: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046867: nop
 * 0000000180046868: lea     rcx, dword_18026A0D0
 * 000000018004686F: call    _Init_thread_footer
 * 0000000180046874: mov     rax, [rdi+rbx*8]
 * 0000000180046878: mov     eax, [r15+rax]
 * 000000018004687C: cmp     cs:dword_18026A0D8, eax
 * 0000000180046882: jle     loc_180046963
 * 0000000180046888: lea     rcx, dword_18026A0D8
 * 000000018004688F: call    _Init_thread_header
 * 0000000180046894: cmp     cs:dword_18026A0D8, r14d
 * 000000018004689B: jnz     loc_180046963
 * 00000001800468A1: lea     rax, unk_18015B550
 * 00000001800468A8: mov     qword ptr [rbp+9E20h+var_9DC0], rax
 * 00000001800468AC: lea     rax, unk_18015BF48
 * 00000001800468B3: mov     qword ptr [rbp+9E20h+var_9DC0+8], rax
 * 00000001800468B7: movups  xmm0, [rbp+9E20h+var_9DC0]
 * 00000001800468BB: movups  [rbp+9E20h+var_87F8], xmm0
 * 00000001800468C2: mov     dword ptr [rbp+9E20h+var_87E8], r13d
 * 00000001800468C9: mov     dword ptr [rbp+9E20h+var_87E8+4], esi
 * 00000001800468CF: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800468D4: movups  xmm0, [rbp+9E20h+var_87E8]
 * 00000001800468DB: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800468E0: call    sub_1800456E0
 * 00000001800468E5: mov     r8, rax
 * 00000001800468E8: mov     r9d, r12d
 * 00000001800468EB: mov     edx, 21h ; '!'
 * 00000001800468F0: lea     rcx, [rbp+9E20h+var_6A08]; Src
 * 00000001800468F7: call    sub_1800D45C8
 * 00000001800468FC: nop
 * 00000001800468FD: mov     r8, rax
 * 0000000180046900: lea     rdx, aStandardshader_17; "StandardShader/ShaderModel40/"
 * 0000000180046907: lea     rcx, [rbp+9E20h+var_6A28]
 * 000000018004690E: call    sub_1800454BC
 * 0000000180046913: nop
 * 0000000180046914: lea     r8, aPixel_15; "/Pixel"
 * 000000018004691B: mov     rdx, rax
 * 000000018004691E: lea     rcx, [rbp+9E20h+var_6A48]
 * 0000000180046925: call    sub_18002C088
 * 000000018004692A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004692F: mov     rcx, rax
 * 0000000180046932: call    sub_1800D46B4
 * 0000000180046937: mov     cs:byte_18026A0D4, al
 * 000000018004693D: lea     rcx, [rbp+9E20h+var_6A28]; void *
 * 0000000180046944: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046949: nop
 * 000000018004694A: lea     rcx, [rbp+9E20h+var_6A08]; void *
 * 0000000180046951: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046956: nop
 * 0000000180046957: lea     rcx, dword_18026A0D8
 * 000000018004695E: call    _Init_thread_footer
 * 0000000180046963: mov     rax, [rdi+rbx*8]
 * 0000000180046967: mov     eax, [r15+rax]
 * 000000018004696B: cmp     cs:dword_18026A0E0, eax
 * 0000000180046971: jle     loc_180046A52
 * 0000000180046977: lea     rcx, dword_18026A0E0
 * 000000018004697E: call    _Init_thread_header
 * 0000000180046983: cmp     cs:dword_18026A0E0, r14d
 * 000000018004698A: jnz     loc_180046A52
 * 0000000180046990: lea     rax, unk_180155160
 * 0000000180046997: mov     qword ptr [rbp+9E20h+var_9DB0], rax
 * 000000018004699B: lea     rax, unk_18015B544
 * 00000001800469A2: mov     qword ptr [rbp+9E20h+var_9DB0+8], rax
 * 00000001800469A6: movups  xmm0, [rbp+9E20h+var_9DB0]
 * 00000001800469AA: movups  [rbp+9E20h+var_87D8], xmm0
 * 00000001800469B1: mov     dword ptr [rbp+9E20h+var_87C8], r13d
 * 00000001800469B8: mov     dword ptr [rbp+9E20h+var_87C8+4], esi
 * 00000001800469BE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800469C3: movups  xmm0, [rbp+9E20h+var_87C8]
 * 00000001800469CA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800469CF: call    sub_1800456E0
 * 00000001800469D4: mov     r8, rax
 * 00000001800469D7: mov     r9d, r12d
 * 00000001800469DA: mov     edx, 22h ; '"'
 * 00000001800469DF: lea     rcx, [rbp+9E20h+var_69A8]; Src
 * 00000001800469E6: call    sub_1800D45C8
 * 00000001800469EB: nop
 * 00000001800469EC: mov     r8, rax
 * 00000001800469EF: lea     rdx, aStandardshader_18; "StandardShader/ShaderModel40/"
 * 00000001800469F6: lea     rcx, [rbp+9E20h+var_69C8]
 * 00000001800469FD: call    sub_1800454BC
 * 0000000180046A02: nop
 * 0000000180046A03: lea     r8, aPixel_16; "/Pixel"
 * 0000000180046A0A: mov     rdx, rax
 * 0000000180046A0D: lea     rcx, [rbp+9E20h+var_69E8]
 * 0000000180046A14: call    sub_18002C088
 * 0000000180046A19: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046A1E: mov     rcx, rax
 * 0000000180046A21: call    sub_1800D46B4
 * 0000000180046A26: mov     cs:byte_18026A0DC, al
 * 0000000180046A2C: lea     rcx, [rbp+9E20h+var_69C8]; void *
 * 0000000180046A33: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046A38: nop
 * 0000000180046A39: lea     rcx, [rbp+9E20h+var_69A8]; void *
 * 0000000180046A40: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046A45: nop
 * 0000000180046A46: lea     rcx, dword_18026A0E0
 * 0000000180046A4D: call    _Init_thread_footer
 * 0000000180046A52: mov     rax, [rdi+rbx*8]
 * 0000000180046A56: mov     eax, [r15+rax]
 * 0000000180046A5A: cmp     cs:dword_18026A0E8, eax
 * 0000000180046A60: jle     loc_180046B4A
 * 0000000180046A66: lea     rcx, dword_18026A0E8
 * 0000000180046A6D: call    _Init_thread_header
 * 0000000180046A72: cmp     cs:dword_18026A0E8, r14d
 * 0000000180046A79: jnz     loc_180046B4A
 * 0000000180046A7F: lea     rax, unk_18015FB00
 * 0000000180046A86: mov     qword ptr [rbp+9E20h+var_9DA0], rax
 * 0000000180046A8D: lea     rax, unk_18016608C
 * 0000000180046A94: mov     qword ptr [rbp+9E20h+var_9DA0+8], rax
 * 0000000180046A9B: movups  xmm0, [rbp+9E20h+var_9DA0]
 * 0000000180046AA2: movups  [rbp+9E20h+var_87B8], xmm0
 * 0000000180046AA9: mov     dword ptr [rbp+9E20h+var_87A8], r13d
 * 0000000180046AB0: mov     dword ptr [rbp+9E20h+var_87A8+4], esi
 * 0000000180046AB6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046ABB: movups  xmm0, [rbp+9E20h+var_87A8]
 * 0000000180046AC2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046AC7: call    sub_1800456E0
 * 0000000180046ACC: mov     r8, rax
 * 0000000180046ACF: mov     r9d, r12d
 * 0000000180046AD2: mov     edx, 28h ; '('
 * 0000000180046AD7: lea     rcx, [rbp+9E20h+var_6948]; Src
 * 0000000180046ADE: call    sub_1800D45C8
 * 0000000180046AE3: nop
 * 0000000180046AE4: mov     r8, rax
 * 0000000180046AE7: lea     rdx, aStandardshader_19; "StandardShader/ShaderModel40/"
 * 0000000180046AEE: lea     rcx, [rbp+9E20h+var_6968]
 * 0000000180046AF5: call    sub_1800454BC
 * 0000000180046AFA: nop
 * 0000000180046AFB: lea     r8, aPixel_17; "/Pixel"
 * 0000000180046B02: mov     rdx, rax
 * 0000000180046B05: lea     rcx, [rbp+9E20h+var_6988]
 * 0000000180046B0C: call    sub_18002C088
 * 0000000180046B11: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046B16: mov     rcx, rax
 * 0000000180046B19: call    sub_1800D46B4
 * 0000000180046B1E: mov     cs:byte_18026A0E4, al
 * 0000000180046B24: lea     rcx, [rbp+9E20h+var_6968]; void *
 * 0000000180046B2B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046B30: nop
 * 0000000180046B31: lea     rcx, [rbp+9E20h+var_6948]; void *
 * 0000000180046B38: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046B3D: nop
 * 0000000180046B3E: lea     rcx, dword_18026A0E8
 * 0000000180046B45: call    _Init_thread_footer
 * 0000000180046B4A: mov     rax, [rdi+rbx*8]
 * 0000000180046B4E: mov     eax, [r15+rax]
 * 0000000180046B52: cmp     cs:dword_18026A0F0, eax
 * 0000000180046B58: jle     loc_180046C42
 * 0000000180046B5E: lea     rcx, dword_18026A0F0
 * 0000000180046B65: call    _Init_thread_header
 * 0000000180046B6A: cmp     cs:dword_18026A0F0, r14d
 * 0000000180046B71: jnz     loc_180046C42
 * 0000000180046B77: lea     rax, unk_180166090
 * 0000000180046B7E: mov     qword ptr [rbp+9E20h+var_9D90], rax
 * 0000000180046B85: lea     rax, unk_180167158
 * 0000000180046B8C: mov     qword ptr [rbp+9E20h+var_9D90+8], rax
 * 0000000180046B93: movups  xmm0, [rbp+9E20h+var_9D90]
 * 0000000180046B9A: movups  [rbp+9E20h+var_8798], xmm0
 * 0000000180046BA1: mov     dword ptr [rbp+9E20h+var_8788], r13d
 * 0000000180046BA8: mov     dword ptr [rbp+9E20h+var_8788+4], esi
 * 0000000180046BAE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046BB3: movups  xmm0, [rbp+9E20h+var_8788]
 * 0000000180046BBA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046BBF: call    sub_1800456E0
 * 0000000180046BC4: mov     r8, rax
 * 0000000180046BC7: mov     r9d, r12d
 * 0000000180046BCA: mov     edx, 29h ; ')'
 * 0000000180046BCF: lea     rcx, [rbp+9E20h+var_68E8]; Src
 * 0000000180046BD6: call    sub_1800D45C8
 * 0000000180046BDB: nop
 * 0000000180046BDC: mov     r8, rax
 * 0000000180046BDF: lea     rdx, aStandardshader_20; "StandardShader/ShaderModel40/"
 * 0000000180046BE6: lea     rcx, [rbp+9E20h+var_6908]
 * 0000000180046BED: call    sub_1800454BC
 * 0000000180046BF2: nop
 * 0000000180046BF3: lea     r8, aPixel_18; "/Pixel"
 * 0000000180046BFA: mov     rdx, rax
 * 0000000180046BFD: lea     rcx, [rbp+9E20h+var_6928]
 * 0000000180046C04: call    sub_18002C088
 * 0000000180046C09: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046C0E: mov     rcx, rax
 * 0000000180046C11: call    sub_1800D46B4
 * 0000000180046C16: mov     cs:byte_18026A0EC, al
 * 0000000180046C1C: lea     rcx, [rbp+9E20h+var_6908]; void *
 * 0000000180046C23: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046C28: nop
 * 0000000180046C29: lea     rcx, [rbp+9E20h+var_68E8]; void *
 * 0000000180046C30: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046C35: nop
 * 0000000180046C36: lea     rcx, dword_18026A0F0
 * 0000000180046C3D: call    _Init_thread_footer
 * 0000000180046C42: mov     rax, [rdi+rbx*8]
 * 0000000180046C46: mov     eax, [r15+rax]
 * 0000000180046C4A: cmp     cs:dword_18026A0F8, eax
 * 0000000180046C50: jle     loc_180046D3A
 * 0000000180046C56: lea     rcx, dword_18026A0F8
 * 0000000180046C5D: call    _Init_thread_header
 * 0000000180046C62: cmp     cs:dword_18026A0F8, r14d
 * 0000000180046C69: jnz     loc_180046D3A
 * 0000000180046C6F: lea     rax, unk_18015FB00
 * 0000000180046C76: mov     qword ptr [rbp+9E20h+var_9D80], rax
 * 0000000180046C7D: lea     rax, unk_18016608C
 * 0000000180046C84: mov     qword ptr [rbp+9E20h+var_9D80+8], rax
 * 0000000180046C8B: movups  xmm0, [rbp+9E20h+var_9D80]
 * 0000000180046C92: movups  [rbp+9E20h+var_8778], xmm0
 * 0000000180046C99: mov     dword ptr [rbp+9E20h+var_8768], r13d
 * 0000000180046CA0: mov     dword ptr [rbp+9E20h+var_8768+4], esi
 * 0000000180046CA6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046CAB: movups  xmm0, [rbp+9E20h+var_8768]
 * 0000000180046CB2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046CB7: call    sub_1800456E0
 * 0000000180046CBC: mov     r8, rax
 * 0000000180046CBF: mov     r9d, r12d
 * 0000000180046CC2: mov     edx, 2Ah ; '*'
 * 0000000180046CC7: lea     rcx, [rbp+9E20h+var_6888]; Src
 * 0000000180046CCE: call    sub_1800D45C8
 * 0000000180046CD3: nop
 * 0000000180046CD4: mov     r8, rax
 * 0000000180046CD7: lea     rdx, aStandardshader_21; "StandardShader/ShaderModel40/"
 * 0000000180046CDE: lea     rcx, [rbp+9E20h+var_68A8]
 * 0000000180046CE5: call    sub_1800454BC
 * 0000000180046CEA: nop
 * 0000000180046CEB: lea     r8, aPixel_19; "/Pixel"
 * 0000000180046CF2: mov     rdx, rax
 * 0000000180046CF5: lea     rcx, [rbp+9E20h+var_68C8]
 * 0000000180046CFC: call    sub_18002C088
 * 0000000180046D01: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046D06: mov     rcx, rax
 * 0000000180046D09: call    sub_1800D46B4
 * 0000000180046D0E: mov     cs:byte_18026A0F4, al
 * 0000000180046D14: lea     rcx, [rbp+9E20h+var_68A8]; void *
 * 0000000180046D1B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046D20: nop
 * 0000000180046D21: lea     rcx, [rbp+9E20h+var_6888]; void *
 * 0000000180046D28: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046D2D: nop
 * 0000000180046D2E: lea     rcx, dword_18026A0F8
 * 0000000180046D35: call    _Init_thread_footer
 * 0000000180046D3A: mov     rax, [rdi+rbx*8]
 * 0000000180046D3E: mov     eax, [r15+rax]
 * 0000000180046D42: cmp     cs:dword_18026A100, eax
 * 0000000180046D48: jle     loc_180046E32
 * 0000000180046D4E: lea     rcx, dword_18026A100
 * 0000000180046D55: call    _Init_thread_header
 * 0000000180046D5A: cmp     cs:dword_18026A100, r14d
 * 0000000180046D61: jnz     loc_180046E32
 * 0000000180046D67: lea     rax, unk_180167160
 * 0000000180046D6E: mov     qword ptr [rbp+9E20h+var_9D70], rax
 * 0000000180046D75: lea     rax, unk_18016D718
 * 0000000180046D7C: mov     qword ptr [rbp+9E20h+var_9D70+8], rax
 * 0000000180046D83: movups  xmm0, [rbp+9E20h+var_9D70]
 * 0000000180046D8A: movups  [rbp+9E20h+var_8758], xmm0
 * 0000000180046D91: mov     dword ptr [rbp+9E20h+var_8748], r13d
 * 0000000180046D98: mov     dword ptr [rbp+9E20h+var_8748+4], esi
 * 0000000180046D9E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046DA3: movups  xmm0, [rbp+9E20h+var_8748]
 * 0000000180046DAA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046DAF: call    sub_1800456E0
 * 0000000180046DB4: mov     r8, rax
 * 0000000180046DB7: mov     r9d, r12d
 * 0000000180046DBA: mov     edx, 30h ; '0'
 * 0000000180046DBF: lea     rcx, [rbp+9E20h+var_6828]; Src
 * 0000000180046DC6: call    sub_1800D45C8
 * 0000000180046DCB: nop
 * 0000000180046DCC: mov     r8, rax
 * 0000000180046DCF: lea     rdx, aStandardshader_22; "StandardShader/ShaderModel40/"
 * 0000000180046DD6: lea     rcx, [rbp+9E20h+var_6848]
 * 0000000180046DDD: call    sub_1800454BC
 * 0000000180046DE2: nop
 * 0000000180046DE3: lea     r8, aPixel_20; "/Pixel"
 * 0000000180046DEA: mov     rdx, rax
 * 0000000180046DED: lea     rcx, [rbp+9E20h+var_6868]
 * 0000000180046DF4: call    sub_18002C088
 * 0000000180046DF9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046DFE: mov     rcx, rax
 * 0000000180046E01: call    sub_1800D46B4
 * 0000000180046E06: mov     cs:byte_18026A0FC, al
 * 0000000180046E0C: lea     rcx, [rbp+9E20h+var_6848]; void *
 * 0000000180046E13: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046E18: nop
 * 0000000180046E19: lea     rcx, [rbp+9E20h+var_6828]; void *
 * 0000000180046E20: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046E25: nop
 * 0000000180046E26: lea     rcx, dword_18026A100
 * 0000000180046E2D: call    _Init_thread_footer
 * 0000000180046E32: mov     rax, [rdi+rbx*8]
 * 0000000180046E36: mov     eax, [r15+rax]
 * 0000000180046E3A: cmp     cs:dword_18026A108, eax
 * 0000000180046E40: jle     loc_180046F2A
 * 0000000180046E46: lea     rcx, dword_18026A108
 * 0000000180046E4D: call    _Init_thread_header
 * 0000000180046E52: cmp     cs:dword_18026A108, r14d
 * 0000000180046E59: jnz     loc_180046F2A
 * 0000000180046E5F: lea     rax, unk_180167160
 * 0000000180046E66: mov     qword ptr [rbp+9E20h+var_9D60], rax
 * 0000000180046E6D: lea     rax, unk_18016D718
 * 0000000180046E74: mov     qword ptr [rbp+9E20h+var_9D60+8], rax
 * 0000000180046E7B: movups  xmm0, [rbp+9E20h+var_9D60]
 * 0000000180046E82: movups  [rbp+9E20h+var_8738], xmm0
 * 0000000180046E89: mov     dword ptr [rbp+9E20h+var_8728], r13d
 * 0000000180046E90: mov     dword ptr [rbp+9E20h+var_8728+4], esi
 * 0000000180046E96: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046E9B: movups  xmm0, [rbp+9E20h+var_8728]
 * 0000000180046EA2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046EA7: call    sub_1800456E0
 * 0000000180046EAC: mov     r8, rax
 * 0000000180046EAF: mov     r9d, r12d
 * 0000000180046EB2: mov     edx, 32h ; '2'
 * 0000000180046EB7: lea     rcx, [rbp+9E20h+var_67C8]; Src
 * 0000000180046EBE: call    sub_1800D45C8
 * 0000000180046EC3: nop
 * 0000000180046EC4: mov     r8, rax
 * 0000000180046EC7: lea     rdx, aStandardshader_23; "StandardShader/ShaderModel40/"
 * 0000000180046ECE: lea     rcx, [rbp+9E20h+var_67E8]
 * 0000000180046ED5: call    sub_1800454BC
 * 0000000180046EDA: nop
 * 0000000180046EDB: lea     r8, aPixel_21; "/Pixel"
 * 0000000180046EE2: mov     rdx, rax
 * 0000000180046EE5: lea     rcx, [rbp+9E20h+var_6808]
 * 0000000180046EEC: call    sub_18002C088
 * 0000000180046EF1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046EF6: mov     rcx, rax
 * 0000000180046EF9: call    sub_1800D46B4
 * 0000000180046EFE: mov     cs:byte_18026A104, al
 * 0000000180046F04: lea     rcx, [rbp+9E20h+var_67E8]; void *
 * 0000000180046F0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046F10: nop
 * 0000000180046F11: lea     rcx, [rbp+9E20h+var_67C8]; void *
 * 0000000180046F18: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046F1D: nop
 * 0000000180046F1E: lea     rcx, dword_18026A108
 * 0000000180046F25: call    _Init_thread_footer
 * 0000000180046F2A: mov     rax, [rdi+rbx*8]
 * 0000000180046F2E: mov     eax, [r15+rax]
 * 0000000180046F32: cmp     cs:dword_18026A110, eax
 * 0000000180046F38: jle     loc_180047022
 * 0000000180046F3E: lea     rcx, dword_18026A110
 * 0000000180046F45: call    _Init_thread_header
 * 0000000180046F4A: cmp     cs:dword_18026A110, r14d
 * 0000000180046F51: jnz     loc_180047022
 * 0000000180046F57: lea     rax, unk_180170A20
 * 0000000180046F5E: mov     qword ptr [rbp+9E20h+var_9D50], rax
 * 0000000180046F65: lea     rax, unk_1801771AC
 * 0000000180046F6C: mov     qword ptr [rbp+9E20h+var_9D50+8], rax
 * 0000000180046F73: movups  xmm0, [rbp+9E20h+var_9D50]
 * 0000000180046F7A: movups  [rbp+9E20h+var_8718], xmm0
 * 0000000180046F81: mov     dword ptr [rbp+9E20h+var_8708], r13d
 * 0000000180046F88: mov     dword ptr [rbp+9E20h+var_8708+4], esi
 * 0000000180046F8E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180046F93: movups  xmm0, [rbp+9E20h+var_8708]
 * 0000000180046F9A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180046F9F: call    sub_1800456E0
 * 0000000180046FA4: mov     r8, rax
 * 0000000180046FA7: mov     r9d, r12d
 * 0000000180046FAA: mov     edx, 38h ; '8'
 * 0000000180046FAF: lea     rcx, [rbp+9E20h+var_6768]; Src
 * 0000000180046FB6: call    sub_1800D45C8
 * 0000000180046FBB: nop
 * 0000000180046FBC: mov     r8, rax
 * 0000000180046FBF: lea     rdx, aStandardshader_24; "StandardShader/ShaderModel40/"
 * 0000000180046FC6: lea     rcx, [rbp+9E20h+var_6788]
 * 0000000180046FCD: call    sub_1800454BC
 * 0000000180046FD2: nop
 * 0000000180046FD3: lea     r8, aPixel_22; "/Pixel"
 * 0000000180046FDA: mov     rdx, rax
 * 0000000180046FDD: lea     rcx, [rbp+9E20h+var_67A8]
 * 0000000180046FE4: call    sub_18002C088
 * 0000000180046FE9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180046FEE: mov     rcx, rax
 * 0000000180046FF1: call    sub_1800D46B4
 * 0000000180046FF6: mov     cs:byte_18026A10C, al
 * 0000000180046FFC: lea     rcx, [rbp+9E20h+var_6788]; void *
 * 0000000180047003: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047008: nop
 * 0000000180047009: lea     rcx, [rbp+9E20h+var_6768]; void *
 * 0000000180047010: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047015: nop
 * 0000000180047016: lea     rcx, dword_18026A110
 * 000000018004701D: call    _Init_thread_footer
 * 0000000180047022: mov     rax, [rdi+rbx*8]
 * 0000000180047026: mov     eax, [r15+rax]
 * 000000018004702A: cmp     cs:dword_18026A118, eax
 * 0000000180047030: jle     loc_18004711A
 * 0000000180047036: lea     rcx, dword_18026A118
 * 000000018004703D: call    _Init_thread_header
 * 0000000180047042: cmp     cs:dword_18026A118, r14d
 * 0000000180047049: jnz     loc_18004711A
 * 000000018004704F: lea     rax, unk_180170A20
 * 0000000180047056: mov     qword ptr [rbp+9E20h+var_9D40], rax
 * 000000018004705D: lea     rax, unk_1801771AC
 * 0000000180047064: mov     qword ptr [rbp+9E20h+var_9D40+8], rax
 * 000000018004706B: movups  xmm0, [rbp+9E20h+var_9D40]
 * 0000000180047072: movups  [rbp+9E20h+var_86F8], xmm0
 * 0000000180047079: mov     dword ptr [rbp+9E20h+var_86E8], r13d
 * 0000000180047080: mov     dword ptr [rbp+9E20h+var_86E8+4], esi
 * 0000000180047086: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004708B: movups  xmm0, [rbp+9E20h+var_86E8]
 * 0000000180047092: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047097: call    sub_1800456E0
 * 000000018004709C: mov     r8, rax
 * 000000018004709F: mov     r9d, r12d
 * 00000001800470A2: mov     edx, 3Ah ; ':'
 * 00000001800470A7: lea     rcx, [rbp+9E20h+var_6708]; Src
 * 00000001800470AE: call    sub_1800D45C8
 * 00000001800470B3: nop
 * 00000001800470B4: mov     r8, rax
 * 00000001800470B7: lea     rdx, aStandardshader_25; "StandardShader/ShaderModel40/"
 * 00000001800470BE: lea     rcx, [rbp+9E20h+var_6728]
 * 00000001800470C5: call    sub_1800454BC
 * 00000001800470CA: nop
 * 00000001800470CB: lea     r8, aPixel_23; "/Pixel"
 * 00000001800470D2: mov     rdx, rax
 * 00000001800470D5: lea     rcx, [rbp+9E20h+var_6748]
 * 00000001800470DC: call    sub_18002C088
 * 00000001800470E1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800470E6: mov     rcx, rax
 * 00000001800470E9: call    sub_1800D46B4
 * 00000001800470EE: mov     cs:byte_18026A114, al
 * 00000001800470F4: lea     rcx, [rbp+9E20h+var_6728]; void *
 * 00000001800470FB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047100: nop
 * 0000000180047101: lea     rcx, [rbp+9E20h+var_6708]; void *
 * 0000000180047108: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004710D: nop
 * 000000018004710E: lea     rcx, dword_18026A118
 * 0000000180047115: call    _Init_thread_footer
 * 000000018004711A: mov     rax, [rdi+rbx*8]
 * 000000018004711E: mov     eax, [r15+rax]
 * 0000000180047122: cmp     cs:dword_18026A120, eax
 * 0000000180047128: jle     loc_180047212
 * 000000018004712E: lea     rcx, dword_18026A120
 * 0000000180047135: call    _Init_thread_header
 * 000000018004713A: cmp     cs:dword_18026A120, r14d
 * 0000000180047141: jnz     loc_180047212
 * 0000000180047147: lea     rax, unk_180155160
 * 000000018004714E: mov     qword ptr [rbp+9E20h+var_9D30], rax
 * 0000000180047155: lea     rax, unk_18015B544
 * 000000018004715C: mov     qword ptr [rbp+9E20h+var_9D30+8], rax
 * 0000000180047163: movups  xmm0, [rbp+9E20h+var_9D30]
 * 000000018004716A: movups  [rbp+9E20h+var_86D8], xmm0
 * 0000000180047171: mov     dword ptr [rbp+9E20h+var_86C8], r13d
 * 0000000180047178: mov     dword ptr [rbp+9E20h+var_86C8+4], esi
 * 000000018004717E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047183: movups  xmm0, [rbp+9E20h+var_86C8]
 * 000000018004718A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004718F: call    sub_1800456E0
 * 0000000180047194: mov     r8, rax
 * 0000000180047197: mov     r9d, r12d
 * 000000018004719A: mov     edx, 40h ; '@'
 * 000000018004719F: lea     rcx, [rbp+9E20h+var_66A8]; Src
 * 00000001800471A6: call    sub_1800D45C8
 * 00000001800471AB: nop
 * 00000001800471AC: mov     r8, rax
 * 00000001800471AF: lea     rdx, aStandardshader_26; "StandardShader/ShaderModel40/"
 * 00000001800471B6: lea     rcx, [rbp+9E20h+var_66C8]
 * 00000001800471BD: call    sub_1800454BC
 * 00000001800471C2: nop
 * 00000001800471C3: lea     r8, aPixel_24; "/Pixel"
 * 00000001800471CA: mov     rdx, rax
 * 00000001800471CD: lea     rcx, [rbp+9E20h+var_66E8]
 * 00000001800471D4: call    sub_18002C088
 * 00000001800471D9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800471DE: mov     rcx, rax
 * 00000001800471E1: call    sub_1800D46B4
 * 00000001800471E6: mov     cs:byte_18026A11C, al
 * 00000001800471EC: lea     rcx, [rbp+9E20h+var_66C8]; void *
 * 00000001800471F3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800471F8: nop
 * 00000001800471F9: lea     rcx, [rbp+9E20h+var_66A8]; void *
 * 0000000180047200: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047205: nop
 * 0000000180047206: lea     rcx, dword_18026A120
 * 000000018004720D: call    _Init_thread_footer
 * 0000000180047212: mov     rax, [rdi+rbx*8]
 * 0000000180047216: mov     eax, [r15+rax]
 * 000000018004721A: cmp     cs:dword_18026A128, eax
 * 0000000180047220: jle     loc_18004730A
 * 0000000180047226: lea     rcx, dword_18026A128
 * 000000018004722D: call    _Init_thread_header
 * 0000000180047232: cmp     cs:dword_18026A128, r14d
 * 0000000180047239: jnz     loc_18004730A
 * 000000018004723F: lea     rax, unk_180155160
 * 0000000180047246: mov     qword ptr [rbp+9E20h+var_9D20], rax
 * 000000018004724D: lea     rax, unk_18015B544
 * 0000000180047254: mov     qword ptr [rbp+9E20h+var_9D20+8], rax
 * 000000018004725B: movups  xmm0, [rbp+9E20h+var_9D20]
 * 0000000180047262: movups  [rbp+9E20h+var_86B8], xmm0
 * 0000000180047269: mov     dword ptr [rbp+9E20h+var_86A8], r13d
 * 0000000180047270: mov     dword ptr [rbp+9E20h+var_86A8+4], esi
 * 0000000180047276: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004727B: movups  xmm0, [rbp+9E20h+var_86A8]
 * 0000000180047282: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047287: call    sub_1800456E0
 * 000000018004728C: mov     r8, rax
 * 000000018004728F: mov     r9d, r12d
 * 0000000180047292: mov     edx, 42h ; 'B'
 * 0000000180047297: lea     rcx, [rbp+9E20h+var_6648]; Src
 * 000000018004729E: call    sub_1800D45C8
 * 00000001800472A3: nop
 * 00000001800472A4: mov     r8, rax
 * 00000001800472A7: lea     rdx, aStandardshader_27; "StandardShader/ShaderModel40/"
 * 00000001800472AE: lea     rcx, [rbp+9E20h+var_6668]
 * 00000001800472B5: call    sub_1800454BC
 * 00000001800472BA: nop
 * 00000001800472BB: lea     r8, aPixel_25; "/Pixel"
 * 00000001800472C2: mov     rdx, rax
 * 00000001800472C5: lea     rcx, [rbp+9E20h+var_6688]
 * 00000001800472CC: call    sub_18002C088
 * 00000001800472D1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800472D6: mov     rcx, rax
 * 00000001800472D9: call    sub_1800D46B4
 * 00000001800472DE: mov     cs:byte_18026A124, al
 * 00000001800472E4: lea     rcx, [rbp+9E20h+var_6668]; void *
 * 00000001800472EB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800472F0: nop
 * 00000001800472F1: lea     rcx, [rbp+9E20h+var_6648]; void *
 * 00000001800472F8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800472FD: nop
 * 00000001800472FE: lea     rcx, dword_18026A128
 * 0000000180047305: call    _Init_thread_footer
 * 000000018004730A: mov     rax, [rdi+rbx*8]
 * 000000018004730E: mov     eax, [r15+rax]
 * 0000000180047312: cmp     cs:dword_18026A130, eax
 * 0000000180047318: jle     loc_180047402
 * 000000018004731E: lea     rcx, dword_18026A130
 * 0000000180047325: call    _Init_thread_header
 * 000000018004732A: cmp     cs:dword_18026A130, r14d
 * 0000000180047331: jnz     loc_180047402
 * 0000000180047337: lea     rax, unk_18015FB00
 * 000000018004733E: mov     qword ptr [rbp+9E20h+var_9D10], rax
 * 0000000180047345: lea     rax, unk_18016608C
 * 000000018004734C: mov     qword ptr [rbp+9E20h+var_9D10+8], rax
 * 0000000180047353: movups  xmm0, [rbp+9E20h+var_9D10]
 * 000000018004735A: movups  [rbp+9E20h+var_8698], xmm0
 * 0000000180047361: mov     dword ptr [rbp+9E20h+var_8688], r13d
 * 0000000180047368: mov     dword ptr [rbp+9E20h+var_8688+4], esi
 * 000000018004736E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047373: movups  xmm0, [rbp+9E20h+var_8688]
 * 000000018004737A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004737F: call    sub_1800456E0
 * 0000000180047384: mov     r8, rax
 * 0000000180047387: mov     r9d, r12d
 * 000000018004738A: mov     edx, 48h ; 'H'
 * 000000018004738F: lea     rcx, [rbp+9E20h+var_65E8]; Src
 * 0000000180047396: call    sub_1800D45C8
 * 000000018004739B: nop
 * 000000018004739C: mov     r8, rax
 * 000000018004739F: lea     rdx, aStandardshader_28; "StandardShader/ShaderModel40/"
 * 00000001800473A6: lea     rcx, [rbp+9E20h+var_6608]
 * 00000001800473AD: call    sub_1800454BC
 * 00000001800473B2: nop
 * 00000001800473B3: lea     r8, aPixel_26; "/Pixel"
 * 00000001800473BA: mov     rdx, rax
 * 00000001800473BD: lea     rcx, [rbp+9E20h+var_6628]
 * 00000001800473C4: call    sub_18002C088
 * 00000001800473C9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800473CE: mov     rcx, rax
 * 00000001800473D1: call    sub_1800D46B4
 * 00000001800473D6: mov     cs:byte_18026A12C, al
 * 00000001800473DC: lea     rcx, [rbp+9E20h+var_6608]; void *
 * 00000001800473E3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800473E8: nop
 * 00000001800473E9: lea     rcx, [rbp+9E20h+var_65E8]; void *
 * 00000001800473F0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800473F5: nop
 * 00000001800473F6: lea     rcx, dword_18026A130
 * 00000001800473FD: call    _Init_thread_footer
 * 0000000180047402: mov     rax, [rdi+rbx*8]
 * 0000000180047406: mov     eax, [r15+rax]
 * 000000018004740A: cmp     cs:dword_18026A138, eax
 * 0000000180047410: jle     loc_1800474FA
 * 0000000180047416: lea     rcx, dword_18026A138
 * 000000018004741D: call    _Init_thread_header
 * 0000000180047422: cmp     cs:dword_18026A138, r14d
 * 0000000180047429: jnz     loc_1800474FA
 * 000000018004742F: lea     rax, unk_18015FB00
 * 0000000180047436: mov     qword ptr [rbp+9E20h+var_9D00], rax
 * 000000018004743D: lea     rax, unk_18016608C
 * 0000000180047444: mov     qword ptr [rbp+9E20h+var_9D00+8], rax
 * 000000018004744B: movups  xmm0, [rbp+9E20h+var_9D00]
 * 0000000180047452: movups  [rbp+9E20h+var_8678], xmm0
 * 0000000180047459: mov     dword ptr [rbp+9E20h+var_8668], r13d
 * 0000000180047460: mov     dword ptr [rbp+9E20h+var_8668+4], esi
 * 0000000180047466: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004746B: movups  xmm0, [rbp+9E20h+var_8668]
 * 0000000180047472: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047477: call    sub_1800456E0
 * 000000018004747C: mov     r8, rax
 * 000000018004747F: mov     r9d, r12d
 * 0000000180047482: mov     edx, 4Ah ; 'J'
 * 0000000180047487: lea     rcx, [rbp+9E20h+var_6588]; Src
 * 000000018004748E: call    sub_1800D45C8
 * 0000000180047493: nop
 * 0000000180047494: mov     r8, rax
 * 0000000180047497: lea     rdx, aStandardshader_29; "StandardShader/ShaderModel40/"
 * 000000018004749E: lea     rcx, [rbp+9E20h+var_65A8]
 * 00000001800474A5: call    sub_1800454BC
 * 00000001800474AA: nop
 * 00000001800474AB: lea     r8, aPixel_27; "/Pixel"
 * 00000001800474B2: mov     rdx, rax
 * 00000001800474B5: lea     rcx, [rbp+9E20h+var_65C8]
 * 00000001800474BC: call    sub_18002C088
 * 00000001800474C1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800474C6: mov     rcx, rax
 * 00000001800474C9: call    sub_1800D46B4
 * 00000001800474CE: mov     cs:byte_18026A134, al
 * 00000001800474D4: lea     rcx, [rbp+9E20h+var_65A8]; void *
 * 00000001800474DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800474E0: nop
 * 00000001800474E1: lea     rcx, [rbp+9E20h+var_6588]; void *
 * 00000001800474E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800474ED: nop
 * 00000001800474EE: lea     rcx, dword_18026A138
 * 00000001800474F5: call    _Init_thread_footer
 * 00000001800474FA: mov     rax, [rdi+rbx*8]
 * 00000001800474FE: mov     eax, [r15+rax]
 * 0000000180047502: cmp     cs:dword_18026A140, eax
 * 0000000180047508: jle     loc_1800475F2
 * 000000018004750E: lea     rcx, dword_18026A140
 * 0000000180047515: call    _Init_thread_header
 * 000000018004751A: cmp     cs:dword_18026A140, r14d
 * 0000000180047521: jnz     loc_1800475F2
 * 0000000180047527: lea     rax, unk_180167160
 * 000000018004752E: mov     qword ptr [rbp+9E20h+var_9CF0], rax
 * 0000000180047535: lea     rax, unk_18016D718
 * 000000018004753C: mov     qword ptr [rbp+9E20h+var_9CF0+8], rax
 * 0000000180047543: movups  xmm0, [rbp+9E20h+var_9CF0]
 * 000000018004754A: movups  [rbp+9E20h+var_8658], xmm0
 * 0000000180047551: mov     dword ptr [rbp+9E20h+var_8648], r13d
 * 0000000180047558: mov     dword ptr [rbp+9E20h+var_8648+4], esi
 * 000000018004755E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047563: movups  xmm0, [rbp+9E20h+var_8648]
 * 000000018004756A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004756F: call    sub_1800456E0
 * 0000000180047574: mov     r8, rax
 * 0000000180047577: mov     r9d, r12d
 * 000000018004757A: mov     edx, 50h ; 'P'
 * 000000018004757F: lea     rcx, [rbp+9E20h+var_6528]; Src
 * 0000000180047586: call    sub_1800D45C8
 * 000000018004758B: nop
 * 000000018004758C: mov     r8, rax
 * 000000018004758F: lea     rdx, aStandardshader_30; "StandardShader/ShaderModel40/"
 * 0000000180047596: lea     rcx, [rbp+9E20h+var_6548]
 * 000000018004759D: call    sub_1800454BC
 * 00000001800475A2: nop
 * 00000001800475A3: lea     r8, aPixel_28; "/Pixel"
 * 00000001800475AA: mov     rdx, rax
 * 00000001800475AD: lea     rcx, [rbp+9E20h+var_6568]
 * 00000001800475B4: call    sub_18002C088
 * 00000001800475B9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800475BE: mov     rcx, rax
 * 00000001800475C1: call    sub_1800D46B4
 * 00000001800475C6: mov     cs:byte_18026A13C, al
 * 00000001800475CC: lea     rcx, [rbp+9E20h+var_6548]; void *
 * 00000001800475D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800475D8: nop
 * 00000001800475D9: lea     rcx, [rbp+9E20h+var_6528]; void *
 * 00000001800475E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800475E5: nop
 * 00000001800475E6: lea     rcx, dword_18026A140
 * 00000001800475ED: call    _Init_thread_footer
 * 00000001800475F2: mov     rax, [rdi+rbx*8]
 * 00000001800475F6: mov     eax, [r15+rax]
 * 00000001800475FA: cmp     cs:dword_18026A148, eax
 * 0000000180047600: jle     loc_1800476EA
 * 0000000180047606: lea     rcx, dword_18026A148
 * 000000018004760D: call    _Init_thread_header
 * 0000000180047612: cmp     cs:dword_18026A148, r14d
 * 0000000180047619: jnz     loc_1800476EA
 * 000000018004761F: lea     rax, unk_180167160
 * 0000000180047626: mov     qword ptr [rbp+9E20h+var_9CE0], rax
 * 000000018004762D: lea     rax, unk_18016D718
 * 0000000180047634: mov     qword ptr [rbp+9E20h+var_9CE0+8], rax
 * 000000018004763B: movups  xmm0, [rbp+9E20h+var_9CE0]
 * 0000000180047642: movups  [rbp+9E20h+var_8638], xmm0
 * 0000000180047649: mov     dword ptr [rbp+9E20h+var_8628], r13d
 * 0000000180047650: mov     dword ptr [rbp+9E20h+var_8628+4], esi
 * 0000000180047656: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004765B: movups  xmm0, [rbp+9E20h+var_8628]
 * 0000000180047662: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047667: call    sub_1800456E0
 * 000000018004766C: mov     r8, rax
 * 000000018004766F: mov     r9d, r12d
 * 0000000180047672: mov     edx, 52h ; 'R'
 * 0000000180047677: lea     rcx, [rbp+9E20h+var_64C8]; Src
 * 000000018004767E: call    sub_1800D45C8
 * 0000000180047683: nop
 * 0000000180047684: mov     r8, rax
 * 0000000180047687: lea     rdx, aStandardshader_31; "StandardShader/ShaderModel40/"
 * 000000018004768E: lea     rcx, [rbp+9E20h+var_64E8]
 * 0000000180047695: call    sub_1800454BC
 * 000000018004769A: nop
 * 000000018004769B: lea     r8, aPixel_29; "/Pixel"
 * 00000001800476A2: mov     rdx, rax
 * 00000001800476A5: lea     rcx, [rbp+9E20h+var_6508]
 * 00000001800476AC: call    sub_18002C088
 * 00000001800476B1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800476B6: mov     rcx, rax
 * 00000001800476B9: call    sub_1800D46B4
 * 00000001800476BE: mov     cs:byte_18026A144, al
 * 00000001800476C4: lea     rcx, [rbp+9E20h+var_64E8]; void *
 * 00000001800476CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800476D0: nop
 * 00000001800476D1: lea     rcx, [rbp+9E20h+var_64C8]; void *
 * 00000001800476D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800476DD: nop
 * 00000001800476DE: lea     rcx, dword_18026A148
 * 00000001800476E5: call    _Init_thread_footer
 * 00000001800476EA: mov     rax, [rdi+rbx*8]
 * 00000001800476EE: mov     eax, [r15+rax]
 * 00000001800476F2: cmp     cs:dword_18026A150, eax
 * 00000001800476F8: jle     loc_1800477E2
 * 00000001800476FE: lea     rcx, dword_18026A150
 * 0000000180047705: call    _Init_thread_header
 * 000000018004770A: cmp     cs:dword_18026A150, r14d
 * 0000000180047711: jnz     loc_1800477E2
 * 0000000180047717: lea     rax, unk_180170A20
 * 000000018004771E: mov     qword ptr [rbp+9E20h+var_9CD0], rax
 * 0000000180047725: lea     rax, unk_1801771AC
 * 000000018004772C: mov     qword ptr [rbp+9E20h+var_9CD0+8], rax
 * 0000000180047733: movups  xmm0, [rbp+9E20h+var_9CD0]
 * 000000018004773A: movups  [rbp+9E20h+var_8618], xmm0
 * 0000000180047741: mov     dword ptr [rbp+9E20h+var_8608], r13d
 * 0000000180047748: mov     dword ptr [rbp+9E20h+var_8608+4], esi
 * 000000018004774E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047753: movups  xmm0, [rbp+9E20h+var_8608]
 * 000000018004775A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004775F: call    sub_1800456E0
 * 0000000180047764: mov     r8, rax
 * 0000000180047767: mov     r9d, r12d
 * 000000018004776A: mov     edx, 58h ; 'X'
 * 000000018004776F: lea     rcx, [rbp+9E20h+var_6468]; Src
 * 0000000180047776: call    sub_1800D45C8
 * 000000018004777B: nop
 * 000000018004777C: mov     r8, rax
 * 000000018004777F: lea     rdx, aStandardshader_32; "StandardShader/ShaderModel40/"
 * 0000000180047786: lea     rcx, [rbp+9E20h+var_6488]
 * 000000018004778D: call    sub_1800454BC
 * 0000000180047792: nop
 * 0000000180047793: lea     r8, aPixel_30; "/Pixel"
 * 000000018004779A: mov     rdx, rax
 * 000000018004779D: lea     rcx, [rbp+9E20h+var_64A8]
 * 00000001800477A4: call    sub_18002C088
 * 00000001800477A9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800477AE: mov     rcx, rax
 * 00000001800477B1: call    sub_1800D46B4
 * 00000001800477B6: mov     cs:byte_18026A14C, al
 * 00000001800477BC: lea     rcx, [rbp+9E20h+var_6488]; void *
 * 00000001800477C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800477C8: nop
 * 00000001800477C9: lea     rcx, [rbp+9E20h+var_6468]; void *
 * 00000001800477D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800477D5: nop
 * 00000001800477D6: lea     rcx, dword_18026A150
 * 00000001800477DD: call    _Init_thread_footer
 * 00000001800477E2: mov     rax, [rdi+rbx*8]
 * 00000001800477E6: mov     eax, [r15+rax]
 * 00000001800477EA: cmp     cs:dword_18026A158, eax
 * 00000001800477F0: jle     loc_1800478DA
 * 00000001800477F6: lea     rcx, dword_18026A158
 * 00000001800477FD: call    _Init_thread_header
 * 0000000180047802: cmp     cs:dword_18026A158, r14d
 * 0000000180047809: jnz     loc_1800478DA
 * 000000018004780F: lea     rax, unk_180170A20
 * 0000000180047816: mov     qword ptr [rbp+9E20h+var_9CC0], rax
 * 000000018004781D: lea     rax, unk_1801771AC
 * 0000000180047824: mov     qword ptr [rbp+9E20h+var_9CC0+8], rax
 * 000000018004782B: movups  xmm0, [rbp+9E20h+var_9CC0]
 * 0000000180047832: movups  [rbp+9E20h+var_85F8], xmm0
 * 0000000180047839: mov     dword ptr [rbp+9E20h+var_85E8], r13d
 * 0000000180047840: mov     dword ptr [rbp+9E20h+var_85E8+4], esi
 * 0000000180047846: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004784B: movups  xmm0, [rbp+9E20h+var_85E8]
 * 0000000180047852: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047857: call    sub_1800456E0
 * 000000018004785C: mov     r8, rax
 * 000000018004785F: mov     r9d, r12d
 * 0000000180047862: mov     edx, 5Ah ; 'Z'
 * 0000000180047867: lea     rcx, [rbp+9E20h+var_6408]; Src
 * 000000018004786E: call    sub_1800D45C8
 * 0000000180047873: nop
 * 0000000180047874: mov     r8, rax
 * 0000000180047877: lea     rdx, aStandardshader_33; "StandardShader/ShaderModel40/"
 * 000000018004787E: lea     rcx, [rbp+9E20h+var_6428]
 * 0000000180047885: call    sub_1800454BC
 * 000000018004788A: nop
 * 000000018004788B: lea     r8, aPixel_31; "/Pixel"
 * 0000000180047892: mov     rdx, rax
 * 0000000180047895: lea     rcx, [rbp+9E20h+var_6448]
 * 000000018004789C: call    sub_18002C088
 * 00000001800478A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800478A6: mov     rcx, rax
 * 00000001800478A9: call    sub_1800D46B4
 * 00000001800478AE: mov     cs:byte_18026A154, al
 * 00000001800478B4: lea     rcx, [rbp+9E20h+var_6428]; void *
 * 00000001800478BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800478C0: nop
 * 00000001800478C1: lea     rcx, [rbp+9E20h+var_6408]; void *
 * 00000001800478C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800478CD: nop
 * 00000001800478CE: lea     rcx, dword_18026A158
 * 00000001800478D5: call    _Init_thread_footer
 * 00000001800478DA: mov     rax, [rdi+rbx*8]
 * 00000001800478DE: mov     eax, [r15+rax]
 * 00000001800478E2: cmp     cs:dword_18026A160, eax
 * 00000001800478E8: jle     loc_1800479D2
 * 00000001800478EE: lea     rcx, dword_18026A160
 * 00000001800478F5: call    _Init_thread_header
 * 00000001800478FA: cmp     cs:dword_18026A160, r14d
 * 0000000180047901: jnz     loc_1800479D2
 * 0000000180047907: lea     rax, unk_180155160
 * 000000018004790E: mov     qword ptr [rbp+9E20h+var_9CB0], rax
 * 0000000180047915: lea     rax, unk_18015B544
 * 000000018004791C: mov     qword ptr [rbp+9E20h+var_9CB0+8], rax
 * 0000000180047923: movups  xmm0, [rbp+9E20h+var_9CB0]
 * 000000018004792A: movups  [rbp+9E20h+var_85D8], xmm0
 * 0000000180047931: mov     dword ptr [rbp+9E20h+var_85C8], r13d
 * 0000000180047938: mov     dword ptr [rbp+9E20h+var_85C8+4], esi
 * 000000018004793E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047943: movups  xmm0, [rbp+9E20h+var_85C8]
 * 000000018004794A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004794F: call    sub_1800456E0
 * 0000000180047954: mov     r8, rax
 * 0000000180047957: mov     r9d, r12d
 * 000000018004795A: mov     edx, 60h ; '`'
 * 000000018004795F: lea     rcx, [rbp+9E20h+var_63A8]; Src
 * 0000000180047966: call    sub_1800D45C8
 * 000000018004796B: nop
 * 000000018004796C: mov     r8, rax
 * 000000018004796F: lea     rdx, aStandardshader_34; "StandardShader/ShaderModel40/"
 * 0000000180047976: lea     rcx, [rbp+9E20h+var_63C8]
 * 000000018004797D: call    sub_1800454BC
 * 0000000180047982: nop
 * 0000000180047983: lea     r8, aPixel_32; "/Pixel"
 * 000000018004798A: mov     rdx, rax
 * 000000018004798D: lea     rcx, [rbp+9E20h+var_63E8]
 * 0000000180047994: call    sub_18002C088
 * 0000000180047999: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004799E: mov     rcx, rax
 * 00000001800479A1: call    sub_1800D46B4
 * 00000001800479A6: mov     cs:byte_18026A15C, al
 * 00000001800479AC: lea     rcx, [rbp+9E20h+var_63C8]; void *
 * 00000001800479B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800479B8: nop
 * 00000001800479B9: lea     rcx, [rbp+9E20h+var_63A8]; void *
 * 00000001800479C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800479C5: nop
 * 00000001800479C6: lea     rcx, dword_18026A160
 * 00000001800479CD: call    _Init_thread_footer
 * 00000001800479D2: mov     rax, [rdi+rbx*8]
 * 00000001800479D6: mov     eax, [r15+rax]
 * 00000001800479DA: cmp     cs:dword_18026A168, eax
 * 00000001800479E0: jle     loc_180047ACA
 * 00000001800479E6: lea     rcx, dword_18026A168
 * 00000001800479ED: call    _Init_thread_header
 * 00000001800479F2: cmp     cs:dword_18026A168, r14d
 * 00000001800479F9: jnz     loc_180047ACA
 * 00000001800479FF: lea     rax, unk_180155160
 * 0000000180047A06: mov     qword ptr [rbp+9E20h+var_9CA0], rax
 * 0000000180047A0D: lea     rax, unk_18015B544
 * 0000000180047A14: mov     qword ptr [rbp+9E20h+var_9CA0+8], rax
 * 0000000180047A1B: movups  xmm0, [rbp+9E20h+var_9CA0]
 * 0000000180047A22: movups  [rbp+9E20h+var_85B8], xmm0
 * 0000000180047A29: mov     dword ptr [rbp+9E20h+var_85A8], r13d
 * 0000000180047A30: mov     dword ptr [rbp+9E20h+var_85A8+4], esi
 * 0000000180047A36: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047A3B: movups  xmm0, [rbp+9E20h+var_85A8]
 * 0000000180047A42: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047A47: call    sub_1800456E0
 * 0000000180047A4C: mov     r8, rax
 * 0000000180047A4F: mov     r9d, r12d
 * 0000000180047A52: mov     edx, 62h ; 'b'
 * 0000000180047A57: lea     rcx, [rbp+9E20h+var_6348]; Src
 * 0000000180047A5E: call    sub_1800D45C8
 * 0000000180047A63: nop
 * 0000000180047A64: mov     r8, rax
 * 0000000180047A67: lea     rdx, aStandardshader_35; "StandardShader/ShaderModel40/"
 * 0000000180047A6E: lea     rcx, [rbp+9E20h+var_6368]
 * 0000000180047A75: call    sub_1800454BC
 * 0000000180047A7A: nop
 * 0000000180047A7B: lea     r8, aPixel_33; "/Pixel"
 * 0000000180047A82: mov     rdx, rax
 * 0000000180047A85: lea     rcx, [rbp+9E20h+var_6388]
 * 0000000180047A8C: call    sub_18002C088
 * 0000000180047A91: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047A96: mov     rcx, rax
 * 0000000180047A99: call    sub_1800D46B4
 * 0000000180047A9E: mov     cs:byte_18026A164, al
 * 0000000180047AA4: lea     rcx, [rbp+9E20h+var_6368]; void *
 * 0000000180047AAB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047AB0: nop
 * 0000000180047AB1: lea     rcx, [rbp+9E20h+var_6348]; void *
 * 0000000180047AB8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047ABD: nop
 * 0000000180047ABE: lea     rcx, dword_18026A168
 * 0000000180047AC5: call    _Init_thread_footer
 * 0000000180047ACA: mov     rax, [rdi+rbx*8]
 * 0000000180047ACE: mov     eax, [r15+rax]
 * 0000000180047AD2: cmp     cs:dword_18026A170, eax
 * 0000000180047AD8: jle     loc_180047BC2
 * 0000000180047ADE: lea     rcx, dword_18026A170
 * 0000000180047AE5: call    _Init_thread_header
 * 0000000180047AEA: cmp     cs:dword_18026A170, r14d
 * 0000000180047AF1: jnz     loc_180047BC2
 * 0000000180047AF7: lea     rax, unk_18015FB00
 * 0000000180047AFE: mov     qword ptr [rbp+9E20h+var_9C90], rax
 * 0000000180047B05: lea     rax, unk_18016608C
 * 0000000180047B0C: mov     qword ptr [rbp+9E20h+var_9C90+8], rax
 * 0000000180047B13: movups  xmm0, [rbp+9E20h+var_9C90]
 * 0000000180047B1A: movups  [rbp+9E20h+var_8598], xmm0
 * 0000000180047B21: mov     dword ptr [rbp+9E20h+var_8588], r13d
 * 0000000180047B28: mov     dword ptr [rbp+9E20h+var_8588+4], esi
 * 0000000180047B2E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047B33: movups  xmm0, [rbp+9E20h+var_8588]
 * 0000000180047B3A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047B3F: call    sub_1800456E0
 * 0000000180047B44: mov     r8, rax
 * 0000000180047B47: mov     r9d, r12d
 * 0000000180047B4A: mov     edx, 68h ; 'h'
 * 0000000180047B4F: lea     rcx, [rbp+9E20h+var_62E8]; Src
 * 0000000180047B56: call    sub_1800D45C8
 * 0000000180047B5B: nop
 * 0000000180047B5C: mov     r8, rax
 * 0000000180047B5F: lea     rdx, aStandardshader_36; "StandardShader/ShaderModel40/"
 * 0000000180047B66: lea     rcx, [rbp+9E20h+var_6308]
 * 0000000180047B6D: call    sub_1800454BC
 * 0000000180047B72: nop
 * 0000000180047B73: lea     r8, aPixel_34; "/Pixel"
 * 0000000180047B7A: mov     rdx, rax
 * 0000000180047B7D: lea     rcx, [rbp+9E20h+var_6328]
 * 0000000180047B84: call    sub_18002C088
 * 0000000180047B89: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047B8E: mov     rcx, rax
 * 0000000180047B91: call    sub_1800D46B4
 * 0000000180047B96: mov     cs:byte_18026A16C, al
 * 0000000180047B9C: lea     rcx, [rbp+9E20h+var_6308]; void *
 * 0000000180047BA3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047BA8: nop
 * 0000000180047BA9: lea     rcx, [rbp+9E20h+var_62E8]; void *
 * 0000000180047BB0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047BB5: nop
 * 0000000180047BB6: lea     rcx, dword_18026A170
 * 0000000180047BBD: call    _Init_thread_footer
 * 0000000180047BC2: mov     rax, [rdi+rbx*8]
 * 0000000180047BC6: mov     eax, [r15+rax]
 * 0000000180047BCA: cmp     cs:dword_18026A178, eax
 * 0000000180047BD0: jle     loc_180047CBA
 * 0000000180047BD6: lea     rcx, dword_18026A178
 * 0000000180047BDD: call    _Init_thread_header
 * 0000000180047BE2: cmp     cs:dword_18026A178, r14d
 * 0000000180047BE9: jnz     loc_180047CBA
 * 0000000180047BEF: lea     rax, unk_18015FB00
 * 0000000180047BF6: mov     qword ptr [rbp+9E20h+var_9C80], rax
 * 0000000180047BFD: lea     rax, unk_18016608C
 * 0000000180047C04: mov     qword ptr [rbp+9E20h+var_9C80+8], rax
 * 0000000180047C0B: movups  xmm0, [rbp+9E20h+var_9C80]
 * 0000000180047C12: movups  [rbp+9E20h+var_8578], xmm0
 * 0000000180047C19: mov     dword ptr [rbp+9E20h+var_8568], r13d
 * 0000000180047C20: mov     dword ptr [rbp+9E20h+var_8568+4], esi
 * 0000000180047C26: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047C2B: movups  xmm0, [rbp+9E20h+var_8568]
 * 0000000180047C32: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047C37: call    sub_1800456E0
 * 0000000180047C3C: mov     r8, rax
 * 0000000180047C3F: mov     r9d, r12d
 * 0000000180047C42: mov     edx, 6Ah ; 'j'
 * 0000000180047C47: lea     rcx, [rbp+9E20h+var_6288]; Src
 * 0000000180047C4E: call    sub_1800D45C8
 * 0000000180047C53: nop
 * 0000000180047C54: mov     r8, rax
 * 0000000180047C57: lea     rdx, aStandardshader_37; "StandardShader/ShaderModel40/"
 * 0000000180047C5E: lea     rcx, [rbp+9E20h+var_62A8]
 * 0000000180047C65: call    sub_1800454BC
 * 0000000180047C6A: nop
 * 0000000180047C6B: lea     r8, aPixel_35; "/Pixel"
 * 0000000180047C72: mov     rdx, rax
 * 0000000180047C75: lea     rcx, [rbp+9E20h+var_62C8]
 * 0000000180047C7C: call    sub_18002C088
 * 0000000180047C81: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047C86: mov     rcx, rax
 * 0000000180047C89: call    sub_1800D46B4
 * 0000000180047C8E: mov     cs:byte_18026A174, al
 * 0000000180047C94: lea     rcx, [rbp+9E20h+var_62A8]; void *
 * 0000000180047C9B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047CA0: nop
 * 0000000180047CA1: lea     rcx, [rbp+9E20h+var_6288]; void *
 * 0000000180047CA8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047CAD: nop
 * 0000000180047CAE: lea     rcx, dword_18026A178
 * 0000000180047CB5: call    _Init_thread_footer
 * 0000000180047CBA: mov     rax, [rdi+rbx*8]
 * 0000000180047CBE: mov     eax, [r15+rax]
 * 0000000180047CC2: cmp     cs:dword_18026A180, eax
 * 0000000180047CC8: jle     loc_180047DB2
 * 0000000180047CCE: lea     rcx, dword_18026A180
 * 0000000180047CD5: call    _Init_thread_header
 * 0000000180047CDA: cmp     cs:dword_18026A180, r14d
 * 0000000180047CE1: jnz     loc_180047DB2
 * 0000000180047CE7: lea     rax, unk_180167160
 * 0000000180047CEE: mov     qword ptr [rbp+9E20h+var_9C70], rax
 * 0000000180047CF5: lea     rax, unk_18016D718
 * 0000000180047CFC: mov     qword ptr [rbp+9E20h+var_9C70+8], rax
 * 0000000180047D03: movups  xmm0, [rbp+9E20h+var_9C70]
 * 0000000180047D0A: movups  [rbp+9E20h+var_8558], xmm0
 * 0000000180047D11: mov     dword ptr [rbp+9E20h+var_8548], r13d
 * 0000000180047D18: mov     dword ptr [rbp+9E20h+var_8548+4], esi
 * 0000000180047D1E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047D23: movups  xmm0, [rbp+9E20h+var_8548]
 * 0000000180047D2A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047D2F: call    sub_1800456E0
 * 0000000180047D34: mov     r8, rax
 * 0000000180047D37: mov     r9d, r12d
 * 0000000180047D3A: mov     edx, 70h ; 'p'
 * 0000000180047D3F: lea     rcx, [rbp+9E20h+var_6228]; Src
 * 0000000180047D46: call    sub_1800D45C8
 * 0000000180047D4B: nop
 * 0000000180047D4C: mov     r8, rax
 * 0000000180047D4F: lea     rdx, aStandardshader_38; "StandardShader/ShaderModel40/"
 * 0000000180047D56: lea     rcx, [rbp+9E20h+var_6248]
 * 0000000180047D5D: call    sub_1800454BC
 * 0000000180047D62: nop
 * 0000000180047D63: lea     r8, aPixel_36; "/Pixel"
 * 0000000180047D6A: mov     rdx, rax
 * 0000000180047D6D: lea     rcx, [rbp+9E20h+var_6268]
 * 0000000180047D74: call    sub_18002C088
 * 0000000180047D79: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047D7E: mov     rcx, rax
 * 0000000180047D81: call    sub_1800D46B4
 * 0000000180047D86: mov     cs:byte_18026A17C, al
 * 0000000180047D8C: lea     rcx, [rbp+9E20h+var_6248]; void *
 * 0000000180047D93: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047D98: nop
 * 0000000180047D99: lea     rcx, [rbp+9E20h+var_6228]; void *
 * 0000000180047DA0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047DA5: nop
 * 0000000180047DA6: lea     rcx, dword_18026A180
 * 0000000180047DAD: call    _Init_thread_footer
 * 0000000180047DB2: mov     rax, [rdi+rbx*8]
 * 0000000180047DB6: mov     eax, [r15+rax]
 * 0000000180047DBA: cmp     cs:dword_18026A188, eax
 * 0000000180047DC0: jle     loc_180047EAA
 * 0000000180047DC6: lea     rcx, dword_18026A188
 * 0000000180047DCD: call    _Init_thread_header
 * 0000000180047DD2: cmp     cs:dword_18026A188, r14d
 * 0000000180047DD9: jnz     loc_180047EAA
 * 0000000180047DDF: lea     rax, unk_180167160
 * 0000000180047DE6: mov     qword ptr [rbp+9E20h+var_9C60], rax
 * 0000000180047DED: lea     rax, unk_18016D718
 * 0000000180047DF4: mov     qword ptr [rbp+9E20h+var_9C60+8], rax
 * 0000000180047DFB: movups  xmm0, [rbp+9E20h+var_9C60]
 * 0000000180047E02: movups  [rbp+9E20h+var_8538], xmm0
 * 0000000180047E09: mov     dword ptr [rbp+9E20h+var_8528], r13d
 * 0000000180047E10: mov     dword ptr [rbp+9E20h+var_8528+4], esi
 * 0000000180047E16: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047E1B: movups  xmm0, [rbp+9E20h+var_8528]
 * 0000000180047E22: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047E27: call    sub_1800456E0
 * 0000000180047E2C: mov     r8, rax
 * 0000000180047E2F: mov     r9d, r12d
 * 0000000180047E32: mov     edx, 72h ; 'r'
 * 0000000180047E37: lea     rcx, [rbp+9E20h+var_61C8]; Src
 * 0000000180047E3E: call    sub_1800D45C8
 * 0000000180047E43: nop
 * 0000000180047E44: mov     r8, rax
 * 0000000180047E47: lea     rdx, aStandardshader_39; "StandardShader/ShaderModel40/"
 * 0000000180047E4E: lea     rcx, [rbp+9E20h+var_61E8]
 * 0000000180047E55: call    sub_1800454BC
 * 0000000180047E5A: nop
 * 0000000180047E5B: lea     r8, aPixel_37; "/Pixel"
 * 0000000180047E62: mov     rdx, rax
 * 0000000180047E65: lea     rcx, [rbp+9E20h+var_6208]
 * 0000000180047E6C: call    sub_18002C088
 * 0000000180047E71: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047E76: mov     rcx, rax
 * 0000000180047E79: call    sub_1800D46B4
 * 0000000180047E7E: mov     cs:byte_18026A184, al
 * 0000000180047E84: lea     rcx, [rbp+9E20h+var_61E8]; void *
 * 0000000180047E8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047E90: nop
 * 0000000180047E91: lea     rcx, [rbp+9E20h+var_61C8]; void *
 * 0000000180047E98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047E9D: nop
 * 0000000180047E9E: lea     rcx, dword_18026A188
 * 0000000180047EA5: call    _Init_thread_footer
 * 0000000180047EAA: mov     rax, [rdi+rbx*8]
 * 0000000180047EAE: mov     eax, [r15+rax]
 * 0000000180047EB2: cmp     cs:dword_18026A190, eax
 * 0000000180047EB8: jle     loc_180047FA2
 * 0000000180047EBE: lea     rcx, dword_18026A190
 * 0000000180047EC5: call    _Init_thread_header
 * 0000000180047ECA: cmp     cs:dword_18026A190, r14d
 * 0000000180047ED1: jnz     loc_180047FA2
 * 0000000180047ED7: lea     rax, unk_180170A20
 * 0000000180047EDE: mov     qword ptr [rbp+9E20h+var_9C50], rax
 * 0000000180047EE5: lea     rax, unk_1801771AC
 * 0000000180047EEC: mov     qword ptr [rbp+9E20h+var_9C50+8], rax
 * 0000000180047EF3: movups  xmm0, [rbp+9E20h+var_9C50]
 * 0000000180047EFA: movups  [rbp+9E20h+var_8518], xmm0
 * 0000000180047F01: mov     dword ptr [rbp+9E20h+var_8508], r13d
 * 0000000180047F08: mov     dword ptr [rbp+9E20h+var_8508+4], esi
 * 0000000180047F0E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180047F13: movups  xmm0, [rbp+9E20h+var_8508]
 * 0000000180047F1A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180047F1F: call    sub_1800456E0
 * 0000000180047F24: mov     r8, rax
 * 0000000180047F27: mov     r9d, r12d
 * 0000000180047F2A: mov     edx, 78h ; 'x'
 * 0000000180047F2F: lea     rcx, [rbp+9E20h+var_6168]; Src
 * 0000000180047F36: call    sub_1800D45C8
 * 0000000180047F3B: nop
 * 0000000180047F3C: mov     r8, rax
 * 0000000180047F3F: lea     rdx, aStandardshader_40; "StandardShader/ShaderModel40/"
 * 0000000180047F46: lea     rcx, [rbp+9E20h+var_6188]
 * 0000000180047F4D: call    sub_1800454BC
 * 0000000180047F52: nop
 * 0000000180047F53: lea     r8, aPixel_38; "/Pixel"
 * 0000000180047F5A: mov     rdx, rax
 * 0000000180047F5D: lea     rcx, [rbp+9E20h+var_61A8]
 * 0000000180047F64: call    sub_18002C088
 * 0000000180047F69: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180047F6E: mov     rcx, rax
 * 0000000180047F71: call    sub_1800D46B4
 * 0000000180047F76: mov     cs:byte_18026A18C, al
 * 0000000180047F7C: lea     rcx, [rbp+9E20h+var_6188]; void *
 * 0000000180047F83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047F88: nop
 * 0000000180047F89: lea     rcx, [rbp+9E20h+var_6168]; void *
 * 0000000180047F90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047F95: nop
 * 0000000180047F96: lea     rcx, dword_18026A190
 * 0000000180047F9D: call    _Init_thread_footer
 * 0000000180047FA2: mov     rax, [rdi+rbx*8]
 * 0000000180047FA6: mov     eax, [r15+rax]
 * 0000000180047FAA: cmp     cs:dword_18026A198, eax
 * 0000000180047FB0: jle     loc_18004809A
 * 0000000180047FB6: lea     rcx, dword_18026A198
 * 0000000180047FBD: call    _Init_thread_header
 * 0000000180047FC2: cmp     cs:dword_18026A198, r14d
 * 0000000180047FC9: jnz     loc_18004809A
 * 0000000180047FCF: lea     rax, unk_180170A20
 * 0000000180047FD6: mov     qword ptr [rbp+9E20h+var_9C40], rax
 * 0000000180047FDD: lea     rax, unk_1801771AC
 * 0000000180047FE4: mov     qword ptr [rbp+9E20h+var_9C40+8], rax
 * 0000000180047FEB: movups  xmm0, [rbp+9E20h+var_9C40]
 * 0000000180047FF2: movups  [rbp+9E20h+var_84F8], xmm0
 * 0000000180047FF9: mov     dword ptr [rbp+9E20h+var_84E8], r13d
 * 0000000180048000: mov     dword ptr [rbp+9E20h+var_84E8+4], esi
 * 0000000180048006: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004800B: movups  xmm0, [rbp+9E20h+var_84E8]
 * 0000000180048012: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048017: call    sub_1800456E0
 * 000000018004801C: mov     r8, rax
 * 000000018004801F: mov     r9d, r12d
 * 0000000180048022: mov     edx, 7Ah ; 'z'
 * 0000000180048027: lea     rcx, [rbp+9E20h+var_6108]; Src
 * 000000018004802E: call    sub_1800D45C8
 * 0000000180048033: nop
 * 0000000180048034: mov     r8, rax
 * 0000000180048037: lea     rdx, aStandardshader_41; "StandardShader/ShaderModel40/"
 * 000000018004803E: lea     rcx, [rbp+9E20h+var_6128]
 * 0000000180048045: call    sub_1800454BC
 * 000000018004804A: nop
 * 000000018004804B: lea     r8, aPixel_39; "/Pixel"
 * 0000000180048052: mov     rdx, rax
 * 0000000180048055: lea     rcx, [rbp+9E20h+var_6148]
 * 000000018004805C: call    sub_18002C088
 * 0000000180048061: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048066: mov     rcx, rax
 * 0000000180048069: call    sub_1800D46B4
 * 000000018004806E: mov     cs:byte_18026A194, al
 * 0000000180048074: lea     rcx, [rbp+9E20h+var_6128]; void *
 * 000000018004807B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048080: nop
 * 0000000180048081: lea     rcx, [rbp+9E20h+var_6108]; void *
 * 0000000180048088: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004808D: nop
 * 000000018004808E: lea     rcx, dword_18026A198
 * 0000000180048095: call    _Init_thread_footer
 * 000000018004809A: mov     rax, [rdi+rbx*8]
 * 000000018004809E: mov     eax, [r15+rax]
 * 00000001800480A2: cmp     cs:dword_18026A1A0, eax
 * 00000001800480A8: jle     loc_180048192
 * 00000001800480AE: lea     rcx, dword_18026A1A0
 * 00000001800480B5: call    _Init_thread_header
 * 00000001800480BA: cmp     cs:dword_18026A1A0, r14d
 * 00000001800480C1: jnz     loc_180048192
 * 00000001800480C7: lea     rax, unk_180155160
 * 00000001800480CE: mov     qword ptr [rbp+9E20h+var_9C30], rax
 * 00000001800480D5: lea     rax, unk_18015B544
 * 00000001800480DC: mov     qword ptr [rbp+9E20h+var_9C30+8], rax
 * 00000001800480E3: movups  xmm0, [rbp+9E20h+var_9C30]
 * 00000001800480EA: movups  [rbp+9E20h+var_84D8], xmm0
 * 00000001800480F1: mov     dword ptr [rbp+9E20h+var_84C8], r13d
 * 00000001800480F8: mov     dword ptr [rbp+9E20h+var_84C8+4], esi
 * 00000001800480FE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048103: movups  xmm0, [rbp+9E20h+var_84C8]
 * 000000018004810A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004810F: call    sub_1800456E0
 * 0000000180048114: mov     r8, rax
 * 0000000180048117: mov     r9d, r12d
 * 000000018004811A: mov     edx, 80h
 * 000000018004811F: lea     rcx, [rbp+9E20h+var_60A8]; Src
 * 0000000180048126: call    sub_1800D45C8
 * 000000018004812B: nop
 * 000000018004812C: mov     r8, rax
 * 000000018004812F: lea     rdx, aStandardshader_42; "StandardShader/ShaderModel40/"
 * 0000000180048136: lea     rcx, [rbp+9E20h+var_60C8]
 * 000000018004813D: call    sub_1800454BC
 * 0000000180048142: nop
 * 0000000180048143: lea     r8, aPixel_40; "/Pixel"
 * 000000018004814A: mov     rdx, rax
 * 000000018004814D: lea     rcx, [rbp+9E20h+var_60E8]
 * 0000000180048154: call    sub_18002C088
 * 0000000180048159: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004815E: mov     rcx, rax
 * 0000000180048161: call    sub_1800D46B4
 * 0000000180048166: mov     cs:byte_18026A19C, al
 * 000000018004816C: lea     rcx, [rbp+9E20h+var_60C8]; void *
 * 0000000180048173: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048178: nop
 * 0000000180048179: lea     rcx, [rbp+9E20h+var_60A8]; void *
 * 0000000180048180: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048185: nop
 * 0000000180048186: lea     rcx, dword_18026A1A0
 * 000000018004818D: call    _Init_thread_footer
 * 0000000180048192: mov     rax, [rdi+rbx*8]
 * 0000000180048196: mov     eax, [r15+rax]
 * 000000018004819A: cmp     cs:dword_18026A1A8, eax
 * 00000001800481A0: jle     loc_18004828A
 * 00000001800481A6: lea     rcx, dword_18026A1A8
 * 00000001800481AD: call    _Init_thread_header
 * 00000001800481B2: cmp     cs:dword_18026A1A8, r14d
 * 00000001800481B9: jnz     loc_18004828A
 * 00000001800481BF: lea     rax, unk_180155160
 * 00000001800481C6: mov     qword ptr [rbp+9E20h+var_9C20], rax
 * 00000001800481CD: lea     rax, unk_18015B544
 * 00000001800481D4: mov     qword ptr [rbp+9E20h+var_9C20+8], rax
 * 00000001800481DB: movups  xmm0, [rbp+9E20h+var_9C20]
 * 00000001800481E2: movups  [rbp+9E20h+var_84B8], xmm0
 * 00000001800481E9: mov     dword ptr [rbp+9E20h+var_84A8], r13d
 * 00000001800481F0: mov     dword ptr [rbp+9E20h+var_84A8+4], esi
 * 00000001800481F6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800481FB: movups  xmm0, [rbp+9E20h+var_84A8]
 * 0000000180048202: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048207: call    sub_1800456E0
 * 000000018004820C: mov     r8, rax
 * 000000018004820F: mov     r9d, r12d
 * 0000000180048212: mov     edx, 82h
 * 0000000180048217: lea     rcx, [rbp+9E20h+var_6048]; Src
 * 000000018004821E: call    sub_1800D45C8
 * 0000000180048223: nop
 * 0000000180048224: mov     r8, rax
 * 0000000180048227: lea     rdx, aStandardshader_43; "StandardShader/ShaderModel40/"
 * 000000018004822E: lea     rcx, [rbp+9E20h+var_6068]
 * 0000000180048235: call    sub_1800454BC
 * 000000018004823A: nop
 * 000000018004823B: lea     r8, aPixel_41; "/Pixel"
 * 0000000180048242: mov     rdx, rax
 * 0000000180048245: lea     rcx, [rbp+9E20h+var_6088]
 * 000000018004824C: call    sub_18002C088
 * 0000000180048251: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048256: mov     rcx, rax
 * 0000000180048259: call    sub_1800D46B4
 * 000000018004825E: mov     cs:byte_18026A1A4, al
 * 0000000180048264: lea     rcx, [rbp+9E20h+var_6068]; void *
 * 000000018004826B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048270: nop
 * 0000000180048271: lea     rcx, [rbp+9E20h+var_6048]; void *
 * 0000000180048278: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004827D: nop
 * 000000018004827E: lea     rcx, dword_18026A1A8
 * 0000000180048285: call    _Init_thread_footer
 * 000000018004828A: mov     rax, [rdi+rbx*8]
 * 000000018004828E: mov     eax, [r15+rax]
 * 0000000180048292: cmp     cs:dword_18026A1B0, eax
 * 0000000180048298: jle     loc_180048382
 * 000000018004829E: lea     rcx, dword_18026A1B0
 * 00000001800482A5: call    _Init_thread_header
 * 00000001800482AA: cmp     cs:dword_18026A1B0, r14d
 * 00000001800482B1: jnz     loc_180048382
 * 00000001800482B7: lea     rax, unk_18015FB00
 * 00000001800482BE: mov     qword ptr [rbp+9E20h+var_9C10], rax
 * 00000001800482C5: lea     rax, unk_18016608C
 * 00000001800482CC: mov     qword ptr [rbp+9E20h+var_9C10+8], rax
 * 00000001800482D3: movups  xmm0, [rbp+9E20h+var_9C10]
 * 00000001800482DA: movups  [rbp+9E20h+var_8498], xmm0
 * 00000001800482E1: mov     dword ptr [rbp+9E20h+var_8488], r13d
 * 00000001800482E8: mov     dword ptr [rbp+9E20h+var_8488+4], esi
 * 00000001800482EE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800482F3: movups  xmm0, [rbp+9E20h+var_8488]
 * 00000001800482FA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800482FF: call    sub_1800456E0
 * 0000000180048304: mov     r8, rax
 * 0000000180048307: mov     r9d, r12d
 * 000000018004830A: mov     edx, 88h
 * 000000018004830F: lea     rcx, [rbp+9E20h+var_5FE8]; Src
 * 0000000180048316: call    sub_1800D45C8
 * 000000018004831B: nop
 * 000000018004831C: mov     r8, rax
 * 000000018004831F: lea     rdx, aStandardshader_44; "StandardShader/ShaderModel40/"
 * 0000000180048326: lea     rcx, [rbp+9E20h+var_6008]
 * 000000018004832D: call    sub_1800454BC
 * 0000000180048332: nop
 * 0000000180048333: lea     r8, aPixel_42; "/Pixel"
 * 000000018004833A: mov     rdx, rax
 * 000000018004833D: lea     rcx, [rbp+9E20h+var_6028]
 * 0000000180048344: call    sub_18002C088
 * 0000000180048349: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004834E: mov     rcx, rax
 * 0000000180048351: call    sub_1800D46B4
 * 0000000180048356: mov     cs:byte_18026A1AC, al
 * 000000018004835C: lea     rcx, [rbp+9E20h+var_6008]; void *
 * 0000000180048363: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048368: nop
 * 0000000180048369: lea     rcx, [rbp+9E20h+var_5FE8]; void *
 * 0000000180048370: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048375: nop
 * 0000000180048376: lea     rcx, dword_18026A1B0
 * 000000018004837D: call    _Init_thread_footer
 * 0000000180048382: mov     rax, [rdi+rbx*8]
 * 0000000180048386: mov     eax, [r15+rax]
 * 000000018004838A: cmp     cs:dword_18026A1B8, eax
 * 0000000180048390: jle     loc_18004847A
 * 0000000180048396: lea     rcx, dword_18026A1B8
 * 000000018004839D: call    _Init_thread_header
 * 00000001800483A2: cmp     cs:dword_18026A1B8, r14d
 * 00000001800483A9: jnz     loc_18004847A
 * 00000001800483AF: lea     rax, unk_18015FB00
 * 00000001800483B6: mov     qword ptr [rbp+9E20h+var_9C00], rax
 * 00000001800483BD: lea     rax, unk_18016608C
 * 00000001800483C4: mov     qword ptr [rbp+9E20h+var_9C00+8], rax
 * 00000001800483CB: movups  xmm0, [rbp+9E20h+var_9C00]
 * 00000001800483D2: movups  [rbp+9E20h+var_8478], xmm0
 * 00000001800483D9: mov     dword ptr [rbp+9E20h+var_8468], r13d
 * 00000001800483E0: mov     dword ptr [rbp+9E20h+var_8468+4], esi
 * 00000001800483E6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800483EB: movups  xmm0, [rbp+9E20h+var_8468]
 * 00000001800483F2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800483F7: call    sub_1800456E0
 * 00000001800483FC: mov     r8, rax
 * 00000001800483FF: mov     r9d, r12d
 * 0000000180048402: mov     edx, 8Ah
 * 0000000180048407: lea     rcx, [rbp+9E20h+var_5F88]; Src
 * 000000018004840E: call    sub_1800D45C8
 * 0000000180048413: nop
 * 0000000180048414: mov     r8, rax
 * 0000000180048417: lea     rdx, aStandardshader_45; "StandardShader/ShaderModel40/"
 * 000000018004841E: lea     rcx, [rbp+9E20h+var_5FA8]
 * 0000000180048425: call    sub_1800454BC
 * 000000018004842A: nop
 * 000000018004842B: lea     r8, aPixel_43; "/Pixel"
 * 0000000180048432: mov     rdx, rax
 * 0000000180048435: lea     rcx, [rbp+9E20h+var_5FC8]
 * 000000018004843C: call    sub_18002C088
 * 0000000180048441: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048446: mov     rcx, rax
 * 0000000180048449: call    sub_1800D46B4
 * 000000018004844E: mov     cs:byte_18026A1B4, al
 * 0000000180048454: lea     rcx, [rbp+9E20h+var_5FA8]; void *
 * 000000018004845B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048460: nop
 * 0000000180048461: lea     rcx, [rbp+9E20h+var_5F88]; void *
 * 0000000180048468: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004846D: nop
 * 000000018004846E: lea     rcx, dword_18026A1B8
 * 0000000180048475: call    _Init_thread_footer
 * 000000018004847A: mov     rax, [rdi+rbx*8]
 * 000000018004847E: mov     eax, [r15+rax]
 * 0000000180048482: cmp     cs:dword_18026A1C0, eax
 * 0000000180048488: jle     loc_180048572
 * 000000018004848E: lea     rcx, dword_18026A1C0
 * 0000000180048495: call    _Init_thread_header
 * 000000018004849A: cmp     cs:dword_18026A1C0, r14d
 * 00000001800484A1: jnz     loc_180048572
 * 00000001800484A7: lea     rax, unk_180167160
 * 00000001800484AE: mov     qword ptr [rbp+9E20h+var_9BF0], rax
 * 00000001800484B5: lea     rax, unk_18016D718
 * 00000001800484BC: mov     qword ptr [rbp+9E20h+var_9BF0+8], rax
 * 00000001800484C3: movups  xmm0, [rbp+9E20h+var_9BF0]
 * 00000001800484CA: movups  [rbp+9E20h+var_8458], xmm0
 * 00000001800484D1: mov     dword ptr [rbp+9E20h+var_8448], r13d
 * 00000001800484D8: mov     dword ptr [rbp+9E20h+var_8448+4], esi
 * 00000001800484DE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800484E3: movups  xmm0, [rbp+9E20h+var_8448]
 * 00000001800484EA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800484EF: call    sub_1800456E0
 * 00000001800484F4: mov     r8, rax
 * 00000001800484F7: mov     r9d, r12d
 * 00000001800484FA: mov     edx, 90h
 * 00000001800484FF: lea     rcx, [rbp+9E20h+var_5F28]; Src
 * 0000000180048506: call    sub_1800D45C8
 * 000000018004850B: nop
 * 000000018004850C: mov     r8, rax
 * 000000018004850F: lea     rdx, aStandardshader_46; "StandardShader/ShaderModel40/"
 * 0000000180048516: lea     rcx, [rbp+9E20h+var_5F48]
 * 000000018004851D: call    sub_1800454BC
 * 0000000180048522: nop
 * 0000000180048523: lea     r8, aPixel_44; "/Pixel"
 * 000000018004852A: mov     rdx, rax
 * 000000018004852D: lea     rcx, [rbp+9E20h+var_5F68]
 * 0000000180048534: call    sub_18002C088
 * 0000000180048539: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004853E: mov     rcx, rax
 * 0000000180048541: call    sub_1800D46B4
 * 0000000180048546: mov     cs:byte_18026A1BC, al
 * 000000018004854C: lea     rcx, [rbp+9E20h+var_5F48]; void *
 * 0000000180048553: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048558: nop
 * 0000000180048559: lea     rcx, [rbp+9E20h+var_5F28]; void *
 * 0000000180048560: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048565: nop
 * 0000000180048566: lea     rcx, dword_18026A1C0
 * 000000018004856D: call    _Init_thread_footer
 * 0000000180048572: mov     rax, [rdi+rbx*8]
 * 0000000180048576: mov     eax, [r15+rax]
 * 000000018004857A: cmp     cs:dword_18026A1C8, eax
 * 0000000180048580: jle     loc_18004866A
 * 0000000180048586: lea     rcx, dword_18026A1C8
 * 000000018004858D: call    _Init_thread_header
 * 0000000180048592: cmp     cs:dword_18026A1C8, r14d
 * 0000000180048599: jnz     loc_18004866A
 * 000000018004859F: lea     rax, unk_180167160
 * 00000001800485A6: mov     qword ptr [rbp+9E20h+var_9BE0], rax
 * 00000001800485AD: lea     rax, unk_18016D718
 * 00000001800485B4: mov     qword ptr [rbp+9E20h+var_9BE0+8], rax
 * 00000001800485BB: movups  xmm0, [rbp+9E20h+var_9BE0]
 * 00000001800485C2: movups  [rbp+9E20h+var_8438], xmm0
 * 00000001800485C9: mov     dword ptr [rbp+9E20h+var_8428], r13d
 * 00000001800485D0: mov     dword ptr [rbp+9E20h+var_8428+4], esi
 * 00000001800485D6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800485DB: movups  xmm0, [rbp+9E20h+var_8428]
 * 00000001800485E2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800485E7: call    sub_1800456E0
 * 00000001800485EC: mov     r8, rax
 * 00000001800485EF: mov     r9d, r12d
 * 00000001800485F2: mov     edx, 92h
 * 00000001800485F7: lea     rcx, [rbp+9E20h+var_5EC8]; Src
 * 00000001800485FE: call    sub_1800D45C8
 * 0000000180048603: nop
 * 0000000180048604: mov     r8, rax
 * 0000000180048607: lea     rdx, aStandardshader_47; "StandardShader/ShaderModel40/"
 * 000000018004860E: lea     rcx, [rbp+9E20h+var_5EE8]
 * 0000000180048615: call    sub_1800454BC
 * 000000018004861A: nop
 * 000000018004861B: lea     r8, aPixel_45; "/Pixel"
 * 0000000180048622: mov     rdx, rax
 * 0000000180048625: lea     rcx, [rbp+9E20h+var_5F08]
 * 000000018004862C: call    sub_18002C088
 * 0000000180048631: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048636: mov     rcx, rax
 * 0000000180048639: call    sub_1800D46B4
 * 000000018004863E: mov     cs:byte_18026A1C4, al
 * 0000000180048644: lea     rcx, [rbp+9E20h+var_5EE8]; void *
 * 000000018004864B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048650: nop
 * 0000000180048651: lea     rcx, [rbp+9E20h+var_5EC8]; void *
 * 0000000180048658: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004865D: nop
 * 000000018004865E: lea     rcx, dword_18026A1C8
 * 0000000180048665: call    _Init_thread_footer
 * 000000018004866A: mov     rax, [rdi+rbx*8]
 * 000000018004866E: mov     eax, [r15+rax]
 * 0000000180048672: cmp     cs:dword_18026A1D0, eax
 * 0000000180048678: jle     loc_180048762
 * 000000018004867E: lea     rcx, dword_18026A1D0
 * 0000000180048685: call    _Init_thread_header
 * 000000018004868A: cmp     cs:dword_18026A1D0, r14d
 * 0000000180048691: jnz     loc_180048762
 * 0000000180048697: lea     rax, unk_180170A20
 * 000000018004869E: mov     qword ptr [rbp+9E20h+var_9BD0], rax
 * 00000001800486A5: lea     rax, unk_1801771AC
 * 00000001800486AC: mov     qword ptr [rbp+9E20h+var_9BD0+8], rax
 * 00000001800486B3: movups  xmm0, [rbp+9E20h+var_9BD0]
 * 00000001800486BA: movups  [rbp+9E20h+var_8418], xmm0
 * 00000001800486C1: mov     dword ptr [rbp+9E20h+var_8408], r13d
 * 00000001800486C8: mov     dword ptr [rbp+9E20h+var_8408+4], esi
 * 00000001800486CE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800486D3: movups  xmm0, [rbp+9E20h+var_8408]
 * 00000001800486DA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800486DF: call    sub_1800456E0
 * 00000001800486E4: mov     r8, rax
 * 00000001800486E7: mov     r9d, r12d
 * 00000001800486EA: mov     edx, 98h
 * 00000001800486EF: lea     rcx, [rbp+9E20h+var_5E68]; Src
 * 00000001800486F6: call    sub_1800D45C8
 * 00000001800486FB: nop
 * 00000001800486FC: mov     r8, rax
 * 00000001800486FF: lea     rdx, aStandardshader_48; "StandardShader/ShaderModel40/"
 * 0000000180048706: lea     rcx, [rbp+9E20h+var_5E88]
 * 000000018004870D: call    sub_1800454BC
 * 0000000180048712: nop
 * 0000000180048713: lea     r8, aPixel_46; "/Pixel"
 * 000000018004871A: mov     rdx, rax
 * 000000018004871D: lea     rcx, [rbp+9E20h+var_5EA8]
 * 0000000180048724: call    sub_18002C088
 * 0000000180048729: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004872E: mov     rcx, rax
 * 0000000180048731: call    sub_1800D46B4
 * 0000000180048736: mov     cs:byte_18026A1CC, al
 * 000000018004873C: lea     rcx, [rbp+9E20h+var_5E88]; void *
 * 0000000180048743: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048748: nop
 * 0000000180048749: lea     rcx, [rbp+9E20h+var_5E68]; void *
 * 0000000180048750: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048755: nop
 * 0000000180048756: lea     rcx, dword_18026A1D0
 * 000000018004875D: call    _Init_thread_footer
 * 0000000180048762: mov     rax, [rdi+rbx*8]
 * 0000000180048766: mov     eax, [r15+rax]
 * 000000018004876A: cmp     cs:dword_18026A1D8, eax
 * 0000000180048770: jle     loc_18004885A
 * 0000000180048776: lea     rcx, dword_18026A1D8
 * 000000018004877D: call    _Init_thread_header
 * 0000000180048782: cmp     cs:dword_18026A1D8, r14d
 * 0000000180048789: jnz     loc_18004885A
 * 000000018004878F: lea     rax, unk_180170A20
 * 0000000180048796: mov     qword ptr [rbp+9E20h+var_9BC0], rax
 * 000000018004879D: lea     rax, unk_1801771AC
 * 00000001800487A4: mov     qword ptr [rbp+9E20h+var_9BC0+8], rax
 * 00000001800487AB: movups  xmm0, [rbp+9E20h+var_9BC0]
 * 00000001800487B2: movups  [rbp+9E20h+var_83F8], xmm0
 * 00000001800487B9: mov     dword ptr [rbp+9E20h+var_83E8], r13d
 * 00000001800487C0: mov     dword ptr [rbp+9E20h+var_83E8+4], esi
 * 00000001800487C6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800487CB: movups  xmm0, [rbp+9E20h+var_83E8]
 * 00000001800487D2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800487D7: call    sub_1800456E0
 * 00000001800487DC: mov     r8, rax
 * 00000001800487DF: mov     r9d, r12d
 * 00000001800487E2: mov     edx, 9Ah
 * 00000001800487E7: lea     rcx, [rbp+9E20h+var_5E08]; Src
 * 00000001800487EE: call    sub_1800D45C8
 * 00000001800487F3: nop
 * 00000001800487F4: mov     r8, rax
 * 00000001800487F7: lea     rdx, aStandardshader_49; "StandardShader/ShaderModel40/"
 * 00000001800487FE: lea     rcx, [rbp+9E20h+var_5E28]
 * 0000000180048805: call    sub_1800454BC
 * 000000018004880A: nop
 * 000000018004880B: lea     r8, aPixel_47; "/Pixel"
 * 0000000180048812: mov     rdx, rax
 * 0000000180048815: lea     rcx, [rbp+9E20h+var_5E48]
 * 000000018004881C: call    sub_18002C088
 * 0000000180048821: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048826: mov     rcx, rax
 * 0000000180048829: call    sub_1800D46B4
 * 000000018004882E: mov     cs:byte_18026A1D4, al
 * 0000000180048834: lea     rcx, [rbp+9E20h+var_5E28]; void *
 * 000000018004883B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048840: nop
 * 0000000180048841: lea     rcx, [rbp+9E20h+var_5E08]; void *
 * 0000000180048848: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004884D: nop
 * 000000018004884E: lea     rcx, dword_18026A1D8
 * 0000000180048855: call    _Init_thread_footer
 * 000000018004885A: mov     rax, [rdi+rbx*8]
 * 000000018004885E: mov     eax, [r15+rax]
 * 0000000180048862: cmp     cs:dword_18026A1E0, eax
 * 0000000180048868: jle     loc_180048952
 * 000000018004886E: lea     rcx, dword_18026A1E0
 * 0000000180048875: call    _Init_thread_header
 * 000000018004887A: cmp     cs:dword_18026A1E0, r14d
 * 0000000180048881: jnz     loc_180048952
 * 0000000180048887: lea     rax, unk_180155160
 * 000000018004888E: mov     qword ptr [rbp+9E20h+var_9BB0], rax
 * 0000000180048895: lea     rax, unk_18015B544
 * 000000018004889C: mov     qword ptr [rbp+9E20h+var_9BB0+8], rax
 * 00000001800488A3: movups  xmm0, [rbp+9E20h+var_9BB0]
 * 00000001800488AA: movups  [rbp+9E20h+var_83D8], xmm0
 * 00000001800488B1: mov     dword ptr [rbp+9E20h+var_83C8], r13d
 * 00000001800488B8: mov     dword ptr [rbp+9E20h+var_83C8+4], esi
 * 00000001800488BE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800488C3: movups  xmm0, [rbp+9E20h+var_83C8]
 * 00000001800488CA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800488CF: call    sub_1800456E0
 * 00000001800488D4: mov     r8, rax
 * 00000001800488D7: mov     r9d, r12d
 * 00000001800488DA: mov     edx, 0A0h
 * 00000001800488DF: lea     rcx, [rbp+9E20h+var_5DA8]; Src
 * 00000001800488E6: call    sub_1800D45C8
 * 00000001800488EB: nop
 * 00000001800488EC: mov     r8, rax
 * 00000001800488EF: lea     rdx, aStandardshader_50; "StandardShader/ShaderModel40/"
 * 00000001800488F6: lea     rcx, [rbp+9E20h+var_5DC8]
 * 00000001800488FD: call    sub_1800454BC
 * 0000000180048902: nop
 * 0000000180048903: lea     r8, aPixel_48; "/Pixel"
 * 000000018004890A: mov     rdx, rax
 * 000000018004890D: lea     rcx, [rbp+9E20h+var_5DE8]
 * 0000000180048914: call    sub_18002C088
 * 0000000180048919: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004891E: mov     rcx, rax
 * 0000000180048921: call    sub_1800D46B4
 * 0000000180048926: mov     cs:byte_18026A1DC, al
 * 000000018004892C: lea     rcx, [rbp+9E20h+var_5DC8]; void *
 * 0000000180048933: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048938: nop
 * 0000000180048939: lea     rcx, [rbp+9E20h+var_5DA8]; void *
 * 0000000180048940: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048945: nop
 * 0000000180048946: lea     rcx, dword_18026A1E0
 * 000000018004894D: call    _Init_thread_footer
 * 0000000180048952: mov     rax, [rdi+rbx*8]
 * 0000000180048956: mov     eax, [r15+rax]
 * 000000018004895A: cmp     cs:dword_18026A1E8, eax
 * 0000000180048960: jle     loc_180048A4A
 * 0000000180048966: lea     rcx, dword_18026A1E8
 * 000000018004896D: call    _Init_thread_header
 * 0000000180048972: cmp     cs:dword_18026A1E8, r14d
 * 0000000180048979: jnz     loc_180048A4A
 * 000000018004897F: lea     rax, unk_180155160
 * 0000000180048986: mov     qword ptr [rbp+9E20h+var_9BA0], rax
 * 000000018004898D: lea     rax, unk_18015B544
 * 0000000180048994: mov     qword ptr [rbp+9E20h+var_9BA0+8], rax
 * 000000018004899B: movups  xmm0, [rbp+9E20h+var_9BA0]
 * 00000001800489A2: movups  [rbp+9E20h+var_83B8], xmm0
 * 00000001800489A9: mov     dword ptr [rbp+9E20h+var_83A8], r13d
 * 00000001800489B0: mov     dword ptr [rbp+9E20h+var_83A8+4], esi
 * 00000001800489B6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800489BB: movups  xmm0, [rbp+9E20h+var_83A8]
 * 00000001800489C2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800489C7: call    sub_1800456E0
 * 00000001800489CC: mov     r8, rax
 * 00000001800489CF: mov     r9d, r12d
 * 00000001800489D2: mov     edx, 0A2h
 * 00000001800489D7: lea     rcx, [rbp+9E20h+var_5D48]; Src
 * 00000001800489DE: call    sub_1800D45C8
 * 00000001800489E3: nop
 * 00000001800489E4: mov     r8, rax
 * 00000001800489E7: lea     rdx, aStandardshader_51; "StandardShader/ShaderModel40/"
 * 00000001800489EE: lea     rcx, [rbp+9E20h+var_5D68]
 * 00000001800489F5: call    sub_1800454BC
 * 00000001800489FA: nop
 * 00000001800489FB: lea     r8, aPixel_49; "/Pixel"
 * 0000000180048A02: mov     rdx, rax
 * 0000000180048A05: lea     rcx, [rbp+9E20h+var_5D88]
 * 0000000180048A0C: call    sub_18002C088
 * 0000000180048A11: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048A16: mov     rcx, rax
 * 0000000180048A19: call    sub_1800D46B4
 * 0000000180048A1E: mov     cs:byte_18026A1E4, al
 * 0000000180048A24: lea     rcx, [rbp+9E20h+var_5D68]; void *
 * 0000000180048A2B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048A30: nop
 * 0000000180048A31: lea     rcx, [rbp+9E20h+var_5D48]; void *
 * 0000000180048A38: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048A3D: nop
 * 0000000180048A3E: lea     rcx, dword_18026A1E8
 * 0000000180048A45: call    _Init_thread_footer
 * 0000000180048A4A: mov     rax, [rdi+rbx*8]
 * 0000000180048A4E: mov     eax, [r15+rax]
 * 0000000180048A52: cmp     cs:dword_18026A1F0, eax
 * 0000000180048A58: jle     loc_180048B42
 * 0000000180048A5E: lea     rcx, dword_18026A1F0
 * 0000000180048A65: call    _Init_thread_header
 * 0000000180048A6A: cmp     cs:dword_18026A1F0, r14d
 * 0000000180048A71: jnz     loc_180048B42
 * 0000000180048A77: lea     rax, unk_18015FB00
 * 0000000180048A7E: mov     qword ptr [rbp+9E20h+var_9B90], rax
 * 0000000180048A85: lea     rax, unk_18016608C
 * 0000000180048A8C: mov     qword ptr [rbp+9E20h+var_9B90+8], rax
 * 0000000180048A93: movups  xmm0, [rbp+9E20h+var_9B90]
 * 0000000180048A9A: movups  [rbp+9E20h+var_8398], xmm0
 * 0000000180048AA1: mov     dword ptr [rbp+9E20h+var_8388], r13d
 * 0000000180048AA8: mov     dword ptr [rbp+9E20h+var_8388+4], esi
 * 0000000180048AAE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048AB3: movups  xmm0, [rbp+9E20h+var_8388]
 * 0000000180048ABA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048ABF: call    sub_1800456E0
 * 0000000180048AC4: mov     r8, rax
 * 0000000180048AC7: mov     r9d, r12d
 * 0000000180048ACA: mov     edx, 0A8h
 * 0000000180048ACF: lea     rcx, [rbp+9E20h+var_5CE8]; Src
 * 0000000180048AD6: call    sub_1800D45C8
 * 0000000180048ADB: nop
 * 0000000180048ADC: mov     r8, rax
 * 0000000180048ADF: lea     rdx, aStandardshader_52; "StandardShader/ShaderModel40/"
 * 0000000180048AE6: lea     rcx, [rbp+9E20h+var_5D08]
 * 0000000180048AED: call    sub_1800454BC
 * 0000000180048AF2: nop
 * 0000000180048AF3: lea     r8, aPixel_50; "/Pixel"
 * 0000000180048AFA: mov     rdx, rax
 * 0000000180048AFD: lea     rcx, [rbp+9E20h+var_5D28]
 * 0000000180048B04: call    sub_18002C088
 * 0000000180048B09: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048B0E: mov     rcx, rax
 * 0000000180048B11: call    sub_1800D46B4
 * 0000000180048B16: mov     cs:byte_18026A1EC, al
 * 0000000180048B1C: lea     rcx, [rbp+9E20h+var_5D08]; void *
 * 0000000180048B23: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048B28: nop
 * 0000000180048B29: lea     rcx, [rbp+9E20h+var_5CE8]; void *
 * 0000000180048B30: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048B35: nop
 * 0000000180048B36: lea     rcx, dword_18026A1F0
 * 0000000180048B3D: call    _Init_thread_footer
 * 0000000180048B42: mov     rax, [rdi+rbx*8]
 * 0000000180048B46: mov     eax, [r15+rax]
 * 0000000180048B4A: cmp     cs:dword_18026A1F8, eax
 * 0000000180048B50: jle     loc_180048C3A
 * 0000000180048B56: lea     rcx, dword_18026A1F8
 * 0000000180048B5D: call    _Init_thread_header
 * 0000000180048B62: cmp     cs:dword_18026A1F8, r14d
 * 0000000180048B69: jnz     loc_180048C3A
 * 0000000180048B6F: lea     rax, unk_18015FB00
 * 0000000180048B76: mov     qword ptr [rbp+9E20h+var_9B80], rax
 * 0000000180048B7D: lea     rax, unk_18016608C
 * 0000000180048B84: mov     qword ptr [rbp+9E20h+var_9B80+8], rax
 * 0000000180048B8B: movups  xmm0, [rbp+9E20h+var_9B80]
 * 0000000180048B92: movups  [rbp+9E20h+var_8378], xmm0
 * 0000000180048B99: mov     dword ptr [rbp+9E20h+var_8368], r13d
 * 0000000180048BA0: mov     dword ptr [rbp+9E20h+var_8368+4], esi
 * 0000000180048BA6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048BAB: movups  xmm0, [rbp+9E20h+var_8368]
 * 0000000180048BB2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048BB7: call    sub_1800456E0
 * 0000000180048BBC: mov     r8, rax
 * 0000000180048BBF: mov     r9d, r12d
 * 0000000180048BC2: mov     edx, 0AAh
 * 0000000180048BC7: lea     rcx, [rbp+9E20h+var_5C88]; Src
 * 0000000180048BCE: call    sub_1800D45C8
 * 0000000180048BD3: nop
 * 0000000180048BD4: mov     r8, rax
 * 0000000180048BD7: lea     rdx, aStandardshader_53; "StandardShader/ShaderModel40/"
 * 0000000180048BDE: lea     rcx, [rbp+9E20h+var_5CA8]
 * 0000000180048BE5: call    sub_1800454BC
 * 0000000180048BEA: nop
 * 0000000180048BEB: lea     r8, aPixel_51; "/Pixel"
 * 0000000180048BF2: mov     rdx, rax
 * 0000000180048BF5: lea     rcx, [rbp+9E20h+var_5CC8]
 * 0000000180048BFC: call    sub_18002C088
 * 0000000180048C01: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048C06: mov     rcx, rax
 * 0000000180048C09: call    sub_1800D46B4
 * 0000000180048C0E: mov     cs:byte_18026A1F4, al
 * 0000000180048C14: lea     rcx, [rbp+9E20h+var_5CA8]; void *
 * 0000000180048C1B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048C20: nop
 * 0000000180048C21: lea     rcx, [rbp+9E20h+var_5C88]; void *
 * 0000000180048C28: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048C2D: nop
 * 0000000180048C2E: lea     rcx, dword_18026A1F8
 * 0000000180048C35: call    _Init_thread_footer
 * 0000000180048C3A: mov     rax, [rdi+rbx*8]
 * 0000000180048C3E: mov     eax, [r15+rax]
 * 0000000180048C42: cmp     cs:dword_18026A200, eax
 * 0000000180048C48: jle     loc_180048D32
 * 0000000180048C4E: lea     rcx, dword_18026A200
 * 0000000180048C55: call    _Init_thread_header
 * 0000000180048C5A: cmp     cs:dword_18026A200, r14d
 * 0000000180048C61: jnz     loc_180048D32
 * 0000000180048C67: lea     rax, unk_180167160
 * 0000000180048C6E: mov     qword ptr [rbp+9E20h+var_9B70], rax
 * 0000000180048C75: lea     rax, unk_18016D718
 * 0000000180048C7C: mov     qword ptr [rbp+9E20h+var_9B70+8], rax
 * 0000000180048C83: movups  xmm0, [rbp+9E20h+var_9B70]
 * 0000000180048C8A: movups  [rbp+9E20h+var_8358], xmm0
 * 0000000180048C91: mov     dword ptr [rbp+9E20h+var_8348], r13d
 * 0000000180048C98: mov     dword ptr [rbp+9E20h+var_8348+4], esi
 * 0000000180048C9E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048CA3: movups  xmm0, [rbp+9E20h+var_8348]
 * 0000000180048CAA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048CAF: call    sub_1800456E0
 * 0000000180048CB4: mov     r8, rax
 * 0000000180048CB7: mov     r9d, r12d
 * 0000000180048CBA: mov     edx, 0B0h
 * 0000000180048CBF: lea     rcx, [rbp+9E20h+var_5C28]; Src
 * 0000000180048CC6: call    sub_1800D45C8
 * 0000000180048CCB: nop
 * 0000000180048CCC: mov     r8, rax
 * 0000000180048CCF: lea     rdx, aStandardshader_54; "StandardShader/ShaderModel40/"
 * 0000000180048CD6: lea     rcx, [rbp+9E20h+var_5C48]
 * 0000000180048CDD: call    sub_1800454BC
 * 0000000180048CE2: nop
 * 0000000180048CE3: lea     r8, aPixel_52; "/Pixel"
 * 0000000180048CEA: mov     rdx, rax
 * 0000000180048CED: lea     rcx, [rbp+9E20h+var_5C68]
 * 0000000180048CF4: call    sub_18002C088
 * 0000000180048CF9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048CFE: mov     rcx, rax
 * 0000000180048D01: call    sub_1800D46B4
 * 0000000180048D06: mov     cs:byte_18026A1FC, al
 * 0000000180048D0C: lea     rcx, [rbp+9E20h+var_5C48]; void *
 * 0000000180048D13: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048D18: nop
 * 0000000180048D19: lea     rcx, [rbp+9E20h+var_5C28]; void *
 * 0000000180048D20: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048D25: nop
 * 0000000180048D26: lea     rcx, dword_18026A200
 * 0000000180048D2D: call    _Init_thread_footer
 * 0000000180048D32: mov     rax, [rdi+rbx*8]
 * 0000000180048D36: mov     eax, [r15+rax]
 * 0000000180048D3A: cmp     cs:dword_18026A208, eax
 * 0000000180048D40: jle     loc_180048E2A
 * 0000000180048D46: lea     rcx, dword_18026A208
 * 0000000180048D4D: call    _Init_thread_header
 * 0000000180048D52: cmp     cs:dword_18026A208, r14d
 * 0000000180048D59: jnz     loc_180048E2A
 * 0000000180048D5F: lea     rax, unk_180167160
 * 0000000180048D66: mov     qword ptr [rbp+9E20h+var_9B60], rax
 * 0000000180048D6D: lea     rax, unk_18016D718
 * 0000000180048D74: mov     qword ptr [rbp+9E20h+var_9B60+8], rax
 * 0000000180048D7B: movups  xmm0, [rbp+9E20h+var_9B60]
 * 0000000180048D82: movups  [rbp+9E20h+var_8338], xmm0
 * 0000000180048D89: mov     dword ptr [rbp+9E20h+var_8328], r13d
 * 0000000180048D90: mov     dword ptr [rbp+9E20h+var_8328+4], esi
 * 0000000180048D96: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048D9B: movups  xmm0, [rbp+9E20h+var_8328]
 * 0000000180048DA2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048DA7: call    sub_1800456E0
 * 0000000180048DAC: mov     r8, rax
 * 0000000180048DAF: mov     r9d, r12d
 * 0000000180048DB2: mov     edx, 0B2h
 * 0000000180048DB7: lea     rcx, [rbp+9E20h+var_5BC8]; Src
 * 0000000180048DBE: call    sub_1800D45C8
 * 0000000180048DC3: nop
 * 0000000180048DC4: mov     r8, rax
 * 0000000180048DC7: lea     rdx, aStandardshader_55; "StandardShader/ShaderModel40/"
 * 0000000180048DCE: lea     rcx, [rbp+9E20h+var_5BE8]
 * 0000000180048DD5: call    sub_1800454BC
 * 0000000180048DDA: nop
 * 0000000180048DDB: lea     r8, aPixel_53; "/Pixel"
 * 0000000180048DE2: mov     rdx, rax
 * 0000000180048DE5: lea     rcx, [rbp+9E20h+var_5C08]
 * 0000000180048DEC: call    sub_18002C088
 * 0000000180048DF1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048DF6: mov     rcx, rax
 * 0000000180048DF9: call    sub_1800D46B4
 * 0000000180048DFE: mov     cs:byte_18026A204, al
 * 0000000180048E04: lea     rcx, [rbp+9E20h+var_5BE8]; void *
 * 0000000180048E0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048E10: nop
 * 0000000180048E11: lea     rcx, [rbp+9E20h+var_5BC8]; void *
 * 0000000180048E18: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048E1D: nop
 * 0000000180048E1E: lea     rcx, dword_18026A208
 * 0000000180048E25: call    _Init_thread_footer
 * 0000000180048E2A: mov     rax, [rdi+rbx*8]
 * 0000000180048E2E: mov     eax, [r15+rax]
 * 0000000180048E32: cmp     cs:dword_18026A210, eax
 * 0000000180048E38: jle     loc_180048F22
 * 0000000180048E3E: lea     rcx, dword_18026A210
 * 0000000180048E45: call    _Init_thread_header
 * 0000000180048E4A: cmp     cs:dword_18026A210, r14d
 * 0000000180048E51: jnz     loc_180048F22
 * 0000000180048E57: lea     rax, unk_180170A20
 * 0000000180048E5E: mov     qword ptr [rbp+9E20h+var_9B50], rax
 * 0000000180048E65: lea     rax, unk_1801771AC
 * 0000000180048E6C: mov     qword ptr [rbp+9E20h+var_9B50+8], rax
 * 0000000180048E73: movups  xmm0, [rbp+9E20h+var_9B50]
 * 0000000180048E7A: movups  [rbp+9E20h+var_8318], xmm0
 * 0000000180048E81: mov     dword ptr [rbp+9E20h+var_8308], r13d
 * 0000000180048E88: mov     dword ptr [rbp+9E20h+var_8308+4], esi
 * 0000000180048E8E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048E93: movups  xmm0, [rbp+9E20h+var_8308]
 * 0000000180048E9A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048E9F: call    sub_1800456E0
 * 0000000180048EA4: mov     r8, rax
 * 0000000180048EA7: mov     r9d, r12d
 * 0000000180048EAA: mov     edx, 0B8h
 * 0000000180048EAF: lea     rcx, [rbp+9E20h+var_5B68]; Src
 * 0000000180048EB6: call    sub_1800D45C8
 * 0000000180048EBB: nop
 * 0000000180048EBC: mov     r8, rax
 * 0000000180048EBF: lea     rdx, aStandardshader_56; "StandardShader/ShaderModel40/"
 * 0000000180048EC6: lea     rcx, [rbp+9E20h+var_5B88]
 * 0000000180048ECD: call    sub_1800454BC
 * 0000000180048ED2: nop
 * 0000000180048ED3: lea     r8, aPixel_54; "/Pixel"
 * 0000000180048EDA: mov     rdx, rax
 * 0000000180048EDD: lea     rcx, [rbp+9E20h+var_5BA8]
 * 0000000180048EE4: call    sub_18002C088
 * 0000000180048EE9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048EEE: mov     rcx, rax
 * 0000000180048EF1: call    sub_1800D46B4
 * 0000000180048EF6: mov     cs:byte_18026A20C, al
 * 0000000180048EFC: lea     rcx, [rbp+9E20h+var_5B88]; void *
 * 0000000180048F03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048F08: nop
 * 0000000180048F09: lea     rcx, [rbp+9E20h+var_5B68]; void *
 * 0000000180048F10: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048F15: nop
 * 0000000180048F16: lea     rcx, dword_18026A210
 * 0000000180048F1D: call    _Init_thread_footer
 * 0000000180048F22: mov     rax, [rdi+rbx*8]
 * 0000000180048F26: mov     eax, [r15+rax]
 * 0000000180048F2A: cmp     cs:dword_18026A218, eax
 * 0000000180048F30: jle     loc_18004901A
 * 0000000180048F36: lea     rcx, dword_18026A218
 * 0000000180048F3D: call    _Init_thread_header
 * 0000000180048F42: cmp     cs:dword_18026A218, r14d
 * 0000000180048F49: jnz     loc_18004901A
 * 0000000180048F4F: lea     rax, unk_180170A20
 * 0000000180048F56: mov     qword ptr [rbp+9E20h+var_9B40], rax
 * 0000000180048F5D: lea     rax, unk_1801771AC
 * 0000000180048F64: mov     qword ptr [rbp+9E20h+var_9B40+8], rax
 * 0000000180048F6B: movups  xmm0, [rbp+9E20h+var_9B40]
 * 0000000180048F72: movups  [rbp+9E20h+var_82F8], xmm0
 * 0000000180048F79: mov     dword ptr [rbp+9E20h+var_82E8], r13d
 * 0000000180048F80: mov     dword ptr [rbp+9E20h+var_82E8+4], esi
 * 0000000180048F86: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180048F8B: movups  xmm0, [rbp+9E20h+var_82E8]
 * 0000000180048F92: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180048F97: call    sub_1800456E0
 * 0000000180048F9C: mov     r8, rax
 * 0000000180048F9F: mov     r9d, r12d
 * 0000000180048FA2: mov     edx, 0BAh
 * 0000000180048FA7: lea     rcx, [rbp+9E20h+var_5B08]; Src
 * 0000000180048FAE: call    sub_1800D45C8
 * 0000000180048FB3: nop
 * 0000000180048FB4: mov     r8, rax
 * 0000000180048FB7: lea     rdx, aStandardshader_57; "StandardShader/ShaderModel40/"
 * 0000000180048FBE: lea     rcx, [rbp+9E20h+var_5B28]
 * 0000000180048FC5: call    sub_1800454BC
 * 0000000180048FCA: nop
 * 0000000180048FCB: lea     r8, aPixel_55; "/Pixel"
 * 0000000180048FD2: mov     rdx, rax
 * 0000000180048FD5: lea     rcx, [rbp+9E20h+var_5B48]
 * 0000000180048FDC: call    sub_18002C088
 * 0000000180048FE1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180048FE6: mov     rcx, rax
 * 0000000180048FE9: call    sub_1800D46B4
 * 0000000180048FEE: mov     cs:byte_18026A214, al
 * 0000000180048FF4: lea     rcx, [rbp+9E20h+var_5B28]; void *
 * 0000000180048FFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049000: nop
 * 0000000180049001: lea     rcx, [rbp+9E20h+var_5B08]; void *
 * 0000000180049008: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004900D: nop
 * 000000018004900E: lea     rcx, dword_18026A218
 * 0000000180049015: call    _Init_thread_footer
 * 000000018004901A: mov     rax, [rdi+rbx*8]
 * 000000018004901E: mov     eax, [r15+rax]
 * 0000000180049022: cmp     cs:dword_18026A220, eax
 * 0000000180049028: jle     loc_180049112
 * 000000018004902E: lea     rcx, dword_18026A220
 * 0000000180049035: call    _Init_thread_header
 * 000000018004903A: cmp     cs:dword_18026A220, r14d
 * 0000000180049041: jnz     loc_180049112
 * 0000000180049047: lea     rax, unk_180155160
 * 000000018004904E: mov     qword ptr [rbp+9E20h+var_9B30], rax
 * 0000000180049055: lea     rax, unk_18015B544
 * 000000018004905C: mov     qword ptr [rbp+9E20h+var_9B30+8], rax
 * 0000000180049063: movups  xmm0, [rbp+9E20h+var_9B30]
 * 000000018004906A: movups  [rbp+9E20h+var_82D8], xmm0
 * 0000000180049071: mov     dword ptr [rbp+9E20h+var_82C8], r13d
 * 0000000180049078: mov     dword ptr [rbp+9E20h+var_82C8+4], esi
 * 000000018004907E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049083: movups  xmm0, [rbp+9E20h+var_82C8]
 * 000000018004908A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004908F: call    sub_1800456E0
 * 0000000180049094: mov     r8, rax
 * 0000000180049097: mov     r9d, r12d
 * 000000018004909A: mov     edx, 0C0h
 * 000000018004909F: lea     rcx, [rbp+9E20h+var_5AA8]; Src
 * 00000001800490A6: call    sub_1800D45C8
 * 00000001800490AB: nop
 * 00000001800490AC: mov     r8, rax
 * 00000001800490AF: lea     rdx, aStandardshader_58; "StandardShader/ShaderModel40/"
 * 00000001800490B6: lea     rcx, [rbp+9E20h+var_5AC8]
 * 00000001800490BD: call    sub_1800454BC
 * 00000001800490C2: nop
 * 00000001800490C3: lea     r8, aPixel_56; "/Pixel"
 * 00000001800490CA: mov     rdx, rax
 * 00000001800490CD: lea     rcx, [rbp+9E20h+var_5AE8]
 * 00000001800490D4: call    sub_18002C088
 * 00000001800490D9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800490DE: mov     rcx, rax
 * 00000001800490E1: call    sub_1800D46B4
 * 00000001800490E6: mov     cs:byte_18026A21C, al
 * 00000001800490EC: lea     rcx, [rbp+9E20h+var_5AC8]; void *
 * 00000001800490F3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800490F8: nop
 * 00000001800490F9: lea     rcx, [rbp+9E20h+var_5AA8]; void *
 * 0000000180049100: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049105: nop
 * 0000000180049106: lea     rcx, dword_18026A220
 * 000000018004910D: call    _Init_thread_footer
 * 0000000180049112: mov     rax, [rdi+rbx*8]
 * 0000000180049116: mov     eax, [r15+rax]
 * 000000018004911A: cmp     cs:dword_18026A228, eax
 * 0000000180049120: jle     loc_18004920A
 * 0000000180049126: lea     rcx, dword_18026A228
 * 000000018004912D: call    _Init_thread_header
 * 0000000180049132: cmp     cs:dword_18026A228, r14d
 * 0000000180049139: jnz     loc_18004920A
 * 000000018004913F: lea     rax, unk_180155160
 * 0000000180049146: mov     qword ptr [rbp+9E20h+var_9B20], rax
 * 000000018004914D: lea     rax, unk_18015B544
 * 0000000180049154: mov     qword ptr [rbp+9E20h+var_9B20+8], rax
 * 000000018004915B: movups  xmm0, [rbp+9E20h+var_9B20]
 * 0000000180049162: movups  [rbp+9E20h+var_82B8], xmm0
 * 0000000180049169: mov     dword ptr [rbp+9E20h+var_82A8], r13d
 * 0000000180049170: mov     dword ptr [rbp+9E20h+var_82A8+4], esi
 * 0000000180049176: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004917B: movups  xmm0, [rbp+9E20h+var_82A8]
 * 0000000180049182: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049187: call    sub_1800456E0
 * 000000018004918C: mov     r8, rax
 * 000000018004918F: mov     r9d, r12d
 * 0000000180049192: mov     edx, 0C2h
 * 0000000180049197: lea     rcx, [rbp+9E20h+var_5A48]; Src
 * 000000018004919E: call    sub_1800D45C8
 * 00000001800491A3: nop
 * 00000001800491A4: mov     r8, rax
 * 00000001800491A7: lea     rdx, aStandardshader_59; "StandardShader/ShaderModel40/"
 * 00000001800491AE: lea     rcx, [rbp+9E20h+var_5A68]
 * 00000001800491B5: call    sub_1800454BC
 * 00000001800491BA: nop
 * 00000001800491BB: lea     r8, aPixel_57; "/Pixel"
 * 00000001800491C2: mov     rdx, rax
 * 00000001800491C5: lea     rcx, [rbp+9E20h+var_5A88]
 * 00000001800491CC: call    sub_18002C088
 * 00000001800491D1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800491D6: mov     rcx, rax
 * 00000001800491D9: call    sub_1800D46B4
 * 00000001800491DE: mov     cs:byte_18026A224, al
 * 00000001800491E4: lea     rcx, [rbp+9E20h+var_5A68]; void *
 * 00000001800491EB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800491F0: nop
 * 00000001800491F1: lea     rcx, [rbp+9E20h+var_5A48]; void *
 * 00000001800491F8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800491FD: nop
 * 00000001800491FE: lea     rcx, dword_18026A228
 * 0000000180049205: call    _Init_thread_footer
 * 000000018004920A: mov     rax, [rdi+rbx*8]
 * 000000018004920E: mov     eax, [r15+rax]
 * 0000000180049212: cmp     cs:dword_18026A230, eax
 * 0000000180049218: jle     loc_180049302
 * 000000018004921E: lea     rcx, dword_18026A230
 * 0000000180049225: call    _Init_thread_header
 * 000000018004922A: cmp     cs:dword_18026A230, r14d
 * 0000000180049231: jnz     loc_180049302
 * 0000000180049237: lea     rax, unk_18015FB00
 * 000000018004923E: mov     qword ptr [rbp+9E20h+var_9B10], rax
 * 0000000180049245: lea     rax, unk_18016608C
 * 000000018004924C: mov     qword ptr [rbp+9E20h+var_9B10+8], rax
 * 0000000180049253: movups  xmm0, [rbp+9E20h+var_9B10]
 * 000000018004925A: movups  [rbp+9E20h+var_8298], xmm0
 * 0000000180049261: mov     dword ptr [rbp+9E20h+var_8288], r13d
 * 0000000180049268: mov     dword ptr [rbp+9E20h+var_8288+4], esi
 * 000000018004926E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049273: movups  xmm0, [rbp+9E20h+var_8288]
 * 000000018004927A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004927F: call    sub_1800456E0
 * 0000000180049284: mov     r8, rax
 * 0000000180049287: mov     r9d, r12d
 * 000000018004928A: mov     edx, 0C8h
 * 000000018004928F: lea     rcx, [rbp+9E20h+var_59E8]; Src
 * 0000000180049296: call    sub_1800D45C8
 * 000000018004929B: nop
 * 000000018004929C: mov     r8, rax
 * 000000018004929F: lea     rdx, aStandardshader_60; "StandardShader/ShaderModel40/"
 * 00000001800492A6: lea     rcx, [rbp+9E20h+var_5A08]
 * 00000001800492AD: call    sub_1800454BC
 * 00000001800492B2: nop
 * 00000001800492B3: lea     r8, aPixel_58; "/Pixel"
 * 00000001800492BA: mov     rdx, rax
 * 00000001800492BD: lea     rcx, [rbp+9E20h+var_5A28]
 * 00000001800492C4: call    sub_18002C088
 * 00000001800492C9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800492CE: mov     rcx, rax
 * 00000001800492D1: call    sub_1800D46B4
 * 00000001800492D6: mov     cs:byte_18026A22C, al
 * 00000001800492DC: lea     rcx, [rbp+9E20h+var_5A08]; void *
 * 00000001800492E3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800492E8: nop
 * 00000001800492E9: lea     rcx, [rbp+9E20h+var_59E8]; void *
 * 00000001800492F0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800492F5: nop
 * 00000001800492F6: lea     rcx, dword_18026A230
 * 00000001800492FD: call    _Init_thread_footer
 * 0000000180049302: mov     rax, [rdi+rbx*8]
 * 0000000180049306: mov     eax, [r15+rax]
 * 000000018004930A: cmp     cs:dword_18026A238, eax
 * 0000000180049310: jle     loc_1800493FA
 * 0000000180049316: lea     rcx, dword_18026A238
 * 000000018004931D: call    _Init_thread_header
 * 0000000180049322: cmp     cs:dword_18026A238, r14d
 * 0000000180049329: jnz     loc_1800493FA
 * 000000018004932F: lea     rax, unk_18015FB00
 * 0000000180049336: mov     qword ptr [rbp+9E20h+var_9B00], rax
 * 000000018004933D: lea     rax, unk_18016608C
 * 0000000180049344: mov     qword ptr [rbp+9E20h+var_9B00+8], rax
 * 000000018004934B: movups  xmm0, [rbp+9E20h+var_9B00]
 * 0000000180049352: movups  [rbp+9E20h+var_8278], xmm0
 * 0000000180049359: mov     dword ptr [rbp+9E20h+var_8268], r13d
 * 0000000180049360: mov     dword ptr [rbp+9E20h+var_8268+4], esi
 * 0000000180049366: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004936B: movups  xmm0, [rbp+9E20h+var_8268]
 * 0000000180049372: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049377: call    sub_1800456E0
 * 000000018004937C: mov     r8, rax
 * 000000018004937F: mov     r9d, r12d
 * 0000000180049382: mov     edx, 0CAh
 * 0000000180049387: lea     rcx, [rbp+9E20h+var_5988]; Src
 * 000000018004938E: call    sub_1800D45C8
 * 0000000180049393: nop
 * 0000000180049394: mov     r8, rax
 * 0000000180049397: lea     rdx, aStandardshader_61; "StandardShader/ShaderModel40/"
 * 000000018004939E: lea     rcx, [rbp+9E20h+var_59A8]
 * 00000001800493A5: call    sub_1800454BC
 * 00000001800493AA: nop
 * 00000001800493AB: lea     r8, aPixel_59; "/Pixel"
 * 00000001800493B2: mov     rdx, rax
 * 00000001800493B5: lea     rcx, [rbp+9E20h+var_59C8]
 * 00000001800493BC: call    sub_18002C088
 * 00000001800493C1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800493C6: mov     rcx, rax
 * 00000001800493C9: call    sub_1800D46B4
 * 00000001800493CE: mov     cs:byte_18026A234, al
 * 00000001800493D4: lea     rcx, [rbp+9E20h+var_59A8]; void *
 * 00000001800493DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800493E0: nop
 * 00000001800493E1: lea     rcx, [rbp+9E20h+var_5988]; void *
 * 00000001800493E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800493ED: nop
 * 00000001800493EE: lea     rcx, dword_18026A238
 * 00000001800493F5: call    _Init_thread_footer
 * 00000001800493FA: mov     rax, [rdi+rbx*8]
 * 00000001800493FE: mov     eax, [r15+rax]
 * 0000000180049402: cmp     cs:dword_18026A240, eax
 * 0000000180049408: jle     loc_1800494F2
 * 000000018004940E: lea     rcx, dword_18026A240
 * 0000000180049415: call    _Init_thread_header
 * 000000018004941A: cmp     cs:dword_18026A240, r14d
 * 0000000180049421: jnz     loc_1800494F2
 * 0000000180049427: lea     rax, unk_180167160
 * 000000018004942E: mov     qword ptr [rbp+9E20h+var_9AF0], rax
 * 0000000180049435: lea     rax, unk_18016D718
 * 000000018004943C: mov     qword ptr [rbp+9E20h+var_9AF0+8], rax
 * 0000000180049443: movups  xmm0, [rbp+9E20h+var_9AF0]
 * 000000018004944A: movups  [rbp+9E20h+var_8258], xmm0
 * 0000000180049451: mov     dword ptr [rbp+9E20h+var_8248], r13d
 * 0000000180049458: mov     dword ptr [rbp+9E20h+var_8248+4], esi
 * 000000018004945E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049463: movups  xmm0, [rbp+9E20h+var_8248]
 * 000000018004946A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004946F: call    sub_1800456E0
 * 0000000180049474: mov     r8, rax
 * 0000000180049477: mov     r9d, r12d
 * 000000018004947A: mov     edx, 0D0h
 * 000000018004947F: lea     rcx, [rbp+9E20h+var_5928]; Src
 * 0000000180049486: call    sub_1800D45C8
 * 000000018004948B: nop
 * 000000018004948C: mov     r8, rax
 * 000000018004948F: lea     rdx, aStandardshader_62; "StandardShader/ShaderModel40/"
 * 0000000180049496: lea     rcx, [rbp+9E20h+var_5948]
 * 000000018004949D: call    sub_1800454BC
 * 00000001800494A2: nop
 * 00000001800494A3: lea     r8, aPixel_60; "/Pixel"
 * 00000001800494AA: mov     rdx, rax
 * 00000001800494AD: lea     rcx, [rbp+9E20h+var_5968]
 * 00000001800494B4: call    sub_18002C088
 * 00000001800494B9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800494BE: mov     rcx, rax
 * 00000001800494C1: call    sub_1800D46B4
 * 00000001800494C6: mov     cs:byte_18026A23C, al
 * 00000001800494CC: lea     rcx, [rbp+9E20h+var_5948]; void *
 * 00000001800494D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800494D8: nop
 * 00000001800494D9: lea     rcx, [rbp+9E20h+var_5928]; void *
 * 00000001800494E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800494E5: nop
 * 00000001800494E6: lea     rcx, dword_18026A240
 * 00000001800494ED: call    _Init_thread_footer
 * 00000001800494F2: mov     rax, [rdi+rbx*8]
 * 00000001800494F6: mov     eax, [r15+rax]
 * 00000001800494FA: cmp     cs:dword_18026A248, eax
 * 0000000180049500: jle     loc_1800495EA
 * 0000000180049506: lea     rcx, dword_18026A248
 * 000000018004950D: call    _Init_thread_header
 * 0000000180049512: cmp     cs:dword_18026A248, r14d
 * 0000000180049519: jnz     loc_1800495EA
 * 000000018004951F: lea     rax, unk_180167160
 * 0000000180049526: mov     qword ptr [rbp+9E20h+var_9AE0], rax
 * 000000018004952D: lea     rax, unk_18016D718
 * 0000000180049534: mov     qword ptr [rbp+9E20h+var_9AE0+8], rax
 * 000000018004953B: movups  xmm0, [rbp+9E20h+var_9AE0]
 * 0000000180049542: movups  [rbp+9E20h+var_8238], xmm0
 * 0000000180049549: mov     dword ptr [rbp+9E20h+var_8228], r13d
 * 0000000180049550: mov     dword ptr [rbp+9E20h+var_8228+4], esi
 * 0000000180049556: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004955B: movups  xmm0, [rbp+9E20h+var_8228]
 * 0000000180049562: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049567: call    sub_1800456E0
 * 000000018004956C: mov     r8, rax
 * 000000018004956F: mov     r9d, r12d
 * 0000000180049572: mov     edx, 0D2h
 * 0000000180049577: lea     rcx, [rbp+9E20h+var_58C8]; Src
 * 000000018004957E: call    sub_1800D45C8
 * 0000000180049583: nop
 * 0000000180049584: mov     r8, rax
 * 0000000180049587: lea     rdx, aStandardshader_63; "StandardShader/ShaderModel40/"
 * 000000018004958E: lea     rcx, [rbp+9E20h+var_58E8]
 * 0000000180049595: call    sub_1800454BC
 * 000000018004959A: nop
 * 000000018004959B: lea     r8, aPixel_61; "/Pixel"
 * 00000001800495A2: mov     rdx, rax
 * 00000001800495A5: lea     rcx, [rbp+9E20h+var_5908]
 * 00000001800495AC: call    sub_18002C088
 * 00000001800495B1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800495B6: mov     rcx, rax
 * 00000001800495B9: call    sub_1800D46B4
 * 00000001800495BE: mov     cs:byte_18026A244, al
 * 00000001800495C4: lea     rcx, [rbp+9E20h+var_58E8]; void *
 * 00000001800495CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800495D0: nop
 * 00000001800495D1: lea     rcx, [rbp+9E20h+var_58C8]; void *
 * 00000001800495D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800495DD: nop
 * 00000001800495DE: lea     rcx, dword_18026A248
 * 00000001800495E5: call    _Init_thread_footer
 * 00000001800495EA: mov     rax, [rdi+rbx*8]
 * 00000001800495EE: mov     eax, [r15+rax]
 * 00000001800495F2: cmp     cs:dword_18026A250, eax
 * 00000001800495F8: jle     loc_1800496E2
 * 00000001800495FE: lea     rcx, dword_18026A250
 * 0000000180049605: call    _Init_thread_header
 * 000000018004960A: cmp     cs:dword_18026A250, r14d
 * 0000000180049611: jnz     loc_1800496E2
 * 0000000180049617: lea     rax, unk_180170A20
 * 000000018004961E: mov     qword ptr [rbp+9E20h+var_9AD0], rax
 * 0000000180049625: lea     rax, unk_1801771AC
 * 000000018004962C: mov     qword ptr [rbp+9E20h+var_9AD0+8], rax
 * 0000000180049633: movups  xmm0, [rbp+9E20h+var_9AD0]
 * 000000018004963A: movups  [rbp+9E20h+var_8218], xmm0
 * 0000000180049641: mov     dword ptr [rbp+9E20h+var_8208], r13d
 * 0000000180049648: mov     dword ptr [rbp+9E20h+var_8208+4], esi
 * 000000018004964E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049653: movups  xmm0, [rbp+9E20h+var_8208]
 * 000000018004965A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004965F: call    sub_1800456E0
 * 0000000180049664: mov     r8, rax
 * 0000000180049667: mov     r9d, r12d
 * 000000018004966A: mov     edx, 0D8h
 * 000000018004966F: lea     rcx, [rbp+9E20h+var_5868]; Src
 * 0000000180049676: call    sub_1800D45C8
 * 000000018004967B: nop
 * 000000018004967C: mov     r8, rax
 * 000000018004967F: lea     rdx, aStandardshader_64; "StandardShader/ShaderModel40/"
 * 0000000180049686: lea     rcx, [rbp+9E20h+var_5888]
 * 000000018004968D: call    sub_1800454BC
 * 0000000180049692: nop
 * 0000000180049693: lea     r8, aPixel_62; "/Pixel"
 * 000000018004969A: mov     rdx, rax
 * 000000018004969D: lea     rcx, [rbp+9E20h+var_58A8]
 * 00000001800496A4: call    sub_18002C088
 * 00000001800496A9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800496AE: mov     rcx, rax
 * 00000001800496B1: call    sub_1800D46B4
 * 00000001800496B6: mov     cs:byte_18026A24C, al
 * 00000001800496BC: lea     rcx, [rbp+9E20h+var_5888]; void *
 * 00000001800496C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800496C8: nop
 * 00000001800496C9: lea     rcx, [rbp+9E20h+var_5868]; void *
 * 00000001800496D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800496D5: nop
 * 00000001800496D6: lea     rcx, dword_18026A250
 * 00000001800496DD: call    _Init_thread_footer
 * 00000001800496E2: mov     rax, [rdi+rbx*8]
 * 00000001800496E6: mov     eax, [r15+rax]
 * 00000001800496EA: cmp     cs:dword_18026A258, eax
 * 00000001800496F0: jle     loc_1800497DA
 * 00000001800496F6: lea     rcx, dword_18026A258
 * 00000001800496FD: call    _Init_thread_header
 * 0000000180049702: cmp     cs:dword_18026A258, r14d
 * 0000000180049709: jnz     loc_1800497DA
 * 000000018004970F: lea     rax, unk_180170A20
 * 0000000180049716: mov     qword ptr [rbp+9E20h+var_9AC0], rax
 * 000000018004971D: lea     rax, unk_1801771AC
 * 0000000180049724: mov     qword ptr [rbp+9E20h+var_9AC0+8], rax
 * 000000018004972B: movups  xmm0, [rbp+9E20h+var_9AC0]
 * 0000000180049732: movups  [rbp+9E20h+var_81F8], xmm0
 * 0000000180049739: mov     dword ptr [rbp+9E20h+var_81E8], r13d
 * 0000000180049740: mov     dword ptr [rbp+9E20h+var_81E8+4], esi
 * 0000000180049746: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004974B: movups  xmm0, [rbp+9E20h+var_81E8]
 * 0000000180049752: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049757: call    sub_1800456E0
 * 000000018004975C: mov     r8, rax
 * 000000018004975F: mov     r9d, r12d
 * 0000000180049762: mov     edx, 0DAh
 * 0000000180049767: lea     rcx, [rbp+9E20h+var_5808]; Src
 * 000000018004976E: call    sub_1800D45C8
 * 0000000180049773: nop
 * 0000000180049774: mov     r8, rax
 * 0000000180049777: lea     rdx, aStandardshader_65; "StandardShader/ShaderModel40/"
 * 000000018004977E: lea     rcx, [rbp+9E20h+var_5828]
 * 0000000180049785: call    sub_1800454BC
 * 000000018004978A: nop
 * 000000018004978B: lea     r8, aPixel_63; "/Pixel"
 * 0000000180049792: mov     rdx, rax
 * 0000000180049795: lea     rcx, [rbp+9E20h+var_5848]
 * 000000018004979C: call    sub_18002C088
 * 00000001800497A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800497A6: mov     rcx, rax
 * 00000001800497A9: call    sub_1800D46B4
 * 00000001800497AE: mov     cs:byte_18026A254, al
 * 00000001800497B4: lea     rcx, [rbp+9E20h+var_5828]; void *
 * 00000001800497BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800497C0: nop
 * 00000001800497C1: lea     rcx, [rbp+9E20h+var_5808]; void *
 * 00000001800497C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800497CD: nop
 * 00000001800497CE: lea     rcx, dword_18026A258
 * 00000001800497D5: call    _Init_thread_footer
 * 00000001800497DA: mov     rax, [rdi+rbx*8]
 * 00000001800497DE: mov     eax, [r15+rax]
 * 00000001800497E2: cmp     cs:dword_18026A260, eax
 * 00000001800497E8: jle     loc_1800498D2
 * 00000001800497EE: lea     rcx, dword_18026A260
 * 00000001800497F5: call    _Init_thread_header
 * 00000001800497FA: cmp     cs:dword_18026A260, r14d
 * 0000000180049801: jnz     loc_1800498D2
 * 0000000180049807: lea     rax, unk_180155160
 * 000000018004980E: mov     qword ptr [rbp+9E20h+var_9AB0], rax
 * 0000000180049815: lea     rax, unk_18015B544
 * 000000018004981C: mov     qword ptr [rbp+9E20h+var_9AB0+8], rax
 * 0000000180049823: movups  xmm0, [rbp+9E20h+var_9AB0]
 * 000000018004982A: movups  [rbp+9E20h+var_81D8], xmm0
 * 0000000180049831: mov     dword ptr [rbp+9E20h+var_81C8], r13d
 * 0000000180049838: mov     dword ptr [rbp+9E20h+var_81C8+4], esi
 * 000000018004983E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049843: movups  xmm0, [rbp+9E20h+var_81C8]
 * 000000018004984A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004984F: call    sub_1800456E0
 * 0000000180049854: mov     r8, rax
 * 0000000180049857: mov     r9d, r12d
 * 000000018004985A: mov     edx, 0E0h
 * 000000018004985F: lea     rcx, [rbp+9E20h+var_57A8]; Src
 * 0000000180049866: call    sub_1800D45C8
 * 000000018004986B: nop
 * 000000018004986C: mov     r8, rax
 * 000000018004986F: lea     rdx, aStandardshader_66; "StandardShader/ShaderModel40/"
 * 0000000180049876: lea     rcx, [rbp+9E20h+var_57C8]
 * 000000018004987D: call    sub_1800454BC
 * 0000000180049882: nop
 * 0000000180049883: lea     r8, aPixel_64; "/Pixel"
 * 000000018004988A: mov     rdx, rax
 * 000000018004988D: lea     rcx, [rbp+9E20h+var_57E8]
 * 0000000180049894: call    sub_18002C088
 * 0000000180049899: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004989E: mov     rcx, rax
 * 00000001800498A1: call    sub_1800D46B4
 * 00000001800498A6: mov     cs:byte_18026A25C, al
 * 00000001800498AC: lea     rcx, [rbp+9E20h+var_57C8]; void *
 * 00000001800498B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800498B8: nop
 * 00000001800498B9: lea     rcx, [rbp+9E20h+var_57A8]; void *
 * 00000001800498C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800498C5: nop
 * 00000001800498C6: lea     rcx, dword_18026A260
 * 00000001800498CD: call    _Init_thread_footer
 * 00000001800498D2: mov     rax, [rdi+rbx*8]
 * 00000001800498D6: mov     eax, [r15+rax]
 * 00000001800498DA: cmp     cs:dword_18026A268, eax
 * 00000001800498E0: jle     loc_1800499CA
 * 00000001800498E6: lea     rcx, dword_18026A268
 * 00000001800498ED: call    _Init_thread_header
 * 00000001800498F2: cmp     cs:dword_18026A268, r14d
 * 00000001800498F9: jnz     loc_1800499CA
 * 00000001800498FF: lea     rax, unk_180155160
 * 0000000180049906: mov     qword ptr [rbp+9E20h+var_9AA0], rax
 * 000000018004990D: lea     rax, unk_18015B544
 * 0000000180049914: mov     qword ptr [rbp+9E20h+var_9AA0+8], rax
 * 000000018004991B: movups  xmm0, [rbp+9E20h+var_9AA0]
 * 0000000180049922: movups  [rbp+9E20h+var_81B8], xmm0
 * 0000000180049929: mov     dword ptr [rbp+9E20h+var_81A8], r13d
 * 0000000180049930: mov     dword ptr [rbp+9E20h+var_81A8+4], esi
 * 0000000180049936: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004993B: movups  xmm0, [rbp+9E20h+var_81A8]
 * 0000000180049942: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049947: call    sub_1800456E0
 * 000000018004994C: mov     r8, rax
 * 000000018004994F: mov     r9d, r12d
 * 0000000180049952: mov     edx, 0E2h
 * 0000000180049957: lea     rcx, [rbp+9E20h+var_5748]; Src
 * 000000018004995E: call    sub_1800D45C8
 * 0000000180049963: nop
 * 0000000180049964: mov     r8, rax
 * 0000000180049967: lea     rdx, aStandardshader_67; "StandardShader/ShaderModel40/"
 * 000000018004996E: lea     rcx, [rbp+9E20h+var_5768]
 * 0000000180049975: call    sub_1800454BC
 * 000000018004997A: nop
 * 000000018004997B: lea     r8, aPixel_65; "/Pixel"
 * 0000000180049982: mov     rdx, rax
 * 0000000180049985: lea     rcx, [rbp+9E20h+var_5788]
 * 000000018004998C: call    sub_18002C088
 * 0000000180049991: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049996: mov     rcx, rax
 * 0000000180049999: call    sub_1800D46B4
 * 000000018004999E: mov     cs:byte_18026A264, al
 * 00000001800499A4: lea     rcx, [rbp+9E20h+var_5768]; void *
 * 00000001800499AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800499B0: nop
 * 00000001800499B1: lea     rcx, [rbp+9E20h+var_5748]; void *
 * 00000001800499B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800499BD: nop
 * 00000001800499BE: lea     rcx, dword_18026A268
 * 00000001800499C5: call    _Init_thread_footer
 * 00000001800499CA: mov     rax, [rdi+rbx*8]
 * 00000001800499CE: mov     eax, [r15+rax]
 * 00000001800499D2: cmp     cs:dword_18026A270, eax
 * 00000001800499D8: jle     loc_180049AC2
 * 00000001800499DE: lea     rcx, dword_18026A270
 * 00000001800499E5: call    _Init_thread_header
 * 00000001800499EA: cmp     cs:dword_18026A270, r14d
 * 00000001800499F1: jnz     loc_180049AC2
 * 00000001800499F7: lea     rax, unk_18015FB00
 * 00000001800499FE: mov     qword ptr [rbp+9E20h+var_9A90], rax
 * 0000000180049A05: lea     rax, unk_18016608C
 * 0000000180049A0C: mov     qword ptr [rbp+9E20h+var_9A90+8], rax
 * 0000000180049A13: movups  xmm0, [rbp+9E20h+var_9A90]
 * 0000000180049A1A: movups  [rbp+9E20h+var_8198], xmm0
 * 0000000180049A21: mov     dword ptr [rbp+9E20h+var_8188], r13d
 * 0000000180049A28: mov     dword ptr [rbp+9E20h+var_8188+4], esi
 * 0000000180049A2E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049A33: movups  xmm0, [rbp+9E20h+var_8188]
 * 0000000180049A3A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049A3F: call    sub_1800456E0
 * 0000000180049A44: mov     r8, rax
 * 0000000180049A47: mov     r9d, r12d
 * 0000000180049A4A: mov     edx, 0E8h
 * 0000000180049A4F: lea     rcx, [rbp+9E20h+var_56E8]; Src
 * 0000000180049A56: call    sub_1800D45C8
 * 0000000180049A5B: nop
 * 0000000180049A5C: mov     r8, rax
 * 0000000180049A5F: lea     rdx, aStandardshader_68; "StandardShader/ShaderModel40/"
 * 0000000180049A66: lea     rcx, [rbp+9E20h+var_5708]
 * 0000000180049A6D: call    sub_1800454BC
 * 0000000180049A72: nop
 * 0000000180049A73: lea     r8, aPixel_66; "/Pixel"
 * 0000000180049A7A: mov     rdx, rax
 * 0000000180049A7D: lea     rcx, [rbp+9E20h+var_5728]
 * 0000000180049A84: call    sub_18002C088
 * 0000000180049A89: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049A8E: mov     rcx, rax
 * 0000000180049A91: call    sub_1800D46B4
 * 0000000180049A96: mov     cs:byte_18026A26C, al
 * 0000000180049A9C: lea     rcx, [rbp+9E20h+var_5708]; void *
 * 0000000180049AA3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049AA8: nop
 * 0000000180049AA9: lea     rcx, [rbp+9E20h+var_56E8]; void *
 * 0000000180049AB0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049AB5: nop
 * 0000000180049AB6: lea     rcx, dword_18026A270
 * 0000000180049ABD: call    _Init_thread_footer
 * 0000000180049AC2: mov     rax, [rdi+rbx*8]
 * 0000000180049AC6: mov     eax, [r15+rax]
 * 0000000180049ACA: cmp     cs:dword_18026A278, eax
 * 0000000180049AD0: jle     loc_180049BBA
 * 0000000180049AD6: lea     rcx, dword_18026A278
 * 0000000180049ADD: call    _Init_thread_header
 * 0000000180049AE2: cmp     cs:dword_18026A278, r14d
 * 0000000180049AE9: jnz     loc_180049BBA
 * 0000000180049AEF: lea     rax, unk_18015FB00
 * 0000000180049AF6: mov     qword ptr [rbp+9E20h+var_9A80], rax
 * 0000000180049AFD: lea     rax, unk_18016608C
 * 0000000180049B04: mov     qword ptr [rbp+9E20h+var_9A80+8], rax
 * 0000000180049B0B: movups  xmm0, [rbp+9E20h+var_9A80]
 * 0000000180049B12: movups  [rbp+9E20h+var_8178], xmm0
 * 0000000180049B19: mov     dword ptr [rbp+9E20h+var_8168], r13d
 * 0000000180049B20: mov     dword ptr [rbp+9E20h+var_8168+4], esi
 * 0000000180049B26: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049B2B: movups  xmm0, [rbp+9E20h+var_8168]
 * 0000000180049B32: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049B37: call    sub_1800456E0
 * 0000000180049B3C: mov     r8, rax
 * 0000000180049B3F: mov     r9d, r12d
 * 0000000180049B42: mov     edx, 0EAh
 * 0000000180049B47: lea     rcx, [rbp+9E20h+var_5688]; Src
 * 0000000180049B4E: call    sub_1800D45C8
 * 0000000180049B53: nop
 * 0000000180049B54: mov     r8, rax
 * 0000000180049B57: lea     rdx, aStandardshader_69; "StandardShader/ShaderModel40/"
 * 0000000180049B5E: lea     rcx, [rbp+9E20h+var_56A8]
 * 0000000180049B65: call    sub_1800454BC
 * 0000000180049B6A: nop
 * 0000000180049B6B: lea     r8, aPixel_67; "/Pixel"
 * 0000000180049B72: mov     rdx, rax
 * 0000000180049B75: lea     rcx, [rbp+9E20h+var_56C8]
 * 0000000180049B7C: call    sub_18002C088
 * 0000000180049B81: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049B86: mov     rcx, rax
 * 0000000180049B89: call    sub_1800D46B4
 * 0000000180049B8E: mov     cs:byte_18026A274, al
 * 0000000180049B94: lea     rcx, [rbp+9E20h+var_56A8]; void *
 * 0000000180049B9B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049BA0: nop
 * 0000000180049BA1: lea     rcx, [rbp+9E20h+var_5688]; void *
 * 0000000180049BA8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049BAD: nop
 * 0000000180049BAE: lea     rcx, dword_18026A278
 * 0000000180049BB5: call    _Init_thread_footer
 * 0000000180049BBA: mov     rax, [rdi+rbx*8]
 * 0000000180049BBE: mov     eax, [r15+rax]
 * 0000000180049BC2: cmp     cs:dword_18026A280, eax
 * 0000000180049BC8: jle     loc_180049CB2
 * 0000000180049BCE: lea     rcx, dword_18026A280
 * 0000000180049BD5: call    _Init_thread_header
 * 0000000180049BDA: cmp     cs:dword_18026A280, r14d
 * 0000000180049BE1: jnz     loc_180049CB2
 * 0000000180049BE7: lea     rax, unk_180167160
 * 0000000180049BEE: mov     qword ptr [rbp+9E20h+var_9A70], rax
 * 0000000180049BF5: lea     rax, unk_18016D718
 * 0000000180049BFC: mov     qword ptr [rbp+9E20h+var_9A70+8], rax
 * 0000000180049C03: movups  xmm0, [rbp+9E20h+var_9A70]
 * 0000000180049C0A: movups  [rbp+9E20h+var_8158], xmm0
 * 0000000180049C11: mov     dword ptr [rbp+9E20h+var_8148], r13d
 * 0000000180049C18: mov     dword ptr [rbp+9E20h+var_8148+4], esi
 * 0000000180049C1E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049C23: movups  xmm0, [rbp+9E20h+var_8148]
 * 0000000180049C2A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049C2F: call    sub_1800456E0
 * 0000000180049C34: mov     r8, rax
 * 0000000180049C37: mov     r9d, r12d
 * 0000000180049C3A: mov     edx, 0F0h
 * 0000000180049C3F: lea     rcx, [rbp+9E20h+var_5628]; Src
 * 0000000180049C46: call    sub_1800D45C8
 * 0000000180049C4B: nop
 * 0000000180049C4C: mov     r8, rax
 * 0000000180049C4F: lea     rdx, aStandardshader_70; "StandardShader/ShaderModel40/"
 * 0000000180049C56: lea     rcx, [rbp+9E20h+var_5648]
 * 0000000180049C5D: call    sub_1800454BC
 * 0000000180049C62: nop
 * 0000000180049C63: lea     r8, aPixel_68; "/Pixel"
 * 0000000180049C6A: mov     rdx, rax
 * 0000000180049C6D: lea     rcx, [rbp+9E20h+var_5668]
 * 0000000180049C74: call    sub_18002C088
 * 0000000180049C79: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049C7E: mov     rcx, rax
 * 0000000180049C81: call    sub_1800D46B4
 * 0000000180049C86: mov     cs:byte_18026A27C, al
 * 0000000180049C8C: lea     rcx, [rbp+9E20h+var_5648]; void *
 * 0000000180049C93: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049C98: nop
 * 0000000180049C99: lea     rcx, [rbp+9E20h+var_5628]; void *
 * 0000000180049CA0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049CA5: nop
 * 0000000180049CA6: lea     rcx, dword_18026A280
 * 0000000180049CAD: call    _Init_thread_footer
 * 0000000180049CB2: mov     rax, [rdi+rbx*8]
 * 0000000180049CB6: mov     eax, [r15+rax]
 * 0000000180049CBA: cmp     cs:dword_18026A288, eax
 * 0000000180049CC0: jle     loc_180049DAA
 * 0000000180049CC6: lea     rcx, dword_18026A288
 * 0000000180049CCD: call    _Init_thread_header
 * 0000000180049CD2: cmp     cs:dword_18026A288, r14d
 * 0000000180049CD9: jnz     loc_180049DAA
 * 0000000180049CDF: lea     rax, unk_180167160
 * 0000000180049CE6: mov     qword ptr [rbp+9E20h+var_9A60], rax
 * 0000000180049CED: lea     rax, unk_18016D718
 * 0000000180049CF4: mov     qword ptr [rbp+9E20h+var_9A60+8], rax
 * 0000000180049CFB: movups  xmm0, [rbp+9E20h+var_9A60]
 * 0000000180049D02: movups  [rbp+9E20h+var_8138], xmm0
 * 0000000180049D09: mov     dword ptr [rbp+9E20h+var_8128], r13d
 * 0000000180049D10: mov     dword ptr [rbp+9E20h+var_8128+4], esi
 * 0000000180049D16: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049D1B: movups  xmm0, [rbp+9E20h+var_8128]
 * 0000000180049D22: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049D27: call    sub_1800456E0
 * 0000000180049D2C: mov     r8, rax
 * 0000000180049D2F: mov     r9d, r12d
 * 0000000180049D32: mov     edx, 0F2h
 * 0000000180049D37: lea     rcx, [rbp+9E20h+var_55C8]; Src
 * 0000000180049D3E: call    sub_1800D45C8
 * 0000000180049D43: nop
 * 0000000180049D44: mov     r8, rax
 * 0000000180049D47: lea     rdx, aStandardshader_71; "StandardShader/ShaderModel40/"
 * 0000000180049D4E: lea     rcx, [rbp+9E20h+var_55E8]
 * 0000000180049D55: call    sub_1800454BC
 * 0000000180049D5A: nop
 * 0000000180049D5B: lea     r8, aPixel_69; "/Pixel"
 * 0000000180049D62: mov     rdx, rax
 * 0000000180049D65: lea     rcx, [rbp+9E20h+var_5608]
 * 0000000180049D6C: call    sub_18002C088
 * 0000000180049D71: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049D76: mov     rcx, rax
 * 0000000180049D79: call    sub_1800D46B4
 * 0000000180049D7E: mov     cs:byte_18026A284, al
 * 0000000180049D84: lea     rcx, [rbp+9E20h+var_55E8]; void *
 * 0000000180049D8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049D90: nop
 * 0000000180049D91: lea     rcx, [rbp+9E20h+var_55C8]; void *
 * 0000000180049D98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049D9D: nop
 * 0000000180049D9E: lea     rcx, dword_18026A288
 * 0000000180049DA5: call    _Init_thread_footer
 * 0000000180049DAA: mov     rax, [rdi+rbx*8]
 * 0000000180049DAE: mov     eax, [r15+rax]
 * 0000000180049DB2: cmp     cs:dword_18026A290, eax
 * 0000000180049DB8: jle     loc_180049EA2
 * 0000000180049DBE: lea     rcx, dword_18026A290
 * 0000000180049DC5: call    _Init_thread_header
 * 0000000180049DCA: cmp     cs:dword_18026A290, r14d
 * 0000000180049DD1: jnz     loc_180049EA2
 * 0000000180049DD7: lea     rax, unk_180170A20
 * 0000000180049DDE: mov     qword ptr [rbp+9E20h+var_9A50], rax
 * 0000000180049DE5: lea     rax, unk_1801771AC
 * 0000000180049DEC: mov     qword ptr [rbp+9E20h+var_9A50+8], rax
 * 0000000180049DF3: movups  xmm0, [rbp+9E20h+var_9A50]
 * 0000000180049DFA: movups  [rbp+9E20h+var_8118], xmm0
 * 0000000180049E01: mov     dword ptr [rbp+9E20h+var_8108], r13d
 * 0000000180049E08: mov     dword ptr [rbp+9E20h+var_8108+4], esi
 * 0000000180049E0E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049E13: movups  xmm0, [rbp+9E20h+var_8108]
 * 0000000180049E1A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049E1F: call    sub_1800456E0
 * 0000000180049E24: mov     r8, rax
 * 0000000180049E27: mov     r9d, r12d
 * 0000000180049E2A: mov     edx, 0F8h
 * 0000000180049E2F: lea     rcx, [rbp+9E20h+var_5568]; Src
 * 0000000180049E36: call    sub_1800D45C8
 * 0000000180049E3B: nop
 * 0000000180049E3C: mov     r8, rax
 * 0000000180049E3F: lea     rdx, aStandardshader_72; "StandardShader/ShaderModel40/"
 * 0000000180049E46: lea     rcx, [rbp+9E20h+var_5588]
 * 0000000180049E4D: call    sub_1800454BC
 * 0000000180049E52: nop
 * 0000000180049E53: lea     r8, aPixel_70; "/Pixel"
 * 0000000180049E5A: mov     rdx, rax
 * 0000000180049E5D: lea     rcx, [rbp+9E20h+var_55A8]
 * 0000000180049E64: call    sub_18002C088
 * 0000000180049E69: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049E6E: mov     rcx, rax
 * 0000000180049E71: call    sub_1800D46B4
 * 0000000180049E76: mov     cs:byte_18026A28C, al
 * 0000000180049E7C: lea     rcx, [rbp+9E20h+var_5588]; void *
 * 0000000180049E83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049E88: nop
 * 0000000180049E89: lea     rcx, [rbp+9E20h+var_5568]; void *
 * 0000000180049E90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049E95: nop
 * 0000000180049E96: lea     rcx, dword_18026A290
 * 0000000180049E9D: call    _Init_thread_footer
 * 0000000180049EA2: mov     rax, [rdi+rbx*8]
 * 0000000180049EA6: mov     eax, [r15+rax]
 * 0000000180049EAA: cmp     cs:dword_18026A298, eax
 * 0000000180049EB0: jle     loc_180049F9A
 * 0000000180049EB6: lea     rcx, dword_18026A298
 * 0000000180049EBD: call    _Init_thread_header
 * 0000000180049EC2: cmp     cs:dword_18026A298, r14d
 * 0000000180049EC9: jnz     loc_180049F9A
 * 0000000180049ECF: lea     rax, unk_180170A20
 * 0000000180049ED6: mov     qword ptr [rbp+9E20h+var_9A40], rax
 * 0000000180049EDD: lea     rax, unk_1801771AC
 * 0000000180049EE4: mov     qword ptr [rbp+9E20h+var_9A40+8], rax
 * 0000000180049EEB: movups  xmm0, [rbp+9E20h+var_9A40]
 * 0000000180049EF2: movups  [rbp+9E20h+var_80F8], xmm0
 * 0000000180049EF9: mov     dword ptr [rbp+9E20h+var_80E8], r13d
 * 0000000180049F00: mov     dword ptr [rbp+9E20h+var_80E8+4], esi
 * 0000000180049F06: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180049F0B: movups  xmm0, [rbp+9E20h+var_80E8]
 * 0000000180049F12: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180049F17: call    sub_1800456E0
 * 0000000180049F1C: mov     r8, rax
 * 0000000180049F1F: mov     r9d, r12d
 * 0000000180049F22: mov     edx, 0FAh
 * 0000000180049F27: lea     rcx, [rbp+9E20h+var_5508]; Src
 * 0000000180049F2E: call    sub_1800D45C8
 * 0000000180049F33: nop
 * 0000000180049F34: mov     r8, rax
 * 0000000180049F37: lea     rdx, aStandardshader_73; "StandardShader/ShaderModel40/"
 * 0000000180049F3E: lea     rcx, [rbp+9E20h+var_5528]
 * 0000000180049F45: call    sub_1800454BC
 * 0000000180049F4A: nop
 * 0000000180049F4B: lea     r8, aPixel_71; "/Pixel"
 * 0000000180049F52: mov     rdx, rax
 * 0000000180049F55: lea     rcx, [rbp+9E20h+var_5548]
 * 0000000180049F5C: call    sub_18002C088
 * 0000000180049F61: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180049F66: mov     rcx, rax
 * 0000000180049F69: call    sub_1800D46B4
 * 0000000180049F6E: mov     cs:byte_18026A294, al
 * 0000000180049F74: lea     rcx, [rbp+9E20h+var_5528]; void *
 * 0000000180049F7B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049F80: nop
 * 0000000180049F81: lea     rcx, [rbp+9E20h+var_5508]; void *
 * 0000000180049F88: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049F8D: nop
 * 0000000180049F8E: lea     rcx, dword_18026A298
 * 0000000180049F95: call    _Init_thread_footer
 * 0000000180049F9A: mov     rax, [rdi+rbx*8]
 * 0000000180049F9E: mov     eax, [r15+rax]
 * 0000000180049FA2: cmp     cs:dword_18026A2A0, eax
 * 0000000180049FA8: jle     loc_18004A092
 * 0000000180049FAE: lea     rcx, dword_18026A2A0
 * 0000000180049FB5: call    _Init_thread_header
 * 0000000180049FBA: cmp     cs:dword_18026A2A0, r14d
 * 0000000180049FC1: jnz     loc_18004A092
 * 0000000180049FC7: lea     rax, unk_1801771B0
 * 0000000180049FCE: mov     qword ptr [rbp+9E20h+var_9A30], rax
 * 0000000180049FD5: lea     rax, unk_18017D8DC
 * 0000000180049FDC: mov     qword ptr [rbp+9E20h+var_9A30+8], rax
 * 0000000180049FE3: movups  xmm0, [rbp+9E20h+var_9A30]
 * 0000000180049FEA: movups  [rbp+9E20h+var_80D8], xmm0
 * 0000000180049FF1: mov     dword ptr [rbp+9E20h+var_80C8], r13d
 * 0000000180049FF8: mov     dword ptr [rbp+9E20h+var_80C8+4], esi
 * 0000000180049FFE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A003: movups  xmm0, [rbp+9E20h+var_80C8]
 * 000000018004A00A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A00F: call    sub_1800456E0
 * 000000018004A014: mov     r8, rax
 * 000000018004A017: mov     r9d, r12d
 * 000000018004A01A: mov     edx, 100h
 * 000000018004A01F: lea     rcx, [rbp+9E20h+var_54A8]; Src
 * 000000018004A026: call    sub_1800D45C8
 * 000000018004A02B: nop
 * 000000018004A02C: mov     r8, rax
 * 000000018004A02F: lea     rdx, aStandardshader_74; "StandardShader/ShaderModel40/"
 * 000000018004A036: lea     rcx, [rbp+9E20h+var_54C8]
 * 000000018004A03D: call    sub_1800454BC
 * 000000018004A042: nop
 * 000000018004A043: lea     r8, aPixel_72; "/Pixel"
 * 000000018004A04A: mov     rdx, rax
 * 000000018004A04D: lea     rcx, [rbp+9E20h+var_54E8]
 * 000000018004A054: call    sub_18002C088
 * 000000018004A059: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A05E: mov     rcx, rax
 * 000000018004A061: call    sub_1800D46B4
 * 000000018004A066: mov     cs:byte_18026A29C, al
 * 000000018004A06C: lea     rcx, [rbp+9E20h+var_54C8]; void *
 * 000000018004A073: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A078: nop
 * 000000018004A079: lea     rcx, [rbp+9E20h+var_54A8]; void *
 * 000000018004A080: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A085: nop
 * 000000018004A086: lea     rcx, dword_18026A2A0
 * 000000018004A08D: call    _Init_thread_footer
 * 000000018004A092: mov     rax, [rdi+rbx*8]
 * 000000018004A096: mov     eax, [r15+rax]
 * 000000018004A09A: cmp     cs:dword_18026A2A8, eax
 * 000000018004A0A0: jle     loc_18004A18A
 * 000000018004A0A6: lea     rcx, dword_18026A2A8
 * 000000018004A0AD: call    _Init_thread_header
 * 000000018004A0B2: cmp     cs:dword_18026A2A8, r14d
 * 000000018004A0B9: jnz     loc_18004A18A
 * 000000018004A0BF: lea     rax, unk_1801771B0
 * 000000018004A0C6: mov     qword ptr [rbp+9E20h+var_9A20], rax
 * 000000018004A0CD: lea     rax, unk_18017D8DC
 * 000000018004A0D4: mov     qword ptr [rbp+9E20h+var_9A20+8], rax
 * 000000018004A0DB: movups  xmm0, [rbp+9E20h+var_9A20]
 * 000000018004A0E2: movups  [rbp+9E20h+var_80B8], xmm0
 * 000000018004A0E9: mov     dword ptr [rbp+9E20h+var_80A8], r13d
 * 000000018004A0F0: mov     dword ptr [rbp+9E20h+var_80A8+4], esi
 * 000000018004A0F6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A0FB: movups  xmm0, [rbp+9E20h+var_80A8]
 * 000000018004A102: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A107: call    sub_1800456E0
 * 000000018004A10C: mov     r8, rax
 * 000000018004A10F: mov     r9d, r12d
 * 000000018004A112: mov     edx, 102h
 * 000000018004A117: lea     rcx, [rbp+9E20h+var_5448]; Src
 * 000000018004A11E: call    sub_1800D45C8
 * 000000018004A123: nop
 * 000000018004A124: mov     r8, rax
 * 000000018004A127: lea     rdx, aStandardshader_75; "StandardShader/ShaderModel40/"
 * 000000018004A12E: lea     rcx, [rbp+9E20h+var_5468]
 * 000000018004A135: call    sub_1800454BC
 * 000000018004A13A: nop
 * 000000018004A13B: lea     r8, aPixel_73; "/Pixel"
 * 000000018004A142: mov     rdx, rax
 * 000000018004A145: lea     rcx, [rbp+9E20h+var_5488]
 * 000000018004A14C: call    sub_18002C088
 * 000000018004A151: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A156: mov     rcx, rax
 * 000000018004A159: call    sub_1800D46B4
 * 000000018004A15E: mov     cs:byte_18026A2A4, al
 * 000000018004A164: lea     rcx, [rbp+9E20h+var_5468]; void *
 * 000000018004A16B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A170: nop
 * 000000018004A171: lea     rcx, [rbp+9E20h+var_5448]; void *
 * 000000018004A178: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A17D: nop
 * 000000018004A17E: lea     rcx, dword_18026A2A8
 * 000000018004A185: call    _Init_thread_footer
 * 000000018004A18A: mov     rax, [rdi+rbx*8]
 * 000000018004A18E: mov     eax, [r15+rax]
 * 000000018004A192: cmp     cs:dword_18026A2B0, eax
 * 000000018004A198: jle     loc_18004A282
 * 000000018004A19E: lea     rcx, dword_18026A2B0
 * 000000018004A1A5: call    _Init_thread_header
 * 000000018004A1AA: cmp     cs:dword_18026A2B0, r14d
 * 000000018004A1B1: jnz     loc_18004A282
 * 000000018004A1B7: lea     rax, unk_18017D8E0
 * 000000018004A1BE: mov     qword ptr [rbp+9E20h+var_9A10], rax
 * 000000018004A1C5: lea     rax, unk_180180DC0
 * 000000018004A1CC: mov     qword ptr [rbp+9E20h+var_9A10+8], rax
 * 000000018004A1D3: movups  xmm0, [rbp+9E20h+var_9A10]
 * 000000018004A1DA: movups  [rbp+9E20h+var_8098], xmm0
 * 000000018004A1E1: mov     dword ptr [rbp+9E20h+var_8088], r13d
 * 000000018004A1E8: mov     dword ptr [rbp+9E20h+var_8088+4], esi
 * 000000018004A1EE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A1F3: movups  xmm0, [rbp+9E20h+var_8088]
 * 000000018004A1FA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A1FF: call    sub_1800456E0
 * 000000018004A204: mov     r8, rax
 * 000000018004A207: mov     r9d, r12d
 * 000000018004A20A: mov     edx, 104h
 * 000000018004A20F: lea     rcx, [rbp+9E20h+var_53E8]; Src
 * 000000018004A216: call    sub_1800D45C8
 * 000000018004A21B: nop
 * 000000018004A21C: mov     r8, rax
 * 000000018004A21F: lea     rdx, aStandardshader_76; "StandardShader/ShaderModel40/"
 * 000000018004A226: lea     rcx, [rbp+9E20h+var_5408]
 * 000000018004A22D: call    sub_1800454BC
 * 000000018004A232: nop
 * 000000018004A233: lea     r8, aPixel_74; "/Pixel"
 * 000000018004A23A: mov     rdx, rax
 * 000000018004A23D: lea     rcx, [rbp+9E20h+var_5428]
 * 000000018004A244: call    sub_18002C088
 * 000000018004A249: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A24E: mov     rcx, rax
 * 000000018004A251: call    sub_1800D46B4
 * 000000018004A256: mov     cs:byte_18026A2AC, al
 * 000000018004A25C: lea     rcx, [rbp+9E20h+var_5408]; void *
 * 000000018004A263: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A268: nop
 * 000000018004A269: lea     rcx, [rbp+9E20h+var_53E8]; void *
 * 000000018004A270: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A275: nop
 * 000000018004A276: lea     rcx, dword_18026A2B0
 * 000000018004A27D: call    _Init_thread_footer
 * 000000018004A282: mov     rax, [rdi+rbx*8]
 * 000000018004A286: mov     eax, [r15+rax]
 * 000000018004A28A: cmp     cs:dword_18026A2B8, eax
 * 000000018004A290: jle     loc_18004A37A
 * 000000018004A296: lea     rcx, dword_18026A2B8
 * 000000018004A29D: call    _Init_thread_header
 * 000000018004A2A2: cmp     cs:dword_18026A2B8, r14d
 * 000000018004A2A9: jnz     loc_18004A37A
 * 000000018004A2AF: lea     rax, unk_18017D8E0
 * 000000018004A2B6: mov     qword ptr [rbp+9E20h+var_9A00], rax
 * 000000018004A2BD: lea     rax, unk_180180DC0
 * 000000018004A2C4: mov     qword ptr [rbp+9E20h+var_9A00+8], rax
 * 000000018004A2CB: movups  xmm0, [rbp+9E20h+var_9A00]
 * 000000018004A2D2: movups  [rbp+9E20h+var_8078], xmm0
 * 000000018004A2D9: mov     dword ptr [rbp+9E20h+var_8068], r13d
 * 000000018004A2E0: mov     dword ptr [rbp+9E20h+var_8068+4], esi
 * 000000018004A2E6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A2EB: movups  xmm0, [rbp+9E20h+var_8068]
 * 000000018004A2F2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A2F7: call    sub_1800456E0
 * 000000018004A2FC: mov     r8, rax
 * 000000018004A2FF: mov     r9d, r12d
 * 000000018004A302: mov     edx, 106h
 * 000000018004A307: lea     rcx, [rbp+9E20h+var_5388]; Src
 * 000000018004A30E: call    sub_1800D45C8
 * 000000018004A313: nop
 * 000000018004A314: mov     r8, rax
 * 000000018004A317: lea     rdx, aStandardshader_77; "StandardShader/ShaderModel40/"
 * 000000018004A31E: lea     rcx, [rbp+9E20h+var_53A8]
 * 000000018004A325: call    sub_1800454BC
 * 000000018004A32A: nop
 * 000000018004A32B: lea     r8, aPixel_75; "/Pixel"
 * 000000018004A332: mov     rdx, rax
 * 000000018004A335: lea     rcx, [rbp+9E20h+var_53C8]
 * 000000018004A33C: call    sub_18002C088
 * 000000018004A341: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A346: mov     rcx, rax
 * 000000018004A349: call    sub_1800D46B4
 * 000000018004A34E: mov     cs:byte_18026A2B4, al
 * 000000018004A354: lea     rcx, [rbp+9E20h+var_53A8]; void *
 * 000000018004A35B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A360: nop
 * 000000018004A361: lea     rcx, [rbp+9E20h+var_5388]; void *
 * 000000018004A368: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A36D: nop
 * 000000018004A36E: lea     rcx, dword_18026A2B8
 * 000000018004A375: call    _Init_thread_footer
 * 000000018004A37A: mov     rax, [rdi+rbx*8]
 * 000000018004A37E: mov     eax, [r15+rax]
 * 000000018004A382: cmp     cs:dword_18026A2C0, eax
 * 000000018004A388: jle     loc_18004A472
 * 000000018004A38E: lea     rcx, dword_18026A2C0
 * 000000018004A395: call    _Init_thread_header
 * 000000018004A39A: cmp     cs:dword_18026A2C0, r14d
 * 000000018004A3A1: jnz     loc_18004A472
 * 000000018004A3A7: lea     rax, unk_180180DC0
 * 000000018004A3AE: mov     qword ptr [rbp+9E20h+var_99F0], rax
 * 000000018004A3B5: lea     rax, unk_18018767C
 * 000000018004A3BC: mov     qword ptr [rbp+9E20h+var_99F0+8], rax
 * 000000018004A3C3: movups  xmm0, [rbp+9E20h+var_99F0]
 * 000000018004A3CA: movups  [rbp+9E20h+var_8058], xmm0
 * 000000018004A3D1: mov     dword ptr [rbp+9E20h+var_8048], r13d
 * 000000018004A3D8: mov     dword ptr [rbp+9E20h+var_8048+4], esi
 * 000000018004A3DE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A3E3: movups  xmm0, [rbp+9E20h+var_8048]
 * 000000018004A3EA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A3EF: call    sub_1800456E0
 * 000000018004A3F4: mov     r8, rax
 * 000000018004A3F7: mov     r9d, r12d
 * 000000018004A3FA: mov     edx, 108h
 * 000000018004A3FF: lea     rcx, [rbp+9E20h+var_5328]; Src
 * 000000018004A406: call    sub_1800D45C8
 * 000000018004A40B: nop
 * 000000018004A40C: mov     r8, rax
 * 000000018004A40F: lea     rdx, aStandardshader_78; "StandardShader/ShaderModel40/"
 * 000000018004A416: lea     rcx, [rbp+9E20h+var_5348]
 * 000000018004A41D: call    sub_1800454BC
 * 000000018004A422: nop
 * 000000018004A423: lea     r8, aPixel_76; "/Pixel"
 * 000000018004A42A: mov     rdx, rax
 * 000000018004A42D: lea     rcx, [rbp+9E20h+var_5368]
 * 000000018004A434: call    sub_18002C088
 * 000000018004A439: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A43E: mov     rcx, rax
 * 000000018004A441: call    sub_1800D46B4
 * 000000018004A446: mov     cs:byte_18026A2BC, al
 * 000000018004A44C: lea     rcx, [rbp+9E20h+var_5348]; void *
 * 000000018004A453: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A458: nop
 * 000000018004A459: lea     rcx, [rbp+9E20h+var_5328]; void *
 * 000000018004A460: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A465: nop
 * 000000018004A466: lea     rcx, dword_18026A2C0
 * 000000018004A46D: call    _Init_thread_footer
 * 000000018004A472: mov     rax, [rdi+rbx*8]
 * 000000018004A476: mov     eax, [r15+rax]
 * 000000018004A47A: cmp     cs:dword_18026A2C8, eax
 * 000000018004A480: jle     loc_18004A56A
 * 000000018004A486: lea     rcx, dword_18026A2C8
 * 000000018004A48D: call    _Init_thread_header
 * 000000018004A492: cmp     cs:dword_18026A2C8, r14d
 * 000000018004A499: jnz     loc_18004A56A
 * 000000018004A49F: lea     rax, unk_180180DC0
 * 000000018004A4A6: mov     qword ptr [rbp+9E20h+var_99E0], rax
 * 000000018004A4AD: lea     rax, unk_18018767C
 * 000000018004A4B4: mov     qword ptr [rbp+9E20h+var_99E0+8], rax
 * 000000018004A4BB: movups  xmm0, [rbp+9E20h+var_99E0]
 * 000000018004A4C2: movups  [rbp+9E20h+var_8038], xmm0
 * 000000018004A4C9: mov     dword ptr [rbp+9E20h+var_8028], r13d
 * 000000018004A4D0: mov     dword ptr [rbp+9E20h+var_8028+4], esi
 * 000000018004A4D6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A4DB: movups  xmm0, [rbp+9E20h+var_8028]
 * 000000018004A4E2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A4E7: call    sub_1800456E0
 * 000000018004A4EC: mov     r8, rax
 * 000000018004A4EF: mov     r9d, r12d
 * 000000018004A4F2: mov     edx, 10Ah
 * 000000018004A4F7: lea     rcx, [rbp+9E20h+var_52C8]; Src
 * 000000018004A4FE: call    sub_1800D45C8
 * 000000018004A503: nop
 * 000000018004A504: mov     r8, rax
 * 000000018004A507: lea     rdx, aStandardshader_79; "StandardShader/ShaderModel40/"
 * 000000018004A50E: lea     rcx, [rbp+9E20h+var_52E8]
 * 000000018004A515: call    sub_1800454BC
 * 000000018004A51A: nop
 * 000000018004A51B: lea     r8, aPixel_77; "/Pixel"
 * 000000018004A522: mov     rdx, rax
 * 000000018004A525: lea     rcx, [rbp+9E20h+var_5308]
 * 000000018004A52C: call    sub_18002C088
 * 000000018004A531: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A536: mov     rcx, rax
 * 000000018004A539: call    sub_1800D46B4
 * 000000018004A53E: mov     cs:byte_18026A2C4, al
 * 000000018004A544: lea     rcx, [rbp+9E20h+var_52E8]; void *
 * 000000018004A54B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A550: nop
 * 000000018004A551: lea     rcx, [rbp+9E20h+var_52C8]; void *
 * 000000018004A558: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A55D: nop
 * 000000018004A55E: lea     rcx, dword_18026A2C8
 * 000000018004A565: call    _Init_thread_footer
 * 000000018004A56A: mov     rax, [rdi+rbx*8]
 * 000000018004A56E: mov     eax, [r15+rax]
 * 000000018004A572: cmp     cs:dword_18026A2D0, eax
 * 000000018004A578: jle     loc_18004A662
 * 000000018004A57E: lea     rcx, dword_18026A2D0
 * 000000018004A585: call    _Init_thread_header
 * 000000018004A58A: cmp     cs:dword_18026A2D0, r14d
 * 000000018004A591: jnz     loc_18004A662
 * 000000018004A597: lea     rax, unk_180187680
 * 000000018004A59E: mov     qword ptr [rbp+9E20h+var_99D0], rax
 * 000000018004A5A5: lea     rax, unk_18018DF88
 * 000000018004A5AC: mov     qword ptr [rbp+9E20h+var_99D0+8], rax
 * 000000018004A5B3: movups  xmm0, [rbp+9E20h+var_99D0]
 * 000000018004A5BA: movups  [rbp+9E20h+var_8018], xmm0
 * 000000018004A5C1: mov     dword ptr [rbp+9E20h+var_8008], r13d
 * 000000018004A5C8: mov     dword ptr [rbp+9E20h+var_8008+4], esi
 * 000000018004A5CE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A5D3: movups  xmm0, [rbp+9E20h+var_8008]
 * 000000018004A5DA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A5DF: call    sub_1800456E0
 * 000000018004A5E4: mov     r8, rax
 * 000000018004A5E7: mov     r9d, r12d
 * 000000018004A5EA: mov     edx, 110h
 * 000000018004A5EF: lea     rcx, [rbp+9E20h+var_5268]; Src
 * 000000018004A5F6: call    sub_1800D45C8
 * 000000018004A5FB: nop
 * 000000018004A5FC: mov     r8, rax
 * 000000018004A5FF: lea     rdx, aStandardshader_80; "StandardShader/ShaderModel40/"
 * 000000018004A606: lea     rcx, [rbp+9E20h+var_5288]
 * 000000018004A60D: call    sub_1800454BC
 * 000000018004A612: nop
 * 000000018004A613: lea     r8, aPixel_78; "/Pixel"
 * 000000018004A61A: mov     rdx, rax
 * 000000018004A61D: lea     rcx, [rbp+9E20h+var_52A8]
 * 000000018004A624: call    sub_18002C088
 * 000000018004A629: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A62E: mov     rcx, rax
 * 000000018004A631: call    sub_1800D46B4
 * 000000018004A636: mov     cs:byte_18026A2CC, al
 * 000000018004A63C: lea     rcx, [rbp+9E20h+var_5288]; void *
 * 000000018004A643: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A648: nop
 * 000000018004A649: lea     rcx, [rbp+9E20h+var_5268]; void *
 * 000000018004A650: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A655: nop
 * 000000018004A656: lea     rcx, dword_18026A2D0
 * 000000018004A65D: call    _Init_thread_footer
 * 000000018004A662: mov     rax, [rdi+rbx*8]
 * 000000018004A666: mov     eax, [r15+rax]
 * 000000018004A66A: cmp     cs:dword_18026A2D8, eax
 * 000000018004A670: jle     loc_18004A75A
 * 000000018004A676: lea     rcx, dword_18026A2D8
 * 000000018004A67D: call    _Init_thread_header
 * 000000018004A682: cmp     cs:dword_18026A2D8, r14d
 * 000000018004A689: jnz     loc_18004A75A
 * 000000018004A68F: lea     rax, unk_180187680
 * 000000018004A696: mov     qword ptr [rbp+9E20h+var_99C0], rax
 * 000000018004A69D: lea     rax, unk_18018DF88
 * 000000018004A6A4: mov     qword ptr [rbp+9E20h+var_99C0+8], rax
 * 000000018004A6AB: movups  xmm0, [rbp+9E20h+var_99C0]
 * 000000018004A6B2: movups  [rbp+9E20h+var_7FF8], xmm0
 * 000000018004A6B9: mov     dword ptr [rbp+9E20h+var_7FE8], r13d
 * 000000018004A6C0: mov     dword ptr [rbp+9E20h+var_7FE8+4], esi
 * 000000018004A6C6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A6CB: movups  xmm0, [rbp+9E20h+var_7FE8]
 * 000000018004A6D2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A6D7: call    sub_1800456E0
 * 000000018004A6DC: mov     r8, rax
 * 000000018004A6DF: mov     r9d, r12d
 * 000000018004A6E2: mov     edx, 112h
 * 000000018004A6E7: lea     rcx, [rbp+9E20h+var_5208]; Src
 * 000000018004A6EE: call    sub_1800D45C8
 * 000000018004A6F3: nop
 * 000000018004A6F4: mov     r8, rax
 * 000000018004A6F7: lea     rdx, aStandardshader_81; "StandardShader/ShaderModel40/"
 * 000000018004A6FE: lea     rcx, [rbp+9E20h+var_5228]
 * 000000018004A705: call    sub_1800454BC
 * 000000018004A70A: nop
 * 000000018004A70B: lea     r8, aPixel_79; "/Pixel"
 * 000000018004A712: mov     rdx, rax
 * 000000018004A715: lea     rcx, [rbp+9E20h+var_5248]
 * 000000018004A71C: call    sub_18002C088
 * 000000018004A721: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A726: mov     rcx, rax
 * 000000018004A729: call    sub_1800D46B4
 * 000000018004A72E: mov     cs:byte_18026A2D4, al
 * 000000018004A734: lea     rcx, [rbp+9E20h+var_5228]; void *
 * 000000018004A73B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A740: nop
 * 000000018004A741: lea     rcx, [rbp+9E20h+var_5208]; void *
 * 000000018004A748: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A74D: nop
 * 000000018004A74E: lea     rcx, dword_18026A2D8
 * 000000018004A755: call    _Init_thread_footer
 * 000000018004A75A: mov     rax, [rdi+rbx*8]
 * 000000018004A75E: mov     eax, [r15+rax]
 * 000000018004A762: cmp     cs:dword_18026A2E0, eax
 * 000000018004A768: jle     loc_18004A852
 * 000000018004A76E: lea     rcx, dword_18026A2E0
 * 000000018004A775: call    _Init_thread_header
 * 000000018004A77A: cmp     cs:dword_18026A2E0, r14d
 * 000000018004A781: jnz     loc_18004A852
 * 000000018004A787: lea     rax, unk_18018DF90
 * 000000018004A78E: mov     qword ptr [rbp+9E20h+var_99B0], rax
 * 000000018004A795: lea     rax, unk_1801915AC
 * 000000018004A79C: mov     qword ptr [rbp+9E20h+var_99B0+8], rax
 * 000000018004A7A3: movups  xmm0, [rbp+9E20h+var_99B0]
 * 000000018004A7AA: movups  [rbp+9E20h+var_7FD8], xmm0
 * 000000018004A7B1: mov     dword ptr [rbp+9E20h+var_7FC8], r13d
 * 000000018004A7B8: mov     dword ptr [rbp+9E20h+var_7FC8+4], esi
 * 000000018004A7BE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A7C3: movups  xmm0, [rbp+9E20h+var_7FC8]
 * 000000018004A7CA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A7CF: call    sub_1800456E0
 * 000000018004A7D4: mov     r8, rax
 * 000000018004A7D7: mov     r9d, r12d
 * 000000018004A7DA: mov     edx, 114h
 * 000000018004A7DF: lea     rcx, [rbp+9E20h+var_51A8]; Src
 * 000000018004A7E6: call    sub_1800D45C8
 * 000000018004A7EB: nop
 * 000000018004A7EC: mov     r8, rax
 * 000000018004A7EF: lea     rdx, aStandardshader_82; "StandardShader/ShaderModel40/"
 * 000000018004A7F6: lea     rcx, [rbp+9E20h+var_51C8]
 * 000000018004A7FD: call    sub_1800454BC
 * 000000018004A802: nop
 * 000000018004A803: lea     r8, aPixel_80; "/Pixel"
 * 000000018004A80A: mov     rdx, rax
 * 000000018004A80D: lea     rcx, [rbp+9E20h+var_51E8]
 * 000000018004A814: call    sub_18002C088
 * 000000018004A819: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A81E: mov     rcx, rax
 * 000000018004A821: call    sub_1800D46B4
 * 000000018004A826: mov     cs:byte_18026A2DC, al
 * 000000018004A82C: lea     rcx, [rbp+9E20h+var_51C8]; void *
 * 000000018004A833: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A838: nop
 * 000000018004A839: lea     rcx, [rbp+9E20h+var_51A8]; void *
 * 000000018004A840: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A845: nop
 * 000000018004A846: lea     rcx, dword_18026A2E0
 * 000000018004A84D: call    _Init_thread_footer
 * 000000018004A852: mov     rax, [rdi+rbx*8]
 * 000000018004A856: mov     eax, [r15+rax]
 * 000000018004A85A: cmp     cs:dword_18026A2E8, eax
 * 000000018004A860: jle     loc_18004A94A
 * 000000018004A866: lea     rcx, dword_18026A2E8
 * 000000018004A86D: call    _Init_thread_header
 * 000000018004A872: cmp     cs:dword_18026A2E8, r14d
 * 000000018004A879: jnz     loc_18004A94A
 * 000000018004A87F: lea     rax, unk_18018DF90
 * 000000018004A886: mov     qword ptr [rbp+9E20h+var_99A0], rax
 * 000000018004A88D: lea     rax, unk_1801915AC
 * 000000018004A894: mov     qword ptr [rbp+9E20h+var_99A0+8], rax
 * 000000018004A89B: movups  xmm0, [rbp+9E20h+var_99A0]
 * 000000018004A8A2: movups  [rbp+9E20h+var_7FB8], xmm0
 * 000000018004A8A9: mov     dword ptr [rbp+9E20h+var_7FA8], r13d
 * 000000018004A8B0: mov     dword ptr [rbp+9E20h+var_7FA8+4], esi
 * 000000018004A8B6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A8BB: movups  xmm0, [rbp+9E20h+var_7FA8]
 * 000000018004A8C2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A8C7: call    sub_1800456E0
 * 000000018004A8CC: mov     r8, rax
 * 000000018004A8CF: mov     r9d, r12d
 * 000000018004A8D2: mov     edx, 116h
 * 000000018004A8D7: lea     rcx, [rbp+9E20h+var_5148]; Src
 * 000000018004A8DE: call    sub_1800D45C8
 * 000000018004A8E3: nop
 * 000000018004A8E4: mov     r8, rax
 * 000000018004A8E7: lea     rdx, aStandardshader_83; "StandardShader/ShaderModel40/"
 * 000000018004A8EE: lea     rcx, [rbp+9E20h+var_5168]
 * 000000018004A8F5: call    sub_1800454BC
 * 000000018004A8FA: nop
 * 000000018004A8FB: lea     r8, aPixel_81; "/Pixel"
 * 000000018004A902: mov     rdx, rax
 * 000000018004A905: lea     rcx, [rbp+9E20h+var_5188]
 * 000000018004A90C: call    sub_18002C088
 * 000000018004A911: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004A916: mov     rcx, rax
 * 000000018004A919: call    sub_1800D46B4
 * 000000018004A91E: mov     cs:byte_18026A2E4, al
 * 000000018004A924: lea     rcx, [rbp+9E20h+var_5168]; void *
 * 000000018004A92B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A930: nop
 * 000000018004A931: lea     rcx, [rbp+9E20h+var_5148]; void *
 * 000000018004A938: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A93D: nop
 * 000000018004A93E: lea     rcx, dword_18026A2E8
 * 000000018004A945: call    _Init_thread_footer
 * 000000018004A94A: mov     rax, [rdi+rbx*8]
 * 000000018004A94E: mov     eax, [r15+rax]
 * 000000018004A952: cmp     cs:dword_18026A2F0, eax
 * 000000018004A958: jle     loc_18004AA42
 * 000000018004A95E: lea     rcx, dword_18026A2F0
 * 000000018004A965: call    _Init_thread_header
 * 000000018004A96A: cmp     cs:dword_18026A2F0, r14d
 * 000000018004A971: jnz     loc_18004AA42
 * 000000018004A977: lea     rax, unk_1801915B0
 * 000000018004A97E: mov     qword ptr [rbp+9E20h+var_9990], rax
 * 000000018004A985: lea     rax, unk_18019806C
 * 000000018004A98C: mov     qword ptr [rbp+9E20h+var_9990+8], rax
 * 000000018004A993: movups  xmm0, [rbp+9E20h+var_9990]
 * 000000018004A99A: movups  [rbp+9E20h+var_7F98], xmm0
 * 000000018004A9A1: mov     dword ptr [rbp+9E20h+var_7F88], r13d
 * 000000018004A9A8: mov     dword ptr [rbp+9E20h+var_7F88+4], esi
 * 000000018004A9AE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004A9B3: movups  xmm0, [rbp+9E20h+var_7F88]
 * 000000018004A9BA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004A9BF: call    sub_1800456E0
 * 000000018004A9C4: mov     r8, rax
 * 000000018004A9C7: mov     r9d, r12d
 * 000000018004A9CA: mov     edx, 118h
 * 000000018004A9CF: lea     rcx, [rbp+9E20h+var_50E8]; Src
 * 000000018004A9D6: call    sub_1800D45C8
 * 000000018004A9DB: nop
 * 000000018004A9DC: mov     r8, rax
 * 000000018004A9DF: lea     rdx, aStandardshader_84; "StandardShader/ShaderModel40/"
 * 000000018004A9E6: lea     rcx, [rbp+9E20h+var_5108]
 * 000000018004A9ED: call    sub_1800454BC
 * 000000018004A9F2: nop
 * 000000018004A9F3: lea     r8, aPixel_82; "/Pixel"
 * 000000018004A9FA: mov     rdx, rax
 * 000000018004A9FD: lea     rcx, [rbp+9E20h+var_5128]
 * 000000018004AA04: call    sub_18002C088
 * 000000018004AA09: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004AA0E: mov     rcx, rax
 * 000000018004AA11: call    sub_1800D46B4
 * 000000018004AA16: mov     cs:byte_18026A2EC, al
 * 000000018004AA1C: lea     rcx, [rbp+9E20h+var_5108]; void *
 * 000000018004AA23: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AA28: nop
 * 000000018004AA29: lea     rcx, [rbp+9E20h+var_50E8]; void *
 * 000000018004AA30: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AA35: nop
 * 000000018004AA36: lea     rcx, dword_18026A2F0
 * 000000018004AA3D: call    _Init_thread_footer
 * 000000018004AA42: mov     rax, [rdi+rbx*8]
 * 000000018004AA46: mov     eax, [r15+rax]
 * 000000018004AA4A: cmp     cs:dword_18026A2F8, eax
 * 000000018004AA50: jle     loc_18004AB3A
 * 000000018004AA56: lea     rcx, dword_18026A2F8
 * 000000018004AA5D: call    _Init_thread_header
 * 000000018004AA62: cmp     cs:dword_18026A2F8, r14d
 * 000000018004AA69: jnz     loc_18004AB3A
 * 000000018004AA6F: lea     rax, unk_1801915B0
 * 000000018004AA76: mov     qword ptr [rbp+9E20h+var_9980], rax
 * 000000018004AA7D: lea     rax, unk_18019806C
 * 000000018004AA84: mov     qword ptr [rbp+9E20h+var_9980+8], rax
 * 000000018004AA8B: movups  xmm0, [rbp+9E20h+var_9980]
 * 000000018004AA92: movups  [rbp+9E20h+var_7F78], xmm0
 * 000000018004AA99: mov     dword ptr [rbp+9E20h+var_7F68], r13d
 * 000000018004AAA0: mov     dword ptr [rbp+9E20h+var_7F68+4], esi
 * 000000018004AAA6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AAAB: movups  xmm0, [rbp+9E20h+var_7F68]
 * 000000018004AAB2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AAB7: call    sub_1800456E0
 * 000000018004AABC: mov     r8, rax
 * 000000018004AABF: mov     r9d, r12d
 * 000000018004AAC2: mov     edx, 11Ah
 * 000000018004AAC7: lea     rcx, [rbp+9E20h+var_5088]; Src
 * 000000018004AACE: call    sub_1800D45C8
 * 000000018004AAD3: nop
 * 000000018004AAD4: mov     r8, rax
 * 000000018004AAD7: lea     rdx, aStandardshader_85; "StandardShader/ShaderModel40/"
 * 000000018004AADE: lea     rcx, [rbp+9E20h+var_50A8]
 * 000000018004AAE5: call    sub_1800454BC
 * 000000018004AAEA: nop
 * 000000018004AAEB: lea     r8, aPixel_83; "/Pixel"
 * 000000018004AAF2: mov     rdx, rax
 * 000000018004AAF5: lea     rcx, [rbp+9E20h+var_50C8]
 * 000000018004AAFC: call    sub_18002C088
 * 000000018004AB01: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004AB06: mov     rcx, rax
 * 000000018004AB09: call    sub_1800D46B4
 * 000000018004AB0E: mov     cs:byte_18026A2F4, al
 * 000000018004AB14: lea     rcx, [rbp+9E20h+var_50A8]; void *
 * 000000018004AB1B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AB20: nop
 * 000000018004AB21: lea     rcx, [rbp+9E20h+var_5088]; void *
 * 000000018004AB28: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AB2D: nop
 * 000000018004AB2E: lea     rcx, dword_18026A2F8
 * 000000018004AB35: call    _Init_thread_footer
 * 000000018004AB3A: mov     rax, [rdi+rbx*8]
 * 000000018004AB3E: mov     eax, [r15+rax]
 * 000000018004AB42: cmp     cs:dword_18026A300, eax
 * 000000018004AB48: jle     loc_18004AC32
 * 000000018004AB4E: lea     rcx, dword_18026A300
 * 000000018004AB55: call    _Init_thread_header
 * 000000018004AB5A: cmp     cs:dword_18026A300, r14d
 * 000000018004AB61: jnz     loc_18004AC32
 * 000000018004AB67: lea     rax, unk_1801771B0
 * 000000018004AB6E: mov     qword ptr [rbp+9E20h+var_9970], rax
 * 000000018004AB75: lea     rax, unk_18017D8DC
 * 000000018004AB7C: mov     qword ptr [rbp+9E20h+var_9970+8], rax
 * 000000018004AB83: movups  xmm0, [rbp+9E20h+var_9970]
 * 000000018004AB8A: movups  [rbp+9E20h+var_7F58], xmm0
 * 000000018004AB91: mov     dword ptr [rbp+9E20h+var_7F48], r13d
 * 000000018004AB98: mov     dword ptr [rbp+9E20h+var_7F48+4], esi
 * 000000018004AB9E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004ABA3: movups  xmm0, [rbp+9E20h+var_7F48]
 * 000000018004ABAA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004ABAF: call    sub_1800456E0
 * 000000018004ABB4: mov     r8, rax
 * 000000018004ABB7: mov     r9d, r12d
 * 000000018004ABBA: mov     edx, 120h
 * 000000018004ABBF: lea     rcx, [rbp+9E20h+var_5028]; Src
 * 000000018004ABC6: call    sub_1800D45C8
 * 000000018004ABCB: nop
 * 000000018004ABCC: mov     r8, rax
 * 000000018004ABCF: lea     rdx, aStandardshader_86; "StandardShader/ShaderModel40/"
 * 000000018004ABD6: lea     rcx, [rbp+9E20h+var_5048]
 * 000000018004ABDD: call    sub_1800454BC
 * 000000018004ABE2: nop
 * 000000018004ABE3: lea     r8, aPixel_84; "/Pixel"
 * 000000018004ABEA: mov     rdx, rax
 * 000000018004ABED: lea     rcx, [rbp+9E20h+var_5068]
 * 000000018004ABF4: call    sub_18002C088
 * 000000018004ABF9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004ABFE: mov     rcx, rax
 * 000000018004AC01: call    sub_1800D46B4
 * 000000018004AC06: mov     cs:byte_18026A2FC, al
 * 000000018004AC0C: lea     rcx, [rbp+9E20h+var_5048]; void *
 * 000000018004AC13: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AC18: nop
 * 000000018004AC19: lea     rcx, [rbp+9E20h+var_5028]; void *
 * 000000018004AC20: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AC25: nop
 * 000000018004AC26: lea     rcx, dword_18026A300
 * 000000018004AC2D: call    _Init_thread_footer
 * 000000018004AC32: mov     rax, [rdi+rbx*8]
 * 000000018004AC36: mov     eax, [r15+rax]
 * 000000018004AC3A: cmp     cs:dword_18026A308, eax
 * 000000018004AC40: jle     loc_18004AD2A
 * 000000018004AC46: lea     rcx, dword_18026A308
 * 000000018004AC4D: call    _Init_thread_header
 * 000000018004AC52: cmp     cs:dword_18026A308, r14d
 * 000000018004AC59: jnz     loc_18004AD2A
 * 000000018004AC5F: lea     rax, unk_1801771B0
 * 000000018004AC66: mov     qword ptr [rbp+9E20h+var_9960], rax
 * 000000018004AC6D: lea     rax, unk_18017D8DC
 * 000000018004AC74: mov     qword ptr [rbp+9E20h+var_9960+8], rax
 * 000000018004AC7B: movups  xmm0, [rbp+9E20h+var_9960]
 * 000000018004AC82: movups  [rbp+9E20h+var_7F38], xmm0
 * 000000018004AC89: mov     dword ptr [rbp+9E20h+var_7F28], r13d
 * 000000018004AC90: mov     dword ptr [rbp+9E20h+var_7F28+4], esi
 * 000000018004AC96: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AC9B: movups  xmm0, [rbp+9E20h+var_7F28]
 * 000000018004ACA2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004ACA7: call    sub_1800456E0
 * 000000018004ACAC: mov     r8, rax
 * 000000018004ACAF: mov     r9d, r12d
 * 000000018004ACB2: mov     edx, 122h
 * 000000018004ACB7: lea     rcx, [rbp+9E20h+var_4FC8]; Src
 * 000000018004ACBE: call    sub_1800D45C8
 * 000000018004ACC3: nop
 * 000000018004ACC4: mov     r8, rax
 * 000000018004ACC7: lea     rdx, aStandardshader_87; "StandardShader/ShaderModel40/"
 * 000000018004ACCE: lea     rcx, [rbp+9E20h+var_4FE8]
 * 000000018004ACD5: call    sub_1800454BC
 * 000000018004ACDA: nop
 * 000000018004ACDB: lea     r8, aPixel_85; "/Pixel"
 * 000000018004ACE2: mov     rdx, rax
 * 000000018004ACE5: lea     rcx, [rbp+9E20h+var_5008]
 * 000000018004ACEC: call    sub_18002C088
 * 000000018004ACF1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004ACF6: mov     rcx, rax
 * 000000018004ACF9: call    sub_1800D46B4
 * 000000018004ACFE: mov     cs:byte_18026A304, al
 * 000000018004AD04: lea     rcx, [rbp+9E20h+var_4FE8]; void *
 * 000000018004AD0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AD10: nop
 * 000000018004AD11: lea     rcx, [rbp+9E20h+var_4FC8]; void *
 * 000000018004AD18: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AD1D: nop
 * 000000018004AD1E: lea     rcx, dword_18026A308
 * 000000018004AD25: call    _Init_thread_footer
 * 000000018004AD2A: mov     rax, [rdi+rbx*8]
 * 000000018004AD2E: mov     eax, [r15+rax]
 * 000000018004AD32: cmp     cs:dword_18026A310, eax
 * 000000018004AD38: jle     loc_18004AE22
 * 000000018004AD3E: lea     rcx, dword_18026A310
 * 000000018004AD45: call    _Init_thread_header
 * 000000018004AD4A: cmp     cs:dword_18026A310, r14d
 * 000000018004AD51: jnz     loc_18004AE22
 * 000000018004AD57: lea     rax, unk_180180DC0
 * 000000018004AD5E: mov     qword ptr [rbp+9E20h+var_9950], rax
 * 000000018004AD65: lea     rax, unk_18018767C
 * 000000018004AD6C: mov     qword ptr [rbp+9E20h+var_9950+8], rax
 * 000000018004AD73: movups  xmm0, [rbp+9E20h+var_9950]
 * 000000018004AD7A: movups  [rbp+9E20h+var_7F18], xmm0
 * 000000018004AD81: mov     dword ptr [rbp+9E20h+var_7F08], r13d
 * 000000018004AD88: mov     dword ptr [rbp+9E20h+var_7F08+4], esi
 * 000000018004AD8E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AD93: movups  xmm0, [rbp+9E20h+var_7F08]
 * 000000018004AD9A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AD9F: call    sub_1800456E0
 * 000000018004ADA4: mov     r8, rax
 * 000000018004ADA7: mov     r9d, r12d
 * 000000018004ADAA: mov     edx, 128h
 * 000000018004ADAF: lea     rcx, [rbp+9E20h+var_4F68]; Src
 * 000000018004ADB6: call    sub_1800D45C8
 * 000000018004ADBB: nop
 * 000000018004ADBC: mov     r8, rax
 * 000000018004ADBF: lea     rdx, aStandardshader_88; "StandardShader/ShaderModel40/"
 * 000000018004ADC6: lea     rcx, [rbp+9E20h+var_4F88]
 * 000000018004ADCD: call    sub_1800454BC
 * 000000018004ADD2: nop
 * 000000018004ADD3: lea     r8, aPixel_86; "/Pixel"
 * 000000018004ADDA: mov     rdx, rax
 * 000000018004ADDD: lea     rcx, [rbp+9E20h+var_4FA8]
 * 000000018004ADE4: call    sub_18002C088
 * 000000018004ADE9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004ADEE: mov     rcx, rax
 * 000000018004ADF1: call    sub_1800D46B4
 * 000000018004ADF6: mov     cs:byte_18026A30C, al
 * 000000018004ADFC: lea     rcx, [rbp+9E20h+var_4F88]; void *
 * 000000018004AE03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AE08: nop
 * 000000018004AE09: lea     rcx, [rbp+9E20h+var_4F68]; void *
 * 000000018004AE10: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AE15: nop
 * 000000018004AE16: lea     rcx, dword_18026A310
 * 000000018004AE1D: call    _Init_thread_footer
 * 000000018004AE22: mov     rax, [rdi+rbx*8]
 * 000000018004AE26: mov     eax, [r15+rax]
 * 000000018004AE2A: cmp     cs:dword_18026A318, eax
 * 000000018004AE30: jle     loc_18004AF1A
 * 000000018004AE36: lea     rcx, dword_18026A318
 * 000000018004AE3D: call    _Init_thread_header
 * 000000018004AE42: cmp     cs:dword_18026A318, r14d
 * 000000018004AE49: jnz     loc_18004AF1A
 * 000000018004AE4F: lea     rax, unk_180180DC0
 * 000000018004AE56: mov     qword ptr [rbp+9E20h+var_9940], rax
 * 000000018004AE5D: lea     rax, unk_18018767C
 * 000000018004AE64: mov     qword ptr [rbp+9E20h+var_9940+8], rax
 * 000000018004AE6B: movups  xmm0, [rbp+9E20h+var_9940]
 * 000000018004AE72: movups  [rbp+9E20h+var_7EF8], xmm0
 * 000000018004AE79: mov     dword ptr [rbp+9E20h+var_7EE8], r13d
 * 000000018004AE80: mov     dword ptr [rbp+9E20h+var_7EE8+4], esi
 * 000000018004AE86: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AE8B: movups  xmm0, [rbp+9E20h+var_7EE8]
 * 000000018004AE92: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AE97: call    sub_1800456E0
 * 000000018004AE9C: mov     r8, rax
 * 000000018004AE9F: mov     r9d, r12d
 * 000000018004AEA2: mov     edx, 12Ah
 * 000000018004AEA7: lea     rcx, [rbp+9E20h+var_4F08]; Src
 * 000000018004AEAE: call    sub_1800D45C8
 * 000000018004AEB3: nop
 * 000000018004AEB4: mov     r8, rax
 * 000000018004AEB7: lea     rdx, aStandardshader_89; "StandardShader/ShaderModel40/"
 * 000000018004AEBE: lea     rcx, [rbp+9E20h+var_4F28]
 * 000000018004AEC5: call    sub_1800454BC
 * 000000018004AECA: nop
 * 000000018004AECB: lea     r8, aPixel_87; "/Pixel"
 * 000000018004AED2: mov     rdx, rax
 * 000000018004AED5: lea     rcx, [rbp+9E20h+var_4F48]
 * 000000018004AEDC: call    sub_18002C088
 * 000000018004AEE1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004AEE6: mov     rcx, rax
 * 000000018004AEE9: call    sub_1800D46B4
 * 000000018004AEEE: mov     cs:byte_18026A314, al
 * 000000018004AEF4: lea     rcx, [rbp+9E20h+var_4F28]; void *
 * 000000018004AEFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AF00: nop
 * 000000018004AF01: lea     rcx, [rbp+9E20h+var_4F08]; void *
 * 000000018004AF08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AF0D: nop
 * 000000018004AF0E: lea     rcx, dword_18026A318
 * 000000018004AF15: call    _Init_thread_footer
 * 000000018004AF1A: mov     rax, [rdi+rbx*8]
 * 000000018004AF1E: mov     eax, [r15+rax]
 * 000000018004AF22: cmp     cs:dword_18026A320, eax
 * 000000018004AF28: jle     loc_18004B012
 * 000000018004AF2E: lea     rcx, dword_18026A320
 * 000000018004AF35: call    _Init_thread_header
 * 000000018004AF3A: cmp     cs:dword_18026A320, r14d
 * 000000018004AF41: jnz     loc_18004B012
 * 000000018004AF47: lea     rax, unk_180187680
 * 000000018004AF4E: mov     qword ptr [rbp+9E20h+var_9930], rax
 * 000000018004AF55: lea     rax, unk_18018DF88
 * 000000018004AF5C: mov     qword ptr [rbp+9E20h+var_9930+8], rax
 * 000000018004AF63: movups  xmm0, [rbp+9E20h+var_9930]
 * 000000018004AF6A: movups  [rbp+9E20h+var_7ED8], xmm0
 * 000000018004AF71: mov     dword ptr [rbp+9E20h+var_7EC8], r13d
 * 000000018004AF78: mov     dword ptr [rbp+9E20h+var_7EC8+4], esi
 * 000000018004AF7E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004AF83: movups  xmm0, [rbp+9E20h+var_7EC8]
 * 000000018004AF8A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004AF8F: call    sub_1800456E0
 * 000000018004AF94: mov     r8, rax
 * 000000018004AF97: mov     r9d, r12d
 * 000000018004AF9A: mov     edx, 130h
 * 000000018004AF9F: lea     rcx, [rbp+9E20h+var_4EA8]; Src
 * 000000018004AFA6: call    sub_1800D45C8
 * 000000018004AFAB: nop
 * 000000018004AFAC: mov     r8, rax
 * 000000018004AFAF: lea     rdx, aStandardshader_90; "StandardShader/ShaderModel40/"
 * 000000018004AFB6: lea     rcx, [rbp+9E20h+var_4EC8]
 * 000000018004AFBD: call    sub_1800454BC
 * 000000018004AFC2: nop
 * 000000018004AFC3: lea     r8, aPixel_88; "/Pixel"
 * 000000018004AFCA: mov     rdx, rax
 * 000000018004AFCD: lea     rcx, [rbp+9E20h+var_4EE8]
 * 000000018004AFD4: call    sub_18002C088
 * 000000018004AFD9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004AFDE: mov     rcx, rax
 * 000000018004AFE1: call    sub_1800D46B4
 * 000000018004AFE6: mov     cs:byte_18026A31C, al
 * 000000018004AFEC: lea     rcx, [rbp+9E20h+var_4EC8]; void *
 * 000000018004AFF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AFF8: nop
 * 000000018004AFF9: lea     rcx, [rbp+9E20h+var_4EA8]; void *
 * 000000018004B000: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B005: nop
 * 000000018004B006: lea     rcx, dword_18026A320
 * 000000018004B00D: call    _Init_thread_footer
 * 000000018004B012: mov     rax, [rdi+rbx*8]
 * 000000018004B016: mov     eax, [r15+rax]
 * 000000018004B01A: cmp     cs:dword_18026A328, eax
 * 000000018004B020: jle     loc_18004B10A
 * 000000018004B026: lea     rcx, dword_18026A328
 * 000000018004B02D: call    _Init_thread_header
 * 000000018004B032: cmp     cs:dword_18026A328, r14d
 * 000000018004B039: jnz     loc_18004B10A
 * 000000018004B03F: lea     rax, unk_180187680
 * 000000018004B046: mov     qword ptr [rbp+9E20h+var_9920], rax
 * 000000018004B04D: lea     rax, unk_18018DF88
 * 000000018004B054: mov     qword ptr [rbp+9E20h+var_9920+8], rax
 * 000000018004B05B: movups  xmm0, [rbp+9E20h+var_9920]
 * 000000018004B062: movups  [rbp+9E20h+var_7EB8], xmm0
 * 000000018004B069: mov     dword ptr [rbp+9E20h+var_7EA8], r13d
 * 000000018004B070: mov     dword ptr [rbp+9E20h+var_7EA8+4], esi
 * 000000018004B076: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B07B: movups  xmm0, [rbp+9E20h+var_7EA8]
 * 000000018004B082: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B087: call    sub_1800456E0
 * 000000018004B08C: mov     r8, rax
 * 000000018004B08F: mov     r9d, r12d
 * 000000018004B092: mov     edx, 132h
 * 000000018004B097: lea     rcx, [rbp+9E20h+var_4E48]; Src
 * 000000018004B09E: call    sub_1800D45C8
 * 000000018004B0A3: nop
 * 000000018004B0A4: mov     r8, rax
 * 000000018004B0A7: lea     rdx, aStandardshader_91; "StandardShader/ShaderModel40/"
 * 000000018004B0AE: lea     rcx, [rbp+9E20h+var_4E68]
 * 000000018004B0B5: call    sub_1800454BC
 * 000000018004B0BA: nop
 * 000000018004B0BB: lea     r8, aPixel_89; "/Pixel"
 * 000000018004B0C2: mov     rdx, rax
 * 000000018004B0C5: lea     rcx, [rbp+9E20h+var_4E88]
 * 000000018004B0CC: call    sub_18002C088
 * 000000018004B0D1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B0D6: mov     rcx, rax
 * 000000018004B0D9: call    sub_1800D46B4
 * 000000018004B0DE: mov     cs:byte_18026A324, al
 * 000000018004B0E4: lea     rcx, [rbp+9E20h+var_4E68]; void *
 * 000000018004B0EB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B0F0: nop
 * 000000018004B0F1: lea     rcx, [rbp+9E20h+var_4E48]; void *
 * 000000018004B0F8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B0FD: nop
 * 000000018004B0FE: lea     rcx, dword_18026A328
 * 000000018004B105: call    _Init_thread_footer
 * 000000018004B10A: mov     rax, [rdi+rbx*8]
 * 000000018004B10E: mov     eax, [r15+rax]
 * 000000018004B112: cmp     cs:dword_18026A330, eax
 * 000000018004B118: jle     loc_18004B202
 * 000000018004B11E: lea     rcx, dword_18026A330
 * 000000018004B125: call    _Init_thread_header
 * 000000018004B12A: cmp     cs:dword_18026A330, r14d
 * 000000018004B131: jnz     loc_18004B202
 * 000000018004B137: lea     rax, unk_1801915B0
 * 000000018004B13E: mov     qword ptr [rbp+9E20h+var_9910], rax
 * 000000018004B145: lea     rax, unk_18019806C
 * 000000018004B14C: mov     qword ptr [rbp+9E20h+var_9910+8], rax
 * 000000018004B153: movups  xmm0, [rbp+9E20h+var_9910]
 * 000000018004B15A: movups  [rbp+9E20h+var_7E98], xmm0
 * 000000018004B161: mov     dword ptr [rbp+9E20h+var_7E88], r13d
 * 000000018004B168: mov     dword ptr [rbp+9E20h+var_7E88+4], esi
 * 000000018004B16E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B173: movups  xmm0, [rbp+9E20h+var_7E88]
 * 000000018004B17A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B17F: call    sub_1800456E0
 * 000000018004B184: mov     r8, rax
 * 000000018004B187: mov     r9d, r12d
 * 000000018004B18A: mov     edx, 138h
 * 000000018004B18F: lea     rcx, [rbp+9E20h+var_4DE8]; Src
 * 000000018004B196: call    sub_1800D45C8
 * 000000018004B19B: nop
 * 000000018004B19C: mov     r8, rax
 * 000000018004B19F: lea     rdx, aStandardshader_92; "StandardShader/ShaderModel40/"
 * 000000018004B1A6: lea     rcx, [rbp+9E20h+var_4E08]
 * 000000018004B1AD: call    sub_1800454BC
 * 000000018004B1B2: nop
 * 000000018004B1B3: lea     r8, aPixel_90; "/Pixel"
 * 000000018004B1BA: mov     rdx, rax
 * 000000018004B1BD: lea     rcx, [rbp+9E20h+var_4E28]
 * 000000018004B1C4: call    sub_18002C088
 * 000000018004B1C9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B1CE: mov     rcx, rax
 * 000000018004B1D1: call    sub_1800D46B4
 * 000000018004B1D6: mov     cs:byte_18026A32C, al
 * 000000018004B1DC: lea     rcx, [rbp+9E20h+var_4E08]; void *
 * 000000018004B1E3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B1E8: nop
 * 000000018004B1E9: lea     rcx, [rbp+9E20h+var_4DE8]; void *
 * 000000018004B1F0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B1F5: nop
 * 000000018004B1F6: lea     rcx, dword_18026A330
 * 000000018004B1FD: call    _Init_thread_footer
 * 000000018004B202: mov     rax, [rdi+rbx*8]
 * 000000018004B206: mov     eax, [r15+rax]
 * 000000018004B20A: cmp     cs:dword_18026A338, eax
 * 000000018004B210: jle     loc_18004B2FA
 * 000000018004B216: lea     rcx, dword_18026A338
 * 000000018004B21D: call    _Init_thread_header
 * 000000018004B222: cmp     cs:dword_18026A338, r14d
 * 000000018004B229: jnz     loc_18004B2FA
 * 000000018004B22F: lea     rax, unk_1801915B0
 * 000000018004B236: mov     qword ptr [rbp+9E20h+var_9900], rax
 * 000000018004B23D: lea     rax, unk_18019806C
 * 000000018004B244: mov     qword ptr [rbp+9E20h+var_9900+8], rax
 * 000000018004B24B: movups  xmm0, [rbp+9E20h+var_9900]
 * 000000018004B252: movups  [rbp+9E20h+var_7E78], xmm0
 * 000000018004B259: mov     dword ptr [rbp+9E20h+var_7E68], r13d
 * 000000018004B260: mov     dword ptr [rbp+9E20h+var_7E68+4], esi
 * 000000018004B266: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B26B: movups  xmm0, [rbp+9E20h+var_7E68]
 * 000000018004B272: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B277: call    sub_1800456E0
 * 000000018004B27C: mov     r8, rax
 * 000000018004B27F: mov     r9d, r12d
 * 000000018004B282: mov     edx, 13Ah
 * 000000018004B287: lea     rcx, [rbp+9E20h+var_4D88]; Src
 * 000000018004B28E: call    sub_1800D45C8
 * 000000018004B293: nop
 * 000000018004B294: mov     r8, rax
 * 000000018004B297: lea     rdx, aStandardshader_93; "StandardShader/ShaderModel40/"
 * 000000018004B29E: lea     rcx, [rbp+9E20h+var_4DA8]
 * 000000018004B2A5: call    sub_1800454BC
 * 000000018004B2AA: nop
 * 000000018004B2AB: lea     r8, aPixel_91; "/Pixel"
 * 000000018004B2B2: mov     rdx, rax
 * 000000018004B2B5: lea     rcx, [rbp+9E20h+var_4DC8]
 * 000000018004B2BC: call    sub_18002C088
 * 000000018004B2C1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B2C6: mov     rcx, rax
 * 000000018004B2C9: call    sub_1800D46B4
 * 000000018004B2CE: mov     cs:byte_18026A334, al
 * 000000018004B2D4: lea     rcx, [rbp+9E20h+var_4DA8]; void *
 * 000000018004B2DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B2E0: nop
 * 000000018004B2E1: lea     rcx, [rbp+9E20h+var_4D88]; void *
 * 000000018004B2E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B2ED: nop
 * 000000018004B2EE: lea     rcx, dword_18026A338
 * 000000018004B2F5: call    _Init_thread_footer
 * 000000018004B2FA: mov     rax, [rdi+rbx*8]
 * 000000018004B2FE: mov     eax, [r15+rax]
 * 000000018004B302: cmp     cs:dword_18026A340, eax
 * 000000018004B308: jle     loc_18004B3F2
 * 000000018004B30E: lea     rcx, dword_18026A340
 * 000000018004B315: call    _Init_thread_header
 * 000000018004B31A: cmp     cs:dword_18026A340, r14d
 * 000000018004B321: jnz     loc_18004B3F2
 * 000000018004B327: lea     rax, unk_1801771B0
 * 000000018004B32E: mov     qword ptr [rbp+9E20h+var_98F0], rax
 * 000000018004B335: lea     rax, unk_18017D8DC
 * 000000018004B33C: mov     qword ptr [rbp+9E20h+var_98F0+8], rax
 * 000000018004B343: movups  xmm0, [rbp+9E20h+var_98F0]
 * 000000018004B34A: movups  [rbp+9E20h+var_7E58], xmm0
 * 000000018004B351: mov     dword ptr [rbp+9E20h+var_7E48], r13d
 * 000000018004B358: mov     dword ptr [rbp+9E20h+var_7E48+4], esi
 * 000000018004B35E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B363: movups  xmm0, [rbp+9E20h+var_7E48]
 * 000000018004B36A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B36F: call    sub_1800456E0
 * 000000018004B374: mov     r8, rax
 * 000000018004B377: mov     r9d, r12d
 * 000000018004B37A: mov     edx, 140h
 * 000000018004B37F: lea     rcx, [rbp+9E20h+var_4D28]; Src
 * 000000018004B386: call    sub_1800D45C8
 * 000000018004B38B: nop
 * 000000018004B38C: mov     r8, rax
 * 000000018004B38F: lea     rdx, aStandardshader_94; "StandardShader/ShaderModel40/"
 * 000000018004B396: lea     rcx, [rbp+9E20h+var_4D48]
 * 000000018004B39D: call    sub_1800454BC
 * 000000018004B3A2: nop
 * 000000018004B3A3: lea     r8, aPixel_92; "/Pixel"
 * 000000018004B3AA: mov     rdx, rax
 * 000000018004B3AD: lea     rcx, [rbp+9E20h+var_4D68]
 * 000000018004B3B4: call    sub_18002C088
 * 000000018004B3B9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B3BE: mov     rcx, rax
 * 000000018004B3C1: call    sub_1800D46B4
 * 000000018004B3C6: mov     cs:byte_18026A33C, al
 * 000000018004B3CC: lea     rcx, [rbp+9E20h+var_4D48]; void *
 * 000000018004B3D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B3D8: nop
 * 000000018004B3D9: lea     rcx, [rbp+9E20h+var_4D28]; void *
 * 000000018004B3E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B3E5: nop
 * 000000018004B3E6: lea     rcx, dword_18026A340
 * 000000018004B3ED: call    _Init_thread_footer
 * 000000018004B3F2: mov     rax, [rdi+rbx*8]
 * 000000018004B3F6: mov     eax, [r15+rax]
 * 000000018004B3FA: cmp     cs:dword_18026A348, eax
 * 000000018004B400: jle     loc_18004B4EA
 * 000000018004B406: lea     rcx, dword_18026A348
 * 000000018004B40D: call    _Init_thread_header
 * 000000018004B412: cmp     cs:dword_18026A348, r14d
 * 000000018004B419: jnz     loc_18004B4EA
 * 000000018004B41F: lea     rax, unk_1801771B0
 * 000000018004B426: mov     qword ptr [rbp+9E20h+var_98E0], rax
 * 000000018004B42D: lea     rax, unk_18017D8DC
 * 000000018004B434: mov     qword ptr [rbp+9E20h+var_98E0+8], rax
 * 000000018004B43B: movups  xmm0, [rbp+9E20h+var_98E0]
 * 000000018004B442: movups  [rbp+9E20h+var_7E38], xmm0
 * 000000018004B449: mov     dword ptr [rbp+9E20h+var_7E28], r13d
 * 000000018004B450: mov     dword ptr [rbp+9E20h+var_7E28+4], esi
 * 000000018004B456: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B45B: movups  xmm0, [rbp+9E20h+var_7E28]
 * 000000018004B462: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B467: call    sub_1800456E0
 * 000000018004B46C: mov     r8, rax
 * 000000018004B46F: mov     r9d, r12d
 * 000000018004B472: mov     edx, 142h
 * 000000018004B477: lea     rcx, [rbp+9E20h+var_4CC8]; Src
 * 000000018004B47E: call    sub_1800D45C8
 * 000000018004B483: nop
 * 000000018004B484: mov     r8, rax
 * 000000018004B487: lea     rdx, aStandardshader_95; "StandardShader/ShaderModel40/"
 * 000000018004B48E: lea     rcx, [rbp+9E20h+var_4CE8]
 * 000000018004B495: call    sub_1800454BC
 * 000000018004B49A: nop
 * 000000018004B49B: lea     r8, aPixel_93; "/Pixel"
 * 000000018004B4A2: mov     rdx, rax
 * 000000018004B4A5: lea     rcx, [rbp+9E20h+var_4D08]
 * 000000018004B4AC: call    sub_18002C088
 * 000000018004B4B1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B4B6: mov     rcx, rax
 * 000000018004B4B9: call    sub_1800D46B4
 * 000000018004B4BE: mov     cs:byte_18026A344, al
 * 000000018004B4C4: lea     rcx, [rbp+9E20h+var_4CE8]; void *
 * 000000018004B4CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B4D0: nop
 * 000000018004B4D1: lea     rcx, [rbp+9E20h+var_4CC8]; void *
 * 000000018004B4D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B4DD: nop
 * 000000018004B4DE: lea     rcx, dword_18026A348
 * 000000018004B4E5: call    _Init_thread_footer
 * 000000018004B4EA: mov     rax, [rdi+rbx*8]
 * 000000018004B4EE: mov     eax, [r15+rax]
 * 000000018004B4F2: cmp     cs:dword_18026A350, eax
 * 000000018004B4F8: jle     loc_18004B5E2
 * 000000018004B4FE: lea     rcx, dword_18026A350
 * 000000018004B505: call    _Init_thread_header
 * 000000018004B50A: cmp     cs:dword_18026A350, r14d
 * 000000018004B511: jnz     loc_18004B5E2
 * 000000018004B517: lea     rax, unk_180180DC0
 * 000000018004B51E: mov     qword ptr [rbp+9E20h+var_98D0], rax
 * 000000018004B525: lea     rax, unk_18018767C
 * 000000018004B52C: mov     qword ptr [rbp+9E20h+var_98D0+8], rax
 * 000000018004B533: movups  xmm0, [rbp+9E20h+var_98D0]
 * 000000018004B53A: movups  [rbp+9E20h+var_7E18], xmm0
 * 000000018004B541: mov     dword ptr [rbp+9E20h+var_7E08], r13d
 * 000000018004B548: mov     dword ptr [rbp+9E20h+var_7E08+4], esi
 * 000000018004B54E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B553: movups  xmm0, [rbp+9E20h+var_7E08]
 * 000000018004B55A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B55F: call    sub_1800456E0
 * 000000018004B564: mov     r8, rax
 * 000000018004B567: mov     r9d, r12d
 * 000000018004B56A: mov     edx, 148h
 * 000000018004B56F: lea     rcx, [rbp+9E20h+var_4C68]; Src
 * 000000018004B576: call    sub_1800D45C8
 * 000000018004B57B: nop
 * 000000018004B57C: mov     r8, rax
 * 000000018004B57F: lea     rdx, aStandardshader_96; "StandardShader/ShaderModel40/"
 * 000000018004B586: lea     rcx, [rbp+9E20h+var_4C88]
 * 000000018004B58D: call    sub_1800454BC
 * 000000018004B592: nop
 * 000000018004B593: lea     r8, aPixel_94; "/Pixel"
 * 000000018004B59A: mov     rdx, rax
 * 000000018004B59D: lea     rcx, [rbp+9E20h+var_4CA8]
 * 000000018004B5A4: call    sub_18002C088
 * 000000018004B5A9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B5AE: mov     rcx, rax
 * 000000018004B5B1: call    sub_1800D46B4
 * 000000018004B5B6: mov     cs:byte_18026A34C, al
 * 000000018004B5BC: lea     rcx, [rbp+9E20h+var_4C88]; void *
 * 000000018004B5C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B5C8: nop
 * 000000018004B5C9: lea     rcx, [rbp+9E20h+var_4C68]; void *
 * 000000018004B5D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B5D5: nop
 * 000000018004B5D6: lea     rcx, dword_18026A350
 * 000000018004B5DD: call    _Init_thread_footer
 * 000000018004B5E2: mov     rax, [rdi+rbx*8]
 * 000000018004B5E6: mov     eax, [r15+rax]
 * 000000018004B5EA: cmp     cs:dword_18026A358, eax
 * 000000018004B5F0: jle     loc_18004B6DA
 * 000000018004B5F6: lea     rcx, dword_18026A358
 * 000000018004B5FD: call    _Init_thread_header
 * 000000018004B602: cmp     cs:dword_18026A358, r14d
 * 000000018004B609: jnz     loc_18004B6DA
 * 000000018004B60F: lea     rax, unk_180180DC0
 * 000000018004B616: mov     qword ptr [rbp+9E20h+var_98C0], rax
 * 000000018004B61D: lea     rax, unk_18018767C
 * 000000018004B624: mov     qword ptr [rbp+9E20h+var_98C0+8], rax
 * 000000018004B62B: movups  xmm0, [rbp+9E20h+var_98C0]
 * 000000018004B632: movups  [rbp+9E20h+var_7DF8], xmm0
 * 000000018004B639: mov     dword ptr [rbp+9E20h+var_7DE8], r13d
 * 000000018004B640: mov     dword ptr [rbp+9E20h+var_7DE8+4], esi
 * 000000018004B646: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B64B: movups  xmm0, [rbp+9E20h+var_7DE8]
 * 000000018004B652: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B657: call    sub_1800456E0
 * 000000018004B65C: mov     r8, rax
 * 000000018004B65F: mov     r9d, r12d
 * 000000018004B662: mov     edx, 14Ah
 * 000000018004B667: lea     rcx, [rbp+9E20h+var_4C08]; Src
 * 000000018004B66E: call    sub_1800D45C8
 * 000000018004B673: nop
 * 000000018004B674: mov     r8, rax
 * 000000018004B677: lea     rdx, aStandardshader_97; "StandardShader/ShaderModel40/"
 * 000000018004B67E: lea     rcx, [rbp+9E20h+var_4C28]
 * 000000018004B685: call    sub_1800454BC
 * 000000018004B68A: nop
 * 000000018004B68B: lea     r8, aPixel_95; "/Pixel"
 * 000000018004B692: mov     rdx, rax
 * 000000018004B695: lea     rcx, [rbp+9E20h+var_4C48]
 * 000000018004B69C: call    sub_18002C088
 * 000000018004B6A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B6A6: mov     rcx, rax
 * 000000018004B6A9: call    sub_1800D46B4
 * 000000018004B6AE: mov     cs:byte_18026A354, al
 * 000000018004B6B4: lea     rcx, [rbp+9E20h+var_4C28]; void *
 * 000000018004B6BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B6C0: nop
 * 000000018004B6C1: lea     rcx, [rbp+9E20h+var_4C08]; void *
 * 000000018004B6C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B6CD: nop
 * 000000018004B6CE: lea     rcx, dword_18026A358
 * 000000018004B6D5: call    _Init_thread_footer
 * 000000018004B6DA: mov     rax, [rdi+rbx*8]
 * 000000018004B6DE: mov     eax, [r15+rax]
 * 000000018004B6E2: cmp     cs:dword_18026A360, eax
 * 000000018004B6E8: jle     loc_18004B7D2
 * 000000018004B6EE: lea     rcx, dword_18026A360
 * 000000018004B6F5: call    _Init_thread_header
 * 000000018004B6FA: cmp     cs:dword_18026A360, r14d
 * 000000018004B701: jnz     loc_18004B7D2
 * 000000018004B707: lea     rax, unk_180187680
 * 000000018004B70E: mov     qword ptr [rbp+9E20h+var_98B0], rax
 * 000000018004B715: lea     rax, unk_18018DF88
 * 000000018004B71C: mov     qword ptr [rbp+9E20h+var_98B0+8], rax
 * 000000018004B723: movups  xmm0, [rbp+9E20h+var_98B0]
 * 000000018004B72A: movups  [rbp+9E20h+var_7DD8], xmm0
 * 000000018004B731: mov     dword ptr [rbp+9E20h+var_7DC8], r13d
 * 000000018004B738: mov     dword ptr [rbp+9E20h+var_7DC8+4], esi
 * 000000018004B73E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B743: movups  xmm0, [rbp+9E20h+var_7DC8]
 * 000000018004B74A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B74F: call    sub_1800456E0
 * 000000018004B754: mov     r8, rax
 * 000000018004B757: mov     r9d, r12d
 * 000000018004B75A: mov     edx, 150h
 * 000000018004B75F: lea     rcx, [rbp+9E20h+var_4BA8]; Src
 * 000000018004B766: call    sub_1800D45C8
 * 000000018004B76B: nop
 * 000000018004B76C: mov     r8, rax
 * 000000018004B76F: lea     rdx, aStandardshader_98; "StandardShader/ShaderModel40/"
 * 000000018004B776: lea     rcx, [rbp+9E20h+var_4BC8]
 * 000000018004B77D: call    sub_1800454BC
 * 000000018004B782: nop
 * 000000018004B783: lea     r8, aPixel_96; "/Pixel"
 * 000000018004B78A: mov     rdx, rax
 * 000000018004B78D: lea     rcx, [rbp+9E20h+var_4BE8]
 * 000000018004B794: call    sub_18002C088
 * 000000018004B799: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B79E: mov     rcx, rax
 * 000000018004B7A1: call    sub_1800D46B4
 * 000000018004B7A6: mov     cs:byte_18026A35C, al
 * 000000018004B7AC: lea     rcx, [rbp+9E20h+var_4BC8]; void *
 * 000000018004B7B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B7B8: nop
 * 000000018004B7B9: lea     rcx, [rbp+9E20h+var_4BA8]; void *
 * 000000018004B7C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B7C5: nop
 * 000000018004B7C6: lea     rcx, dword_18026A360
 * 000000018004B7CD: call    _Init_thread_footer
 * 000000018004B7D2: mov     rax, [rdi+rbx*8]
 * 000000018004B7D6: mov     eax, [r15+rax]
 * 000000018004B7DA: cmp     cs:dword_18026A368, eax
 * 000000018004B7E0: jle     loc_18004B8CA
 * 000000018004B7E6: lea     rcx, dword_18026A368
 * 000000018004B7ED: call    _Init_thread_header
 * 000000018004B7F2: cmp     cs:dword_18026A368, r14d
 * 000000018004B7F9: jnz     loc_18004B8CA
 * 000000018004B7FF: lea     rax, unk_180187680
 * 000000018004B806: mov     qword ptr [rbp+9E20h+var_98A0], rax
 * 000000018004B80D: lea     rax, unk_18018DF88
 * 000000018004B814: mov     qword ptr [rbp+9E20h+var_98A0+8], rax
 * 000000018004B81B: movups  xmm0, [rbp+9E20h+var_98A0]
 * 000000018004B822: movups  [rbp+9E20h+var_7DB8], xmm0
 * 000000018004B829: mov     dword ptr [rbp+9E20h+var_7DA8], r13d
 * 000000018004B830: mov     dword ptr [rbp+9E20h+var_7DA8+4], esi
 * 000000018004B836: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B83B: movups  xmm0, [rbp+9E20h+var_7DA8]
 * 000000018004B842: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B847: call    sub_1800456E0
 * 000000018004B84C: mov     r8, rax
 * 000000018004B84F: mov     r9d, r12d
 * 000000018004B852: mov     edx, 152h
 * 000000018004B857: lea     rcx, [rbp+9E20h+var_4B48]; Src
 * 000000018004B85E: call    sub_1800D45C8
 * 000000018004B863: nop
 * 000000018004B864: mov     r8, rax
 * 000000018004B867: lea     rdx, aStandardshader_99; "StandardShader/ShaderModel40/"
 * 000000018004B86E: lea     rcx, [rbp+9E20h+var_4B68]
 * 000000018004B875: call    sub_1800454BC
 * 000000018004B87A: nop
 * 000000018004B87B: lea     r8, aPixel_97; "/Pixel"
 * 000000018004B882: mov     rdx, rax
 * 000000018004B885: lea     rcx, [rbp+9E20h+var_4B88]
 * 000000018004B88C: call    sub_18002C088
 * 000000018004B891: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B896: mov     rcx, rax
 * 000000018004B899: call    sub_1800D46B4
 * 000000018004B89E: mov     cs:byte_18026A364, al
 * 000000018004B8A4: lea     rcx, [rbp+9E20h+var_4B68]; void *
 * 000000018004B8AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B8B0: nop
 * 000000018004B8B1: lea     rcx, [rbp+9E20h+var_4B48]; void *
 * 000000018004B8B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B8BD: nop
 * 000000018004B8BE: lea     rcx, dword_18026A368
 * 000000018004B8C5: call    _Init_thread_footer
 * 000000018004B8CA: mov     rax, [rdi+rbx*8]
 * 000000018004B8CE: mov     eax, [r15+rax]
 * 000000018004B8D2: cmp     cs:dword_18026A370, eax
 * 000000018004B8D8: jle     loc_18004B9C2
 * 000000018004B8DE: lea     rcx, dword_18026A370
 * 000000018004B8E5: call    _Init_thread_header
 * 000000018004B8EA: cmp     cs:dword_18026A370, r14d
 * 000000018004B8F1: jnz     loc_18004B9C2
 * 000000018004B8F7: lea     rax, unk_1801915B0
 * 000000018004B8FE: mov     qword ptr [rbp+9E20h+var_9890], rax
 * 000000018004B905: lea     rax, unk_18019806C
 * 000000018004B90C: mov     qword ptr [rbp+9E20h+var_9890+8], rax
 * 000000018004B913: movups  xmm0, [rbp+9E20h+var_9890]
 * 000000018004B91A: movups  [rbp+9E20h+var_7D98], xmm0
 * 000000018004B921: mov     dword ptr [rbp+9E20h+var_7D88], r13d
 * 000000018004B928: mov     dword ptr [rbp+9E20h+var_7D88+4], esi
 * 000000018004B92E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004B933: movups  xmm0, [rbp+9E20h+var_7D88]
 * 000000018004B93A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004B93F: call    sub_1800456E0
 * 000000018004B944: mov     r8, rax
 * 000000018004B947: mov     r9d, r12d
 * 000000018004B94A: mov     edx, 158h
 * 000000018004B94F: lea     rcx, [rbp+9E20h+var_4AE8]; Src
 * 000000018004B956: call    sub_1800D45C8
 * 000000018004B95B: nop
 * 000000018004B95C: mov     r8, rax
 * 000000018004B95F: lea     rdx, aStandardshader_100; "StandardShader/ShaderModel40/"
 * 000000018004B966: lea     rcx, [rbp+9E20h+var_4B08]
 * 000000018004B96D: call    sub_1800454BC
 * 000000018004B972: nop
 * 000000018004B973: lea     r8, aPixel_98; "/Pixel"
 * 000000018004B97A: mov     rdx, rax
 * 000000018004B97D: lea     rcx, [rbp+9E20h+var_4B28]
 * 000000018004B984: call    sub_18002C088
 * 000000018004B989: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004B98E: mov     rcx, rax
 * 000000018004B991: call    sub_1800D46B4
 * 000000018004B996: mov     cs:byte_18026A36C, al
 * 000000018004B99C: lea     rcx, [rbp+9E20h+var_4B08]; void *
 * 000000018004B9A3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B9A8: nop
 * 000000018004B9A9: lea     rcx, [rbp+9E20h+var_4AE8]; void *
 * 000000018004B9B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B9B5: nop
 * 000000018004B9B6: lea     rcx, dword_18026A370
 * 000000018004B9BD: call    _Init_thread_footer
 * 000000018004B9C2: mov     rax, [rdi+rbx*8]
 * 000000018004B9C6: mov     eax, [r15+rax]
 * 000000018004B9CA: cmp     cs:dword_18026A378, eax
 * 000000018004B9D0: jle     loc_18004BABA
 * 000000018004B9D6: lea     rcx, dword_18026A378
 * 000000018004B9DD: call    _Init_thread_header
 * 000000018004B9E2: cmp     cs:dword_18026A378, r14d
 * 000000018004B9E9: jnz     loc_18004BABA
 * 000000018004B9EF: lea     rax, unk_1801915B0
 * 000000018004B9F6: mov     qword ptr [rbp+9E20h+var_9880], rax
 * 000000018004B9FD: lea     rax, unk_18019806C
 * 000000018004BA04: mov     qword ptr [rbp+9E20h+var_9880+8], rax
 * 000000018004BA0B: movups  xmm0, [rbp+9E20h+var_9880]
 * 000000018004BA12: movups  [rbp+9E20h+var_7D78], xmm0
 * 000000018004BA19: mov     dword ptr [rbp+9E20h+var_7D68], r13d
 * 000000018004BA20: mov     dword ptr [rbp+9E20h+var_7D68+4], esi
 * 000000018004BA26: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BA2B: movups  xmm0, [rbp+9E20h+var_7D68]
 * 000000018004BA32: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BA37: call    sub_1800456E0
 * 000000018004BA3C: mov     r8, rax
 * 000000018004BA3F: mov     r9d, r12d
 * 000000018004BA42: mov     edx, 15Ah
 * 000000018004BA47: lea     rcx, [rbp+9E20h+var_4A88]; Src
 * 000000018004BA4E: call    sub_1800D45C8
 * 000000018004BA53: nop
 * 000000018004BA54: mov     r8, rax
 * 000000018004BA57: lea     rdx, aStandardshader_101; "StandardShader/ShaderModel40/"
 * 000000018004BA5E: lea     rcx, [rbp+9E20h+var_4AA8]
 * 000000018004BA65: call    sub_1800454BC
 * 000000018004BA6A: nop
 * 000000018004BA6B: lea     r8, aPixel_99; "/Pixel"
 * 000000018004BA72: mov     rdx, rax
 * 000000018004BA75: lea     rcx, [rbp+9E20h+var_4AC8]
 * 000000018004BA7C: call    sub_18002C088
 * 000000018004BA81: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BA86: mov     rcx, rax
 * 000000018004BA89: call    sub_1800D46B4
 * 000000018004BA8E: mov     cs:byte_18026A374, al
 * 000000018004BA94: lea     rcx, [rbp+9E20h+var_4AA8]; void *
 * 000000018004BA9B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BAA0: nop
 * 000000018004BAA1: lea     rcx, [rbp+9E20h+var_4A88]; void *
 * 000000018004BAA8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BAAD: nop
 * 000000018004BAAE: lea     rcx, dword_18026A378
 * 000000018004BAB5: call    _Init_thread_footer
 * 000000018004BABA: mov     rax, [rdi+rbx*8]
 * 000000018004BABE: mov     eax, [r15+rax]
 * 000000018004BAC2: cmp     cs:dword_18026A380, eax
 * 000000018004BAC8: jle     loc_18004BBB2
 * 000000018004BACE: lea     rcx, dword_18026A380
 * 000000018004BAD5: call    _Init_thread_header
 * 000000018004BADA: cmp     cs:dword_18026A380, r14d
 * 000000018004BAE1: jnz     loc_18004BBB2
 * 000000018004BAE7: lea     rax, unk_1801771B0
 * 000000018004BAEE: mov     qword ptr [rbp+9E20h+var_9870], rax
 * 000000018004BAF5: lea     rax, unk_18017D8DC
 * 000000018004BAFC: mov     qword ptr [rbp+9E20h+var_9870+8], rax
 * 000000018004BB03: movups  xmm0, [rbp+9E20h+var_9870]
 * 000000018004BB0A: movups  [rbp+9E20h+var_7D58], xmm0
 * 000000018004BB11: mov     dword ptr [rbp+9E20h+var_7D48], r13d
 * 000000018004BB18: mov     dword ptr [rbp+9E20h+var_7D48+4], esi
 * 000000018004BB1E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BB23: movups  xmm0, [rbp+9E20h+var_7D48]
 * 000000018004BB2A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BB2F: call    sub_1800456E0
 * 000000018004BB34: mov     r8, rax
 * 000000018004BB37: mov     r9d, r12d
 * 000000018004BB3A: mov     edx, 160h
 * 000000018004BB3F: lea     rcx, [rbp+9E20h+var_4A28]; Src
 * 000000018004BB46: call    sub_1800D45C8
 * 000000018004BB4B: nop
 * 000000018004BB4C: mov     r8, rax
 * 000000018004BB4F: lea     rdx, aStandardshader_102; "StandardShader/ShaderModel40/"
 * 000000018004BB56: lea     rcx, [rbp+9E20h+var_4A48]
 * 000000018004BB5D: call    sub_1800454BC
 * 000000018004BB62: nop
 * 000000018004BB63: lea     r8, aPixel_100; "/Pixel"
 * 000000018004BB6A: mov     rdx, rax
 * 000000018004BB6D: lea     rcx, [rbp+9E20h+var_4A68]
 * 000000018004BB74: call    sub_18002C088
 * 000000018004BB79: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BB7E: mov     rcx, rax
 * 000000018004BB81: call    sub_1800D46B4
 * 000000018004BB86: mov     cs:byte_18026A37C, al
 * 000000018004BB8C: lea     rcx, [rbp+9E20h+var_4A48]; void *
 * 000000018004BB93: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BB98: nop
 * 000000018004BB99: lea     rcx, [rbp+9E20h+var_4A28]; void *
 * 000000018004BBA0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BBA5: nop
 * 000000018004BBA6: lea     rcx, dword_18026A380
 * 000000018004BBAD: call    _Init_thread_footer
 * 000000018004BBB2: mov     rax, [rdi+rbx*8]
 * 000000018004BBB6: mov     eax, [r15+rax]
 * 000000018004BBBA: cmp     cs:dword_18026A388, eax
 * 000000018004BBC0: jle     loc_18004BCAA
 * 000000018004BBC6: lea     rcx, dword_18026A388
 * 000000018004BBCD: call    _Init_thread_header
 * 000000018004BBD2: cmp     cs:dword_18026A388, r14d
 * 000000018004BBD9: jnz     loc_18004BCAA
 * 000000018004BBDF: lea     rax, unk_1801771B0
 * 000000018004BBE6: mov     qword ptr [rbp+9E20h+var_9860], rax
 * 000000018004BBED: lea     rax, unk_18017D8DC
 * 000000018004BBF4: mov     qword ptr [rbp+9E20h+var_9860+8], rax
 * 000000018004BBFB: movups  xmm0, [rbp+9E20h+var_9860]
 * 000000018004BC02: movups  [rbp+9E20h+var_7D38], xmm0
 * 000000018004BC09: mov     dword ptr [rbp+9E20h+var_7D28], r13d
 * 000000018004BC10: mov     dword ptr [rbp+9E20h+var_7D28+4], esi
 * 000000018004BC16: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BC1B: movups  xmm0, [rbp+9E20h+var_7D28]
 * 000000018004BC22: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BC27: call    sub_1800456E0
 * 000000018004BC2C: mov     r8, rax
 * 000000018004BC2F: mov     r9d, r12d
 * 000000018004BC32: mov     edx, 162h
 * 000000018004BC37: lea     rcx, [rbp+9E20h+var_49C8]; Src
 * 000000018004BC3E: call    sub_1800D45C8
 * 000000018004BC43: nop
 * 000000018004BC44: mov     r8, rax
 * 000000018004BC47: lea     rdx, aStandardshader_103; "StandardShader/ShaderModel40/"
 * 000000018004BC4E: lea     rcx, [rbp+9E20h+var_49E8]
 * 000000018004BC55: call    sub_1800454BC
 * 000000018004BC5A: nop
 * 000000018004BC5B: lea     r8, aPixel_101; "/Pixel"
 * 000000018004BC62: mov     rdx, rax
 * 000000018004BC65: lea     rcx, [rbp+9E20h+var_4A08]
 * 000000018004BC6C: call    sub_18002C088
 * 000000018004BC71: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BC76: mov     rcx, rax
 * 000000018004BC79: call    sub_1800D46B4
 * 000000018004BC7E: mov     cs:byte_18026A384, al
 * 000000018004BC84: lea     rcx, [rbp+9E20h+var_49E8]; void *
 * 000000018004BC8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BC90: nop
 * 000000018004BC91: lea     rcx, [rbp+9E20h+var_49C8]; void *
 * 000000018004BC98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BC9D: nop
 * 000000018004BC9E: lea     rcx, dword_18026A388
 * 000000018004BCA5: call    _Init_thread_footer
 * 000000018004BCAA: mov     rax, [rdi+rbx*8]
 * 000000018004BCAE: mov     eax, [r15+rax]
 * 000000018004BCB2: cmp     cs:dword_18026A390, eax
 * 000000018004BCB8: jle     loc_18004BDA2
 * 000000018004BCBE: lea     rcx, dword_18026A390
 * 000000018004BCC5: call    _Init_thread_header
 * 000000018004BCCA: cmp     cs:dword_18026A390, r14d
 * 000000018004BCD1: jnz     loc_18004BDA2
 * 000000018004BCD7: lea     rax, unk_180180DC0
 * 000000018004BCDE: mov     qword ptr [rbp+9E20h+var_9850], rax
 * 000000018004BCE5: lea     rax, unk_18018767C
 * 000000018004BCEC: mov     qword ptr [rbp+9E20h+var_9850+8], rax
 * 000000018004BCF3: movups  xmm0, [rbp+9E20h+var_9850]
 * 000000018004BCFA: movups  [rbp+9E20h+var_7D18], xmm0
 * 000000018004BD01: mov     dword ptr [rbp+9E20h+var_7D08], r13d
 * 000000018004BD08: mov     dword ptr [rbp+9E20h+var_7D08+4], esi
 * 000000018004BD0E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BD13: movups  xmm0, [rbp+9E20h+var_7D08]
 * 000000018004BD1A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BD1F: call    sub_1800456E0
 * 000000018004BD24: mov     r8, rax
 * 000000018004BD27: mov     r9d, r12d
 * 000000018004BD2A: mov     edx, 168h
 * 000000018004BD2F: lea     rcx, [rbp+9E20h+var_4968]; Src
 * 000000018004BD36: call    sub_1800D45C8
 * 000000018004BD3B: nop
 * 000000018004BD3C: mov     r8, rax
 * 000000018004BD3F: lea     rdx, aStandardshader_104; "StandardShader/ShaderModel40/"
 * 000000018004BD46: lea     rcx, [rbp+9E20h+var_4988]
 * 000000018004BD4D: call    sub_1800454BC
 * 000000018004BD52: nop
 * 000000018004BD53: lea     r8, aPixel_102; "/Pixel"
 * 000000018004BD5A: mov     rdx, rax
 * 000000018004BD5D: lea     rcx, [rbp+9E20h+var_49A8]
 * 000000018004BD64: call    sub_18002C088
 * 000000018004BD69: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BD6E: mov     rcx, rax
 * 000000018004BD71: call    sub_1800D46B4
 * 000000018004BD76: mov     cs:byte_18026A38C, al
 * 000000018004BD7C: lea     rcx, [rbp+9E20h+var_4988]; void *
 * 000000018004BD83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BD88: nop
 * 000000018004BD89: lea     rcx, [rbp+9E20h+var_4968]; void *
 * 000000018004BD90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BD95: nop
 * 000000018004BD96: lea     rcx, dword_18026A390
 * 000000018004BD9D: call    _Init_thread_footer
 * 000000018004BDA2: mov     rax, [rdi+rbx*8]
 * 000000018004BDA6: mov     eax, [r15+rax]
 * 000000018004BDAA: cmp     cs:dword_18026A398, eax
 * 000000018004BDB0: jle     loc_18004BE9A
 * 000000018004BDB6: lea     rcx, dword_18026A398
 * 000000018004BDBD: call    _Init_thread_header
 * 000000018004BDC2: cmp     cs:dword_18026A398, r14d
 * 000000018004BDC9: jnz     loc_18004BE9A
 * 000000018004BDCF: lea     rax, unk_180180DC0
 * 000000018004BDD6: mov     qword ptr [rbp+9E20h+var_9840], rax
 * 000000018004BDDD: lea     rax, unk_18018767C
 * 000000018004BDE4: mov     qword ptr [rbp+9E20h+var_9840+8], rax
 * 000000018004BDEB: movups  xmm0, [rbp+9E20h+var_9840]
 * 000000018004BDF2: movups  [rbp+9E20h+var_7CF8], xmm0
 * 000000018004BDF9: mov     dword ptr [rbp+9E20h+var_7CE8], r13d
 * 000000018004BE00: mov     dword ptr [rbp+9E20h+var_7CE8+4], esi
 * 000000018004BE06: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BE0B: movups  xmm0, [rbp+9E20h+var_7CE8]
 * 000000018004BE12: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BE17: call    sub_1800456E0
 * 000000018004BE1C: mov     r8, rax
 * 000000018004BE1F: mov     r9d, r12d
 * 000000018004BE22: mov     edx, 16Ah
 * 000000018004BE27: lea     rcx, [rbp+9E20h+var_4908]; Src
 * 000000018004BE2E: call    sub_1800D45C8
 * 000000018004BE33: nop
 * 000000018004BE34: mov     r8, rax
 * 000000018004BE37: lea     rdx, aStandardshader_105; "StandardShader/ShaderModel40/"
 * 000000018004BE3E: lea     rcx, [rbp+9E20h+var_4928]
 * 000000018004BE45: call    sub_1800454BC
 * 000000018004BE4A: nop
 * 000000018004BE4B: lea     r8, aPixel_103; "/Pixel"
 * 000000018004BE52: mov     rdx, rax
 * 000000018004BE55: lea     rcx, [rbp+9E20h+var_4948]
 * 000000018004BE5C: call    sub_18002C088
 * 000000018004BE61: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BE66: mov     rcx, rax
 * 000000018004BE69: call    sub_1800D46B4
 * 000000018004BE6E: mov     cs:byte_18026A394, al
 * 000000018004BE74: lea     rcx, [rbp+9E20h+var_4928]; void *
 * 000000018004BE7B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BE80: nop
 * 000000018004BE81: lea     rcx, [rbp+9E20h+var_4908]; void *
 * 000000018004BE88: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BE8D: nop
 * 000000018004BE8E: lea     rcx, dword_18026A398
 * 000000018004BE95: call    _Init_thread_footer
 * 000000018004BE9A: mov     rax, [rdi+rbx*8]
 * 000000018004BE9E: mov     eax, [r15+rax]
 * 000000018004BEA2: cmp     cs:dword_18026A3A0, eax
 * 000000018004BEA8: jle     loc_18004BF92
 * 000000018004BEAE: lea     rcx, dword_18026A3A0
 * 000000018004BEB5: call    _Init_thread_header
 * 000000018004BEBA: cmp     cs:dword_18026A3A0, r14d
 * 000000018004BEC1: jnz     loc_18004BF92
 * 000000018004BEC7: lea     rax, unk_180187680
 * 000000018004BECE: mov     qword ptr [rbp+9E20h+var_9830], rax
 * 000000018004BED5: lea     rax, unk_18018DF88
 * 000000018004BEDC: mov     qword ptr [rbp+9E20h+var_9830+8], rax
 * 000000018004BEE3: movups  xmm0, [rbp+9E20h+var_9830]
 * 000000018004BEEA: movups  [rbp+9E20h+var_7CD8], xmm0
 * 000000018004BEF1: mov     dword ptr [rbp+9E20h+var_7CC8], r13d
 * 000000018004BEF8: mov     dword ptr [rbp+9E20h+var_7CC8+4], esi
 * 000000018004BEFE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BF03: movups  xmm0, [rbp+9E20h+var_7CC8]
 * 000000018004BF0A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004BF0F: call    sub_1800456E0
 * 000000018004BF14: mov     r8, rax
 * 000000018004BF17: mov     r9d, r12d
 * 000000018004BF1A: mov     edx, 170h
 * 000000018004BF1F: lea     rcx, [rbp+9E20h+var_48A8]; Src
 * 000000018004BF26: call    sub_1800D45C8
 * 000000018004BF2B: nop
 * 000000018004BF2C: mov     r8, rax
 * 000000018004BF2F: lea     rdx, aStandardshader_106; "StandardShader/ShaderModel40/"
 * 000000018004BF36: lea     rcx, [rbp+9E20h+var_48C8]
 * 000000018004BF3D: call    sub_1800454BC
 * 000000018004BF42: nop
 * 000000018004BF43: lea     r8, aPixel_104; "/Pixel"
 * 000000018004BF4A: mov     rdx, rax
 * 000000018004BF4D: lea     rcx, [rbp+9E20h+var_48E8]
 * 000000018004BF54: call    sub_18002C088
 * 000000018004BF59: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004BF5E: mov     rcx, rax
 * 000000018004BF61: call    sub_1800D46B4
 * 000000018004BF66: mov     cs:byte_18026A39C, al
 * 000000018004BF6C: lea     rcx, [rbp+9E20h+var_48C8]; void *
 * 000000018004BF73: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BF78: nop
 * 000000018004BF79: lea     rcx, [rbp+9E20h+var_48A8]; void *
 * 000000018004BF80: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BF85: nop
 * 000000018004BF86: lea     rcx, dword_18026A3A0
 * 000000018004BF8D: call    _Init_thread_footer
 * 000000018004BF92: mov     rax, [rdi+rbx*8]
 * 000000018004BF96: mov     eax, [r15+rax]
 * 000000018004BF9A: cmp     cs:dword_18026A3A8, eax
 * 000000018004BFA0: jle     loc_18004C08A
 * 000000018004BFA6: lea     rcx, dword_18026A3A8
 * 000000018004BFAD: call    _Init_thread_header
 * 000000018004BFB2: cmp     cs:dword_18026A3A8, r14d
 * 000000018004BFB9: jnz     loc_18004C08A
 * 000000018004BFBF: lea     rax, unk_180187680
 * 000000018004BFC6: mov     qword ptr [rbp+9E20h+var_9820], rax
 * 000000018004BFCD: lea     rax, unk_18018DF88
 * 000000018004BFD4: mov     qword ptr [rbp+9E20h+var_9820+8], rax
 * 000000018004BFDB: movups  xmm0, [rbp+9E20h+var_9820]
 * 000000018004BFE2: movups  [rbp+9E20h+var_7CB8], xmm0
 * 000000018004BFE9: mov     dword ptr [rbp+9E20h+var_7CA8], r13d
 * 000000018004BFF0: mov     dword ptr [rbp+9E20h+var_7CA8+4], esi
 * 000000018004BFF6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004BFFB: movups  xmm0, [rbp+9E20h+var_7CA8]
 * 000000018004C002: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C007: call    sub_1800456E0
 * 000000018004C00C: mov     r8, rax
 * 000000018004C00F: mov     r9d, r12d
 * 000000018004C012: mov     edx, 172h
 * 000000018004C017: lea     rcx, [rbp+9E20h+var_4848]; Src
 * 000000018004C01E: call    sub_1800D45C8
 * 000000018004C023: nop
 * 000000018004C024: mov     r8, rax
 * 000000018004C027: lea     rdx, aStandardshader_107; "StandardShader/ShaderModel40/"
 * 000000018004C02E: lea     rcx, [rbp+9E20h+var_4868]
 * 000000018004C035: call    sub_1800454BC
 * 000000018004C03A: nop
 * 000000018004C03B: lea     r8, aPixel_105; "/Pixel"
 * 000000018004C042: mov     rdx, rax
 * 000000018004C045: lea     rcx, [rbp+9E20h+var_4888]
 * 000000018004C04C: call    sub_18002C088
 * 000000018004C051: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C056: mov     rcx, rax
 * 000000018004C059: call    sub_1800D46B4
 * 000000018004C05E: mov     cs:byte_18026A3A4, al
 * 000000018004C064: lea     rcx, [rbp+9E20h+var_4868]; void *
 * 000000018004C06B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C070: nop
 * 000000018004C071: lea     rcx, [rbp+9E20h+var_4848]; void *
 * 000000018004C078: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C07D: nop
 * 000000018004C07E: lea     rcx, dword_18026A3A8
 * 000000018004C085: call    _Init_thread_footer
 * 000000018004C08A: mov     rax, [rdi+rbx*8]
 * 000000018004C08E: mov     eax, [r15+rax]
 * 000000018004C092: cmp     cs:dword_18026A3B0, eax
 * 000000018004C098: jle     loc_18004C182
 * 000000018004C09E: lea     rcx, dword_18026A3B0
 * 000000018004C0A5: call    _Init_thread_header
 * 000000018004C0AA: cmp     cs:dword_18026A3B0, r14d
 * 000000018004C0B1: jnz     loc_18004C182
 * 000000018004C0B7: lea     rax, unk_1801915B0
 * 000000018004C0BE: mov     qword ptr [rbp+9E20h+var_9810], rax
 * 000000018004C0C5: lea     rax, unk_18019806C
 * 000000018004C0CC: mov     qword ptr [rbp+9E20h+var_9810+8], rax
 * 000000018004C0D3: movups  xmm0, [rbp+9E20h+var_9810]
 * 000000018004C0DA: movups  [rbp+9E20h+var_7C98], xmm0
 * 000000018004C0E1: mov     dword ptr [rbp+9E20h+var_7C88], r13d
 * 000000018004C0E8: mov     dword ptr [rbp+9E20h+var_7C88+4], esi
 * 000000018004C0EE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C0F3: movups  xmm0, [rbp+9E20h+var_7C88]
 * 000000018004C0FA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C0FF: call    sub_1800456E0
 * 000000018004C104: mov     r8, rax
 * 000000018004C107: mov     r9d, r12d
 * 000000018004C10A: mov     edx, 178h
 * 000000018004C10F: lea     rcx, [rbp+9E20h+var_47E8]; Src
 * 000000018004C116: call    sub_1800D45C8
 * 000000018004C11B: nop
 * 000000018004C11C: mov     r8, rax
 * 000000018004C11F: lea     rdx, aStandardshader_108; "StandardShader/ShaderModel40/"
 * 000000018004C126: lea     rcx, [rbp+9E20h+var_4808]
 * 000000018004C12D: call    sub_1800454BC
 * 000000018004C132: nop
 * 000000018004C133: lea     r8, aPixel_106; "/Pixel"
 * 000000018004C13A: mov     rdx, rax
 * 000000018004C13D: lea     rcx, [rbp+9E20h+var_4828]
 * 000000018004C144: call    sub_18002C088
 * 000000018004C149: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C14E: mov     rcx, rax
 * 000000018004C151: call    sub_1800D46B4
 * 000000018004C156: mov     cs:byte_18026A3AC, al
 * 000000018004C15C: lea     rcx, [rbp+9E20h+var_4808]; void *
 * 000000018004C163: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C168: nop
 * 000000018004C169: lea     rcx, [rbp+9E20h+var_47E8]; void *
 * 000000018004C170: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C175: nop
 * 000000018004C176: lea     rcx, dword_18026A3B0
 * 000000018004C17D: call    _Init_thread_footer
 * 000000018004C182: mov     rax, [rdi+rbx*8]
 * 000000018004C186: mov     eax, [r15+rax]
 * 000000018004C18A: cmp     cs:dword_18026A3B8, eax
 * 000000018004C190: jle     loc_18004C27A
 * 000000018004C196: lea     rcx, dword_18026A3B8
 * 000000018004C19D: call    _Init_thread_header
 * 000000018004C1A2: cmp     cs:dword_18026A3B8, r14d
 * 000000018004C1A9: jnz     loc_18004C27A
 * 000000018004C1AF: lea     rax, unk_1801915B0
 * 000000018004C1B6: mov     qword ptr [rbp+9E20h+var_9800], rax
 * 000000018004C1BD: lea     rax, unk_18019806C
 * 000000018004C1C4: mov     qword ptr [rbp+9E20h+var_9800+8], rax
 * 000000018004C1CB: movups  xmm0, [rbp+9E20h+var_9800]
 * 000000018004C1D2: movups  [rbp+9E20h+var_7C78], xmm0
 * 000000018004C1D9: mov     dword ptr [rbp+9E20h+var_7C68], r13d
 * 000000018004C1E0: mov     dword ptr [rbp+9E20h+var_7C68+4], esi
 * 000000018004C1E6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C1EB: movups  xmm0, [rbp+9E20h+var_7C68]
 * 000000018004C1F2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C1F7: call    sub_1800456E0
 * 000000018004C1FC: mov     r8, rax
 * 000000018004C1FF: mov     r9d, r12d
 * 000000018004C202: mov     edx, 17Ah
 * 000000018004C207: lea     rcx, [rbp+9E20h+var_4788]; Src
 * 000000018004C20E: call    sub_1800D45C8
 * 000000018004C213: nop
 * 000000018004C214: mov     r8, rax
 * 000000018004C217: lea     rdx, aStandardshader_109; "StandardShader/ShaderModel40/"
 * 000000018004C21E: lea     rcx, [rbp+9E20h+var_47A8]
 * 000000018004C225: call    sub_1800454BC
 * 000000018004C22A: nop
 * 000000018004C22B: lea     r8, aPixel_107; "/Pixel"
 * 000000018004C232: mov     rdx, rax
 * 000000018004C235: lea     rcx, [rbp+9E20h+var_47C8]
 * 000000018004C23C: call    sub_18002C088
 * 000000018004C241: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C246: mov     rcx, rax
 * 000000018004C249: call    sub_1800D46B4
 * 000000018004C24E: mov     cs:byte_18026A3B4, al
 * 000000018004C254: lea     rcx, [rbp+9E20h+var_47A8]; void *
 * 000000018004C25B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C260: nop
 * 000000018004C261: lea     rcx, [rbp+9E20h+var_4788]; void *
 * 000000018004C268: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C26D: nop
 * 000000018004C26E: lea     rcx, dword_18026A3B8
 * 000000018004C275: call    _Init_thread_footer
 * 000000018004C27A: mov     rax, [rdi+rbx*8]
 * 000000018004C27E: mov     eax, [r15+rax]
 * 000000018004C282: cmp     cs:dword_18026A3C0, eax
 * 000000018004C288: jle     loc_18004C372
 * 000000018004C28E: lea     rcx, dword_18026A3C0
 * 000000018004C295: call    _Init_thread_header
 * 000000018004C29A: cmp     cs:dword_18026A3C0, r14d
 * 000000018004C2A1: jnz     loc_18004C372
 * 000000018004C2A7: lea     rax, unk_1801771B0
 * 000000018004C2AE: mov     qword ptr [rbp+9E20h+var_97F0], rax
 * 000000018004C2B5: lea     rax, unk_18017D8DC
 * 000000018004C2BC: mov     qword ptr [rbp+9E20h+var_97F0+8], rax
 * 000000018004C2C3: movups  xmm0, [rbp+9E20h+var_97F0]
 * 000000018004C2CA: movups  [rbp+9E20h+var_7C58], xmm0
 * 000000018004C2D1: mov     dword ptr [rbp+9E20h+var_7C48], r13d
 * 000000018004C2D8: mov     dword ptr [rbp+9E20h+var_7C48+4], esi
 * 000000018004C2DE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C2E3: movups  xmm0, [rbp+9E20h+var_7C48]
 * 000000018004C2EA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C2EF: call    sub_1800456E0
 * 000000018004C2F4: mov     r8, rax
 * 000000018004C2F7: mov     r9d, r12d
 * 000000018004C2FA: mov     edx, 180h
 * 000000018004C2FF: lea     rcx, [rbp+9E20h+var_4728]; Src
 * 000000018004C306: call    sub_1800D45C8
 * 000000018004C30B: nop
 * 000000018004C30C: mov     r8, rax
 * 000000018004C30F: lea     rdx, aStandardshader_110; "StandardShader/ShaderModel40/"
 * 000000018004C316: lea     rcx, [rbp+9E20h+var_4748]
 * 000000018004C31D: call    sub_1800454BC
 * 000000018004C322: nop
 * 000000018004C323: lea     r8, aPixel_108; "/Pixel"
 * 000000018004C32A: mov     rdx, rax
 * 000000018004C32D: lea     rcx, [rbp+9E20h+var_4768]
 * 000000018004C334: call    sub_18002C088
 * 000000018004C339: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C33E: mov     rcx, rax
 * 000000018004C341: call    sub_1800D46B4
 * 000000018004C346: mov     cs:byte_18026A3BC, al
 * 000000018004C34C: lea     rcx, [rbp+9E20h+var_4748]; void *
 * 000000018004C353: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C358: nop
 * 000000018004C359: lea     rcx, [rbp+9E20h+var_4728]; void *
 * 000000018004C360: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C365: nop
 * 000000018004C366: lea     rcx, dword_18026A3C0
 * 000000018004C36D: call    _Init_thread_footer
 * 000000018004C372: mov     rax, [rdi+rbx*8]
 * 000000018004C376: mov     eax, [r15+rax]
 * 000000018004C37A: cmp     cs:dword_18026A3C8, eax
 * 000000018004C380: jle     loc_18004C46A
 * 000000018004C386: lea     rcx, dword_18026A3C8
 * 000000018004C38D: call    _Init_thread_header
 * 000000018004C392: cmp     cs:dword_18026A3C8, r14d
 * 000000018004C399: jnz     loc_18004C46A
 * 000000018004C39F: lea     rax, unk_1801771B0
 * 000000018004C3A6: mov     qword ptr [rbp+9E20h+var_97E0], rax
 * 000000018004C3AD: lea     rax, unk_18017D8DC
 * 000000018004C3B4: mov     qword ptr [rbp+9E20h+var_97E0+8], rax
 * 000000018004C3BB: movups  xmm0, [rbp+9E20h+var_97E0]
 * 000000018004C3C2: movups  [rbp+9E20h+var_7C38], xmm0
 * 000000018004C3C9: mov     dword ptr [rbp+9E20h+var_7C28], r13d
 * 000000018004C3D0: mov     dword ptr [rbp+9E20h+var_7C28+4], esi
 * 000000018004C3D6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C3DB: movups  xmm0, [rbp+9E20h+var_7C28]
 * 000000018004C3E2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C3E7: call    sub_1800456E0
 * 000000018004C3EC: mov     r8, rax
 * 000000018004C3EF: mov     r9d, r12d
 * 000000018004C3F2: mov     edx, 182h
 * 000000018004C3F7: lea     rcx, [rbp+9E20h+var_46C8]; Src
 * 000000018004C3FE: call    sub_1800D45C8
 * 000000018004C403: nop
 * 000000018004C404: mov     r8, rax
 * 000000018004C407: lea     rdx, aStandardshader_111; "StandardShader/ShaderModel40/"
 * 000000018004C40E: lea     rcx, [rbp+9E20h+var_46E8]
 * 000000018004C415: call    sub_1800454BC
 * 000000018004C41A: nop
 * 000000018004C41B: lea     r8, aPixel_109; "/Pixel"
 * 000000018004C422: mov     rdx, rax
 * 000000018004C425: lea     rcx, [rbp+9E20h+var_4708]
 * 000000018004C42C: call    sub_18002C088
 * 000000018004C431: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C436: mov     rcx, rax
 * 000000018004C439: call    sub_1800D46B4
 * 000000018004C43E: mov     cs:byte_18026A3C4, al
 * 000000018004C444: lea     rcx, [rbp+9E20h+var_46E8]; void *
 * 000000018004C44B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C450: nop
 * 000000018004C451: lea     rcx, [rbp+9E20h+var_46C8]; void *
 * 000000018004C458: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C45D: nop
 * 000000018004C45E: lea     rcx, dword_18026A3C8
 * 000000018004C465: call    _Init_thread_footer
 * 000000018004C46A: mov     rax, [rdi+rbx*8]
 * 000000018004C46E: mov     eax, [r15+rax]
 * 000000018004C472: cmp     cs:dword_18026A3D0, eax
 * 000000018004C478: jle     loc_18004C562
 * 000000018004C47E: lea     rcx, dword_18026A3D0
 * 000000018004C485: call    _Init_thread_header
 * 000000018004C48A: cmp     cs:dword_18026A3D0, r14d
 * 000000018004C491: jnz     loc_18004C562
 * 000000018004C497: lea     rax, unk_180180DC0
 * 000000018004C49E: mov     qword ptr [rbp+9E20h+var_97D0], rax
 * 000000018004C4A5: lea     rax, unk_18018767C
 * 000000018004C4AC: mov     qword ptr [rbp+9E20h+var_97D0+8], rax
 * 000000018004C4B3: movups  xmm0, [rbp+9E20h+var_97D0]
 * 000000018004C4BA: movups  [rbp+9E20h+var_7C18], xmm0
 * 000000018004C4C1: mov     dword ptr [rbp+9E20h+var_7C08], r13d
 * 000000018004C4C8: mov     dword ptr [rbp+9E20h+var_7C08+4], esi
 * 000000018004C4CE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C4D3: movups  xmm0, [rbp+9E20h+var_7C08]
 * 000000018004C4DA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C4DF: call    sub_1800456E0
 * 000000018004C4E4: mov     r8, rax
 * 000000018004C4E7: mov     r9d, r12d
 * 000000018004C4EA: mov     edx, 188h
 * 000000018004C4EF: lea     rcx, [rbp+9E20h+var_4668]; Src
 * 000000018004C4F6: call    sub_1800D45C8
 * 000000018004C4FB: nop
 * 000000018004C4FC: mov     r8, rax
 * 000000018004C4FF: lea     rdx, aStandardshader_112; "StandardShader/ShaderModel40/"
 * 000000018004C506: lea     rcx, [rbp+9E20h+var_4688]
 * 000000018004C50D: call    sub_1800454BC
 * 000000018004C512: nop
 * 000000018004C513: lea     r8, aPixel_110; "/Pixel"
 * 000000018004C51A: mov     rdx, rax
 * 000000018004C51D: lea     rcx, [rbp+9E20h+var_46A8]
 * 000000018004C524: call    sub_18002C088
 * 000000018004C529: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C52E: mov     rcx, rax
 * 000000018004C531: call    sub_1800D46B4
 * 000000018004C536: mov     cs:byte_18026A3CC, al
 * 000000018004C53C: lea     rcx, [rbp+9E20h+var_4688]; void *
 * 000000018004C543: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C548: nop
 * 000000018004C549: lea     rcx, [rbp+9E20h+var_4668]; void *
 * 000000018004C550: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C555: nop
 * 000000018004C556: lea     rcx, dword_18026A3D0
 * 000000018004C55D: call    _Init_thread_footer
 * 000000018004C562: mov     rax, [rdi+rbx*8]
 * 000000018004C566: mov     eax, [r15+rax]
 * 000000018004C56A: cmp     cs:dword_18026A3D8, eax
 * 000000018004C570: jle     loc_18004C65A
 * 000000018004C576: lea     rcx, dword_18026A3D8
 * 000000018004C57D: call    _Init_thread_header
 * 000000018004C582: cmp     cs:dword_18026A3D8, r14d
 * 000000018004C589: jnz     loc_18004C65A
 * 000000018004C58F: lea     rax, unk_180180DC0
 * 000000018004C596: mov     qword ptr [rbp+9E20h+var_97C0], rax
 * 000000018004C59D: lea     rax, unk_18018767C
 * 000000018004C5A4: mov     qword ptr [rbp+9E20h+var_97C0+8], rax
 * 000000018004C5AB: movups  xmm0, [rbp+9E20h+var_97C0]
 * 000000018004C5B2: movups  [rbp+9E20h+var_7BF8], xmm0
 * 000000018004C5B9: mov     dword ptr [rbp+9E20h+var_7BE8], r13d
 * 000000018004C5C0: mov     dword ptr [rbp+9E20h+var_7BE8+4], esi
 * 000000018004C5C6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C5CB: movups  xmm0, [rbp+9E20h+var_7BE8]
 * 000000018004C5D2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C5D7: call    sub_1800456E0
 * 000000018004C5DC: mov     r8, rax
 * 000000018004C5DF: mov     r9d, r12d
 * 000000018004C5E2: mov     edx, 18Ah
 * 000000018004C5E7: lea     rcx, [rbp+9E20h+var_4608]; Src
 * 000000018004C5EE: call    sub_1800D45C8
 * 000000018004C5F3: nop
 * 000000018004C5F4: mov     r8, rax
 * 000000018004C5F7: lea     rdx, aStandardshader_113; "StandardShader/ShaderModel40/"
 * 000000018004C5FE: lea     rcx, [rbp+9E20h+var_4628]
 * 000000018004C605: call    sub_1800454BC
 * 000000018004C60A: nop
 * 000000018004C60B: lea     r8, aPixel_111; "/Pixel"
 * 000000018004C612: mov     rdx, rax
 * 000000018004C615: lea     rcx, [rbp+9E20h+var_4648]
 * 000000018004C61C: call    sub_18002C088
 * 000000018004C621: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C626: mov     rcx, rax
 * 000000018004C629: call    sub_1800D46B4
 * 000000018004C62E: mov     cs:byte_18026A3D4, al
 * 000000018004C634: lea     rcx, [rbp+9E20h+var_4628]; void *
 * 000000018004C63B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C640: nop
 * 000000018004C641: lea     rcx, [rbp+9E20h+var_4608]; void *
 * 000000018004C648: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C64D: nop
 * 000000018004C64E: lea     rcx, dword_18026A3D8
 * 000000018004C655: call    _Init_thread_footer
 * 000000018004C65A: mov     rax, [rdi+rbx*8]
 * 000000018004C65E: mov     eax, [r15+rax]
 * 000000018004C662: cmp     cs:dword_18026A3E0, eax
 * 000000018004C668: jle     loc_18004C752
 * 000000018004C66E: lea     rcx, dword_18026A3E0
 * 000000018004C675: call    _Init_thread_header
 * 000000018004C67A: cmp     cs:dword_18026A3E0, r14d
 * 000000018004C681: jnz     loc_18004C752
 * 000000018004C687: lea     rax, unk_180187680
 * 000000018004C68E: mov     qword ptr [rbp+9E20h+var_97B0], rax
 * 000000018004C695: lea     rax, unk_18018DF88
 * 000000018004C69C: mov     qword ptr [rbp+9E20h+var_97B0+8], rax
 * 000000018004C6A3: movups  xmm0, [rbp+9E20h+var_97B0]
 * 000000018004C6AA: movups  [rbp+9E20h+var_7BD8], xmm0
 * 000000018004C6B1: mov     dword ptr [rbp+9E20h+var_7BC8], r13d
 * 000000018004C6B8: mov     dword ptr [rbp+9E20h+var_7BC8+4], esi
 * 000000018004C6BE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C6C3: movups  xmm0, [rbp+9E20h+var_7BC8]
 * 000000018004C6CA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C6CF: call    sub_1800456E0
 * 000000018004C6D4: mov     r8, rax
 * 000000018004C6D7: mov     r9d, r12d
 * 000000018004C6DA: mov     edx, 190h
 * 000000018004C6DF: lea     rcx, [rbp+9E20h+var_45A8]; Src
 * 000000018004C6E6: call    sub_1800D45C8
 * 000000018004C6EB: nop
 * 000000018004C6EC: mov     r8, rax
 * 000000018004C6EF: lea     rdx, aStandardshader_114; "StandardShader/ShaderModel40/"
 * 000000018004C6F6: lea     rcx, [rbp+9E20h+var_45C8]
 * 000000018004C6FD: call    sub_1800454BC
 * 000000018004C702: nop
 * 000000018004C703: lea     r8, aPixel_112; "/Pixel"
 * 000000018004C70A: mov     rdx, rax
 * 000000018004C70D: lea     rcx, [rbp+9E20h+var_45E8]
 * 000000018004C714: call    sub_18002C088
 * 000000018004C719: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C71E: mov     rcx, rax
 * 000000018004C721: call    sub_1800D46B4
 * 000000018004C726: mov     cs:byte_18026A3DC, al
 * 000000018004C72C: lea     rcx, [rbp+9E20h+var_45C8]; void *
 * 000000018004C733: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C738: nop
 * 000000018004C739: lea     rcx, [rbp+9E20h+var_45A8]; void *
 * 000000018004C740: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C745: nop
 * 000000018004C746: lea     rcx, dword_18026A3E0
 * 000000018004C74D: call    _Init_thread_footer
 * 000000018004C752: mov     rax, [rdi+rbx*8]
 * 000000018004C756: mov     eax, [r15+rax]
 * 000000018004C75A: cmp     cs:dword_18026A3E8, eax
 * 000000018004C760: jle     loc_18004C84A
 * 000000018004C766: lea     rcx, dword_18026A3E8
 * 000000018004C76D: call    _Init_thread_header
 * 000000018004C772: cmp     cs:dword_18026A3E8, r14d
 * 000000018004C779: jnz     loc_18004C84A
 * 000000018004C77F: lea     rax, unk_180187680
 * 000000018004C786: mov     qword ptr [rbp+9E20h+var_97A0], rax
 * 000000018004C78D: lea     rax, unk_18018DF88
 * 000000018004C794: mov     qword ptr [rbp+9E20h+var_97A0+8], rax
 * 000000018004C79B: movups  xmm0, [rbp+9E20h+var_97A0]
 * 000000018004C7A2: movups  [rbp+9E20h+var_7BB8], xmm0
 * 000000018004C7A9: mov     dword ptr [rbp+9E20h+var_7BA8], r13d
 * 000000018004C7B0: mov     dword ptr [rbp+9E20h+var_7BA8+4], esi
 * 000000018004C7B6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C7BB: movups  xmm0, [rbp+9E20h+var_7BA8]
 * 000000018004C7C2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C7C7: call    sub_1800456E0
 * 000000018004C7CC: mov     r8, rax
 * 000000018004C7CF: mov     r9d, r12d
 * 000000018004C7D2: mov     edx, 192h
 * 000000018004C7D7: lea     rcx, [rbp+9E20h+var_4548]; Src
 * 000000018004C7DE: call    sub_1800D45C8
 * 000000018004C7E3: nop
 * 000000018004C7E4: mov     r8, rax
 * 000000018004C7E7: lea     rdx, aStandardshader_115; "StandardShader/ShaderModel40/"
 * 000000018004C7EE: lea     rcx, [rbp+9E20h+var_4568]
 * 000000018004C7F5: call    sub_1800454BC
 * 000000018004C7FA: nop
 * 000000018004C7FB: lea     r8, aPixel_113; "/Pixel"
 * 000000018004C802: mov     rdx, rax
 * 000000018004C805: lea     rcx, [rbp+9E20h+var_4588]
 * 000000018004C80C: call    sub_18002C088
 * 000000018004C811: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C816: mov     rcx, rax
 * 000000018004C819: call    sub_1800D46B4
 * 000000018004C81E: mov     cs:byte_18026A3E4, al
 * 000000018004C824: lea     rcx, [rbp+9E20h+var_4568]; void *
 * 000000018004C82B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C830: nop
 * 000000018004C831: lea     rcx, [rbp+9E20h+var_4548]; void *
 * 000000018004C838: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C83D: nop
 * 000000018004C83E: lea     rcx, dword_18026A3E8
 * 000000018004C845: call    _Init_thread_footer
 * 000000018004C84A: mov     rax, [rdi+rbx*8]
 * 000000018004C84E: mov     eax, [r15+rax]
 * 000000018004C852: cmp     cs:dword_18026A3F0, eax
 * 000000018004C858: jle     loc_18004C942
 * 000000018004C85E: lea     rcx, dword_18026A3F0
 * 000000018004C865: call    _Init_thread_header
 * 000000018004C86A: cmp     cs:dword_18026A3F0, r14d
 * 000000018004C871: jnz     loc_18004C942
 * 000000018004C877: lea     rax, unk_1801915B0
 * 000000018004C87E: mov     qword ptr [rbp+9E20h+var_9790], rax
 * 000000018004C885: lea     rax, unk_18019806C
 * 000000018004C88C: mov     qword ptr [rbp+9E20h+var_9790+8], rax
 * 000000018004C893: movups  xmm0, [rbp+9E20h+var_9790]
 * 000000018004C89A: movups  [rbp+9E20h+var_7B98], xmm0
 * 000000018004C8A1: mov     dword ptr [rbp+9E20h+var_7B88], r13d
 * 000000018004C8A8: mov     dword ptr [rbp+9E20h+var_7B88+4], esi
 * 000000018004C8AE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C8B3: movups  xmm0, [rbp+9E20h+var_7B88]
 * 000000018004C8BA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C8BF: call    sub_1800456E0
 * 000000018004C8C4: mov     r8, rax
 * 000000018004C8C7: mov     r9d, r12d
 * 000000018004C8CA: mov     edx, 198h
 * 000000018004C8CF: lea     rcx, [rbp+9E20h+var_44E8]; Src
 * 000000018004C8D6: call    sub_1800D45C8
 * 000000018004C8DB: nop
 * 000000018004C8DC: mov     r8, rax
 * 000000018004C8DF: lea     rdx, aStandardshader_116; "StandardShader/ShaderModel40/"
 * 000000018004C8E6: lea     rcx, [rbp+9E20h+var_4508]
 * 000000018004C8ED: call    sub_1800454BC
 * 000000018004C8F2: nop
 * 000000018004C8F3: lea     r8, aPixel_114; "/Pixel"
 * 000000018004C8FA: mov     rdx, rax
 * 000000018004C8FD: lea     rcx, [rbp+9E20h+var_4528]
 * 000000018004C904: call    sub_18002C088
 * 000000018004C909: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004C90E: mov     rcx, rax
 * 000000018004C911: call    sub_1800D46B4
 * 000000018004C916: mov     cs:byte_18026A3EC, al
 * 000000018004C91C: lea     rcx, [rbp+9E20h+var_4508]; void *
 * 000000018004C923: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C928: nop
 * 000000018004C929: lea     rcx, [rbp+9E20h+var_44E8]; void *
 * 000000018004C930: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C935: nop
 * 000000018004C936: lea     rcx, dword_18026A3F0
 * 000000018004C93D: call    _Init_thread_footer
 * 000000018004C942: mov     rax, [rdi+rbx*8]
 * 000000018004C946: mov     eax, [r15+rax]
 * 000000018004C94A: cmp     cs:dword_18026A3F8, eax
 * 000000018004C950: jle     loc_18004CA3A
 * 000000018004C956: lea     rcx, dword_18026A3F8
 * 000000018004C95D: call    _Init_thread_header
 * 000000018004C962: cmp     cs:dword_18026A3F8, r14d
 * 000000018004C969: jnz     loc_18004CA3A
 * 000000018004C96F: lea     rax, unk_1801915B0
 * 000000018004C976: mov     qword ptr [rbp+9E20h+var_9780], rax
 * 000000018004C97D: lea     rax, unk_18019806C
 * 000000018004C984: mov     qword ptr [rbp+9E20h+var_9780+8], rax
 * 000000018004C98B: movups  xmm0, [rbp+9E20h+var_9780]
 * 000000018004C992: movups  [rbp+9E20h+var_7B78], xmm0
 * 000000018004C999: mov     dword ptr [rbp+9E20h+var_7B68], r13d
 * 000000018004C9A0: mov     dword ptr [rbp+9E20h+var_7B68+4], esi
 * 000000018004C9A6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004C9AB: movups  xmm0, [rbp+9E20h+var_7B68]
 * 000000018004C9B2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004C9B7: call    sub_1800456E0
 * 000000018004C9BC: mov     r8, rax
 * 000000018004C9BF: mov     r9d, r12d
 * 000000018004C9C2: mov     edx, 19Ah
 * 000000018004C9C7: lea     rcx, [rbp+9E20h+var_4488]; Src
 * 000000018004C9CE: call    sub_1800D45C8
 * 000000018004C9D3: nop
 * 000000018004C9D4: mov     r8, rax
 * 000000018004C9D7: lea     rdx, aStandardshader_117; "StandardShader/ShaderModel40/"
 * 000000018004C9DE: lea     rcx, [rbp+9E20h+var_44A8]
 * 000000018004C9E5: call    sub_1800454BC
 * 000000018004C9EA: nop
 * 000000018004C9EB: lea     r8, aPixel_115; "/Pixel"
 * 000000018004C9F2: mov     rdx, rax
 * 000000018004C9F5: lea     rcx, [rbp+9E20h+var_44C8]
 * 000000018004C9FC: call    sub_18002C088
 * 000000018004CA01: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CA06: mov     rcx, rax
 * 000000018004CA09: call    sub_1800D46B4
 * 000000018004CA0E: mov     cs:byte_18026A3F4, al
 * 000000018004CA14: lea     rcx, [rbp+9E20h+var_44A8]; void *
 * 000000018004CA1B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CA20: nop
 * 000000018004CA21: lea     rcx, [rbp+9E20h+var_4488]; void *
 * 000000018004CA28: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CA2D: nop
 * 000000018004CA2E: lea     rcx, dword_18026A3F8
 * 000000018004CA35: call    _Init_thread_footer
 * 000000018004CA3A: mov     rax, [rdi+rbx*8]
 * 000000018004CA3E: mov     eax, [r15+rax]
 * 000000018004CA42: cmp     cs:dword_18026A400, eax
 * 000000018004CA48: jle     loc_18004CB32
 * 000000018004CA4E: lea     rcx, dword_18026A400
 * 000000018004CA55: call    _Init_thread_header
 * 000000018004CA5A: cmp     cs:dword_18026A400, r14d
 * 000000018004CA61: jnz     loc_18004CB32
 * 000000018004CA67: lea     rax, unk_1801771B0
 * 000000018004CA6E: mov     qword ptr [rbp+9E20h+var_9770], rax
 * 000000018004CA75: lea     rax, unk_18017D8DC
 * 000000018004CA7C: mov     qword ptr [rbp+9E20h+var_9770+8], rax
 * 000000018004CA83: movups  xmm0, [rbp+9E20h+var_9770]
 * 000000018004CA8A: movups  [rbp+9E20h+var_7B58], xmm0
 * 000000018004CA91: mov     dword ptr [rbp+9E20h+var_7B48], r13d
 * 000000018004CA98: mov     dword ptr [rbp+9E20h+var_7B48+4], esi
 * 000000018004CA9E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CAA3: movups  xmm0, [rbp+9E20h+var_7B48]
 * 000000018004CAAA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CAAF: call    sub_1800456E0
 * 000000018004CAB4: mov     r8, rax
 * 000000018004CAB7: mov     r9d, r12d
 * 000000018004CABA: mov     edx, 1A0h
 * 000000018004CABF: lea     rcx, [rbp+9E20h+var_4428]; Src
 * 000000018004CAC6: call    sub_1800D45C8
 * 000000018004CACB: nop
 * 000000018004CACC: mov     r8, rax
 * 000000018004CACF: lea     rdx, aStandardshader_118; "StandardShader/ShaderModel40/"
 * 000000018004CAD6: lea     rcx, [rbp+9E20h+var_4448]
 * 000000018004CADD: call    sub_1800454BC
 * 000000018004CAE2: nop
 * 000000018004CAE3: lea     r8, aPixel_116; "/Pixel"
 * 000000018004CAEA: mov     rdx, rax
 * 000000018004CAED: lea     rcx, [rbp+9E20h+var_4468]
 * 000000018004CAF4: call    sub_18002C088
 * 000000018004CAF9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CAFE: mov     rcx, rax
 * 000000018004CB01: call    sub_1800D46B4
 * 000000018004CB06: mov     cs:byte_18026A3FC, al
 * 000000018004CB0C: lea     rcx, [rbp+9E20h+var_4448]; void *
 * 000000018004CB13: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CB18: nop
 * 000000018004CB19: lea     rcx, [rbp+9E20h+var_4428]; void *
 * 000000018004CB20: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CB25: nop
 * 000000018004CB26: lea     rcx, dword_18026A400
 * 000000018004CB2D: call    _Init_thread_footer
 * 000000018004CB32: mov     rax, [rdi+rbx*8]
 * 000000018004CB36: mov     eax, [r15+rax]
 * 000000018004CB3A: cmp     cs:dword_18026A408, eax
 * 000000018004CB40: jle     loc_18004CC2A
 * 000000018004CB46: lea     rcx, dword_18026A408
 * 000000018004CB4D: call    _Init_thread_header
 * 000000018004CB52: cmp     cs:dword_18026A408, r14d
 * 000000018004CB59: jnz     loc_18004CC2A
 * 000000018004CB5F: lea     rax, unk_1801771B0
 * 000000018004CB66: mov     qword ptr [rbp+9E20h+var_9760], rax
 * 000000018004CB6D: lea     rax, unk_18017D8DC
 * 000000018004CB74: mov     qword ptr [rbp+9E20h+var_9760+8], rax
 * 000000018004CB7B: movups  xmm0, [rbp+9E20h+var_9760]
 * 000000018004CB82: movups  [rbp+9E20h+var_7B38], xmm0
 * 000000018004CB89: mov     dword ptr [rbp+9E20h+var_7B28], r13d
 * 000000018004CB90: mov     dword ptr [rbp+9E20h+var_7B28+4], esi
 * 000000018004CB96: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CB9B: movups  xmm0, [rbp+9E20h+var_7B28]
 * 000000018004CBA2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CBA7: call    sub_1800456E0
 * 000000018004CBAC: mov     r8, rax
 * 000000018004CBAF: mov     r9d, r12d
 * 000000018004CBB2: mov     edx, 1A2h
 * 000000018004CBB7: lea     rcx, [rbp+9E20h+var_43C8]; Src
 * 000000018004CBBE: call    sub_1800D45C8
 * 000000018004CBC3: nop
 * 000000018004CBC4: mov     r8, rax
 * 000000018004CBC7: lea     rdx, aStandardshader_119; "StandardShader/ShaderModel40/"
 * 000000018004CBCE: lea     rcx, [rbp+9E20h+var_43E8]
 * 000000018004CBD5: call    sub_1800454BC
 * 000000018004CBDA: nop
 * 000000018004CBDB: lea     r8, aPixel_117; "/Pixel"
 * 000000018004CBE2: mov     rdx, rax
 * 000000018004CBE5: lea     rcx, [rbp+9E20h+var_4408]
 * 000000018004CBEC: call    sub_18002C088
 * 000000018004CBF1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CBF6: mov     rcx, rax
 * 000000018004CBF9: call    sub_1800D46B4
 * 000000018004CBFE: mov     cs:byte_18026A404, al
 * 000000018004CC04: lea     rcx, [rbp+9E20h+var_43E8]; void *
 * 000000018004CC0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CC10: nop
 * 000000018004CC11: lea     rcx, [rbp+9E20h+var_43C8]; void *
 * 000000018004CC18: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CC1D: nop
 * 000000018004CC1E: lea     rcx, dword_18026A408
 * 000000018004CC25: call    _Init_thread_footer
 * 000000018004CC2A: mov     rax, [rdi+rbx*8]
 * 000000018004CC2E: mov     eax, [r15+rax]
 * 000000018004CC32: cmp     cs:dword_18026A410, eax
 * 000000018004CC38: jle     loc_18004CD22
 * 000000018004CC3E: lea     rcx, dword_18026A410
 * 000000018004CC45: call    _Init_thread_header
 * 000000018004CC4A: cmp     cs:dword_18026A410, r14d
 * 000000018004CC51: jnz     loc_18004CD22
 * 000000018004CC57: lea     rax, unk_180180DC0
 * 000000018004CC5E: mov     qword ptr [rbp+9E20h+var_9750], rax
 * 000000018004CC65: lea     rax, unk_18018767C
 * 000000018004CC6C: mov     qword ptr [rbp+9E20h+var_9750+8], rax
 * 000000018004CC73: movups  xmm0, [rbp+9E20h+var_9750]
 * 000000018004CC7A: movups  [rbp+9E20h+var_7B18], xmm0
 * 000000018004CC81: mov     dword ptr [rbp+9E20h+var_7B08], r13d
 * 000000018004CC88: mov     dword ptr [rbp+9E20h+var_7B08+4], esi
 * 000000018004CC8E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CC93: movups  xmm0, [rbp+9E20h+var_7B08]
 * 000000018004CC9A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CC9F: call    sub_1800456E0
 * 000000018004CCA4: mov     r8, rax
 * 000000018004CCA7: mov     r9d, r12d
 * 000000018004CCAA: mov     edx, 1A8h
 * 000000018004CCAF: lea     rcx, [rbp+9E20h+var_4368]; Src
 * 000000018004CCB6: call    sub_1800D45C8
 * 000000018004CCBB: nop
 * 000000018004CCBC: mov     r8, rax
 * 000000018004CCBF: lea     rdx, aStandardshader_120; "StandardShader/ShaderModel40/"
 * 000000018004CCC6: lea     rcx, [rbp+9E20h+var_4388]
 * 000000018004CCCD: call    sub_1800454BC
 * 000000018004CCD2: nop
 * 000000018004CCD3: lea     r8, aPixel_118; "/Pixel"
 * 000000018004CCDA: mov     rdx, rax
 * 000000018004CCDD: lea     rcx, [rbp+9E20h+var_43A8]
 * 000000018004CCE4: call    sub_18002C088
 * 000000018004CCE9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CCEE: mov     rcx, rax
 * 000000018004CCF1: call    sub_1800D46B4
 * 000000018004CCF6: mov     cs:byte_18026A40C, al
 * 000000018004CCFC: lea     rcx, [rbp+9E20h+var_4388]; void *
 * 000000018004CD03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CD08: nop
 * 000000018004CD09: lea     rcx, [rbp+9E20h+var_4368]; void *
 * 000000018004CD10: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CD15: nop
 * 000000018004CD16: lea     rcx, dword_18026A410
 * 000000018004CD1D: call    _Init_thread_footer
 * 000000018004CD22: mov     rax, [rdi+rbx*8]
 * 000000018004CD26: mov     eax, [r15+rax]
 * 000000018004CD2A: cmp     cs:dword_18026A418, eax
 * 000000018004CD30: jle     loc_18004CE1A
 * 000000018004CD36: lea     rcx, dword_18026A418
 * 000000018004CD3D: call    _Init_thread_header
 * 000000018004CD42: cmp     cs:dword_18026A418, r14d
 * 000000018004CD49: jnz     loc_18004CE1A
 * 000000018004CD4F: lea     rax, unk_180180DC0
 * 000000018004CD56: mov     qword ptr [rbp+9E20h+var_9740], rax
 * 000000018004CD5D: lea     rax, unk_18018767C
 * 000000018004CD64: mov     qword ptr [rbp+9E20h+var_9740+8], rax
 * 000000018004CD6B: movups  xmm0, [rbp+9E20h+var_9740]
 * 000000018004CD72: movups  [rbp+9E20h+var_7AF8], xmm0
 * 000000018004CD79: mov     dword ptr [rbp+9E20h+var_7AE8], r13d
 * 000000018004CD80: mov     dword ptr [rbp+9E20h+var_7AE8+4], esi
 * 000000018004CD86: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CD8B: movups  xmm0, [rbp+9E20h+var_7AE8]
 * 000000018004CD92: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CD97: call    sub_1800456E0
 * 000000018004CD9C: mov     r8, rax
 * 000000018004CD9F: mov     r9d, r12d
 * 000000018004CDA2: mov     edx, 1AAh
 * 000000018004CDA7: lea     rcx, [rbp+9E20h+var_4308]; Src
 * 000000018004CDAE: call    sub_1800D45C8
 * 000000018004CDB3: nop
 * 000000018004CDB4: mov     r8, rax
 * 000000018004CDB7: lea     rdx, aStandardshader_121; "StandardShader/ShaderModel40/"
 * 000000018004CDBE: lea     rcx, [rbp+9E20h+var_4328]
 * 000000018004CDC5: call    sub_1800454BC
 * 000000018004CDCA: nop
 * 000000018004CDCB: lea     r8, aPixel_119; "/Pixel"
 * 000000018004CDD2: mov     rdx, rax
 * 000000018004CDD5: lea     rcx, [rbp+9E20h+var_4348]
 * 000000018004CDDC: call    sub_18002C088
 * 000000018004CDE1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CDE6: mov     rcx, rax
 * 000000018004CDE9: call    sub_1800D46B4
 * 000000018004CDEE: mov     cs:byte_18026A414, al
 * 000000018004CDF4: lea     rcx, [rbp+9E20h+var_4328]; void *
 * 000000018004CDFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CE00: nop
 * 000000018004CE01: lea     rcx, [rbp+9E20h+var_4308]; void *
 * 000000018004CE08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CE0D: nop
 * 000000018004CE0E: lea     rcx, dword_18026A418
 * 000000018004CE15: call    _Init_thread_footer
 * 000000018004CE1A: mov     rax, [rdi+rbx*8]
 * 000000018004CE1E: mov     eax, [r15+rax]
 * 000000018004CE22: cmp     cs:dword_18026A420, eax
 * 000000018004CE28: jle     loc_18004CF12
 * 000000018004CE2E: lea     rcx, dword_18026A420
 * 000000018004CE35: call    _Init_thread_header
 * 000000018004CE3A: cmp     cs:dword_18026A420, r14d
 * 000000018004CE41: jnz     loc_18004CF12
 * 000000018004CE47: lea     rax, unk_180187680
 * 000000018004CE4E: mov     qword ptr [rbp+9E20h+var_9730], rax
 * 000000018004CE55: lea     rax, unk_18018DF88
 * 000000018004CE5C: mov     qword ptr [rbp+9E20h+var_9730+8], rax
 * 000000018004CE63: movups  xmm0, [rbp+9E20h+var_9730]
 * 000000018004CE6A: movups  [rbp+9E20h+var_7AD8], xmm0
 * 000000018004CE71: mov     dword ptr [rbp+9E20h+var_7AC8], r13d
 * 000000018004CE78: mov     dword ptr [rbp+9E20h+var_7AC8+4], esi
 * 000000018004CE7E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CE83: movups  xmm0, [rbp+9E20h+var_7AC8]
 * 000000018004CE8A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CE8F: call    sub_1800456E0
 * 000000018004CE94: mov     r8, rax
 * 000000018004CE97: mov     r9d, r12d
 * 000000018004CE9A: mov     edx, 1B0h
 * 000000018004CE9F: lea     rcx, [rbp+9E20h+var_42A8]; Src
 * 000000018004CEA6: call    sub_1800D45C8
 * 000000018004CEAB: nop
 * 000000018004CEAC: mov     r8, rax
 * 000000018004CEAF: lea     rdx, aStandardshader_122; "StandardShader/ShaderModel40/"
 * 000000018004CEB6: lea     rcx, [rbp+9E20h+var_42C8]
 * 000000018004CEBD: call    sub_1800454BC
 * 000000018004CEC2: nop
 * 000000018004CEC3: lea     r8, aPixel_120; "/Pixel"
 * 000000018004CECA: mov     rdx, rax
 * 000000018004CECD: lea     rcx, [rbp+9E20h+var_42E8]
 * 000000018004CED4: call    sub_18002C088
 * 000000018004CED9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CEDE: mov     rcx, rax
 * 000000018004CEE1: call    sub_1800D46B4
 * 000000018004CEE6: mov     cs:byte_18026A41C, al
 * 000000018004CEEC: lea     rcx, [rbp+9E20h+var_42C8]; void *
 * 000000018004CEF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CEF8: nop
 * 000000018004CEF9: lea     rcx, [rbp+9E20h+var_42A8]; void *
 * 000000018004CF00: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CF05: nop
 * 000000018004CF06: lea     rcx, dword_18026A420
 * 000000018004CF0D: call    _Init_thread_footer
 * 000000018004CF12: mov     rax, [rdi+rbx*8]
 * 000000018004CF16: mov     eax, [r15+rax]
 * 000000018004CF1A: cmp     cs:dword_18026A428, eax
 * 000000018004CF20: jle     loc_18004D00A
 * 000000018004CF26: lea     rcx, dword_18026A428
 * 000000018004CF2D: call    _Init_thread_header
 * 000000018004CF32: cmp     cs:dword_18026A428, r14d
 * 000000018004CF39: jnz     loc_18004D00A
 * 000000018004CF3F: lea     rax, unk_180187680
 * 000000018004CF46: mov     qword ptr [rbp+9E20h+var_9720], rax
 * 000000018004CF4D: lea     rax, unk_18018DF88
 * 000000018004CF54: mov     qword ptr [rbp+9E20h+var_9720+8], rax
 * 000000018004CF5B: movups  xmm0, [rbp+9E20h+var_9720]
 * 000000018004CF62: movups  [rbp+9E20h+var_7AB8], xmm0
 * 000000018004CF69: mov     dword ptr [rbp+9E20h+var_7AA8], r13d
 * 000000018004CF70: mov     dword ptr [rbp+9E20h+var_7AA8+4], esi
 * 000000018004CF76: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004CF7B: movups  xmm0, [rbp+9E20h+var_7AA8]
 * 000000018004CF82: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004CF87: call    sub_1800456E0
 * 000000018004CF8C: mov     r8, rax
 * 000000018004CF8F: mov     r9d, r12d
 * 000000018004CF92: mov     edx, 1B2h
 * 000000018004CF97: lea     rcx, [rbp+9E20h+var_4248]; Src
 * 000000018004CF9E: call    sub_1800D45C8
 * 000000018004CFA3: nop
 * 000000018004CFA4: mov     r8, rax
 * 000000018004CFA7: lea     rdx, aStandardshader_123; "StandardShader/ShaderModel40/"
 * 000000018004CFAE: lea     rcx, [rbp+9E20h+var_4268]
 * 000000018004CFB5: call    sub_1800454BC
 * 000000018004CFBA: nop
 * 000000018004CFBB: lea     r8, aPixel_121; "/Pixel"
 * 000000018004CFC2: mov     rdx, rax
 * 000000018004CFC5: lea     rcx, [rbp+9E20h+var_4288]
 * 000000018004CFCC: call    sub_18002C088
 * 000000018004CFD1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004CFD6: mov     rcx, rax
 * 000000018004CFD9: call    sub_1800D46B4
 * 000000018004CFDE: mov     cs:byte_18026A424, al
 * 000000018004CFE4: lea     rcx, [rbp+9E20h+var_4268]; void *
 * 000000018004CFEB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CFF0: nop
 * 000000018004CFF1: lea     rcx, [rbp+9E20h+var_4248]; void *
 * 000000018004CFF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CFFD: nop
 * 000000018004CFFE: lea     rcx, dword_18026A428
 * 000000018004D005: call    _Init_thread_footer
 * 000000018004D00A: mov     rax, [rdi+rbx*8]
 * 000000018004D00E: mov     eax, [r15+rax]
 * 000000018004D012: cmp     cs:dword_18026A430, eax
 * 000000018004D018: jle     loc_18004D102
 * 000000018004D01E: lea     rcx, dword_18026A430
 * 000000018004D025: call    _Init_thread_header
 * 000000018004D02A: cmp     cs:dword_18026A430, r14d
 * 000000018004D031: jnz     loc_18004D102
 * 000000018004D037: lea     rax, unk_1801915B0
 * 000000018004D03E: mov     qword ptr [rbp+9E20h+var_9710], rax
 * 000000018004D045: lea     rax, unk_18019806C
 * 000000018004D04C: mov     qword ptr [rbp+9E20h+var_9710+8], rax
 * 000000018004D053: movups  xmm0, [rbp+9E20h+var_9710]
 * 000000018004D05A: movups  [rbp+9E20h+var_7A98], xmm0
 * 000000018004D061: mov     dword ptr [rbp+9E20h+var_7A88], r13d
 * 000000018004D068: mov     dword ptr [rbp+9E20h+var_7A88+4], esi
 * 000000018004D06E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D073: movups  xmm0, [rbp+9E20h+var_7A88]
 * 000000018004D07A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D07F: call    sub_1800456E0
 * 000000018004D084: mov     r8, rax
 * 000000018004D087: mov     r9d, r12d
 * 000000018004D08A: mov     edx, 1B8h
 * 000000018004D08F: lea     rcx, [rbp+9E20h+var_41E8]; Src
 * 000000018004D096: call    sub_1800D45C8
 * 000000018004D09B: nop
 * 000000018004D09C: mov     r8, rax
 * 000000018004D09F: lea     rdx, aStandardshader_124; "StandardShader/ShaderModel40/"
 * 000000018004D0A6: lea     rcx, [rbp+9E20h+var_4208]
 * 000000018004D0AD: call    sub_1800454BC
 * 000000018004D0B2: nop
 * 000000018004D0B3: lea     r8, aPixel_122; "/Pixel"
 * 000000018004D0BA: mov     rdx, rax
 * 000000018004D0BD: lea     rcx, [rbp+9E20h+var_4228]
 * 000000018004D0C4: call    sub_18002C088
 * 000000018004D0C9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D0CE: mov     rcx, rax
 * 000000018004D0D1: call    sub_1800D46B4
 * 000000018004D0D6: mov     cs:byte_18026A42C, al
 * 000000018004D0DC: lea     rcx, [rbp+9E20h+var_4208]; void *
 * 000000018004D0E3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D0E8: nop
 * 000000018004D0E9: lea     rcx, [rbp+9E20h+var_41E8]; void *
 * 000000018004D0F0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D0F5: nop
 * 000000018004D0F6: lea     rcx, dword_18026A430
 * 000000018004D0FD: call    _Init_thread_footer
 * 000000018004D102: mov     rax, [rdi+rbx*8]
 * 000000018004D106: mov     eax, [r15+rax]
 * 000000018004D10A: cmp     cs:dword_18026A438, eax
 * 000000018004D110: jle     loc_18004D1FA
 * 000000018004D116: lea     rcx, dword_18026A438
 * 000000018004D11D: call    _Init_thread_header
 * 000000018004D122: cmp     cs:dword_18026A438, r14d
 * 000000018004D129: jnz     loc_18004D1FA
 * 000000018004D12F: lea     rax, unk_1801915B0
 * 000000018004D136: mov     qword ptr [rbp+9E20h+var_9700], rax
 * 000000018004D13D: lea     rax, unk_18019806C
 * 000000018004D144: mov     qword ptr [rbp+9E20h+var_9700+8], rax
 * 000000018004D14B: movups  xmm0, [rbp+9E20h+var_9700]
 * 000000018004D152: movups  [rbp+9E20h+var_7A78], xmm0
 * 000000018004D159: mov     dword ptr [rbp+9E20h+var_7A68], r13d
 * 000000018004D160: mov     dword ptr [rbp+9E20h+var_7A68+4], esi
 * 000000018004D166: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D16B: movups  xmm0, [rbp+9E20h+var_7A68]
 * 000000018004D172: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D177: call    sub_1800456E0
 * 000000018004D17C: mov     r8, rax
 * 000000018004D17F: mov     r9d, r12d
 * 000000018004D182: mov     edx, 1BAh
 * 000000018004D187: lea     rcx, [rbp+9E20h+var_4188]; Src
 * 000000018004D18E: call    sub_1800D45C8
 * 000000018004D193: nop
 * 000000018004D194: mov     r8, rax
 * 000000018004D197: lea     rdx, aStandardshader_125; "StandardShader/ShaderModel40/"
 * 000000018004D19E: lea     rcx, [rbp+9E20h+var_41A8]
 * 000000018004D1A5: call    sub_1800454BC
 * 000000018004D1AA: nop
 * 000000018004D1AB: lea     r8, aPixel_123; "/Pixel"
 * 000000018004D1B2: mov     rdx, rax
 * 000000018004D1B5: lea     rcx, [rbp+9E20h+var_41C8]
 * 000000018004D1BC: call    sub_18002C088
 * 000000018004D1C1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D1C6: mov     rcx, rax
 * 000000018004D1C9: call    sub_1800D46B4
 * 000000018004D1CE: mov     cs:byte_18026A434, al
 * 000000018004D1D4: lea     rcx, [rbp+9E20h+var_41A8]; void *
 * 000000018004D1DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D1E0: nop
 * 000000018004D1E1: lea     rcx, [rbp+9E20h+var_4188]; void *
 * 000000018004D1E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D1ED: nop
 * 000000018004D1EE: lea     rcx, dword_18026A438
 * 000000018004D1F5: call    _Init_thread_footer
 * 000000018004D1FA: mov     rax, [rdi+rbx*8]
 * 000000018004D1FE: mov     eax, [r15+rax]
 * 000000018004D202: cmp     cs:dword_18026A440, eax
 * 000000018004D208: jle     loc_18004D2F2
 * 000000018004D20E: lea     rcx, dword_18026A440
 * 000000018004D215: call    _Init_thread_header
 * 000000018004D21A: cmp     cs:dword_18026A440, r14d
 * 000000018004D221: jnz     loc_18004D2F2
 * 000000018004D227: lea     rax, unk_1801771B0
 * 000000018004D22E: mov     qword ptr [rbp+9E20h+var_96F0], rax
 * 000000018004D235: lea     rax, unk_18017D8DC
 * 000000018004D23C: mov     qword ptr [rbp+9E20h+var_96F0+8], rax
 * 000000018004D243: movups  xmm0, [rbp+9E20h+var_96F0]
 * 000000018004D24A: movups  [rbp+9E20h+var_7A58], xmm0
 * 000000018004D251: mov     dword ptr [rbp+9E20h+var_7A48], r13d
 * 000000018004D258: mov     dword ptr [rbp+9E20h+var_7A48+4], esi
 * 000000018004D25E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D263: movups  xmm0, [rbp+9E20h+var_7A48]
 * 000000018004D26A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D26F: call    sub_1800456E0
 * 000000018004D274: mov     r8, rax
 * 000000018004D277: mov     r9d, r12d
 * 000000018004D27A: mov     edx, 1C0h
 * 000000018004D27F: lea     rcx, [rbp+9E20h+var_4128]; Src
 * 000000018004D286: call    sub_1800D45C8
 * 000000018004D28B: nop
 * 000000018004D28C: mov     r8, rax
 * 000000018004D28F: lea     rdx, aStandardshader_126; "StandardShader/ShaderModel40/"
 * 000000018004D296: lea     rcx, [rbp+9E20h+var_4148]
 * 000000018004D29D: call    sub_1800454BC
 * 000000018004D2A2: nop
 * 000000018004D2A3: lea     r8, aPixel_124; "/Pixel"
 * 000000018004D2AA: mov     rdx, rax
 * 000000018004D2AD: lea     rcx, [rbp+9E20h+var_4168]
 * 000000018004D2B4: call    sub_18002C088
 * 000000018004D2B9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D2BE: mov     rcx, rax
 * 000000018004D2C1: call    sub_1800D46B4
 * 000000018004D2C6: mov     cs:byte_18026A43C, al
 * 000000018004D2CC: lea     rcx, [rbp+9E20h+var_4148]; void *
 * 000000018004D2D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D2D8: nop
 * 000000018004D2D9: lea     rcx, [rbp+9E20h+var_4128]; void *
 * 000000018004D2E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D2E5: nop
 * 000000018004D2E6: lea     rcx, dword_18026A440
 * 000000018004D2ED: call    _Init_thread_footer
 * 000000018004D2F2: mov     rax, [rdi+rbx*8]
 * 000000018004D2F6: mov     eax, [r15+rax]
 * 000000018004D2FA: cmp     cs:dword_18026A448, eax
 * 000000018004D300: jle     loc_18004D3EA
 * 000000018004D306: lea     rcx, dword_18026A448
 * 000000018004D30D: call    _Init_thread_header
 * 000000018004D312: cmp     cs:dword_18026A448, r14d
 * 000000018004D319: jnz     loc_18004D3EA
 * 000000018004D31F: lea     rax, unk_1801771B0
 * 000000018004D326: mov     qword ptr [rbp+9E20h+var_96E0], rax
 * 000000018004D32D: lea     rax, unk_18017D8DC
 * 000000018004D334: mov     qword ptr [rbp+9E20h+var_96E0+8], rax
 * 000000018004D33B: movups  xmm0, [rbp+9E20h+var_96E0]
 * 000000018004D342: movups  [rbp+9E20h+var_7A38], xmm0
 * 000000018004D349: mov     dword ptr [rbp+9E20h+var_7A28], r13d
 * 000000018004D350: mov     dword ptr [rbp+9E20h+var_7A28+4], esi
 * 000000018004D356: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D35B: movups  xmm0, [rbp+9E20h+var_7A28]
 * 000000018004D362: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D367: call    sub_1800456E0
 * 000000018004D36C: mov     r8, rax
 * 000000018004D36F: mov     r9d, r12d
 * 000000018004D372: mov     edx, 1C2h
 * 000000018004D377: lea     rcx, [rbp+9E20h+var_40C8]; Src
 * 000000018004D37E: call    sub_1800D45C8
 * 000000018004D383: nop
 * 000000018004D384: mov     r8, rax
 * 000000018004D387: lea     rdx, aStandardshader_127; "StandardShader/ShaderModel40/"
 * 000000018004D38E: lea     rcx, [rbp+9E20h+var_40E8]
 * 000000018004D395: call    sub_1800454BC
 * 000000018004D39A: nop
 * 000000018004D39B: lea     r8, aPixel_125; "/Pixel"
 * 000000018004D3A2: mov     rdx, rax
 * 000000018004D3A5: lea     rcx, [rbp+9E20h+var_4108]
 * 000000018004D3AC: call    sub_18002C088
 * 000000018004D3B1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D3B6: mov     rcx, rax
 * 000000018004D3B9: call    sub_1800D46B4
 * 000000018004D3BE: mov     cs:byte_18026A444, al
 * 000000018004D3C4: lea     rcx, [rbp+9E20h+var_40E8]; void *
 * 000000018004D3CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D3D0: nop
 * 000000018004D3D1: lea     rcx, [rbp+9E20h+var_40C8]; void *
 * 000000018004D3D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D3DD: nop
 * 000000018004D3DE: lea     rcx, dword_18026A448
 * 000000018004D3E5: call    _Init_thread_footer
 * 000000018004D3EA: mov     rax, [rdi+rbx*8]
 * 000000018004D3EE: mov     eax, [r15+rax]
 * 000000018004D3F2: cmp     cs:dword_18026A450, eax
 * 000000018004D3F8: jle     loc_18004D4E2
 * 000000018004D3FE: lea     rcx, dword_18026A450
 * 000000018004D405: call    _Init_thread_header
 * 000000018004D40A: cmp     cs:dword_18026A450, r14d
 * 000000018004D411: jnz     loc_18004D4E2
 * 000000018004D417: lea     rax, unk_180180DC0
 * 000000018004D41E: mov     qword ptr [rbp+9E20h+var_96D0], rax
 * 000000018004D425: lea     rax, unk_18018767C
 * 000000018004D42C: mov     qword ptr [rbp+9E20h+var_96D0+8], rax
 * 000000018004D433: movups  xmm0, [rbp+9E20h+var_96D0]
 * 000000018004D43A: movups  [rbp+9E20h+var_7A18], xmm0
 * 000000018004D441: mov     dword ptr [rbp+9E20h+var_7A08], r13d
 * 000000018004D448: mov     dword ptr [rbp+9E20h+var_7A08+4], esi
 * 000000018004D44E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D453: movups  xmm0, [rbp+9E20h+var_7A08]
 * 000000018004D45A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D45F: call    sub_1800456E0
 * 000000018004D464: mov     r8, rax
 * 000000018004D467: mov     r9d, r12d
 * 000000018004D46A: mov     edx, 1C8h
 * 000000018004D46F: lea     rcx, [rbp+9E20h+var_4068]; Src
 * 000000018004D476: call    sub_1800D45C8
 * 000000018004D47B: nop
 * 000000018004D47C: mov     r8, rax
 * 000000018004D47F: lea     rdx, aStandardshader_128; "StandardShader/ShaderModel40/"
 * 000000018004D486: lea     rcx, [rbp+9E20h+var_4088]
 * 000000018004D48D: call    sub_1800454BC
 * 000000018004D492: nop
 * 000000018004D493: lea     r8, aPixel_126; "/Pixel"
 * 000000018004D49A: mov     rdx, rax
 * 000000018004D49D: lea     rcx, [rbp+9E20h+var_40A8]
 * 000000018004D4A4: call    sub_18002C088
 * 000000018004D4A9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D4AE: mov     rcx, rax
 * 000000018004D4B1: call    sub_1800D46B4
 * 000000018004D4B6: mov     cs:byte_18026A44C, al
 * 000000018004D4BC: lea     rcx, [rbp+9E20h+var_4088]; void *
 * 000000018004D4C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D4C8: nop
 * 000000018004D4C9: lea     rcx, [rbp+9E20h+var_4068]; void *
 * 000000018004D4D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D4D5: nop
 * 000000018004D4D6: lea     rcx, dword_18026A450
 * 000000018004D4DD: call    _Init_thread_footer
 * 000000018004D4E2: mov     rax, [rdi+rbx*8]
 * 000000018004D4E6: mov     eax, [r15+rax]
 * 000000018004D4EA: cmp     cs:dword_18026A458, eax
 * 000000018004D4F0: jle     loc_18004D5DA
 * 000000018004D4F6: lea     rcx, dword_18026A458
 * 000000018004D4FD: call    _Init_thread_header
 * 000000018004D502: cmp     cs:dword_18026A458, r14d
 * 000000018004D509: jnz     loc_18004D5DA
 * 000000018004D50F: lea     rax, unk_180180DC0
 * 000000018004D516: mov     qword ptr [rbp+9E20h+var_96C0], rax
 * 000000018004D51D: lea     rax, unk_18018767C
 * 000000018004D524: mov     qword ptr [rbp+9E20h+var_96C0+8], rax
 * 000000018004D52B: movups  xmm0, [rbp+9E20h+var_96C0]
 * 000000018004D532: movups  [rbp+9E20h+var_79F8], xmm0
 * 000000018004D539: mov     dword ptr [rbp+9E20h+var_79E8], r13d
 * 000000018004D540: mov     dword ptr [rbp+9E20h+var_79E8+4], esi
 * 000000018004D546: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D54B: movups  xmm0, [rbp+9E20h+var_79E8]
 * 000000018004D552: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D557: call    sub_1800456E0
 * 000000018004D55C: mov     r8, rax
 * 000000018004D55F: mov     r9d, r12d
 * 000000018004D562: mov     edx, 1CAh
 * 000000018004D567: lea     rcx, [rbp+9E20h+var_4008]; Src
 * 000000018004D56E: call    sub_1800D45C8
 * 000000018004D573: nop
 * 000000018004D574: mov     r8, rax
 * 000000018004D577: lea     rdx, aStandardshader_129; "StandardShader/ShaderModel40/"
 * 000000018004D57E: lea     rcx, [rbp+9E20h+var_4028]
 * 000000018004D585: call    sub_1800454BC
 * 000000018004D58A: nop
 * 000000018004D58B: lea     r8, aPixel_127; "/Pixel"
 * 000000018004D592: mov     rdx, rax
 * 000000018004D595: lea     rcx, [rbp+9E20h+var_4048]
 * 000000018004D59C: call    sub_18002C088
 * 000000018004D5A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D5A6: mov     rcx, rax
 * 000000018004D5A9: call    sub_1800D46B4
 * 000000018004D5AE: mov     cs:byte_18026A454, al
 * 000000018004D5B4: lea     rcx, [rbp+9E20h+var_4028]; void *
 * 000000018004D5BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D5C0: nop
 * 000000018004D5C1: lea     rcx, [rbp+9E20h+var_4008]; void *
 * 000000018004D5C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D5CD: nop
 * 000000018004D5CE: lea     rcx, dword_18026A458
 * 000000018004D5D5: call    _Init_thread_footer
 * 000000018004D5DA: mov     rax, [rdi+rbx*8]
 * 000000018004D5DE: mov     eax, [r15+rax]
 * 000000018004D5E2: cmp     cs:dword_18026A460, eax
 * 000000018004D5E8: jle     loc_18004D6D2
 * 000000018004D5EE: lea     rcx, dword_18026A460
 * 000000018004D5F5: call    _Init_thread_header
 * 000000018004D5FA: cmp     cs:dword_18026A460, r14d
 * 000000018004D601: jnz     loc_18004D6D2
 * 000000018004D607: lea     rax, unk_180187680
 * 000000018004D60E: mov     qword ptr [rbp+9E20h+var_96B0], rax
 * 000000018004D615: lea     rax, unk_18018DF88
 * 000000018004D61C: mov     qword ptr [rbp+9E20h+var_96B0+8], rax
 * 000000018004D623: movups  xmm0, [rbp+9E20h+var_96B0]
 * 000000018004D62A: movups  [rbp+9E20h+var_79D8], xmm0
 * 000000018004D631: mov     dword ptr [rbp+9E20h+var_79C8], r13d
 * 000000018004D638: mov     dword ptr [rbp+9E20h+var_79C8+4], esi
 * 000000018004D63E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D643: movups  xmm0, [rbp+9E20h+var_79C8]
 * 000000018004D64A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D64F: call    sub_1800456E0
 * 000000018004D654: mov     r8, rax
 * 000000018004D657: mov     r9d, r12d
 * 000000018004D65A: mov     edx, 1D0h
 * 000000018004D65F: lea     rcx, [rbp+9E20h+var_3FA8]; Src
 * 000000018004D666: call    sub_1800D45C8
 * 000000018004D66B: nop
 * 000000018004D66C: mov     r8, rax
 * 000000018004D66F: lea     rdx, aStandardshader_130; "StandardShader/ShaderModel40/"
 * 000000018004D676: lea     rcx, [rbp+9E20h+var_3FC8]
 * 000000018004D67D: call    sub_1800454BC
 * 000000018004D682: nop
 * 000000018004D683: lea     r8, aPixel_128; "/Pixel"
 * 000000018004D68A: mov     rdx, rax
 * 000000018004D68D: lea     rcx, [rbp+9E20h+var_3FE8]
 * 000000018004D694: call    sub_18002C088
 * 000000018004D699: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D69E: mov     rcx, rax
 * 000000018004D6A1: call    sub_1800D46B4
 * 000000018004D6A6: mov     cs:byte_18026A45C, al
 * 000000018004D6AC: lea     rcx, [rbp+9E20h+var_3FC8]; void *
 * 000000018004D6B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D6B8: nop
 * 000000018004D6B9: lea     rcx, [rbp+9E20h+var_3FA8]; void *
 * 000000018004D6C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D6C5: nop
 * 000000018004D6C6: lea     rcx, dword_18026A460
 * 000000018004D6CD: call    _Init_thread_footer
 * 000000018004D6D2: mov     rax, [rdi+rbx*8]
 * 000000018004D6D6: mov     eax, [r15+rax]
 * 000000018004D6DA: cmp     cs:dword_18026A468, eax
 * 000000018004D6E0: jle     loc_18004D7CA
 * 000000018004D6E6: lea     rcx, dword_18026A468
 * 000000018004D6ED: call    _Init_thread_header
 * 000000018004D6F2: cmp     cs:dword_18026A468, r14d
 * 000000018004D6F9: jnz     loc_18004D7CA
 * 000000018004D6FF: lea     rax, unk_180187680
 * 000000018004D706: mov     qword ptr [rbp+9E20h+var_96A0], rax
 * 000000018004D70D: lea     rax, unk_18018DF88
 * 000000018004D714: mov     qword ptr [rbp+9E20h+var_96A0+8], rax
 * 000000018004D71B: movups  xmm0, [rbp+9E20h+var_96A0]
 * 000000018004D722: movups  [rbp+9E20h+var_79B8], xmm0
 * 000000018004D729: mov     dword ptr [rbp+9E20h+var_79A8], r13d
 * 000000018004D730: mov     dword ptr [rbp+9E20h+var_79A8+4], esi
 * 000000018004D736: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D73B: movups  xmm0, [rbp+9E20h+var_79A8]
 * 000000018004D742: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D747: call    sub_1800456E0
 * 000000018004D74C: mov     r8, rax
 * 000000018004D74F: mov     r9d, r12d
 * 000000018004D752: mov     edx, 1D2h
 * 000000018004D757: lea     rcx, [rbp+9E20h+var_3F48]; Src
 * 000000018004D75E: call    sub_1800D45C8
 * 000000018004D763: nop
 * 000000018004D764: mov     r8, rax
 * 000000018004D767: lea     rdx, aStandardshader_131; "StandardShader/ShaderModel40/"
 * 000000018004D76E: lea     rcx, [rbp+9E20h+var_3F68]
 * 000000018004D775: call    sub_1800454BC
 * 000000018004D77A: nop
 * 000000018004D77B: lea     r8, aPixel_129; "/Pixel"
 * 000000018004D782: mov     rdx, rax
 * 000000018004D785: lea     rcx, [rbp+9E20h+var_3F88]
 * 000000018004D78C: call    sub_18002C088
 * 000000018004D791: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D796: mov     rcx, rax
 * 000000018004D799: call    sub_1800D46B4
 * 000000018004D79E: mov     cs:byte_18026A464, al
 * 000000018004D7A4: lea     rcx, [rbp+9E20h+var_3F68]; void *
 * 000000018004D7AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D7B0: nop
 * 000000018004D7B1: lea     rcx, [rbp+9E20h+var_3F48]; void *
 * 000000018004D7B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D7BD: nop
 * 000000018004D7BE: lea     rcx, dword_18026A468
 * 000000018004D7C5: call    _Init_thread_footer
 * 000000018004D7CA: mov     rax, [rdi+rbx*8]
 * 000000018004D7CE: mov     eax, [r15+rax]
 * 000000018004D7D2: cmp     cs:dword_18026A470, eax
 * 000000018004D7D8: jle     loc_18004D8C2
 * 000000018004D7DE: lea     rcx, dword_18026A470
 * 000000018004D7E5: call    _Init_thread_header
 * 000000018004D7EA: cmp     cs:dword_18026A470, r14d
 * 000000018004D7F1: jnz     loc_18004D8C2
 * 000000018004D7F7: lea     rax, unk_1801915B0
 * 000000018004D7FE: mov     qword ptr [rbp+9E20h+var_9690], rax
 * 000000018004D805: lea     rax, unk_18019806C
 * 000000018004D80C: mov     qword ptr [rbp+9E20h+var_9690+8], rax
 * 000000018004D813: movups  xmm0, [rbp+9E20h+var_9690]
 * 000000018004D81A: movups  [rbp+9E20h+var_7998], xmm0
 * 000000018004D821: mov     dword ptr [rbp+9E20h+var_7988], r13d
 * 000000018004D828: mov     dword ptr [rbp+9E20h+var_7988+4], esi
 * 000000018004D82E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D833: movups  xmm0, [rbp+9E20h+var_7988]
 * 000000018004D83A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D83F: call    sub_1800456E0
 * 000000018004D844: mov     r8, rax
 * 000000018004D847: mov     r9d, r12d
 * 000000018004D84A: mov     edx, 1D8h
 * 000000018004D84F: lea     rcx, [rbp+9E20h+var_3EE8]; Src
 * 000000018004D856: call    sub_1800D45C8
 * 000000018004D85B: nop
 * 000000018004D85C: mov     r8, rax
 * 000000018004D85F: lea     rdx, aStandardshader_132; "StandardShader/ShaderModel40/"
 * 000000018004D866: lea     rcx, [rbp+9E20h+var_3F08]
 * 000000018004D86D: call    sub_1800454BC
 * 000000018004D872: nop
 * 000000018004D873: lea     r8, aPixel_130; "/Pixel"
 * 000000018004D87A: mov     rdx, rax
 * 000000018004D87D: lea     rcx, [rbp+9E20h+var_3F28]
 * 000000018004D884: call    sub_18002C088
 * 000000018004D889: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D88E: mov     rcx, rax
 * 000000018004D891: call    sub_1800D46B4
 * 000000018004D896: mov     cs:byte_18026A46C, al
 * 000000018004D89C: lea     rcx, [rbp+9E20h+var_3F08]; void *
 * 000000018004D8A3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D8A8: nop
 * 000000018004D8A9: lea     rcx, [rbp+9E20h+var_3EE8]; void *
 * 000000018004D8B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D8B5: nop
 * 000000018004D8B6: lea     rcx, dword_18026A470
 * 000000018004D8BD: call    _Init_thread_footer
 * 000000018004D8C2: mov     rax, [rdi+rbx*8]
 * 000000018004D8C6: mov     eax, [r15+rax]
 * 000000018004D8CA: cmp     cs:dword_18026A478, eax
 * 000000018004D8D0: jle     loc_18004D9BA
 * 000000018004D8D6: lea     rcx, dword_18026A478
 * 000000018004D8DD: call    _Init_thread_header
 * 000000018004D8E2: cmp     cs:dword_18026A478, r14d
 * 000000018004D8E9: jnz     loc_18004D9BA
 * 000000018004D8EF: lea     rax, unk_1801915B0
 * 000000018004D8F6: mov     qword ptr [rbp+9E20h+var_9680], rax
 * 000000018004D8FD: lea     rax, unk_18019806C
 * 000000018004D904: mov     qword ptr [rbp+9E20h+var_9680+8], rax
 * 000000018004D90B: movups  xmm0, [rbp+9E20h+var_9680]
 * 000000018004D912: movups  [rbp+9E20h+var_7978], xmm0
 * 000000018004D919: mov     dword ptr [rbp+9E20h+var_7968], r13d
 * 000000018004D920: mov     dword ptr [rbp+9E20h+var_7968+4], esi
 * 000000018004D926: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004D92B: movups  xmm0, [rbp+9E20h+var_7968]
 * 000000018004D932: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004D937: call    sub_1800456E0
 * 000000018004D93C: mov     r8, rax
 * 000000018004D93F: mov     r9d, r12d
 * 000000018004D942: mov     edx, 1DAh
 * 000000018004D947: lea     rcx, [rbp+9E20h+var_3E88]; Src
 * 000000018004D94E: call    sub_1800D45C8
 * 000000018004D953: nop
 * 000000018004D954: mov     r8, rax
 * 000000018004D957: lea     rdx, aStandardshader_133; "StandardShader/ShaderModel40/"
 * 000000018004D95E: lea     rcx, [rbp+9E20h+var_3EA8]
 * 000000018004D965: call    sub_1800454BC
 * 000000018004D96A: nop
 * 000000018004D96B: lea     r8, aPixel_131; "/Pixel"
 * 000000018004D972: mov     rdx, rax
 * 000000018004D975: lea     rcx, [rbp+9E20h+var_3EC8]
 * 000000018004D97C: call    sub_18002C088
 * 000000018004D981: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004D986: mov     rcx, rax
 * 000000018004D989: call    sub_1800D46B4
 * 000000018004D98E: mov     cs:byte_18026A474, al
 * 000000018004D994: lea     rcx, [rbp+9E20h+var_3EA8]; void *
 * 000000018004D99B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D9A0: nop
 * 000000018004D9A1: lea     rcx, [rbp+9E20h+var_3E88]; void *
 * 000000018004D9A8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D9AD: nop
 * 000000018004D9AE: lea     rcx, dword_18026A478
 * 000000018004D9B5: call    _Init_thread_footer
 * 000000018004D9BA: mov     rax, [rdi+rbx*8]
 * 000000018004D9BE: mov     eax, [r15+rax]
 * 000000018004D9C2: cmp     cs:dword_18026A480, eax
 * 000000018004D9C8: jle     loc_18004DAB2
 * 000000018004D9CE: lea     rcx, dword_18026A480
 * 000000018004D9D5: call    _Init_thread_header
 * 000000018004D9DA: cmp     cs:dword_18026A480, r14d
 * 000000018004D9E1: jnz     loc_18004DAB2
 * 000000018004D9E7: lea     rax, unk_1801771B0
 * 000000018004D9EE: mov     qword ptr [rbp+9E20h+var_9670], rax
 * 000000018004D9F5: lea     rax, unk_18017D8DC
 * 000000018004D9FC: mov     qword ptr [rbp+9E20h+var_9670+8], rax
 * 000000018004DA03: movups  xmm0, [rbp+9E20h+var_9670]
 * 000000018004DA0A: movups  [rbp+9E20h+var_7958], xmm0
 * 000000018004DA11: mov     dword ptr [rbp+9E20h+var_7948], r13d
 * 000000018004DA18: mov     dword ptr [rbp+9E20h+var_7948+4], esi
 * 000000018004DA1E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DA23: movups  xmm0, [rbp+9E20h+var_7948]
 * 000000018004DA2A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DA2F: call    sub_1800456E0
 * 000000018004DA34: mov     r8, rax
 * 000000018004DA37: mov     r9d, r12d
 * 000000018004DA3A: mov     edx, 1E0h
 * 000000018004DA3F: lea     rcx, [rbp+9E20h+var_3E28]; Src
 * 000000018004DA46: call    sub_1800D45C8
 * 000000018004DA4B: nop
 * 000000018004DA4C: mov     r8, rax
 * 000000018004DA4F: lea     rdx, aStandardshader_134; "StandardShader/ShaderModel40/"
 * 000000018004DA56: lea     rcx, [rbp+9E20h+var_3E48]
 * 000000018004DA5D: call    sub_1800454BC
 * 000000018004DA62: nop
 * 000000018004DA63: lea     r8, aPixel_132; "/Pixel"
 * 000000018004DA6A: mov     rdx, rax
 * 000000018004DA6D: lea     rcx, [rbp+9E20h+var_3E68]
 * 000000018004DA74: call    sub_18002C088
 * 000000018004DA79: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DA7E: mov     rcx, rax
 * 000000018004DA81: call    sub_1800D46B4
 * 000000018004DA86: mov     cs:byte_18026A47C, al
 * 000000018004DA8C: lea     rcx, [rbp+9E20h+var_3E48]; void *
 * 000000018004DA93: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DA98: nop
 * 000000018004DA99: lea     rcx, [rbp+9E20h+var_3E28]; void *
 * 000000018004DAA0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DAA5: nop
 * 000000018004DAA6: lea     rcx, dword_18026A480
 * 000000018004DAAD: call    _Init_thread_footer
 * 000000018004DAB2: mov     rax, [rdi+rbx*8]
 * 000000018004DAB6: mov     eax, [r15+rax]
 * 000000018004DABA: cmp     cs:dword_18026A488, eax
 * 000000018004DAC0: jle     loc_18004DBAA
 * 000000018004DAC6: lea     rcx, dword_18026A488
 * 000000018004DACD: call    _Init_thread_header
 * 000000018004DAD2: cmp     cs:dword_18026A488, r14d
 * 000000018004DAD9: jnz     loc_18004DBAA
 * 000000018004DADF: lea     rax, unk_1801771B0
 * 000000018004DAE6: mov     qword ptr [rbp+9E20h+var_9660], rax
 * 000000018004DAED: lea     rax, unk_18017D8DC
 * 000000018004DAF4: mov     qword ptr [rbp+9E20h+var_9660+8], rax
 * 000000018004DAFB: movups  xmm0, [rbp+9E20h+var_9660]
 * 000000018004DB02: movups  [rbp+9E20h+var_7938], xmm0
 * 000000018004DB09: mov     dword ptr [rbp+9E20h+var_7928], r13d
 * 000000018004DB10: mov     dword ptr [rbp+9E20h+var_7928+4], esi
 * 000000018004DB16: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DB1B: movups  xmm0, [rbp+9E20h+var_7928]
 * 000000018004DB22: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DB27: call    sub_1800456E0
 * 000000018004DB2C: mov     r8, rax
 * 000000018004DB2F: mov     r9d, r12d
 * 000000018004DB32: mov     edx, 1E2h
 * 000000018004DB37: lea     rcx, [rbp+9E20h+var_3DC8]; Src
 * 000000018004DB3E: call    sub_1800D45C8
 * 000000018004DB43: nop
 * 000000018004DB44: mov     r8, rax
 * 000000018004DB47: lea     rdx, aStandardshader_135; "StandardShader/ShaderModel40/"
 * 000000018004DB4E: lea     rcx, [rbp+9E20h+var_3DE8]
 * 000000018004DB55: call    sub_1800454BC
 * 000000018004DB5A: nop
 * 000000018004DB5B: lea     r8, aPixel_133; "/Pixel"
 * 000000018004DB62: mov     rdx, rax
 * 000000018004DB65: lea     rcx, [rbp+9E20h+var_3E08]
 * 000000018004DB6C: call    sub_18002C088
 * 000000018004DB71: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DB76: mov     rcx, rax
 * 000000018004DB79: call    sub_1800D46B4
 * 000000018004DB7E: mov     cs:byte_18026A484, al
 * 000000018004DB84: lea     rcx, [rbp+9E20h+var_3DE8]; void *
 * 000000018004DB8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DB90: nop
 * 000000018004DB91: lea     rcx, [rbp+9E20h+var_3DC8]; void *
 * 000000018004DB98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DB9D: nop
 * 000000018004DB9E: lea     rcx, dword_18026A488
 * 000000018004DBA5: call    _Init_thread_footer
 * 000000018004DBAA: mov     rax, [rdi+rbx*8]
 * 000000018004DBAE: mov     eax, [r15+rax]
 * 000000018004DBB2: cmp     cs:dword_18026A490, eax
 * 000000018004DBB8: jle     loc_18004DCA2
 * 000000018004DBBE: lea     rcx, dword_18026A490
 * 000000018004DBC5: call    _Init_thread_header
 * 000000018004DBCA: cmp     cs:dword_18026A490, r14d
 * 000000018004DBD1: jnz     loc_18004DCA2
 * 000000018004DBD7: lea     rax, unk_180180DC0
 * 000000018004DBDE: mov     qword ptr [rbp+9E20h+var_9650], rax
 * 000000018004DBE5: lea     rax, unk_18018767C
 * 000000018004DBEC: mov     qword ptr [rbp+9E20h+var_9650+8], rax
 * 000000018004DBF3: movups  xmm0, [rbp+9E20h+var_9650]
 * 000000018004DBFA: movups  [rbp+9E20h+var_7918], xmm0
 * 000000018004DC01: mov     dword ptr [rbp+9E20h+var_7908], r13d
 * 000000018004DC08: mov     dword ptr [rbp+9E20h+var_7908+4], esi
 * 000000018004DC0E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DC13: movups  xmm0, [rbp+9E20h+var_7908]
 * 000000018004DC1A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DC1F: call    sub_1800456E0
 * 000000018004DC24: mov     r8, rax
 * 000000018004DC27: mov     r9d, r12d
 * 000000018004DC2A: mov     edx, 1E8h
 * 000000018004DC2F: lea     rcx, [rbp+9E20h+var_3D68]; Src
 * 000000018004DC36: call    sub_1800D45C8
 * 000000018004DC3B: nop
 * 000000018004DC3C: mov     r8, rax
 * 000000018004DC3F: lea     rdx, aStandardshader_136; "StandardShader/ShaderModel40/"
 * 000000018004DC46: lea     rcx, [rbp+9E20h+var_3D88]
 * 000000018004DC4D: call    sub_1800454BC
 * 000000018004DC52: nop
 * 000000018004DC53: lea     r8, aPixel_134; "/Pixel"
 * 000000018004DC5A: mov     rdx, rax
 * 000000018004DC5D: lea     rcx, [rbp+9E20h+var_3DA8]
 * 000000018004DC64: call    sub_18002C088
 * 000000018004DC69: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DC6E: mov     rcx, rax
 * 000000018004DC71: call    sub_1800D46B4
 * 000000018004DC76: mov     cs:byte_18026A48C, al
 * 000000018004DC7C: lea     rcx, [rbp+9E20h+var_3D88]; void *
 * 000000018004DC83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DC88: nop
 * 000000018004DC89: lea     rcx, [rbp+9E20h+var_3D68]; void *
 * 000000018004DC90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DC95: nop
 * 000000018004DC96: lea     rcx, dword_18026A490
 * 000000018004DC9D: call    _Init_thread_footer
 * 000000018004DCA2: mov     rax, [rdi+rbx*8]
 * 000000018004DCA6: mov     eax, [r15+rax]
 * 000000018004DCAA: cmp     cs:dword_18026A498, eax
 * 000000018004DCB0: jle     loc_18004DD9A
 * 000000018004DCB6: lea     rcx, dword_18026A498
 * 000000018004DCBD: call    _Init_thread_header
 * 000000018004DCC2: cmp     cs:dword_18026A498, r14d
 * 000000018004DCC9: jnz     loc_18004DD9A
 * 000000018004DCCF: lea     rax, unk_180180DC0
 * 000000018004DCD6: mov     qword ptr [rbp+9E20h+var_9640], rax
 * 000000018004DCDD: lea     rax, unk_18018767C
 * 000000018004DCE4: mov     qword ptr [rbp+9E20h+var_9640+8], rax
 * 000000018004DCEB: movups  xmm0, [rbp+9E20h+var_9640]
 * 000000018004DCF2: movups  [rbp+9E20h+var_78F8], xmm0
 * 000000018004DCF9: mov     dword ptr [rbp+9E20h+var_78E8], r13d
 * 000000018004DD00: mov     dword ptr [rbp+9E20h+var_78E8+4], esi
 * 000000018004DD06: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DD0B: movups  xmm0, [rbp+9E20h+var_78E8]
 * 000000018004DD12: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DD17: call    sub_1800456E0
 * 000000018004DD1C: mov     r8, rax
 * 000000018004DD1F: mov     r9d, r12d
 * 000000018004DD22: mov     edx, 1EAh
 * 000000018004DD27: lea     rcx, [rbp+9E20h+var_3D08]; Src
 * 000000018004DD2E: call    sub_1800D45C8
 * 000000018004DD33: nop
 * 000000018004DD34: mov     r8, rax
 * 000000018004DD37: lea     rdx, aStandardshader_137; "StandardShader/ShaderModel40/"
 * 000000018004DD3E: lea     rcx, [rbp+9E20h+var_3D28]
 * 000000018004DD45: call    sub_1800454BC
 * 000000018004DD4A: nop
 * 000000018004DD4B: lea     r8, aPixel_135; "/Pixel"
 * 000000018004DD52: mov     rdx, rax
 * 000000018004DD55: lea     rcx, [rbp+9E20h+var_3D48]
 * 000000018004DD5C: call    sub_18002C088
 * 000000018004DD61: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DD66: mov     rcx, rax
 * 000000018004DD69: call    sub_1800D46B4
 * 000000018004DD6E: mov     cs:byte_18026A494, al
 * 000000018004DD74: lea     rcx, [rbp+9E20h+var_3D28]; void *
 * 000000018004DD7B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DD80: nop
 * 000000018004DD81: lea     rcx, [rbp+9E20h+var_3D08]; void *
 * 000000018004DD88: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DD8D: nop
 * 000000018004DD8E: lea     rcx, dword_18026A498
 * 000000018004DD95: call    _Init_thread_footer
 * 000000018004DD9A: mov     rax, [rdi+rbx*8]
 * 000000018004DD9E: mov     eax, [r15+rax]
 * 000000018004DDA2: cmp     cs:dword_18026A4A0, eax
 * 000000018004DDA8: jle     loc_18004DE92
 * 000000018004DDAE: lea     rcx, dword_18026A4A0
 * 000000018004DDB5: call    _Init_thread_header
 * 000000018004DDBA: cmp     cs:dword_18026A4A0, r14d
 * 000000018004DDC1: jnz     loc_18004DE92
 * 000000018004DDC7: lea     rax, unk_180187680
 * 000000018004DDCE: mov     qword ptr [rbp+9E20h+var_9630], rax
 * 000000018004DDD5: lea     rax, unk_18018DF88
 * 000000018004DDDC: mov     qword ptr [rbp+9E20h+var_9630+8], rax
 * 000000018004DDE3: movups  xmm0, [rbp+9E20h+var_9630]
 * 000000018004DDEA: movups  [rbp+9E20h+var_78D8], xmm0
 * 000000018004DDF1: mov     dword ptr [rbp+9E20h+var_78C8], r13d
 * 000000018004DDF8: mov     dword ptr [rbp+9E20h+var_78C8+4], esi
 * 000000018004DDFE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DE03: movups  xmm0, [rbp+9E20h+var_78C8]
 * 000000018004DE0A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DE0F: call    sub_1800456E0
 * 000000018004DE14: mov     r8, rax
 * 000000018004DE17: mov     r9d, r12d
 * 000000018004DE1A: mov     edx, 1F0h
 * 000000018004DE1F: lea     rcx, [rbp+9E20h+var_3CA8]; Src
 * 000000018004DE26: call    sub_1800D45C8
 * 000000018004DE2B: nop
 * 000000018004DE2C: mov     r8, rax
 * 000000018004DE2F: lea     rdx, aStandardshader_138; "StandardShader/ShaderModel40/"
 * 000000018004DE36: lea     rcx, [rbp+9E20h+var_3CC8]
 * 000000018004DE3D: call    sub_1800454BC
 * 000000018004DE42: nop
 * 000000018004DE43: lea     r8, aPixel_136; "/Pixel"
 * 000000018004DE4A: mov     rdx, rax
 * 000000018004DE4D: lea     rcx, [rbp+9E20h+var_3CE8]
 * 000000018004DE54: call    sub_18002C088
 * 000000018004DE59: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DE5E: mov     rcx, rax
 * 000000018004DE61: call    sub_1800D46B4
 * 000000018004DE66: mov     cs:byte_18026A49C, al
 * 000000018004DE6C: lea     rcx, [rbp+9E20h+var_3CC8]; void *
 * 000000018004DE73: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DE78: nop
 * 000000018004DE79: lea     rcx, [rbp+9E20h+var_3CA8]; void *
 * 000000018004DE80: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DE85: nop
 * 000000018004DE86: lea     rcx, dword_18026A4A0
 * 000000018004DE8D: call    _Init_thread_footer
 * 000000018004DE92: mov     rax, [rdi+rbx*8]
 * 000000018004DE96: mov     eax, [r15+rax]
 * 000000018004DE9A: cmp     cs:dword_18026A4A8, eax
 * 000000018004DEA0: jle     loc_18004DF8A
 * 000000018004DEA6: lea     rcx, dword_18026A4A8
 * 000000018004DEAD: call    _Init_thread_header
 * 000000018004DEB2: cmp     cs:dword_18026A4A8, r14d
 * 000000018004DEB9: jnz     loc_18004DF8A
 * 000000018004DEBF: lea     rax, unk_180187680
 * 000000018004DEC6: mov     qword ptr [rbp+9E20h+var_9620], rax
 * 000000018004DECD: lea     rax, unk_18018DF88
 * 000000018004DED4: mov     qword ptr [rbp+9E20h+var_9620+8], rax
 * 000000018004DEDB: movups  xmm0, [rbp+9E20h+var_9620]
 * 000000018004DEE2: movups  [rbp+9E20h+var_78B8], xmm0
 * 000000018004DEE9: mov     dword ptr [rbp+9E20h+var_78A8], r13d
 * 000000018004DEF0: mov     dword ptr [rbp+9E20h+var_78A8+4], esi
 * 000000018004DEF6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DEFB: movups  xmm0, [rbp+9E20h+var_78A8]
 * 000000018004DF02: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DF07: call    sub_1800456E0
 * 000000018004DF0C: mov     r8, rax
 * 000000018004DF0F: mov     r9d, r12d
 * 000000018004DF12: mov     edx, 1F2h
 * 000000018004DF17: lea     rcx, [rbp+9E20h+var_3C48]; Src
 * 000000018004DF1E: call    sub_1800D45C8
 * 000000018004DF23: nop
 * 000000018004DF24: mov     r8, rax
 * 000000018004DF27: lea     rdx, aStandardshader_139; "StandardShader/ShaderModel40/"
 * 000000018004DF2E: lea     rcx, [rbp+9E20h+var_3C68]
 * 000000018004DF35: call    sub_1800454BC
 * 000000018004DF3A: nop
 * 000000018004DF3B: lea     r8, aPixel_137; "/Pixel"
 * 000000018004DF42: mov     rdx, rax
 * 000000018004DF45: lea     rcx, [rbp+9E20h+var_3C88]
 * 000000018004DF4C: call    sub_18002C088
 * 000000018004DF51: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004DF56: mov     rcx, rax
 * 000000018004DF59: call    sub_1800D46B4
 * 000000018004DF5E: mov     cs:byte_18026A4A4, al
 * 000000018004DF64: lea     rcx, [rbp+9E20h+var_3C68]; void *
 * 000000018004DF6B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DF70: nop
 * 000000018004DF71: lea     rcx, [rbp+9E20h+var_3C48]; void *
 * 000000018004DF78: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DF7D: nop
 * 000000018004DF7E: lea     rcx, dword_18026A4A8
 * 000000018004DF85: call    _Init_thread_footer
 * 000000018004DF8A: mov     rax, [rdi+rbx*8]
 * 000000018004DF8E: mov     eax, [r15+rax]
 * 000000018004DF92: cmp     cs:dword_18026A4B0, eax
 * 000000018004DF98: jle     loc_18004E082
 * 000000018004DF9E: lea     rcx, dword_18026A4B0
 * 000000018004DFA5: call    _Init_thread_header
 * 000000018004DFAA: cmp     cs:dword_18026A4B0, r14d
 * 000000018004DFB1: jnz     loc_18004E082
 * 000000018004DFB7: lea     rax, unk_1801915B0
 * 000000018004DFBE: mov     qword ptr [rbp+9E20h+var_9610], rax
 * 000000018004DFC5: lea     rax, unk_18019806C
 * 000000018004DFCC: mov     qword ptr [rbp+9E20h+var_9610+8], rax
 * 000000018004DFD3: movups  xmm0, [rbp+9E20h+var_9610]
 * 000000018004DFDA: movups  [rbp+9E20h+var_7898], xmm0
 * 000000018004DFE1: mov     dword ptr [rbp+9E20h+var_7888], r13d
 * 000000018004DFE8: mov     dword ptr [rbp+9E20h+var_7888+4], esi
 * 000000018004DFEE: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004DFF3: movups  xmm0, [rbp+9E20h+var_7888]
 * 000000018004DFFA: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004DFFF: call    sub_1800456E0
 * 000000018004E004: mov     r8, rax
 * 000000018004E007: mov     r9d, r12d
 * 000000018004E00A: mov     edx, 1F8h
 * 000000018004E00F: lea     rcx, [rbp+9E20h+var_3BE8]; Src
 * 000000018004E016: call    sub_1800D45C8
 * 000000018004E01B: nop
 * 000000018004E01C: mov     r8, rax
 * 000000018004E01F: lea     rdx, aStandardshader_140; "StandardShader/ShaderModel40/"
 * 000000018004E026: lea     rcx, [rbp+9E20h+var_3C08]
 * 000000018004E02D: call    sub_1800454BC
 * 000000018004E032: nop
 * 000000018004E033: lea     r8, aPixel_138; "/Pixel"
 * 000000018004E03A: mov     rdx, rax
 * 000000018004E03D: lea     rcx, [rbp+9E20h+var_3C28]
 * 000000018004E044: call    sub_18002C088
 * 000000018004E049: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E04E: mov     rcx, rax
 * 000000018004E051: call    sub_1800D46B4
 * 000000018004E056: mov     cs:byte_18026A4AC, al
 * 000000018004E05C: lea     rcx, [rbp+9E20h+var_3C08]; void *
 * 000000018004E063: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E068: nop
 * 000000018004E069: lea     rcx, [rbp+9E20h+var_3BE8]; void *
 * 000000018004E070: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E075: nop
 * 000000018004E076: lea     rcx, dword_18026A4B0
 * 000000018004E07D: call    _Init_thread_footer
 * 000000018004E082: mov     rax, [rdi+rbx*8]
 * 000000018004E086: mov     eax, [r15+rax]
 * 000000018004E08A: cmp     cs:dword_18026A4B8, eax
 * 000000018004E090: jle     loc_18004E17A
 * 000000018004E096: lea     rcx, dword_18026A4B8
 * 000000018004E09D: call    _Init_thread_header
 * 000000018004E0A2: cmp     cs:dword_18026A4B8, r14d
 * 000000018004E0A9: jnz     loc_18004E17A
 * 000000018004E0AF: lea     rax, unk_1801915B0
 * 000000018004E0B6: mov     qword ptr [rbp+9E20h+var_9600], rax
 * 000000018004E0BD: lea     rax, unk_18019806C
 * 000000018004E0C4: mov     qword ptr [rbp+9E20h+var_9600+8], rax
 * 000000018004E0CB: movups  xmm0, [rbp+9E20h+var_9600]
 * 000000018004E0D2: movups  [rbp+9E20h+var_7878], xmm0
 * 000000018004E0D9: mov     dword ptr [rbp+9E20h+var_7868], r13d
 * 000000018004E0E0: mov     dword ptr [rbp+9E20h+var_7868+4], esi
 * 000000018004E0E6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E0EB: movups  xmm0, [rbp+9E20h+var_7868]
 * 000000018004E0F2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E0F7: call    sub_1800456E0
 * 000000018004E0FC: mov     r8, rax
 * 000000018004E0FF: mov     r9d, r12d
 * 000000018004E102: mov     edx, 1FAh
 * 000000018004E107: lea     rcx, [rbp+9E20h+var_3B88]; Src
 * 000000018004E10E: call    sub_1800D45C8
 * 000000018004E113: nop
 * 000000018004E114: mov     r8, rax
 * 000000018004E117: lea     rdx, aStandardshader_141; "StandardShader/ShaderModel40/"
 * 000000018004E11E: lea     rcx, [rbp+9E20h+var_3BA8]
 * 000000018004E125: call    sub_1800454BC
 * 000000018004E12A: nop
 * 000000018004E12B: lea     r8, aPixel_139; "/Pixel"
 * 000000018004E132: mov     rdx, rax
 * 000000018004E135: lea     rcx, [rbp+9E20h+var_3BC8]
 * 000000018004E13C: call    sub_18002C088
 * 000000018004E141: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E146: mov     rcx, rax
 * 000000018004E149: call    sub_1800D46B4
 * 000000018004E14E: mov     cs:byte_18026A4B4, al
 * 000000018004E154: lea     rcx, [rbp+9E20h+var_3BA8]; void *
 * 000000018004E15B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E160: nop
 * 000000018004E161: lea     rcx, [rbp+9E20h+var_3B88]; void *
 * 000000018004E168: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E16D: nop
 * 000000018004E16E: lea     rcx, dword_18026A4B8
 * 000000018004E175: call    _Init_thread_footer
 * 000000018004E17A: mov     rax, [rdi+rbx*8]
 * 000000018004E17E: mov     eax, [r15+rax]
 * 000000018004E182: cmp     cs:dword_18026A4C0, eax
 * 000000018004E188: jle     loc_18004E26E
 * 000000018004E18E: lea     rcx, dword_18026A4C0
 * 000000018004E195: call    _Init_thread_header
 * 000000018004E19A: cmp     cs:dword_18026A4C0, r14d
 * 000000018004E1A1: jnz     loc_18004E26E
 * 000000018004E1A7: lea     rax, unk_180198070
 * 000000018004E1AE: mov     qword ptr [rbp+9E20h+var_95F0], rax
 * 000000018004E1B5: lea     rax, unk_180199088
 * 000000018004E1BC: mov     qword ptr [rbp+9E20h+var_95F0+8], rax
 * 000000018004E1C3: movups  xmm0, [rbp+9E20h+var_95F0]
 * 000000018004E1CA: movups  [rbp+9E20h+var_7858], xmm0
 * 000000018004E1D1: mov     dword ptr [rbp+9E20h+var_7848], esi
 * 000000018004E1D7: mov     dword ptr [rbp+9E20h+var_7848+4], esi
 * 000000018004E1DD: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E1E2: movups  xmm0, [rbp+9E20h+var_7848]
 * 000000018004E1E9: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E1EE: call    sub_1800456E0
 * 000000018004E1F3: mov     r8, rax
 * 000000018004E1F6: mov     r9d, r12d
 * 000000018004E1F9: xor     edx, edx
 * 000000018004E1FB: lea     rcx, [rbp+9E20h+var_3B28]; Src
 * 000000018004E202: call    sub_1800D45C8
 * 000000018004E207: nop
 * 000000018004E208: mov     r8, rax
 * 000000018004E20B: lea     rdx, aStandardshader_142; "StandardShader/ShaderModel40/"
 * 000000018004E212: lea     rcx, [rbp+9E20h+var_3B48]
 * 000000018004E219: call    sub_1800454BC
 * 000000018004E21E: nop
 * 000000018004E21F: lea     r8, aVertex; "/Vertex"
 * 000000018004E226: mov     rdx, rax
 * 000000018004E229: lea     rcx, [rbp+9E20h+var_3B68]
 * 000000018004E230: call    sub_18002C088
 * 000000018004E235: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E23A: mov     rcx, rax
 * 000000018004E23D: call    sub_1800D46B4
 * 000000018004E242: mov     cs:byte_18026A4BC, al
 * 000000018004E248: lea     rcx, [rbp+9E20h+var_3B48]; void *
 * 000000018004E24F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E254: nop
 * 000000018004E255: lea     rcx, [rbp+9E20h+var_3B28]; void *
 * 000000018004E25C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E261: nop
 * 000000018004E262: lea     rcx, dword_18026A4C0
 * 000000018004E269: call    _Init_thread_footer
 * 000000018004E26E: mov     rax, [rdi+rbx*8]
 * 000000018004E272: mov     eax, [r15+rax]
 * 000000018004E276: cmp     cs:dword_18026A4C8, eax
 * 000000018004E27C: jle     loc_18004E363
 * 000000018004E282: lea     rcx, dword_18026A4C8
 * 000000018004E289: call    _Init_thread_header
 * 000000018004E28E: cmp     cs:dword_18026A4C8, r14d
 * 000000018004E295: jnz     loc_18004E363
 * 000000018004E29B: lea     rax, unk_180199090
 * 000000018004E2A2: mov     qword ptr [rbp+9E20h+var_95E0], rax
 * 000000018004E2A9: lea     rax, unk_180199614
 * 000000018004E2B0: mov     qword ptr [rbp+9E20h+var_95E0+8], rax
 * 000000018004E2B7: movups  xmm0, [rbp+9E20h+var_95E0]
 * 000000018004E2BE: movups  [rbp+9E20h+var_7838], xmm0
 * 000000018004E2C5: mov     dword ptr [rbp+9E20h+var_7828], esi
 * 000000018004E2CB: mov     dword ptr [rbp+9E20h+var_7828+4], esi
 * 000000018004E2D1: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E2D6: movups  xmm0, [rbp+9E20h+var_7828]
 * 000000018004E2DD: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E2E2: call    sub_1800456E0
 * 000000018004E2E7: mov     r8, rax
 * 000000018004E2EA: mov     r9d, r12d
 * 000000018004E2ED: mov     rdx, rsi
 * 000000018004E2F0: lea     rcx, [rbp+9E20h+var_3AC8]; Src
 * 000000018004E2F7: call    sub_1800D45C8
 * 000000018004E2FC: nop
 * 000000018004E2FD: mov     r8, rax
 * 000000018004E300: lea     rdx, aStandardshader_143; "StandardShader/ShaderModel40/"
 * 000000018004E307: lea     rcx, [rbp+9E20h+var_3AE8]
 * 000000018004E30E: call    sub_1800454BC
 * 000000018004E313: nop
 * 000000018004E314: lea     r8, aVertex_0; "/Vertex"
 * 000000018004E31B: mov     rdx, rax
 * 000000018004E31E: lea     rcx, [rbp+9E20h+var_3B08]
 * 000000018004E325: call    sub_18002C088
 * 000000018004E32A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E32F: mov     rcx, rax
 * 000000018004E332: call    sub_1800D46B4
 * 000000018004E337: mov     cs:byte_18026A4C4, al
 * 000000018004E33D: lea     rcx, [rbp+9E20h+var_3AE8]; void *
 * 000000018004E344: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E349: nop
 * 000000018004E34A: lea     rcx, [rbp+9E20h+var_3AC8]; void *
 * 000000018004E351: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E356: nop
 * 000000018004E357: lea     rcx, dword_18026A4C8
 * 000000018004E35E: call    _Init_thread_footer
 * 000000018004E363: mov     rax, [rdi+rbx*8]
 * 000000018004E367: mov     ecx, [r15+rax]
 * 000000018004E36B: cmp     cs:dword_18026A4D0, ecx
 * 000000018004E371: jle     loc_18004E45A
 * 000000018004E377: lea     rcx, dword_18026A4D0
 * 000000018004E37E: call    _Init_thread_header
 * 000000018004E383: cmp     cs:dword_18026A4D0, r14d
 * 000000018004E38A: jnz     loc_18004E45A
 * 000000018004E390: lea     rax, unk_180198070
 * 000000018004E397: mov     qword ptr [rbp+9E20h+var_95D0], rax
 * 000000018004E39E: lea     rax, unk_180199088
 * 000000018004E3A5: mov     qword ptr [rbp+9E20h+var_95D0+8], rax
 * 000000018004E3AC: movups  xmm0, [rbp+9E20h+var_95D0]
 * 000000018004E3B3: movups  [rbp+9E20h+var_7818], xmm0
 * 000000018004E3BA: mov     dword ptr [rbp+9E20h+var_7808], esi
 * 000000018004E3C0: mov     dword ptr [rbp+9E20h+var_7808+4], esi
 * 000000018004E3C6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E3CB: movups  xmm0, [rbp+9E20h+var_7808]
 * 000000018004E3D2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E3D7: call    sub_1800456E0
 * 000000018004E3DC: mov     r8, rax
 * 000000018004E3DF: mov     r9d, r12d
 * 000000018004E3E2: mov     edx, 2
 * 000000018004E3E7: lea     rcx, [rbp+9E20h+var_3A68]; Src
 * 000000018004E3EE: call    sub_1800D45C8
 * 000000018004E3F3: nop
 * 000000018004E3F4: mov     r8, rax
 * 000000018004E3F7: lea     rdx, aStandardshader_144; "StandardShader/ShaderModel40/"
 * 000000018004E3FE: lea     rcx, [rbp+9E20h+var_3A88]
 * 000000018004E405: call    sub_1800454BC
 * 000000018004E40A: nop
 * 000000018004E40B: lea     r8, aVertex_1; "/Vertex"
 * 000000018004E412: mov     rdx, rax
 * 000000018004E415: lea     rcx, [rbp+9E20h+var_3AA8]
 * 000000018004E41C: call    sub_18002C088
 * 000000018004E421: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E426: mov     rcx, rax
 * 000000018004E429: call    sub_1800D46B4
 * 000000018004E42E: mov     cs:byte_18026A4CC, al
 * 000000018004E434: lea     rcx, [rbp+9E20h+var_3A88]; void *
 * 000000018004E43B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E440: nop
 * 000000018004E441: lea     rcx, [rbp+9E20h+var_3A68]; void *
 * 000000018004E448: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E44D: nop
 * 000000018004E44E: lea     rcx, dword_18026A4D0
 * 000000018004E455: call    _Init_thread_footer
 * 000000018004E45A: mov     rax, [rdi+rbx*8]
 * 000000018004E45E: mov     ecx, [r15+rax]
 * 000000018004E462: cmp     cs:dword_18026A4D8, ecx
 * 000000018004E468: jle     loc_18004E551
 * 000000018004E46E: lea     rcx, dword_18026A4D8
 * 000000018004E475: call    _Init_thread_header
 * 000000018004E47A: cmp     cs:dword_18026A4D8, r14d
 * 000000018004E481: jnz     loc_18004E551
 * 000000018004E487: lea     rax, unk_180198070
 * 000000018004E48E: mov     qword ptr [rbp+9E20h+var_95C0], rax
 * 000000018004E495: lea     rax, unk_180199088
 * 000000018004E49C: mov     qword ptr [rbp+9E20h+var_95C0+8], rax
 * 000000018004E4A3: movups  xmm0, [rbp+9E20h+var_95C0]
 * 000000018004E4AA: movups  [rbp+9E20h+var_77F8], xmm0
 * 000000018004E4B1: mov     dword ptr [rbp+9E20h+var_77E8], esi
 * 000000018004E4B7: mov     dword ptr [rbp+9E20h+var_77E8+4], esi
 * 000000018004E4BD: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E4C2: movups  xmm0, [rbp+9E20h+var_77E8]
 * 000000018004E4C9: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E4CE: call    sub_1800456E0
 * 000000018004E4D3: mov     r8, rax
 * 000000018004E4D6: mov     r9d, r12d
 * 000000018004E4D9: mov     edx, 4
 * 000000018004E4DE: lea     rcx, [rbp+9E20h+var_3A08]; Src
 * 000000018004E4E5: call    sub_1800D45C8
 * 000000018004E4EA: nop
 * 000000018004E4EB: mov     r8, rax
 * 000000018004E4EE: lea     rdx, aStandardshader_145; "StandardShader/ShaderModel40/"
 * 000000018004E4F5: lea     rcx, [rbp+9E20h+var_3A28]
 * 000000018004E4FC: call    sub_1800454BC
 * 000000018004E501: nop
 * 000000018004E502: lea     r8, aVertex_2; "/Vertex"
 * 000000018004E509: mov     rdx, rax
 * 000000018004E50C: lea     rcx, [rbp+9E20h+var_3A48]
 * 000000018004E513: call    sub_18002C088
 * 000000018004E518: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E51D: mov     rcx, rax
 * 000000018004E520: call    sub_1800D46B4
 * 000000018004E525: mov     cs:byte_18026A4D4, al
 * 000000018004E52B: lea     rcx, [rbp+9E20h+var_3A28]; void *
 * 000000018004E532: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E537: nop
 * 000000018004E538: lea     rcx, [rbp+9E20h+var_3A08]; void *
 * 000000018004E53F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E544: nop
 * 000000018004E545: lea     rcx, dword_18026A4D8
 * 000000018004E54C: call    _Init_thread_footer
 * 000000018004E551: mov     rax, [rdi+rbx*8]
 * 000000018004E555: mov     ecx, [r15+rax]
 * 000000018004E559: cmp     cs:dword_18026A4E0, ecx
 * 000000018004E55F: jle     loc_18004E646
 * 000000018004E565: lea     rcx, dword_18026A4E0
 * 000000018004E56C: call    _Init_thread_header
 * 000000018004E571: cmp     cs:dword_18026A4E0, r14d
 * 000000018004E578: jnz     loc_18004E646
 * 000000018004E57E: lea     rax, unk_180199090
 * 000000018004E585: mov     qword ptr [rbp+9E20h+var_95B0], rax
 * 000000018004E58C: lea     rax, unk_180199614
 * 000000018004E593: mov     qword ptr [rbp+9E20h+var_95B0+8], rax
 * 000000018004E59A: movups  xmm0, [rbp+9E20h+var_95B0]
 * 000000018004E5A1: movups  [rbp+9E20h+var_77D8], xmm0
 * 000000018004E5A8: mov     dword ptr [rbp+9E20h+var_77C8], esi
 * 000000018004E5AE: mov     dword ptr [rbp+9E20h+var_77C8+4], esi
 * 000000018004E5B4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E5B9: movups  xmm0, [rbp+9E20h+var_77C8]
 * 000000018004E5C0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E5C5: call    sub_1800456E0
 * 000000018004E5CA: mov     r8, rax
 * 000000018004E5CD: mov     r9d, r12d
 * 000000018004E5D0: mov     rdx, r13
 * 000000018004E5D3: lea     rcx, [rbp+9E20h+var_39A8]; Src
 * 000000018004E5DA: call    sub_1800D45C8
 * 000000018004E5DF: nop
 * 000000018004E5E0: mov     r8, rax
 * 000000018004E5E3: lea     rdx, aStandardshader_146; "StandardShader/ShaderModel40/"
 * 000000018004E5EA: lea     rcx, [rbp+9E20h+var_39C8]
 * 000000018004E5F1: call    sub_1800454BC
 * 000000018004E5F6: nop
 * 000000018004E5F7: lea     r8, aVertex_3; "/Vertex"
 * 000000018004E5FE: mov     rdx, rax
 * 000000018004E601: lea     rcx, [rbp+9E20h+var_39E8]
 * 000000018004E608: call    sub_18002C088
 * 000000018004E60D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E612: mov     rcx, rax
 * 000000018004E615: call    sub_1800D46B4
 * 000000018004E61A: mov     cs:byte_18026A4DC, al
 * 000000018004E620: lea     rcx, [rbp+9E20h+var_39C8]; void *
 * 000000018004E627: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E62C: nop
 * 000000018004E62D: lea     rcx, [rbp+9E20h+var_39A8]; void *
 * 000000018004E634: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E639: nop
 * 000000018004E63A: lea     rcx, dword_18026A4E0
 * 000000018004E641: call    _Init_thread_footer
 * 000000018004E646: mov     rax, [rdi+rbx*8]
 * 000000018004E64A: mov     ecx, [r15+rax]
 * 000000018004E64E: cmp     cs:dword_18026A4E8, ecx
 * 000000018004E654: jle     loc_18004E73F
 * 000000018004E65A: lea     rcx, dword_18026A4E8
 * 000000018004E661: call    _Init_thread_header
 * 000000018004E666: cmp     cs:dword_18026A4E8, r14d
 * 000000018004E66D: jnz     loc_18004E73F
 * 000000018004E673: lea     r13, unk_180198070
 * 000000018004E67A: mov     qword ptr [rbp+9E20h+var_95A0], r13
 * 000000018004E681: lea     rax, unk_180199088
 * 000000018004E688: mov     qword ptr [rbp+9E20h+var_95A0+8], rax
 * 000000018004E68F: movups  xmm0, [rbp+9E20h+var_95A0]
 * 000000018004E696: movups  [rbp+9E20h+var_77B8], xmm0
 * 000000018004E69D: mov     dword ptr [rbp+9E20h+var_77A8], esi
 * 000000018004E6A3: mov     dword ptr [rbp+9E20h+var_77A8+4], esi
 * 000000018004E6A9: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E6AE: movups  xmm0, [rbp+9E20h+var_77A8]
 * 000000018004E6B5: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E6BA: call    sub_1800456E0
 * 000000018004E6BF: mov     r8, rax
 * 000000018004E6C2: mov     r9d, r12d
 * 000000018004E6C5: mov     edx, 6
 * 000000018004E6CA: lea     rcx, [rbp+9E20h+var_3948]; Src
 * 000000018004E6D1: call    sub_1800D45C8
 * 000000018004E6D6: nop
 * 000000018004E6D7: mov     r8, rax
 * 000000018004E6DA: lea     rdx, aStandardshader_147; "StandardShader/ShaderModel40/"
 * 000000018004E6E1: lea     rcx, [rbp+9E20h+var_3968]
 * 000000018004E6E8: call    sub_1800454BC
 * 000000018004E6ED: nop
 * 000000018004E6EE: lea     r8, aVertex_4; "/Vertex"
 * 000000018004E6F5: mov     rdx, rax
 * 000000018004E6F8: lea     rcx, [rbp+9E20h+var_3988]
 * 000000018004E6FF: call    sub_18002C088
 * 000000018004E704: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E709: mov     rcx, rax
 * 000000018004E70C: call    sub_1800D46B4
 * 000000018004E711: mov     cs:byte_18026A4E4, al
 * 000000018004E717: lea     rcx, [rbp+9E20h+var_3968]; void *
 * 000000018004E71E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E723: nop
 * 000000018004E724: lea     rcx, [rbp+9E20h+var_3948]; void *
 * 000000018004E72B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E730: nop
 * 000000018004E731: lea     rcx, dword_18026A4E8
 * 000000018004E738: call    _Init_thread_footer
 * 000000018004E73D: jmp     short loc_18004E746
 * 000000018004E73F: lea     r13, unk_180198070
 * 000000018004E746: mov     rax, [rdi+rbx*8]
 * 000000018004E74A: mov     ecx, [r15+rax]
 * 000000018004E74E: cmp     cs:dword_18026A4F0, ecx
 * 000000018004E754: jle     loc_18004E836
 * 000000018004E75A: lea     rcx, dword_18026A4F0
 * 000000018004E761: call    _Init_thread_header
 * 000000018004E766: cmp     cs:dword_18026A4F0, r14d
 * 000000018004E76D: jnz     loc_18004E836
 * 000000018004E773: mov     qword ptr [rbp+9E20h+var_9590], r13
 * 000000018004E77A: lea     rax, unk_180199088
 * 000000018004E781: mov     qword ptr [rbp+9E20h+var_9590+8], rax
 * 000000018004E788: movups  xmm0, [rbp+9E20h+var_9590]
 * 000000018004E78F: movups  [rbp+9E20h+var_7798], xmm0
 * 000000018004E796: mov     dword ptr [rbp+9E20h+var_7788], esi
 * 000000018004E79C: mov     dword ptr [rbp+9E20h+var_7788+4], esi
 * 000000018004E7A2: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E7A7: movups  xmm0, [rbp+9E20h+var_7788]
 * 000000018004E7AE: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E7B3: call    sub_1800456E0
 * 000000018004E7B8: mov     r8, rax
 * 000000018004E7BB: mov     r9d, r12d
 * 000000018004E7BE: mov     edx, 8
 * 000000018004E7C3: lea     rcx, [rbp+9E20h+var_38E8]; Src
 * 000000018004E7CA: call    sub_1800D45C8
 * 000000018004E7CF: nop
 * 000000018004E7D0: mov     r8, rax
 * 000000018004E7D3: lea     rdx, aStandardshader_148; "StandardShader/ShaderModel40/"
 * 000000018004E7DA: lea     rcx, [rbp+9E20h+var_3908]
 * 000000018004E7E1: call    sub_1800454BC
 * 000000018004E7E6: nop
 * 000000018004E7E7: lea     r8, aVertex_5; "/Vertex"
 * 000000018004E7EE: mov     rdx, rax
 * 000000018004E7F1: lea     rcx, [rbp+9E20h+var_3928]
 * 000000018004E7F8: call    sub_18002C088
 * 000000018004E7FD: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E802: mov     rcx, rax
 * 000000018004E805: call    sub_1800D46B4
 * 000000018004E80A: mov     cs:byte_18026A4EC, al
 * 000000018004E810: lea     rcx, [rbp+9E20h+var_3908]; void *
 * 000000018004E817: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E81C: nop
 * 000000018004E81D: lea     rcx, [rbp+9E20h+var_38E8]; void *
 * 000000018004E824: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E829: nop
 * 000000018004E82A: lea     rcx, dword_18026A4F0
 * 000000018004E831: call    _Init_thread_footer
 * 000000018004E836: mov     rax, [rdi+rbx*8]
 * 000000018004E83A: mov     ecx, [r15+rax]
 * 000000018004E83E: cmp     cs:dword_18026A4F8, ecx
 * 000000018004E844: jle     loc_18004E92B
 * 000000018004E84A: lea     rcx, dword_18026A4F8
 * 000000018004E851: call    _Init_thread_header
 * 000000018004E856: cmp     cs:dword_18026A4F8, r14d
 * 000000018004E85D: jnz     loc_18004E92B
 * 000000018004E863: lea     rax, unk_180199620
 * 000000018004E86A: mov     qword ptr [rbp+9E20h+var_9580], rax
 * 000000018004E871: lea     rax, unk_180199D2C
 * 000000018004E878: mov     qword ptr [rbp+9E20h+var_9580+8], rax
 * 000000018004E87F: movups  xmm0, [rbp+9E20h+var_9580]
 * 000000018004E886: movups  [rbp+9E20h+var_7778], xmm0
 * 000000018004E88D: mov     dword ptr [rbp+9E20h+var_7768], esi
 * 000000018004E893: mov     dword ptr [rbp+9E20h+var_7768+4], esi
 * 000000018004E899: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E89E: movups  xmm0, [rbp+9E20h+var_7768]
 * 000000018004E8A5: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E8AA: call    sub_1800456E0
 * 000000018004E8AF: mov     r8, rax
 * 000000018004E8B2: mov     r9d, r12d
 * 000000018004E8B5: mov     rdx, r12
 * 000000018004E8B8: lea     rcx, [rbp+9E20h+var_3888]; Src
 * 000000018004E8BF: call    sub_1800D45C8
 * 000000018004E8C4: nop
 * 000000018004E8C5: mov     r8, rax
 * 000000018004E8C8: lea     rdx, aStandardshader_149; "StandardShader/ShaderModel40/"
 * 000000018004E8CF: lea     rcx, [rbp+9E20h+var_38A8]
 * 000000018004E8D6: call    sub_1800454BC
 * 000000018004E8DB: nop
 * 000000018004E8DC: lea     r8, aVertex_6; "/Vertex"
 * 000000018004E8E3: mov     rdx, rax
 * 000000018004E8E6: lea     rcx, [rbp+9E20h+var_38C8]
 * 000000018004E8ED: call    sub_18002C088
 * 000000018004E8F2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E8F7: mov     rcx, rax
 * 000000018004E8FA: call    sub_1800D46B4
 * 000000018004E8FF: mov     cs:byte_18026A4F4, al
 * 000000018004E905: lea     rcx, [rbp+9E20h+var_38A8]; void *
 * 000000018004E90C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E911: nop
 * 000000018004E912: lea     rcx, [rbp+9E20h+var_3888]; void *
 * 000000018004E919: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E91E: nop
 * 000000018004E91F: lea     rcx, dword_18026A4F8
 * 000000018004E926: call    _Init_thread_footer
 * 000000018004E92B: mov     rax, [rdi+rbx*8]
 * 000000018004E92F: mov     ecx, [r15+rax]
 * 000000018004E933: cmp     cs:dword_18026A500, ecx
 * 000000018004E939: jle     loc_18004EA1B
 * 000000018004E93F: lea     rcx, dword_18026A500
 * 000000018004E946: call    _Init_thread_header
 * 000000018004E94B: cmp     cs:dword_18026A500, r14d
 * 000000018004E952: jnz     loc_18004EA1B
 * 000000018004E958: mov     qword ptr [rbp+9E20h+var_9570], r13
 * 000000018004E95F: lea     rax, unk_180199088
 * 000000018004E966: mov     qword ptr [rbp+9E20h+var_9570+8], rax
 * 000000018004E96D: movups  xmm0, [rbp+9E20h+var_9570]
 * 000000018004E974: movups  [rbp+9E20h+var_7758], xmm0
 * 000000018004E97B: mov     dword ptr [rbp+9E20h+var_7748], esi
 * 000000018004E981: mov     dword ptr [rbp+9E20h+var_7748+4], esi
 * 000000018004E987: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004E98C: movups  xmm0, [rbp+9E20h+var_7748]
 * 000000018004E993: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004E998: call    sub_1800456E0
 * 000000018004E99D: mov     r8, rax
 * 000000018004E9A0: mov     r9d, r12d
 * 000000018004E9A3: mov     edx, 0Ah
 * 000000018004E9A8: lea     rcx, [rbp+9E20h+var_3828]; Src
 * 000000018004E9AF: call    sub_1800D45C8
 * 000000018004E9B4: nop
 * 000000018004E9B5: mov     r8, rax
 * 000000018004E9B8: lea     rdx, aStandardshader_150; "StandardShader/ShaderModel40/"
 * 000000018004E9BF: lea     rcx, [rbp+9E20h+var_3848]
 * 000000018004E9C6: call    sub_1800454BC
 * 000000018004E9CB: nop
 * 000000018004E9CC: lea     r8, aVertex_7; "/Vertex"
 * 000000018004E9D3: mov     rdx, rax
 * 000000018004E9D6: lea     rcx, [rbp+9E20h+var_3868]
 * 000000018004E9DD: call    sub_18002C088
 * 000000018004E9E2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004E9E7: mov     rcx, rax
 * 000000018004E9EA: call    sub_1800D46B4
 * 000000018004E9EF: mov     cs:byte_18026A4FC, al
 * 000000018004E9F5: lea     rcx, [rbp+9E20h+var_3848]; void *
 * 000000018004E9FC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EA01: nop
 * 000000018004EA02: lea     rcx, [rbp+9E20h+var_3828]; void *
 * 000000018004EA09: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EA0E: nop
 * 000000018004EA0F: lea     rcx, dword_18026A500
 * 000000018004EA16: call    _Init_thread_footer
 * 000000018004EA1B: mov     rax, [rdi+rbx*8]
 * 000000018004EA1F: mov     ecx, [r15+rax]
 * 000000018004EA23: cmp     cs:dword_18026A508, ecx
 * 000000018004EA29: jle     loc_18004EB0B
 * 000000018004EA2F: lea     rcx, dword_18026A508
 * 000000018004EA36: call    _Init_thread_header
 * 000000018004EA3B: cmp     cs:dword_18026A508, r14d
 * 000000018004EA42: jnz     loc_18004EB0B
 * 000000018004EA48: mov     qword ptr [rbp+9E20h+var_9560], r13
 * 000000018004EA4F: lea     rax, unk_180199088
 * 000000018004EA56: mov     qword ptr [rbp+9E20h+var_9560+8], rax
 * 000000018004EA5D: movups  xmm0, [rbp+9E20h+var_9560]
 * 000000018004EA64: movups  [rbp+9E20h+var_7738], xmm0
 * 000000018004EA6B: mov     dword ptr [rbp+9E20h+var_7728], esi
 * 000000018004EA71: mov     dword ptr [rbp+9E20h+var_7728+4], esi
 * 000000018004EA77: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EA7C: movups  xmm0, [rbp+9E20h+var_7728]
 * 000000018004EA83: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EA88: call    sub_1800456E0
 * 000000018004EA8D: mov     r8, rax
 * 000000018004EA90: mov     r9d, r12d
 * 000000018004EA93: mov     edx, 10h
 * 000000018004EA98: lea     rcx, [rbp+9E20h+var_37C8]; Src
 * 000000018004EA9F: call    sub_1800D45C8
 * 000000018004EAA4: nop
 * 000000018004EAA5: mov     r8, rax
 * 000000018004EAA8: lea     rdx, aStandardshader_151; "StandardShader/ShaderModel40/"
 * 000000018004EAAF: lea     rcx, [rbp+9E20h+var_37E8]
 * 000000018004EAB6: call    sub_1800454BC
 * 000000018004EABB: nop
 * 000000018004EABC: lea     r8, aVertex_8; "/Vertex"
 * 000000018004EAC3: mov     rdx, rax
 * 000000018004EAC6: lea     rcx, [rbp+9E20h+var_3808]
 * 000000018004EACD: call    sub_18002C088
 * 000000018004EAD2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EAD7: mov     rcx, rax
 * 000000018004EADA: call    sub_1800D46B4
 * 000000018004EADF: mov     cs:byte_18026A504, al
 * 000000018004EAE5: lea     rcx, [rbp+9E20h+var_37E8]; void *
 * 000000018004EAEC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EAF1: nop
 * 000000018004EAF2: lea     rcx, [rbp+9E20h+var_37C8]; void *
 * 000000018004EAF9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EAFE: nop
 * 000000018004EAFF: lea     rcx, dword_18026A508
 * 000000018004EB06: call    _Init_thread_footer
 * 000000018004EB0B: mov     rax, [rdi+rbx*8]
 * 000000018004EB0F: mov     ecx, [r15+rax]
 * 000000018004EB13: cmp     cs:dword_18026A510, ecx
 * 000000018004EB19: jle     loc_18004EBFB
 * 000000018004EB1F: lea     rcx, dword_18026A510
 * 000000018004EB26: call    _Init_thread_header
 * 000000018004EB2B: cmp     cs:dword_18026A510, r14d
 * 000000018004EB32: jnz     loc_18004EBFB
 * 000000018004EB38: mov     qword ptr [rbp+9E20h+var_9550], r13
 * 000000018004EB3F: lea     rax, unk_180199088
 * 000000018004EB46: mov     qword ptr [rbp+9E20h+var_9550+8], rax
 * 000000018004EB4D: movups  xmm0, [rbp+9E20h+var_9550]
 * 000000018004EB54: movups  [rbp+9E20h+var_7718], xmm0
 * 000000018004EB5B: mov     dword ptr [rbp+9E20h+var_7708], esi
 * 000000018004EB61: mov     dword ptr [rbp+9E20h+var_7708+4], esi
 * 000000018004EB67: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EB6C: movups  xmm0, [rbp+9E20h+var_7708]
 * 000000018004EB73: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EB78: call    sub_1800456E0
 * 000000018004EB7D: mov     r8, rax
 * 000000018004EB80: mov     r9d, r12d
 * 000000018004EB83: mov     edx, 12h
 * 000000018004EB88: lea     rcx, [rbp+9E20h+var_3768]; Src
 * 000000018004EB8F: call    sub_1800D45C8
 * 000000018004EB94: nop
 * 000000018004EB95: mov     r8, rax
 * 000000018004EB98: lea     rdx, aStandardshader_152; "StandardShader/ShaderModel40/"
 * 000000018004EB9F: lea     rcx, [rbp+9E20h+var_3788]
 * 000000018004EBA6: call    sub_1800454BC
 * 000000018004EBAB: nop
 * 000000018004EBAC: lea     r8, aVertex_9; "/Vertex"
 * 000000018004EBB3: mov     rdx, rax
 * 000000018004EBB6: lea     rcx, [rbp+9E20h+var_37A8]
 * 000000018004EBBD: call    sub_18002C088
 * 000000018004EBC2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EBC7: mov     rcx, rax
 * 000000018004EBCA: call    sub_1800D46B4
 * 000000018004EBCF: mov     cs:byte_18026A50C, al
 * 000000018004EBD5: lea     rcx, [rbp+9E20h+var_3788]; void *
 * 000000018004EBDC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EBE1: nop
 * 000000018004EBE2: lea     rcx, [rbp+9E20h+var_3768]; void *
 * 000000018004EBE9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EBEE: nop
 * 000000018004EBEF: lea     rcx, dword_18026A510
 * 000000018004EBF6: call    _Init_thread_footer
 * 000000018004EBFB: mov     rax, [rdi+rbx*8]
 * 000000018004EBFF: mov     ecx, [r15+rax]
 * 000000018004EC03: cmp     cs:dword_18026A518, ecx
 * 000000018004EC09: jle     loc_18004ECEB
 * 000000018004EC0F: lea     rcx, dword_18026A518
 * 000000018004EC16: call    _Init_thread_header
 * 000000018004EC1B: cmp     cs:dword_18026A518, r14d
 * 000000018004EC22: jnz     loc_18004ECEB
 * 000000018004EC28: mov     qword ptr [rbp+9E20h+var_9540], r13
 * 000000018004EC2F: lea     rax, unk_180199088
 * 000000018004EC36: mov     qword ptr [rbp+9E20h+var_9540+8], rax
 * 000000018004EC3D: movups  xmm0, [rbp+9E20h+var_9540]
 * 000000018004EC44: movups  [rbp+9E20h+var_76F8], xmm0
 * 000000018004EC4B: mov     dword ptr [rbp+9E20h+var_76E8], esi
 * 000000018004EC51: mov     dword ptr [rbp+9E20h+var_76E8+4], esi
 * 000000018004EC57: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EC5C: movups  xmm0, [rbp+9E20h+var_76E8]
 * 000000018004EC63: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EC68: call    sub_1800456E0
 * 000000018004EC6D: mov     r8, rax
 * 000000018004EC70: mov     r9d, r12d
 * 000000018004EC73: mov     edx, 14h
 * 000000018004EC78: lea     rcx, [rbp+9E20h+var_3708]; Src
 * 000000018004EC7F: call    sub_1800D45C8
 * 000000018004EC84: nop
 * 000000018004EC85: mov     r8, rax
 * 000000018004EC88: lea     rdx, aStandardshader_153; "StandardShader/ShaderModel40/"
 * 000000018004EC8F: lea     rcx, [rbp+9E20h+var_3728]
 * 000000018004EC96: call    sub_1800454BC
 * 000000018004EC9B: nop
 * 000000018004EC9C: lea     r8, aVertex_10; "/Vertex"
 * 000000018004ECA3: mov     rdx, rax
 * 000000018004ECA6: lea     rcx, [rbp+9E20h+var_3748]
 * 000000018004ECAD: call    sub_18002C088
 * 000000018004ECB2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004ECB7: mov     rcx, rax
 * 000000018004ECBA: call    sub_1800D46B4
 * 000000018004ECBF: mov     cs:byte_18026A514, al
 * 000000018004ECC5: lea     rcx, [rbp+9E20h+var_3728]; void *
 * 000000018004ECCC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ECD1: nop
 * 000000018004ECD2: lea     rcx, [rbp+9E20h+var_3708]; void *
 * 000000018004ECD9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ECDE: nop
 * 000000018004ECDF: lea     rcx, dword_18026A518
 * 000000018004ECE6: call    _Init_thread_footer
 * 000000018004ECEB: mov     rax, [rdi+rbx*8]
 * 000000018004ECEF: mov     ecx, [r15+rax]
 * 000000018004ECF3: cmp     cs:dword_18026A520, ecx
 * 000000018004ECF9: jle     loc_18004EDDB
 * 000000018004ECFF: lea     rcx, dword_18026A520
 * 000000018004ED06: call    _Init_thread_header
 * 000000018004ED0B: cmp     cs:dword_18026A520, r14d
 * 000000018004ED12: jnz     loc_18004EDDB
 * 000000018004ED18: mov     qword ptr [rbp+9E20h+var_9530], r13
 * 000000018004ED1F: lea     rax, unk_180199088
 * 000000018004ED26: mov     qword ptr [rbp+9E20h+var_9530+8], rax
 * 000000018004ED2D: movups  xmm0, [rbp+9E20h+var_9530]
 * 000000018004ED34: movups  [rbp+9E20h+var_76D8], xmm0
 * 000000018004ED3B: mov     dword ptr [rbp+9E20h+var_76C8], esi
 * 000000018004ED41: mov     dword ptr [rbp+9E20h+var_76C8+4], esi
 * 000000018004ED47: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004ED4C: movups  xmm0, [rbp+9E20h+var_76C8]
 * 000000018004ED53: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004ED58: call    sub_1800456E0
 * 000000018004ED5D: mov     r8, rax
 * 000000018004ED60: mov     r9d, r12d
 * 000000018004ED63: mov     edx, 16h
 * 000000018004ED68: lea     rcx, [rbp+9E20h+var_36A8]; Src
 * 000000018004ED6F: call    sub_1800D45C8
 * 000000018004ED74: nop
 * 000000018004ED75: mov     r8, rax
 * 000000018004ED78: lea     rdx, aStandardshader_154; "StandardShader/ShaderModel40/"
 * 000000018004ED7F: lea     rcx, [rbp+9E20h+var_36C8]
 * 000000018004ED86: call    sub_1800454BC
 * 000000018004ED8B: nop
 * 000000018004ED8C: lea     r8, aVertex_11; "/Vertex"
 * 000000018004ED93: mov     rdx, rax
 * 000000018004ED96: lea     rcx, [rbp+9E20h+var_36E8]
 * 000000018004ED9D: call    sub_18002C088
 * 000000018004EDA2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EDA7: mov     rcx, rax
 * 000000018004EDAA: call    sub_1800D46B4
 * 000000018004EDAF: mov     cs:byte_18026A51C, al
 * 000000018004EDB5: lea     rcx, [rbp+9E20h+var_36C8]; void *
 * 000000018004EDBC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EDC1: nop
 * 000000018004EDC2: lea     rcx, [rbp+9E20h+var_36A8]; void *
 * 000000018004EDC9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EDCE: nop
 * 000000018004EDCF: lea     rcx, dword_18026A520
 * 000000018004EDD6: call    _Init_thread_footer
 * 000000018004EDDB: mov     rax, [rdi+rbx*8]
 * 000000018004EDDF: mov     ecx, [r15+rax]
 * 000000018004EDE3: cmp     cs:dword_18026A528, ecx
 * 000000018004EDE9: jle     loc_18004EECB
 * 000000018004EDEF: lea     rcx, dword_18026A528
 * 000000018004EDF6: call    _Init_thread_header
 * 000000018004EDFB: cmp     cs:dword_18026A528, r14d
 * 000000018004EE02: jnz     loc_18004EECB
 * 000000018004EE08: mov     qword ptr [rbp+9E20h+var_9520], r13
 * 000000018004EE0F: lea     rax, unk_180199088
 * 000000018004EE16: mov     qword ptr [rbp+9E20h+var_9520+8], rax
 * 000000018004EE1D: movups  xmm0, [rbp+9E20h+var_9520]
 * 000000018004EE24: movups  [rbp+9E20h+var_76B8], xmm0
 * 000000018004EE2B: mov     dword ptr [rbp+9E20h+var_76A8], esi
 * 000000018004EE31: mov     dword ptr [rbp+9E20h+var_76A8+4], esi
 * 000000018004EE37: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EE3C: movups  xmm0, [rbp+9E20h+var_76A8]
 * 000000018004EE43: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EE48: call    sub_1800456E0
 * 000000018004EE4D: mov     r8, rax
 * 000000018004EE50: mov     r9d, r12d
 * 000000018004EE53: mov     edx, 18h
 * 000000018004EE58: lea     rcx, [rbp+9E20h+var_3648]; Src
 * 000000018004EE5F: call    sub_1800D45C8
 * 000000018004EE64: nop
 * 000000018004EE65: mov     r8, rax
 * 000000018004EE68: lea     rdx, aStandardshader_155; "StandardShader/ShaderModel40/"
 * 000000018004EE6F: lea     rcx, [rbp+9E20h+var_3668]
 * 000000018004EE76: call    sub_1800454BC
 * 000000018004EE7B: nop
 * 000000018004EE7C: lea     r8, aVertex_12; "/Vertex"
 * 000000018004EE83: mov     rdx, rax
 * 000000018004EE86: lea     rcx, [rbp+9E20h+var_3688]
 * 000000018004EE8D: call    sub_18002C088
 * 000000018004EE92: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EE97: mov     rcx, rax
 * 000000018004EE9A: call    sub_1800D46B4
 * 000000018004EE9F: mov     cs:byte_18026A524, al
 * 000000018004EEA5: lea     rcx, [rbp+9E20h+var_3668]; void *
 * 000000018004EEAC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EEB1: nop
 * 000000018004EEB2: lea     rcx, [rbp+9E20h+var_3648]; void *
 * 000000018004EEB9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EEBE: nop
 * 000000018004EEBF: lea     rcx, dword_18026A528
 * 000000018004EEC6: call    _Init_thread_footer
 * 000000018004EECB: mov     rax, [rdi+rbx*8]
 * 000000018004EECF: mov     ecx, [r15+rax]
 * 000000018004EED3: cmp     cs:dword_18026A530, ecx
 * 000000018004EED9: jle     loc_18004EFBB
 * 000000018004EEDF: lea     rcx, dword_18026A530
 * 000000018004EEE6: call    _Init_thread_header
 * 000000018004EEEB: cmp     cs:dword_18026A530, r14d
 * 000000018004EEF2: jnz     loc_18004EFBB
 * 000000018004EEF8: mov     qword ptr [rbp+9E20h+var_9510], r13
 * 000000018004EEFF: lea     rax, unk_180199088
 * 000000018004EF06: mov     qword ptr [rbp+9E20h+var_9510+8], rax
 * 000000018004EF0D: movups  xmm0, [rbp+9E20h+var_9510]
 * 000000018004EF14: movups  [rbp+9E20h+var_7698], xmm0
 * 000000018004EF1B: mov     dword ptr [rbp+9E20h+var_7688], esi
 * 000000018004EF21: mov     dword ptr [rbp+9E20h+var_7688+4], esi
 * 000000018004EF27: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004EF2C: movups  xmm0, [rbp+9E20h+var_7688]
 * 000000018004EF33: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004EF38: call    sub_1800456E0
 * 000000018004EF3D: mov     r8, rax
 * 000000018004EF40: mov     r9d, r12d
 * 000000018004EF43: mov     edx, 1Ah
 * 000000018004EF48: lea     rcx, [rbp+9E20h+var_35E8]; Src
 * 000000018004EF4F: call    sub_1800D45C8
 * 000000018004EF54: nop
 * 000000018004EF55: mov     r8, rax
 * 000000018004EF58: lea     rdx, aStandardshader_156; "StandardShader/ShaderModel40/"
 * 000000018004EF5F: lea     rcx, [rbp+9E20h+var_3608]
 * 000000018004EF66: call    sub_1800454BC
 * 000000018004EF6B: nop
 * 000000018004EF6C: lea     r8, aVertex_13; "/Vertex"
 * 000000018004EF73: mov     rdx, rax
 * 000000018004EF76: lea     rcx, [rbp+9E20h+var_3628]
 * 000000018004EF7D: call    sub_18002C088
 * 000000018004EF82: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004EF87: mov     rcx, rax
 * 000000018004EF8A: call    sub_1800D46B4
 * 000000018004EF8F: mov     cs:byte_18026A52C, al
 * 000000018004EF95: lea     rcx, [rbp+9E20h+var_3608]; void *
 * 000000018004EF9C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EFA1: nop
 * 000000018004EFA2: lea     rcx, [rbp+9E20h+var_35E8]; void *
 * 000000018004EFA9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EFAE: nop
 * 000000018004EFAF: lea     rcx, dword_18026A530
 * 000000018004EFB6: call    _Init_thread_footer
 * 000000018004EFBB: mov     rax, [rdi+rbx*8]
 * 000000018004EFBF: lea     r13, unk_180199D30
 * 000000018004EFC6: mov     eax, [r15+rax]
 * 000000018004EFCA: cmp     cs:dword_18026A538, eax
 * 000000018004EFD0: jle     loc_18004F0B2
 * 000000018004EFD6: lea     rcx, dword_18026A538
 * 000000018004EFDD: call    _Init_thread_header
 * 000000018004EFE2: cmp     cs:dword_18026A538, r14d
 * 000000018004EFE9: jnz     loc_18004F0B2
 * 000000018004EFEF: mov     qword ptr [rbp+9E20h+var_9500], r13
 * 000000018004EFF6: lea     rax, unk_18019B748
 * 000000018004EFFD: mov     qword ptr [rbp+9E20h+var_9500+8], rax
 * 000000018004F004: movups  xmm0, [rbp+9E20h+var_9500]
 * 000000018004F00B: movups  [rbp+9E20h+var_7678], xmm0
 * 000000018004F012: mov     dword ptr [rbp+9E20h+var_7668], esi
 * 000000018004F018: mov     dword ptr [rbp+9E20h+var_7668+4], esi
 * 000000018004F01E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F023: movups  xmm0, [rbp+9E20h+var_7668]
 * 000000018004F02A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F02F: call    sub_1800456E0
 * 000000018004F034: mov     r8, rax
 * 000000018004F037: mov     r9d, r12d
 * 000000018004F03A: mov     edx, 20h ; ' '
 * 000000018004F03F: lea     rcx, [rbp+9E20h+var_3588]; Src
 * 000000018004F046: call    sub_1800D45C8
 * 000000018004F04B: nop
 * 000000018004F04C: mov     r8, rax
 * 000000018004F04F: lea     rdx, aStandardshader_157; "StandardShader/ShaderModel40/"
 * 000000018004F056: lea     rcx, [rbp+9E20h+var_35A8]
 * 000000018004F05D: call    sub_1800454BC
 * 000000018004F062: nop
 * 000000018004F063: lea     r8, aVertex_14; "/Vertex"
 * 000000018004F06A: mov     rdx, rax
 * 000000018004F06D: lea     rcx, [rbp+9E20h+var_35C8]
 * 000000018004F074: call    sub_18002C088
 * 000000018004F079: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F07E: mov     rcx, rax
 * 000000018004F081: call    sub_1800D46B4
 * 000000018004F086: mov     cs:byte_18026A534, al
 * 000000018004F08C: lea     rcx, [rbp+9E20h+var_35A8]; void *
 * 000000018004F093: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F098: nop
 * 000000018004F099: lea     rcx, [rbp+9E20h+var_3588]; void *
 * 000000018004F0A0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F0A5: nop
 * 000000018004F0A6: lea     rcx, dword_18026A538
 * 000000018004F0AD: call    _Init_thread_footer
 * 000000018004F0B2: mov     rax, [rdi+rbx*8]
 * 000000018004F0B6: mov     ecx, [r15+rax]
 * 000000018004F0BA: cmp     cs:dword_18026A540, ecx
 * 000000018004F0C0: jle     loc_18004F1A9
 * 000000018004F0C6: lea     rcx, dword_18026A540
 * 000000018004F0CD: call    _Init_thread_header
 * 000000018004F0D2: cmp     cs:dword_18026A540, r14d
 * 000000018004F0D9: jnz     loc_18004F1A9
 * 000000018004F0DF: lea     rax, unk_18019B750
 * 000000018004F0E6: mov     qword ptr [rbp+9E20h+var_94F0], rax
 * 000000018004F0ED: lea     rax, unk_18019C0F8
 * 000000018004F0F4: mov     qword ptr [rbp+9E20h+var_94F0+8], rax
 * 000000018004F0FB: movups  xmm0, [rbp+9E20h+var_94F0]
 * 000000018004F102: movups  [rbp+9E20h+var_7658], xmm0
 * 000000018004F109: mov     dword ptr [rbp+9E20h+var_7648], esi
 * 000000018004F10F: mov     dword ptr [rbp+9E20h+var_7648+4], esi
 * 000000018004F115: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F11A: movups  xmm0, [rbp+9E20h+var_7648]
 * 000000018004F121: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F126: call    sub_1800456E0
 * 000000018004F12B: mov     r8, rax
 * 000000018004F12E: mov     r9d, r12d
 * 000000018004F131: mov     edx, 21h ; '!'
 * 000000018004F136: lea     rcx, [rbp+9E20h+var_3528]; Src
 * 000000018004F13D: call    sub_1800D45C8
 * 000000018004F142: nop
 * 000000018004F143: mov     r8, rax
 * 000000018004F146: lea     rdx, aStandardshader_158; "StandardShader/ShaderModel40/"
 * 000000018004F14D: lea     rcx, [rbp+9E20h+var_3548]
 * 000000018004F154: call    sub_1800454BC
 * 000000018004F159: nop
 * 000000018004F15A: lea     r8, aVertex_15; "/Vertex"
 * 000000018004F161: mov     rdx, rax
 * 000000018004F164: lea     rcx, [rbp+9E20h+var_3568]
 * 000000018004F16B: call    sub_18002C088
 * 000000018004F170: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F175: mov     rcx, rax
 * 000000018004F178: call    sub_1800D46B4
 * 000000018004F17D: mov     cs:byte_18026A53C, al
 * 000000018004F183: lea     rcx, [rbp+9E20h+var_3548]; void *
 * 000000018004F18A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F18F: nop
 * 000000018004F190: lea     rcx, [rbp+9E20h+var_3528]; void *
 * 000000018004F197: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F19C: nop
 * 000000018004F19D: lea     rcx, dword_18026A540
 * 000000018004F1A4: call    _Init_thread_footer
 * 000000018004F1A9: mov     rax, [rdi+rbx*8]
 * 000000018004F1AD: mov     ecx, [r15+rax]
 * 000000018004F1B1: cmp     cs:dword_18026A548, ecx
 * 000000018004F1B7: jle     loc_18004F299
 * 000000018004F1BD: lea     rcx, dword_18026A548
 * 000000018004F1C4: call    _Init_thread_header
 * 000000018004F1C9: cmp     cs:dword_18026A548, r14d
 * 000000018004F1D0: jnz     loc_18004F299
 * 000000018004F1D6: mov     qword ptr [rbp+9E20h+var_94E0], r13
 * 000000018004F1DD: lea     rax, unk_18019B748
 * 000000018004F1E4: mov     qword ptr [rbp+9E20h+var_94E0+8], rax
 * 000000018004F1EB: movups  xmm0, [rbp+9E20h+var_94E0]
 * 000000018004F1F2: movups  [rbp+9E20h+var_7638], xmm0
 * 000000018004F1F9: mov     dword ptr [rbp+9E20h+var_7628], esi
 * 000000018004F1FF: mov     dword ptr [rbp+9E20h+var_7628+4], esi
 * 000000018004F205: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F20A: movups  xmm0, [rbp+9E20h+var_7628]
 * 000000018004F211: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F216: call    sub_1800456E0
 * 000000018004F21B: mov     r8, rax
 * 000000018004F21E: mov     r9d, r12d
 * 000000018004F221: mov     edx, 22h ; '"'
 * 000000018004F226: lea     rcx, [rbp+9E20h+var_34C8]; Src
 * 000000018004F22D: call    sub_1800D45C8
 * 000000018004F232: nop
 * 000000018004F233: mov     r8, rax
 * 000000018004F236: lea     rdx, aStandardshader_159; "StandardShader/ShaderModel40/"
 * 000000018004F23D: lea     rcx, [rbp+9E20h+var_34E8]
 * 000000018004F244: call    sub_1800454BC
 * 000000018004F249: nop
 * 000000018004F24A: lea     r8, aVertex_16; "/Vertex"
 * 000000018004F251: mov     rdx, rax
 * 000000018004F254: lea     rcx, [rbp+9E20h+var_3508]
 * 000000018004F25B: call    sub_18002C088
 * 000000018004F260: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F265: mov     rcx, rax
 * 000000018004F268: call    sub_1800D46B4
 * 000000018004F26D: mov     cs:byte_18026A544, al
 * 000000018004F273: lea     rcx, [rbp+9E20h+var_34E8]; void *
 * 000000018004F27A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F27F: nop
 * 000000018004F280: lea     rcx, [rbp+9E20h+var_34C8]; void *
 * 000000018004F287: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F28C: nop
 * 000000018004F28D: lea     rcx, dword_18026A548
 * 000000018004F294: call    _Init_thread_footer
 * 000000018004F299: mov     rax, [rdi+rbx*8]
 * 000000018004F29D: mov     ecx, [r15+rax]
 * 000000018004F2A1: cmp     cs:dword_18026A550, ecx
 * 000000018004F2A7: jle     loc_18004F389
 * 000000018004F2AD: lea     rcx, dword_18026A550
 * 000000018004F2B4: call    _Init_thread_header
 * 000000018004F2B9: cmp     cs:dword_18026A550, r14d
 * 000000018004F2C0: jnz     loc_18004F389
 * 000000018004F2C6: mov     qword ptr [rbp+9E20h+var_94D0], r13
 * 000000018004F2CD: lea     rax, unk_18019B748
 * 000000018004F2D4: mov     qword ptr [rbp+9E20h+var_94D0+8], rax
 * 000000018004F2DB: movups  xmm0, [rbp+9E20h+var_94D0]
 * 000000018004F2E2: movups  [rbp+9E20h+var_7618], xmm0
 * 000000018004F2E9: mov     dword ptr [rbp+9E20h+var_7608], esi
 * 000000018004F2EF: mov     dword ptr [rbp+9E20h+var_7608+4], esi
 * 000000018004F2F5: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F2FA: movups  xmm0, [rbp+9E20h+var_7608]
 * 000000018004F301: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F306: call    sub_1800456E0
 * 000000018004F30B: mov     r8, rax
 * 000000018004F30E: mov     r9d, r12d
 * 000000018004F311: mov     edx, 28h ; '('
 * 000000018004F316: lea     rcx, [rbp+9E20h+var_3468]; Src
 * 000000018004F31D: call    sub_1800D45C8
 * 000000018004F322: nop
 * 000000018004F323: mov     r8, rax
 * 000000018004F326: lea     rdx, aStandardshader_160; "StandardShader/ShaderModel40/"
 * 000000018004F32D: lea     rcx, [rbp+9E20h+var_3488]
 * 000000018004F334: call    sub_1800454BC
 * 000000018004F339: nop
 * 000000018004F33A: lea     r8, aVertex_17; "/Vertex"
 * 000000018004F341: mov     rdx, rax
 * 000000018004F344: lea     rcx, [rbp+9E20h+var_34A8]
 * 000000018004F34B: call    sub_18002C088
 * 000000018004F350: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F355: mov     rcx, rax
 * 000000018004F358: call    sub_1800D46B4
 * 000000018004F35D: mov     cs:byte_18026A54C, al
 * 000000018004F363: lea     rcx, [rbp+9E20h+var_3488]; void *
 * 000000018004F36A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F36F: nop
 * 000000018004F370: lea     rcx, [rbp+9E20h+var_3468]; void *
 * 000000018004F377: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F37C: nop
 * 000000018004F37D: lea     rcx, dword_18026A550
 * 000000018004F384: call    _Init_thread_footer
 * 000000018004F389: mov     rax, [rdi+rbx*8]
 * 000000018004F38D: mov     ecx, [r15+rax]
 * 000000018004F391: cmp     cs:dword_18026A558, ecx
 * 000000018004F397: jle     loc_18004F480
 * 000000018004F39D: lea     rcx, dword_18026A558
 * 000000018004F3A4: call    _Init_thread_header
 * 000000018004F3A9: cmp     cs:dword_18026A558, r14d
 * 000000018004F3B0: jnz     loc_18004F480
 * 000000018004F3B6: lea     rax, unk_18019C100
 * 000000018004F3BD: mov     qword ptr [rbp+9E20h+var_94C0], rax
 * 000000018004F3C4: lea     rax, unk_18019CC3C
 * 000000018004F3CB: mov     qword ptr [rbp+9E20h+var_94C0+8], rax
 * 000000018004F3D2: movups  xmm0, [rbp+9E20h+var_94C0]
 * 000000018004F3D9: movups  [rbp+9E20h+var_75F8], xmm0
 * 000000018004F3E0: mov     dword ptr [rbp+9E20h+var_75E8], esi
 * 000000018004F3E6: mov     dword ptr [rbp+9E20h+var_75E8+4], esi
 * 000000018004F3EC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F3F1: movups  xmm0, [rbp+9E20h+var_75E8]
 * 000000018004F3F8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F3FD: call    sub_1800456E0
 * 000000018004F402: mov     r8, rax
 * 000000018004F405: mov     r9d, r12d
 * 000000018004F408: mov     edx, 29h ; ')'
 * 000000018004F40D: lea     rcx, [rbp+9E20h+var_3408]; Src
 * 000000018004F414: call    sub_1800D45C8
 * 000000018004F419: nop
 * 000000018004F41A: mov     r8, rax
 * 000000018004F41D: lea     rdx, aStandardshader_161; "StandardShader/ShaderModel40/"
 * 000000018004F424: lea     rcx, [rbp+9E20h+var_3428]
 * 000000018004F42B: call    sub_1800454BC
 * 000000018004F430: nop
 * 000000018004F431: lea     r8, aVertex_18; "/Vertex"
 * 000000018004F438: mov     rdx, rax
 * 000000018004F43B: lea     rcx, [rbp+9E20h+var_3448]
 * 000000018004F442: call    sub_18002C088
 * 000000018004F447: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F44C: mov     rcx, rax
 * 000000018004F44F: call    sub_1800D46B4
 * 000000018004F454: mov     cs:byte_18026A554, al
 * 000000018004F45A: lea     rcx, [rbp+9E20h+var_3428]; void *
 * 000000018004F461: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F466: nop
 * 000000018004F467: lea     rcx, [rbp+9E20h+var_3408]; void *
 * 000000018004F46E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F473: nop
 * 000000018004F474: lea     rcx, dword_18026A558
 * 000000018004F47B: call    _Init_thread_footer
 * 000000018004F480: mov     rax, [rdi+rbx*8]
 * 000000018004F484: mov     ecx, [r15+rax]
 * 000000018004F488: cmp     cs:dword_18026A560, ecx
 * 000000018004F48E: jle     loc_18004F570
 * 000000018004F494: lea     rcx, dword_18026A560
 * 000000018004F49B: call    _Init_thread_header
 * 000000018004F4A0: cmp     cs:dword_18026A560, r14d
 * 000000018004F4A7: jnz     loc_18004F570
 * 000000018004F4AD: mov     qword ptr [rbp+9E20h+var_94B0], r13
 * 000000018004F4B4: lea     rax, unk_18019B748
 * 000000018004F4BB: mov     qword ptr [rbp+9E20h+var_94B0+8], rax
 * 000000018004F4C2: movups  xmm0, [rbp+9E20h+var_94B0]
 * 000000018004F4C9: movups  [rbp+9E20h+var_75D8], xmm0
 * 000000018004F4D0: mov     dword ptr [rbp+9E20h+var_75C8], esi
 * 000000018004F4D6: mov     dword ptr [rbp+9E20h+var_75C8+4], esi
 * 000000018004F4DC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F4E1: movups  xmm0, [rbp+9E20h+var_75C8]
 * 000000018004F4E8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F4ED: call    sub_1800456E0
 * 000000018004F4F2: mov     r8, rax
 * 000000018004F4F5: mov     r9d, r12d
 * 000000018004F4F8: mov     edx, 2Ah ; '*'
 * 000000018004F4FD: lea     rcx, [rbp+9E20h+var_33A8]; Src
 * 000000018004F504: call    sub_1800D45C8
 * 000000018004F509: nop
 * 000000018004F50A: mov     r8, rax
 * 000000018004F50D: lea     rdx, aStandardshader_162; "StandardShader/ShaderModel40/"
 * 000000018004F514: lea     rcx, [rbp+9E20h+var_33C8]
 * 000000018004F51B: call    sub_1800454BC
 * 000000018004F520: nop
 * 000000018004F521: lea     r8, aVertex_19; "/Vertex"
 * 000000018004F528: mov     rdx, rax
 * 000000018004F52B: lea     rcx, [rbp+9E20h+var_33E8]
 * 000000018004F532: call    sub_18002C088
 * 000000018004F537: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F53C: mov     rcx, rax
 * 000000018004F53F: call    sub_1800D46B4
 * 000000018004F544: mov     cs:byte_18026A55C, al
 * 000000018004F54A: lea     rcx, [rbp+9E20h+var_33C8]; void *
 * 000000018004F551: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F556: nop
 * 000000018004F557: lea     rcx, [rbp+9E20h+var_33A8]; void *
 * 000000018004F55E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F563: nop
 * 000000018004F564: lea     rcx, dword_18026A560
 * 000000018004F56B: call    _Init_thread_footer
 * 000000018004F570: mov     rax, [rdi+rbx*8]
 * 000000018004F574: mov     ecx, [r15+rax]
 * 000000018004F578: cmp     cs:dword_18026A568, ecx
 * 000000018004F57E: jle     loc_18004F660
 * 000000018004F584: lea     rcx, dword_18026A568
 * 000000018004F58B: call    _Init_thread_header
 * 000000018004F590: cmp     cs:dword_18026A568, r14d
 * 000000018004F597: jnz     loc_18004F660
 * 000000018004F59D: mov     qword ptr [rbp+9E20h+var_94A0], r13
 * 000000018004F5A4: lea     rax, unk_18019B748
 * 000000018004F5AB: mov     qword ptr [rbp+9E20h+var_94A0+8], rax
 * 000000018004F5B2: movups  xmm0, [rbp+9E20h+var_94A0]
 * 000000018004F5B9: movups  [rbp+9E20h+var_75B8], xmm0
 * 000000018004F5C0: mov     dword ptr [rbp+9E20h+var_75A8], esi
 * 000000018004F5C6: mov     dword ptr [rbp+9E20h+var_75A8+4], esi
 * 000000018004F5CC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F5D1: movups  xmm0, [rbp+9E20h+var_75A8]
 * 000000018004F5D8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F5DD: call    sub_1800456E0
 * 000000018004F5E2: mov     r8, rax
 * 000000018004F5E5: mov     r9d, r12d
 * 000000018004F5E8: mov     edx, 30h ; '0'
 * 000000018004F5ED: lea     rcx, [rbp+9E20h+var_3348]; Src
 * 000000018004F5F4: call    sub_1800D45C8
 * 000000018004F5F9: nop
 * 000000018004F5FA: mov     r8, rax
 * 000000018004F5FD: lea     rdx, aStandardshader_163; "StandardShader/ShaderModel40/"
 * 000000018004F604: lea     rcx, [rbp+9E20h+var_3368]
 * 000000018004F60B: call    sub_1800454BC
 * 000000018004F610: nop
 * 000000018004F611: lea     r8, aVertex_20; "/Vertex"
 * 000000018004F618: mov     rdx, rax
 * 000000018004F61B: lea     rcx, [rbp+9E20h+var_3388]
 * 000000018004F622: call    sub_18002C088
 * 000000018004F627: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F62C: mov     rcx, rax
 * 000000018004F62F: call    sub_1800D46B4
 * 000000018004F634: mov     cs:byte_18026A564, al
 * 000000018004F63A: lea     rcx, [rbp+9E20h+var_3368]; void *
 * 000000018004F641: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F646: nop
 * 000000018004F647: lea     rcx, [rbp+9E20h+var_3348]; void *
 * 000000018004F64E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F653: nop
 * 000000018004F654: lea     rcx, dword_18026A568
 * 000000018004F65B: call    _Init_thread_footer
 * 000000018004F660: mov     rax, [rdi+rbx*8]
 * 000000018004F664: mov     ecx, [r15+rax]
 * 000000018004F668: cmp     cs:dword_18026A570, ecx
 * 000000018004F66E: jle     loc_18004F750
 * 000000018004F674: lea     rcx, dword_18026A570
 * 000000018004F67B: call    _Init_thread_header
 * 000000018004F680: cmp     cs:dword_18026A570, r14d
 * 000000018004F687: jnz     loc_18004F750
 * 000000018004F68D: mov     qword ptr [rbp+9E20h+var_9490], r13
 * 000000018004F694: lea     rax, unk_18019B748
 * 000000018004F69B: mov     qword ptr [rbp+9E20h+var_9490+8], rax
 * 000000018004F6A2: movups  xmm0, [rbp+9E20h+var_9490]
 * 000000018004F6A9: movups  [rbp+9E20h+var_7598], xmm0
 * 000000018004F6B0: mov     dword ptr [rbp+9E20h+var_7588], esi
 * 000000018004F6B6: mov     dword ptr [rbp+9E20h+var_7588+4], esi
 * 000000018004F6BC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F6C1: movups  xmm0, [rbp+9E20h+var_7588]
 * 000000018004F6C8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F6CD: call    sub_1800456E0
 * 000000018004F6D2: mov     r8, rax
 * 000000018004F6D5: mov     r9d, r12d
 * 000000018004F6D8: mov     edx, 32h ; '2'
 * 000000018004F6DD: lea     rcx, [rbp+9E20h+var_32E8]; Src
 * 000000018004F6E4: call    sub_1800D45C8
 * 000000018004F6E9: nop
 * 000000018004F6EA: mov     r8, rax
 * 000000018004F6ED: lea     rdx, aStandardshader_164; "StandardShader/ShaderModel40/"
 * 000000018004F6F4: lea     rcx, [rbp+9E20h+var_3308]
 * 000000018004F6FB: call    sub_1800454BC
 * 000000018004F700: nop
 * 000000018004F701: lea     r8, aVertex_21; "/Vertex"
 * 000000018004F708: mov     rdx, rax
 * 000000018004F70B: lea     rcx, [rbp+9E20h+var_3328]
 * 000000018004F712: call    sub_18002C088
 * 000000018004F717: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F71C: mov     rcx, rax
 * 000000018004F71F: call    sub_1800D46B4
 * 000000018004F724: mov     cs:byte_18026A56C, al
 * 000000018004F72A: lea     rcx, [rbp+9E20h+var_3308]; void *
 * 000000018004F731: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F736: nop
 * 000000018004F737: lea     rcx, [rbp+9E20h+var_32E8]; void *
 * 000000018004F73E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F743: nop
 * 000000018004F744: lea     rcx, dword_18026A570
 * 000000018004F74B: call    _Init_thread_footer
 * 000000018004F750: mov     rax, [rdi+rbx*8]
 * 000000018004F754: mov     ecx, [r15+rax]
 * 000000018004F758: cmp     cs:dword_18026A578, ecx
 * 000000018004F75E: jle     loc_18004F840
 * 000000018004F764: lea     rcx, dword_18026A578
 * 000000018004F76B: call    _Init_thread_header
 * 000000018004F770: cmp     cs:dword_18026A578, r14d
 * 000000018004F777: jnz     loc_18004F840
 * 000000018004F77D: mov     qword ptr [rbp+9E20h+var_9480], r13
 * 000000018004F784: lea     rax, unk_18019B748
 * 000000018004F78B: mov     qword ptr [rbp+9E20h+var_9480+8], rax
 * 000000018004F792: movups  xmm0, [rbp+9E20h+var_9480]
 * 000000018004F799: movups  [rbp+9E20h+var_7578], xmm0
 * 000000018004F7A0: mov     dword ptr [rbp+9E20h+var_7568], esi
 * 000000018004F7A6: mov     dword ptr [rbp+9E20h+var_7568+4], esi
 * 000000018004F7AC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F7B1: movups  xmm0, [rbp+9E20h+var_7568]
 * 000000018004F7B8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F7BD: call    sub_1800456E0
 * 000000018004F7C2: mov     r8, rax
 * 000000018004F7C5: mov     r9d, r12d
 * 000000018004F7C8: mov     edx, 38h ; '8'
 * 000000018004F7CD: lea     rcx, [rbp+9E20h+var_3288]; Src
 * 000000018004F7D4: call    sub_1800D45C8
 * 000000018004F7D9: nop
 * 000000018004F7DA: mov     r8, rax
 * 000000018004F7DD: lea     rdx, aStandardshader_165; "StandardShader/ShaderModel40/"
 * 000000018004F7E4: lea     rcx, [rbp+9E20h+var_32A8]
 * 000000018004F7EB: call    sub_1800454BC
 * 000000018004F7F0: nop
 * 000000018004F7F1: lea     r8, aVertex_22; "/Vertex"
 * 000000018004F7F8: mov     rdx, rax
 * 000000018004F7FB: lea     rcx, [rbp+9E20h+var_32C8]
 * 000000018004F802: call    sub_18002C088
 * 000000018004F807: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F80C: mov     rcx, rax
 * 000000018004F80F: call    sub_1800D46B4
 * 000000018004F814: mov     cs:byte_18026A574, al
 * 000000018004F81A: lea     rcx, [rbp+9E20h+var_32A8]; void *
 * 000000018004F821: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F826: nop
 * 000000018004F827: lea     rcx, [rbp+9E20h+var_3288]; void *
 * 000000018004F82E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F833: nop
 * 000000018004F834: lea     rcx, dword_18026A578
 * 000000018004F83B: call    _Init_thread_footer
 * 000000018004F840: mov     rax, [rdi+rbx*8]
 * 000000018004F844: mov     ecx, [r15+rax]
 * 000000018004F848: cmp     cs:dword_18026A580, ecx
 * 000000018004F84E: jle     loc_18004F930
 * 000000018004F854: lea     rcx, dword_18026A580
 * 000000018004F85B: call    _Init_thread_header
 * 000000018004F860: cmp     cs:dword_18026A580, r14d
 * 000000018004F867: jnz     loc_18004F930
 * 000000018004F86D: mov     qword ptr [rbp+9E20h+var_9470], r13
 * 000000018004F874: lea     rax, unk_18019B748
 * 000000018004F87B: mov     qword ptr [rbp+9E20h+var_9470+8], rax
 * 000000018004F882: movups  xmm0, [rbp+9E20h+var_9470]
 * 000000018004F889: movups  [rbp+9E20h+var_7558], xmm0
 * 000000018004F890: mov     dword ptr [rbp+9E20h+var_7548], esi
 * 000000018004F896: mov     dword ptr [rbp+9E20h+var_7548+4], esi
 * 000000018004F89C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F8A1: movups  xmm0, [rbp+9E20h+var_7548]
 * 000000018004F8A8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F8AD: call    sub_1800456E0
 * 000000018004F8B2: mov     r8, rax
 * 000000018004F8B5: mov     r9d, r12d
 * 000000018004F8B8: mov     edx, 3Ah ; ':'
 * 000000018004F8BD: lea     rcx, [rbp+9E20h+var_3228]; Src
 * 000000018004F8C4: call    sub_1800D45C8
 * 000000018004F8C9: nop
 * 000000018004F8CA: mov     r8, rax
 * 000000018004F8CD: lea     rdx, aStandardshader_166; "StandardShader/ShaderModel40/"
 * 000000018004F8D4: lea     rcx, [rbp+9E20h+var_3248]
 * 000000018004F8DB: call    sub_1800454BC
 * 000000018004F8E0: nop
 * 000000018004F8E1: lea     r8, aVertex_23; "/Vertex"
 * 000000018004F8E8: mov     rdx, rax
 * 000000018004F8EB: lea     rcx, [rbp+9E20h+var_3268]
 * 000000018004F8F2: call    sub_18002C088
 * 000000018004F8F7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F8FC: mov     rcx, rax
 * 000000018004F8FF: call    sub_1800D46B4
 * 000000018004F904: mov     cs:byte_18026A57C, al
 * 000000018004F90A: lea     rcx, [rbp+9E20h+var_3248]; void *
 * 000000018004F911: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F916: nop
 * 000000018004F917: lea     rcx, [rbp+9E20h+var_3228]; void *
 * 000000018004F91E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F923: nop
 * 000000018004F924: lea     rcx, dword_18026A580
 * 000000018004F92B: call    _Init_thread_footer
 * 000000018004F930: mov     rax, [rdi+rbx*8]
 * 000000018004F934: lea     r13, unk_18019CC40
 * 000000018004F93B: mov     eax, [r15+rax]
 * 000000018004F93F: cmp     cs:dword_18026A588, eax
 * 000000018004F945: jle     loc_18004FA27
 * 000000018004F94B: lea     rcx, dword_18026A588
 * 000000018004F952: call    _Init_thread_header
 * 000000018004F957: cmp     cs:dword_18026A588, r14d
 * 000000018004F95E: jnz     loc_18004FA27
 * 000000018004F964: mov     qword ptr [rbp+9E20h+var_9460], r13
 * 000000018004F96B: lea     rax, unk_18019DC90
 * 000000018004F972: mov     qword ptr [rbp+9E20h+var_9460+8], rax
 * 000000018004F979: movups  xmm0, [rbp+9E20h+var_9460]
 * 000000018004F980: movups  [rbp+9E20h+var_7538], xmm0
 * 000000018004F987: mov     dword ptr [rbp+9E20h+var_7528], esi
 * 000000018004F98D: mov     dword ptr [rbp+9E20h+var_7528+4], esi
 * 000000018004F993: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004F998: movups  xmm0, [rbp+9E20h+var_7528]
 * 000000018004F99F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004F9A4: call    sub_1800456E0
 * 000000018004F9A9: mov     r8, rax
 * 000000018004F9AC: mov     r9d, r12d
 * 000000018004F9AF: mov     edx, 40h ; '@'
 * 000000018004F9B4: lea     rcx, [rbp+9E20h+var_31C8]; Src
 * 000000018004F9BB: call    sub_1800D45C8
 * 000000018004F9C0: nop
 * 000000018004F9C1: mov     r8, rax
 * 000000018004F9C4: lea     rdx, aStandardshader_167; "StandardShader/ShaderModel40/"
 * 000000018004F9CB: lea     rcx, [rbp+9E20h+var_31E8]
 * 000000018004F9D2: call    sub_1800454BC
 * 000000018004F9D7: nop
 * 000000018004F9D8: lea     r8, aVertex_24; "/Vertex"
 * 000000018004F9DF: mov     rdx, rax
 * 000000018004F9E2: lea     rcx, [rbp+9E20h+var_3208]
 * 000000018004F9E9: call    sub_18002C088
 * 000000018004F9EE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004F9F3: mov     rcx, rax
 * 000000018004F9F6: call    sub_1800D46B4
 * 000000018004F9FB: mov     cs:byte_18026A584, al
 * 000000018004FA01: lea     rcx, [rbp+9E20h+var_31E8]; void *
 * 000000018004FA08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FA0D: nop
 * 000000018004FA0E: lea     rcx, [rbp+9E20h+var_31C8]; void *
 * 000000018004FA15: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FA1A: nop
 * 000000018004FA1B: lea     rcx, dword_18026A588
 * 000000018004FA22: call    _Init_thread_footer
 * 000000018004FA27: mov     rax, [rdi+rbx*8]
 * 000000018004FA2B: mov     ecx, [r15+rax]
 * 000000018004FA2F: cmp     cs:dword_18026A590, ecx
 * 000000018004FA35: jle     loc_18004FB17
 * 000000018004FA3B: lea     rcx, dword_18026A590
 * 000000018004FA42: call    _Init_thread_header
 * 000000018004FA47: cmp     cs:dword_18026A590, r14d
 * 000000018004FA4E: jnz     loc_18004FB17
 * 000000018004FA54: mov     qword ptr [rbp+9E20h+var_9450], r13
 * 000000018004FA5B: lea     rax, unk_18019DC90
 * 000000018004FA62: mov     qword ptr [rbp+9E20h+var_9450+8], rax
 * 000000018004FA69: movups  xmm0, [rbp+9E20h+var_9450]
 * 000000018004FA70: movups  [rbp+9E20h+var_7518], xmm0
 * 000000018004FA77: mov     dword ptr [rbp+9E20h+var_7508], esi
 * 000000018004FA7D: mov     dword ptr [rbp+9E20h+var_7508+4], esi
 * 000000018004FA83: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FA88: movups  xmm0, [rbp+9E20h+var_7508]
 * 000000018004FA8F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FA94: call    sub_1800456E0
 * 000000018004FA99: mov     r8, rax
 * 000000018004FA9C: mov     r9d, r12d
 * 000000018004FA9F: mov     edx, 42h ; 'B'
 * 000000018004FAA4: lea     rcx, [rbp+9E20h+var_3168]; Src
 * 000000018004FAAB: call    sub_1800D45C8
 * 000000018004FAB0: nop
 * 000000018004FAB1: mov     r8, rax
 * 000000018004FAB4: lea     rdx, aStandardshader_168; "StandardShader/ShaderModel40/"
 * 000000018004FABB: lea     rcx, [rbp+9E20h+var_3188]
 * 000000018004FAC2: call    sub_1800454BC
 * 000000018004FAC7: nop
 * 000000018004FAC8: lea     r8, aVertex_25; "/Vertex"
 * 000000018004FACF: mov     rdx, rax
 * 000000018004FAD2: lea     rcx, [rbp+9E20h+var_31A8]
 * 000000018004FAD9: call    sub_18002C088
 * 000000018004FADE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FAE3: mov     rcx, rax
 * 000000018004FAE6: call    sub_1800D46B4
 * 000000018004FAEB: mov     cs:byte_18026A58C, al
 * 000000018004FAF1: lea     rcx, [rbp+9E20h+var_3188]; void *
 * 000000018004FAF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FAFD: nop
 * 000000018004FAFE: lea     rcx, [rbp+9E20h+var_3168]; void *
 * 000000018004FB05: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FB0A: nop
 * 000000018004FB0B: lea     rcx, dword_18026A590
 * 000000018004FB12: call    _Init_thread_footer
 * 000000018004FB17: mov     rax, [rdi+rbx*8]
 * 000000018004FB1B: mov     ecx, [r15+rax]
 * 000000018004FB1F: cmp     cs:dword_18026A598, ecx
 * 000000018004FB25: jle     loc_18004FC07
 * 000000018004FB2B: lea     rcx, dword_18026A598
 * 000000018004FB32: call    _Init_thread_header
 * 000000018004FB37: cmp     cs:dword_18026A598, r14d
 * 000000018004FB3E: jnz     loc_18004FC07
 * 000000018004FB44: mov     qword ptr [rbp+9E20h+var_9440], r13
 * 000000018004FB4B: lea     rax, unk_18019DC90
 * 000000018004FB52: mov     qword ptr [rbp+9E20h+var_9440+8], rax
 * 000000018004FB59: movups  xmm0, [rbp+9E20h+var_9440]
 * 000000018004FB60: movups  [rbp+9E20h+var_74F8], xmm0
 * 000000018004FB67: mov     dword ptr [rbp+9E20h+var_74E8], esi
 * 000000018004FB6D: mov     dword ptr [rbp+9E20h+var_74E8+4], esi
 * 000000018004FB73: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FB78: movups  xmm0, [rbp+9E20h+var_74E8]
 * 000000018004FB7F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FB84: call    sub_1800456E0
 * 000000018004FB89: mov     r8, rax
 * 000000018004FB8C: mov     r9d, r12d
 * 000000018004FB8F: mov     edx, 48h ; 'H'
 * 000000018004FB94: lea     rcx, [rbp+9E20h+var_3108]; Src
 * 000000018004FB9B: call    sub_1800D45C8
 * 000000018004FBA0: nop
 * 000000018004FBA1: mov     r8, rax
 * 000000018004FBA4: lea     rdx, aStandardshader_169; "StandardShader/ShaderModel40/"
 * 000000018004FBAB: lea     rcx, [rbp+9E20h+var_3128]
 * 000000018004FBB2: call    sub_1800454BC
 * 000000018004FBB7: nop
 * 000000018004FBB8: lea     r8, aVertex_26; "/Vertex"
 * 000000018004FBBF: mov     rdx, rax
 * 000000018004FBC2: lea     rcx, [rbp+9E20h+var_3148]
 * 000000018004FBC9: call    sub_18002C088
 * 000000018004FBCE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FBD3: mov     rcx, rax
 * 000000018004FBD6: call    sub_1800D46B4
 * 000000018004FBDB: mov     cs:byte_18026A594, al
 * 000000018004FBE1: lea     rcx, [rbp+9E20h+var_3128]; void *
 * 000000018004FBE8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FBED: nop
 * 000000018004FBEE: lea     rcx, [rbp+9E20h+var_3108]; void *
 * 000000018004FBF5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FBFA: nop
 * 000000018004FBFB: lea     rcx, dword_18026A598
 * 000000018004FC02: call    _Init_thread_footer
 * 000000018004FC07: mov     rax, [rdi+rbx*8]
 * 000000018004FC0B: mov     ecx, [r15+rax]
 * 000000018004FC0F: cmp     cs:dword_18026A5A0, ecx
 * 000000018004FC15: jle     loc_18004FCF7
 * 000000018004FC1B: lea     rcx, dword_18026A5A0
 * 000000018004FC22: call    _Init_thread_header
 * 000000018004FC27: cmp     cs:dword_18026A5A0, r14d
 * 000000018004FC2E: jnz     loc_18004FCF7
 * 000000018004FC34: mov     qword ptr [rbp+9E20h+var_9430], r13
 * 000000018004FC3B: lea     rax, unk_18019DC90
 * 000000018004FC42: mov     qword ptr [rbp+9E20h+var_9430+8], rax
 * 000000018004FC49: movups  xmm0, [rbp+9E20h+var_9430]
 * 000000018004FC50: movups  [rbp+9E20h+var_74D8], xmm0
 * 000000018004FC57: mov     dword ptr [rbp+9E20h+var_74C8], esi
 * 000000018004FC5D: mov     dword ptr [rbp+9E20h+var_74C8+4], esi
 * 000000018004FC63: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FC68: movups  xmm0, [rbp+9E20h+var_74C8]
 * 000000018004FC6F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FC74: call    sub_1800456E0
 * 000000018004FC79: mov     r8, rax
 * 000000018004FC7C: mov     r9d, r12d
 * 000000018004FC7F: mov     edx, 4Ah ; 'J'
 * 000000018004FC84: lea     rcx, [rbp+9E20h+var_30A8]; Src
 * 000000018004FC8B: call    sub_1800D45C8
 * 000000018004FC90: nop
 * 000000018004FC91: mov     r8, rax
 * 000000018004FC94: lea     rdx, aStandardshader_170; "StandardShader/ShaderModel40/"
 * 000000018004FC9B: lea     rcx, [rbp+9E20h+var_30C8]
 * 000000018004FCA2: call    sub_1800454BC
 * 000000018004FCA7: nop
 * 000000018004FCA8: lea     r8, aVertex_27; "/Vertex"
 * 000000018004FCAF: mov     rdx, rax
 * 000000018004FCB2: lea     rcx, [rbp+9E20h+var_30E8]
 * 000000018004FCB9: call    sub_18002C088
 * 000000018004FCBE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FCC3: mov     rcx, rax
 * 000000018004FCC6: call    sub_1800D46B4
 * 000000018004FCCB: mov     cs:byte_18026A59C, al
 * 000000018004FCD1: lea     rcx, [rbp+9E20h+var_30C8]; void *
 * 000000018004FCD8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FCDD: nop
 * 000000018004FCDE: lea     rcx, [rbp+9E20h+var_30A8]; void *
 * 000000018004FCE5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FCEA: nop
 * 000000018004FCEB: lea     rcx, dword_18026A5A0
 * 000000018004FCF2: call    _Init_thread_footer
 * 000000018004FCF7: mov     rax, [rdi+rbx*8]
 * 000000018004FCFB: mov     ecx, [r15+rax]
 * 000000018004FCFF: cmp     cs:dword_18026A5A8, ecx
 * 000000018004FD05: jle     loc_18004FDE7
 * 000000018004FD0B: lea     rcx, dword_18026A5A8
 * 000000018004FD12: call    _Init_thread_header
 * 000000018004FD17: cmp     cs:dword_18026A5A8, r14d
 * 000000018004FD1E: jnz     loc_18004FDE7
 * 000000018004FD24: mov     qword ptr [rbp+9E20h+var_9420], r13
 * 000000018004FD2B: lea     rax, unk_18019DC90
 * 000000018004FD32: mov     qword ptr [rbp+9E20h+var_9420+8], rax
 * 000000018004FD39: movups  xmm0, [rbp+9E20h+var_9420]
 * 000000018004FD40: movups  [rbp+9E20h+var_74B8], xmm0
 * 000000018004FD47: mov     dword ptr [rbp+9E20h+var_74A8], esi
 * 000000018004FD4D: mov     dword ptr [rbp+9E20h+var_74A8+4], esi
 * 000000018004FD53: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FD58: movups  xmm0, [rbp+9E20h+var_74A8]
 * 000000018004FD5F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FD64: call    sub_1800456E0
 * 000000018004FD69: mov     r8, rax
 * 000000018004FD6C: mov     r9d, r12d
 * 000000018004FD6F: mov     edx, 50h ; 'P'
 * 000000018004FD74: lea     rcx, [rbp+9E20h+var_3048]; Src
 * 000000018004FD7B: call    sub_1800D45C8
 * 000000018004FD80: nop
 * 000000018004FD81: mov     r8, rax
 * 000000018004FD84: lea     rdx, aStandardshader_171; "StandardShader/ShaderModel40/"
 * 000000018004FD8B: lea     rcx, [rbp+9E20h+var_3068]
 * 000000018004FD92: call    sub_1800454BC
 * 000000018004FD97: nop
 * 000000018004FD98: lea     r8, aVertex_28; "/Vertex"
 * 000000018004FD9F: mov     rdx, rax
 * 000000018004FDA2: lea     rcx, [rbp+9E20h+var_3088]
 * 000000018004FDA9: call    sub_18002C088
 * 000000018004FDAE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FDB3: mov     rcx, rax
 * 000000018004FDB6: call    sub_1800D46B4
 * 000000018004FDBB: mov     cs:byte_18026A5A4, al
 * 000000018004FDC1: lea     rcx, [rbp+9E20h+var_3068]; void *
 * 000000018004FDC8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FDCD: nop
 * 000000018004FDCE: lea     rcx, [rbp+9E20h+var_3048]; void *
 * 000000018004FDD5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FDDA: nop
 * 000000018004FDDB: lea     rcx, dword_18026A5A8
 * 000000018004FDE2: call    _Init_thread_footer
 * 000000018004FDE7: mov     rax, [rdi+rbx*8]
 * 000000018004FDEB: mov     ecx, [r15+rax]
 * 000000018004FDEF: cmp     cs:dword_18026A5B0, ecx
 * 000000018004FDF5: jle     loc_18004FED7
 * 000000018004FDFB: lea     rcx, dword_18026A5B0
 * 000000018004FE02: call    _Init_thread_header
 * 000000018004FE07: cmp     cs:dword_18026A5B0, r14d
 * 000000018004FE0E: jnz     loc_18004FED7
 * 000000018004FE14: mov     qword ptr [rbp+9E20h+var_9410], r13
 * 000000018004FE1B: lea     rax, unk_18019DC90
 * 000000018004FE22: mov     qword ptr [rbp+9E20h+var_9410+8], rax
 * 000000018004FE29: movups  xmm0, [rbp+9E20h+var_9410]
 * 000000018004FE30: movups  [rbp+9E20h+var_7498], xmm0
 * 000000018004FE37: mov     dword ptr [rbp+9E20h+var_7488], esi
 * 000000018004FE3D: mov     dword ptr [rbp+9E20h+var_7488+4], esi
 * 000000018004FE43: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FE48: movups  xmm0, [rbp+9E20h+var_7488]
 * 000000018004FE4F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FE54: call    sub_1800456E0
 * 000000018004FE59: mov     r8, rax
 * 000000018004FE5C: mov     r9d, r12d
 * 000000018004FE5F: mov     edx, 52h ; 'R'
 * 000000018004FE64: lea     rcx, [rbp+9E20h+var_2FE8]; Src
 * 000000018004FE6B: call    sub_1800D45C8
 * 000000018004FE70: nop
 * 000000018004FE71: mov     r8, rax
 * 000000018004FE74: lea     rdx, aStandardshader_172; "StandardShader/ShaderModel40/"
 * 000000018004FE7B: lea     rcx, [rbp+9E20h+var_3008]
 * 000000018004FE82: call    sub_1800454BC
 * 000000018004FE87: nop
 * 000000018004FE88: lea     r8, aVertex_29; "/Vertex"
 * 000000018004FE8F: mov     rdx, rax
 * 000000018004FE92: lea     rcx, [rbp+9E20h+var_3028]
 * 000000018004FE99: call    sub_18002C088
 * 000000018004FE9E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FEA3: mov     rcx, rax
 * 000000018004FEA6: call    sub_1800D46B4
 * 000000018004FEAB: mov     cs:byte_18026A5AC, al
 * 000000018004FEB1: lea     rcx, [rbp+9E20h+var_3008]; void *
 * 000000018004FEB8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FEBD: nop
 * 000000018004FEBE: lea     rcx, [rbp+9E20h+var_2FE8]; void *
 * 000000018004FEC5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FECA: nop
 * 000000018004FECB: lea     rcx, dword_18026A5B0
 * 000000018004FED2: call    _Init_thread_footer
 * 000000018004FED7: mov     rax, [rdi+rbx*8]
 * 000000018004FEDB: mov     ecx, [r15+rax]
 * 000000018004FEDF: cmp     cs:dword_18026A5B8, ecx
 * 000000018004FEE5: jle     loc_18004FFC7
 * 000000018004FEEB: lea     rcx, dword_18026A5B8
 * 000000018004FEF2: call    _Init_thread_header
 * 000000018004FEF7: cmp     cs:dword_18026A5B8, r14d
 * 000000018004FEFE: jnz     loc_18004FFC7
 * 000000018004FF04: mov     qword ptr [rbp+9E20h+var_9400], r13
 * 000000018004FF0B: lea     rax, unk_18019DC90
 * 000000018004FF12: mov     qword ptr [rbp+9E20h+var_9400+8], rax
 * 000000018004FF19: movups  xmm0, [rbp+9E20h+var_9400]
 * 000000018004FF20: movups  [rbp+9E20h+var_7478], xmm0
 * 000000018004FF27: mov     dword ptr [rbp+9E20h+var_7468], esi
 * 000000018004FF2D: mov     dword ptr [rbp+9E20h+var_7468+4], esi
 * 000000018004FF33: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018004FF38: movups  xmm0, [rbp+9E20h+var_7468]
 * 000000018004FF3F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018004FF44: call    sub_1800456E0
 * 000000018004FF49: mov     r8, rax
 * 000000018004FF4C: mov     r9d, r12d
 * 000000018004FF4F: mov     edx, 58h ; 'X'
 * 000000018004FF54: lea     rcx, [rbp+9E20h+var_2F88]; Src
 * 000000018004FF5B: call    sub_1800D45C8
 * 000000018004FF60: nop
 * 000000018004FF61: mov     r8, rax
 * 000000018004FF64: lea     rdx, aStandardshader_173; "StandardShader/ShaderModel40/"
 * 000000018004FF6B: lea     rcx, [rbp+9E20h+var_2FA8]
 * 000000018004FF72: call    sub_1800454BC
 * 000000018004FF77: nop
 * 000000018004FF78: lea     r8, aVertex_30; "/Vertex"
 * 000000018004FF7F: mov     rdx, rax
 * 000000018004FF82: lea     rcx, [rbp+9E20h+var_2FC8]
 * 000000018004FF89: call    sub_18002C088
 * 000000018004FF8E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018004FF93: mov     rcx, rax
 * 000000018004FF96: call    sub_1800D46B4
 * 000000018004FF9B: mov     cs:byte_18026A5B4, al
 * 000000018004FFA1: lea     rcx, [rbp+9E20h+var_2FA8]; void *
 * 000000018004FFA8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FFAD: nop
 * 000000018004FFAE: lea     rcx, [rbp+9E20h+var_2F88]; void *
 * 000000018004FFB5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FFBA: nop
 * 000000018004FFBB: lea     rcx, dword_18026A5B8
 * 000000018004FFC2: call    _Init_thread_footer
 * 000000018004FFC7: mov     rax, [rdi+rbx*8]
 * 000000018004FFCB: mov     ecx, [r15+rax]
 * 000000018004FFCF: cmp     cs:dword_18026A5C0, ecx
 * 000000018004FFD5: jle     loc_1800500B7
 * 000000018004FFDB: lea     rcx, dword_18026A5C0
 * 000000018004FFE2: call    _Init_thread_header
 * 000000018004FFE7: cmp     cs:dword_18026A5C0, r14d
 * 000000018004FFEE: jnz     loc_1800500B7
 * 000000018004FFF4: mov     qword ptr [rbp+9E20h+var_93E0], r13
 * 000000018004FFFB: lea     rax, unk_18019DC90
 * 0000000180050002: mov     qword ptr [rbp+9E20h+var_93E0+8], rax
 * 0000000180050009: movups  xmm0, [rbp+9E20h+var_93E0]
 * 0000000180050010: movups  [rbp+9E20h+var_7458], xmm0
 * 0000000180050017: mov     dword ptr [rbp+9E20h+var_7448], esi
 * 000000018005001D: mov     dword ptr [rbp+9E20h+var_7448+4], esi
 * 0000000180050023: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050028: movups  xmm0, [rbp+9E20h+var_7448]
 * 000000018005002F: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050034: call    sub_1800456E0
 * 0000000180050039: mov     r8, rax
 * 000000018005003C: mov     r9d, r12d
 * 000000018005003F: mov     edx, 5Ah ; 'Z'
 * 0000000180050044: lea     rcx, [rbp+9E20h+var_2F28]; Src
 * 000000018005004B: call    sub_1800D45C8
 * 0000000180050050: nop
 * 0000000180050051: mov     r8, rax
 * 0000000180050054: lea     rdx, aStandardshader_174; "StandardShader/ShaderModel40/"
 * 000000018005005B: lea     rcx, [rbp+9E20h+var_2F48]
 * 0000000180050062: call    sub_1800454BC
 * 0000000180050067: nop
 * 0000000180050068: lea     r8, aVertex_31; "/Vertex"
 * 000000018005006F: mov     rdx, rax
 * 0000000180050072: lea     rcx, [rbp+9E20h+var_2F68]
 * 0000000180050079: call    sub_18002C088
 * 000000018005007E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050083: mov     rcx, rax
 * 0000000180050086: call    sub_1800D46B4
 * 000000018005008B: mov     cs:byte_18026A5BC, al
 * 0000000180050091: lea     rcx, [rbp+9E20h+var_2F48]; void *
 * 0000000180050098: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005009D: nop
 * 000000018005009E: lea     rcx, [rbp+9E20h+var_2F28]; void *
 * 00000001800500A5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800500AA: nop
 * 00000001800500AB: lea     rcx, dword_18026A5C0
 * 00000001800500B2: call    _Init_thread_footer
 * 00000001800500B7: mov     rax, [rdi+rbx*8]
 * 00000001800500BB: lea     r13, unk_18019DC90
 * 00000001800500C2: mov     eax, [r15+rax]
 * 00000001800500C6: cmp     cs:dword_18026A5C8, eax
 * 00000001800500CC: jle     loc_1800501AE
 * 00000001800500D2: lea     rcx, dword_18026A5C8
 * 00000001800500D9: call    _Init_thread_header
 * 00000001800500DE: cmp     cs:dword_18026A5C8, r14d
 * 00000001800500E5: jnz     loc_1800501AE
 * 00000001800500EB: mov     qword ptr [rbp+9E20h+var_93F0], r13
 * 00000001800500F2: lea     rax, aBlur8_0; "Blur8"
 * 00000001800500F9: mov     qword ptr [rbp+9E20h+var_93F0+8], rax
 * 0000000180050100: movups  xmm0, [rbp+9E20h+var_93F0]
 * 0000000180050107: movups  [rbp+9E20h+var_7438], xmm0
 * 000000018005010E: mov     dword ptr [rbp+9E20h+var_7428], esi
 * 0000000180050114: mov     dword ptr [rbp+9E20h+var_7428+4], esi
 * 000000018005011A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005011F: movups  xmm0, [rbp+9E20h+var_7428]
 * 0000000180050126: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005012B: call    sub_1800456E0
 * 0000000180050130: mov     r8, rax
 * 0000000180050133: mov     r9d, r12d
 * 0000000180050136: mov     edx, 60h ; '`'
 * 000000018005013B: lea     rcx, [rbp+9E20h+var_2EC8]; Src
 * 0000000180050142: call    sub_1800D45C8
 * 0000000180050147: nop
 * 0000000180050148: mov     r8, rax
 * 000000018005014B: lea     rdx, aStandardshader_175; "StandardShader/ShaderModel40/"
 * 0000000180050152: lea     rcx, [rbp+9E20h+var_2EE8]
 * 0000000180050159: call    sub_1800454BC
 * 000000018005015E: nop
 * 000000018005015F: lea     r8, aVertex_32; "/Vertex"
 * 0000000180050166: mov     rdx, rax
 * 0000000180050169: lea     rcx, [rbp+9E20h+var_2F08]
 * 0000000180050170: call    sub_18002C088
 * 0000000180050175: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005017A: mov     rcx, rax
 * 000000018005017D: call    sub_1800D46B4
 * 0000000180050182: mov     cs:byte_18026A5C4, al
 * 0000000180050188: lea     rcx, [rbp+9E20h+var_2EE8]; void *
 * 000000018005018F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050194: nop
 * 0000000180050195: lea     rcx, [rbp+9E20h+var_2EC8]; void *
 * 000000018005019C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800501A1: nop
 * 00000001800501A2: lea     rcx, dword_18026A5C8
 * 00000001800501A9: call    _Init_thread_footer
 * 00000001800501AE: mov     rax, [rdi+rbx*8]
 * 00000001800501B2: mov     ecx, [r15+rax]
 * 00000001800501B6: cmp     cs:dword_18026A5D0, ecx
 * 00000001800501BC: jle     loc_180050298
 * 00000001800501C2: lea     rcx, dword_18026A5D0
 * 00000001800501C9: call    _Init_thread_header
 * 00000001800501CE: cmp     cs:dword_18026A5D0, r14d
 * 00000001800501D5: jnz     loc_180050298
 * 00000001800501DB: mov     qword ptr [rsp+9F20h+var_9ED0], r13
 * 00000001800501E0: lea     rax, aBlur8_0; "Blur8"
 * 00000001800501E7: mov     qword ptr [rsp+9F20h+var_9ED0+8], rax
 * 00000001800501EC: movups  xmm0, [rsp+9F20h+var_9ED0]
 * 00000001800501F1: movups  [rbp+9E20h+var_7418], xmm0
 * 00000001800501F8: mov     dword ptr [rbp+9E20h+var_7408], esi
 * 00000001800501FE: mov     dword ptr [rbp+9E20h+var_7408+4], esi
 * 0000000180050204: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050209: movups  xmm0, [rbp+9E20h+var_7408]
 * 0000000180050210: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050215: call    sub_1800456E0
 * 000000018005021A: mov     r8, rax
 * 000000018005021D: mov     r9d, r12d
 * 0000000180050220: mov     edx, 62h ; 'b'
 * 0000000180050225: lea     rcx, [rbp+9E20h+var_2E68]; Src
 * 000000018005022C: call    sub_1800D45C8
 * 0000000180050231: nop
 * 0000000180050232: mov     r8, rax
 * 0000000180050235: lea     rdx, aStandardshader_176; "StandardShader/ShaderModel40/"
 * 000000018005023C: lea     rcx, [rbp+9E20h+var_2E88]
 * 0000000180050243: call    sub_1800454BC
 * 0000000180050248: nop
 * 0000000180050249: lea     r8, aVertex_33; "/Vertex"
 * 0000000180050250: mov     rdx, rax
 * 0000000180050253: lea     rcx, [rbp+9E20h+var_2EA8]
 * 000000018005025A: call    sub_18002C088
 * 000000018005025F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050264: mov     rcx, rax
 * 0000000180050267: call    sub_1800D46B4
 * 000000018005026C: mov     cs:byte_18026A5CC, al
 * 0000000180050272: lea     rcx, [rbp+9E20h+var_2E88]; void *
 * 0000000180050279: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005027E: nop
 * 000000018005027F: lea     rcx, [rbp+9E20h+var_2E68]; void *
 * 0000000180050286: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005028B: nop
 * 000000018005028C: lea     rcx, dword_18026A5D0
 * 0000000180050293: call    _Init_thread_footer
 * 0000000180050298: mov     rax, [rdi+rbx*8]
 * 000000018005029C: mov     ecx, [r15+rax]
 * 00000001800502A0: cmp     cs:dword_18026A5D8, ecx
 * 00000001800502A6: jle     loc_180050388
 * 00000001800502AC: lea     rcx, dword_18026A5D8
 * 00000001800502B3: call    _Init_thread_header
 * 00000001800502B8: cmp     cs:dword_18026A5D8, r14d
 * 00000001800502BF: jnz     loc_180050388
 * 00000001800502C5: mov     qword ptr [rbp+9E20h+var_93D0], r13
 * 00000001800502CC: lea     rax, aBlur8_0; "Blur8"
 * 00000001800502D3: mov     qword ptr [rbp+9E20h+var_93D0+8], rax
 * 00000001800502DA: movups  xmm0, [rbp+9E20h+var_93D0]
 * 00000001800502E1: movups  [rbp+9E20h+var_73F8], xmm0
 * 00000001800502E8: mov     dword ptr [rbp+9E20h+var_73E8], esi
 * 00000001800502EE: mov     dword ptr [rbp+9E20h+var_73E8+4], esi
 * 00000001800502F4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800502F9: movups  xmm0, [rbp+9E20h+var_73E8]
 * 0000000180050300: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050305: call    sub_1800456E0
 * 000000018005030A: mov     r8, rax
 * 000000018005030D: mov     r9d, r12d
 * 0000000180050310: mov     edx, 68h ; 'h'
 * 0000000180050315: lea     rcx, [rbp+9E20h+var_2E08]; Src
 * 000000018005031C: call    sub_1800D45C8
 * 0000000180050321: nop
 * 0000000180050322: mov     r8, rax
 * 0000000180050325: lea     rdx, aStandardshader_177; "StandardShader/ShaderModel40/"
 * 000000018005032C: lea     rcx, [rbp+9E20h+var_2E28]
 * 0000000180050333: call    sub_1800454BC
 * 0000000180050338: nop
 * 0000000180050339: lea     r8, aVertex_34; "/Vertex"
 * 0000000180050340: mov     rdx, rax
 * 0000000180050343: lea     rcx, [rbp+9E20h+var_2E48]
 * 000000018005034A: call    sub_18002C088
 * 000000018005034F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050354: mov     rcx, rax
 * 0000000180050357: call    sub_1800D46B4
 * 000000018005035C: mov     cs:byte_18026A5D4, al
 * 0000000180050362: lea     rcx, [rbp+9E20h+var_2E28]; void *
 * 0000000180050369: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005036E: nop
 * 000000018005036F: lea     rcx, [rbp+9E20h+var_2E08]; void *
 * 0000000180050376: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005037B: nop
 * 000000018005037C: lea     rcx, dword_18026A5D8
 * 0000000180050383: call    _Init_thread_footer
 * 0000000180050388: mov     rax, [rdi+rbx*8]
 * 000000018005038C: mov     ecx, [r15+rax]
 * 0000000180050390: cmp     cs:dword_18026A5E0, ecx
 * 0000000180050396: jle     loc_180050478
 * 000000018005039C: lea     rcx, dword_18026A5E0
 * 00000001800503A3: call    _Init_thread_header
 * 00000001800503A8: cmp     cs:dword_18026A5E0, r14d
 * 00000001800503AF: jnz     loc_180050478
 * 00000001800503B5: mov     qword ptr [rbp+9E20h+var_93C0], r13
 * 00000001800503BC: lea     rax, aBlur8_0; "Blur8"
 * 00000001800503C3: mov     qword ptr [rbp+9E20h+var_93C0+8], rax
 * 00000001800503CA: movups  xmm0, [rbp+9E20h+var_93C0]
 * 00000001800503D1: movups  [rbp+9E20h+var_73D8], xmm0
 * 00000001800503D8: mov     dword ptr [rbp+9E20h+var_73C8], esi
 * 00000001800503DE: mov     dword ptr [rbp+9E20h+var_73C8+4], esi
 * 00000001800503E4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800503E9: movups  xmm0, [rbp+9E20h+var_73C8]
 * 00000001800503F0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800503F5: call    sub_1800456E0
 * 00000001800503FA: mov     r8, rax
 * 00000001800503FD: mov     r9d, r12d
 * 0000000180050400: mov     edx, 6Ah ; 'j'
 * 0000000180050405: lea     rcx, [rbp+9E20h+var_2DA8]; Src
 * 000000018005040C: call    sub_1800D45C8
 * 0000000180050411: nop
 * 0000000180050412: mov     r8, rax
 * 0000000180050415: lea     rdx, aStandardshader_178; "StandardShader/ShaderModel40/"
 * 000000018005041C: lea     rcx, [rbp+9E20h+var_2DC8]
 * 0000000180050423: call    sub_1800454BC
 * 0000000180050428: nop
 * 0000000180050429: lea     r8, aVertex_35; "/Vertex"
 * 0000000180050430: mov     rdx, rax
 * 0000000180050433: lea     rcx, [rbp+9E20h+var_2DE8]
 * 000000018005043A: call    sub_18002C088
 * 000000018005043F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050444: mov     rcx, rax
 * 0000000180050447: call    sub_1800D46B4
 * 000000018005044C: mov     cs:byte_18026A5DC, al
 * 0000000180050452: lea     rcx, [rbp+9E20h+var_2DC8]; void *
 * 0000000180050459: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005045E: nop
 * 000000018005045F: lea     rcx, [rbp+9E20h+var_2DA8]; void *
 * 0000000180050466: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005046B: nop
 * 000000018005046C: lea     rcx, dword_18026A5E0
 * 0000000180050473: call    _Init_thread_footer
 * 0000000180050478: mov     rax, [rdi+rbx*8]
 * 000000018005047C: mov     ecx, [r15+rax]
 * 0000000180050480: cmp     cs:dword_18026A5E8, ecx
 * 0000000180050486: jle     loc_180050568
 * 000000018005048C: lea     rcx, dword_18026A5E8
 * 0000000180050493: call    _Init_thread_header
 * 0000000180050498: cmp     cs:dword_18026A5E8, r14d
 * 000000018005049F: jnz     loc_180050568
 * 00000001800504A5: mov     qword ptr [rbp+9E20h+var_93B0], r13
 * 00000001800504AC: lea     rax, aBlur8_0; "Blur8"
 * 00000001800504B3: mov     qword ptr [rbp+9E20h+var_93B0+8], rax
 * 00000001800504BA: movups  xmm0, [rbp+9E20h+var_93B0]
 * 00000001800504C1: movups  [rbp+9E20h+var_73B8], xmm0
 * 00000001800504C8: mov     dword ptr [rbp+9E20h+var_73A8], esi
 * 00000001800504CE: mov     dword ptr [rbp+9E20h+var_73A8+4], esi
 * 00000001800504D4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800504D9: movups  xmm0, [rbp+9E20h+var_73A8]
 * 00000001800504E0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800504E5: call    sub_1800456E0
 * 00000001800504EA: mov     r8, rax
 * 00000001800504ED: mov     r9d, r12d
 * 00000001800504F0: mov     edx, 70h ; 'p'
 * 00000001800504F5: lea     rcx, [rbp+9E20h+var_2D48]; Src
 * 00000001800504FC: call    sub_1800D45C8
 * 0000000180050501: nop
 * 0000000180050502: mov     r8, rax
 * 0000000180050505: lea     rdx, aStandardshader_179; "StandardShader/ShaderModel40/"
 * 000000018005050C: lea     rcx, [rbp+9E20h+var_2D68]
 * 0000000180050513: call    sub_1800454BC
 * 0000000180050518: nop
 * 0000000180050519: lea     r8, aVertex_36; "/Vertex"
 * 0000000180050520: mov     rdx, rax
 * 0000000180050523: lea     rcx, [rbp+9E20h+var_2D88]
 * 000000018005052A: call    sub_18002C088
 * 000000018005052F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050534: mov     rcx, rax
 * 0000000180050537: call    sub_1800D46B4
 * 000000018005053C: mov     cs:byte_18026A5E4, al
 * 0000000180050542: lea     rcx, [rbp+9E20h+var_2D68]; void *
 * 0000000180050549: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005054E: nop
 * 000000018005054F: lea     rcx, [rbp+9E20h+var_2D48]; void *
 * 0000000180050556: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005055B: nop
 * 000000018005055C: lea     rcx, dword_18026A5E8
 * 0000000180050563: call    _Init_thread_footer
 * 0000000180050568: mov     rax, [rdi+rbx*8]
 * 000000018005056C: mov     ecx, [r15+rax]
 * 0000000180050570: cmp     cs:dword_18026A5F0, ecx
 * 0000000180050576: jle     loc_180050658
 * 000000018005057C: lea     rcx, dword_18026A5F0
 * 0000000180050583: call    _Init_thread_header
 * 0000000180050588: cmp     cs:dword_18026A5F0, r14d
 * 000000018005058F: jnz     loc_180050658
 * 0000000180050595: mov     qword ptr [rbp+9E20h+var_93A0], r13
 * 000000018005059C: lea     rax, aBlur8_0; "Blur8"
 * 00000001800505A3: mov     qword ptr [rbp+9E20h+var_93A0+8], rax
 * 00000001800505AA: movups  xmm0, [rbp+9E20h+var_93A0]
 * 00000001800505B1: movups  [rbp+9E20h+var_7398], xmm0
 * 00000001800505B8: mov     dword ptr [rbp+9E20h+var_7388], esi
 * 00000001800505BE: mov     dword ptr [rbp+9E20h+var_7388+4], esi
 * 00000001800505C4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800505C9: movups  xmm0, [rbp+9E20h+var_7388]
 * 00000001800505D0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800505D5: call    sub_1800456E0
 * 00000001800505DA: mov     r8, rax
 * 00000001800505DD: mov     r9d, r12d
 * 00000001800505E0: mov     edx, 72h ; 'r'
 * 00000001800505E5: lea     rcx, [rbp+9E20h+var_2CE8]; Src
 * 00000001800505EC: call    sub_1800D45C8
 * 00000001800505F1: nop
 * 00000001800505F2: mov     r8, rax
 * 00000001800505F5: lea     rdx, aStandardshader_180; "StandardShader/ShaderModel40/"
 * 00000001800505FC: lea     rcx, [rbp+9E20h+var_2D08]
 * 0000000180050603: call    sub_1800454BC
 * 0000000180050608: nop
 * 0000000180050609: lea     r8, aVertex_37; "/Vertex"
 * 0000000180050610: mov     rdx, rax
 * 0000000180050613: lea     rcx, [rbp+9E20h+var_2D28]
 * 000000018005061A: call    sub_18002C088
 * 000000018005061F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050624: mov     rcx, rax
 * 0000000180050627: call    sub_1800D46B4
 * 000000018005062C: mov     cs:byte_18026A5EC, al
 * 0000000180050632: lea     rcx, [rbp+9E20h+var_2D08]; void *
 * 0000000180050639: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005063E: nop
 * 000000018005063F: lea     rcx, [rbp+9E20h+var_2CE8]; void *
 * 0000000180050646: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005064B: nop
 * 000000018005064C: lea     rcx, dword_18026A5F0
 * 0000000180050653: call    _Init_thread_footer
 * 0000000180050658: mov     rax, [rdi+rbx*8]
 * 000000018005065C: mov     ecx, [r15+rax]
 * 0000000180050660: cmp     cs:dword_18026A5F8, ecx
 * 0000000180050666: jle     loc_180050748
 * 000000018005066C: lea     rcx, dword_18026A5F8
 * 0000000180050673: call    _Init_thread_header
 * 0000000180050678: cmp     cs:dword_18026A5F8, r14d
 * 000000018005067F: jnz     loc_180050748
 * 0000000180050685: mov     qword ptr [rbp+9E20h+var_9390], r13
 * 000000018005068C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180050693: mov     qword ptr [rbp+9E20h+var_9390+8], rax
 * 000000018005069A: movups  xmm0, [rbp+9E20h+var_9390]
 * 00000001800506A1: movups  [rbp+9E20h+var_9058], xmm0
 * 00000001800506A8: mov     dword ptr [rbp+9E20h+var_9048], esi
 * 00000001800506AE: mov     dword ptr [rbp+9E20h+var_9048+4], esi
 * 00000001800506B4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800506B9: movups  xmm0, [rbp+9E20h+var_9048]
 * 00000001800506C0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800506C5: call    sub_1800456E0
 * 00000001800506CA: mov     r8, rax
 * 00000001800506CD: mov     r9d, r12d
 * 00000001800506D0: mov     edx, 78h ; 'x'
 * 00000001800506D5: lea     rcx, [rbp+9E20h+var_2C88]; Src
 * 00000001800506DC: call    sub_1800D45C8
 * 00000001800506E1: nop
 * 00000001800506E2: mov     r8, rax
 * 00000001800506E5: lea     rdx, aStandardshader_181; "StandardShader/ShaderModel40/"
 * 00000001800506EC: lea     rcx, [rbp+9E20h+var_2CA8]
 * 00000001800506F3: call    sub_1800454BC
 * 00000001800506F8: nop
 * 00000001800506F9: lea     r8, aVertex_38; "/Vertex"
 * 0000000180050700: mov     rdx, rax
 * 0000000180050703: lea     rcx, [rbp+9E20h+var_2CC8]
 * 000000018005070A: call    sub_18002C088
 * 000000018005070F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050714: mov     rcx, rax
 * 0000000180050717: call    sub_1800D46B4
 * 000000018005071C: mov     cs:byte_18026A5F4, al
 * 0000000180050722: lea     rcx, [rbp+9E20h+var_2CA8]; void *
 * 0000000180050729: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005072E: nop
 * 000000018005072F: lea     rcx, [rbp+9E20h+var_2C88]; void *
 * 0000000180050736: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005073B: nop
 * 000000018005073C: lea     rcx, dword_18026A5F8
 * 0000000180050743: call    _Init_thread_footer
 * 0000000180050748: mov     rax, [rdi+rbx*8]
 * 000000018005074C: mov     ecx, [r15+rax]
 * 0000000180050750: cmp     cs:dword_18026A600, ecx
 * 0000000180050756: jle     loc_180050838
 * 000000018005075C: lea     rcx, dword_18026A600
 * 0000000180050763: call    _Init_thread_header
 * 0000000180050768: cmp     cs:dword_18026A600, r14d
 * 000000018005076F: jnz     loc_180050838
 * 0000000180050775: mov     qword ptr [rbp+9E20h+var_9380], r13
 * 000000018005077C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180050783: mov     qword ptr [rbp+9E20h+var_9380+8], rax
 * 000000018005078A: movups  xmm0, [rbp+9E20h+var_9380]
 * 0000000180050791: movups  [rbp+9E20h+var_9038], xmm0
 * 0000000180050798: mov     dword ptr [rbp+9E20h+var_9028], esi
 * 000000018005079E: mov     dword ptr [rbp+9E20h+var_9028+4], esi
 * 00000001800507A4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800507A9: movups  xmm0, [rbp+9E20h+var_9028]
 * 00000001800507B0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800507B5: call    sub_1800456E0
 * 00000001800507BA: mov     r8, rax
 * 00000001800507BD: mov     r9d, r12d
 * 00000001800507C0: mov     edx, 7Ah ; 'z'
 * 00000001800507C5: lea     rcx, [rbp+9E20h+var_2C28]; Src
 * 00000001800507CC: call    sub_1800D45C8
 * 00000001800507D1: nop
 * 00000001800507D2: mov     r8, rax
 * 00000001800507D5: lea     rdx, aStandardshader_182; "StandardShader/ShaderModel40/"
 * 00000001800507DC: lea     rcx, [rbp+9E20h+var_2C48]
 * 00000001800507E3: call    sub_1800454BC
 * 00000001800507E8: nop
 * 00000001800507E9: lea     r8, aVertex_39; "/Vertex"
 * 00000001800507F0: mov     rdx, rax
 * 00000001800507F3: lea     rcx, [rbp+9E20h+var_2C68]
 * 00000001800507FA: call    sub_18002C088
 * 00000001800507FF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050804: mov     rcx, rax
 * 0000000180050807: call    sub_1800D46B4
 * 000000018005080C: mov     cs:byte_18026A5FC, al
 * 0000000180050812: lea     rcx, [rbp+9E20h+var_2C48]; void *
 * 0000000180050819: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005081E: nop
 * 000000018005081F: lea     rcx, [rbp+9E20h+var_2C28]; void *
 * 0000000180050826: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005082B: nop
 * 000000018005082C: lea     rcx, dword_18026A600
 * 0000000180050833: call    _Init_thread_footer
 * 0000000180050838: mov     rax, [rdi+rbx*8]
 * 000000018005083C: mov     ecx, [r15+rax]
 * 0000000180050840: cmp     cs:dword_18026A608, ecx
 * 0000000180050846: jle     loc_18005092F
 * 000000018005084C: lea     rcx, dword_18026A608
 * 0000000180050853: call    _Init_thread_header
 * 0000000180050858: cmp     cs:dword_18026A608, r14d
 * 000000018005085F: jnz     loc_18005092F
 * 0000000180050865: lea     rax, unk_18019CC40
 * 000000018005086C: mov     qword ptr [rbp+9E20h+var_9370], rax
 * 0000000180050873: lea     rax, unk_18019DC90
 * 000000018005087A: mov     qword ptr [rbp+9E20h+var_9370+8], rax
 * 0000000180050881: movups  xmm0, [rbp+9E20h+var_9370]
 * 0000000180050888: movups  [rbp+9E20h+var_9018], xmm0
 * 000000018005088F: mov     dword ptr [rbp+9E20h+var_9008], esi
 * 0000000180050895: mov     dword ptr [rbp+9E20h+var_9008+4], esi
 * 000000018005089B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800508A0: movups  xmm0, [rbp+9E20h+var_9008]
 * 00000001800508A7: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800508AC: call    sub_1800456E0
 * 00000001800508B1: mov     r8, rax
 * 00000001800508B4: mov     r9d, r12d
 * 00000001800508B7: mov     edx, 80h
 * 00000001800508BC: lea     rcx, [rbp+9E20h+var_2BC8]; Src
 * 00000001800508C3: call    sub_1800D45C8
 * 00000001800508C8: nop
 * 00000001800508C9: mov     r8, rax
 * 00000001800508CC: lea     rdx, aStandardshader_183; "StandardShader/ShaderModel40/"
 * 00000001800508D3: lea     rcx, [rbp+9E20h+var_2BE8]
 * 00000001800508DA: call    sub_1800454BC
 * 00000001800508DF: nop
 * 00000001800508E0: lea     r8, aVertex_40; "/Vertex"
 * 00000001800508E7: mov     rdx, rax
 * 00000001800508EA: lea     rcx, [rbp+9E20h+var_2C08]
 * 00000001800508F1: call    sub_18002C088
 * 00000001800508F6: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800508FB: mov     rcx, rax
 * 00000001800508FE: call    sub_1800D46B4
 * 0000000180050903: mov     cs:byte_18026A604, al
 * 0000000180050909: lea     rcx, [rbp+9E20h+var_2BE8]; void *
 * 0000000180050910: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050915: nop
 * 0000000180050916: lea     rcx, [rbp+9E20h+var_2BC8]; void *
 * 000000018005091D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050922: nop
 * 0000000180050923: lea     rcx, dword_18026A608
 * 000000018005092A: call    _Init_thread_footer
 * 000000018005092F: mov     rax, [rdi+rbx*8]
 * 0000000180050933: mov     ecx, [r15+rax]
 * 0000000180050937: cmp     cs:dword_18026A610, ecx
 * 000000018005093D: jle     loc_180050A26
 * 0000000180050943: lea     rcx, dword_18026A610
 * 000000018005094A: call    _Init_thread_header
 * 000000018005094F: cmp     cs:dword_18026A610, r14d
 * 0000000180050956: jnz     loc_180050A26
 * 000000018005095C: lea     rax, unk_18019CC40
 * 0000000180050963: mov     qword ptr [rbp+9E20h+var_9360], rax
 * 000000018005096A: lea     rax, unk_18019DC90
 * 0000000180050971: mov     qword ptr [rbp+9E20h+var_9360+8], rax
 * 0000000180050978: movups  xmm0, [rbp+9E20h+var_9360]
 * 000000018005097F: movups  [rbp+9E20h+var_8FF8], xmm0
 * 0000000180050986: mov     dword ptr [rbp+9E20h+var_8FE8], esi
 * 000000018005098C: mov     dword ptr [rbp+9E20h+var_8FE8+4], esi
 * 0000000180050992: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050997: movups  xmm0, [rbp+9E20h+var_8FE8]
 * 000000018005099E: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800509A3: call    sub_1800456E0
 * 00000001800509A8: mov     r8, rax
 * 00000001800509AB: mov     r9d, r12d
 * 00000001800509AE: mov     edx, 82h
 * 00000001800509B3: lea     rcx, [rbp+9E20h+var_2B68]; Src
 * 00000001800509BA: call    sub_1800D45C8
 * 00000001800509BF: nop
 * 00000001800509C0: mov     r8, rax
 * 00000001800509C3: lea     rdx, aStandardshader_184; "StandardShader/ShaderModel40/"
 * 00000001800509CA: lea     rcx, [rbp+9E20h+var_2B88]
 * 00000001800509D1: call    sub_1800454BC
 * 00000001800509D6: nop
 * 00000001800509D7: lea     r8, aVertex_41; "/Vertex"
 * 00000001800509DE: mov     rdx, rax
 * 00000001800509E1: lea     rcx, [rbp+9E20h+var_2BA8]
 * 00000001800509E8: call    sub_18002C088
 * 00000001800509ED: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800509F2: mov     rcx, rax
 * 00000001800509F5: call    sub_1800D46B4
 * 00000001800509FA: mov     cs:byte_18026A60C, al
 * 0000000180050A00: lea     rcx, [rbp+9E20h+var_2B88]; void *
 * 0000000180050A07: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050A0C: nop
 * 0000000180050A0D: lea     rcx, [rbp+9E20h+var_2B68]; void *
 * 0000000180050A14: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050A19: nop
 * 0000000180050A1A: lea     rcx, dword_18026A610
 * 0000000180050A21: call    _Init_thread_footer
 * 0000000180050A26: mov     rax, [rdi+rbx*8]
 * 0000000180050A2A: mov     ecx, [r15+rax]
 * 0000000180050A2E: cmp     cs:dword_18026A618, ecx
 * 0000000180050A34: jle     loc_180050B1D
 * 0000000180050A3A: lea     rcx, dword_18026A618
 * 0000000180050A41: call    _Init_thread_header
 * 0000000180050A46: cmp     cs:dword_18026A618, r14d
 * 0000000180050A4D: jnz     loc_180050B1D
 * 0000000180050A53: lea     rax, unk_18019CC40
 * 0000000180050A5A: mov     qword ptr [rbp+9E20h+var_9350], rax
 * 0000000180050A61: lea     rax, unk_18019DC90
 * 0000000180050A68: mov     qword ptr [rbp+9E20h+var_9350+8], rax
 * 0000000180050A6F: movups  xmm0, [rbp+9E20h+var_9350]
 * 0000000180050A76: movups  [rbp+9E20h+var_8FD8], xmm0
 * 0000000180050A7D: mov     dword ptr [rbp+9E20h+var_8FC8], esi
 * 0000000180050A83: mov     dword ptr [rbp+9E20h+var_8FC8+4], esi
 * 0000000180050A89: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050A8E: movups  xmm0, [rbp+9E20h+var_8FC8]
 * 0000000180050A95: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050A9A: call    sub_1800456E0
 * 0000000180050A9F: mov     r8, rax
 * 0000000180050AA2: mov     r9d, r12d
 * 0000000180050AA5: mov     edx, 88h
 * 0000000180050AAA: lea     rcx, [rbp+9E20h+var_2B08]; Src
 * 0000000180050AB1: call    sub_1800D45C8
 * 0000000180050AB6: nop
 * 0000000180050AB7: mov     r8, rax
 * 0000000180050ABA: lea     rdx, aStandardshader_185; "StandardShader/ShaderModel40/"
 * 0000000180050AC1: lea     rcx, [rbp+9E20h+var_2B28]
 * 0000000180050AC8: call    sub_1800454BC
 * 0000000180050ACD: nop
 * 0000000180050ACE: lea     r8, aVertex_42; "/Vertex"
 * 0000000180050AD5: mov     rdx, rax
 * 0000000180050AD8: lea     rcx, [rbp+9E20h+var_2B48]
 * 0000000180050ADF: call    sub_18002C088
 * 0000000180050AE4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050AE9: mov     rcx, rax
 * 0000000180050AEC: call    sub_1800D46B4
 * 0000000180050AF1: mov     cs:byte_18026A614, al
 * 0000000180050AF7: lea     rcx, [rbp+9E20h+var_2B28]; void *
 * 0000000180050AFE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050B03: nop
 * 0000000180050B04: lea     rcx, [rbp+9E20h+var_2B08]; void *
 * 0000000180050B0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050B10: nop
 * 0000000180050B11: lea     rcx, dword_18026A618
 * 0000000180050B18: call    _Init_thread_footer
 * 0000000180050B1D: mov     rax, [rdi+rbx*8]
 * 0000000180050B21: mov     ecx, [r15+rax]
 * 0000000180050B25: cmp     cs:dword_18026A620, ecx
 * 0000000180050B2B: jle     loc_180050C14
 * 0000000180050B31: lea     rcx, dword_18026A620
 * 0000000180050B38: call    _Init_thread_header
 * 0000000180050B3D: cmp     cs:dword_18026A620, r14d
 * 0000000180050B44: jnz     loc_180050C14
 * 0000000180050B4A: lea     rax, unk_18019CC40
 * 0000000180050B51: mov     qword ptr [rbp+9E20h+var_9340], rax
 * 0000000180050B58: lea     rax, unk_18019DC90
 * 0000000180050B5F: mov     qword ptr [rbp+9E20h+var_9340+8], rax
 * 0000000180050B66: movups  xmm0, [rbp+9E20h+var_9340]
 * 0000000180050B6D: movups  [rbp+9E20h+var_8FB8], xmm0
 * 0000000180050B74: mov     dword ptr [rbp+9E20h+var_8FA8], esi
 * 0000000180050B7A: mov     dword ptr [rbp+9E20h+var_8FA8+4], esi
 * 0000000180050B80: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050B85: movups  xmm0, [rbp+9E20h+var_8FA8]
 * 0000000180050B8C: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050B91: call    sub_1800456E0
 * 0000000180050B96: mov     r8, rax
 * 0000000180050B99: mov     r9d, r12d
 * 0000000180050B9C: mov     edx, 8Ah
 * 0000000180050BA1: lea     rcx, [rbp+9E20h+var_2AA8]; Src
 * 0000000180050BA8: call    sub_1800D45C8
 * 0000000180050BAD: nop
 * 0000000180050BAE: mov     r8, rax
 * 0000000180050BB1: lea     rdx, aStandardshader_186; "StandardShader/ShaderModel40/"
 * 0000000180050BB8: lea     rcx, [rbp+9E20h+var_2AC8]
 * 0000000180050BBF: call    sub_1800454BC
 * 0000000180050BC4: nop
 * 0000000180050BC5: lea     r8, aVertex_43; "/Vertex"
 * 0000000180050BCC: mov     rdx, rax
 * 0000000180050BCF: lea     rcx, [rbp+9E20h+var_2AE8]
 * 0000000180050BD6: call    sub_18002C088
 * 0000000180050BDB: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050BE0: mov     rcx, rax
 * 0000000180050BE3: call    sub_1800D46B4
 * 0000000180050BE8: mov     cs:byte_18026A61C, al
 * 0000000180050BEE: lea     rcx, [rbp+9E20h+var_2AC8]; void *
 * 0000000180050BF5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050BFA: nop
 * 0000000180050BFB: lea     rcx, [rbp+9E20h+var_2AA8]; void *
 * 0000000180050C02: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050C07: nop
 * 0000000180050C08: lea     rcx, dword_18026A620
 * 0000000180050C0F: call    _Init_thread_footer
 * 0000000180050C14: mov     rax, [rdi+rbx*8]
 * 0000000180050C18: mov     ecx, [r15+rax]
 * 0000000180050C1C: cmp     cs:dword_18026A628, ecx
 * 0000000180050C22: jle     loc_180050D0B
 * 0000000180050C28: lea     rcx, dword_18026A628
 * 0000000180050C2F: call    _Init_thread_header
 * 0000000180050C34: cmp     cs:dword_18026A628, r14d
 * 0000000180050C3B: jnz     loc_180050D0B
 * 0000000180050C41: lea     rax, unk_18019CC40
 * 0000000180050C48: mov     qword ptr [rbp+9E20h+var_9330], rax
 * 0000000180050C4F: lea     rax, unk_18019DC90
 * 0000000180050C56: mov     qword ptr [rbp+9E20h+var_9330+8], rax
 * 0000000180050C5D: movups  xmm0, [rbp+9E20h+var_9330]
 * 0000000180050C64: movups  [rbp+9E20h+var_8F98], xmm0
 * 0000000180050C6B: mov     dword ptr [rbp+9E20h+var_8F88], esi
 * 0000000180050C71: mov     dword ptr [rbp+9E20h+var_8F88+4], esi
 * 0000000180050C77: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050C7C: movups  xmm0, [rbp+9E20h+var_8F88]
 * 0000000180050C83: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050C88: call    sub_1800456E0
 * 0000000180050C8D: mov     r8, rax
 * 0000000180050C90: mov     r9d, r12d
 * 0000000180050C93: mov     edx, 90h
 * 0000000180050C98: lea     rcx, [rbp+9E20h+var_2A48]; Src
 * 0000000180050C9F: call    sub_1800D45C8
 * 0000000180050CA4: nop
 * 0000000180050CA5: mov     r8, rax
 * 0000000180050CA8: lea     rdx, aStandardshader_187; "StandardShader/ShaderModel40/"
 * 0000000180050CAF: lea     rcx, [rbp+9E20h+var_2A68]
 * 0000000180050CB6: call    sub_1800454BC
 * 0000000180050CBB: nop
 * 0000000180050CBC: lea     r8, aVertex_44; "/Vertex"
 * 0000000180050CC3: mov     rdx, rax
 * 0000000180050CC6: lea     rcx, [rbp+9E20h+var_2A88]
 * 0000000180050CCD: call    sub_18002C088
 * 0000000180050CD2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050CD7: mov     rcx, rax
 * 0000000180050CDA: call    sub_1800D46B4
 * 0000000180050CDF: mov     cs:byte_18026A624, al
 * 0000000180050CE5: lea     rcx, [rbp+9E20h+var_2A68]; void *
 * 0000000180050CEC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050CF1: nop
 * 0000000180050CF2: lea     rcx, [rbp+9E20h+var_2A48]; void *
 * 0000000180050CF9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050CFE: nop
 * 0000000180050CFF: lea     rcx, dword_18026A628
 * 0000000180050D06: call    _Init_thread_footer
 * 0000000180050D0B: mov     rax, [rdi+rbx*8]
 * 0000000180050D0F: mov     ecx, [r15+rax]
 * 0000000180050D13: cmp     cs:dword_18026A630, ecx
 * 0000000180050D19: jle     loc_180050E02
 * 0000000180050D1F: lea     rcx, dword_18026A630
 * 0000000180050D26: call    _Init_thread_header
 * 0000000180050D2B: cmp     cs:dword_18026A630, r14d
 * 0000000180050D32: jnz     loc_180050E02
 * 0000000180050D38: lea     rax, unk_18019CC40
 * 0000000180050D3F: mov     qword ptr [rbp+9E20h+var_9320], rax
 * 0000000180050D46: lea     rax, unk_18019DC90
 * 0000000180050D4D: mov     qword ptr [rbp+9E20h+var_9320+8], rax
 * 0000000180050D54: movups  xmm0, [rbp+9E20h+var_9320]
 * 0000000180050D5B: movups  [rbp+9E20h+var_8F78], xmm0
 * 0000000180050D62: mov     dword ptr [rbp+9E20h+var_8F68], esi
 * 0000000180050D68: mov     dword ptr [rbp+9E20h+var_8F68+4], esi
 * 0000000180050D6E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050D73: movups  xmm0, [rbp+9E20h+var_8F68]
 * 0000000180050D7A: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050D7F: call    sub_1800456E0
 * 0000000180050D84: mov     r8, rax
 * 0000000180050D87: mov     r9d, r12d
 * 0000000180050D8A: mov     edx, 92h
 * 0000000180050D8F: lea     rcx, [rbp+9E20h+var_29E8]; Src
 * 0000000180050D96: call    sub_1800D45C8
 * 0000000180050D9B: nop
 * 0000000180050D9C: mov     r8, rax
 * 0000000180050D9F: lea     rdx, aStandardshader_188; "StandardShader/ShaderModel40/"
 * 0000000180050DA6: lea     rcx, [rbp+9E20h+var_2A08]
 * 0000000180050DAD: call    sub_1800454BC
 * 0000000180050DB2: nop
 * 0000000180050DB3: lea     r8, aVertex_45; "/Vertex"
 * 0000000180050DBA: mov     rdx, rax
 * 0000000180050DBD: lea     rcx, [rbp+9E20h+var_2A28]
 * 0000000180050DC4: call    sub_18002C088
 * 0000000180050DC9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050DCE: mov     rcx, rax
 * 0000000180050DD1: call    sub_1800D46B4
 * 0000000180050DD6: mov     cs:byte_18026A62C, al
 * 0000000180050DDC: lea     rcx, [rbp+9E20h+var_2A08]; void *
 * 0000000180050DE3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050DE8: nop
 * 0000000180050DE9: lea     rcx, [rbp+9E20h+var_29E8]; void *
 * 0000000180050DF0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050DF5: nop
 * 0000000180050DF6: lea     rcx, dword_18026A630
 * 0000000180050DFD: call    _Init_thread_footer
 * 0000000180050E02: mov     rax, [rdi+rbx*8]
 * 0000000180050E06: mov     ecx, [r15+rax]
 * 0000000180050E0A: cmp     cs:dword_18026A638, ecx
 * 0000000180050E10: jle     loc_180050EF9
 * 0000000180050E16: lea     rcx, dword_18026A638
 * 0000000180050E1D: call    _Init_thread_header
 * 0000000180050E22: cmp     cs:dword_18026A638, r14d
 * 0000000180050E29: jnz     loc_180050EF9
 * 0000000180050E2F: lea     rax, unk_18019CC40
 * 0000000180050E36: mov     qword ptr [rbp+9E20h+var_9310], rax
 * 0000000180050E3D: lea     rax, unk_18019DC90
 * 0000000180050E44: mov     qword ptr [rbp+9E20h+var_9310+8], rax
 * 0000000180050E4B: movups  xmm0, [rbp+9E20h+var_9310]
 * 0000000180050E52: movups  [rbp+9E20h+var_8F58], xmm0
 * 0000000180050E59: mov     dword ptr [rbp+9E20h+var_8F48], esi
 * 0000000180050E5F: mov     dword ptr [rbp+9E20h+var_8F48+4], esi
 * 0000000180050E65: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050E6A: movups  xmm0, [rbp+9E20h+var_8F48]
 * 0000000180050E71: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050E76: call    sub_1800456E0
 * 0000000180050E7B: mov     r8, rax
 * 0000000180050E7E: mov     r9d, r12d
 * 0000000180050E81: mov     edx, 98h
 * 0000000180050E86: lea     rcx, [rbp+9E20h+var_2988]; Src
 * 0000000180050E8D: call    sub_1800D45C8
 * 0000000180050E92: nop
 * 0000000180050E93: mov     r8, rax
 * 0000000180050E96: lea     rdx, aStandardshader_189; "StandardShader/ShaderModel40/"
 * 0000000180050E9D: lea     rcx, [rbp+9E20h+var_29A8]
 * 0000000180050EA4: call    sub_1800454BC
 * 0000000180050EA9: nop
 * 0000000180050EAA: lea     r8, aVertex_46; "/Vertex"
 * 0000000180050EB1: mov     rdx, rax
 * 0000000180050EB4: lea     rcx, [rbp+9E20h+var_29C8]
 * 0000000180050EBB: call    sub_18002C088
 * 0000000180050EC0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050EC5: mov     rcx, rax
 * 0000000180050EC8: call    sub_1800D46B4
 * 0000000180050ECD: mov     cs:byte_18026A634, al
 * 0000000180050ED3: lea     rcx, [rbp+9E20h+var_29A8]; void *
 * 0000000180050EDA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050EDF: nop
 * 0000000180050EE0: lea     rcx, [rbp+9E20h+var_2988]; void *
 * 0000000180050EE7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050EEC: nop
 * 0000000180050EED: lea     rcx, dword_18026A638
 * 0000000180050EF4: call    _Init_thread_footer
 * 0000000180050EF9: mov     rax, [rdi+rbx*8]
 * 0000000180050EFD: mov     ecx, [r15+rax]
 * 0000000180050F01: cmp     cs:dword_18026A640, ecx
 * 0000000180050F07: jle     loc_180050FF0
 * 0000000180050F0D: lea     rcx, dword_18026A640
 * 0000000180050F14: call    _Init_thread_header
 * 0000000180050F19: cmp     cs:dword_18026A640, r14d
 * 0000000180050F20: jnz     loc_180050FF0
 * 0000000180050F26: lea     rax, unk_18019CC40
 * 0000000180050F2D: mov     qword ptr [rbp+9E20h+var_9300], rax
 * 0000000180050F34: lea     rax, unk_18019DC90
 * 0000000180050F3B: mov     qword ptr [rbp+9E20h+var_9300+8], rax
 * 0000000180050F42: movups  xmm0, [rbp+9E20h+var_9300]
 * 0000000180050F49: movups  [rbp+9E20h+var_8F38], xmm0
 * 0000000180050F50: mov     dword ptr [rbp+9E20h+var_8F28], esi
 * 0000000180050F56: mov     dword ptr [rbp+9E20h+var_8F28+4], esi
 * 0000000180050F5C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180050F61: movups  xmm0, [rbp+9E20h+var_8F28]
 * 0000000180050F68: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180050F6D: call    sub_1800456E0
 * 0000000180050F72: mov     r8, rax
 * 0000000180050F75: mov     r9d, r12d
 * 0000000180050F78: mov     edx, 9Ah
 * 0000000180050F7D: lea     rcx, [rbp+9E20h+var_2928]; Src
 * 0000000180050F84: call    sub_1800D45C8
 * 0000000180050F89: nop
 * 0000000180050F8A: mov     r8, rax
 * 0000000180050F8D: lea     rdx, aStandardshader_190; "StandardShader/ShaderModel40/"
 * 0000000180050F94: lea     rcx, [rbp+9E20h+var_2948]
 * 0000000180050F9B: call    sub_1800454BC
 * 0000000180050FA0: nop
 * 0000000180050FA1: lea     r8, aVertex_47; "/Vertex"
 * 0000000180050FA8: mov     rdx, rax
 * 0000000180050FAB: lea     rcx, [rbp+9E20h+var_2968]
 * 0000000180050FB2: call    sub_18002C088
 * 0000000180050FB7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180050FBC: mov     rcx, rax
 * 0000000180050FBF: call    sub_1800D46B4
 * 0000000180050FC4: mov     cs:byte_18026A63C, al
 * 0000000180050FCA: lea     rcx, [rbp+9E20h+var_2948]; void *
 * 0000000180050FD1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050FD6: nop
 * 0000000180050FD7: lea     rcx, [rbp+9E20h+var_2928]; void *
 * 0000000180050FDE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050FE3: nop
 * 0000000180050FE4: lea     rcx, dword_18026A640
 * 0000000180050FEB: call    _Init_thread_footer
 * 0000000180050FF0: mov     rax, [rdi+rbx*8]
 * 0000000180050FF4: mov     ecx, [r15+rax]
 * 0000000180050FF8: cmp     cs:dword_18026A648, ecx
 * 0000000180050FFE: jle     loc_1800510E0
 * 0000000180051004: lea     rcx, dword_18026A648
 * 000000018005100B: call    _Init_thread_header
 * 0000000180051010: cmp     cs:dword_18026A648, r14d
 * 0000000180051017: jnz     loc_1800510E0
 * 000000018005101D: mov     qword ptr [rbp+9E20h+var_92F0], r13
 * 0000000180051024: lea     rax, aBlur8_0; "Blur8"
 * 000000018005102B: mov     qword ptr [rbp+9E20h+var_92F0+8], rax
 * 0000000180051032: movups  xmm0, [rbp+9E20h+var_92F0]
 * 0000000180051039: movups  [rbp+9E20h+var_8F18], xmm0
 * 0000000180051040: mov     dword ptr [rbp+9E20h+var_8F08], esi
 * 0000000180051046: mov     dword ptr [rbp+9E20h+var_8F08+4], esi
 * 000000018005104C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051051: movups  xmm0, [rbp+9E20h+var_8F08]
 * 0000000180051058: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005105D: call    sub_1800456E0
 * 0000000180051062: mov     r8, rax
 * 0000000180051065: mov     r9d, r12d
 * 0000000180051068: mov     edx, 0A0h
 * 000000018005106D: lea     rcx, [rbp+9E20h+var_28C8]; Src
 * 0000000180051074: call    sub_1800D45C8
 * 0000000180051079: nop
 * 000000018005107A: mov     r8, rax
 * 000000018005107D: lea     rdx, aStandardshader_191; "StandardShader/ShaderModel40/"
 * 0000000180051084: lea     rcx, [rbp+9E20h+var_28E8]
 * 000000018005108B: call    sub_1800454BC
 * 0000000180051090: nop
 * 0000000180051091: lea     r8, aVertex_48; "/Vertex"
 * 0000000180051098: mov     rdx, rax
 * 000000018005109B: lea     rcx, [rbp+9E20h+var_2908]
 * 00000001800510A2: call    sub_18002C088
 * 00000001800510A7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800510AC: mov     rcx, rax
 * 00000001800510AF: call    sub_1800D46B4
 * 00000001800510B4: mov     cs:byte_18026A644, al
 * 00000001800510BA: lea     rcx, [rbp+9E20h+var_28E8]; void *
 * 00000001800510C1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800510C6: nop
 * 00000001800510C7: lea     rcx, [rbp+9E20h+var_28C8]; void *
 * 00000001800510CE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800510D3: nop
 * 00000001800510D4: lea     rcx, dword_18026A648
 * 00000001800510DB: call    _Init_thread_footer
 * 00000001800510E0: mov     rax, [rdi+rbx*8]
 * 00000001800510E4: mov     ecx, [r15+rax]
 * 00000001800510E8: cmp     cs:dword_18026A650, ecx
 * 00000001800510EE: jle     loc_1800511D0
 * 00000001800510F4: lea     rcx, dword_18026A650
 * 00000001800510FB: call    _Init_thread_header
 * 0000000180051100: cmp     cs:dword_18026A650, r14d
 * 0000000180051107: jnz     loc_1800511D0
 * 000000018005110D: mov     qword ptr [rbp+9E20h+var_92E0], r13
 * 0000000180051114: lea     rax, aBlur8_0; "Blur8"
 * 000000018005111B: mov     qword ptr [rbp+9E20h+var_92E0+8], rax
 * 0000000180051122: movups  xmm0, [rbp+9E20h+var_92E0]
 * 0000000180051129: movups  [rbp+9E20h+var_8EF8], xmm0
 * 0000000180051130: mov     dword ptr [rbp+9E20h+var_8EE8], esi
 * 0000000180051136: mov     dword ptr [rbp+9E20h+var_8EE8+4], esi
 * 000000018005113C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051141: movups  xmm0, [rbp+9E20h+var_8EE8]
 * 0000000180051148: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005114D: call    sub_1800456E0
 * 0000000180051152: mov     r8, rax
 * 0000000180051155: mov     r9d, r12d
 * 0000000180051158: mov     edx, 0A2h
 * 000000018005115D: lea     rcx, [rbp+9E20h+var_2868]; Src
 * 0000000180051164: call    sub_1800D45C8
 * 0000000180051169: nop
 * 000000018005116A: mov     r8, rax
 * 000000018005116D: lea     rdx, aStandardshader_192; "StandardShader/ShaderModel40/"
 * 0000000180051174: lea     rcx, [rbp+9E20h+var_2888]
 * 000000018005117B: call    sub_1800454BC
 * 0000000180051180: nop
 * 0000000180051181: lea     r8, aVertex_49; "/Vertex"
 * 0000000180051188: mov     rdx, rax
 * 000000018005118B: lea     rcx, [rbp+9E20h+var_28A8]
 * 0000000180051192: call    sub_18002C088
 * 0000000180051197: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005119C: mov     rcx, rax
 * 000000018005119F: call    sub_1800D46B4
 * 00000001800511A4: mov     cs:byte_18026A64C, al
 * 00000001800511AA: lea     rcx, [rbp+9E20h+var_2888]; void *
 * 00000001800511B1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800511B6: nop
 * 00000001800511B7: lea     rcx, [rbp+9E20h+var_2868]; void *
 * 00000001800511BE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800511C3: nop
 * 00000001800511C4: lea     rcx, dword_18026A650
 * 00000001800511CB: call    _Init_thread_footer
 * 00000001800511D0: mov     rax, [rdi+rbx*8]
 * 00000001800511D4: mov     ecx, [r15+rax]
 * 00000001800511D8: cmp     cs:dword_18026A658, ecx
 * 00000001800511DE: jle     loc_1800512C0
 * 00000001800511E4: lea     rcx, dword_18026A658
 * 00000001800511EB: call    _Init_thread_header
 * 00000001800511F0: cmp     cs:dword_18026A658, r14d
 * 00000001800511F7: jnz     loc_1800512C0
 * 00000001800511FD: mov     qword ptr [rbp+9E20h+var_92D0], r13
 * 0000000180051204: lea     rax, aBlur8_0; "Blur8"
 * 000000018005120B: mov     qword ptr [rbp+9E20h+var_92D0+8], rax
 * 0000000180051212: movups  xmm0, [rbp+9E20h+var_92D0]
 * 0000000180051219: movups  [rbp+9E20h+var_8ED8], xmm0
 * 0000000180051220: mov     dword ptr [rbp+9E20h+var_8EC8], esi
 * 0000000180051226: mov     dword ptr [rbp+9E20h+var_8EC8+4], esi
 * 000000018005122C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051231: movups  xmm0, [rbp+9E20h+var_8EC8]
 * 0000000180051238: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005123D: call    sub_1800456E0
 * 0000000180051242: mov     r8, rax
 * 0000000180051245: mov     r9d, r12d
 * 0000000180051248: mov     edx, 0A8h
 * 000000018005124D: lea     rcx, [rbp+9E20h+var_2808]; Src
 * 0000000180051254: call    sub_1800D45C8
 * 0000000180051259: nop
 * 000000018005125A: mov     r8, rax
 * 000000018005125D: lea     rdx, aStandardshader_193; "StandardShader/ShaderModel40/"
 * 0000000180051264: lea     rcx, [rbp+9E20h+var_2828]
 * 000000018005126B: call    sub_1800454BC
 * 0000000180051270: nop
 * 0000000180051271: lea     r8, aVertex_50; "/Vertex"
 * 0000000180051278: mov     rdx, rax
 * 000000018005127B: lea     rcx, [rbp+9E20h+var_2848]
 * 0000000180051282: call    sub_18002C088
 * 0000000180051287: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005128C: mov     rcx, rax
 * 000000018005128F: call    sub_1800D46B4
 * 0000000180051294: mov     cs:byte_18026A654, al
 * 000000018005129A: lea     rcx, [rbp+9E20h+var_2828]; void *
 * 00000001800512A1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800512A6: nop
 * 00000001800512A7: lea     rcx, [rbp+9E20h+var_2808]; void *
 * 00000001800512AE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800512B3: nop
 * 00000001800512B4: lea     rcx, dword_18026A658
 * 00000001800512BB: call    _Init_thread_footer
 * 00000001800512C0: mov     rax, [rdi+rbx*8]
 * 00000001800512C4: mov     ecx, [r15+rax]
 * 00000001800512C8: cmp     cs:dword_18026A660, ecx
 * 00000001800512CE: jle     loc_1800513B0
 * 00000001800512D4: lea     rcx, dword_18026A660
 * 00000001800512DB: call    _Init_thread_header
 * 00000001800512E0: cmp     cs:dword_18026A660, r14d
 * 00000001800512E7: jnz     loc_1800513B0
 * 00000001800512ED: mov     qword ptr [rbp+9E20h+var_92C0], r13
 * 00000001800512F4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800512FB: mov     qword ptr [rbp+9E20h+var_92C0+8], rax
 * 0000000180051302: movups  xmm0, [rbp+9E20h+var_92C0]
 * 0000000180051309: movups  [rbp+9E20h+var_8EB8], xmm0
 * 0000000180051310: mov     dword ptr [rbp+9E20h+var_8EA8], esi
 * 0000000180051316: mov     dword ptr [rbp+9E20h+var_8EA8+4], esi
 * 000000018005131C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051321: movups  xmm0, [rbp+9E20h+var_8EA8]
 * 0000000180051328: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005132D: call    sub_1800456E0
 * 0000000180051332: mov     r8, rax
 * 0000000180051335: mov     r9d, r12d
 * 0000000180051338: mov     edx, 0AAh
 * 000000018005133D: lea     rcx, [rbp+9E20h+var_27A8]; Src
 * 0000000180051344: call    sub_1800D45C8
 * 0000000180051349: nop
 * 000000018005134A: mov     r8, rax
 * 000000018005134D: lea     rdx, aStandardshader_194; "StandardShader/ShaderModel40/"
 * 0000000180051354: lea     rcx, [rbp+9E20h+var_27C8]
 * 000000018005135B: call    sub_1800454BC
 * 0000000180051360: nop
 * 0000000180051361: lea     r8, aVertex_51; "/Vertex"
 * 0000000180051368: mov     rdx, rax
 * 000000018005136B: lea     rcx, [rbp+9E20h+var_27E8]
 * 0000000180051372: call    sub_18002C088
 * 0000000180051377: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005137C: mov     rcx, rax
 * 000000018005137F: call    sub_1800D46B4
 * 0000000180051384: mov     cs:byte_18026A65C, al
 * 000000018005138A: lea     rcx, [rbp+9E20h+var_27C8]; void *
 * 0000000180051391: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051396: nop
 * 0000000180051397: lea     rcx, [rbp+9E20h+var_27A8]; void *
 * 000000018005139E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800513A3: nop
 * 00000001800513A4: lea     rcx, dword_18026A660
 * 00000001800513AB: call    _Init_thread_footer
 * 00000001800513B0: mov     rax, [rdi+rbx*8]
 * 00000001800513B4: mov     ecx, [r15+rax]
 * 00000001800513B8: cmp     cs:dword_18026A668, ecx
 * 00000001800513BE: jle     loc_1800514A0
 * 00000001800513C4: lea     rcx, dword_18026A668
 * 00000001800513CB: call    _Init_thread_header
 * 00000001800513D0: cmp     cs:dword_18026A668, r14d
 * 00000001800513D7: jnz     loc_1800514A0
 * 00000001800513DD: mov     qword ptr [rbp+9E20h+var_92B0], r13
 * 00000001800513E4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800513EB: mov     qword ptr [rbp+9E20h+var_92B0+8], rax
 * 00000001800513F2: movups  xmm0, [rbp+9E20h+var_92B0]
 * 00000001800513F9: movups  [rbp+9E20h+var_8E98], xmm0
 * 0000000180051400: mov     dword ptr [rbp+9E20h+var_8E88], esi
 * 0000000180051406: mov     dword ptr [rbp+9E20h+var_8E88+4], esi
 * 000000018005140C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051411: movups  xmm0, [rbp+9E20h+var_8E88]
 * 0000000180051418: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005141D: call    sub_1800456E0
 * 0000000180051422: mov     r8, rax
 * 0000000180051425: mov     r9d, r12d
 * 0000000180051428: mov     edx, 0B0h
 * 000000018005142D: lea     rcx, [rbp+9E20h+var_2748]; Src
 * 0000000180051434: call    sub_1800D45C8
 * 0000000180051439: nop
 * 000000018005143A: mov     r8, rax
 * 000000018005143D: lea     rdx, aStandardshader_195; "StandardShader/ShaderModel40/"
 * 0000000180051444: lea     rcx, [rbp+9E20h+var_2768]
 * 000000018005144B: call    sub_1800454BC
 * 0000000180051450: nop
 * 0000000180051451: lea     r8, aVertex_52; "/Vertex"
 * 0000000180051458: mov     rdx, rax
 * 000000018005145B: lea     rcx, [rbp+9E20h+var_2788]
 * 0000000180051462: call    sub_18002C088
 * 0000000180051467: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005146C: mov     rcx, rax
 * 000000018005146F: call    sub_1800D46B4
 * 0000000180051474: mov     cs:byte_18026A664, al
 * 000000018005147A: lea     rcx, [rbp+9E20h+var_2768]; void *
 * 0000000180051481: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051486: nop
 * 0000000180051487: lea     rcx, [rbp+9E20h+var_2748]; void *
 * 000000018005148E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051493: nop
 * 0000000180051494: lea     rcx, dword_18026A668
 * 000000018005149B: call    _Init_thread_footer
 * 00000001800514A0: mov     rax, [rdi+rbx*8]
 * 00000001800514A4: mov     ecx, [r15+rax]
 * 00000001800514A8: cmp     cs:dword_18026A670, ecx
 * 00000001800514AE: jle     loc_180051590
 * 00000001800514B4: lea     rcx, dword_18026A670
 * 00000001800514BB: call    _Init_thread_header
 * 00000001800514C0: cmp     cs:dword_18026A670, r14d
 * 00000001800514C7: jnz     loc_180051590
 * 00000001800514CD: mov     qword ptr [rbp+9E20h+var_92A0], r13
 * 00000001800514D4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800514DB: mov     qword ptr [rbp+9E20h+var_92A0+8], rax
 * 00000001800514E2: movups  xmm0, [rbp+9E20h+var_92A0]
 * 00000001800514E9: movups  [rbp+9E20h+var_8E78], xmm0
 * 00000001800514F0: mov     dword ptr [rbp+9E20h+var_8E68], esi
 * 00000001800514F6: mov     dword ptr [rbp+9E20h+var_8E68+4], esi
 * 00000001800514FC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051501: movups  xmm0, [rbp+9E20h+var_8E68]
 * 0000000180051508: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005150D: call    sub_1800456E0
 * 0000000180051512: mov     r8, rax
 * 0000000180051515: mov     r9d, r12d
 * 0000000180051518: mov     edx, 0B2h
 * 000000018005151D: lea     rcx, [rbp+9E20h+var_26E8]; Src
 * 0000000180051524: call    sub_1800D45C8
 * 0000000180051529: nop
 * 000000018005152A: mov     r8, rax
 * 000000018005152D: lea     rdx, aStandardshader_196; "StandardShader/ShaderModel40/"
 * 0000000180051534: lea     rcx, [rbp+9E20h+var_2708]
 * 000000018005153B: call    sub_1800454BC
 * 0000000180051540: nop
 * 0000000180051541: lea     r8, aVertex_53; "/Vertex"
 * 0000000180051548: mov     rdx, rax
 * 000000018005154B: lea     rcx, [rbp+9E20h+var_2728]
 * 0000000180051552: call    sub_18002C088
 * 0000000180051557: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005155C: mov     rcx, rax
 * 000000018005155F: call    sub_1800D46B4
 * 0000000180051564: mov     cs:byte_18026A66C, al
 * 000000018005156A: lea     rcx, [rbp+9E20h+var_2708]; void *
 * 0000000180051571: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051576: nop
 * 0000000180051577: lea     rcx, [rbp+9E20h+var_26E8]; void *
 * 000000018005157E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051583: nop
 * 0000000180051584: lea     rcx, dword_18026A670
 * 000000018005158B: call    _Init_thread_footer
 * 0000000180051590: mov     rax, [rdi+rbx*8]
 * 0000000180051594: mov     ecx, [r15+rax]
 * 0000000180051598: cmp     cs:dword_18026A678, ecx
 * 000000018005159E: jle     loc_180051680
 * 00000001800515A4: lea     rcx, dword_18026A678
 * 00000001800515AB: call    _Init_thread_header
 * 00000001800515B0: cmp     cs:dword_18026A678, r14d
 * 00000001800515B7: jnz     loc_180051680
 * 00000001800515BD: mov     qword ptr [rbp+9E20h+var_9290], r13
 * 00000001800515C4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800515CB: mov     qword ptr [rbp+9E20h+var_9290+8], rax
 * 00000001800515D2: movups  xmm0, [rbp+9E20h+var_9290]
 * 00000001800515D9: movups  [rbp+9E20h+var_8E58], xmm0
 * 00000001800515E0: mov     dword ptr [rbp+9E20h+var_8E48], esi
 * 00000001800515E6: mov     dword ptr [rbp+9E20h+var_8E48+4], esi
 * 00000001800515EC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800515F1: movups  xmm0, [rbp+9E20h+var_8E48]
 * 00000001800515F8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800515FD: call    sub_1800456E0
 * 0000000180051602: mov     r8, rax
 * 0000000180051605: mov     r9d, r12d
 * 0000000180051608: mov     edx, 0B8h
 * 000000018005160D: lea     rcx, [rbp+9E20h+var_2688]; Src
 * 0000000180051614: call    sub_1800D45C8
 * 0000000180051619: nop
 * 000000018005161A: mov     r8, rax
 * 000000018005161D: lea     rdx, aStandardshader_197; "StandardShader/ShaderModel40/"
 * 0000000180051624: lea     rcx, [rbp+9E20h+var_26A8]
 * 000000018005162B: call    sub_1800454BC
 * 0000000180051630: nop
 * 0000000180051631: lea     r8, aVertex_54; "/Vertex"
 * 0000000180051638: mov     rdx, rax
 * 000000018005163B: lea     rcx, [rbp+9E20h+var_26C8]
 * 0000000180051642: call    sub_18002C088
 * 0000000180051647: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005164C: mov     rcx, rax
 * 000000018005164F: call    sub_1800D46B4
 * 0000000180051654: mov     cs:byte_18026A674, al
 * 000000018005165A: lea     rcx, [rbp+9E20h+var_26A8]; void *
 * 0000000180051661: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051666: nop
 * 0000000180051667: lea     rcx, [rbp+9E20h+var_2688]; void *
 * 000000018005166E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051673: nop
 * 0000000180051674: lea     rcx, dword_18026A678
 * 000000018005167B: call    _Init_thread_footer
 * 0000000180051680: mov     rax, [rdi+rbx*8]
 * 0000000180051684: mov     ecx, [r15+rax]
 * 0000000180051688: cmp     cs:dword_18026A680, ecx
 * 000000018005168E: jle     loc_180051770
 * 0000000180051694: lea     rcx, dword_18026A680
 * 000000018005169B: call    _Init_thread_header
 * 00000001800516A0: cmp     cs:dword_18026A680, r14d
 * 00000001800516A7: jnz     loc_180051770
 * 00000001800516AD: mov     qword ptr [rbp+9E20h+var_9280], r13
 * 00000001800516B4: lea     rax, aBlur8_0; "Blur8"
 * 00000001800516BB: mov     qword ptr [rbp+9E20h+var_9280+8], rax
 * 00000001800516C2: movups  xmm0, [rbp+9E20h+var_9280]
 * 00000001800516C9: movups  [rbp+9E20h+var_8E38], xmm0
 * 00000001800516D0: mov     dword ptr [rbp+9E20h+var_8E28], esi
 * 00000001800516D6: mov     dword ptr [rbp+9E20h+var_8E28+4], esi
 * 00000001800516DC: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800516E1: movups  xmm0, [rbp+9E20h+var_8E28]
 * 00000001800516E8: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800516ED: call    sub_1800456E0
 * 00000001800516F2: mov     r8, rax
 * 00000001800516F5: mov     r9d, r12d
 * 00000001800516F8: mov     edx, 0BAh
 * 00000001800516FD: lea     rcx, [rbp+9E20h+var_2628]; Src
 * 0000000180051704: call    sub_1800D45C8
 * 0000000180051709: nop
 * 000000018005170A: mov     r8, rax
 * 000000018005170D: lea     rdx, aStandardshader_198; "StandardShader/ShaderModel40/"
 * 0000000180051714: lea     rcx, [rbp+9E20h+var_2648]
 * 000000018005171B: call    sub_1800454BC
 * 0000000180051720: nop
 * 0000000180051721: lea     r8, aVertex_55; "/Vertex"
 * 0000000180051728: mov     rdx, rax
 * 000000018005172B: lea     rcx, [rbp+9E20h+var_2668]
 * 0000000180051732: call    sub_18002C088
 * 0000000180051737: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005173C: mov     rcx, rax
 * 000000018005173F: call    sub_1800D46B4
 * 0000000180051744: mov     cs:byte_18026A67C, al
 * 000000018005174A: lea     rcx, [rbp+9E20h+var_2648]; void *
 * 0000000180051751: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051756: nop
 * 0000000180051757: lea     rcx, [rbp+9E20h+var_2628]; void *
 * 000000018005175E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051763: nop
 * 0000000180051764: lea     rcx, dword_18026A680
 * 000000018005176B: call    _Init_thread_footer
 * 0000000180051770: mov     rax, [rdi+rbx*8]
 * 0000000180051774: mov     ecx, [r15+rax]
 * 0000000180051778: cmp     cs:dword_18026A688, ecx
 * 000000018005177E: jle     loc_180051867
 * 0000000180051784: lea     rcx, dword_18026A688
 * 000000018005178B: call    _Init_thread_header
 * 0000000180051790: cmp     cs:dword_18026A688, r14d
 * 0000000180051797: jnz     loc_180051867
 * 000000018005179D: lea     rax, unk_18019CC40
 * 00000001800517A4: mov     qword ptr [rbp+9E20h+var_9270], rax
 * 00000001800517AB: lea     rax, unk_18019DC90
 * 00000001800517B2: mov     qword ptr [rbp+9E20h+var_9270+8], rax
 * 00000001800517B9: movups  xmm0, [rbp+9E20h+var_9270]
 * 00000001800517C0: movups  [rbp+9E20h+var_8E18], xmm0
 * 00000001800517C7: mov     dword ptr [rbp+9E20h+var_8E08], esi
 * 00000001800517CD: mov     dword ptr [rbp+9E20h+var_8E08+4], esi
 * 00000001800517D3: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800517D8: movups  xmm0, [rbp+9E20h+var_8E08]
 * 00000001800517DF: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800517E4: call    sub_1800456E0
 * 00000001800517E9: mov     r8, rax
 * 00000001800517EC: mov     r9d, r12d
 * 00000001800517EF: mov     edx, 0C0h
 * 00000001800517F4: lea     rcx, [rbp+9E20h+var_25C8]; Src
 * 00000001800517FB: call    sub_1800D45C8
 * 0000000180051800: nop
 * 0000000180051801: mov     r8, rax
 * 0000000180051804: lea     rdx, aStandardshader_199; "StandardShader/ShaderModel40/"
 * 000000018005180B: lea     rcx, [rbp+9E20h+var_25E8]
 * 0000000180051812: call    sub_1800454BC
 * 0000000180051817: nop
 * 0000000180051818: lea     r8, aVertex_56; "/Vertex"
 * 000000018005181F: mov     rdx, rax
 * 0000000180051822: lea     rcx, [rbp+9E20h+var_2608]
 * 0000000180051829: call    sub_18002C088
 * 000000018005182E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051833: mov     rcx, rax
 * 0000000180051836: call    sub_1800D46B4
 * 000000018005183B: mov     cs:byte_18026A684, al
 * 0000000180051841: lea     rcx, [rbp+9E20h+var_25E8]; void *
 * 0000000180051848: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005184D: nop
 * 000000018005184E: lea     rcx, [rbp+9E20h+var_25C8]; void *
 * 0000000180051855: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005185A: nop
 * 000000018005185B: lea     rcx, dword_18026A688
 * 0000000180051862: call    _Init_thread_footer
 * 0000000180051867: mov     rax, [rdi+rbx*8]
 * 000000018005186B: mov     ecx, [r15+rax]
 * 000000018005186F: cmp     cs:dword_18026A690, ecx
 * 0000000180051875: jle     loc_18005195E
 * 000000018005187B: lea     rcx, dword_18026A690
 * 0000000180051882: call    _Init_thread_header
 * 0000000180051887: cmp     cs:dword_18026A690, r14d
 * 000000018005188E: jnz     loc_18005195E
 * 0000000180051894: lea     rax, unk_18019CC40
 * 000000018005189B: mov     qword ptr [rbp+9E20h+var_9260], rax
 * 00000001800518A2: lea     rax, unk_18019DC90
 * 00000001800518A9: mov     qword ptr [rbp+9E20h+var_9260+8], rax
 * 00000001800518B0: movups  xmm0, [rbp+9E20h+var_9260]
 * 00000001800518B7: movups  [rbp+9E20h+var_8DF8], xmm0
 * 00000001800518BE: mov     dword ptr [rbp+9E20h+var_8DE8], esi
 * 00000001800518C4: mov     dword ptr [rbp+9E20h+var_8DE8+4], esi
 * 00000001800518CA: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800518CF: movups  xmm0, [rbp+9E20h+var_8DE8]
 * 00000001800518D6: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800518DB: call    sub_1800456E0
 * 00000001800518E0: mov     r8, rax
 * 00000001800518E3: mov     r9d, r12d
 * 00000001800518E6: mov     edx, 0C2h
 * 00000001800518EB: lea     rcx, [rbp+9E20h+var_2568]; Src
 * 00000001800518F2: call    sub_1800D45C8
 * 00000001800518F7: nop
 * 00000001800518F8: mov     r8, rax
 * 00000001800518FB: lea     rdx, aStandardshader_200; "StandardShader/ShaderModel40/"
 * 0000000180051902: lea     rcx, [rbp+9E20h+var_2588]
 * 0000000180051909: call    sub_1800454BC
 * 000000018005190E: nop
 * 000000018005190F: lea     r8, aVertex_57; "/Vertex"
 * 0000000180051916: mov     rdx, rax
 * 0000000180051919: lea     rcx, [rbp+9E20h+var_25A8]
 * 0000000180051920: call    sub_18002C088
 * 0000000180051925: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005192A: mov     rcx, rax
 * 000000018005192D: call    sub_1800D46B4
 * 0000000180051932: mov     cs:byte_18026A68C, al
 * 0000000180051938: lea     rcx, [rbp+9E20h+var_2588]; void *
 * 000000018005193F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051944: nop
 * 0000000180051945: lea     rcx, [rbp+9E20h+var_2568]; void *
 * 000000018005194C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051951: nop
 * 0000000180051952: lea     rcx, dword_18026A690
 * 0000000180051959: call    _Init_thread_footer
 * 000000018005195E: mov     rax, [rdi+rbx*8]
 * 0000000180051962: mov     ecx, [r15+rax]
 * 0000000180051966: cmp     cs:dword_18026A698, ecx
 * 000000018005196C: jle     loc_180051A55
 * 0000000180051972: lea     rcx, dword_18026A698
 * 0000000180051979: call    _Init_thread_header
 * 000000018005197E: cmp     cs:dword_18026A698, r14d
 * 0000000180051985: jnz     loc_180051A55
 * 000000018005198B: lea     rax, unk_18019CC40
 * 0000000180051992: mov     qword ptr [rbp+9E20h+var_9250], rax
 * 0000000180051999: lea     rax, unk_18019DC90
 * 00000001800519A0: mov     qword ptr [rbp+9E20h+var_9250+8], rax
 * 00000001800519A7: movups  xmm0, [rbp+9E20h+var_9250]
 * 00000001800519AE: movups  [rbp+9E20h+var_8DD8], xmm0
 * 00000001800519B5: mov     dword ptr [rbp+9E20h+var_8DC8], esi
 * 00000001800519BB: mov     dword ptr [rbp+9E20h+var_8DC8+4], esi
 * 00000001800519C1: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800519C6: movups  xmm0, [rbp+9E20h+var_8DC8]
 * 00000001800519CD: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800519D2: call    sub_1800456E0
 * 00000001800519D7: mov     r8, rax
 * 00000001800519DA: mov     r9d, r12d
 * 00000001800519DD: mov     edx, 0C8h
 * 00000001800519E2: lea     rcx, [rbp+9E20h+var_2508]; Src
 * 00000001800519E9: call    sub_1800D45C8
 * 00000001800519EE: nop
 * 00000001800519EF: mov     r8, rax
 * 00000001800519F2: lea     rdx, aStandardshader_201; "StandardShader/ShaderModel40/"
 * 00000001800519F9: lea     rcx, [rbp+9E20h+var_2528]
 * 0000000180051A00: call    sub_1800454BC
 * 0000000180051A05: nop
 * 0000000180051A06: lea     r8, aVertex_58; "/Vertex"
 * 0000000180051A0D: mov     rdx, rax
 * 0000000180051A10: lea     rcx, [rbp+9E20h+var_2548]
 * 0000000180051A17: call    sub_18002C088
 * 0000000180051A1C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051A21: mov     rcx, rax
 * 0000000180051A24: call    sub_1800D46B4
 * 0000000180051A29: mov     cs:byte_18026A694, al
 * 0000000180051A2F: lea     rcx, [rbp+9E20h+var_2528]; void *
 * 0000000180051A36: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051A3B: nop
 * 0000000180051A3C: lea     rcx, [rbp+9E20h+var_2508]; void *
 * 0000000180051A43: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051A48: nop
 * 0000000180051A49: lea     rcx, dword_18026A698
 * 0000000180051A50: call    _Init_thread_footer
 * 0000000180051A55: mov     rax, [rdi+rbx*8]
 * 0000000180051A59: mov     ecx, [r15+rax]
 * 0000000180051A5D: cmp     cs:dword_18026A6A0, ecx
 * 0000000180051A63: jle     loc_180051B4C
 * 0000000180051A69: lea     rcx, dword_18026A6A0
 * 0000000180051A70: call    _Init_thread_header
 * 0000000180051A75: cmp     cs:dword_18026A6A0, r14d
 * 0000000180051A7C: jnz     loc_180051B4C
 * 0000000180051A82: lea     rax, unk_18019CC40
 * 0000000180051A89: mov     qword ptr [rbp+9E20h+var_9240], rax
 * 0000000180051A90: lea     rax, unk_18019DC90
 * 0000000180051A97: mov     qword ptr [rbp+9E20h+var_9240+8], rax
 * 0000000180051A9E: movups  xmm0, [rbp+9E20h+var_9240]
 * 0000000180051AA5: movups  [rbp+9E20h+var_8DB8], xmm0
 * 0000000180051AAC: mov     dword ptr [rbp+9E20h+var_8DA8], esi
 * 0000000180051AB2: mov     dword ptr [rbp+9E20h+var_8DA8+4], esi
 * 0000000180051AB8: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051ABD: movups  xmm0, [rbp+9E20h+var_8DA8]
 * 0000000180051AC4: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051AC9: call    sub_1800456E0
 * 0000000180051ACE: mov     r8, rax
 * 0000000180051AD1: mov     r9d, r12d
 * 0000000180051AD4: mov     edx, 0CAh
 * 0000000180051AD9: lea     rcx, [rbp+9E20h+var_24A8]; Src
 * 0000000180051AE0: call    sub_1800D45C8
 * 0000000180051AE5: nop
 * 0000000180051AE6: mov     r8, rax
 * 0000000180051AE9: lea     rdx, aStandardshader_202; "StandardShader/ShaderModel40/"
 * 0000000180051AF0: lea     rcx, [rbp+9E20h+var_24C8]
 * 0000000180051AF7: call    sub_1800454BC
 * 0000000180051AFC: nop
 * 0000000180051AFD: lea     r8, aVertex_59; "/Vertex"
 * 0000000180051B04: mov     rdx, rax
 * 0000000180051B07: lea     rcx, [rbp+9E20h+var_24E8]
 * 0000000180051B0E: call    sub_18002C088
 * 0000000180051B13: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051B18: mov     rcx, rax
 * 0000000180051B1B: call    sub_1800D46B4
 * 0000000180051B20: mov     cs:byte_18026A69C, al
 * 0000000180051B26: lea     rcx, [rbp+9E20h+var_24C8]; void *
 * 0000000180051B2D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051B32: nop
 * 0000000180051B33: lea     rcx, [rbp+9E20h+var_24A8]; void *
 * 0000000180051B3A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051B3F: nop
 * 0000000180051B40: lea     rcx, dword_18026A6A0
 * 0000000180051B47: call    _Init_thread_footer
 * 0000000180051B4C: mov     rax, [rdi+rbx*8]
 * 0000000180051B50: mov     ecx, [r15+rax]
 * 0000000180051B54: cmp     cs:dword_18026A6A8, ecx
 * 0000000180051B5A: jle     loc_180051C43
 * 0000000180051B60: lea     rcx, dword_18026A6A8
 * 0000000180051B67: call    _Init_thread_header
 * 0000000180051B6C: cmp     cs:dword_18026A6A8, r14d
 * 0000000180051B73: jnz     loc_180051C43
 * 0000000180051B79: lea     rax, unk_18019CC40
 * 0000000180051B80: mov     qword ptr [rbp+9E20h+var_9230], rax
 * 0000000180051B87: lea     rax, unk_18019DC90
 * 0000000180051B8E: mov     qword ptr [rbp+9E20h+var_9230+8], rax
 * 0000000180051B95: movups  xmm0, [rbp+9E20h+var_9230]
 * 0000000180051B9C: movups  [rbp+9E20h+var_8D98], xmm0
 * 0000000180051BA3: mov     dword ptr [rbp+9E20h+var_8D88], esi
 * 0000000180051BA9: mov     dword ptr [rbp+9E20h+var_8D88+4], esi
 * 0000000180051BAF: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051BB4: movups  xmm0, [rbp+9E20h+var_8D88]
 * 0000000180051BBB: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051BC0: call    sub_1800456E0
 * 0000000180051BC5: mov     r8, rax
 * 0000000180051BC8: mov     r9d, r12d
 * 0000000180051BCB: mov     edx, 0D0h
 * 0000000180051BD0: lea     rcx, [rbp+9E20h+var_2448]; Src
 * 0000000180051BD7: call    sub_1800D45C8
 * 0000000180051BDC: nop
 * 0000000180051BDD: mov     r8, rax
 * 0000000180051BE0: lea     rdx, aStandardshader_203; "StandardShader/ShaderModel40/"
 * 0000000180051BE7: lea     rcx, [rbp+9E20h+var_2468]
 * 0000000180051BEE: call    sub_1800454BC
 * 0000000180051BF3: nop
 * 0000000180051BF4: lea     r8, aVertex_60; "/Vertex"
 * 0000000180051BFB: mov     rdx, rax
 * 0000000180051BFE: lea     rcx, [rbp+9E20h+var_2488]
 * 0000000180051C05: call    sub_18002C088
 * 0000000180051C0A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051C0F: mov     rcx, rax
 * 0000000180051C12: call    sub_1800D46B4
 * 0000000180051C17: mov     cs:byte_18026A6A4, al
 * 0000000180051C1D: lea     rcx, [rbp+9E20h+var_2468]; void *
 * 0000000180051C24: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051C29: nop
 * 0000000180051C2A: lea     rcx, [rbp+9E20h+var_2448]; void *
 * 0000000180051C31: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051C36: nop
 * 0000000180051C37: lea     rcx, dword_18026A6A8
 * 0000000180051C3E: call    _Init_thread_footer
 * 0000000180051C43: mov     rax, [rdi+rbx*8]
 * 0000000180051C47: mov     ecx, [r15+rax]
 * 0000000180051C4B: cmp     cs:dword_18026A6B0, ecx
 * 0000000180051C51: jle     loc_180051D3A
 * 0000000180051C57: lea     rcx, dword_18026A6B0
 * 0000000180051C5E: call    _Init_thread_header
 * 0000000180051C63: cmp     cs:dword_18026A6B0, r14d
 * 0000000180051C6A: jnz     loc_180051D3A
 * 0000000180051C70: lea     rax, unk_18019CC40
 * 0000000180051C77: mov     qword ptr [rbp+9E20h+var_9220], rax
 * 0000000180051C7E: lea     rax, unk_18019DC90
 * 0000000180051C85: mov     qword ptr [rbp+9E20h+var_9220+8], rax
 * 0000000180051C8C: movups  xmm0, [rbp+9E20h+var_9220]
 * 0000000180051C93: movups  [rbp+9E20h+var_8D78], xmm0
 * 0000000180051C9A: mov     dword ptr [rbp+9E20h+var_8D68], esi
 * 0000000180051CA0: mov     dword ptr [rbp+9E20h+var_8D68+4], esi
 * 0000000180051CA6: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051CAB: movups  xmm0, [rbp+9E20h+var_8D68]
 * 0000000180051CB2: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051CB7: call    sub_1800456E0
 * 0000000180051CBC: mov     r8, rax
 * 0000000180051CBF: mov     r9d, r12d
 * 0000000180051CC2: mov     edx, 0D2h
 * 0000000180051CC7: lea     rcx, [rbp+9E20h+var_23E8]; Src
 * 0000000180051CCE: call    sub_1800D45C8
 * 0000000180051CD3: nop
 * 0000000180051CD4: mov     r8, rax
 * 0000000180051CD7: lea     rdx, aStandardshader_204; "StandardShader/ShaderModel40/"
 * 0000000180051CDE: lea     rcx, [rbp+9E20h+var_2408]
 * 0000000180051CE5: call    sub_1800454BC
 * 0000000180051CEA: nop
 * 0000000180051CEB: lea     r8, aVertex_61; "/Vertex"
 * 0000000180051CF2: mov     rdx, rax
 * 0000000180051CF5: lea     rcx, [rbp+9E20h+var_2428]
 * 0000000180051CFC: call    sub_18002C088
 * 0000000180051D01: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051D06: mov     rcx, rax
 * 0000000180051D09: call    sub_1800D46B4
 * 0000000180051D0E: mov     cs:byte_18026A6AC, al
 * 0000000180051D14: lea     rcx, [rbp+9E20h+var_2408]; void *
 * 0000000180051D1B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051D20: nop
 * 0000000180051D21: lea     rcx, [rbp+9E20h+var_23E8]; void *
 * 0000000180051D28: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051D2D: nop
 * 0000000180051D2E: lea     rcx, dword_18026A6B0
 * 0000000180051D35: call    _Init_thread_footer
 * 0000000180051D3A: mov     rax, [rdi+rbx*8]
 * 0000000180051D3E: mov     ecx, [r15+rax]
 * 0000000180051D42: cmp     cs:dword_18026A6B8, ecx
 * 0000000180051D48: jle     loc_180051E31
 * 0000000180051D4E: lea     rcx, dword_18026A6B8
 * 0000000180051D55: call    _Init_thread_header
 * 0000000180051D5A: cmp     cs:dword_18026A6B8, r14d
 * 0000000180051D61: jnz     loc_180051E31
 * 0000000180051D67: lea     rax, unk_18019CC40
 * 0000000180051D6E: mov     qword ptr [rbp+9E20h+var_9210], rax
 * 0000000180051D75: lea     rax, unk_18019DC90
 * 0000000180051D7C: mov     qword ptr [rbp+9E20h+var_9210+8], rax
 * 0000000180051D83: movups  xmm0, [rbp+9E20h+var_9210]
 * 0000000180051D8A: movups  [rbp+9E20h+var_8D58], xmm0
 * 0000000180051D91: mov     dword ptr [rbp+9E20h+var_8D48], esi
 * 0000000180051D97: mov     dword ptr [rbp+9E20h+var_8D48+4], esi
 * 0000000180051D9D: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051DA2: movups  xmm0, [rbp+9E20h+var_8D48]
 * 0000000180051DA9: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051DAE: call    sub_1800456E0
 * 0000000180051DB3: mov     r8, rax
 * 0000000180051DB6: mov     r9d, r12d
 * 0000000180051DB9: mov     edx, 0D8h
 * 0000000180051DBE: lea     rcx, [rbp+9E20h+var_2388]; Src
 * 0000000180051DC5: call    sub_1800D45C8
 * 0000000180051DCA: nop
 * 0000000180051DCB: mov     r8, rax
 * 0000000180051DCE: lea     rdx, aStandardshader_205; "StandardShader/ShaderModel40/"
 * 0000000180051DD5: lea     rcx, [rbp+9E20h+var_23A8]
 * 0000000180051DDC: call    sub_1800454BC
 * 0000000180051DE1: nop
 * 0000000180051DE2: lea     r8, aVertex_62; "/Vertex"
 * 0000000180051DE9: mov     rdx, rax
 * 0000000180051DEC: lea     rcx, [rbp+9E20h+var_23C8]
 * 0000000180051DF3: call    sub_18002C088
 * 0000000180051DF8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051DFD: mov     rcx, rax
 * 0000000180051E00: call    sub_1800D46B4
 * 0000000180051E05: mov     cs:byte_18026A6B4, al
 * 0000000180051E0B: lea     rcx, [rbp+9E20h+var_23A8]; void *
 * 0000000180051E12: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051E17: nop
 * 0000000180051E18: lea     rcx, [rbp+9E20h+var_2388]; void *
 * 0000000180051E1F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051E24: nop
 * 0000000180051E25: lea     rcx, dword_18026A6B8
 * 0000000180051E2C: call    _Init_thread_footer
 * 0000000180051E31: mov     rax, [rdi+rbx*8]
 * 0000000180051E35: mov     ecx, [r15+rax]
 * 0000000180051E39: cmp     cs:dword_18026A6C0, ecx
 * 0000000180051E3F: jle     loc_180051F28
 * 0000000180051E45: lea     rcx, dword_18026A6C0
 * 0000000180051E4C: call    _Init_thread_header
 * 0000000180051E51: cmp     cs:dword_18026A6C0, r14d
 * 0000000180051E58: jnz     loc_180051F28
 * 0000000180051E5E: lea     rax, unk_18019CC40
 * 0000000180051E65: mov     qword ptr [rbp+9E20h+var_9200], rax
 * 0000000180051E6C: lea     rax, unk_18019DC90
 * 0000000180051E73: mov     qword ptr [rbp+9E20h+var_9200+8], rax
 * 0000000180051E7A: movups  xmm0, [rbp+9E20h+var_9200]
 * 0000000180051E81: movups  [rbp+9E20h+var_8D38], xmm0
 * 0000000180051E88: mov     dword ptr [rbp+9E20h+var_8D28], esi
 * 0000000180051E8E: mov     dword ptr [rbp+9E20h+var_8D28+4], esi
 * 0000000180051E94: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051E99: movups  xmm0, [rbp+9E20h+var_8D28]
 * 0000000180051EA0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051EA5: call    sub_1800456E0
 * 0000000180051EAA: mov     r8, rax
 * 0000000180051EAD: mov     r9d, r12d
 * 0000000180051EB0: mov     edx, 0DAh
 * 0000000180051EB5: lea     rcx, [rbp+9E20h+var_2328]; Src
 * 0000000180051EBC: call    sub_1800D45C8
 * 0000000180051EC1: nop
 * 0000000180051EC2: mov     r8, rax
 * 0000000180051EC5: lea     rdx, aStandardshader_206; "StandardShader/ShaderModel40/"
 * 0000000180051ECC: lea     rcx, [rbp+9E20h+var_2348]
 * 0000000180051ED3: call    sub_1800454BC
 * 0000000180051ED8: nop
 * 0000000180051ED9: lea     r8, aVertex_63; "/Vertex"
 * 0000000180051EE0: mov     rdx, rax
 * 0000000180051EE3: lea     rcx, [rbp+9E20h+var_2368]
 * 0000000180051EEA: call    sub_18002C088
 * 0000000180051EEF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051EF4: mov     rcx, rax
 * 0000000180051EF7: call    sub_1800D46B4
 * 0000000180051EFC: mov     cs:byte_18026A6BC, al
 * 0000000180051F02: lea     rcx, [rbp+9E20h+var_2348]; void *
 * 0000000180051F09: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051F0E: nop
 * 0000000180051F0F: lea     rcx, [rbp+9E20h+var_2328]; void *
 * 0000000180051F16: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051F1B: nop
 * 0000000180051F1C: lea     rcx, dword_18026A6C0
 * 0000000180051F23: call    _Init_thread_footer
 * 0000000180051F28: mov     rax, [rdi+rbx*8]
 * 0000000180051F2C: mov     ecx, [r15+rax]
 * 0000000180051F30: cmp     cs:dword_18026A6C8, ecx
 * 0000000180051F36: jle     loc_180052018
 * 0000000180051F3C: lea     rcx, dword_18026A6C8
 * 0000000180051F43: call    _Init_thread_header
 * 0000000180051F48: cmp     cs:dword_18026A6C8, r14d
 * 0000000180051F4F: jnz     loc_180052018
 * 0000000180051F55: mov     qword ptr [rbp+9E20h+var_91F0], r13
 * 0000000180051F5C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180051F63: mov     qword ptr [rbp+9E20h+var_91F0+8], rax
 * 0000000180051F6A: movups  xmm0, [rbp+9E20h+var_91F0]
 * 0000000180051F71: movups  [rbp+9E20h+var_8D18], xmm0
 * 0000000180051F78: mov     dword ptr [rbp+9E20h+var_8D08], esi
 * 0000000180051F7E: mov     dword ptr [rbp+9E20h+var_8D08+4], esi
 * 0000000180051F84: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180051F89: movups  xmm0, [rbp+9E20h+var_8D08]
 * 0000000180051F90: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180051F95: call    sub_1800456E0
 * 0000000180051F9A: mov     r8, rax
 * 0000000180051F9D: mov     r9d, r12d
 * 0000000180051FA0: mov     edx, 0E0h
 * 0000000180051FA5: lea     rcx, [rbp+9E20h+var_22C8]; Src
 * 0000000180051FAC: call    sub_1800D45C8
 * 0000000180051FB1: nop
 * 0000000180051FB2: mov     r8, rax
 * 0000000180051FB5: lea     rdx, aStandardshader_207; "StandardShader/ShaderModel40/"
 * 0000000180051FBC: lea     rcx, [rbp+9E20h+var_22E8]
 * 0000000180051FC3: call    sub_1800454BC
 * 0000000180051FC8: nop
 * 0000000180051FC9: lea     r8, aVertex_64; "/Vertex"
 * 0000000180051FD0: mov     rdx, rax
 * 0000000180051FD3: lea     rcx, [rbp+9E20h+var_2308]
 * 0000000180051FDA: call    sub_18002C088
 * 0000000180051FDF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180051FE4: mov     rcx, rax
 * 0000000180051FE7: call    sub_1800D46B4
 * 0000000180051FEC: mov     cs:byte_18026A6C4, al
 * 0000000180051FF2: lea     rcx, [rbp+9E20h+var_22E8]; void *
 * 0000000180051FF9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051FFE: nop
 * 0000000180051FFF: lea     rcx, [rbp+9E20h+var_22C8]; void *
 * 0000000180052006: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005200B: nop
 * 000000018005200C: lea     rcx, dword_18026A6C8
 * 0000000180052013: call    _Init_thread_footer
 * 0000000180052018: mov     rax, [rdi+rbx*8]
 * 000000018005201C: mov     ecx, [r15+rax]
 * 0000000180052020: cmp     cs:dword_18026A6D0, ecx
 * 0000000180052026: jle     loc_180052108
 * 000000018005202C: lea     rcx, dword_18026A6D0
 * 0000000180052033: call    _Init_thread_header
 * 0000000180052038: cmp     cs:dword_18026A6D0, r14d
 * 000000018005203F: jnz     loc_180052108
 * 0000000180052045: mov     qword ptr [rbp+9E20h+var_91E0], r13
 * 000000018005204C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052053: mov     qword ptr [rbp+9E20h+var_91E0+8], rax
 * 000000018005205A: movups  xmm0, [rbp+9E20h+var_91E0]
 * 0000000180052061: movups  [rbp+9E20h+var_8CF8], xmm0
 * 0000000180052068: mov     dword ptr [rbp+9E20h+var_8CE8], esi
 * 000000018005206E: mov     dword ptr [rbp+9E20h+var_8CE8+4], esi
 * 0000000180052074: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052079: movups  xmm0, [rbp+9E20h+var_8CE8]
 * 0000000180052080: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052085: call    sub_1800456E0
 * 000000018005208A: mov     r8, rax
 * 000000018005208D: mov     r9d, r12d
 * 0000000180052090: mov     edx, 0E2h
 * 0000000180052095: lea     rcx, [rbp+9E20h+var_2268]; Src
 * 000000018005209C: call    sub_1800D45C8
 * 00000001800520A1: nop
 * 00000001800520A2: mov     r8, rax
 * 00000001800520A5: lea     rdx, aStandardshader_208; "StandardShader/ShaderModel40/"
 * 00000001800520AC: lea     rcx, [rbp+9E20h+var_2288]
 * 00000001800520B3: call    sub_1800454BC
 * 00000001800520B8: nop
 * 00000001800520B9: lea     r8, aVertex_65; "/Vertex"
 * 00000001800520C0: mov     rdx, rax
 * 00000001800520C3: lea     rcx, [rbp+9E20h+var_22A8]
 * 00000001800520CA: call    sub_18002C088
 * 00000001800520CF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800520D4: mov     rcx, rax
 * 00000001800520D7: call    sub_1800D46B4
 * 00000001800520DC: mov     cs:byte_18026A6CC, al
 * 00000001800520E2: lea     rcx, [rbp+9E20h+var_2288]; void *
 * 00000001800520E9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800520EE: nop
 * 00000001800520EF: lea     rcx, [rbp+9E20h+var_2268]; void *
 * 00000001800520F6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800520FB: nop
 * 00000001800520FC: lea     rcx, dword_18026A6D0
 * 0000000180052103: call    _Init_thread_footer
 * 0000000180052108: mov     rax, [rdi+rbx*8]
 * 000000018005210C: mov     ecx, [r15+rax]
 * 0000000180052110: cmp     cs:dword_18026A6D8, ecx
 * 0000000180052116: jle     loc_1800521F8
 * 000000018005211C: lea     rcx, dword_18026A6D8
 * 0000000180052123: call    _Init_thread_header
 * 0000000180052128: cmp     cs:dword_18026A6D8, r14d
 * 000000018005212F: jnz     loc_1800521F8
 * 0000000180052135: mov     qword ptr [rbp+9E20h+var_91D0], r13
 * 000000018005213C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052143: mov     qword ptr [rbp+9E20h+var_91D0+8], rax
 * 000000018005214A: movups  xmm0, [rbp+9E20h+var_91D0]
 * 0000000180052151: movups  [rbp+9E20h+var_8CD8], xmm0
 * 0000000180052158: mov     dword ptr [rbp+9E20h+var_8CC8], esi
 * 000000018005215E: mov     dword ptr [rbp+9E20h+var_8CC8+4], esi
 * 0000000180052164: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052169: movups  xmm0, [rbp+9E20h+var_8CC8]
 * 0000000180052170: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052175: call    sub_1800456E0
 * 000000018005217A: mov     r8, rax
 * 000000018005217D: mov     r9d, r12d
 * 0000000180052180: mov     edx, 0E8h
 * 0000000180052185: lea     rcx, [rbp+9E20h+var_2208]; Src
 * 000000018005218C: call    sub_1800D45C8
 * 0000000180052191: nop
 * 0000000180052192: mov     r8, rax
 * 0000000180052195: lea     rdx, aStandardshader_209; "StandardShader/ShaderModel40/"
 * 000000018005219C: lea     rcx, [rbp+9E20h+var_2228]
 * 00000001800521A3: call    sub_1800454BC
 * 00000001800521A8: nop
 * 00000001800521A9: lea     r8, aVertex_66; "/Vertex"
 * 00000001800521B0: mov     rdx, rax
 * 00000001800521B3: lea     rcx, [rbp+9E20h+var_2248]
 * 00000001800521BA: call    sub_18002C088
 * 00000001800521BF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800521C4: mov     rcx, rax
 * 00000001800521C7: call    sub_1800D46B4
 * 00000001800521CC: mov     cs:byte_18026A6D4, al
 * 00000001800521D2: lea     rcx, [rbp+9E20h+var_2228]; void *
 * 00000001800521D9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800521DE: nop
 * 00000001800521DF: lea     rcx, [rbp+9E20h+var_2208]; void *
 * 00000001800521E6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800521EB: nop
 * 00000001800521EC: lea     rcx, dword_18026A6D8
 * 00000001800521F3: call    _Init_thread_footer
 * 00000001800521F8: mov     rax, [rdi+rbx*8]
 * 00000001800521FC: mov     ecx, [r15+rax]
 * 0000000180052200: cmp     cs:dword_18026A6E0, ecx
 * 0000000180052206: jle     loc_1800522E8
 * 000000018005220C: lea     rcx, dword_18026A6E0
 * 0000000180052213: call    _Init_thread_header
 * 0000000180052218: cmp     cs:dword_18026A6E0, r14d
 * 000000018005221F: jnz     loc_1800522E8
 * 0000000180052225: mov     qword ptr [rbp+9E20h+var_91C0], r13
 * 000000018005222C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052233: mov     qword ptr [rbp+9E20h+var_91C0+8], rax
 * 000000018005223A: movups  xmm0, [rbp+9E20h+var_91C0]
 * 0000000180052241: movups  [rbp+9E20h+var_8CB8], xmm0
 * 0000000180052248: mov     dword ptr [rbp+9E20h+var_8CA8], esi
 * 000000018005224E: mov     dword ptr [rbp+9E20h+var_8CA8+4], esi
 * 0000000180052254: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052259: movups  xmm0, [rbp+9E20h+var_8CA8]
 * 0000000180052260: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052265: call    sub_1800456E0
 * 000000018005226A: mov     r8, rax
 * 000000018005226D: mov     r9d, r12d
 * 0000000180052270: mov     edx, 0EAh
 * 0000000180052275: lea     rcx, [rbp+9E20h+var_21A8]; Src
 * 000000018005227C: call    sub_1800D45C8
 * 0000000180052281: nop
 * 0000000180052282: mov     r8, rax
 * 0000000180052285: lea     rdx, aStandardshader_210; "StandardShader/ShaderModel40/"
 * 000000018005228C: lea     rcx, [rbp+9E20h+var_21C8]
 * 0000000180052293: call    sub_1800454BC
 * 0000000180052298: nop
 * 0000000180052299: lea     r8, aVertex_67; "/Vertex"
 * 00000001800522A0: mov     rdx, rax
 * 00000001800522A3: lea     rcx, [rbp+9E20h+var_21E8]
 * 00000001800522AA: call    sub_18002C088
 * 00000001800522AF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800522B4: mov     rcx, rax
 * 00000001800522B7: call    sub_1800D46B4
 * 00000001800522BC: mov     cs:byte_18026A6DC, al
 * 00000001800522C2: lea     rcx, [rbp+9E20h+var_21C8]; void *
 * 00000001800522C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800522CE: nop
 * 00000001800522CF: lea     rcx, [rbp+9E20h+var_21A8]; void *
 * 00000001800522D6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800522DB: nop
 * 00000001800522DC: lea     rcx, dword_18026A6E0
 * 00000001800522E3: call    _Init_thread_footer
 * 00000001800522E8: mov     rax, [rdi+rbx*8]
 * 00000001800522EC: mov     ecx, [r15+rax]
 * 00000001800522F0: cmp     cs:dword_18026A6E8, ecx
 * 00000001800522F6: jle     loc_1800523D8
 * 00000001800522FC: lea     rcx, dword_18026A6E8
 * 0000000180052303: call    _Init_thread_header
 * 0000000180052308: cmp     cs:dword_18026A6E8, r14d
 * 000000018005230F: jnz     loc_1800523D8
 * 0000000180052315: mov     qword ptr [rbp+9E20h+var_91B0], r13
 * 000000018005231C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052323: mov     qword ptr [rbp+9E20h+var_91B0+8], rax
 * 000000018005232A: movups  xmm0, [rbp+9E20h+var_91B0]
 * 0000000180052331: movups  [rbp+9E20h+var_8C98], xmm0
 * 0000000180052338: mov     dword ptr [rbp+9E20h+var_8C88], esi
 * 000000018005233E: mov     dword ptr [rbp+9E20h+var_8C88+4], esi
 * 0000000180052344: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052349: movups  xmm0, [rbp+9E20h+var_8C88]
 * 0000000180052350: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052355: call    sub_1800456E0
 * 000000018005235A: mov     r8, rax
 * 000000018005235D: mov     r9d, r12d
 * 0000000180052360: mov     edx, 0F0h
 * 0000000180052365: lea     rcx, [rbp+9E20h+var_2148]; Src
 * 000000018005236C: call    sub_1800D45C8
 * 0000000180052371: nop
 * 0000000180052372: mov     r8, rax
 * 0000000180052375: lea     rdx, aStandardshader_211; "StandardShader/ShaderModel40/"
 * 000000018005237C: lea     rcx, [rbp+9E20h+var_2168]
 * 0000000180052383: call    sub_1800454BC
 * 0000000180052388: nop
 * 0000000180052389: lea     r8, aVertex_68; "/Vertex"
 * 0000000180052390: mov     rdx, rax
 * 0000000180052393: lea     rcx, [rbp+9E20h+var_2188]
 * 000000018005239A: call    sub_18002C088
 * 000000018005239F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800523A4: mov     rcx, rax
 * 00000001800523A7: call    sub_1800D46B4
 * 00000001800523AC: mov     cs:byte_18026A6E4, al
 * 00000001800523B2: lea     rcx, [rbp+9E20h+var_2168]; void *
 * 00000001800523B9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800523BE: nop
 * 00000001800523BF: lea     rcx, [rbp+9E20h+var_2148]; void *
 * 00000001800523C6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800523CB: nop
 * 00000001800523CC: lea     rcx, dword_18026A6E8
 * 00000001800523D3: call    _Init_thread_footer
 * 00000001800523D8: mov     rax, [rdi+rbx*8]
 * 00000001800523DC: mov     ecx, [r15+rax]
 * 00000001800523E0: cmp     cs:dword_18026A6F0, ecx
 * 00000001800523E6: jle     loc_1800524C8
 * 00000001800523EC: lea     rcx, dword_18026A6F0
 * 00000001800523F3: call    _Init_thread_header
 * 00000001800523F8: cmp     cs:dword_18026A6F0, r14d
 * 00000001800523FF: jnz     loc_1800524C8
 * 0000000180052405: mov     qword ptr [rbp+9E20h+var_91A0], r13
 * 000000018005240C: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052413: mov     qword ptr [rbp+9E20h+var_91A0+8], rax
 * 000000018005241A: movups  xmm0, [rbp+9E20h+var_91A0]
 * 0000000180052421: movups  [rbp+9E20h+var_8C78], xmm0
 * 0000000180052428: mov     dword ptr [rbp+9E20h+var_8C68], esi
 * 000000018005242E: mov     dword ptr [rbp+9E20h+var_8C68+4], esi
 * 0000000180052434: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052439: movups  xmm0, [rbp+9E20h+var_8C68]
 * 0000000180052440: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052445: call    sub_1800456E0
 * 000000018005244A: mov     r8, rax
 * 000000018005244D: mov     r9d, r12d
 * 0000000180052450: mov     edx, 0F2h
 * 0000000180052455: lea     rcx, [rbp+9E20h+var_20E8]; Src
 * 000000018005245C: call    sub_1800D45C8
 * 0000000180052461: nop
 * 0000000180052462: mov     r8, rax
 * 0000000180052465: lea     rdx, aStandardshader_212; "StandardShader/ShaderModel40/"
 * 000000018005246C: lea     rcx, [rbp+9E20h+var_2108]
 * 0000000180052473: call    sub_1800454BC
 * 0000000180052478: nop
 * 0000000180052479: lea     r8, aVertex_69; "/Vertex"
 * 0000000180052480: mov     rdx, rax
 * 0000000180052483: lea     rcx, [rbp+9E20h+var_2128]
 * 000000018005248A: call    sub_18002C088
 * 000000018005248F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052494: mov     rcx, rax
 * 0000000180052497: call    sub_1800D46B4
 * 000000018005249C: mov     cs:byte_18026A6EC, al
 * 00000001800524A2: lea     rcx, [rbp+9E20h+var_2108]; void *
 * 00000001800524A9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800524AE: nop
 * 00000001800524AF: lea     rcx, [rbp+9E20h+var_20E8]; void *
 * 00000001800524B6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800524BB: nop
 * 00000001800524BC: lea     rcx, dword_18026A6F0
 * 00000001800524C3: call    _Init_thread_footer
 * 00000001800524C8: mov     rax, [rdi+rbx*8]
 * 00000001800524CC: mov     ecx, [r15+rax]
 * 00000001800524D0: cmp     cs:dword_18026A6F8, ecx
 * 00000001800524D6: jle     loc_1800525B8
 * 00000001800524DC: lea     rcx, dword_18026A6F8
 * 00000001800524E3: call    _Init_thread_header
 * 00000001800524E8: cmp     cs:dword_18026A6F8, r14d
 * 00000001800524EF: jnz     loc_1800525B8
 * 00000001800524F5: mov     qword ptr [rbp+9E20h+var_9190], r13
 * 00000001800524FC: lea     rax, aBlur8_0; "Blur8"
 * 0000000180052503: mov     qword ptr [rbp+9E20h+var_9190+8], rax
 * 000000018005250A: movups  xmm0, [rbp+9E20h+var_9190]
 * 0000000180052511: movups  [rbp+9E20h+var_8C58], xmm0
 * 0000000180052518: mov     dword ptr [rbp+9E20h+var_8C48], esi
 * 000000018005251E: mov     dword ptr [rbp+9E20h+var_8C48+4], esi
 * 0000000180052524: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052529: movups  xmm0, [rbp+9E20h+var_8C48]
 * 0000000180052530: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052535: call    sub_1800456E0
 * 000000018005253A: mov     r8, rax
 * 000000018005253D: mov     r9d, r12d
 * 0000000180052540: mov     edx, 0F8h
 * 0000000180052545: lea     rcx, [rbp+9E20h+var_2088]; Src
 * 000000018005254C: call    sub_1800D45C8
 * 0000000180052551: nop
 * 0000000180052552: mov     r8, rax
 * 0000000180052555: lea     rdx, aStandardshader_213; "StandardShader/ShaderModel40/"
 * 000000018005255C: lea     rcx, [rbp+9E20h+var_20A8]
 * 0000000180052563: call    sub_1800454BC
 * 0000000180052568: nop
 * 0000000180052569: lea     r8, aVertex_70; "/Vertex"
 * 0000000180052570: mov     rdx, rax
 * 0000000180052573: lea     rcx, [rbp+9E20h+var_20C8]
 * 000000018005257A: call    sub_18002C088
 * 000000018005257F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052584: mov     rcx, rax
 * 0000000180052587: call    sub_1800D46B4
 * 000000018005258C: mov     cs:byte_18026A6F4, al
 * 0000000180052592: lea     rcx, [rbp+9E20h+var_20A8]; void *
 * 0000000180052599: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005259E: nop
 * 000000018005259F: lea     rcx, [rbp+9E20h+var_2088]; void *
 * 00000001800525A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800525AB: nop
 * 00000001800525AC: lea     rcx, dword_18026A6F8
 * 00000001800525B3: call    _Init_thread_footer
 * 00000001800525B8: mov     rax, [rdi+rbx*8]
 * 00000001800525BC: mov     ecx, [r15+rax]
 * 00000001800525C0: cmp     cs:dword_18026A700, ecx
 * 00000001800525C6: jle     loc_1800526A8
 * 00000001800525CC: lea     rcx, dword_18026A700
 * 00000001800525D3: call    _Init_thread_header
 * 00000001800525D8: cmp     cs:dword_18026A700, r14d
 * 00000001800525DF: jnz     loc_1800526A8
 * 00000001800525E5: mov     qword ptr [rbp+9E20h+var_9180], r13
 * 00000001800525EC: lea     rax, aBlur8_0; "Blur8"
 * 00000001800525F3: mov     qword ptr [rbp+9E20h+var_9180+8], rax
 * 00000001800525FA: movups  xmm0, [rbp+9E20h+var_9180]
 * 0000000180052601: movups  [rbp+9E20h+var_8C38], xmm0
 * 0000000180052608: mov     dword ptr [rbp+9E20h+var_8C28], esi
 * 000000018005260E: mov     dword ptr [rbp+9E20h+var_8C28+4], esi
 * 0000000180052614: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052619: movups  xmm0, [rbp+9E20h+var_8C28]
 * 0000000180052620: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052625: call    sub_1800456E0
 * 000000018005262A: mov     r8, rax
 * 000000018005262D: mov     r9d, r12d
 * 0000000180052630: mov     edx, 0FAh
 * 0000000180052635: lea     rcx, [rbp+9E20h+var_2028]; Src
 * 000000018005263C: call    sub_1800D45C8
 * 0000000180052641: nop
 * 0000000180052642: mov     r8, rax
 * 0000000180052645: lea     rdx, aStandardshader_214; "StandardShader/ShaderModel40/"
 * 000000018005264C: lea     rcx, [rbp+9E20h+var_2048]
 * 0000000180052653: call    sub_1800454BC
 * 0000000180052658: nop
 * 0000000180052659: lea     r8, aVertex_71; "/Vertex"
 * 0000000180052660: mov     rdx, rax
 * 0000000180052663: lea     rcx, [rbp+9E20h+var_2068]
 * 000000018005266A: call    sub_18002C088
 * 000000018005266F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052674: mov     rcx, rax
 * 0000000180052677: call    sub_1800D46B4
 * 000000018005267C: mov     cs:byte_18026A6FC, al
 * 0000000180052682: lea     rcx, [rbp+9E20h+var_2048]; void *
 * 0000000180052689: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005268E: nop
 * 000000018005268F: lea     rcx, [rbp+9E20h+var_2028]; void *
 * 0000000180052696: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005269B: nop
 * 000000018005269C: lea     rcx, dword_18026A700
 * 00000001800526A3: call    _Init_thread_footer
 * 00000001800526A8: mov     rax, [rdi+rbx*8]
 * 00000001800526AC: mov     ecx, [r15+rax]
 * 00000001800526B0: cmp     cs:dword_18026A708, ecx
 * 00000001800526B6: jle     loc_1800527A1
 * 00000001800526BC: lea     rcx, dword_18026A708
 * 00000001800526C3: call    _Init_thread_header
 * 00000001800526C8: cmp     cs:dword_18026A708, r14d
 * 00000001800526CF: jnz     loc_1800527A1
 * 00000001800526D5: lea     r13, unk_180198070
 * 00000001800526DC: mov     qword ptr [rbp+9E20h+var_9170], r13
 * 00000001800526E3: lea     rax, unk_180199088
 * 00000001800526EA: mov     qword ptr [rbp+9E20h+var_9170+8], rax
 * 00000001800526F1: movups  xmm0, [rbp+9E20h+var_9170]
 * 00000001800526F8: movups  [rbp+9E20h+var_8C18], xmm0
 * 00000001800526FF: mov     dword ptr [rbp+9E20h+var_8C08], esi
 * 0000000180052705: mov     dword ptr [rbp+9E20h+var_8C08+4], esi
 * 000000018005270B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052710: movups  xmm0, [rbp+9E20h+var_8C08]
 * 0000000180052717: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005271C: call    sub_1800456E0
 * 0000000180052721: mov     r8, rax
 * 0000000180052724: mov     r9d, r12d
 * 0000000180052727: mov     edx, 100h
 * 000000018005272C: lea     rcx, [rbp+9E20h+var_1FC8]; Src
 * 0000000180052733: call    sub_1800D45C8
 * 0000000180052738: nop
 * 0000000180052739: mov     r8, rax
 * 000000018005273C: lea     rdx, aStandardshader_215; "StandardShader/ShaderModel40/"
 * 0000000180052743: lea     rcx, [rbp+9E20h+var_1FE8]
 * 000000018005274A: call    sub_1800454BC
 * 000000018005274F: nop
 * 0000000180052750: lea     r8, aVertex_72; "/Vertex"
 * 0000000180052757: mov     rdx, rax
 * 000000018005275A: lea     rcx, [rbp+9E20h+var_2008]
 * 0000000180052761: call    sub_18002C088
 * 0000000180052766: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005276B: mov     rcx, rax
 * 000000018005276E: call    sub_1800D46B4
 * 0000000180052773: mov     cs:byte_18026A704, al
 * 0000000180052779: lea     rcx, [rbp+9E20h+var_1FE8]; void *
 * 0000000180052780: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052785: nop
 * 0000000180052786: lea     rcx, [rbp+9E20h+var_1FC8]; void *
 * 000000018005278D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052792: nop
 * 0000000180052793: lea     rcx, dword_18026A708
 * 000000018005279A: call    _Init_thread_footer
 * 000000018005279F: jmp     short loc_1800527A8
 * 00000001800527A1: lea     r13, unk_180198070
 * 00000001800527A8: mov     rax, [rdi+rbx*8]
 * 00000001800527AC: mov     ecx, [r15+rax]
 * 00000001800527B0: cmp     cs:dword_18026A710, ecx
 * 00000001800527B6: jle     loc_180052898
 * 00000001800527BC: lea     rcx, dword_18026A710
 * 00000001800527C3: call    _Init_thread_header
 * 00000001800527C8: cmp     cs:dword_18026A710, r14d
 * 00000001800527CF: jnz     loc_180052898
 * 00000001800527D5: mov     qword ptr [rbp+9E20h+var_9160], r13
 * 00000001800527DC: lea     rax, unk_180199088
 * 00000001800527E3: mov     qword ptr [rbp+9E20h+var_9160+8], rax
 * 00000001800527EA: movups  xmm0, [rbp+9E20h+var_9160]
 * 00000001800527F1: movups  [rbp+9E20h+var_8BF8], xmm0
 * 00000001800527F8: mov     dword ptr [rbp+9E20h+var_8BE8], esi
 * 00000001800527FE: mov     dword ptr [rbp+9E20h+var_8BE8+4], esi
 * 0000000180052804: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052809: movups  xmm0, [rbp+9E20h+var_8BE8]
 * 0000000180052810: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052815: call    sub_1800456E0
 * 000000018005281A: mov     r8, rax
 * 000000018005281D: mov     r9d, r12d
 * 0000000180052820: mov     edx, 102h
 * 0000000180052825: lea     rcx, [rbp+9E20h+var_1F68]; Src
 * 000000018005282C: call    sub_1800D45C8
 * 0000000180052831: nop
 * 0000000180052832: mov     r8, rax
 * 0000000180052835: lea     rdx, aStandardshader_216; "StandardShader/ShaderModel40/"
 * 000000018005283C: lea     rcx, [rbp+9E20h+var_1F88]
 * 0000000180052843: call    sub_1800454BC
 * 0000000180052848: nop
 * 0000000180052849: lea     r8, aVertex_73; "/Vertex"
 * 0000000180052850: mov     rdx, rax
 * 0000000180052853: lea     rcx, [rbp+9E20h+var_1FA8]
 * 000000018005285A: call    sub_18002C088
 * 000000018005285F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052864: mov     rcx, rax
 * 0000000180052867: call    sub_1800D46B4
 * 000000018005286C: mov     cs:byte_18026A70C, al
 * 0000000180052872: lea     rcx, [rbp+9E20h+var_1F88]; void *
 * 0000000180052879: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005287E: nop
 * 000000018005287F: lea     rcx, [rbp+9E20h+var_1F68]; void *
 * 0000000180052886: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005288B: nop
 * 000000018005288C: lea     rcx, dword_18026A710
 * 0000000180052893: call    _Init_thread_footer
 * 0000000180052898: mov     rax, [rdi+rbx*8]
 * 000000018005289C: mov     ecx, [r15+rax]
 * 00000001800528A0: cmp     cs:dword_18026A718, ecx
 * 00000001800528A6: jle     loc_180052988
 * 00000001800528AC: lea     rcx, dword_18026A718
 * 00000001800528B3: call    _Init_thread_header
 * 00000001800528B8: cmp     cs:dword_18026A718, r14d
 * 00000001800528BF: jnz     loc_180052988
 * 00000001800528C5: mov     qword ptr [rbp+9E20h+var_9150], r13
 * 00000001800528CC: lea     rax, unk_180199088
 * 00000001800528D3: mov     qword ptr [rbp+9E20h+var_9150+8], rax
 * 00000001800528DA: movups  xmm0, [rbp+9E20h+var_9150]
 * 00000001800528E1: movups  [rbp+9E20h+var_8BD8], xmm0
 * 00000001800528E8: mov     dword ptr [rbp+9E20h+var_8BC8], esi
 * 00000001800528EE: mov     dword ptr [rbp+9E20h+var_8BC8+4], esi
 * 00000001800528F4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800528F9: movups  xmm0, [rbp+9E20h+var_8BC8]
 * 0000000180052900: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052905: call    sub_1800456E0
 * 000000018005290A: mov     r8, rax
 * 000000018005290D: mov     r9d, r12d
 * 0000000180052910: mov     edx, 104h
 * 0000000180052915: lea     rcx, [rbp+9E20h+var_1F08]; Src
 * 000000018005291C: call    sub_1800D45C8
 * 0000000180052921: nop
 * 0000000180052922: mov     r8, rax
 * 0000000180052925: lea     rdx, aStandardshader_217; "StandardShader/ShaderModel40/"
 * 000000018005292C: lea     rcx, [rbp+9E20h+var_1F28]
 * 0000000180052933: call    sub_1800454BC
 * 0000000180052938: nop
 * 0000000180052939: lea     r8, aVertex_74; "/Vertex"
 * 0000000180052940: mov     rdx, rax
 * 0000000180052943: lea     rcx, [rbp+9E20h+var_1F48]
 * 000000018005294A: call    sub_18002C088
 * 000000018005294F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052954: mov     rcx, rax
 * 0000000180052957: call    sub_1800D46B4
 * 000000018005295C: mov     cs:byte_18026A714, al
 * 0000000180052962: lea     rcx, [rbp+9E20h+var_1F28]; void *
 * 0000000180052969: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005296E: nop
 * 000000018005296F: lea     rcx, [rbp+9E20h+var_1F08]; void *
 * 0000000180052976: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005297B: nop
 * 000000018005297C: lea     rcx, dword_18026A718
 * 0000000180052983: call    _Init_thread_footer
 * 0000000180052988: mov     rax, [rdi+rbx*8]
 * 000000018005298C: mov     ecx, [r15+rax]
 * 0000000180052990: cmp     cs:dword_18026A720, ecx
 * 0000000180052996: jle     loc_180052A78
 * 000000018005299C: lea     rcx, dword_18026A720
 * 00000001800529A3: call    _Init_thread_header
 * 00000001800529A8: cmp     cs:dword_18026A720, r14d
 * 00000001800529AF: jnz     loc_180052A78
 * 00000001800529B5: mov     qword ptr [rbp+9E20h+var_9140], r13
 * 00000001800529BC: lea     rax, unk_180199088
 * 00000001800529C3: mov     qword ptr [rbp+9E20h+var_9140+8], rax
 * 00000001800529CA: movups  xmm0, [rbp+9E20h+var_9140]
 * 00000001800529D1: movups  [rbp+9E20h+var_8BB8], xmm0
 * 00000001800529D8: mov     dword ptr [rbp+9E20h+var_8BA8], esi
 * 00000001800529DE: mov     dword ptr [rbp+9E20h+var_8BA8+4], esi
 * 00000001800529E4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800529E9: movups  xmm0, [rbp+9E20h+var_8BA8]
 * 00000001800529F0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 00000001800529F5: call    sub_1800456E0
 * 00000001800529FA: mov     r8, rax
 * 00000001800529FD: mov     r9d, r12d
 * 0000000180052A00: mov     edx, 106h
 * 0000000180052A05: lea     rcx, [rbp+9E20h+var_1EA8]; Src
 * 0000000180052A0C: call    sub_1800D45C8
 * 0000000180052A11: nop
 * 0000000180052A12: mov     r8, rax
 * 0000000180052A15: lea     rdx, aStandardshader_218; "StandardShader/ShaderModel40/"
 * 0000000180052A1C: lea     rcx, [rbp+9E20h+var_1EC8]
 * 0000000180052A23: call    sub_1800454BC
 * 0000000180052A28: nop
 * 0000000180052A29: lea     r8, aVertex_75; "/Vertex"
 * 0000000180052A30: mov     rdx, rax
 * 0000000180052A33: lea     rcx, [rbp+9E20h+var_1EE8]
 * 0000000180052A3A: call    sub_18002C088
 * 0000000180052A3F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052A44: mov     rcx, rax
 * 0000000180052A47: call    sub_1800D46B4
 * 0000000180052A4C: mov     cs:byte_18026A71C, al
 * 0000000180052A52: lea     rcx, [rbp+9E20h+var_1EC8]; void *
 * 0000000180052A59: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052A5E: nop
 * 0000000180052A5F: lea     rcx, [rbp+9E20h+var_1EA8]; void *
 * 0000000180052A66: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052A6B: nop
 * 0000000180052A6C: lea     rcx, dword_18026A720
 * 0000000180052A73: call    _Init_thread_footer
 * 0000000180052A78: mov     rax, [rdi+rbx*8]
 * 0000000180052A7C: mov     ecx, [r15+rax]
 * 0000000180052A80: cmp     cs:dword_18026A728, ecx
 * 0000000180052A86: jle     loc_180052B68
 * 0000000180052A8C: lea     rcx, dword_18026A728
 * 0000000180052A93: call    _Init_thread_header
 * 0000000180052A98: cmp     cs:dword_18026A728, r14d
 * 0000000180052A9F: jnz     loc_180052B68
 * 0000000180052AA5: mov     qword ptr [rbp+9E20h+var_9130], r13
 * 0000000180052AAC: lea     rax, unk_180199088
 * 0000000180052AB3: mov     qword ptr [rbp+9E20h+var_9130+8], rax
 * 0000000180052ABA: movups  xmm0, [rbp+9E20h+var_9130]
 * 0000000180052AC1: movups  [rbp+9E20h+var_8B98], xmm0
 * 0000000180052AC8: mov     dword ptr [rbp+9E20h+var_8B88], esi
 * 0000000180052ACE: mov     dword ptr [rbp+9E20h+var_8B88+4], esi
 * 0000000180052AD4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052AD9: movups  xmm0, [rbp+9E20h+var_8B88]
 * 0000000180052AE0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052AE5: call    sub_1800456E0
 * 0000000180052AEA: mov     r8, rax
 * 0000000180052AED: mov     r9d, r12d
 * 0000000180052AF0: mov     edx, 108h
 * 0000000180052AF5: lea     rcx, [rbp+9E20h+var_1E48]; Src
 * 0000000180052AFC: call    sub_1800D45C8
 * 0000000180052B01: nop
 * 0000000180052B02: mov     r8, rax
 * 0000000180052B05: lea     rdx, aStandardshader_219; "StandardShader/ShaderModel40/"
 * 0000000180052B0C: lea     rcx, [rbp+9E20h+var_1E68]
 * 0000000180052B13: call    sub_1800454BC
 * 0000000180052B18: nop
 * 0000000180052B19: lea     r8, aVertex_76; "/Vertex"
 * 0000000180052B20: mov     rdx, rax
 * 0000000180052B23: lea     rcx, [rbp+9E20h+var_1E88]
 * 0000000180052B2A: call    sub_18002C088
 * 0000000180052B2F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052B34: mov     rcx, rax
 * 0000000180052B37: call    sub_1800D46B4
 * 0000000180052B3C: mov     cs:byte_18026A724, al
 * 0000000180052B42: lea     rcx, [rbp+9E20h+var_1E68]; void *
 * 0000000180052B49: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052B4E: nop
 * 0000000180052B4F: lea     rcx, [rbp+9E20h+var_1E48]; void *
 * 0000000180052B56: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052B5B: nop
 * 0000000180052B5C: lea     rcx, dword_18026A728
 * 0000000180052B63: call    _Init_thread_footer
 * 0000000180052B68: mov     rax, [rdi+rbx*8]
 * 0000000180052B6C: mov     ecx, [r15+rax]
 * 0000000180052B70: cmp     cs:dword_18026A730, ecx
 * 0000000180052B76: jle     loc_180052C58
 * 0000000180052B7C: lea     rcx, dword_18026A730
 * 0000000180052B83: call    _Init_thread_header
 * 0000000180052B88: cmp     cs:dword_18026A730, r14d
 * 0000000180052B8F: jnz     loc_180052C58
 * 0000000180052B95: mov     qword ptr [rbp+9E20h+var_9120], r13
 * 0000000180052B9C: lea     rax, unk_180199088
 * 0000000180052BA3: mov     qword ptr [rbp+9E20h+var_9120+8], rax
 * 0000000180052BAA: movups  xmm0, [rbp+9E20h+var_9120]
 * 0000000180052BB1: movups  [rbp+9E20h+var_8B78], xmm0
 * 0000000180052BB8: mov     dword ptr [rbp+9E20h+var_8B68], esi
 * 0000000180052BBE: mov     dword ptr [rbp+9E20h+var_8B68+4], esi
 * 0000000180052BC4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052BC9: movups  xmm0, [rbp+9E20h+var_8B68]
 * 0000000180052BD0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052BD5: call    sub_1800456E0
 * 0000000180052BDA: mov     r8, rax
 * 0000000180052BDD: mov     r9d, r12d
 * 0000000180052BE0: mov     edx, 10Ah
 * 0000000180052BE5: lea     rcx, [rbp+9E20h+var_1DE8]; Src
 * 0000000180052BEC: call    sub_1800D45C8
 * 0000000180052BF1: nop
 * 0000000180052BF2: mov     r8, rax
 * 0000000180052BF5: lea     rdx, aStandardshader_220; "StandardShader/ShaderModel40/"
 * 0000000180052BFC: lea     rcx, [rbp+9E20h+var_1E08]
 * 0000000180052C03: call    sub_1800454BC
 * 0000000180052C08: nop
 * 0000000180052C09: lea     r8, aVertex_77; "/Vertex"
 * 0000000180052C10: mov     rdx, rax
 * 0000000180052C13: lea     rcx, [rbp+9E20h+var_1E28]
 * 0000000180052C1A: call    sub_18002C088
 * 0000000180052C1F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052C24: mov     rcx, rax
 * 0000000180052C27: call    sub_1800D46B4
 * 0000000180052C2C: mov     cs:byte_18026A72C, al
 * 0000000180052C32: lea     rcx, [rbp+9E20h+var_1E08]; void *
 * 0000000180052C39: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052C3E: nop
 * 0000000180052C3F: lea     rcx, [rbp+9E20h+var_1DE8]; void *
 * 0000000180052C46: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052C4B: nop
 * 0000000180052C4C: lea     rcx, dword_18026A730
 * 0000000180052C53: call    _Init_thread_footer
 * 0000000180052C58: mov     rax, [rdi+rbx*8]
 * 0000000180052C5C: mov     ecx, [r15+rax]
 * 0000000180052C60: cmp     cs:dword_18026A738, ecx
 * 0000000180052C66: jle     loc_180052D48
 * 0000000180052C6C: lea     rcx, dword_18026A738
 * 0000000180052C73: call    _Init_thread_header
 * 0000000180052C78: cmp     cs:dword_18026A738, r14d
 * 0000000180052C7F: jnz     loc_180052D48
 * 0000000180052C85: mov     qword ptr [rbp+9E20h+var_9110], r13
 * 0000000180052C8C: lea     rax, unk_180199088
 * 0000000180052C93: mov     qword ptr [rbp+9E20h+var_9110+8], rax
 * 0000000180052C9A: movups  xmm0, [rbp+9E20h+var_9110]
 * 0000000180052CA1: movups  [rbp+9E20h+var_8B58], xmm0
 * 0000000180052CA8: mov     dword ptr [rbp+9E20h+var_8B48], esi
 * 0000000180052CAE: mov     dword ptr [rbp+9E20h+var_8B48+4], esi
 * 0000000180052CB4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052CB9: movups  xmm0, [rbp+9E20h+var_8B48]
 * 0000000180052CC0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052CC5: call    sub_1800456E0
 * 0000000180052CCA: mov     r8, rax
 * 0000000180052CCD: mov     r9d, r12d
 * 0000000180052CD0: mov     edx, 110h
 * 0000000180052CD5: lea     rcx, [rbp+9E20h+var_1D88]; Src
 * 0000000180052CDC: call    sub_1800D45C8
 * 0000000180052CE1: nop
 * 0000000180052CE2: mov     r8, rax
 * 0000000180052CE5: lea     rdx, aStandardshader_221; "StandardShader/ShaderModel40/"
 * 0000000180052CEC: lea     rcx, [rbp+9E20h+var_1DA8]
 * 0000000180052CF3: call    sub_1800454BC
 * 0000000180052CF8: nop
 * 0000000180052CF9: lea     r8, aVertex_78; "/Vertex"
 * 0000000180052D00: mov     rdx, rax
 * 0000000180052D03: lea     rcx, [rbp+9E20h+var_1DC8]
 * 0000000180052D0A: call    sub_18002C088
 * 0000000180052D0F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052D14: mov     rcx, rax
 * 0000000180052D17: call    sub_1800D46B4
 * 0000000180052D1C: mov     cs:byte_18026A734, al
 * 0000000180052D22: lea     rcx, [rbp+9E20h+var_1DA8]; void *
 * 0000000180052D29: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052D2E: nop
 * 0000000180052D2F: lea     rcx, [rbp+9E20h+var_1D88]; void *
 * 0000000180052D36: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052D3B: nop
 * 0000000180052D3C: lea     rcx, dword_18026A738
 * 0000000180052D43: call    _Init_thread_footer
 * 0000000180052D48: mov     rax, [rdi+rbx*8]
 * 0000000180052D4C: mov     ecx, [r15+rax]
 * 0000000180052D50: cmp     cs:dword_18026A740, ecx
 * 0000000180052D56: jle     loc_180052E38
 * 0000000180052D5C: lea     rcx, dword_18026A740
 * 0000000180052D63: call    _Init_thread_header
 * 0000000180052D68: cmp     cs:dword_18026A740, r14d
 * 0000000180052D6F: jnz     loc_180052E38
 * 0000000180052D75: mov     qword ptr [rbp+9E20h+var_9100], r13
 * 0000000180052D7C: lea     rax, unk_180199088
 * 0000000180052D83: mov     qword ptr [rbp+9E20h+var_9100+8], rax
 * 0000000180052D8A: movups  xmm0, [rbp+9E20h+var_9100]
 * 0000000180052D91: movups  [rbp+9E20h+var_8B38], xmm0
 * 0000000180052D98: mov     dword ptr [rbp+9E20h+var_8B28], esi
 * 0000000180052D9E: mov     dword ptr [rbp+9E20h+var_8B28+4], esi
 * 0000000180052DA4: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052DA9: movups  xmm0, [rbp+9E20h+var_8B28]
 * 0000000180052DB0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052DB5: call    sub_1800456E0
 * 0000000180052DBA: mov     r8, rax
 * 0000000180052DBD: mov     r9d, r12d
 * 0000000180052DC0: mov     edx, 112h
 * 0000000180052DC5: lea     rcx, [rbp+9E20h+var_1D28]; Src
 * 0000000180052DCC: call    sub_1800D45C8
 * 0000000180052DD1: nop
 * 0000000180052DD2: mov     r8, rax
 * 0000000180052DD5: lea     rdx, aStandardshader_222; "StandardShader/ShaderModel40/"
 * 0000000180052DDC: lea     rcx, [rbp+9E20h+var_1D48]
 * 0000000180052DE3: call    sub_1800454BC
 * 0000000180052DE8: nop
 * 0000000180052DE9: lea     r8, aVertex_79; "/Vertex"
 * 0000000180052DF0: mov     rdx, rax
 * 0000000180052DF3: lea     rcx, [rbp+9E20h+var_1D68]
 * 0000000180052DFA: call    sub_18002C088
 * 0000000180052DFF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052E04: mov     rcx, rax
 * 0000000180052E07: call    sub_1800D46B4
 * 0000000180052E0C: mov     cs:byte_18026A73C, al
 * 0000000180052E12: lea     rcx, [rbp+9E20h+var_1D48]; void *
 * 0000000180052E19: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052E1E: nop
 * 0000000180052E1F: lea     rcx, [rbp+9E20h+var_1D28]; void *
 * 0000000180052E26: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052E2B: nop
 * 0000000180052E2C: lea     rcx, dword_18026A740
 * 0000000180052E33: call    _Init_thread_footer
 * 0000000180052E38: mov     rax, [rdi+rbx*8]
 * 0000000180052E3C: mov     ecx, [r15+rax]
 * 0000000180052E40: cmp     cs:dword_18026A748, ecx
 * 0000000180052E46: jle     loc_180052F28
 * 0000000180052E4C: lea     rcx, dword_18026A748
 * 0000000180052E53: call    _Init_thread_header
 * 0000000180052E58: cmp     cs:dword_18026A748, r14d
 * 0000000180052E5F: jnz     loc_180052F28
 * 0000000180052E65: mov     qword ptr [rbp+9E20h+var_90F0], r13
 * 0000000180052E6C: lea     rax, unk_180199088
 * 0000000180052E73: mov     qword ptr [rbp+9E20h+var_90F0+8], rax
 * 0000000180052E7A: movups  xmm0, [rbp+9E20h+var_90F0]
 * 0000000180052E81: movups  [rbp+9E20h+var_8B18], xmm0
 * 0000000180052E88: mov     dword ptr [rbp+9E20h+var_8B08], esi
 * 0000000180052E8E: mov     dword ptr [rbp+9E20h+var_8B08+4], esi
 * 0000000180052E94: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052E99: movups  xmm0, [rbp+9E20h+var_8B08]
 * 0000000180052EA0: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052EA5: call    sub_1800456E0
 * 0000000180052EAA: mov     r8, rax
 * 0000000180052EAD: mov     r9d, r12d
 * 0000000180052EB0: mov     edx, 114h
 * 0000000180052EB5: lea     rcx, [rbp+9E20h+var_1CC8]; Src
 * 0000000180052EBC: call    sub_1800D45C8
 * 0000000180052EC1: nop
 * 0000000180052EC2: mov     r8, rax
 * 0000000180052EC5: lea     rdx, aStandardshader_223; "StandardShader/ShaderModel40/"
 * 0000000180052ECC: lea     rcx, [rbp+9E20h+var_1CE8]
 * 0000000180052ED3: call    sub_1800454BC
 * 0000000180052ED8: nop
 * 0000000180052ED9: lea     r8, aVertex_80; "/Vertex"
 * 0000000180052EE0: mov     rdx, rax
 * 0000000180052EE3: lea     rcx, [rbp+9E20h+var_1D08]
 * 0000000180052EEA: call    sub_18002C088
 * 0000000180052EEF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052EF4: mov     rcx, rax
 * 0000000180052EF7: call    sub_1800D46B4
 * 0000000180052EFC: mov     cs:byte_18026A744, al
 * 0000000180052F02: lea     rcx, [rbp+9E20h+var_1CE8]; void *
 * 0000000180052F09: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052F0E: nop
 * 0000000180052F0F: lea     rcx, [rbp+9E20h+var_1CC8]; void *
 * 0000000180052F16: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052F1B: nop
 * 0000000180052F1C: lea     rcx, dword_18026A748
 * 0000000180052F23: call    _Init_thread_footer
 * 0000000180052F28: mov     rax, [rdi+rbx*8]
 * 0000000180052F2C: mov     ecx, [r15+rax]
 * 0000000180052F30: cmp     cs:dword_18026A750, ecx
 * 0000000180052F36: jle     loc_180053018
 * 0000000180052F3C: lea     rcx, dword_18026A750
 * 0000000180052F43: call    _Init_thread_header
 * 0000000180052F48: cmp     cs:dword_18026A750, r14d
 * 0000000180052F4F: jnz     loc_180053018
 * 0000000180052F55: mov     qword ptr [rbp+9E20h+var_90E0], r13
 * 0000000180052F5C: lea     rax, unk_180199088
 * 0000000180052F63: mov     qword ptr [rbp+9E20h+var_90E0+8], rax
 * 0000000180052F6A: movups  xmm0, [rbp+9E20h+var_90E0]
 * 0000000180052F71: movups  [rbp+9E20h+var_8AF8], xmm0
 * 0000000180052F78: mov     dword ptr [rbp+9E20h+var_8AE8], esi
 * 0000000180052F7E: mov     dword ptr [rbp+9E20h+var_8AE8+4], esi
 * 0000000180052F84: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180052F89: movups  xmm0, [rbp+9E20h+var_8AE8]
 * 0000000180052F90: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180052F95: call    sub_1800456E0
 * 0000000180052F9A: mov     r8, rax
 * 0000000180052F9D: mov     r9d, r12d
 * 0000000180052FA0: mov     edx, 116h
 * 0000000180052FA5: lea     rcx, [rbp+9E20h+var_1C68]; Src
 * 0000000180052FAC: call    sub_1800D45C8
 * 0000000180052FB1: nop
 * 0000000180052FB2: mov     r8, rax
 * 0000000180052FB5: lea     rdx, aStandardshader_224; "StandardShader/ShaderModel40/"
 * 0000000180052FBC: lea     rcx, [rbp+9E20h+var_1C88]
 * 0000000180052FC3: call    sub_1800454BC
 * 0000000180052FC8: nop
 * 0000000180052FC9: lea     r8, aVertex_81; "/Vertex"
 * 0000000180052FD0: mov     rdx, rax
 * 0000000180052FD3: lea     rcx, [rbp+9E20h+var_1CA8]
 * 0000000180052FDA: call    sub_18002C088
 * 0000000180052FDF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180052FE4: mov     rcx, rax
 * 0000000180052FE7: call    sub_1800D46B4
 * 0000000180052FEC: mov     cs:byte_18026A74C, al
 * 0000000180052FF2: lea     rcx, [rbp+9E20h+var_1C88]; void *
 * 0000000180052FF9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052FFE: nop
 * 0000000180052FFF: lea     rcx, [rbp+9E20h+var_1C68]; void *
 * 0000000180053006: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005300B: nop
 * 000000018005300C: lea     rcx, dword_18026A750
 * 0000000180053013: call    _Init_thread_footer
 * 0000000180053018: mov     rax, [rdi+rbx*8]
 * 000000018005301C: mov     ecx, [r15+rax]
 * 0000000180053020: cmp     cs:dword_18026A758, ecx
 * 0000000180053026: jle     loc_180053108
 * 000000018005302C: lea     rcx, dword_18026A758
 * 0000000180053033: call    _Init_thread_header
 * 0000000180053038: cmp     cs:dword_18026A758, r14d
 * 000000018005303F: jnz     loc_180053108
 * 0000000180053045: mov     qword ptr [rbp+9E20h+var_90D0], r13
 * 000000018005304C: lea     rax, unk_180199088
 * 0000000180053053: mov     qword ptr [rbp+9E20h+var_90D0+8], rax
 * 000000018005305A: movups  xmm0, [rbp+9E20h+var_90D0]
 * 0000000180053061: movups  [rbp+9E20h+var_8AD8], xmm0
 * 0000000180053068: mov     dword ptr [rbp+9E20h+var_8AC8], esi
 * 000000018005306E: mov     dword ptr [rbp+9E20h+var_8AC8+4], esi
 * 0000000180053074: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053079: movups  xmm0, [rbp+9E20h+var_8AC8]
 * 0000000180053080: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053085: call    sub_1800456E0
 * 000000018005308A: mov     r8, rax
 * 000000018005308D: mov     r9d, r12d
 * 0000000180053090: mov     edx, 118h
 * 0000000180053095: lea     rcx, [rbp+9E20h+var_1C08]; Src
 * 000000018005309C: call    sub_1800D45C8
 * 00000001800530A1: nop
 * 00000001800530A2: mov     r8, rax
 * 00000001800530A5: lea     rdx, aStandardshader_225; "StandardShader/ShaderModel40/"
 * 00000001800530AC: lea     rcx, [rbp+9E20h+var_1C28]
 * 00000001800530B3: call    sub_1800454BC
 * 00000001800530B8: nop
 * 00000001800530B9: lea     r8, aVertex_82; "/Vertex"
 * 00000001800530C0: mov     rdx, rax
 * 00000001800530C3: lea     rcx, [rbp+9E20h+var_1C48]
 * 00000001800530CA: call    sub_18002C088
 * 00000001800530CF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800530D4: mov     rcx, rax
 * 00000001800530D7: call    sub_1800D46B4
 * 00000001800530DC: mov     cs:byte_18026A754, al
 * 00000001800530E2: lea     rcx, [rbp+9E20h+var_1C28]; void *
 * 00000001800530E9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800530EE: nop
 * 00000001800530EF: lea     rcx, [rbp+9E20h+var_1C08]; void *
 * 00000001800530F6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800530FB: nop
 * 00000001800530FC: lea     rcx, dword_18026A758
 * 0000000180053103: call    _Init_thread_footer
 * 0000000180053108: mov     rax, [rdi+rbx*8]
 * 000000018005310C: mov     ecx, [r15+rax]
 * 0000000180053110: cmp     cs:dword_18026A760, ecx
 * 0000000180053116: jle     loc_1800531F8
 * 000000018005311C: lea     rcx, dword_18026A760
 * 0000000180053123: call    _Init_thread_header
 * 0000000180053128: cmp     cs:dword_18026A760, r14d
 * 000000018005312F: jnz     loc_1800531F8
 * 0000000180053135: mov     qword ptr [rbp+9E20h+var_90C0], r13
 * 000000018005313C: lea     rax, unk_180199088
 * 0000000180053143: mov     qword ptr [rbp+9E20h+var_90C0+8], rax
 * 000000018005314A: movups  xmm0, [rbp+9E20h+var_90C0]
 * 0000000180053151: movups  [rbp+9E20h+var_8AB8], xmm0
 * 0000000180053158: mov     dword ptr [rbp+9E20h+var_8AA8], esi
 * 000000018005315E: mov     dword ptr [rbp+9E20h+var_8AA8+4], esi
 * 0000000180053164: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053169: movups  xmm0, [rbp+9E20h+var_8AA8]
 * 0000000180053170: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053175: call    sub_1800456E0
 * 000000018005317A: mov     r8, rax
 * 000000018005317D: mov     r9d, r12d
 * 0000000180053180: mov     edx, 11Ah
 * 0000000180053185: lea     rcx, [rbp+9E20h+var_1BA8]; Src
 * 000000018005318C: call    sub_1800D45C8
 * 0000000180053191: nop
 * 0000000180053192: mov     r8, rax
 * 0000000180053195: lea     rdx, aStandardshader_226; "StandardShader/ShaderModel40/"
 * 000000018005319C: lea     rcx, [rbp+9E20h+var_1BC8]
 * 00000001800531A3: call    sub_1800454BC
 * 00000001800531A8: nop
 * 00000001800531A9: lea     r8, aVertex_83; "/Vertex"
 * 00000001800531B0: mov     rdx, rax
 * 00000001800531B3: lea     rcx, [rbp+9E20h+var_1BE8]
 * 00000001800531BA: call    sub_18002C088
 * 00000001800531BF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800531C4: mov     rcx, rax
 * 00000001800531C7: call    sub_1800D46B4
 * 00000001800531CC: mov     cs:byte_18026A75C, al
 * 00000001800531D2: lea     rcx, [rbp+9E20h+var_1BC8]; void *
 * 00000001800531D9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800531DE: nop
 * 00000001800531DF: lea     rcx, [rbp+9E20h+var_1BA8]; void *
 * 00000001800531E6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800531EB: nop
 * 00000001800531EC: lea     rcx, dword_18026A760
 * 00000001800531F3: call    _Init_thread_footer
 * 00000001800531F8: mov     rax, [rdi+rbx*8]
 * 00000001800531FC: mov     ecx, [r15+rax]
 * 0000000180053200: cmp     cs:dword_18026A768, ecx
 * 0000000180053206: jle     loc_1800532F1
 * 000000018005320C: lea     rcx, dword_18026A768
 * 0000000180053213: call    _Init_thread_header
 * 0000000180053218: cmp     cs:dword_18026A768, r14d
 * 000000018005321F: jnz     loc_1800532F1
 * 0000000180053225: lea     r13, unk_180199D30
 * 000000018005322C: mov     qword ptr [rbp+9E20h+var_90B0], r13
 * 0000000180053233: lea     rax, unk_18019B748
 * 000000018005323A: mov     qword ptr [rbp+9E20h+var_90B0+8], rax
 * 0000000180053241: movups  xmm0, [rbp+9E20h+var_90B0]
 * 0000000180053248: movups  [rbp+9E20h+var_8A98], xmm0
 * 000000018005324F: mov     dword ptr [rbp+9E20h+var_8A88], esi
 * 0000000180053255: mov     dword ptr [rbp+9E20h+var_8A88+4], esi
 * 000000018005325B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053260: movups  xmm0, [rbp+9E20h+var_8A88]
 * 0000000180053267: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 000000018005326C: call    sub_1800456E0
 * 0000000180053271: mov     r8, rax
 * 0000000180053274: mov     r9d, r12d
 * 0000000180053277: mov     edx, 120h
 * 000000018005327C: lea     rcx, [rbp+9E20h+var_1B48]; Src
 * 0000000180053283: call    sub_1800D45C8
 * 0000000180053288: nop
 * 0000000180053289: mov     r8, rax
 * 000000018005328C: lea     rdx, aStandardshader_227; "StandardShader/ShaderModel40/"
 * 0000000180053293: lea     rcx, [rbp+9E20h+var_1B68]
 * 000000018005329A: call    sub_1800454BC
 * 000000018005329F: nop
 * 00000001800532A0: lea     r8, aVertex_84; "/Vertex"
 * 00000001800532A7: mov     rdx, rax
 * 00000001800532AA: lea     rcx, [rbp+9E20h+var_1B88]
 * 00000001800532B1: call    sub_18002C088
 * 00000001800532B6: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800532BB: mov     rcx, rax
 * 00000001800532BE: call    sub_1800D46B4
 * 00000001800532C3: mov     cs:byte_18026A764, al
 * 00000001800532C9: lea     rcx, [rbp+9E20h+var_1B68]; void *
 * 00000001800532D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800532D5: nop
 * 00000001800532D6: lea     rcx, [rbp+9E20h+var_1B48]; void *
 * 00000001800532DD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800532E2: nop
 * 00000001800532E3: lea     rcx, dword_18026A768
 * 00000001800532EA: call    _Init_thread_footer
 * 00000001800532EF: jmp     short loc_1800532F8
 * 00000001800532F1: lea     r13, unk_180199D30
 * 00000001800532F8: mov     rax, [rdi+rbx*8]
 * 00000001800532FC: mov     ecx, [r15+rax]
 * 0000000180053300: cmp     cs:dword_18026A770, ecx
 * 0000000180053306: jle     loc_1800533E8
 * 000000018005330C: lea     rcx, dword_18026A770
 * 0000000180053313: call    _Init_thread_header
 * 0000000180053318: cmp     cs:dword_18026A770, r14d
 * 000000018005331F: jnz     loc_1800533E8
 * 0000000180053325: mov     qword ptr [rbp+9E20h+var_90A0], r13
 * 000000018005332C: lea     rax, unk_18019B748
 * 0000000180053333: mov     qword ptr [rbp+9E20h+var_90A0+8], rax
 * 000000018005333A: movups  xmm0, [rbp+9E20h+var_90A0]
 * 0000000180053341: movups  [rbp+9E20h+var_8A78], xmm0
 * 0000000180053348: mov     dword ptr [rbp+9E20h+var_8A68], esi
 * 000000018005334E: mov     dword ptr [rbp+9E20h+var_8A68+4], esi
 * 0000000180053354: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053359: movups  xmm0, [rbp+9E20h+var_8A68]
 * 0000000180053360: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053365: call    sub_1800456E0
 * 000000018005336A: mov     r8, rax
 * 000000018005336D: mov     r9d, r12d
 * 0000000180053370: mov     edx, 122h
 * 0000000180053375: lea     rcx, [rbp+9E20h+var_1AE8]; Src
 * 000000018005337C: call    sub_1800D45C8
 * 0000000180053381: nop
 * 0000000180053382: mov     r8, rax
 * 0000000180053385: lea     rdx, aStandardshader_228; "StandardShader/ShaderModel40/"
 * 000000018005338C: lea     rcx, [rbp+9E20h+var_1B08]
 * 0000000180053393: call    sub_1800454BC
 * 0000000180053398: nop
 * 0000000180053399: lea     r8, aVertex_85; "/Vertex"
 * 00000001800533A0: mov     rdx, rax
 * 00000001800533A3: lea     rcx, [rbp+9E20h+var_1B28]
 * 00000001800533AA: call    sub_18002C088
 * 00000001800533AF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800533B4: mov     rcx, rax
 * 00000001800533B7: call    sub_1800D46B4
 * 00000001800533BC: mov     cs:byte_18026A76C, al
 * 00000001800533C2: lea     rcx, [rbp+9E20h+var_1B08]; void *
 * 00000001800533C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800533CE: nop
 * 00000001800533CF: lea     rcx, [rbp+9E20h+var_1AE8]; void *
 * 00000001800533D6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800533DB: nop
 * 00000001800533DC: lea     rcx, dword_18026A770
 * 00000001800533E3: call    _Init_thread_footer
 * 00000001800533E8: mov     rax, [rdi+rbx*8]
 * 00000001800533EC: mov     ecx, [r15+rax]
 * 00000001800533F0: cmp     cs:dword_18026A778, ecx
 * 00000001800533F6: jle     loc_1800534D8
 * 00000001800533FC: lea     rcx, dword_18026A778
 * 0000000180053403: call    _Init_thread_header
 * 0000000180053408: cmp     cs:dword_18026A778, r14d
 * 000000018005340F: jnz     loc_1800534D8
 * 0000000180053415: mov     qword ptr [rbp+9E20h+var_9090], r13
 * 000000018005341C: lea     rax, unk_18019B748
 * 0000000180053423: mov     qword ptr [rbp+9E20h+var_9090+8], rax
 * 000000018005342A: movups  xmm0, [rbp+9E20h+var_9090]
 * 0000000180053431: movups  [rbp+9E20h+var_8A58], xmm0
 * 0000000180053438: mov     dword ptr [rbp+9E20h+var_8A48], esi
 * 000000018005343E: mov     dword ptr [rbp+9E20h+var_8A48+4], esi
 * 0000000180053444: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053449: movups  xmm0, [rbp+9E20h+var_8A48]
 * 0000000180053450: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053455: call    sub_1800456E0
 * 000000018005345A: mov     r8, rax
 * 000000018005345D: mov     r9d, r12d
 * 0000000180053460: mov     edx, 128h
 * 0000000180053465: lea     rcx, [rbp+9E20h+var_1A88]; Src
 * 000000018005346C: call    sub_1800D45C8
 * 0000000180053471: nop
 * 0000000180053472: mov     r8, rax
 * 0000000180053475: lea     rdx, aStandardshader_229; "StandardShader/ShaderModel40/"
 * 000000018005347C: lea     rcx, [rbp+9E20h+var_1AA8]
 * 0000000180053483: call    sub_1800454BC
 * 0000000180053488: nop
 * 0000000180053489: lea     r8, aVertex_86; "/Vertex"
 * 0000000180053490: mov     rdx, rax
 * 0000000180053493: lea     rcx, [rbp+9E20h+var_1AC8]
 * 000000018005349A: call    sub_18002C088
 * 000000018005349F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800534A4: mov     rcx, rax
 * 00000001800534A7: call    sub_1800D46B4
 * 00000001800534AC: mov     cs:byte_18026A774, al
 * 00000001800534B2: lea     rcx, [rbp+9E20h+var_1AA8]; void *
 * 00000001800534B9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800534BE: nop
 * 00000001800534BF: lea     rcx, [rbp+9E20h+var_1A88]; void *
 * 00000001800534C6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800534CB: nop
 * 00000001800534CC: lea     rcx, dword_18026A778
 * 00000001800534D3: call    _Init_thread_footer
 * 00000001800534D8: mov     rax, [rdi+rbx*8]
 * 00000001800534DC: mov     ecx, [r15+rax]
 * 00000001800534E0: cmp     cs:dword_18026A780, ecx
 * 00000001800534E6: jle     loc_1800535C8
 * 00000001800534EC: lea     rcx, dword_18026A780
 * 00000001800534F3: call    _Init_thread_header
 * 00000001800534F8: cmp     cs:dword_18026A780, r14d
 * 00000001800534FF: jnz     loc_1800535C8
 * 0000000180053505: mov     qword ptr [rbp+9E20h+var_9080], r13
 * 000000018005350C: lea     rax, unk_18019B748
 * 0000000180053513: mov     qword ptr [rbp+9E20h+var_9080+8], rax
 * 000000018005351A: movups  xmm0, [rbp+9E20h+var_9080]
 * 0000000180053521: movups  [rbp+9E20h+var_8A38], xmm0
 * 0000000180053528: mov     dword ptr [rbp+9E20h+var_8A28], esi
 * 000000018005352E: mov     dword ptr [rbp+9E20h+var_8A28+4], esi
 * 0000000180053534: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053539: movups  xmm0, [rbp+9E20h+var_8A28]
 * 0000000180053540: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053545: call    sub_1800456E0
 * 000000018005354A: mov     r8, rax
 * 000000018005354D: mov     r9d, r12d
 * 0000000180053550: mov     edx, 12Ah
 * 0000000180053555: lea     rcx, [rbp+9E20h+var_1A28]; Src
 * 000000018005355C: call    sub_1800D45C8
 * 0000000180053561: nop
 * 0000000180053562: mov     r8, rax
 * 0000000180053565: lea     rdx, aStandardshader_230; "StandardShader/ShaderModel40/"
 * 000000018005356C: lea     rcx, [rbp+9E20h+var_1A48]
 * 0000000180053573: call    sub_1800454BC
 * 0000000180053578: nop
 * 0000000180053579: lea     r8, aVertex_87; "/Vertex"
 * 0000000180053580: mov     rdx, rax
 * 0000000180053583: lea     rcx, [rbp+9E20h+var_1A68]
 * 000000018005358A: call    sub_18002C088
 * 000000018005358F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053594: mov     rcx, rax
 * 0000000180053597: call    sub_1800D46B4
 * 000000018005359C: mov     cs:byte_18026A77C, al
 * 00000001800535A2: lea     rcx, [rbp+9E20h+var_1A48]; void *
 * 00000001800535A9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800535AE: nop
 * 00000001800535AF: lea     rcx, [rbp+9E20h+var_1A28]; void *
 * 00000001800535B6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800535BB: nop
 * 00000001800535BC: lea     rcx, dword_18026A780
 * 00000001800535C3: call    _Init_thread_footer
 * 00000001800535C8: mov     rax, [rdi+rbx*8]
 * 00000001800535CC: mov     ecx, [r15+rax]
 * 00000001800535D0: cmp     cs:dword_18026A788, ecx
 * 00000001800535D6: jle     loc_1800536B8
 * 00000001800535DC: lea     rcx, dword_18026A788
 * 00000001800535E3: call    _Init_thread_header
 * 00000001800535E8: cmp     cs:dword_18026A788, r14d
 * 00000001800535EF: jnz     loc_1800536B8
 * 00000001800535F5: mov     qword ptr [rbp+9E20h+var_9070], r13
 * 00000001800535FC: lea     rax, unk_18019B748
 * 0000000180053603: mov     qword ptr [rbp+9E20h+var_9070+8], rax
 * 000000018005360A: movups  xmm0, [rbp+9E20h+var_9070]
 * 0000000180053611: movups  [rbp+9E20h+var_8A18], xmm0
 * 0000000180053618: mov     dword ptr [rbp+9E20h+var_8A08], esi
 * 000000018005361E: mov     dword ptr [rbp+9E20h+var_8A08+4], esi
 * 0000000180053624: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053629: movups  xmm0, [rbp+9E20h+var_8A08]
 * 0000000180053630: movaps  [rsp+9F20h+var_9EE0], xmm0
 * 0000000180053635: call    sub_1800456E0
 * 000000018005363A: mov     r8, rax
 * 000000018005363D: mov     r9d, r12d
 * 0000000180053640: mov     edx, 130h
 * 0000000180053645: lea     rcx, [rbp+9E20h+var_19C8]; Src
 * 000000018005364C: call    sub_1800D45C8
 * 0000000180053651: nop
 * 0000000180053652: mov     r8, rax
 * 0000000180053655: lea     rdx, aStandardshader_231; "StandardShader/ShaderModel40/"
 * 000000018005365C: lea     rcx, [rbp+9E20h+var_19E8]
 * 0000000180053663: call    sub_1800454BC
 * 0000000180053668: nop
 * 0000000180053669: lea     r8, aVertex_88; "/Vertex"
 * 0000000180053670: mov     rdx, rax
 * 0000000180053673: lea     rcx, [rbp+9E20h+var_1A08]
 * 000000018005367A: call    sub_18002C088
 * 000000018005367F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053684: mov     rcx, rax
 * 0000000180053687: call    sub_1800D46B4
 * 000000018005368C: mov     cs:byte_18026A784, al
 * 0000000180053692: lea     rcx, [rbp+9E20h+var_19E8]; void *
 * 0000000180053699: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005369E: nop
 * 000000018005369F: lea     rcx, [rbp+9E20h+var_19C8]; void *
 * 00000001800536A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800536AB: nop
 * 00000001800536AC: lea     rcx, dword_18026A788
 * 00000001800536B3: call    _Init_thread_footer
 * 00000001800536B8: mov     rax, [rdi+rbx*8]
 * 00000001800536BC: mov     r13d, 1A18h
 * 00000001800536C2: mov     eax, [r15+rax]
 * 00000001800536C6: cmp     cs:dword_18026A790, eax
 * 00000001800536CC: jle     loc_1800537BF
 * 00000001800536D2: lea     rcx, dword_18026A790
 * 00000001800536D9: call    _Init_thread_header
 * 00000001800536DE: cmp     cs:dword_18026A790, r14d
 * 00000001800536E5: jnz     loc_1800537BF
 * 00000001800536EB: mov     r8d, r13d
 * 00000001800536EE: lea     rdx, unk_180199D30
 * 00000001800536F5: lea     rcx, [rbp+9E20h+var_7378]
 * 00000001800536FC: call    sub_1800456CC
 * 0000000180053701: movups  xmm0, xmmword ptr [rax]
 * 0000000180053704: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005370A: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053710: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053714: mov     r9d, esi
 * 0000000180053717: mov     r8d, esi
 * 000000018005371A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005371F: lea     rcx, [rbp+9E20h+var_688]
 * 0000000180053726: call    sub_1800456B8
 * 000000018005372B: movups  xmm0, xmmword ptr [rax]
 * 000000018005372E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053733: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053737: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005373C: call    sub_1800456E0
 * 0000000180053741: mov     r8, rax
 * 0000000180053744: mov     r9d, r12d
 * 0000000180053747: mov     edx, 132h
 * 000000018005374C: lea     rcx, [rbp+9E20h+var_1968]; Src
 * 0000000180053753: call    sub_1800D45C8
 * 0000000180053758: nop
 * 0000000180053759: mov     r8, rax
 * 000000018005375C: lea     rdx, aStandardshader_232; "StandardShader/ShaderModel40/"
 * 0000000180053763: lea     rcx, [rbp+9E20h+var_1988]
 * 000000018005376A: call    sub_1800454BC
 * 000000018005376F: nop
 * 0000000180053770: lea     r8, aVertex_89; "/Vertex"
 * 0000000180053777: mov     rdx, rax
 * 000000018005377A: lea     rcx, [rbp+9E20h+var_19A8]
 * 0000000180053781: call    sub_18002C088
 * 0000000180053786: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005378B: mov     rcx, rax
 * 000000018005378E: call    sub_1800D46B4
 * 0000000180053793: mov     cs:byte_18026A78C, al
 * 0000000180053799: lea     rcx, [rbp+9E20h+var_1988]; void *
 * 00000001800537A0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800537A5: nop
 * 00000001800537A6: lea     rcx, [rbp+9E20h+var_1968]; void *
 * 00000001800537AD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800537B2: nop
 * 00000001800537B3: lea     rcx, dword_18026A790
 * 00000001800537BA: call    _Init_thread_footer
 * 00000001800537BF: mov     rax, [rdi+rbx*8]
 * 00000001800537C3: mov     ecx, [r15+rax]
 * 00000001800537C7: cmp     cs:dword_18026A798, ecx
 * 00000001800537CD: jle     loc_1800538C0
 * 00000001800537D3: lea     rcx, dword_18026A798
 * 00000001800537DA: call    _Init_thread_header
 * 00000001800537DF: cmp     cs:dword_18026A798, r14d
 * 00000001800537E6: jnz     loc_1800538C0
 * 00000001800537EC: mov     r8d, r13d
 * 00000001800537EF: lea     rdx, unk_180199D30
 * 00000001800537F6: lea     rcx, [rbp+9E20h+var_7368]
 * 00000001800537FD: call    sub_1800456CC
 * 0000000180053802: movups  xmm0, xmmword ptr [rax]
 * 0000000180053805: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005380B: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053811: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053815: mov     r9d, esi
 * 0000000180053818: mov     r8d, esi
 * 000000018005381B: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053820: lea     rcx, [rbp+9E20h+var_668]
 * 0000000180053827: call    sub_1800456B8
 * 000000018005382C: movups  xmm0, xmmword ptr [rax]
 * 000000018005382F: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053834: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053838: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005383D: call    sub_1800456E0
 * 0000000180053842: mov     r8, rax
 * 0000000180053845: mov     r9d, r12d
 * 0000000180053848: mov     edx, 138h
 * 000000018005384D: lea     rcx, [rbp+9E20h+var_1908]; Src
 * 0000000180053854: call    sub_1800D45C8
 * 0000000180053859: nop
 * 000000018005385A: mov     r8, rax
 * 000000018005385D: lea     rdx, aStandardshader_233; "StandardShader/ShaderModel40/"
 * 0000000180053864: lea     rcx, [rbp+9E20h+var_1928]
 * 000000018005386B: call    sub_1800454BC
 * 0000000180053870: nop
 * 0000000180053871: lea     r8, aVertex_90; "/Vertex"
 * 0000000180053878: mov     rdx, rax
 * 000000018005387B: lea     rcx, [rbp+9E20h+var_1948]
 * 0000000180053882: call    sub_18002C088
 * 0000000180053887: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005388C: mov     rcx, rax
 * 000000018005388F: call    sub_1800D46B4
 * 0000000180053894: mov     cs:byte_18026A794, al
 * 000000018005389A: lea     rcx, [rbp+9E20h+var_1928]; void *
 * 00000001800538A1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800538A6: nop
 * 00000001800538A7: lea     rcx, [rbp+9E20h+var_1908]; void *
 * 00000001800538AE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800538B3: nop
 * 00000001800538B4: lea     rcx, dword_18026A798
 * 00000001800538BB: call    _Init_thread_footer
 * 00000001800538C0: mov     rax, [rdi+rbx*8]
 * 00000001800538C4: mov     ecx, [r15+rax]
 * 00000001800538C8: cmp     cs:dword_18026A7A0, ecx
 * 00000001800538CE: jle     loc_1800539C1
 * 00000001800538D4: lea     rcx, dword_18026A7A0
 * 00000001800538DB: call    _Init_thread_header
 * 00000001800538E0: cmp     cs:dword_18026A7A0, r14d
 * 00000001800538E7: jnz     loc_1800539C1
 * 00000001800538ED: mov     r8d, r13d
 * 00000001800538F0: lea     rdx, unk_180199D30
 * 00000001800538F7: lea     rcx, [rbp+9E20h+var_7358]
 * 00000001800538FE: call    sub_1800456CC
 * 0000000180053903: movups  xmm0, xmmword ptr [rax]
 * 0000000180053906: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005390C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053912: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053916: mov     r9d, esi
 * 0000000180053919: mov     r8d, esi
 * 000000018005391C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053921: lea     rcx, [rbp+9E20h+var_648]
 * 0000000180053928: call    sub_1800456B8
 * 000000018005392D: movups  xmm0, xmmword ptr [rax]
 * 0000000180053930: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053935: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053939: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005393E: call    sub_1800456E0
 * 0000000180053943: mov     r8, rax
 * 0000000180053946: mov     r9d, r12d
 * 0000000180053949: mov     edx, 13Ah
 * 000000018005394E: lea     rcx, [rbp+9E20h+var_18A8]; Src
 * 0000000180053955: call    sub_1800D45C8
 * 000000018005395A: nop
 * 000000018005395B: mov     r8, rax
 * 000000018005395E: lea     rdx, aStandardshader_234; "StandardShader/ShaderModel40/"
 * 0000000180053965: lea     rcx, [rbp+9E20h+var_18C8]
 * 000000018005396C: call    sub_1800454BC
 * 0000000180053971: nop
 * 0000000180053972: lea     r8, aVertex_91; "/Vertex"
 * 0000000180053979: mov     rdx, rax
 * 000000018005397C: lea     rcx, [rbp+9E20h+var_18E8]
 * 0000000180053983: call    sub_18002C088
 * 0000000180053988: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005398D: mov     rcx, rax
 * 0000000180053990: call    sub_1800D46B4
 * 0000000180053995: mov     cs:byte_18026A79C, al
 * 000000018005399B: lea     rcx, [rbp+9E20h+var_18C8]; void *
 * 00000001800539A2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800539A7: nop
 * 00000001800539A8: lea     rcx, [rbp+9E20h+var_18A8]; void *
 * 00000001800539AF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800539B4: nop
 * 00000001800539B5: lea     rcx, dword_18026A7A0
 * 00000001800539BC: call    _Init_thread_footer
 * 00000001800539C1: mov     rax, [rdi+rbx*8]
 * 00000001800539C5: mov     r13d, 1050h
 * 00000001800539CB: mov     eax, [r15+rax]
 * 00000001800539CF: cmp     cs:dword_18026A7A8, eax
 * 00000001800539D5: jle     loc_180053AC8
 * 00000001800539DB: lea     rcx, dword_18026A7A8
 * 00000001800539E2: call    _Init_thread_header
 * 00000001800539E7: cmp     cs:dword_18026A7A8, r14d
 * 00000001800539EE: jnz     loc_180053AC8
 * 00000001800539F4: mov     r8d, r13d
 * 00000001800539F7: lea     rdx, unk_18019CC40
 * 00000001800539FE: lea     rcx, [rbp+9E20h+var_7348]
 * 0000000180053A05: call    sub_1800456CC
 * 0000000180053A0A: movups  xmm0, xmmword ptr [rax]
 * 0000000180053A0D: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053A13: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053A19: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053A1D: mov     r9d, esi
 * 0000000180053A20: mov     r8d, esi
 * 0000000180053A23: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053A28: lea     rcx, [rbp+9E20h+var_628]
 * 0000000180053A2F: call    sub_1800456B8
 * 0000000180053A34: movups  xmm0, xmmword ptr [rax]
 * 0000000180053A37: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053A3C: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053A40: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053A45: call    sub_1800456E0
 * 0000000180053A4A: mov     r8, rax
 * 0000000180053A4D: mov     r9d, r12d
 * 0000000180053A50: mov     edx, 140h
 * 0000000180053A55: lea     rcx, [rbp+9E20h+var_1848]; Src
 * 0000000180053A5C: call    sub_1800D45C8
 * 0000000180053A61: nop
 * 0000000180053A62: mov     r8, rax
 * 0000000180053A65: lea     rdx, aStandardshader_235; "StandardShader/ShaderModel40/"
 * 0000000180053A6C: lea     rcx, [rbp+9E20h+var_1868]
 * 0000000180053A73: call    sub_1800454BC
 * 0000000180053A78: nop
 * 0000000180053A79: lea     r8, aVertex_92; "/Vertex"
 * 0000000180053A80: mov     rdx, rax
 * 0000000180053A83: lea     rcx, [rbp+9E20h+var_1888]
 * 0000000180053A8A: call    sub_18002C088
 * 0000000180053A8F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053A94: mov     rcx, rax
 * 0000000180053A97: call    sub_1800D46B4
 * 0000000180053A9C: mov     cs:byte_18026A7A4, al
 * 0000000180053AA2: lea     rcx, [rbp+9E20h+var_1868]; void *
 * 0000000180053AA9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053AAE: nop
 * 0000000180053AAF: lea     rcx, [rbp+9E20h+var_1848]; void *
 * 0000000180053AB6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053ABB: nop
 * 0000000180053ABC: lea     rcx, dword_18026A7A8
 * 0000000180053AC3: call    _Init_thread_footer
 * 0000000180053AC8: mov     rax, [rdi+rbx*8]
 * 0000000180053ACC: mov     ecx, [r15+rax]
 * 0000000180053AD0: cmp     cs:dword_18026A7B0, ecx
 * 0000000180053AD6: jle     loc_180053BC9
 * 0000000180053ADC: lea     rcx, dword_18026A7B0
 * 0000000180053AE3: call    _Init_thread_header
 * 0000000180053AE8: cmp     cs:dword_18026A7B0, r14d
 * 0000000180053AEF: jnz     loc_180053BC9
 * 0000000180053AF5: mov     r8d, r13d
 * 0000000180053AF8: lea     rdx, unk_18019CC40
 * 0000000180053AFF: lea     rcx, [rbp+9E20h+var_7338]
 * 0000000180053B06: call    sub_1800456CC
 * 0000000180053B0B: movups  xmm0, xmmword ptr [rax]
 * 0000000180053B0E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053B14: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053B1A: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053B1E: mov     r9d, esi
 * 0000000180053B21: mov     r8d, esi
 * 0000000180053B24: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053B29: lea     rcx, [rbp+9E20h+var_608]
 * 0000000180053B30: call    sub_1800456B8
 * 0000000180053B35: movups  xmm0, xmmword ptr [rax]
 * 0000000180053B38: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053B3D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053B41: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053B46: call    sub_1800456E0
 * 0000000180053B4B: mov     r8, rax
 * 0000000180053B4E: mov     r9d, r12d
 * 0000000180053B51: mov     edx, 142h
 * 0000000180053B56: lea     rcx, [rbp+9E20h+var_17E8]; Src
 * 0000000180053B5D: call    sub_1800D45C8
 * 0000000180053B62: nop
 * 0000000180053B63: mov     r8, rax
 * 0000000180053B66: lea     rdx, aStandardshader_236; "StandardShader/ShaderModel40/"
 * 0000000180053B6D: lea     rcx, [rbp+9E20h+var_1808]
 * 0000000180053B74: call    sub_1800454BC
 * 0000000180053B79: nop
 * 0000000180053B7A: lea     r8, aVertex_93; "/Vertex"
 * 0000000180053B81: mov     rdx, rax
 * 0000000180053B84: lea     rcx, [rbp+9E20h+var_1828]
 * 0000000180053B8B: call    sub_18002C088
 * 0000000180053B90: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053B95: mov     rcx, rax
 * 0000000180053B98: call    sub_1800D46B4
 * 0000000180053B9D: mov     cs:byte_18026A7AC, al
 * 0000000180053BA3: lea     rcx, [rbp+9E20h+var_1808]; void *
 * 0000000180053BAA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053BAF: nop
 * 0000000180053BB0: lea     rcx, [rbp+9E20h+var_17E8]; void *
 * 0000000180053BB7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053BBC: nop
 * 0000000180053BBD: lea     rcx, dword_18026A7B0
 * 0000000180053BC4: call    _Init_thread_footer
 * 0000000180053BC9: mov     rax, [rdi+rbx*8]
 * 0000000180053BCD: mov     ecx, [r15+rax]
 * 0000000180053BD1: cmp     cs:dword_18026A7B8, ecx
 * 0000000180053BD7: jle     loc_180053CCA
 * 0000000180053BDD: lea     rcx, dword_18026A7B8
 * 0000000180053BE4: call    _Init_thread_header
 * 0000000180053BE9: cmp     cs:dword_18026A7B8, r14d
 * 0000000180053BF0: jnz     loc_180053CCA
 * 0000000180053BF6: mov     r8d, r13d
 * 0000000180053BF9: lea     rdx, unk_18019CC40
 * 0000000180053C00: lea     rcx, [rbp+9E20h+var_7328]
 * 0000000180053C07: call    sub_1800456CC
 * 0000000180053C0C: movups  xmm0, xmmword ptr [rax]
 * 0000000180053C0F: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053C15: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053C1B: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053C1F: mov     r9d, esi
 * 0000000180053C22: mov     r8d, esi
 * 0000000180053C25: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053C2A: lea     rcx, [rbp+9E20h+var_5E8]
 * 0000000180053C31: call    sub_1800456B8
 * 0000000180053C36: movups  xmm0, xmmword ptr [rax]
 * 0000000180053C39: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053C3E: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053C42: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053C47: call    sub_1800456E0
 * 0000000180053C4C: mov     r8, rax
 * 0000000180053C4F: mov     r9d, r12d
 * 0000000180053C52: mov     edx, 148h
 * 0000000180053C57: lea     rcx, [rbp+9E20h+var_1788]; Src
 * 0000000180053C5E: call    sub_1800D45C8
 * 0000000180053C63: nop
 * 0000000180053C64: mov     r8, rax
 * 0000000180053C67: lea     rdx, aStandardshader_237; "StandardShader/ShaderModel40/"
 * 0000000180053C6E: lea     rcx, [rbp+9E20h+var_17A8]
 * 0000000180053C75: call    sub_1800454BC
 * 0000000180053C7A: nop
 * 0000000180053C7B: lea     r8, aVertex_94; "/Vertex"
 * 0000000180053C82: mov     rdx, rax
 * 0000000180053C85: lea     rcx, [rbp+9E20h+var_17C8]
 * 0000000180053C8C: call    sub_18002C088
 * 0000000180053C91: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053C96: mov     rcx, rax
 * 0000000180053C99: call    sub_1800D46B4
 * 0000000180053C9E: mov     cs:byte_18026A7B4, al
 * 0000000180053CA4: lea     rcx, [rbp+9E20h+var_17A8]; void *
 * 0000000180053CAB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053CB0: nop
 * 0000000180053CB1: lea     rcx, [rbp+9E20h+var_1788]; void *
 * 0000000180053CB8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053CBD: nop
 * 0000000180053CBE: lea     rcx, dword_18026A7B8
 * 0000000180053CC5: call    _Init_thread_footer
 * 0000000180053CCA: mov     rax, [rdi+rbx*8]
 * 0000000180053CCE: mov     ecx, [r15+rax]
 * 0000000180053CD2: cmp     cs:dword_18026A7C0, ecx
 * 0000000180053CD8: jle     loc_180053DCB
 * 0000000180053CDE: lea     rcx, dword_18026A7C0
 * 0000000180053CE5: call    _Init_thread_header
 * 0000000180053CEA: cmp     cs:dword_18026A7C0, r14d
 * 0000000180053CF1: jnz     loc_180053DCB
 * 0000000180053CF7: mov     r8d, r13d
 * 0000000180053CFA: lea     rdx, unk_18019CC40
 * 0000000180053D01: lea     rcx, [rbp+9E20h+var_7318]
 * 0000000180053D08: call    sub_1800456CC
 * 0000000180053D0D: movups  xmm0, xmmword ptr [rax]
 * 0000000180053D10: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053D16: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053D1C: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053D20: mov     r9d, esi
 * 0000000180053D23: mov     r8d, esi
 * 0000000180053D26: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053D2B: lea     rcx, [rbp+9E20h+var_5C8]
 * 0000000180053D32: call    sub_1800456B8
 * 0000000180053D37: movups  xmm0, xmmword ptr [rax]
 * 0000000180053D3A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053D3F: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053D43: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053D48: call    sub_1800456E0
 * 0000000180053D4D: mov     r8, rax
 * 0000000180053D50: mov     r9d, r12d
 * 0000000180053D53: mov     edx, 14Ah
 * 0000000180053D58: lea     rcx, [rbp+9E20h+var_1728]; Src
 * 0000000180053D5F: call    sub_1800D45C8
 * 0000000180053D64: nop
 * 0000000180053D65: mov     r8, rax
 * 0000000180053D68: lea     rdx, aStandardshader_238; "StandardShader/ShaderModel40/"
 * 0000000180053D6F: lea     rcx, [rbp+9E20h+var_1748]
 * 0000000180053D76: call    sub_1800454BC
 * 0000000180053D7B: nop
 * 0000000180053D7C: lea     r8, aVertex_95; "/Vertex"
 * 0000000180053D83: mov     rdx, rax
 * 0000000180053D86: lea     rcx, [rbp+9E20h+var_1768]
 * 0000000180053D8D: call    sub_18002C088
 * 0000000180053D92: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053D97: mov     rcx, rax
 * 0000000180053D9A: call    sub_1800D46B4
 * 0000000180053D9F: mov     cs:byte_18026A7BC, al
 * 0000000180053DA5: lea     rcx, [rbp+9E20h+var_1748]; void *
 * 0000000180053DAC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053DB1: nop
 * 0000000180053DB2: lea     rcx, [rbp+9E20h+var_1728]; void *
 * 0000000180053DB9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053DBE: nop
 * 0000000180053DBF: lea     rcx, dword_18026A7C0
 * 0000000180053DC6: call    _Init_thread_footer
 * 0000000180053DCB: mov     rax, [rdi+rbx*8]
 * 0000000180053DCF: mov     ecx, [r15+rax]
 * 0000000180053DD3: cmp     cs:dword_18026A7C8, ecx
 * 0000000180053DD9: jle     loc_180053ECC
 * 0000000180053DDF: lea     rcx, dword_18026A7C8
 * 0000000180053DE6: call    _Init_thread_header
 * 0000000180053DEB: cmp     cs:dword_18026A7C8, r14d
 * 0000000180053DF2: jnz     loc_180053ECC
 * 0000000180053DF8: mov     r8d, r13d
 * 0000000180053DFB: lea     rdx, unk_18019CC40
 * 0000000180053E02: lea     rcx, [rbp+9E20h+var_7308]
 * 0000000180053E09: call    sub_1800456CC
 * 0000000180053E0E: movups  xmm0, xmmword ptr [rax]
 * 0000000180053E11: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053E17: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053E1D: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053E21: mov     r9d, esi
 * 0000000180053E24: mov     r8d, esi
 * 0000000180053E27: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053E2C: lea     rcx, [rbp+9E20h+var_5A8]
 * 0000000180053E33: call    sub_1800456B8
 * 0000000180053E38: movups  xmm0, xmmword ptr [rax]
 * 0000000180053E3B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053E40: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053E44: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053E49: call    sub_1800456E0
 * 0000000180053E4E: mov     r8, rax
 * 0000000180053E51: mov     r9d, r12d
 * 0000000180053E54: mov     edx, 150h
 * 0000000180053E59: lea     rcx, [rbp+9E20h+var_16C8]; Src
 * 0000000180053E60: call    sub_1800D45C8
 * 0000000180053E65: nop
 * 0000000180053E66: mov     r8, rax
 * 0000000180053E69: lea     rdx, aStandardshader_239; "StandardShader/ShaderModel40/"
 * 0000000180053E70: lea     rcx, [rbp+9E20h+var_16E8]
 * 0000000180053E77: call    sub_1800454BC
 * 0000000180053E7C: nop
 * 0000000180053E7D: lea     r8, aVertex_96; "/Vertex"
 * 0000000180053E84: mov     rdx, rax
 * 0000000180053E87: lea     rcx, [rbp+9E20h+var_1708]
 * 0000000180053E8E: call    sub_18002C088
 * 0000000180053E93: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053E98: mov     rcx, rax
 * 0000000180053E9B: call    sub_1800D46B4
 * 0000000180053EA0: mov     cs:byte_18026A7C4, al
 * 0000000180053EA6: lea     rcx, [rbp+9E20h+var_16E8]; void *
 * 0000000180053EAD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053EB2: nop
 * 0000000180053EB3: lea     rcx, [rbp+9E20h+var_16C8]; void *
 * 0000000180053EBA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053EBF: nop
 * 0000000180053EC0: lea     rcx, dword_18026A7C8
 * 0000000180053EC7: call    _Init_thread_footer
 * 0000000180053ECC: mov     rax, [rdi+rbx*8]
 * 0000000180053ED0: mov     ecx, [r15+rax]
 * 0000000180053ED4: cmp     cs:dword_18026A7D0, ecx
 * 0000000180053EDA: jle     loc_180053FCD
 * 0000000180053EE0: lea     rcx, dword_18026A7D0
 * 0000000180053EE7: call    _Init_thread_header
 * 0000000180053EEC: cmp     cs:dword_18026A7D0, r14d
 * 0000000180053EF3: jnz     loc_180053FCD
 * 0000000180053EF9: mov     r8d, r13d
 * 0000000180053EFC: lea     rdx, unk_18019CC40
 * 0000000180053F03: lea     rcx, [rbp+9E20h+var_72F8]
 * 0000000180053F0A: call    sub_1800456CC
 * 0000000180053F0F: movups  xmm0, xmmword ptr [rax]
 * 0000000180053F12: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053F18: mov     al, [rbp+9E20h+arg_0]
 * 0000000180053F1E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180053F22: mov     r9d, esi
 * 0000000180053F25: mov     r8d, esi
 * 0000000180053F28: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053F2D: lea     rcx, [rbp+9E20h+var_588]
 * 0000000180053F34: call    sub_1800456B8
 * 0000000180053F39: movups  xmm0, xmmword ptr [rax]
 * 0000000180053F3C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180053F41: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053F45: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180053F4A: call    sub_1800456E0
 * 0000000180053F4F: mov     r8, rax
 * 0000000180053F52: mov     r9d, r12d
 * 0000000180053F55: mov     edx, 152h
 * 0000000180053F5A: lea     rcx, [rbp+9E20h+var_1668]; Src
 * 0000000180053F61: call    sub_1800D45C8
 * 0000000180053F66: nop
 * 0000000180053F67: mov     r8, rax
 * 0000000180053F6A: lea     rdx, aStandardshader_240; "StandardShader/ShaderModel40/"
 * 0000000180053F71: lea     rcx, [rbp+9E20h+var_1688]
 * 0000000180053F78: call    sub_1800454BC
 * 0000000180053F7D: nop
 * 0000000180053F7E: lea     r8, aVertex_97; "/Vertex"
 * 0000000180053F85: mov     rdx, rax
 * 0000000180053F88: lea     rcx, [rbp+9E20h+var_16A8]
 * 0000000180053F8F: call    sub_18002C088
 * 0000000180053F94: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180053F99: mov     rcx, rax
 * 0000000180053F9C: call    sub_1800D46B4
 * 0000000180053FA1: mov     cs:byte_18026A7CC, al
 * 0000000180053FA7: lea     rcx, [rbp+9E20h+var_1688]; void *
 * 0000000180053FAE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053FB3: nop
 * 0000000180053FB4: lea     rcx, [rbp+9E20h+var_1668]; void *
 * 0000000180053FBB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053FC0: nop
 * 0000000180053FC1: lea     rcx, dword_18026A7D0
 * 0000000180053FC8: call    _Init_thread_footer
 * 0000000180053FCD: mov     rax, [rdi+rbx*8]
 * 0000000180053FD1: mov     ecx, [r15+rax]
 * 0000000180053FD5: cmp     cs:dword_18026A7D8, ecx
 * 0000000180053FDB: jle     loc_1800540CE
 * 0000000180053FE1: lea     rcx, dword_18026A7D8
 * 0000000180053FE8: call    _Init_thread_header
 * 0000000180053FED: cmp     cs:dword_18026A7D8, r14d
 * 0000000180053FF4: jnz     loc_1800540CE
 * 0000000180053FFA: mov     r8d, r13d
 * 0000000180053FFD: lea     rdx, unk_18019CC40
 * 0000000180054004: lea     rcx, [rbp+9E20h+var_72E8]
 * 000000018005400B: call    sub_1800456CC
 * 0000000180054010: movups  xmm0, xmmword ptr [rax]
 * 0000000180054013: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054019: mov     al, [rbp+9E20h+arg_0]
 * 000000018005401F: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054023: mov     r9d, esi
 * 0000000180054026: mov     r8d, esi
 * 0000000180054029: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005402E: lea     rcx, [rbp+9E20h+var_568]
 * 0000000180054035: call    sub_1800456B8
 * 000000018005403A: movups  xmm0, xmmword ptr [rax]
 * 000000018005403D: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054042: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054046: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005404B: call    sub_1800456E0
 * 0000000180054050: mov     r8, rax
 * 0000000180054053: mov     r9d, r12d
 * 0000000180054056: mov     edx, 158h
 * 000000018005405B: lea     rcx, [rbp+9E20h+var_1608]; Src
 * 0000000180054062: call    sub_1800D45C8
 * 0000000180054067: nop
 * 0000000180054068: mov     r8, rax
 * 000000018005406B: lea     rdx, aStandardshader_241; "StandardShader/ShaderModel40/"
 * 0000000180054072: lea     rcx, [rbp+9E20h+var_1628]
 * 0000000180054079: call    sub_1800454BC
 * 000000018005407E: nop
 * 000000018005407F: lea     r8, aVertex_98; "/Vertex"
 * 0000000180054086: mov     rdx, rax
 * 0000000180054089: lea     rcx, [rbp+9E20h+var_1648]
 * 0000000180054090: call    sub_18002C088
 * 0000000180054095: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005409A: mov     rcx, rax
 * 000000018005409D: call    sub_1800D46B4
 * 00000001800540A2: mov     cs:byte_18026A7D4, al
 * 00000001800540A8: lea     rcx, [rbp+9E20h+var_1628]; void *
 * 00000001800540AF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800540B4: nop
 * 00000001800540B5: lea     rcx, [rbp+9E20h+var_1608]; void *
 * 00000001800540BC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800540C1: nop
 * 00000001800540C2: lea     rcx, dword_18026A7D8
 * 00000001800540C9: call    _Init_thread_footer
 * 00000001800540CE: mov     rax, [rdi+rbx*8]
 * 00000001800540D2: mov     ecx, [r15+rax]
 * 00000001800540D6: cmp     cs:dword_18026A7E0, ecx
 * 00000001800540DC: jle     loc_1800541CF
 * 00000001800540E2: lea     rcx, dword_18026A7E0
 * 00000001800540E9: call    _Init_thread_header
 * 00000001800540EE: cmp     cs:dword_18026A7E0, r14d
 * 00000001800540F5: jnz     loc_1800541CF
 * 00000001800540FB: mov     r8d, r13d
 * 00000001800540FE: lea     rdx, unk_18019CC40
 * 0000000180054105: lea     rcx, [rbp+9E20h+var_72D8]
 * 000000018005410C: call    sub_1800456CC
 * 0000000180054111: movups  xmm0, xmmword ptr [rax]
 * 0000000180054114: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005411A: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054120: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054124: mov     r9d, esi
 * 0000000180054127: mov     r8d, esi
 * 000000018005412A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005412F: lea     rcx, [rbp+9E20h+var_548]
 * 0000000180054136: call    sub_1800456B8
 * 000000018005413B: movups  xmm0, xmmword ptr [rax]
 * 000000018005413E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054143: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054147: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005414C: call    sub_1800456E0
 * 0000000180054151: mov     r8, rax
 * 0000000180054154: mov     r9d, r12d
 * 0000000180054157: mov     edx, 15Ah
 * 000000018005415C: lea     rcx, [rbp+9E20h+var_15A8]; Src
 * 0000000180054163: call    sub_1800D45C8
 * 0000000180054168: nop
 * 0000000180054169: mov     r8, rax
 * 000000018005416C: lea     rdx, aStandardshader_242; "StandardShader/ShaderModel40/"
 * 0000000180054173: lea     rcx, [rbp+9E20h+var_15C8]
 * 000000018005417A: call    sub_1800454BC
 * 000000018005417F: nop
 * 0000000180054180: lea     r8, aVertex_99; "/Vertex"
 * 0000000180054187: mov     rdx, rax
 * 000000018005418A: lea     rcx, [rbp+9E20h+var_15E8]
 * 0000000180054191: call    sub_18002C088
 * 0000000180054196: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005419B: mov     rcx, rax
 * 000000018005419E: call    sub_1800D46B4
 * 00000001800541A3: mov     cs:byte_18026A7DC, al
 * 00000001800541A9: lea     rcx, [rbp+9E20h+var_15C8]; void *
 * 00000001800541B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800541B5: nop
 * 00000001800541B6: lea     rcx, [rbp+9E20h+var_15A8]; void *
 * 00000001800541BD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800541C2: nop
 * 00000001800541C3: lea     rcx, dword_18026A7E0
 * 00000001800541CA: call    _Init_thread_footer
 * 00000001800541CF: mov     rax, [rdi+rbx*8]
 * 00000001800541D3: mov     r13d, 1A50h
 * 00000001800541D9: mov     eax, [r15+rax]
 * 00000001800541DD: cmp     cs:dword_18026A7E8, eax
 * 00000001800541E3: jle     loc_1800542D6
 * 00000001800541E9: lea     rcx, dword_18026A7E8
 * 00000001800541F0: call    _Init_thread_header
 * 00000001800541F5: cmp     cs:dword_18026A7E8, r14d
 * 00000001800541FC: jnz     loc_1800542D6
 * 0000000180054202: mov     r8d, r13d
 * 0000000180054205: lea     rdx, unk_18019DC90
 * 000000018005420C: lea     rcx, [rbp+9E20h+var_72C8]
 * 0000000180054213: call    sub_1800456CC
 * 0000000180054218: movups  xmm0, xmmword ptr [rax]
 * 000000018005421B: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054221: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054227: mov     [rsp+9F20h+var_9F00], al
 * 000000018005422B: mov     r9d, esi
 * 000000018005422E: mov     r8d, esi
 * 0000000180054231: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054236: lea     rcx, [rbp+9E20h+var_528]
 * 000000018005423D: call    sub_1800456B8
 * 0000000180054242: movups  xmm0, xmmword ptr [rax]
 * 0000000180054245: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005424A: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005424E: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054253: call    sub_1800456E0
 * 0000000180054258: mov     r8, rax
 * 000000018005425B: mov     r9d, r12d
 * 000000018005425E: mov     edx, 160h
 * 0000000180054263: lea     rcx, [rbp+9E20h+var_1548]; Src
 * 000000018005426A: call    sub_1800D45C8
 * 000000018005426F: nop
 * 0000000180054270: mov     r8, rax
 * 0000000180054273: lea     rdx, aStandardshader_243; "StandardShader/ShaderModel40/"
 * 000000018005427A: lea     rcx, [rbp+9E20h+var_1568]
 * 0000000180054281: call    sub_1800454BC
 * 0000000180054286: nop
 * 0000000180054287: lea     r8, aVertex_100; "/Vertex"
 * 000000018005428E: mov     rdx, rax
 * 0000000180054291: lea     rcx, [rbp+9E20h+var_1588]
 * 0000000180054298: call    sub_18002C088
 * 000000018005429D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800542A2: mov     rcx, rax
 * 00000001800542A5: call    sub_1800D46B4
 * 00000001800542AA: mov     cs:byte_18026A7E4, al
 * 00000001800542B0: lea     rcx, [rbp+9E20h+var_1568]; void *
 * 00000001800542B7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800542BC: nop
 * 00000001800542BD: lea     rcx, [rbp+9E20h+var_1548]; void *
 * 00000001800542C4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800542C9: nop
 * 00000001800542CA: lea     rcx, dword_18026A7E8
 * 00000001800542D1: call    _Init_thread_footer
 * 00000001800542D6: mov     rax, [rdi+rbx*8]
 * 00000001800542DA: mov     ecx, [r15+rax]
 * 00000001800542DE: cmp     cs:dword_18026A7F0, ecx
 * 00000001800542E4: jle     loc_1800543D7
 * 00000001800542EA: lea     rcx, dword_18026A7F0
 * 00000001800542F1: call    _Init_thread_header
 * 00000001800542F6: cmp     cs:dword_18026A7F0, r14d
 * 00000001800542FD: jnz     loc_1800543D7
 * 0000000180054303: mov     r8d, r13d
 * 0000000180054306: lea     rdx, unk_18019DC90
 * 000000018005430D: lea     rcx, [rbp+9E20h+var_72B8]
 * 0000000180054314: call    sub_1800456CC
 * 0000000180054319: movups  xmm0, xmmword ptr [rax]
 * 000000018005431C: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054322: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054328: mov     [rsp+9F20h+var_9F00], al
 * 000000018005432C: mov     r9d, esi
 * 000000018005432F: mov     r8d, esi
 * 0000000180054332: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054337: lea     rcx, [rbp+9E20h+var_508]
 * 000000018005433E: call    sub_1800456B8
 * 0000000180054343: movups  xmm0, xmmword ptr [rax]
 * 0000000180054346: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005434B: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005434F: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054354: call    sub_1800456E0
 * 0000000180054359: mov     r8, rax
 * 000000018005435C: mov     r9d, r12d
 * 000000018005435F: mov     edx, 162h
 * 0000000180054364: lea     rcx, [rbp+9E20h+var_14E8]; Src
 * 000000018005436B: call    sub_1800D45C8
 * 0000000180054370: nop
 * 0000000180054371: mov     r8, rax
 * 0000000180054374: lea     rdx, aStandardshader_244; "StandardShader/ShaderModel40/"
 * 000000018005437B: lea     rcx, [rbp+9E20h+var_1508]
 * 0000000180054382: call    sub_1800454BC
 * 0000000180054387: nop
 * 0000000180054388: lea     r8, aVertex_101; "/Vertex"
 * 000000018005438F: mov     rdx, rax
 * 0000000180054392: lea     rcx, [rbp+9E20h+var_1528]
 * 0000000180054399: call    sub_18002C088
 * 000000018005439E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800543A3: mov     rcx, rax
 * 00000001800543A6: call    sub_1800D46B4
 * 00000001800543AB: mov     cs:byte_18026A7EC, al
 * 00000001800543B1: lea     rcx, [rbp+9E20h+var_1508]; void *
 * 00000001800543B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800543BD: nop
 * 00000001800543BE: lea     rcx, [rbp+9E20h+var_14E8]; void *
 * 00000001800543C5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800543CA: nop
 * 00000001800543CB: lea     rcx, dword_18026A7F0
 * 00000001800543D2: call    _Init_thread_footer
 * 00000001800543D7: mov     rax, [rdi+rbx*8]
 * 00000001800543DB: mov     ecx, [r15+rax]
 * 00000001800543DF: cmp     cs:dword_18026A7F8, ecx
 * 00000001800543E5: jle     loc_1800544D8
 * 00000001800543EB: lea     rcx, dword_18026A7F8
 * 00000001800543F2: call    _Init_thread_header
 * 00000001800543F7: cmp     cs:dword_18026A7F8, r14d
 * 00000001800543FE: jnz     loc_1800544D8
 * 0000000180054404: mov     r8d, r13d
 * 0000000180054407: lea     rdx, unk_18019DC90
 * 000000018005440E: lea     rcx, [rbp+9E20h+var_72A8]
 * 0000000180054415: call    sub_1800456CC
 * 000000018005441A: movups  xmm0, xmmword ptr [rax]
 * 000000018005441D: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054423: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054429: mov     [rsp+9F20h+var_9F00], al
 * 000000018005442D: mov     r9d, esi
 * 0000000180054430: mov     r8d, esi
 * 0000000180054433: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054438: lea     rcx, [rbp+9E20h+var_4E8]
 * 000000018005443F: call    sub_1800456B8
 * 0000000180054444: movups  xmm0, xmmword ptr [rax]
 * 0000000180054447: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005444C: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054450: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054455: call    sub_1800456E0
 * 000000018005445A: mov     r8, rax
 * 000000018005445D: mov     r9d, r12d
 * 0000000180054460: mov     edx, 168h
 * 0000000180054465: lea     rcx, [rbp+9E20h+var_1488]; Src
 * 000000018005446C: call    sub_1800D45C8
 * 0000000180054471: nop
 * 0000000180054472: mov     r8, rax
 * 0000000180054475: lea     rdx, aStandardshader_245; "StandardShader/ShaderModel40/"
 * 000000018005447C: lea     rcx, [rbp+9E20h+var_14A8]
 * 0000000180054483: call    sub_1800454BC
 * 0000000180054488: nop
 * 0000000180054489: lea     r8, aVertex_102; "/Vertex"
 * 0000000180054490: mov     rdx, rax
 * 0000000180054493: lea     rcx, [rbp+9E20h+var_14C8]
 * 000000018005449A: call    sub_18002C088
 * 000000018005449F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800544A4: mov     rcx, rax
 * 00000001800544A7: call    sub_1800D46B4
 * 00000001800544AC: mov     cs:byte_18026A7F4, al
 * 00000001800544B2: lea     rcx, [rbp+9E20h+var_14A8]; void *
 * 00000001800544B9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800544BE: nop
 * 00000001800544BF: lea     rcx, [rbp+9E20h+var_1488]; void *
 * 00000001800544C6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800544CB: nop
 * 00000001800544CC: lea     rcx, dword_18026A7F8
 * 00000001800544D3: call    _Init_thread_footer
 * 00000001800544D8: mov     rax, [rdi+rbx*8]
 * 00000001800544DC: mov     ecx, [r15+rax]
 * 00000001800544E0: cmp     cs:dword_18026A800, ecx
 * 00000001800544E6: jle     loc_1800545D9
 * 00000001800544EC: lea     rcx, dword_18026A800
 * 00000001800544F3: call    _Init_thread_header
 * 00000001800544F8: cmp     cs:dword_18026A800, r14d
 * 00000001800544FF: jnz     loc_1800545D9
 * 0000000180054505: mov     r8d, r13d
 * 0000000180054508: lea     rdx, unk_18019DC90
 * 000000018005450F: lea     rcx, [rbp+9E20h+var_7298]
 * 0000000180054516: call    sub_1800456CC
 * 000000018005451B: movups  xmm0, xmmword ptr [rax]
 * 000000018005451E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054524: mov     al, [rbp+9E20h+arg_0]
 * 000000018005452A: mov     [rsp+9F20h+var_9F00], al
 * 000000018005452E: mov     r9d, esi
 * 0000000180054531: mov     r8d, esi
 * 0000000180054534: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054539: lea     rcx, [rbp+9E20h+var_4C8]
 * 0000000180054540: call    sub_1800456B8
 * 0000000180054545: movups  xmm0, xmmword ptr [rax]
 * 0000000180054548: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005454D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054551: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054556: call    sub_1800456E0
 * 000000018005455B: mov     r8, rax
 * 000000018005455E: mov     r9d, r12d
 * 0000000180054561: mov     edx, 16Ah
 * 0000000180054566: lea     rcx, [rbp+9E20h+var_1428]; Src
 * 000000018005456D: call    sub_1800D45C8
 * 0000000180054572: nop
 * 0000000180054573: mov     r8, rax
 * 0000000180054576: lea     rdx, aStandardshader_246; "StandardShader/ShaderModel40/"
 * 000000018005457D: lea     rcx, [rbp+9E20h+var_1448]
 * 0000000180054584: call    sub_1800454BC
 * 0000000180054589: nop
 * 000000018005458A: lea     r8, aVertex_103; "/Vertex"
 * 0000000180054591: mov     rdx, rax
 * 0000000180054594: lea     rcx, [rbp+9E20h+var_1468]
 * 000000018005459B: call    sub_18002C088
 * 00000001800545A0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800545A5: mov     rcx, rax
 * 00000001800545A8: call    sub_1800D46B4
 * 00000001800545AD: mov     cs:byte_18026A7FC, al
 * 00000001800545B3: lea     rcx, [rbp+9E20h+var_1448]; void *
 * 00000001800545BA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800545BF: nop
 * 00000001800545C0: lea     rcx, [rbp+9E20h+var_1428]; void *
 * 00000001800545C7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800545CC: nop
 * 00000001800545CD: lea     rcx, dword_18026A800
 * 00000001800545D4: call    _Init_thread_footer
 * 00000001800545D9: mov     rax, [rdi+rbx*8]
 * 00000001800545DD: mov     ecx, [r15+rax]
 * 00000001800545E1: cmp     cs:dword_18026A808, ecx
 * 00000001800545E7: jle     loc_1800546DA
 * 00000001800545ED: lea     rcx, dword_18026A808
 * 00000001800545F4: call    _Init_thread_header
 * 00000001800545F9: cmp     cs:dword_18026A808, r14d
 * 0000000180054600: jnz     loc_1800546DA
 * 0000000180054606: mov     r8d, r13d
 * 0000000180054609: lea     rdx, unk_18019DC90
 * 0000000180054610: lea     rcx, [rbp+9E20h+var_7288]
 * 0000000180054617: call    sub_1800456CC
 * 000000018005461C: movups  xmm0, xmmword ptr [rax]
 * 000000018005461F: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054625: mov     al, [rbp+9E20h+arg_0]
 * 000000018005462B: mov     [rsp+9F20h+var_9F00], al
 * 000000018005462F: mov     r9d, esi
 * 0000000180054632: mov     r8d, esi
 * 0000000180054635: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005463A: lea     rcx, [rbp+9E20h+var_4A8]
 * 0000000180054641: call    sub_1800456B8
 * 0000000180054646: movups  xmm0, xmmword ptr [rax]
 * 0000000180054649: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005464E: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054652: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054657: call    sub_1800456E0
 * 000000018005465C: mov     r8, rax
 * 000000018005465F: mov     r9d, r12d
 * 0000000180054662: mov     edx, 170h
 * 0000000180054667: lea     rcx, [rbp+9E20h+var_13C8]; Src
 * 000000018005466E: call    sub_1800D45C8
 * 0000000180054673: nop
 * 0000000180054674: mov     r8, rax
 * 0000000180054677: lea     rdx, aStandardshader_247; "StandardShader/ShaderModel40/"
 * 000000018005467E: lea     rcx, [rbp+9E20h+var_13E8]
 * 0000000180054685: call    sub_1800454BC
 * 000000018005468A: nop
 * 000000018005468B: lea     r8, aVertex_104; "/Vertex"
 * 0000000180054692: mov     rdx, rax
 * 0000000180054695: lea     rcx, [rbp+9E20h+var_1408]
 * 000000018005469C: call    sub_18002C088
 * 00000001800546A1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800546A6: mov     rcx, rax
 * 00000001800546A9: call    sub_1800D46B4
 * 00000001800546AE: mov     cs:byte_18026A804, al
 * 00000001800546B4: lea     rcx, [rbp+9E20h+var_13E8]; void *
 * 00000001800546BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800546C0: nop
 * 00000001800546C1: lea     rcx, [rbp+9E20h+var_13C8]; void *
 * 00000001800546C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800546CD: nop
 * 00000001800546CE: lea     rcx, dword_18026A808
 * 00000001800546D5: call    _Init_thread_footer
 * 00000001800546DA: mov     rax, [rdi+rbx*8]
 * 00000001800546DE: mov     ecx, [r15+rax]
 * 00000001800546E2: cmp     cs:dword_18026A810, ecx
 * 00000001800546E8: jle     loc_1800547DB
 * 00000001800546EE: lea     rcx, dword_18026A810
 * 00000001800546F5: call    _Init_thread_header
 * 00000001800546FA: cmp     cs:dword_18026A810, r14d
 * 0000000180054701: jnz     loc_1800547DB
 * 0000000180054707: mov     r8d, r13d
 * 000000018005470A: lea     rdx, unk_18019DC90
 * 0000000180054711: lea     rcx, [rbp+9E20h+var_7278]
 * 0000000180054718: call    sub_1800456CC
 * 000000018005471D: movups  xmm0, xmmword ptr [rax]
 * 0000000180054720: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054726: mov     al, [rbp+9E20h+arg_0]
 * 000000018005472C: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054730: mov     r9d, esi
 * 0000000180054733: mov     r8d, esi
 * 0000000180054736: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005473B: lea     rcx, [rbp+9E20h+var_488]
 * 0000000180054742: call    sub_1800456B8
 * 0000000180054747: movups  xmm0, xmmword ptr [rax]
 * 000000018005474A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005474F: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054753: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054758: call    sub_1800456E0
 * 000000018005475D: mov     r8, rax
 * 0000000180054760: mov     r9d, r12d
 * 0000000180054763: mov     edx, 172h
 * 0000000180054768: lea     rcx, [rbp+9E20h+var_1368]; Src
 * 000000018005476F: call    sub_1800D45C8
 * 0000000180054774: nop
 * 0000000180054775: mov     r8, rax
 * 0000000180054778: lea     rdx, aStandardshader_248; "StandardShader/ShaderModel40/"
 * 000000018005477F: lea     rcx, [rbp+9E20h+var_1388]
 * 0000000180054786: call    sub_1800454BC
 * 000000018005478B: nop
 * 000000018005478C: lea     r8, aVertex_105; "/Vertex"
 * 0000000180054793: mov     rdx, rax
 * 0000000180054796: lea     rcx, [rbp+9E20h+var_13A8]
 * 000000018005479D: call    sub_18002C088
 * 00000001800547A2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800547A7: mov     rcx, rax
 * 00000001800547AA: call    sub_1800D46B4
 * 00000001800547AF: mov     cs:byte_18026A80C, al
 * 00000001800547B5: lea     rcx, [rbp+9E20h+var_1388]; void *
 * 00000001800547BC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800547C1: nop
 * 00000001800547C2: lea     rcx, [rbp+9E20h+var_1368]; void *
 * 00000001800547C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800547CE: nop
 * 00000001800547CF: lea     rcx, dword_18026A810
 * 00000001800547D6: call    _Init_thread_footer
 * 00000001800547DB: mov     rax, [rdi+rbx*8]
 * 00000001800547DF: mov     ecx, [r15+rax]
 * 00000001800547E3: cmp     cs:dword_18026A818, ecx
 * 00000001800547E9: jle     loc_1800548DC
 * 00000001800547EF: lea     rcx, dword_18026A818
 * 00000001800547F6: call    _Init_thread_header
 * 00000001800547FB: cmp     cs:dword_18026A818, r14d
 * 0000000180054802: jnz     loc_1800548DC
 * 0000000180054808: mov     r8d, r13d
 * 000000018005480B: lea     rdx, unk_18019DC90
 * 0000000180054812: lea     rcx, [rbp+9E20h+var_7268]
 * 0000000180054819: call    sub_1800456CC
 * 000000018005481E: movups  xmm0, xmmword ptr [rax]
 * 0000000180054821: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054827: mov     al, [rbp+9E20h+arg_0]
 * 000000018005482D: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054831: mov     r9d, esi
 * 0000000180054834: mov     r8d, esi
 * 0000000180054837: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005483C: lea     rcx, [rbp+9E20h+var_468]
 * 0000000180054843: call    sub_1800456B8
 * 0000000180054848: movups  xmm0, xmmword ptr [rax]
 * 000000018005484B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054850: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054854: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054859: call    sub_1800456E0
 * 000000018005485E: mov     r8, rax
 * 0000000180054861: mov     r9d, r12d
 * 0000000180054864: mov     edx, 178h
 * 0000000180054869: lea     rcx, [rbp+9E20h+var_1308]; Src
 * 0000000180054870: call    sub_1800D45C8
 * 0000000180054875: nop
 * 0000000180054876: mov     r8, rax
 * 0000000180054879: lea     rdx, aStandardshader_249; "StandardShader/ShaderModel40/"
 * 0000000180054880: lea     rcx, [rbp+9E20h+var_1328]
 * 0000000180054887: call    sub_1800454BC
 * 000000018005488C: nop
 * 000000018005488D: lea     r8, aVertex_106; "/Vertex"
 * 0000000180054894: mov     rdx, rax
 * 0000000180054897: lea     rcx, [rbp+9E20h+var_1348]
 * 000000018005489E: call    sub_18002C088
 * 00000001800548A3: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800548A8: mov     rcx, rax
 * 00000001800548AB: call    sub_1800D46B4
 * 00000001800548B0: mov     cs:byte_18026A814, al
 * 00000001800548B6: lea     rcx, [rbp+9E20h+var_1328]; void *
 * 00000001800548BD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800548C2: nop
 * 00000001800548C3: lea     rcx, [rbp+9E20h+var_1308]; void *
 * 00000001800548CA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800548CF: nop
 * 00000001800548D0: lea     rcx, dword_18026A818
 * 00000001800548D7: call    _Init_thread_footer
 * 00000001800548DC: mov     rax, [rdi+rbx*8]
 * 00000001800548E0: mov     ecx, [r15+rax]
 * 00000001800548E4: cmp     cs:dword_18026A820, ecx
 * 00000001800548EA: jle     loc_1800549DD
 * 00000001800548F0: lea     rcx, dword_18026A820
 * 00000001800548F7: call    _Init_thread_header
 * 00000001800548FC: cmp     cs:dword_18026A820, r14d
 * 0000000180054903: jnz     loc_1800549DD
 * 0000000180054909: mov     r8d, r13d
 * 000000018005490C: lea     rdx, unk_18019DC90
 * 0000000180054913: lea     rcx, [rbp+9E20h+var_7258]
 * 000000018005491A: call    sub_1800456CC
 * 000000018005491F: movups  xmm0, xmmword ptr [rax]
 * 0000000180054922: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054928: mov     al, [rbp+9E20h+arg_0]
 * 000000018005492E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054932: mov     r9d, esi
 * 0000000180054935: mov     r8d, esi
 * 0000000180054938: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005493D: lea     rcx, [rbp+9E20h+var_448]
 * 0000000180054944: call    sub_1800456B8
 * 0000000180054949: movups  xmm0, xmmword ptr [rax]
 * 000000018005494C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054951: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054955: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005495A: call    sub_1800456E0
 * 000000018005495F: mov     r8, rax
 * 0000000180054962: mov     r9d, r12d
 * 0000000180054965: mov     edx, 17Ah
 * 000000018005496A: lea     rcx, [rbp+9E20h+var_12A8]; Src
 * 0000000180054971: call    sub_1800D45C8
 * 0000000180054976: nop
 * 0000000180054977: mov     r8, rax
 * 000000018005497A: lea     rdx, aStandardshader_250; "StandardShader/ShaderModel40/"
 * 0000000180054981: lea     rcx, [rbp+9E20h+var_12C8]
 * 0000000180054988: call    sub_1800454BC
 * 000000018005498D: nop
 * 000000018005498E: lea     r8, aVertex_107; "/Vertex"
 * 0000000180054995: mov     rdx, rax
 * 0000000180054998: lea     rcx, [rbp+9E20h+var_12E8]
 * 000000018005499F: call    sub_18002C088
 * 00000001800549A4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800549A9: mov     rcx, rax
 * 00000001800549AC: call    sub_1800D46B4
 * 00000001800549B1: mov     cs:byte_18026A81C, al
 * 00000001800549B7: lea     rcx, [rbp+9E20h+var_12C8]; void *
 * 00000001800549BE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800549C3: nop
 * 00000001800549C4: lea     rcx, [rbp+9E20h+var_12A8]; void *
 * 00000001800549CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800549D0: nop
 * 00000001800549D1: lea     rcx, dword_18026A820
 * 00000001800549D8: call    _Init_thread_footer
 * 00000001800549DD: mov     rax, [rdi+rbx*8]
 * 00000001800549E1: mov     ecx, [r15+rax]
 * 00000001800549E5: cmp     cs:dword_18026A828, ecx
 * 00000001800549EB: jle     loc_180054AE1
 * 00000001800549F1: lea     rcx, dword_18026A828
 * 00000001800549F8: call    _Init_thread_header
 * 00000001800549FD: cmp     cs:dword_18026A828, r14d
 * 0000000180054A04: jnz     loc_180054AE1
 * 0000000180054A0A: mov     r8d, 1050h
 * 0000000180054A10: lea     rdx, unk_18019CC40
 * 0000000180054A17: lea     rcx, [rbp+9E20h+var_7248]
 * 0000000180054A1E: call    sub_1800456CC
 * 0000000180054A23: movups  xmm0, xmmword ptr [rax]
 * 0000000180054A26: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054A2C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054A32: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054A36: mov     r9d, esi
 * 0000000180054A39: mov     r8d, esi
 * 0000000180054A3C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054A41: lea     rcx, [rbp+9E20h+var_428]
 * 0000000180054A48: call    sub_1800456B8
 * 0000000180054A4D: movups  xmm0, xmmword ptr [rax]
 * 0000000180054A50: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054A55: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054A59: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054A5E: call    sub_1800456E0
 * 0000000180054A63: mov     r8, rax
 * 0000000180054A66: mov     r9d, r12d
 * 0000000180054A69: mov     edx, 180h
 * 0000000180054A6E: lea     rcx, [rbp+9E20h+var_1248]; Src
 * 0000000180054A75: call    sub_1800D45C8
 * 0000000180054A7A: nop
 * 0000000180054A7B: mov     r8, rax
 * 0000000180054A7E: lea     rdx, aStandardshader_251; "StandardShader/ShaderModel40/"
 * 0000000180054A85: lea     rcx, [rbp+9E20h+var_1268]
 * 0000000180054A8C: call    sub_1800454BC
 * 0000000180054A91: nop
 * 0000000180054A92: lea     r8, aVertex_108; "/Vertex"
 * 0000000180054A99: mov     rdx, rax
 * 0000000180054A9C: lea     rcx, [rbp+9E20h+var_1288]
 * 0000000180054AA3: call    sub_18002C088
 * 0000000180054AA8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054AAD: mov     rcx, rax
 * 0000000180054AB0: call    sub_1800D46B4
 * 0000000180054AB5: mov     cs:byte_18026A824, al
 * 0000000180054ABB: lea     rcx, [rbp+9E20h+var_1268]; void *
 * 0000000180054AC2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054AC7: nop
 * 0000000180054AC8: lea     rcx, [rbp+9E20h+var_1248]; void *
 * 0000000180054ACF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054AD4: nop
 * 0000000180054AD5: lea     rcx, dword_18026A828
 * 0000000180054ADC: call    _Init_thread_footer
 * 0000000180054AE1: mov     rax, [rdi+rbx*8]
 * 0000000180054AE5: mov     ecx, [r15+rax]
 * 0000000180054AE9: cmp     cs:dword_18026A830, ecx
 * 0000000180054AEF: jle     loc_180054BE5
 * 0000000180054AF5: lea     rcx, dword_18026A830
 * 0000000180054AFC: call    _Init_thread_header
 * 0000000180054B01: cmp     cs:dword_18026A830, r14d
 * 0000000180054B08: jnz     loc_180054BE5
 * 0000000180054B0E: mov     r8d, 1050h
 * 0000000180054B14: lea     rdx, unk_18019CC40
 * 0000000180054B1B: lea     rcx, [rbp+9E20h+var_7238]
 * 0000000180054B22: call    sub_1800456CC
 * 0000000180054B27: movups  xmm0, xmmword ptr [rax]
 * 0000000180054B2A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054B30: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054B36: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054B3A: mov     r9d, esi
 * 0000000180054B3D: mov     r8d, esi
 * 0000000180054B40: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054B45: lea     rcx, [rbp+9E20h+var_408]
 * 0000000180054B4C: call    sub_1800456B8
 * 0000000180054B51: movups  xmm0, xmmword ptr [rax]
 * 0000000180054B54: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054B59: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054B5D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054B62: call    sub_1800456E0
 * 0000000180054B67: mov     r8, rax
 * 0000000180054B6A: mov     r9d, r12d
 * 0000000180054B6D: mov     edx, 182h
 * 0000000180054B72: lea     rcx, [rbp+9E20h+var_11E8]; Src
 * 0000000180054B79: call    sub_1800D45C8
 * 0000000180054B7E: nop
 * 0000000180054B7F: mov     r8, rax
 * 0000000180054B82: lea     rdx, aStandardshader_252; "StandardShader/ShaderModel40/"
 * 0000000180054B89: lea     rcx, [rbp+9E20h+var_1208]
 * 0000000180054B90: call    sub_1800454BC
 * 0000000180054B95: nop
 * 0000000180054B96: lea     r8, aVertex_109; "/Vertex"
 * 0000000180054B9D: mov     rdx, rax
 * 0000000180054BA0: lea     rcx, [rbp+9E20h+var_1228]
 * 0000000180054BA7: call    sub_18002C088
 * 0000000180054BAC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054BB1: mov     rcx, rax
 * 0000000180054BB4: call    sub_1800D46B4
 * 0000000180054BB9: mov     cs:byte_18026A82C, al
 * 0000000180054BBF: lea     rcx, [rbp+9E20h+var_1208]; void *
 * 0000000180054BC6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054BCB: nop
 * 0000000180054BCC: lea     rcx, [rbp+9E20h+var_11E8]; void *
 * 0000000180054BD3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054BD8: nop
 * 0000000180054BD9: lea     rcx, dword_18026A830
 * 0000000180054BE0: call    _Init_thread_footer
 * 0000000180054BE5: mov     rax, [rdi+rbx*8]
 * 0000000180054BE9: mov     ecx, [r15+rax]
 * 0000000180054BED: cmp     cs:dword_18026A838, ecx
 * 0000000180054BF3: jle     loc_180054CE9
 * 0000000180054BF9: lea     rcx, dword_18026A838
 * 0000000180054C00: call    _Init_thread_header
 * 0000000180054C05: cmp     cs:dword_18026A838, r14d
 * 0000000180054C0C: jnz     loc_180054CE9
 * 0000000180054C12: mov     r8d, 1050h
 * 0000000180054C18: lea     rdx, unk_18019CC40
 * 0000000180054C1F: lea     rcx, [rbp+9E20h+var_7228]
 * 0000000180054C26: call    sub_1800456CC
 * 0000000180054C2B: movups  xmm0, xmmword ptr [rax]
 * 0000000180054C2E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054C34: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054C3A: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054C3E: mov     r9d, esi
 * 0000000180054C41: mov     r8d, esi
 * 0000000180054C44: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054C49: lea     rcx, [rbp+9E20h+var_3E8]
 * 0000000180054C50: call    sub_1800456B8
 * 0000000180054C55: movups  xmm0, xmmword ptr [rax]
 * 0000000180054C58: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054C5D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054C61: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054C66: call    sub_1800456E0
 * 0000000180054C6B: mov     r8, rax
 * 0000000180054C6E: mov     r9d, r12d
 * 0000000180054C71: mov     edx, 188h
 * 0000000180054C76: lea     rcx, [rbp+9E20h+var_1188]; Src
 * 0000000180054C7D: call    sub_1800D45C8
 * 0000000180054C82: nop
 * 0000000180054C83: mov     r8, rax
 * 0000000180054C86: lea     rdx, aStandardshader_253; "StandardShader/ShaderModel40/"
 * 0000000180054C8D: lea     rcx, [rbp+9E20h+var_11A8]
 * 0000000180054C94: call    sub_1800454BC
 * 0000000180054C99: nop
 * 0000000180054C9A: lea     r8, aVertex_110; "/Vertex"
 * 0000000180054CA1: mov     rdx, rax
 * 0000000180054CA4: lea     rcx, [rbp+9E20h+var_11C8]
 * 0000000180054CAB: call    sub_18002C088
 * 0000000180054CB0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054CB5: mov     rcx, rax
 * 0000000180054CB8: call    sub_1800D46B4
 * 0000000180054CBD: mov     cs:byte_18026A834, al
 * 0000000180054CC3: lea     rcx, [rbp+9E20h+var_11A8]; void *
 * 0000000180054CCA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054CCF: nop
 * 0000000180054CD0: lea     rcx, [rbp+9E20h+var_1188]; void *
 * 0000000180054CD7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054CDC: nop
 * 0000000180054CDD: lea     rcx, dword_18026A838
 * 0000000180054CE4: call    _Init_thread_footer
 * 0000000180054CE9: mov     rax, [rdi+rbx*8]
 * 0000000180054CED: mov     ecx, [r15+rax]
 * 0000000180054CF1: cmp     cs:dword_18026A840, ecx
 * 0000000180054CF7: jle     loc_180054DED
 * 0000000180054CFD: lea     rcx, dword_18026A840
 * 0000000180054D04: call    _Init_thread_header
 * 0000000180054D09: cmp     cs:dword_18026A840, r14d
 * 0000000180054D10: jnz     loc_180054DED
 * 0000000180054D16: mov     r8d, 1050h
 * 0000000180054D1C: lea     rdx, unk_18019CC40
 * 0000000180054D23: lea     rcx, [rbp+9E20h+var_7218]
 * 0000000180054D2A: call    sub_1800456CC
 * 0000000180054D2F: movups  xmm0, xmmword ptr [rax]
 * 0000000180054D32: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054D38: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054D3E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054D42: mov     r9d, esi
 * 0000000180054D45: mov     r8d, esi
 * 0000000180054D48: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054D4D: lea     rcx, [rbp+9E20h+var_3C8]
 * 0000000180054D54: call    sub_1800456B8
 * 0000000180054D59: movups  xmm0, xmmword ptr [rax]
 * 0000000180054D5C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054D61: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054D65: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054D6A: call    sub_1800456E0
 * 0000000180054D6F: mov     r8, rax
 * 0000000180054D72: mov     r9d, r12d
 * 0000000180054D75: mov     edx, 18Ah
 * 0000000180054D7A: lea     rcx, [rbp+9E20h+var_1128]; Src
 * 0000000180054D81: call    sub_1800D45C8
 * 0000000180054D86: nop
 * 0000000180054D87: mov     r8, rax
 * 0000000180054D8A: lea     rdx, aStandardshader_254; "StandardShader/ShaderModel40/"
 * 0000000180054D91: lea     rcx, [rbp+9E20h+var_1148]
 * 0000000180054D98: call    sub_1800454BC
 * 0000000180054D9D: nop
 * 0000000180054D9E: lea     r8, aVertex_111; "/Vertex"
 * 0000000180054DA5: mov     rdx, rax
 * 0000000180054DA8: lea     rcx, [rbp+9E20h+var_1168]
 * 0000000180054DAF: call    sub_18002C088
 * 0000000180054DB4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054DB9: mov     rcx, rax
 * 0000000180054DBC: call    sub_1800D46B4
 * 0000000180054DC1: mov     cs:byte_18026A83C, al
 * 0000000180054DC7: lea     rcx, [rbp+9E20h+var_1148]; void *
 * 0000000180054DCE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054DD3: nop
 * 0000000180054DD4: lea     rcx, [rbp+9E20h+var_1128]; void *
 * 0000000180054DDB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054DE0: nop
 * 0000000180054DE1: lea     rcx, dword_18026A840
 * 0000000180054DE8: call    _Init_thread_footer
 * 0000000180054DED: mov     rax, [rdi+rbx*8]
 * 0000000180054DF1: mov     ecx, [r15+rax]
 * 0000000180054DF5: cmp     cs:dword_18026A848, ecx
 * 0000000180054DFB: jle     loc_180054EF1
 * 0000000180054E01: lea     rcx, dword_18026A848
 * 0000000180054E08: call    _Init_thread_header
 * 0000000180054E0D: cmp     cs:dword_18026A848, r14d
 * 0000000180054E14: jnz     loc_180054EF1
 * 0000000180054E1A: mov     r8d, 1050h
 * 0000000180054E20: lea     rdx, unk_18019CC40
 * 0000000180054E27: lea     rcx, [rbp+9E20h+var_7208]
 * 0000000180054E2E: call    sub_1800456CC
 * 0000000180054E33: movups  xmm0, xmmword ptr [rax]
 * 0000000180054E36: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054E3C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054E42: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054E46: mov     r9d, esi
 * 0000000180054E49: mov     r8d, esi
 * 0000000180054E4C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054E51: lea     rcx, [rbp+9E20h+var_3A8]
 * 0000000180054E58: call    sub_1800456B8
 * 0000000180054E5D: movups  xmm0, xmmword ptr [rax]
 * 0000000180054E60: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054E65: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054E69: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054E6E: call    sub_1800456E0
 * 0000000180054E73: mov     r8, rax
 * 0000000180054E76: mov     r9d, r12d
 * 0000000180054E79: mov     edx, 190h
 * 0000000180054E7E: lea     rcx, [rbp+9E20h+var_10C8]; Src
 * 0000000180054E85: call    sub_1800D45C8
 * 0000000180054E8A: nop
 * 0000000180054E8B: mov     r8, rax
 * 0000000180054E8E: lea     rdx, aStandardshader_255; "StandardShader/ShaderModel40/"
 * 0000000180054E95: lea     rcx, [rbp+9E20h+var_10E8]
 * 0000000180054E9C: call    sub_1800454BC
 * 0000000180054EA1: nop
 * 0000000180054EA2: lea     r8, aVertex_112; "/Vertex"
 * 0000000180054EA9: mov     rdx, rax
 * 0000000180054EAC: lea     rcx, [rbp+9E20h+var_1108]
 * 0000000180054EB3: call    sub_18002C088
 * 0000000180054EB8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054EBD: mov     rcx, rax
 * 0000000180054EC0: call    sub_1800D46B4
 * 0000000180054EC5: mov     cs:byte_18026A844, al
 * 0000000180054ECB: lea     rcx, [rbp+9E20h+var_10E8]; void *
 * 0000000180054ED2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054ED7: nop
 * 0000000180054ED8: lea     rcx, [rbp+9E20h+var_10C8]; void *
 * 0000000180054EDF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054EE4: nop
 * 0000000180054EE5: lea     rcx, dword_18026A848
 * 0000000180054EEC: call    _Init_thread_footer
 * 0000000180054EF1: mov     rax, [rdi+rbx*8]
 * 0000000180054EF5: mov     ecx, [r15+rax]
 * 0000000180054EF9: cmp     cs:dword_18026A850, ecx
 * 0000000180054EFF: jle     loc_180054FF5
 * 0000000180054F05: lea     rcx, dword_18026A850
 * 0000000180054F0C: call    _Init_thread_header
 * 0000000180054F11: cmp     cs:dword_18026A850, r14d
 * 0000000180054F18: jnz     loc_180054FF5
 * 0000000180054F1E: mov     r8d, 1050h
 * 0000000180054F24: lea     rdx, unk_18019CC40
 * 0000000180054F2B: lea     rcx, [rbp+9E20h+var_71F8]
 * 0000000180054F32: call    sub_1800456CC
 * 0000000180054F37: movups  xmm0, xmmword ptr [rax]
 * 0000000180054F3A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054F40: mov     al, [rbp+9E20h+arg_0]
 * 0000000180054F46: mov     [rsp+9F20h+var_9F00], al
 * 0000000180054F4A: mov     r9d, esi
 * 0000000180054F4D: mov     r8d, esi
 * 0000000180054F50: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054F55: lea     rcx, [rbp+9E20h+var_388]
 * 0000000180054F5C: call    sub_1800456B8
 * 0000000180054F61: movups  xmm0, xmmword ptr [rax]
 * 0000000180054F64: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180054F69: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054F6D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180054F72: call    sub_1800456E0
 * 0000000180054F77: mov     r8, rax
 * 0000000180054F7A: mov     r9d, r12d
 * 0000000180054F7D: mov     edx, 192h
 * 0000000180054F82: lea     rcx, [rbp+9E20h+var_1068]; Src
 * 0000000180054F89: call    sub_1800D45C8
 * 0000000180054F8E: nop
 * 0000000180054F8F: mov     r8, rax
 * 0000000180054F92: lea     rdx, aStandardshader_256; "StandardShader/ShaderModel40/"
 * 0000000180054F99: lea     rcx, [rbp+9E20h+var_1088]
 * 0000000180054FA0: call    sub_1800454BC
 * 0000000180054FA5: nop
 * 0000000180054FA6: lea     r8, aVertex_113; "/Vertex"
 * 0000000180054FAD: mov     rdx, rax
 * 0000000180054FB0: lea     rcx, [rbp+9E20h+var_10A8]
 * 0000000180054FB7: call    sub_18002C088
 * 0000000180054FBC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180054FC1: mov     rcx, rax
 * 0000000180054FC4: call    sub_1800D46B4
 * 0000000180054FC9: mov     cs:byte_18026A84C, al
 * 0000000180054FCF: lea     rcx, [rbp+9E20h+var_1088]; void *
 * 0000000180054FD6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054FDB: nop
 * 0000000180054FDC: lea     rcx, [rbp+9E20h+var_1068]; void *
 * 0000000180054FE3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054FE8: nop
 * 0000000180054FE9: lea     rcx, dword_18026A850
 * 0000000180054FF0: call    _Init_thread_footer
 * 0000000180054FF5: mov     rax, [rdi+rbx*8]
 * 0000000180054FF9: mov     ecx, [r15+rax]
 * 0000000180054FFD: cmp     cs:dword_18026A858, ecx
 * 0000000180055003: jle     loc_1800550F9
 * 0000000180055009: lea     rcx, dword_18026A858
 * 0000000180055010: call    _Init_thread_header
 * 0000000180055015: cmp     cs:dword_18026A858, r14d
 * 000000018005501C: jnz     loc_1800550F9
 * 0000000180055022: mov     r8d, 1050h
 * 0000000180055028: lea     rdx, unk_18019CC40
 * 000000018005502F: lea     rcx, [rbp+9E20h+var_71E8]
 * 0000000180055036: call    sub_1800456CC
 * 000000018005503B: movups  xmm0, xmmword ptr [rax]
 * 000000018005503E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055044: mov     al, [rbp+9E20h+arg_0]
 * 000000018005504A: mov     [rsp+9F20h+var_9F00], al
 * 000000018005504E: mov     r9d, esi
 * 0000000180055051: mov     r8d, esi
 * 0000000180055054: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055059: lea     rcx, [rbp+9E20h+var_368]
 * 0000000180055060: call    sub_1800456B8
 * 0000000180055065: movups  xmm0, xmmword ptr [rax]
 * 0000000180055068: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005506D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055071: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055076: call    sub_1800456E0
 * 000000018005507B: mov     r8, rax
 * 000000018005507E: mov     r9d, r12d
 * 0000000180055081: mov     edx, 198h
 * 0000000180055086: lea     rcx, [rbp+9E20h+var_1008]; Src
 * 000000018005508D: call    sub_1800D45C8
 * 0000000180055092: nop
 * 0000000180055093: mov     r8, rax
 * 0000000180055096: lea     rdx, aStandardshader_257; "StandardShader/ShaderModel40/"
 * 000000018005509D: lea     rcx, [rbp+9E20h+var_1028]
 * 00000001800550A4: call    sub_1800454BC
 * 00000001800550A9: nop
 * 00000001800550AA: lea     r8, aVertex_114; "/Vertex"
 * 00000001800550B1: mov     rdx, rax
 * 00000001800550B4: lea     rcx, [rbp+9E20h+var_1048]
 * 00000001800550BB: call    sub_18002C088
 * 00000001800550C0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800550C5: mov     rcx, rax
 * 00000001800550C8: call    sub_1800D46B4
 * 00000001800550CD: mov     cs:byte_18026A854, al
 * 00000001800550D3: lea     rcx, [rbp+9E20h+var_1028]; void *
 * 00000001800550DA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800550DF: nop
 * 00000001800550E0: lea     rcx, [rbp+9E20h+var_1008]; void *
 * 00000001800550E7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800550EC: nop
 * 00000001800550ED: lea     rcx, dword_18026A858
 * 00000001800550F4: call    _Init_thread_footer
 * 00000001800550F9: mov     rax, [rdi+rbx*8]
 * 00000001800550FD: mov     ecx, [r15+rax]
 * 0000000180055101: cmp     cs:dword_18026A860, ecx
 * 0000000180055107: jle     loc_1800551FD
 * 000000018005510D: lea     rcx, dword_18026A860
 * 0000000180055114: call    _Init_thread_header
 * 0000000180055119: cmp     cs:dword_18026A860, r14d
 * 0000000180055120: jnz     loc_1800551FD
 * 0000000180055126: mov     r8d, 1050h
 * 000000018005512C: lea     rdx, unk_18019CC40
 * 0000000180055133: lea     rcx, [rbp+9E20h+var_71D8]
 * 000000018005513A: call    sub_1800456CC
 * 000000018005513F: movups  xmm0, xmmword ptr [rax]
 * 0000000180055142: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055148: mov     al, [rbp+9E20h+arg_0]
 * 000000018005514E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055152: mov     r9d, esi
 * 0000000180055155: mov     r8d, esi
 * 0000000180055158: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005515D: lea     rcx, [rbp+9E20h+var_348]
 * 0000000180055164: call    sub_1800456B8
 * 0000000180055169: movups  xmm0, xmmword ptr [rax]
 * 000000018005516C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055171: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055175: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005517A: call    sub_1800456E0
 * 000000018005517F: mov     r8, rax
 * 0000000180055182: mov     r9d, r12d
 * 0000000180055185: mov     edx, 19Ah
 * 000000018005518A: lea     rcx, [rbp+9E20h+var_FA8]; Src
 * 0000000180055191: call    sub_1800D45C8
 * 0000000180055196: nop
 * 0000000180055197: mov     r8, rax
 * 000000018005519A: lea     rdx, aStandardshader_258; "StandardShader/ShaderModel40/"
 * 00000001800551A1: lea     rcx, [rbp+9E20h+var_FC8]
 * 00000001800551A8: call    sub_1800454BC
 * 00000001800551AD: nop
 * 00000001800551AE: lea     r8, aVertex_115; "/Vertex"
 * 00000001800551B5: mov     rdx, rax
 * 00000001800551B8: lea     rcx, [rbp+9E20h+var_FE8]
 * 00000001800551BF: call    sub_18002C088
 * 00000001800551C4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800551C9: mov     rcx, rax
 * 00000001800551CC: call    sub_1800D46B4
 * 00000001800551D1: mov     cs:byte_18026A85C, al
 * 00000001800551D7: lea     rcx, [rbp+9E20h+var_FC8]; void *
 * 00000001800551DE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800551E3: nop
 * 00000001800551E4: lea     rcx, [rbp+9E20h+var_FA8]; void *
 * 00000001800551EB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800551F0: nop
 * 00000001800551F1: lea     rcx, dword_18026A860
 * 00000001800551F8: call    _Init_thread_footer
 * 00000001800551FD: mov     rax, [rdi+rbx*8]
 * 0000000180055201: mov     ecx, [r15+rax]
 * 0000000180055205: cmp     cs:dword_18026A868, ecx
 * 000000018005520B: jle     loc_1800552FE
 * 0000000180055211: lea     rcx, dword_18026A868
 * 0000000180055218: call    _Init_thread_header
 * 000000018005521D: cmp     cs:dword_18026A868, r14d
 * 0000000180055224: jnz     loc_1800552FE
 * 000000018005522A: mov     r8d, r13d
 * 000000018005522D: lea     rdx, unk_18019DC90
 * 0000000180055234: lea     rcx, [rbp+9E20h+var_71C8]
 * 000000018005523B: call    sub_1800456CC
 * 0000000180055240: movups  xmm0, xmmword ptr [rax]
 * 0000000180055243: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055249: mov     al, [rbp+9E20h+arg_0]
 * 000000018005524F: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055253: mov     r9d, esi
 * 0000000180055256: mov     r8d, esi
 * 0000000180055259: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005525E: lea     rcx, [rbp+9E20h+var_328]
 * 0000000180055265: call    sub_1800456B8
 * 000000018005526A: movups  xmm0, xmmword ptr [rax]
 * 000000018005526D: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055272: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055276: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005527B: call    sub_1800456E0
 * 0000000180055280: mov     r8, rax
 * 0000000180055283: mov     r9d, r12d
 * 0000000180055286: mov     edx, 1A0h
 * 000000018005528B: lea     rcx, [rbp+9E20h+var_F48]; Src
 * 0000000180055292: call    sub_1800D45C8
 * 0000000180055297: nop
 * 0000000180055298: mov     r8, rax
 * 000000018005529B: lea     rdx, aStandardshader_259; "StandardShader/ShaderModel40/"
 * 00000001800552A2: lea     rcx, [rbp+9E20h+var_F68]
 * 00000001800552A9: call    sub_1800454BC
 * 00000001800552AE: nop
 * 00000001800552AF: lea     r8, aVertex_116; "/Vertex"
 * 00000001800552B6: mov     rdx, rax
 * 00000001800552B9: lea     rcx, [rbp+9E20h+var_F88]
 * 00000001800552C0: call    sub_18002C088
 * 00000001800552C5: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800552CA: mov     rcx, rax
 * 00000001800552CD: call    sub_1800D46B4
 * 00000001800552D2: mov     cs:byte_18026A864, al
 * 00000001800552D8: lea     rcx, [rbp+9E20h+var_F68]; void *
 * 00000001800552DF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800552E4: nop
 * 00000001800552E5: lea     rcx, [rbp+9E20h+var_F48]; void *
 * 00000001800552EC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800552F1: nop
 * 00000001800552F2: lea     rcx, dword_18026A868
 * 00000001800552F9: call    _Init_thread_footer
 * 00000001800552FE: mov     rax, [rdi+rbx*8]
 * 0000000180055302: mov     ecx, [r15+rax]
 * 0000000180055306: cmp     cs:dword_18026A870, ecx
 * 000000018005530C: jle     loc_1800553FF
 * 0000000180055312: lea     rcx, dword_18026A870
 * 0000000180055319: call    _Init_thread_header
 * 000000018005531E: cmp     cs:dword_18026A870, r14d
 * 0000000180055325: jnz     loc_1800553FF
 * 000000018005532B: mov     r8d, r13d
 * 000000018005532E: lea     rdx, unk_18019DC90
 * 0000000180055335: lea     rcx, [rbp+9E20h+var_71B8]
 * 000000018005533C: call    sub_1800456CC
 * 0000000180055341: movups  xmm0, xmmword ptr [rax]
 * 0000000180055344: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005534A: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055350: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055354: mov     r9d, esi
 * 0000000180055357: mov     r8d, esi
 * 000000018005535A: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005535F: lea     rcx, [rbp+9E20h+var_308]
 * 0000000180055366: call    sub_1800456B8
 * 000000018005536B: movups  xmm0, xmmword ptr [rax]
 * 000000018005536E: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055373: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055377: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005537C: call    sub_1800456E0
 * 0000000180055381: mov     r8, rax
 * 0000000180055384: mov     r9d, r12d
 * 0000000180055387: mov     edx, 1A2h
 * 000000018005538C: lea     rcx, [rbp+9E20h+var_EE8]; Src
 * 0000000180055393: call    sub_1800D45C8
 * 0000000180055398: nop
 * 0000000180055399: mov     r8, rax
 * 000000018005539C: lea     rdx, aStandardshader_260; "StandardShader/ShaderModel40/"
 * 00000001800553A3: lea     rcx, [rbp+9E20h+var_F08]
 * 00000001800553AA: call    sub_1800454BC
 * 00000001800553AF: nop
 * 00000001800553B0: lea     r8, aVertex_117; "/Vertex"
 * 00000001800553B7: mov     rdx, rax
 * 00000001800553BA: lea     rcx, [rbp+9E20h+var_F28]
 * 00000001800553C1: call    sub_18002C088
 * 00000001800553C6: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800553CB: mov     rcx, rax
 * 00000001800553CE: call    sub_1800D46B4
 * 00000001800553D3: mov     cs:byte_18026A86C, al
 * 00000001800553D9: lea     rcx, [rbp+9E20h+var_F08]; void *
 * 00000001800553E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800553E5: nop
 * 00000001800553E6: lea     rcx, [rbp+9E20h+var_EE8]; void *
 * 00000001800553ED: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800553F2: nop
 * 00000001800553F3: lea     rcx, dword_18026A870
 * 00000001800553FA: call    _Init_thread_footer
 * 00000001800553FF: mov     rax, [rdi+rbx*8]
 * 0000000180055403: mov     ecx, [r15+rax]
 * 0000000180055407: cmp     cs:dword_18026A878, ecx
 * 000000018005540D: jle     loc_180055500
 * 0000000180055413: lea     rcx, dword_18026A878
 * 000000018005541A: call    _Init_thread_header
 * 000000018005541F: cmp     cs:dword_18026A878, r14d
 * 0000000180055426: jnz     loc_180055500
 * 000000018005542C: mov     r8d, r13d
 * 000000018005542F: lea     rdx, unk_18019DC90
 * 0000000180055436: lea     rcx, [rbp+9E20h+var_71A8]
 * 000000018005543D: call    sub_1800456CC
 * 0000000180055442: movups  xmm0, xmmword ptr [rax]
 * 0000000180055445: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005544B: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055451: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055455: mov     r9d, esi
 * 0000000180055458: mov     r8d, esi
 * 000000018005545B: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055460: lea     rcx, [rbp+9E20h+var_2E8]
 * 0000000180055467: call    sub_1800456B8
 * 000000018005546C: movups  xmm0, xmmword ptr [rax]
 * 000000018005546F: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055474: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055478: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005547D: call    sub_1800456E0
 * 0000000180055482: mov     r8, rax
 * 0000000180055485: mov     r9d, r12d
 * 0000000180055488: mov     edx, 1A8h
 * 000000018005548D: lea     rcx, [rbp+9E20h+var_E88]; Src
 * 0000000180055494: call    sub_1800D45C8
 * 0000000180055499: nop
 * 000000018005549A: mov     r8, rax
 * 000000018005549D: lea     rdx, aStandardshader_261; "StandardShader/ShaderModel40/"
 * 00000001800554A4: lea     rcx, [rbp+9E20h+var_EA8]
 * 00000001800554AB: call    sub_1800454BC
 * 00000001800554B0: nop
 * 00000001800554B1: lea     r8, aVertex_118; "/Vertex"
 * 00000001800554B8: mov     rdx, rax
 * 00000001800554BB: lea     rcx, [rbp+9E20h+var_EC8]
 * 00000001800554C2: call    sub_18002C088
 * 00000001800554C7: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800554CC: mov     rcx, rax
 * 00000001800554CF: call    sub_1800D46B4
 * 00000001800554D4: mov     cs:byte_18026A874, al
 * 00000001800554DA: lea     rcx, [rbp+9E20h+var_EA8]; void *
 * 00000001800554E1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800554E6: nop
 * 00000001800554E7: lea     rcx, [rbp+9E20h+var_E88]; void *
 * 00000001800554EE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800554F3: nop
 * 00000001800554F4: lea     rcx, dword_18026A878
 * 00000001800554FB: call    _Init_thread_footer
 * 0000000180055500: mov     rax, [rdi+rbx*8]
 * 0000000180055504: mov     ecx, [r15+rax]
 * 0000000180055508: cmp     cs:dword_18026A880, ecx
 * 000000018005550E: jle     loc_180055601
 * 0000000180055514: lea     rcx, dword_18026A880
 * 000000018005551B: call    _Init_thread_header
 * 0000000180055520: cmp     cs:dword_18026A880, r14d
 * 0000000180055527: jnz     loc_180055601
 * 000000018005552D: mov     r8d, r13d
 * 0000000180055530: lea     rdx, unk_18019DC90
 * 0000000180055537: lea     rcx, [rbp+9E20h+var_7198]
 * 000000018005553E: call    sub_1800456CC
 * 0000000180055543: movups  xmm0, xmmword ptr [rax]
 * 0000000180055546: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005554C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055552: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055556: mov     r9d, esi
 * 0000000180055559: mov     r8d, esi
 * 000000018005555C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055561: lea     rcx, [rbp+9E20h+var_2C8]
 * 0000000180055568: call    sub_1800456B8
 * 000000018005556D: movups  xmm0, xmmword ptr [rax]
 * 0000000180055570: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055575: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055579: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005557E: call    sub_1800456E0
 * 0000000180055583: mov     r8, rax
 * 0000000180055586: mov     r9d, r12d
 * 0000000180055589: mov     edx, 1AAh
 * 000000018005558E: lea     rcx, [rbp+9E20h+var_E28]; Src
 * 0000000180055595: call    sub_1800D45C8
 * 000000018005559A: nop
 * 000000018005559B: mov     r8, rax
 * 000000018005559E: lea     rdx, aStandardshader_262; "StandardShader/ShaderModel40/"
 * 00000001800555A5: lea     rcx, [rbp+9E20h+var_E48]
 * 00000001800555AC: call    sub_1800454BC
 * 00000001800555B1: nop
 * 00000001800555B2: lea     r8, aVertex_119; "/Vertex"
 * 00000001800555B9: mov     rdx, rax
 * 00000001800555BC: lea     rcx, [rbp+9E20h+var_E68]
 * 00000001800555C3: call    sub_18002C088
 * 00000001800555C8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800555CD: mov     rcx, rax
 * 00000001800555D0: call    sub_1800D46B4
 * 00000001800555D5: mov     cs:byte_18026A87C, al
 * 00000001800555DB: lea     rcx, [rbp+9E20h+var_E48]; void *
 * 00000001800555E2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800555E7: nop
 * 00000001800555E8: lea     rcx, [rbp+9E20h+var_E28]; void *
 * 00000001800555EF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800555F4: nop
 * 00000001800555F5: lea     rcx, dword_18026A880
 * 00000001800555FC: call    _Init_thread_footer
 * 0000000180055601: mov     rax, [rdi+rbx*8]
 * 0000000180055605: mov     ecx, [r15+rax]
 * 0000000180055609: cmp     cs:dword_18026A888, ecx
 * 000000018005560F: jle     loc_180055702
 * 0000000180055615: lea     rcx, dword_18026A888
 * 000000018005561C: call    _Init_thread_header
 * 0000000180055621: cmp     cs:dword_18026A888, r14d
 * 0000000180055628: jnz     loc_180055702
 * 000000018005562E: mov     r8d, r13d
 * 0000000180055631: lea     rdx, unk_18019DC90
 * 0000000180055638: lea     rcx, [rbp+9E20h+var_7188]
 * 000000018005563F: call    sub_1800456CC
 * 0000000180055644: movups  xmm0, xmmword ptr [rax]
 * 0000000180055647: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005564D: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055653: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055657: mov     r9d, esi
 * 000000018005565A: mov     r8d, esi
 * 000000018005565D: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055662: lea     rcx, [rbp+9E20h+var_2A8]
 * 0000000180055669: call    sub_1800456B8
 * 000000018005566E: movups  xmm0, xmmword ptr [rax]
 * 0000000180055671: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055676: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005567A: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005567F: call    sub_1800456E0
 * 0000000180055684: mov     r8, rax
 * 0000000180055687: mov     r9d, r12d
 * 000000018005568A: mov     edx, 1B0h
 * 000000018005568F: lea     rcx, [rbp+9E20h+var_DC8]; Src
 * 0000000180055696: call    sub_1800D45C8
 * 000000018005569B: nop
 * 000000018005569C: mov     r8, rax
 * 000000018005569F: lea     rdx, aStandardshader_263; "StandardShader/ShaderModel40/"
 * 00000001800556A6: lea     rcx, [rbp+9E20h+var_DE8]
 * 00000001800556AD: call    sub_1800454BC
 * 00000001800556B2: nop
 * 00000001800556B3: lea     r8, aVertex_120; "/Vertex"
 * 00000001800556BA: mov     rdx, rax
 * 00000001800556BD: lea     rcx, [rbp+9E20h+var_E08]
 * 00000001800556C4: call    sub_18002C088
 * 00000001800556C9: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800556CE: mov     rcx, rax
 * 00000001800556D1: call    sub_1800D46B4
 * 00000001800556D6: mov     cs:byte_18026A884, al
 * 00000001800556DC: lea     rcx, [rbp+9E20h+var_DE8]; void *
 * 00000001800556E3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800556E8: nop
 * 00000001800556E9: lea     rcx, [rbp+9E20h+var_DC8]; void *
 * 00000001800556F0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800556F5: nop
 * 00000001800556F6: lea     rcx, dword_18026A888
 * 00000001800556FD: call    _Init_thread_footer
 * 0000000180055702: mov     rax, [rdi+rbx*8]
 * 0000000180055706: mov     ecx, [r15+rax]
 * 000000018005570A: cmp     cs:dword_18026A890, ecx
 * 0000000180055710: jle     loc_180055803
 * 0000000180055716: lea     rcx, dword_18026A890
 * 000000018005571D: call    _Init_thread_header
 * 0000000180055722: cmp     cs:dword_18026A890, r14d
 * 0000000180055729: jnz     loc_180055803
 * 000000018005572F: mov     r8d, r13d
 * 0000000180055732: lea     rdx, unk_18019DC90
 * 0000000180055739: lea     rcx, [rbp+9E20h+var_7178]
 * 0000000180055740: call    sub_1800456CC
 * 0000000180055745: movups  xmm0, xmmword ptr [rax]
 * 0000000180055748: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005574E: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055754: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055758: mov     r9d, esi
 * 000000018005575B: mov     r8d, esi
 * 000000018005575E: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055763: lea     rcx, [rbp+9E20h+var_288]
 * 000000018005576A: call    sub_1800456B8
 * 000000018005576F: movups  xmm0, xmmword ptr [rax]
 * 0000000180055772: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055777: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005577B: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055780: call    sub_1800456E0
 * 0000000180055785: mov     r8, rax
 * 0000000180055788: mov     r9d, r12d
 * 000000018005578B: mov     edx, 1B2h
 * 0000000180055790: lea     rcx, [rbp+9E20h+var_D68]; Src
 * 0000000180055797: call    sub_1800D45C8
 * 000000018005579C: nop
 * 000000018005579D: mov     r8, rax
 * 00000001800557A0: lea     rdx, aStandardshader_264; "StandardShader/ShaderModel40/"
 * 00000001800557A7: lea     rcx, [rbp+9E20h+var_D88]
 * 00000001800557AE: call    sub_1800454BC
 * 00000001800557B3: nop
 * 00000001800557B4: lea     r8, aVertex_121; "/Vertex"
 * 00000001800557BB: mov     rdx, rax
 * 00000001800557BE: lea     rcx, [rbp+9E20h+var_DA8]
 * 00000001800557C5: call    sub_18002C088
 * 00000001800557CA: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800557CF: mov     rcx, rax
 * 00000001800557D2: call    sub_1800D46B4
 * 00000001800557D7: mov     cs:byte_18026A88C, al
 * 00000001800557DD: lea     rcx, [rbp+9E20h+var_D88]; void *
 * 00000001800557E4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800557E9: nop
 * 00000001800557EA: lea     rcx, [rbp+9E20h+var_D68]; void *
 * 00000001800557F1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800557F6: nop
 * 00000001800557F7: lea     rcx, dword_18026A890
 * 00000001800557FE: call    _Init_thread_footer
 * 0000000180055803: mov     rax, [rdi+rbx*8]
 * 0000000180055807: mov     ecx, [r15+rax]
 * 000000018005580B: cmp     cs:dword_18026A898, ecx
 * 0000000180055811: jle     loc_180055904
 * 0000000180055817: lea     rcx, dword_18026A898
 * 000000018005581E: call    _Init_thread_header
 * 0000000180055823: cmp     cs:dword_18026A898, r14d
 * 000000018005582A: jnz     loc_180055904
 * 0000000180055830: mov     r8d, r13d
 * 0000000180055833: lea     rdx, unk_18019DC90
 * 000000018005583A: lea     rcx, [rbp+9E20h+var_7168]
 * 0000000180055841: call    sub_1800456CC
 * 0000000180055846: movups  xmm0, xmmword ptr [rax]
 * 0000000180055849: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005584F: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055855: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055859: mov     r9d, esi
 * 000000018005585C: mov     r8d, esi
 * 000000018005585F: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055864: lea     rcx, [rbp+9E20h+var_268]
 * 000000018005586B: call    sub_1800456B8
 * 0000000180055870: movups  xmm0, xmmword ptr [rax]
 * 0000000180055873: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055878: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005587C: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055881: call    sub_1800456E0
 * 0000000180055886: mov     r8, rax
 * 0000000180055889: mov     r9d, r12d
 * 000000018005588C: mov     edx, 1B8h
 * 0000000180055891: lea     rcx, [rbp+9E20h+var_D08]; Src
 * 0000000180055898: call    sub_1800D45C8
 * 000000018005589D: nop
 * 000000018005589E: mov     r8, rax
 * 00000001800558A1: lea     rdx, aStandardshader_265; "StandardShader/ShaderModel40/"
 * 00000001800558A8: lea     rcx, [rbp+9E20h+var_D28]
 * 00000001800558AF: call    sub_1800454BC
 * 00000001800558B4: nop
 * 00000001800558B5: lea     r8, aVertex_122; "/Vertex"
 * 00000001800558BC: mov     rdx, rax
 * 00000001800558BF: lea     rcx, [rbp+9E20h+var_D48]
 * 00000001800558C6: call    sub_18002C088
 * 00000001800558CB: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800558D0: mov     rcx, rax
 * 00000001800558D3: call    sub_1800D46B4
 * 00000001800558D8: mov     cs:byte_18026A894, al
 * 00000001800558DE: lea     rcx, [rbp+9E20h+var_D28]; void *
 * 00000001800558E5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800558EA: nop
 * 00000001800558EB: lea     rcx, [rbp+9E20h+var_D08]; void *
 * 00000001800558F2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800558F7: nop
 * 00000001800558F8: lea     rcx, dword_18026A898
 * 00000001800558FF: call    _Init_thread_footer
 * 0000000180055904: mov     rax, [rdi+rbx*8]
 * 0000000180055908: mov     ecx, [r15+rax]
 * 000000018005590C: cmp     cs:dword_18026A8A0, ecx
 * 0000000180055912: jle     loc_180055A05
 * 0000000180055918: lea     rcx, dword_18026A8A0
 * 000000018005591F: call    _Init_thread_header
 * 0000000180055924: cmp     cs:dword_18026A8A0, r14d
 * 000000018005592B: jnz     loc_180055A05
 * 0000000180055931: mov     r8d, r13d
 * 0000000180055934: lea     rdx, unk_18019DC90
 * 000000018005593B: lea     rcx, [rbp+9E20h+var_7158]
 * 0000000180055942: call    sub_1800456CC
 * 0000000180055947: movups  xmm0, xmmword ptr [rax]
 * 000000018005594A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055950: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055956: mov     [rsp+9F20h+var_9F00], al
 * 000000018005595A: mov     r9d, esi
 * 000000018005595D: mov     r8d, esi
 * 0000000180055960: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055965: lea     rcx, [rbp+9E20h+var_248]
 * 000000018005596C: call    sub_1800456B8
 * 0000000180055971: movups  xmm0, xmmword ptr [rax]
 * 0000000180055974: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055979: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005597D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055982: call    sub_1800456E0
 * 0000000180055987: mov     r8, rax
 * 000000018005598A: mov     r9d, r12d
 * 000000018005598D: mov     edx, 1BAh
 * 0000000180055992: lea     rcx, [rbp+9E20h+var_CA8]; Src
 * 0000000180055999: call    sub_1800D45C8
 * 000000018005599E: nop
 * 000000018005599F: mov     r8, rax
 * 00000001800559A2: lea     rdx, aStandardshader_266; "StandardShader/ShaderModel40/"
 * 00000001800559A9: lea     rcx, [rbp+9E20h+var_CC8]
 * 00000001800559B0: call    sub_1800454BC
 * 00000001800559B5: nop
 * 00000001800559B6: lea     r8, aVertex_123; "/Vertex"
 * 00000001800559BD: mov     rdx, rax
 * 00000001800559C0: lea     rcx, [rbp+9E20h+var_CE8]
 * 00000001800559C7: call    sub_18002C088
 * 00000001800559CC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800559D1: mov     rcx, rax
 * 00000001800559D4: call    sub_1800D46B4
 * 00000001800559D9: mov     cs:byte_18026A89C, al
 * 00000001800559DF: lea     rcx, [rbp+9E20h+var_CC8]; void *
 * 00000001800559E6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800559EB: nop
 * 00000001800559EC: lea     rcx, [rbp+9E20h+var_CA8]; void *
 * 00000001800559F3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800559F8: nop
 * 00000001800559F9: lea     rcx, dword_18026A8A0
 * 0000000180055A00: call    _Init_thread_footer
 * 0000000180055A05: mov     rax, [rdi+rbx*8]
 * 0000000180055A09: mov     ecx, [r15+rax]
 * 0000000180055A0D: cmp     cs:dword_18026A8A8, ecx
 * 0000000180055A13: jle     loc_180055B09
 * 0000000180055A19: lea     rcx, dword_18026A8A8
 * 0000000180055A20: call    _Init_thread_header
 * 0000000180055A25: cmp     cs:dword_18026A8A8, r14d
 * 0000000180055A2C: jnz     loc_180055B09
 * 0000000180055A32: mov     r8d, 1050h
 * 0000000180055A38: lea     rdx, unk_18019CC40
 * 0000000180055A3F: lea     rcx, [rbp+9E20h+var_7148]
 * 0000000180055A46: call    sub_1800456CC
 * 0000000180055A4B: movups  xmm0, xmmword ptr [rax]
 * 0000000180055A4E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055A54: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055A5A: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055A5E: mov     r9d, esi
 * 0000000180055A61: mov     r8d, esi
 * 0000000180055A64: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055A69: lea     rcx, [rbp+9E20h+var_228]
 * 0000000180055A70: call    sub_1800456B8
 * 0000000180055A75: movups  xmm0, xmmword ptr [rax]
 * 0000000180055A78: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055A7D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055A81: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055A86: call    sub_1800456E0
 * 0000000180055A8B: mov     r8, rax
 * 0000000180055A8E: mov     r9d, r12d
 * 0000000180055A91: mov     edx, 1C0h
 * 0000000180055A96: lea     rcx, [rbp+9E20h+var_C48]; Src
 * 0000000180055A9D: call    sub_1800D45C8
 * 0000000180055AA2: nop
 * 0000000180055AA3: mov     r8, rax
 * 0000000180055AA6: lea     rdx, aStandardshader_267; "StandardShader/ShaderModel40/"
 * 0000000180055AAD: lea     rcx, [rbp+9E20h+var_C68]
 * 0000000180055AB4: call    sub_1800454BC
 * 0000000180055AB9: nop
 * 0000000180055ABA: lea     r8, aVertex_124; "/Vertex"
 * 0000000180055AC1: mov     rdx, rax
 * 0000000180055AC4: lea     rcx, [rbp+9E20h+var_C88]
 * 0000000180055ACB: call    sub_18002C088
 * 0000000180055AD0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055AD5: mov     rcx, rax
 * 0000000180055AD8: call    sub_1800D46B4
 * 0000000180055ADD: mov     cs:byte_18026A8A4, al
 * 0000000180055AE3: lea     rcx, [rbp+9E20h+var_C68]; void *
 * 0000000180055AEA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055AEF: nop
 * 0000000180055AF0: lea     rcx, [rbp+9E20h+var_C48]; void *
 * 0000000180055AF7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055AFC: nop
 * 0000000180055AFD: lea     rcx, dword_18026A8A8
 * 0000000180055B04: call    _Init_thread_footer
 * 0000000180055B09: mov     rax, [rdi+rbx*8]
 * 0000000180055B0D: mov     ecx, [r15+rax]
 * 0000000180055B11: cmp     cs:dword_18026A8B0, ecx
 * 0000000180055B17: jle     loc_180055C0D
 * 0000000180055B1D: lea     rcx, dword_18026A8B0
 * 0000000180055B24: call    _Init_thread_header
 * 0000000180055B29: cmp     cs:dword_18026A8B0, r14d
 * 0000000180055B30: jnz     loc_180055C0D
 * 0000000180055B36: mov     r8d, 1050h
 * 0000000180055B3C: lea     rdx, unk_18019CC40
 * 0000000180055B43: lea     rcx, [rbp+9E20h+var_7138]
 * 0000000180055B4A: call    sub_1800456CC
 * 0000000180055B4F: movups  xmm0, xmmword ptr [rax]
 * 0000000180055B52: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055B58: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055B5E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055B62: mov     r9d, esi
 * 0000000180055B65: mov     r8d, esi
 * 0000000180055B68: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055B6D: lea     rcx, [rbp+9E20h+var_208]
 * 0000000180055B74: call    sub_1800456B8
 * 0000000180055B79: movups  xmm0, xmmword ptr [rax]
 * 0000000180055B7C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055B81: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055B85: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055B8A: call    sub_1800456E0
 * 0000000180055B8F: mov     r8, rax
 * 0000000180055B92: mov     r9d, r12d
 * 0000000180055B95: mov     edx, 1C2h
 * 0000000180055B9A: lea     rcx, [rbp+9E20h+var_BE8]; Src
 * 0000000180055BA1: call    sub_1800D45C8
 * 0000000180055BA6: nop
 * 0000000180055BA7: mov     r8, rax
 * 0000000180055BAA: lea     rdx, aStandardshader_268; "StandardShader/ShaderModel40/"
 * 0000000180055BB1: lea     rcx, [rbp+9E20h+var_C08]
 * 0000000180055BB8: call    sub_1800454BC
 * 0000000180055BBD: nop
 * 0000000180055BBE: lea     r8, aVertex_125; "/Vertex"
 * 0000000180055BC5: mov     rdx, rax
 * 0000000180055BC8: lea     rcx, [rbp+9E20h+var_C28]
 * 0000000180055BCF: call    sub_18002C088
 * 0000000180055BD4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055BD9: mov     rcx, rax
 * 0000000180055BDC: call    sub_1800D46B4
 * 0000000180055BE1: mov     cs:byte_18026A8AC, al
 * 0000000180055BE7: lea     rcx, [rbp+9E20h+var_C08]; void *
 * 0000000180055BEE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055BF3: nop
 * 0000000180055BF4: lea     rcx, [rbp+9E20h+var_BE8]; void *
 * 0000000180055BFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055C00: nop
 * 0000000180055C01: lea     rcx, dword_18026A8B0
 * 0000000180055C08: call    _Init_thread_footer
 * 0000000180055C0D: mov     rax, [rdi+rbx*8]
 * 0000000180055C11: mov     ecx, [r15+rax]
 * 0000000180055C15: cmp     cs:dword_18026A8B8, ecx
 * 0000000180055C1B: jle     loc_180055D11
 * 0000000180055C21: lea     rcx, dword_18026A8B8
 * 0000000180055C28: call    _Init_thread_header
 * 0000000180055C2D: cmp     cs:dword_18026A8B8, r14d
 * 0000000180055C34: jnz     loc_180055D11
 * 0000000180055C3A: mov     r8d, 1050h
 * 0000000180055C40: lea     rdx, unk_18019CC40
 * 0000000180055C47: lea     rcx, [rbp+9E20h+var_7128]
 * 0000000180055C4E: call    sub_1800456CC
 * 0000000180055C53: movups  xmm0, xmmword ptr [rax]
 * 0000000180055C56: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055C5C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055C62: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055C66: mov     r9d, esi
 * 0000000180055C69: mov     r8d, esi
 * 0000000180055C6C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055C71: lea     rcx, [rbp+9E20h+var_1E8]
 * 0000000180055C78: call    sub_1800456B8
 * 0000000180055C7D: movups  xmm0, xmmword ptr [rax]
 * 0000000180055C80: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055C85: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055C89: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055C8E: call    sub_1800456E0
 * 0000000180055C93: mov     r8, rax
 * 0000000180055C96: mov     r9d, r12d
 * 0000000180055C99: mov     edx, 1C8h
 * 0000000180055C9E: lea     rcx, [rbp+9E20h+var_B88]; Src
 * 0000000180055CA5: call    sub_1800D45C8
 * 0000000180055CAA: nop
 * 0000000180055CAB: mov     r8, rax
 * 0000000180055CAE: lea     rdx, aStandardshader_269; "StandardShader/ShaderModel40/"
 * 0000000180055CB5: lea     rcx, [rbp+9E20h+var_BA8]
 * 0000000180055CBC: call    sub_1800454BC
 * 0000000180055CC1: nop
 * 0000000180055CC2: lea     r8, aVertex_126; "/Vertex"
 * 0000000180055CC9: mov     rdx, rax
 * 0000000180055CCC: lea     rcx, [rbp+9E20h+var_BC8]
 * 0000000180055CD3: call    sub_18002C088
 * 0000000180055CD8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055CDD: mov     rcx, rax
 * 0000000180055CE0: call    sub_1800D46B4
 * 0000000180055CE5: mov     cs:byte_18026A8B4, al
 * 0000000180055CEB: lea     rcx, [rbp+9E20h+var_BA8]; void *
 * 0000000180055CF2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055CF7: nop
 * 0000000180055CF8: lea     rcx, [rbp+9E20h+var_B88]; void *
 * 0000000180055CFF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055D04: nop
 * 0000000180055D05: lea     rcx, dword_18026A8B8
 * 0000000180055D0C: call    _Init_thread_footer
 * 0000000180055D11: mov     rax, [rdi+rbx*8]
 * 0000000180055D15: mov     ecx, [r15+rax]
 * 0000000180055D19: cmp     cs:dword_18026A8C0, ecx
 * 0000000180055D1F: jle     loc_180055E15
 * 0000000180055D25: lea     rcx, dword_18026A8C0
 * 0000000180055D2C: call    _Init_thread_header
 * 0000000180055D31: cmp     cs:dword_18026A8C0, r14d
 * 0000000180055D38: jnz     loc_180055E15
 * 0000000180055D3E: mov     r8d, 1050h
 * 0000000180055D44: lea     rdx, unk_18019CC40
 * 0000000180055D4B: lea     rcx, [rbp+9E20h+var_7118]
 * 0000000180055D52: call    sub_1800456CC
 * 0000000180055D57: movups  xmm0, xmmword ptr [rax]
 * 0000000180055D5A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055D60: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055D66: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055D6A: mov     r9d, esi
 * 0000000180055D6D: mov     r8d, esi
 * 0000000180055D70: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055D75: lea     rcx, [rbp+9E20h+var_1C8]
 * 0000000180055D7C: call    sub_1800456B8
 * 0000000180055D81: movups  xmm0, xmmword ptr [rax]
 * 0000000180055D84: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055D89: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055D8D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055D92: call    sub_1800456E0
 * 0000000180055D97: mov     r8, rax
 * 0000000180055D9A: mov     r9d, r12d
 * 0000000180055D9D: mov     edx, 1CAh
 * 0000000180055DA2: lea     rcx, [rbp+9E20h+var_B28]; Src
 * 0000000180055DA9: call    sub_1800D45C8
 * 0000000180055DAE: nop
 * 0000000180055DAF: mov     r8, rax
 * 0000000180055DB2: lea     rdx, aStandardshader_270; "StandardShader/ShaderModel40/"
 * 0000000180055DB9: lea     rcx, [rbp+9E20h+var_B48]
 * 0000000180055DC0: call    sub_1800454BC
 * 0000000180055DC5: nop
 * 0000000180055DC6: lea     r8, aVertex_127; "/Vertex"
 * 0000000180055DCD: mov     rdx, rax
 * 0000000180055DD0: lea     rcx, [rbp+9E20h+var_B68]
 * 0000000180055DD7: call    sub_18002C088
 * 0000000180055DDC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055DE1: mov     rcx, rax
 * 0000000180055DE4: call    sub_1800D46B4
 * 0000000180055DE9: mov     cs:byte_18026A8BC, al
 * 0000000180055DEF: lea     rcx, [rbp+9E20h+var_B48]; void *
 * 0000000180055DF6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055DFB: nop
 * 0000000180055DFC: lea     rcx, [rbp+9E20h+var_B28]; void *
 * 0000000180055E03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055E08: nop
 * 0000000180055E09: lea     rcx, dword_18026A8C0
 * 0000000180055E10: call    _Init_thread_footer
 * 0000000180055E15: mov     rax, [rdi+rbx*8]
 * 0000000180055E19: mov     ecx, [r15+rax]
 * 0000000180055E1D: cmp     cs:dword_18026A8C8, ecx
 * 0000000180055E23: jle     loc_180055F19
 * 0000000180055E29: lea     rcx, dword_18026A8C8
 * 0000000180055E30: call    _Init_thread_header
 * 0000000180055E35: cmp     cs:dword_18026A8C8, r14d
 * 0000000180055E3C: jnz     loc_180055F19
 * 0000000180055E42: mov     r8d, 1050h
 * 0000000180055E48: lea     rdx, unk_18019CC40
 * 0000000180055E4F: lea     rcx, [rbp+9E20h+var_7108]
 * 0000000180055E56: call    sub_1800456CC
 * 0000000180055E5B: movups  xmm0, xmmword ptr [rax]
 * 0000000180055E5E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055E64: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055E6A: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055E6E: mov     r9d, esi
 * 0000000180055E71: mov     r8d, esi
 * 0000000180055E74: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055E79: lea     rcx, [rbp+9E20h+var_1A8]
 * 0000000180055E80: call    sub_1800456B8
 * 0000000180055E85: movups  xmm0, xmmword ptr [rax]
 * 0000000180055E88: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055E8D: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055E91: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055E96: call    sub_1800456E0
 * 0000000180055E9B: mov     r8, rax
 * 0000000180055E9E: mov     r9d, r12d
 * 0000000180055EA1: mov     edx, 1D0h
 * 0000000180055EA6: lea     rcx, [rbp+9E20h+var_AC8]; Src
 * 0000000180055EAD: call    sub_1800D45C8
 * 0000000180055EB2: nop
 * 0000000180055EB3: mov     r8, rax
 * 0000000180055EB6: lea     rdx, aStandardshader_271; "StandardShader/ShaderModel40/"
 * 0000000180055EBD: lea     rcx, [rbp+9E20h+var_AE8]
 * 0000000180055EC4: call    sub_1800454BC
 * 0000000180055EC9: nop
 * 0000000180055ECA: lea     r8, aVertex_128; "/Vertex"
 * 0000000180055ED1: mov     rdx, rax
 * 0000000180055ED4: lea     rcx, [rbp+9E20h+var_B08]
 * 0000000180055EDB: call    sub_18002C088
 * 0000000180055EE0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055EE5: mov     rcx, rax
 * 0000000180055EE8: call    sub_1800D46B4
 * 0000000180055EED: mov     cs:byte_18026A8C4, al
 * 0000000180055EF3: lea     rcx, [rbp+9E20h+var_AE8]; void *
 * 0000000180055EFA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055EFF: nop
 * 0000000180055F00: lea     rcx, [rbp+9E20h+var_AC8]; void *
 * 0000000180055F07: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055F0C: nop
 * 0000000180055F0D: lea     rcx, dword_18026A8C8
 * 0000000180055F14: call    _Init_thread_footer
 * 0000000180055F19: mov     rax, [rdi+rbx*8]
 * 0000000180055F1D: mov     ecx, [r15+rax]
 * 0000000180055F21: cmp     cs:dword_18026A8D0, ecx
 * 0000000180055F27: jle     loc_18005601D
 * 0000000180055F2D: lea     rcx, dword_18026A8D0
 * 0000000180055F34: call    _Init_thread_header
 * 0000000180055F39: cmp     cs:dword_18026A8D0, r14d
 * 0000000180055F40: jnz     loc_18005601D
 * 0000000180055F46: mov     r8d, 1050h
 * 0000000180055F4C: lea     rdx, unk_18019CC40
 * 0000000180055F53: lea     rcx, [rbp+9E20h+var_70F8]
 * 0000000180055F5A: call    sub_1800456CC
 * 0000000180055F5F: movups  xmm0, xmmword ptr [rax]
 * 0000000180055F62: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055F68: mov     al, [rbp+9E20h+arg_0]
 * 0000000180055F6E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180055F72: mov     r9d, esi
 * 0000000180055F75: mov     r8d, esi
 * 0000000180055F78: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055F7D: lea     rcx, [rbp+9E20h+var_188]
 * 0000000180055F84: call    sub_1800456B8
 * 0000000180055F89: movups  xmm0, xmmword ptr [rax]
 * 0000000180055F8C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180055F91: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180055F95: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 0000000180055F9A: call    sub_1800456E0
 * 0000000180055F9F: mov     r8, rax
 * 0000000180055FA2: mov     r9d, r12d
 * 0000000180055FA5: mov     edx, 1D2h
 * 0000000180055FAA: lea     rcx, [rbp+9E20h+var_A68]; Src
 * 0000000180055FB1: call    sub_1800D45C8
 * 0000000180055FB6: nop
 * 0000000180055FB7: mov     r8, rax
 * 0000000180055FBA: lea     rdx, aStandardshader_272; "StandardShader/ShaderModel40/"
 * 0000000180055FC1: lea     rcx, [rbp+9E20h+var_A88]
 * 0000000180055FC8: call    sub_1800454BC
 * 0000000180055FCD: nop
 * 0000000180055FCE: lea     r8, aVertex_129; "/Vertex"
 * 0000000180055FD5: mov     rdx, rax
 * 0000000180055FD8: lea     rcx, [rbp+9E20h+var_AA8]
 * 0000000180055FDF: call    sub_18002C088
 * 0000000180055FE4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180055FE9: mov     rcx, rax
 * 0000000180055FEC: call    sub_1800D46B4
 * 0000000180055FF1: mov     cs:byte_18026A8CC, al
 * 0000000180055FF7: lea     rcx, [rbp+9E20h+var_A88]; void *
 * 0000000180055FFE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056003: nop
 * 0000000180056004: lea     rcx, [rbp+9E20h+var_A68]; void *
 * 000000018005600B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056010: nop
 * 0000000180056011: lea     rcx, dword_18026A8D0
 * 0000000180056018: call    _Init_thread_footer
 * 000000018005601D: mov     rax, [rdi+rbx*8]
 * 0000000180056021: mov     ecx, [r15+rax]
 * 0000000180056025: cmp     cs:dword_18026A8D8, ecx
 * 000000018005602B: jle     loc_180056121
 * 0000000180056031: lea     rcx, dword_18026A8D8
 * 0000000180056038: call    _Init_thread_header
 * 000000018005603D: cmp     cs:dword_18026A8D8, r14d
 * 0000000180056044: jnz     loc_180056121
 * 000000018005604A: mov     r8d, 1050h
 * 0000000180056050: lea     rdx, unk_18019CC40
 * 0000000180056057: lea     rcx, [rbp+9E20h+var_70E8]
 * 000000018005605E: call    sub_1800456CC
 * 0000000180056063: movups  xmm0, xmmword ptr [rax]
 * 0000000180056066: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005606C: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056072: mov     [rsp+9F20h+var_9F00], al
 * 0000000180056076: mov     r9d, esi
 * 0000000180056079: mov     r8d, esi
 * 000000018005607C: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056081: lea     rcx, [rbp+9E20h+var_168]
 * 0000000180056088: call    sub_1800456B8
 * 000000018005608D: movups  xmm0, xmmword ptr [rax]
 * 0000000180056090: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056095: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180056099: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 000000018005609E: call    sub_1800456E0
 * 00000001800560A3: mov     r8, rax
 * 00000001800560A6: mov     r9d, r12d
 * 00000001800560A9: mov     edx, 1D8h
 * 00000001800560AE: lea     rcx, [rbp+9E20h+var_A08]; Src
 * 00000001800560B5: call    sub_1800D45C8
 * 00000001800560BA: nop
 * 00000001800560BB: mov     r8, rax
 * 00000001800560BE: lea     rdx, aStandardshader_273; "StandardShader/ShaderModel40/"
 * 00000001800560C5: lea     rcx, [rbp+9E20h+var_A28]
 * 00000001800560CC: call    sub_1800454BC
 * 00000001800560D1: nop
 * 00000001800560D2: lea     r8, aVertex_130; "/Vertex"
 * 00000001800560D9: mov     rdx, rax
 * 00000001800560DC: lea     rcx, [rbp+9E20h+var_A48]
 * 00000001800560E3: call    sub_18002C088
 * 00000001800560E8: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800560ED: mov     rcx, rax
 * 00000001800560F0: call    sub_1800D46B4
 * 00000001800560F5: mov     cs:byte_18026A8D4, al
 * 00000001800560FB: lea     rcx, [rbp+9E20h+var_A28]; void *
 * 0000000180056102: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056107: nop
 * 0000000180056108: lea     rcx, [rbp+9E20h+var_A08]; void *
 * 000000018005610F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056114: nop
 * 0000000180056115: lea     rcx, dword_18026A8D8
 * 000000018005611C: call    _Init_thread_footer
 * 0000000180056121: mov     rax, [rdi+rbx*8]
 * 0000000180056125: mov     ecx, [r15+rax]
 * 0000000180056129: cmp     cs:dword_18026A8E0, ecx
 * 000000018005612F: jle     loc_180056225
 * 0000000180056135: lea     rcx, dword_18026A8E0
 * 000000018005613C: call    _Init_thread_header
 * 0000000180056141: cmp     cs:dword_18026A8E0, r14d
 * 0000000180056148: jnz     loc_180056225
 * 000000018005614E: mov     r8d, 1050h
 * 0000000180056154: lea     rdx, unk_18019CC40
 * 000000018005615B: lea     rcx, [rbp+9E20h+var_70D8]
 * 0000000180056162: call    sub_1800456CC
 * 0000000180056167: movups  xmm0, xmmword ptr [rax]
 * 000000018005616A: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056170: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056176: mov     [rsp+9F20h+var_9F00], al
 * 000000018005617A: mov     r9d, esi
 * 000000018005617D: mov     r8d, esi
 * 0000000180056180: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056185: lea     rcx, [rbp+9E20h+var_148]
 * 000000018005618C: call    sub_1800456B8
 * 0000000180056191: movups  xmm0, xmmword ptr [rax]
 * 0000000180056194: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056199: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005619D: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800561A2: call    sub_1800456E0
 * 00000001800561A7: mov     r8, rax
 * 00000001800561AA: mov     r9d, r12d
 * 00000001800561AD: mov     edx, 1DAh
 * 00000001800561B2: lea     rcx, [rbp+9E20h+var_9A8]; Src
 * 00000001800561B9: call    sub_1800D45C8
 * 00000001800561BE: nop
 * 00000001800561BF: mov     r8, rax
 * 00000001800561C2: lea     rdx, aStandardshader_274; "StandardShader/ShaderModel40/"
 * 00000001800561C9: lea     rcx, [rbp+9E20h+var_9C8]
 * 00000001800561D0: call    sub_1800454BC
 * 00000001800561D5: nop
 * 00000001800561D6: lea     r8, aVertex_131; "/Vertex"
 * 00000001800561DD: mov     rdx, rax
 * 00000001800561E0: lea     rcx, [rbp+9E20h+var_9E8]
 * 00000001800561E7: call    sub_18002C088
 * 00000001800561EC: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800561F1: mov     rcx, rax
 * 00000001800561F4: call    sub_1800D46B4
 * 00000001800561F9: mov     cs:byte_18026A8DC, al
 * 00000001800561FF: lea     rcx, [rbp+9E20h+var_9C8]; void *
 * 0000000180056206: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005620B: nop
 * 000000018005620C: lea     rcx, [rbp+9E20h+var_9A8]; void *
 * 0000000180056213: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056218: nop
 * 0000000180056219: lea     rcx, dword_18026A8E0
 * 0000000180056220: call    _Init_thread_footer
 * 0000000180056225: mov     rax, [rdi+rbx*8]
 * 0000000180056229: mov     ecx, [r15+rax]
 * 000000018005622D: cmp     cs:dword_18026A8E8, ecx
 * 0000000180056233: jle     loc_180056326
 * 0000000180056239: lea     rcx, dword_18026A8E8
 * 0000000180056240: call    _Init_thread_header
 * 0000000180056245: cmp     cs:dword_18026A8E8, r14d
 * 000000018005624C: jnz     loc_180056326
 * 0000000180056252: mov     r8d, r13d
 * 0000000180056255: lea     rdx, unk_18019DC90
 * 000000018005625C: lea     rcx, [rbp+9E20h+var_70C8]
 * 0000000180056263: call    sub_1800456CC
 * 0000000180056268: movups  xmm0, xmmword ptr [rax]
 * 000000018005626B: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056271: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056277: mov     [rsp+9F20h+var_9F00], al
 * 000000018005627B: mov     r9d, esi
 * 000000018005627E: mov     r8d, esi
 * 0000000180056281: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056286: lea     rcx, [rbp+9E20h+var_128]
 * 000000018005628D: call    sub_1800456B8
 * 0000000180056292: movups  xmm0, xmmword ptr [rax]
 * 0000000180056295: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005629A: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005629E: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800562A3: call    sub_1800456E0
 * 00000001800562A8: mov     r8, rax
 * 00000001800562AB: mov     r9d, r12d
 * 00000001800562AE: mov     edx, 1E0h
 * 00000001800562B3: lea     rcx, [rbp+9E20h+var_948]; Src
 * 00000001800562BA: call    sub_1800D45C8
 * 00000001800562BF: nop
 * 00000001800562C0: mov     r8, rax
 * 00000001800562C3: lea     rdx, aStandardshader_275; "StandardShader/ShaderModel40/"
 * 00000001800562CA: lea     rcx, [rbp+9E20h+var_968]
 * 00000001800562D1: call    sub_1800454BC
 * 00000001800562D6: nop
 * 00000001800562D7: lea     r8, aVertex_132; "/Vertex"
 * 00000001800562DE: mov     rdx, rax
 * 00000001800562E1: lea     rcx, [rbp+9E20h+var_988]
 * 00000001800562E8: call    sub_18002C088
 * 00000001800562ED: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800562F2: mov     rcx, rax
 * 00000001800562F5: call    sub_1800D46B4
 * 00000001800562FA: mov     cs:byte_18026A8E4, al
 * 0000000180056300: lea     rcx, [rbp+9E20h+var_968]; void *
 * 0000000180056307: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005630C: nop
 * 000000018005630D: lea     rcx, [rbp+9E20h+var_948]; void *
 * 0000000180056314: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056319: nop
 * 000000018005631A: lea     rcx, dword_18026A8E8
 * 0000000180056321: call    _Init_thread_footer
 * 0000000180056326: mov     rax, [rdi+rbx*8]
 * 000000018005632A: mov     ecx, [r15+rax]
 * 000000018005632E: cmp     cs:dword_18026A8F0, ecx
 * 0000000180056334: jle     loc_180056427
 * 000000018005633A: lea     rcx, dword_18026A8F0
 * 0000000180056341: call    _Init_thread_header
 * 0000000180056346: cmp     cs:dword_18026A8F0, r14d
 * 000000018005634D: jnz     loc_180056427
 * 0000000180056353: mov     r8d, r13d
 * 0000000180056356: lea     rdx, unk_18019DC90
 * 000000018005635D: lea     rcx, [rbp+9E20h+var_70B8]
 * 0000000180056364: call    sub_1800456CC
 * 0000000180056369: movups  xmm0, xmmword ptr [rax]
 * 000000018005636C: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056372: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056378: mov     [rsp+9F20h+var_9F00], al
 * 000000018005637C: mov     r9d, esi
 * 000000018005637F: mov     r8d, esi
 * 0000000180056382: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056387: lea     rcx, [rbp+9E20h+var_108]
 * 000000018005638E: call    sub_1800456B8
 * 0000000180056393: movups  xmm0, xmmword ptr [rax]
 * 0000000180056396: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005639B: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005639F: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800563A4: call    sub_1800456E0
 * 00000001800563A9: mov     r8, rax
 * 00000001800563AC: mov     r9d, r12d
 * 00000001800563AF: mov     edx, 1E2h
 * 00000001800563B4: lea     rcx, [rbp+9E20h+var_8E8]; Src
 * 00000001800563BB: call    sub_1800D45C8
 * 00000001800563C0: nop
 * 00000001800563C1: mov     r8, rax
 * 00000001800563C4: lea     rdx, aStandardshader_276; "StandardShader/ShaderModel40/"
 * 00000001800563CB: lea     rcx, [rbp+9E20h+var_908]
 * 00000001800563D2: call    sub_1800454BC
 * 00000001800563D7: nop
 * 00000001800563D8: lea     r8, aVertex_133; "/Vertex"
 * 00000001800563DF: mov     rdx, rax
 * 00000001800563E2: lea     rcx, [rbp+9E20h+var_928]
 * 00000001800563E9: call    sub_18002C088
 * 00000001800563EE: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800563F3: mov     rcx, rax
 * 00000001800563F6: call    sub_1800D46B4
 * 00000001800563FB: mov     cs:byte_18026A8EC, al
 * 0000000180056401: lea     rcx, [rbp+9E20h+var_908]; void *
 * 0000000180056408: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005640D: nop
 * 000000018005640E: lea     rcx, [rbp+9E20h+var_8E8]; void *
 * 0000000180056415: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005641A: nop
 * 000000018005641B: lea     rcx, dword_18026A8F0
 * 0000000180056422: call    _Init_thread_footer
 * 0000000180056427: mov     rax, [rdi+rbx*8]
 * 000000018005642B: mov     ecx, [r15+rax]
 * 000000018005642F: cmp     cs:dword_18026A8F8, ecx
 * 0000000180056435: jle     loc_180056528
 * 000000018005643B: lea     rcx, dword_18026A8F8
 * 0000000180056442: call    _Init_thread_header
 * 0000000180056447: cmp     cs:dword_18026A8F8, r14d
 * 000000018005644E: jnz     loc_180056528
 * 0000000180056454: mov     r8d, r13d
 * 0000000180056457: lea     rdx, unk_18019DC90
 * 000000018005645E: lea     rcx, [rbp+9E20h+var_70A8]
 * 0000000180056465: call    sub_1800456CC
 * 000000018005646A: movups  xmm0, xmmword ptr [rax]
 * 000000018005646D: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056473: mov     al, [rbp+9E20h+arg_0]
 * 0000000180056479: mov     [rsp+9F20h+var_9F00], al
 * 000000018005647D: mov     r9d, esi
 * 0000000180056480: mov     r8d, esi
 * 0000000180056483: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056488: lea     rcx, [rbp+9E20h+var_E8]
 * 000000018005648F: call    sub_1800456B8
 * 0000000180056494: movups  xmm0, xmmword ptr [rax]
 * 0000000180056497: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005649C: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800564A0: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800564A5: call    sub_1800456E0
 * 00000001800564AA: mov     r8, rax
 * 00000001800564AD: mov     r9d, r12d
 * 00000001800564B0: mov     edx, 1E8h
 * 00000001800564B5: lea     rcx, [rbp+9E20h+var_888]; Src
 * 00000001800564BC: call    sub_1800D45C8
 * 00000001800564C1: nop
 * 00000001800564C2: mov     r8, rax
 * 00000001800564C5: lea     rdx, aStandardshader_277; "StandardShader/ShaderModel40/"
 * 00000001800564CC: lea     rcx, [rbp+9E20h+var_8A8]
 * 00000001800564D3: call    sub_1800454BC
 * 00000001800564D8: nop
 * 00000001800564D9: lea     r8, aVertex_134; "/Vertex"
 * 00000001800564E0: mov     rdx, rax
 * 00000001800564E3: lea     rcx, [rbp+9E20h+var_8C8]
 * 00000001800564EA: call    sub_18002C088
 * 00000001800564EF: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800564F4: mov     rcx, rax
 * 00000001800564F7: call    sub_1800D46B4
 * 00000001800564FC: mov     cs:byte_18026A8F4, al
 * 0000000180056502: lea     rcx, [rbp+9E20h+var_8A8]; void *
 * 0000000180056509: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005650E: nop
 * 000000018005650F: lea     rcx, [rbp+9E20h+var_888]; void *
 * 0000000180056516: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005651B: nop
 * 000000018005651C: lea     rcx, dword_18026A8F8
 * 0000000180056523: call    _Init_thread_footer
 * 0000000180056528: mov     rax, [rdi+rbx*8]
 * 000000018005652C: mov     ecx, [r15+rax]
 * 0000000180056530: cmp     cs:dword_18026A900, ecx
 * 0000000180056536: jle     loc_180056629
 * 000000018005653C: lea     rcx, dword_18026A900
 * 0000000180056543: call    _Init_thread_header
 * 0000000180056548: cmp     cs:dword_18026A900, r14d
 * 000000018005654F: jnz     loc_180056629
 * 0000000180056555: mov     r8d, r13d
 * 0000000180056558: lea     rdx, unk_18019DC90
 * 000000018005655F: lea     rcx, [rbp+9E20h+var_7098]
 * 0000000180056566: call    sub_1800456CC
 * 000000018005656B: movups  xmm0, xmmword ptr [rax]
 * 000000018005656E: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056574: mov     al, [rbp+9E20h+arg_0]
 * 000000018005657A: mov     [rsp+9F20h+var_9F00], al
 * 000000018005657E: mov     r9d, esi
 * 0000000180056581: mov     r8d, esi
 * 0000000180056584: lea     rdx, [rsp+9F20h+var_9EF0]
 * 0000000180056589: lea     rcx, [rbp+9E20h+var_C8]
 * 0000000180056590: call    sub_1800456B8
 * 0000000180056595: movups  xmm0, xmmword ptr [rax]
 * 0000000180056598: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005659D: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800565A1: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800565A6: call    sub_1800456E0
 * 00000001800565AB: mov     r8, rax
 * 00000001800565AE: mov     r9d, r12d
 * 00000001800565B1: mov     edx, 1EAh
 * 00000001800565B6: lea     rcx, [rbp+9E20h+var_828]; Src
 * 00000001800565BD: call    sub_1800D45C8
 * 00000001800565C2: nop
 * 00000001800565C3: mov     r8, rax
 * 00000001800565C6: lea     rdx, aStandardshader_278; "StandardShader/ShaderModel40/"
 * 00000001800565CD: lea     rcx, [rbp+9E20h+var_848]
 * 00000001800565D4: call    sub_1800454BC
 * 00000001800565D9: nop
 * 00000001800565DA: lea     r8, aVertex_135; "/Vertex"
 * 00000001800565E1: mov     rdx, rax
 * 00000001800565E4: lea     rcx, [rbp+9E20h+var_868]
 * 00000001800565EB: call    sub_18002C088
 * 00000001800565F0: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800565F5: mov     rcx, rax
 * 00000001800565F8: call    sub_1800D46B4
 * 00000001800565FD: mov     cs:byte_18026A8FC, al
 * 0000000180056603: lea     rcx, [rbp+9E20h+var_848]; void *
 * 000000018005660A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005660F: nop
 * 0000000180056610: lea     rcx, [rbp+9E20h+var_828]; void *
 * 0000000180056617: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005661C: nop
 * 000000018005661D: lea     rcx, dword_18026A900
 * 0000000180056624: call    _Init_thread_footer
 * 0000000180056629: mov     rax, [rdi+rbx*8]
 * 000000018005662D: mov     ecx, [r15+rax]
 * 0000000180056631: cmp     cs:dword_18026A908, ecx
 * 0000000180056637: jle     loc_18005672A
 * 000000018005663D: lea     rcx, dword_18026A908
 * 0000000180056644: call    _Init_thread_header
 * 0000000180056649: cmp     cs:dword_18026A908, r14d
 * 0000000180056650: jnz     loc_18005672A
 * 0000000180056656: mov     r8d, r13d
 * 0000000180056659: lea     rdx, unk_18019DC90
 * 0000000180056660: lea     rcx, [rbp+9E20h+var_7088]
 * 0000000180056667: call    sub_1800456CC
 * 000000018005666C: movups  xmm0, xmmword ptr [rax]
 * 000000018005666F: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056675: mov     al, [rbp+9E20h+arg_0]
 * 000000018005667B: mov     [rsp+9F20h+var_9F00], al
 * 000000018005667F: mov     r9d, esi
 * 0000000180056682: mov     r8d, esi
 * 0000000180056685: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005668A: lea     rcx, [rbp+9E20h+var_A8]
 * 0000000180056691: call    sub_1800456B8
 * 0000000180056696: movups  xmm0, xmmword ptr [rax]
 * 0000000180056699: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005669E: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800566A2: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800566A7: call    sub_1800456E0
 * 00000001800566AC: mov     r8, rax
 * 00000001800566AF: mov     r9d, r12d
 * 00000001800566B2: mov     edx, 1F0h
 * 00000001800566B7: lea     rcx, [rbp+9E20h+var_7C8]; Src
 * 00000001800566BE: call    sub_1800D45C8
 * 00000001800566C3: nop
 * 00000001800566C4: mov     r8, rax
 * 00000001800566C7: lea     rdx, aStandardshader_279; "StandardShader/ShaderModel40/"
 * 00000001800566CE: lea     rcx, [rbp+9E20h+var_7E8]
 * 00000001800566D5: call    sub_1800454BC
 * 00000001800566DA: nop
 * 00000001800566DB: lea     r8, aVertex_136; "/Vertex"
 * 00000001800566E2: mov     rdx, rax
 * 00000001800566E5: lea     rcx, [rbp+9E20h+var_808]
 * 00000001800566EC: call    sub_18002C088
 * 00000001800566F1: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800566F6: mov     rcx, rax
 * 00000001800566F9: call    sub_1800D46B4
 * 00000001800566FE: mov     cs:byte_18026A904, al
 * 0000000180056704: lea     rcx, [rbp+9E20h+var_7E8]; void *
 * 000000018005670B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056710: nop
 * 0000000180056711: lea     rcx, [rbp+9E20h+var_7C8]; void *
 * 0000000180056718: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005671D: nop
 * 000000018005671E: lea     rcx, dword_18026A908
 * 0000000180056725: call    _Init_thread_footer
 * 000000018005672A: mov     rax, [rdi+rbx*8]
 * 000000018005672E: mov     ecx, [r15+rax]
 * 0000000180056732: cmp     cs:dword_18026A910, ecx
 * 0000000180056738: jle     loc_18005682B
 * 000000018005673E: lea     rcx, dword_18026A910
 * 0000000180056745: call    _Init_thread_header
 * 000000018005674A: cmp     cs:dword_18026A910, r14d
 * 0000000180056751: jnz     loc_18005682B
 * 0000000180056757: mov     r8d, r13d
 * 000000018005675A: lea     rdx, unk_18019DC90
 * 0000000180056761: lea     rcx, [rbp+9E20h+var_7078]
 * 0000000180056768: call    sub_1800456CC
 * 000000018005676D: movups  xmm0, xmmword ptr [rax]
 * 0000000180056770: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056776: mov     al, [rbp+9E20h+arg_0]
 * 000000018005677C: mov     [rsp+9F20h+var_9F00], al
 * 0000000180056780: mov     r9d, esi
 * 0000000180056783: mov     r8d, esi
 * 0000000180056786: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005678B: lea     rcx, [rbp+9E20h+var_88]
 * 0000000180056792: call    sub_1800456B8
 * 0000000180056797: movups  xmm0, xmmword ptr [rax]
 * 000000018005679A: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 000000018005679F: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800567A3: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800567A8: call    sub_1800456E0
 * 00000001800567AD: mov     r8, rax
 * 00000001800567B0: mov     r9d, r12d
 * 00000001800567B3: mov     edx, 1F2h
 * 00000001800567B8: lea     rcx, [rbp+9E20h+var_768]; Src
 * 00000001800567BF: call    sub_1800D45C8
 * 00000001800567C4: nop
 * 00000001800567C5: mov     r8, rax
 * 00000001800567C8: lea     rdx, aStandardshader_280; "StandardShader/ShaderModel40/"
 * 00000001800567CF: lea     rcx, [rbp+9E20h+var_788]
 * 00000001800567D6: call    sub_1800454BC
 * 00000001800567DB: nop
 * 00000001800567DC: lea     r8, aVertex_137; "/Vertex"
 * 00000001800567E3: mov     rdx, rax
 * 00000001800567E6: lea     rcx, [rbp+9E20h+var_7A8]
 * 00000001800567ED: call    sub_18002C088
 * 00000001800567F2: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800567F7: mov     rcx, rax
 * 00000001800567FA: call    sub_1800D46B4
 * 00000001800567FF: mov     cs:byte_18026A90C, al
 * 0000000180056805: lea     rcx, [rbp+9E20h+var_788]; void *
 * 000000018005680C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056811: nop
 * 0000000180056812: lea     rcx, [rbp+9E20h+var_768]; void *
 * 0000000180056819: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005681E: nop
 * 000000018005681F: lea     rcx, dword_18026A910
 * 0000000180056826: call    _Init_thread_footer
 * 000000018005682B: mov     rax, [rdi+rbx*8]
 * 000000018005682F: mov     ecx, [r15+rax]
 * 0000000180056833: cmp     cs:dword_18026A918, ecx
 * 0000000180056839: jle     loc_18005692C
 * 000000018005683F: lea     rcx, dword_18026A918
 * 0000000180056846: call    _Init_thread_header
 * 000000018005684B: cmp     cs:dword_18026A918, r14d
 * 0000000180056852: jnz     loc_18005692C
 * 0000000180056858: mov     r8d, r13d
 * 000000018005685B: lea     rdx, unk_18019DC90
 * 0000000180056862: lea     rcx, [rbp+9E20h+var_7068]
 * 0000000180056869: call    sub_1800456CC
 * 000000018005686E: movups  xmm0, xmmword ptr [rax]
 * 0000000180056871: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056877: mov     al, [rbp+9E20h+arg_0]
 * 000000018005687D: mov     [rsp+9F20h+var_9F00], al
 * 0000000180056881: mov     r9d, esi
 * 0000000180056884: mov     r8d, esi
 * 0000000180056887: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005688C: lea     rcx, [rbp+9E20h+var_68]
 * 0000000180056893: call    sub_1800456B8
 * 0000000180056898: movups  xmm0, xmmword ptr [rax]
 * 000000018005689B: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800568A0: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800568A4: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800568A9: call    sub_1800456E0
 * 00000001800568AE: mov     r8, rax
 * 00000001800568B1: mov     r9d, r12d
 * 00000001800568B4: mov     edx, 1F8h
 * 00000001800568B9: lea     rcx, [rbp+9E20h+var_708]; Src
 * 00000001800568C0: call    sub_1800D45C8
 * 00000001800568C5: nop
 * 00000001800568C6: mov     r8, rax
 * 00000001800568C9: lea     rdx, aStandardshader_281; "StandardShader/ShaderModel40/"
 * 00000001800568D0: lea     rcx, [rbp+9E20h+var_728]
 * 00000001800568D7: call    sub_1800454BC
 * 00000001800568DC: nop
 * 00000001800568DD: lea     r8, aVertex_138; "/Vertex"
 * 00000001800568E4: mov     rdx, rax
 * 00000001800568E7: lea     rcx, [rbp+9E20h+var_748]
 * 00000001800568EE: call    sub_18002C088
 * 00000001800568F3: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800568F8: mov     rcx, rax
 * 00000001800568FB: call    sub_1800D46B4
 * 0000000180056900: mov     cs:byte_18026A914, al
 * 0000000180056906: lea     rcx, [rbp+9E20h+var_728]; void *
 * 000000018005690D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056912: nop
 * 0000000180056913: lea     rcx, [rbp+9E20h+var_708]; void *
 * 000000018005691A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005691F: nop
 * 0000000180056920: lea     rcx, dword_18026A918
 * 0000000180056927: call    _Init_thread_footer
 * 000000018005692C: mov     rax, [rdi+rbx*8]
 * 0000000180056930: mov     ecx, [r15+rax]
 * 0000000180056934: cmp     cs:dword_18026A920, ecx
 * 000000018005693A: jle     loc_180056A2D
 * 0000000180056940: lea     rcx, dword_18026A920
 * 0000000180056947: call    _Init_thread_header
 * 000000018005694C: cmp     cs:dword_18026A920, r14d
 * 0000000180056953: jnz     loc_180056A2D
 * 0000000180056959: mov     r8d, r13d
 * 000000018005695C: lea     rdx, unk_18019DC90
 * 0000000180056963: lea     rcx, [rbp+9E20h+var_7058]
 * 000000018005696A: call    sub_1800456CC
 * 000000018005696F: movups  xmm0, xmmword ptr [rax]
 * 0000000180056972: movdqu  [rsp+9F20h+var_9EF0], xmm0
 * 0000000180056978: mov     al, [rbp+9E20h+arg_0]
 * 000000018005697E: mov     [rsp+9F20h+var_9F00], al
 * 0000000180056982: mov     r9d, esi
 * 0000000180056985: mov     r8d, esi
 * 0000000180056988: lea     rdx, [rsp+9F20h+var_9EF0]
 * 000000018005698D: lea     rcx, [rbp+9E20h+var_48]
 * 0000000180056994: call    sub_1800456B8
 * 0000000180056999: movups  xmm0, xmmword ptr [rax]
 * 000000018005699C: movaps  [rsp+9F20h+var_9EF0], xmm0
 * 00000001800569A1: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800569A5: movaps  [rsp+9F20h+var_9EE0], xmm1
 * 00000001800569AA: call    sub_1800456E0
 * 00000001800569AF: mov     r8, rax
 * 00000001800569B2: mov     r9d, r12d
 * 00000001800569B5: mov     edx, 1FAh
 * 00000001800569BA: lea     rcx, [rbp+9E20h+var_6A8]; Src
 * 00000001800569C1: call    sub_1800D45C8
 * 00000001800569C6: nop
 * 00000001800569C7: mov     r8, rax
 * 00000001800569CA: lea     rdx, aStandardshader_282; "StandardShader/ShaderModel40/"
 * 00000001800569D1: lea     rcx, [rbp+9E20h+var_6C8]
 * 00000001800569D8: call    sub_1800454BC
 * 00000001800569DD: nop
 * 00000001800569DE: lea     r8, aVertex_139; "/Vertex"
 * 00000001800569E5: mov     rdx, rax
 * 00000001800569E8: lea     rcx, [rbp+9E20h+var_6E8]
 * 00000001800569EF: call    sub_18002C088
 * 00000001800569F4: lea     rdx, [rsp+9F20h+var_9EF0]
 * 00000001800569F9: mov     rcx, rax
 * 00000001800569FC: call    sub_1800D46B4
 * 0000000180056A01: mov     cs:byte_18026A91C, al
 * 0000000180056A07: lea     rcx, [rbp+9E20h+var_6C8]; void *
 * 0000000180056A0E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056A13: nop
 * 0000000180056A14: lea     rcx, [rbp+9E20h+var_6A8]; void *
 * 0000000180056A1B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056A20: nop
 * 0000000180056A21: lea     rcx, dword_18026A920
 * 0000000180056A28: call    _Init_thread_footer
 * 0000000180056A2D: xor     eax, eax
 * 0000000180056A2F: lea     r11, [rsp+9F20h+var_20]
 * 0000000180056A37: mov     rbx, [r11+38h]
 * 0000000180056A3B: mov     rsi, [r11+40h]
 * 0000000180056A3F: mov     rdi, [r11+48h]
 * 0000000180056A43: mov     rsp, r11
 * 0000000180056A46: pop     r15
 * 0000000180056A48: pop     r14
 * 0000000180056A4A: pop     r13
 * 0000000180056A4C: pop     r12
 * 0000000180056A4E: pop     rbp
 * 0000000180056A4F: retn
 */
