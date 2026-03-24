/*
 * XREFs of NVMeHwBuildIo @ 0x1C0004040
 * Callers:
 *     <none>
 * Callees:
 *     IoctlToNVMe @ 0x1C0002698 (IoctlToNVMe.c)
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 *     ProtocolCommandToNVMe @ 0x1C00132F4 (ProtocolCommandToNVMe.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeHwBuildIo @ 0x1C0004040
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004040: mov     [rsp+arg_18], rsi
 * 00000001C0004045: push    rdi
 * 00000001C0004046: sub     rsp, 30h
 * 00000001C000404A: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C000404E: mov     rdi, rdx
 * 00000001C0004051: mov     rsi, rcx
 * 00000001C0004054: jnz     loc_1C0009834
 * 00000001C000405A: mov     rcx, [rdx+68h]
 * 00000001C000405E: mov     rax, rcx
 * 00000001C0004061: and     eax, 0FFFh
 * 00000001C0004066: jz      short loc_1C0004072
 * 00000001C0004068: sub     rcx, rax
 * 00000001C000406B: add     rcx, 1000h
 * 00000001C0004072: add     rcx, 1000h; void *
 * 00000001C0004079: xor     edx, edx; Val
 * 00000001C000407B: mov     r8d, 0A0h; Size
 * 00000001C0004081: call    memset
 * 00000001C0004086: movzx   edx, byte ptr [rdi+2]
 * 00000001C000408A: cmp     dl, 28h ; '('
 * 00000001C000408D: jnz     loc_1C000983D
 * 00000001C0004093: mov     eax, [rdi+14h]
 * 00000001C0004096: mov     [rsp+38h+arg_8], rbx
 * 00000001C000409B: mov     [rsp+38h+arg_10], r14
 * 00000001C00040A0: test    eax, eax
 * 00000001C00040A2: jnz     short loc_1C00040F8
 * 00000001C00040A4: mov     eax, [rsi+14h]
 * 00000001C00040A7: test    al, 1
 * 00000001C00040A9: jz      loc_1C0009C1B
 * 00000001C00040AF: mov     rdx, rdi
 * 00000001C00040B2: mov     rcx, rsi
 * 00000001C00040B5: call    ScsiToNVMe
 * 00000001C00040BA: cmp     byte ptr [rdi+3], 0; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C00040BE: mov     r14, [rsp+38h+arg_10]
 * 00000001C00040C3: mov     rbx, [rsp+38h+arg_8]
 * 00000001C00040C8: jnz     short loc_1C00040D7
 * 00000001C00040CA: mov     al, 1
 * 00000001C00040CC: mov     rsi, [rsp+38h+arg_18]
 * 00000001C00040D1: add     rsp, 30h
 * 00000001C00040D5: pop     rdi
 * 00000001C00040D6: retn
 * 00000001C00040D7: mov     r8, rdi
 * 00000001C00040DA: mov     rdx, rsi
 * 00000001C00040DD: xor     ecx, ecx
 * 00000001C00040DF: call    cs:__imp_StorPortNotification
 * 00000001C00040E6: nop     dword ptr [rax+rax+00h]
 * 00000001C00040EB: mov     rsi, [rsp+38h+arg_18]
 * 00000001C00040F0: xor     al, al
 * 00000001C00040F2: add     rsp, 30h
 * 00000001C00040F6: pop     rdi
 * 00000001C00040F7: retn
 * 00000001C00040F8: add     eax, 0FFFFFFFEh; switch 42 cases
 * 00000001C00040FB: cmp     eax, 29h
 * 00000001C00040FE: ja      short def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0004100: lea     r8, cs:1C0000000h
 * 00000001C0004107: mov     ecx, ds:(jpt_1C0004112 - 1C0000000h)[r8+rax*4]
 * 00000001C000410F: add     rcx, r8
 * 00000001C0004112: jmp     rcx; switch jump
 * 00000001C0004118: mov     eax, [rsi+14h]; jumptable 00000001C0004112 case 2
 * 00000001C000411B: test    al, 1
 * 00000001C000411D: jz      loc_1C0009845
 * 00000001C0004123: mov     rdx, rdi
 * 00000001C0004126: mov     rcx, rsi
 * 00000001C0004129: call    IoctlToNVMe
 * 00000001C000412E: jmp     short def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0009834: mov     rcx, [rdx+38h]
 * 00000001C0009838: jmp     loc_1C000405E
 * 00000001C000983D: movzx   eax, dl
 * 00000001C0009840: jmp     loc_1C0004096
 * 00000001C0009845: mov     r9b, 20h ; ' '
 * 00000001C0009848: mov     dl, 8
 * 00000001C000984A: mov     rcx, rdi
 * 00000001C000984D: call    NVMeSetSenseData
 * 00000001C0009852: nop
 * 00000001C0009853: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0009858: mov     eax, [rsi+14h]; jumptable 00000001C0004112 case 9
 * 00000001C000985B: test    al, 1
 * 00000001C000985D: jnz     short loc_1C0009872
 * 00000001C000985F: mov     r9b, 20h ; ' '
 * 00000001C0009862: mov     dl, 8
 * 00000001C0009864: mov     rcx, rdi
 * 00000001C0009867: call    NVMeSetSenseData
 * 00000001C000986C: nop
 * 00000001C000986D: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0009872: mov     rdx, rdi
 * 00000001C0009875: mov     rcx, rsi
 * 00000001C0009878: call    ProtocolCommandToNVMe
 * 00000001C000987D: nop
 * 00000001C000987E: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0009883: cmp     dl, 28h ; '('; jumptable 00000001C0004112 case 36
 * 00000001C0009886: jnz     short loc_1C0009892
 * 00000001C0009888: mov     eax, [rdi+78h]
 * 00000001C000988B: cmp     byte ptr [rax+rdi+8], 1
 * 00000001C0009890: jmp     short loc_1C0009896
 * 00000001C0009892: cmp     byte ptr [rdi+4], 1
 * 00000001C0009896: setz    al
 * 00000001C0009899: mov     ebx, 1
 * 00000001C000989E: test    al, al
 * 00000001C00098A0: mov     ecx, 6
 * 00000001C00098A5: cmovz   ebx, ecx
 * 00000001C00098A8: mov     [rdi+3], bl
 * 00000001C00098AB: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C00098B0: mov     [rsp+38h+arg_0], 0; jumptable 00000001C0004112 case 38
 * 00000001C00098B9: cmp     dl, 28h ; '('
 * 00000001C00098BC: jnz     short loc_1C00098C9
 * 00000001C00098BE: mov     r14, [rdi+40h]
 * 00000001C00098C2: mov     eax, 3Ch ; '<'
 * 00000001C00098C7: jmp     short loc_1C00098D2
 * 00000001C00098C9: mov     r14, [rdi+18h]
 * 00000001C00098CD: mov     eax, 10h
 * 00000001C00098D2: test    r14, r14
 * 00000001C00098D5: jz      loc_1C00099FF
 * 00000001C00098DB: cmp     dword ptr [rdi+rax], 48h ; 'H'
 * 00000001C00098DF: jb      loc_1C00099FF
 * 00000001C00098E5: mov     eax, [rsi+34h]
 * 00000001C00098E8: test    al, 10h
 * 00000001C00098EA: jz      loc_1C00099FF
 * 00000001C00098F0: lea     rax, [rsp+38h+arg_0]
 * 00000001C00098F5: mov     r9d, 656D764Eh
 * 00000001C00098FB: mov     r8d, 78h ; 'x'
 * 00000001C0009901: mov     [rsp+38h+var_18], rax
 * 00000001C0009906: mov     rdx, rsi
 * 00000001C0009909: xor     ecx, ecx
 * 00000001C000990B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009912: nop     dword ptr [rax+rax+00h]
 * 00000001C0009917: test    eax, eax
 * 00000001C0009919: jnz     loc_1C00099F6
 * 00000001C000991F: cmp     [rsp+38h+arg_0], 0
 * 00000001C0009925: jz      loc_1C00099F6
 * 00000001C000992B: cmp     byte ptr [rdi+2], 28h ; '('
 * 00000001C000992F: jnz     short loc_1C000993B
 * 00000001C0009931: mov     eax, [rdi+34h]
 * 00000001C0009934: movzx   ecx, byte ptr [rax+rdi+0Ah]
 * 00000001C0009939: jmp     short loc_1C000993F
 * 00000001C000993B: movzx   ecx, byte ptr [rdi+7]
 * 00000001C000993F: movzx   edx, cl
 * 00000001C0009942: mov     rcx, rsi
 * 00000001C0009945: call    GetNamespaceId
 * 00000001C000994A: mov     rcx, [rsp+38h+arg_0]; void *
 * 00000001C000994F: xor     edx, edx; Val
 * 00000001C0009951: mov     ebx, eax
 * 00000001C0009953: lea     r8d, [rdx+78h]; Size
 * 00000001C0009957: call    memset
 * 00000001C000995C: mov     dword ptr [r14], 700100h
 * 00000001C0009963: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0009968: mov     [r14+40h], rcx
 * 00000001C000996C: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0009971: movzx   edx, word ptr [rsi+4]
 * 00000001C0009975: mov     [rcx], dx
 * 00000001C0009978: movzx   ecx, word ptr [rsi+6]
 * 00000001C000997C: mov     rax, [rsp+38h+arg_0]
 * 00000001C0009981: mov     [rax+2], cx
 * 00000001C0009985: mov     rax, [rsp+38h+arg_0]
 * 00000001C000998A: movzx   ecx, byte ptr [rsi+8]
 * 00000001C000998E: mov     [rax+4], cl
 * 00000001C0009991: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0009996: movups  xmm0, xmmword ptr [rsi+1Ch]
 * 00000001C000999A: movups  xmmword ptr [rcx+10h], xmm0
 * 00000001C000999E: movups  xmm1, xmmword ptr [rsi+2Ch]
 * 00000001C00099A2: movups  xmmword ptr [rcx+20h], xmm1
 * 00000001C00099A6: movups  xmm0, xmmword ptr [rsi+3Ch]
 * 00000001C00099AA: movups  xmmword ptr [rcx+30h], xmm0
 * 00000001C00099AE: movups  xmm1, xmmword ptr [rsi+4Ch]
 * 00000001C00099B2: movups  xmmword ptr [rcx+40h], xmm1
 * 00000001C00099B6: movups  xmm0, xmmword ptr [rsi+5Ch]
 * 00000001C00099BA: movups  xmmword ptr [rcx+50h], xmm0
 * 00000001C00099BE: movups  xmm1, xmmword ptr [rsi+6Ch]
 * 00000001C00099C2: movups  xmmword ptr [rcx+60h], xmm1
 * 00000001C00099C6: mov     eax, [rsi+7Ch]
 * 00000001C00099C9: mov     [rcx+70h], eax
 * 00000001C00099CC: mov     rax, [rsp+38h+arg_0]
 * 00000001C00099D1: and     dword ptr [rax+28h], 0FFFFFFF7h
 * 00000001C00099D5: mov     rax, [rsp+38h+arg_0]
 * 00000001C00099DA: mov     rcx, [rsi+80h]
 * 00000001C00099E1: mov     [rax+8], rcx
 * 00000001C00099E5: mov     rax, [rsp+38h+arg_0]
 * 00000001C00099EA: mov     [rax+74h], ebx
 * 00000001C00099ED: mov     byte ptr [rdi+3], 1; jumptable 00000001C0004112 case 8
 * 00000001C00099F1: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C00099F6: mov     byte ptr [rdi+3], 4
 * 00000001C00099FA: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C00099FF: mov     byte ptr [rdi+3], 6
 * 00000001C0009A03: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0009A08: cmp     dl, 28h ; '('; jumptable 00000001C0004112 case 39
 * 00000001C0009A0B: jnz     short loc_1C0009A18
 * 00000001C0009A0D: mov     r8, [rdi+40h]
 * 00000001C0009A11: mov     eax, 3Ch ; '<'
 * 00000001C0009A16: jmp     short loc_1C0009A21
 * 00000001C0009A18: mov     r8, [rdi+18h]
 * 00000001C0009A1C: mov     eax, 10h
 * 00000001C0009A21: test    r8, r8
 * 00000001C0009A24: jz      short loc_1C0009A58
 * 00000001C0009A26: cmp     dword ptr [rdi+rax], 48h ; 'H'
 * 00000001C0009A2A: jb      short loc_1C0009A58
 * 00000001C0009A2C: mov     r8, [r8+40h]
 * 00000001C0009A30: jmp     short loc_1C0009A36
 * 00000001C0009A32: mov     r8, [r8+10h]
 * 00000001C0009A36: mov     ebx, 1
 * 00000001C0009A3B: mov     rdx, rsi
 * 00000001C0009A3E: mov     ecx, ebx
 * 00000001C0009A40: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009A47: nop     dword ptr [rax+rax+00h]
 * 00000001C0009A4C: test    eax, eax
 * 00000001C0009A4E: mov     ecx, 4
 * 00000001C0009A53: cmovz   ecx, ebx
 * 00000001C0009A56: jmp     short loc_1C0009A5A
 * 00000001C0009A58: mov     cl, 6
 * 00000001C0009A5A: mov     [rdi+3], cl
 * 00000001C0009A5D: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0009A62: mov     [rsp+38h+arg_0], 0; jumptable 00000001C0004112 case 42
 * 00000001C0009A6B: cmp     dl, 28h ; '('
 * 00000001C0009A6E: jnz     short loc_1C0009A7B
 * 00000001C0009A70: mov     rbx, [rdi+40h]
 * 00000001C0009A74: mov     eax, 3Ch ; '<'
 * 00000001C0009A79: jmp     short loc_1C0009A84
 * 00000001C0009A7B: mov     rbx, [rdi+18h]
 * 00000001C0009A7F: mov     eax, 10h
 * 00000001C0009A84: lea     r14, [rdi+rax]
 * 00000001C0009A88: test    rbx, rbx
 * 00000001C0009A8B: jz      loc_1C00099FF
 * 00000001C0009A91: cmp     dword ptr [r14], 20h ; ' '
 * 00000001C0009A95: jb      loc_1C00099FF
 * 00000001C0009A9B: cmp     dword ptr [rbx+8], 474D4449h
 * 00000001C0009AA2: jnz     loc_1C00099FF
 * 00000001C0009AA8: lea     rax, [rsp+38h+arg_0]
 * 00000001C0009AAD: mov     r9d, 656D764Eh
 * 00000001C0009AB3: mov     r8d, 78h ; 'x'
 * 00000001C0009AB9: mov     [rsp+38h+var_18], rax
 * 00000001C0009ABE: mov     rdx, rsi
 * 00000001C0009AC1: xor     ecx, ecx
 * 00000001C0009AC3: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009ACA: nop     dword ptr [rax+rax+00h]
 * 00000001C0009ACF: test    eax, eax
 * 00000001C0009AD1: jnz     loc_1C00099F6
 * 00000001C0009AD7: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0009ADC: test    rcx, rcx
 * 00000001C0009ADF: jz      loc_1C00099F6
 * 00000001C0009AE5: lea     edx, [rax+78h]
 * 00000001C0009AE8: call    NVMeZeroMemory
 * 00000001C0009AED: movzx   ecx, word ptr [rsi+4]
 * 00000001C0009AF1: mov     rax, [rsp+38h+arg_0]
 * 00000001C0009AF6: mov     [rax], cx
 * 00000001C0009AF9: movzx   ecx, word ptr [rsi+6]
 * 00000001C0009AFD: mov     rax, [rsp+38h+arg_0]
 * 00000001C0009B02: mov     [rax+2], cx
 * 00000001C0009B06: mov     rax, [rsp+38h+arg_0]
 * 00000001C0009B0B: movzx   ecx, byte ptr [rsi+8]
 * 00000001C0009B0F: mov     [rax+4], cl
 * 00000001C0009B12: movups  xmm0, xmmword ptr [rsi+1Ch]
 * 00000001C0009B16: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0009B1B: movups  xmmword ptr [rcx+10h], xmm0
 * 00000001C0009B1F: movups  xmm1, xmmword ptr [rsi+2Ch]
 * 00000001C0009B23: movups  xmmword ptr [rcx+20h], xmm1
 * 00000001C0009B27: movups  xmm0, xmmword ptr [rsi+3Ch]
 * 00000001C0009B2B: movups  xmmword ptr [rcx+30h], xmm0
 * 00000001C0009B2F: movups  xmm1, xmmword ptr [rsi+4Ch]
 * 00000001C0009B33: movups  xmmword ptr [rcx+40h], xmm1
 * 00000001C0009B37: movups  xmm0, xmmword ptr [rsi+5Ch]
 * 00000001C0009B3B: movups  xmmword ptr [rcx+50h], xmm0
 * 00000001C0009B3F: movups  xmm1, xmmword ptr [rsi+6Ch]
 * 00000001C0009B43: movups  xmmword ptr [rcx+60h], xmm1
 * 00000001C0009B47: mov     eax, [rsi+7Ch]
 * 00000001C0009B4A: mov     [rcx+70h], eax
 * 00000001C0009B4D: mov     rax, [rsp+38h+arg_0]
 * 00000001C0009B52: and     dword ptr [rax+28h], 0FFFFFFF7h
 * 00000001C0009B56: mov     rcx, [rsi+80h]
 * 00000001C0009B5D: mov     rax, [rsp+38h+arg_0]
 * 00000001C0009B62: mov     [rax+8], rcx
 * 00000001C0009B66: mov     byte ptr [rdi+3], 1
 * 00000001C0009B6A: cmp     word ptr [rbx+10h], 1
 * 00000001C0009B6F: jnz     loc_1C00099FF
 * 00000001C0009B75: cmp     dword ptr [rbx+14h], 4
 * 00000001C0009B79: jb      loc_1C00099FF
 * 00000001C0009B7F: movzx   edx, byte ptr [rbx+1Ah]
 * 00000001C0009B83: mov     rcx, rsi
 * 00000001C0009B86: call    GetNamespaceId
 * 00000001C0009B8B: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0009B90: mov     [rcx+74h], eax
 * 00000001C0009B93: movzx   eax, byte ptr [rdi+3]
 * 00000001C0009B97: cmp     al, 1
 * 00000001C0009B99: jnz     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0009B9F: cmp     byte ptr [rdi+2], 28h ; '('
 * 00000001C0009BA3: jnz     short loc_1C0009BAB
 * 00000001C0009BA5: mov     rbx, [rdi+40h]
 * 00000001C0009BA9: jmp     short loc_1C0009BAF
 * 00000001C0009BAB: mov     rbx, [rdi+18h]
 * 00000001C0009BAF: mov     edx, [r14]
 * 00000001C0009BB2: mov     rcx, rbx
 * 00000001C0009BB5: call    NVMeZeroMemory
 * 00000001C0009BBA: mov     dword ptr [rbx], 18h
 * 00000001C0009BC0: mov     dword ptr [rbx+4], 18h
 * 00000001C0009BC7: mov     dword ptr [rbx+8], 4D504449h
 * 00000001C0009BCE: mov     rax, [rsp+38h+arg_0]
 * 00000001C0009BD3: mov     [rbx+10h], rax
 * 00000001C0009BD7: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 * 00000001C0009BDC: cmp     dl, 28h ; '('; jumptable 00000001C0004112 case 43
 * 00000001C0009BDF: jnz     short loc_1C0009BEC
 * 00000001C0009BE1: mov     r8, [rdi+40h]
 * 00000001C0009BE5: mov     eax, 3Ch ; '<'
 * 00000001C0009BEA: jmp     short loc_1C0009BF5
 * 00000001C0009BEC: mov     r8, [rdi+18h]
 * 00000001C0009BF0: mov     eax, 10h
 * 00000001C0009BF5: test    r8, r8
 * 00000001C0009BF8: jz      loc_1C0009A58
 * 00000001C0009BFE: cmp     dword ptr [rdi+rax], 18h
 * 00000001C0009C02: jb      loc_1C0009A58
 * 00000001C0009C08: cmp     dword ptr [r8+8], 464D4449h
 * 00000001C0009C10: jnz     loc_1C0009A58
 * 00000001C0009C16: jmp     loc_1C0009A32
 * 00000001C0009C1B: mov     r9b, 20h ; ' '
 * 00000001C0009C1E: mov     dl, 8
 * 00000001C0009C20: mov     rcx, rdi
 * 00000001C0009C23: call    NVMeSetSenseData
 * 00000001C0009C28: nop
 * 00000001C0009C29: jmp     def_1C0004112; jumptable 00000001C0004112 default case, cases 3-7,10-35,37,40,41
 */
