/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C012EEEC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C021FD50 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     GetWindowBorders @ 0x1C012DDEC (GetWindowBorders.c)
 *     DwmAsyncActivationChange @ 0x1C012F068 (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x1C012F11C (IsModelessMenuNotificationWindow.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     xxxMenuBarDraw @ 0x1C024AA44 (xxxMenuBarDraw.c)
 */

/*
 * Hex-Rays decompilation failed for xxxDWP_DoNCActivate @ 0x1C012EEEC
 * Reason: Hex-Rays returned no pseudocode for 0x1C012EEEC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C012EEEC: mov     rax, rsp
 * 00000001C012EEEF: mov     [rax+8], rbx
 * 00000001C012EEF3: mov     [rax+10h], rbp
 * 00000001C012EEF7: mov     [rax+18h], rsi
 * 00000001C012EEFB: mov     [rax+20h], rdi
 * 00000001C012EEFF: push    r12
 * 00000001C012EF01: push    r14
 * 00000001C012EF03: push    r15
 * 00000001C012EF05: sub     rsp, 20h
 * 00000001C012EF09: mov     r14d, edx
 * 00000001C012EF0C: xor     r12d, r12d
 * 00000001C012EF0F: mov     ebp, 100Ch
 * 00000001C012EF14: mov     rsi, r8
 * 00000001C012EF17: mov     rbx, rcx
 * 00000001C012EF1A: mov     r15d, ebp
 * 00000001C012EF1D: and     r14d, 1
 * 00000001C012EF21: jnz     short loc_1C012EF9B
 * 00000001C012EF23: test    dl, 2
 * 00000001C012EF26: jnz     short loc_1C012EF31
 * 00000001C012EF28: call    IsModelessMenuNotificationWindow
 * 00000001C012EF2D: test    eax, eax
 * 00000001C012EF2F: jnz     short loc_1C012EF9B
 * 00000001C012EF31: mov     ecx, r12d
 * 00000001C012EF34: mov     r8d, 40h ; '@'
 * 00000001C012EF3A: mov     rdx, rbx
 * 00000001C012EF3D: lea     r9d, [r8-3Fh]
 * 00000001C012EF41: call    SetOrClrWF
 * 00000001C012EF46: cmp     rsi, 0FFFFFFFFFFFFFFFFh
 * 00000001C012EF4A: jnz     short loc_1C012EFA8
 * 00000001C012EF4C: mov     rcx, rbx
 * 00000001C012EF4F: call    IsToplevelWindowDesktopComposed
 * 00000001C012EF54: test    eax, eax
 * 00000001C012EF56: jz      short loc_1C012EF7C
 * 00000001C012EF58: mov     rax, [rbx+28h]
 * 00000001C012EF5C: test    byte ptr [rax+1Ah], 8
 * 00000001C012EF60: jz      short loc_1C012EF7C
 * 00000001C012EF62: call    cs:__imp_ReferenceDwmApiPort
 * 00000001C012EF69: nop     dword ptr [rax+rax+00h]
 * 00000001C012EF6E: mov     rdx, [rbx]
 * 00000001C012EF71: mov     r8d, r14d
 * 00000001C012EF74: mov     rcx, rax; Object
 * 00000001C012EF77: call    DwmAsyncActivationChange
 * 00000001C012EF7C: mov     rbx, [rsp+38h+arg_0]
 * 00000001C012EF81: mov     rbp, [rsp+38h+arg_8]
 * 00000001C012EF86: mov     rsi, [rsp+38h+arg_10]
 * 00000001C012EF8B: mov     rdi, [rsp+38h+arg_18]
 * 00000001C012EF90: add     rsp, 20h
 * 00000001C012EF94: pop     r15
 * 00000001C012EF96: pop     r14
 * 00000001C012EF98: pop     r12
 * 00000001C012EF9A: retn
 * 00000001C012EF9B: mov     ecx, 1
 * 00000001C012EFA0: mov     r15d, 100Dh
 * 00000001C012EFA6: jmp     short loc_1C012EF34
 * 00000001C012EFA8: mov     rdx, [rbx+28h]
 * 00000001C012EFAC: mov     r8b, [rdx+1Fh]
 * 00000001C012EFB0: test    r8b, 10h
 * 00000001C012EFB4: jz      short loc_1C012EF4C
 * 00000001C012EFB6: test    byte ptr [rdx+11h], 1
 * 00000001C012EFBA: jnz     short loc_1C012EF4C
 * 00000001C012EFBC: mov     rax, cs:__imp_gpsi
 * 00000001C012EFC3: movzx   edi, r12w
 * 00000001C012EFC7: mov     rcx, [rax]
 * 00000001C012EFCA: mov     eax, [rcx+11E4h]
 * 00000001C012EFD0: cmp     [rcx+11E0h], eax
 * 00000001C012EFD6: jz      loc_1C01C5CD4
 * 00000001C012EFDC: mov     edi, ebp
 * 00000001C012EFDE: test    r8b, 20h
 * 00000001C012EFE2: jnz     short loc_1C012EFEE
 * 00000001C012EFE4: test    byte ptr [rdx+1Eh], 4
 * 00000001C012EFE8: jnz     loc_1C01C5CEB
 * 00000001C012EFEE: test    di, di
 * 00000001C012EFF1: jz      loc_1C012EF4C
 * 00000001C012EFF7: mov     rcx, rsi
 * 00000001C012EFFA: call    cs:__imp_UserValidateCopyRgn
 * 00000001C012F001: nop     dword ptr [rax+rax+00h]
 * 00000001C012F006: mov     r8d, 10001h
 * 00000001C012F00C: mov     rcx, rbx
 * 00000001C012F00F: mov     rdx, rax
 * 00000001C012F012: mov     rbp, rax
 * 00000001C012F015: call    cs:__imp__GetDCEx
 * 00000001C012F01C: nop     dword ptr [rax+rax+00h]
 * 00000001C012F021: mov     rsi, rax
 * 00000001C012F024: test    rax, rax
 * 00000001C012F027: jz      loc_1C01C5D2C
 * 00000001C012F02D: mov     rax, [rbx+28h]
 * 00000001C012F031: test    byte ptr [rax+10h], 1
 * 00000001C012F035: jnz     loc_1C01C5D0A
 * 00000001C012F03B: movzx   r8d, di
 * 00000001C012F03F: mov     rdx, rsi; HDC
 * 00000001C012F042: or      r8d, r15d
 * 00000001C012F045: mov     rcx, rbx; struct tagWND *
 * 00000001C012F048: call    xxxDrawCaptionBar
 * 00000001C012F04D: mov     rcx, rsi
 * 00000001C012F050: call    cs:__imp__ReleaseDC
 * 00000001C012F057: nop     dword ptr [rax+rax+00h]
 * 00000001C012F05C: jmp     loc_1C012EF4C
 * 00000001C01C5CD4: mov     eax, [rcx+1224h]
 * 00000001C01C5CDA: cmp     [rcx+11FCh], eax
 * 00000001C01C5CE0: jz      loc_1C012EFDE
 * 00000001C01C5CE6: jmp     loc_1C012EFDC
 * 00000001C01C5CEB: mov     eax, [rcx+1204h]
 * 00000001C01C5CF1: cmp     [rcx+1200h], eax
 * 00000001C01C5CF7: jz      loc_1C012EFEE
 * 00000001C01C5CFD: mov     eax, 8000h
 * 00000001C01C5D02: or      di, ax
 * 00000001C01C5D05: jmp     loc_1C012EFEE
 * 00000001C01C5D0A: mov     edx, [rax+18h]
 * 00000001C01C5D0D: mov     ecx, [rax+1Ch]
 * 00000001C01C5D10: call    GetWindowBorders
 * 00000001C01C5D15: mov     r9d, eax
 * 00000001C01C5D18: mov     r8d, eax
 * 00000001C01C5D1B: mov     rdx, rsi
 * 00000001C01C5D1E: mov     rcx, rbx
 * 00000001C01C5D21: call    xxxMenuBarDraw
 * 00000001C01C5D26: nop
 * 00000001C01C5D27: jmp     loc_1C012F03B
 * 00000001C01C5D2C: mov     rcx, rbp
 * 00000001C01C5D2F: call    cs:__imp_GreDeleteObject
 * 00000001C01C5D36: nop     dword ptr [rax+rax+00h]
 * 00000001C01C5D3B: nop
 * 00000001C01C5D3C: jmp     loc_1C012EF4C
 */
