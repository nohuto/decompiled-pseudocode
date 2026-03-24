/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0005800
 * Callers:
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0005800
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005800
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005800: mov     r11, rsp
 * 00000001C0005803: mov     [r11+8], rbx
 * 00000001C0005807: push    rsi
 * 00000001C0005808: sub     rsp, 40h
 * 00000001C000580C: mov     rbx, rcx
 * 00000001C000580F: mov     esi, 42h ; 'B'
 * 00000001C0005814: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000581B: mov     eax, [rcx+2Ch]
 * 00000001C000581E: test    al, 1
 * 00000001C0005820: jz      short loc_1C000585C
 * 00000001C0005822: cmp     byte ptr [rcx+29h], 4
 * 00000001C0005826: jb      short loc_1C000585C
 * 00000001C0005828: and     qword ptr [r11-18h], 0
 * 00000001C000582D: lea     rdx, [r11+30h]
 * 00000001C0005831: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005838: lea     r8, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C000583F: mov     rcx, [rcx+18h]
 * 00000001C0005843: mov     qword ptr [r11-20h], 4
 * 00000001C000584B: mov     [r11-28h], rdx
 * 00000001C000584F: lea     edx, [rsi-17h]
 * 00000001C0005852: movzx   r9d, si
 * 00000001C0005856: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000585C: and     [rsp+48h+var_10], 0
 * 00000001C0005862: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005867: mov     edx, 4
 * 00000001C000586C: mov     [rsp+48h+var_18], 4
 * 00000001C0005875: mov     [rsp+48h+var_20], rax
 * 00000001C000587A: lea     r9, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C0005881: mov     rcx, rbx
 * 00000001C0005884: mov     [rsp+48h+var_28], si
 * 00000001C0005889: lea     r8d, [rdx-3]
 * 00000001C000588D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005894: nop     dword ptr [rax+rax+00h]
 * 00000001C0005899: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000589E: add     rsp, 40h
 * 00000001C00058A2: pop     rsi
 * 00000001C00058A3: retn
 */
