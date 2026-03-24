/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C004B48C
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001D710 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0022354 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0022BD0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C00243E0 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C00246C0 (UsbhGetRegUsbHubFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0025AF4 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegDriverEntry @ 0x1C0026920 (UsbhRegDriverEntry.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0029C90 (UsbhSetPdoRegistryParameter.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C002A990 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C002BD50 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C002BE80 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C002C2A0 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     UsbhQueryGlobalHubValue @ 0x1C0052680 (UsbhQueryGlobalHubValue.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C0052C40 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C0052D10 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C0052DF0 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C0052EC0 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C0052FA0 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C0053070 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C0053140 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C0053220 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C00532F0 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C00533D0 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C00534A0 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C00535A0 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C00536B0 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C0053780 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C0053850 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C0053920 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C0053A00 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C0053AD0 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C0053BA0 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005E03C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005E0FC (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005E2E0 (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x1C005EC30 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C004B48C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B48C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B48C: mov     rax, rsp
 * 00000001C004B48F: mov     [rax+8], rbx
 * 00000001C004B493: mov     [rax+10h], rbp
 * 00000001C004B497: mov     [rax+18h], rsi
 * 00000001C004B49B: mov     [rax+20h], rdi
 * 00000001C004B49F: push    r12
 * 00000001C004B4A1: push    r14
 * 00000001C004B4A3: push    r15
 * 00000001C004B4A5: sub     rsp, 40h
 * 00000001C004B4A9: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C004B4B0: lea     r12, aNull_0; "NULL"
 * 00000001C004B4B7: mov     rbx, [rsp+58h+arg_28]
 * 00000001C004B4BF: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C004B4C3: xor     r15d, r15d
 * 00000001C004B4C6: movzx   ebp, r9w
 * 00000001C004B4CA: mov     r14, rcx
 * 00000001C004B4CD: mov     edx, [rax+2Ch]
 * 00000001C004B4D0: lea     esi, [rdi+0Bh]
 * 00000001C004B4D3: test    dl, 1
 * 00000001C004B4D6: jz      short loc_1C004B539
 * 00000001C004B4D8: test    rbx, rbx
 * 00000001C004B4DB: jz      short loc_1C004B4F4
 * 00000001C004B4DD: mov     rax, rdi
 * 00000001C004B4E0: inc     rax
 * 00000001C004B4E3: cmp     [rbx+rax*2], r15w
 * 00000001C004B4E8: jnz     short loc_1C004B4E0
 * 00000001C004B4EA: lea     rdx, ds:2[rax*2]
 * 00000001C004B4F2: jmp     short loc_1C004B4F7
 * 00000001C004B4F4: mov     rdx, rsi
 * 00000001C004B4F7: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004B4FE: test    rbx, rbx
 * 00000001C004B501: mov     r8, [rsp+58h+arg_20]
 * 00000001C004B509: mov     rcx, rbx
 * 00000001C004B50C: cmovz   rcx, r12
 * 00000001C004B510: mov     [rsp+58h+var_28], r15
 * 00000001C004B515: mov     [rsp+58h+var_30], rdx
 * 00000001C004B51A: mov     edx, 2Bh ; '+'
 * 00000001C004B51F: mov     [rsp+58h+var_38], rcx
 * 00000001C004B524: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004B52B: movzx   r9d, bp
 * 00000001C004B52F: mov     rcx, [rcx+18h]
 * 00000001C004B533: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004B539: test    rbx, rbx
 * 00000001C004B53C: jz      short loc_1C004B553
 * 00000001C004B53E: inc     rdi
 * 00000001C004B541: cmp     [rbx+rdi*2], r15w
 * 00000001C004B546: jnz     short loc_1C004B53E
 * 00000001C004B548: lea     rsi, ds:2[rdi*2]
 * 00000001C004B550: test    rbx, rbx
 * 00000001C004B553: mov     r9, [rsp+58h+arg_20]
 * 00000001C004B55B: cmovz   rbx, r12
 * 00000001C004B55F: mov     [rsp+58h+var_20], r15
 * 00000001C004B564: xor     edx, edx
 * 00000001C004B566: mov     [rsp+58h+var_28], rsi
 * 00000001C004B56B: mov     rcx, r14
 * 00000001C004B56E: mov     [rsp+58h+var_30], rbx
 * 00000001C004B573: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C004B578: lea     r8d, [rdx+1]
 * 00000001C004B57C: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B583: nop     dword ptr [rax+rax+00h]
 * 00000001C004B588: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004B58D: mov     rbp, [rsp+58h+arg_8]
 * 00000001C004B592: mov     rsi, [rsp+58h+arg_10]
 * 00000001C004B597: mov     rdi, [rsp+58h+arg_18]
 * 00000001C004B59C: add     rsp, 40h
 * 00000001C004B5A0: pop     r15
 * 00000001C004B5A2: pop     r14
 * 00000001C004B5A4: pop     r12
 * 00000001C004B5A6: retn
 */
