/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0049AD4
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C000EBD0 (UsbhBusConnectPdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001CD90 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00216A0 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0021920 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0022120 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0023890 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0023B40 (UsbhGetRegUsbHubFlags.c)
 *     UsbhRegDriverEntry @ 0x1C00259D0 (UsbhRegDriverEntry.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0028CE0 (UsbhSetPdoRegistryParameter.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0029FB0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C002AC00 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C002AF10 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C002B090 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     UsbhQueryGlobalHubValue @ 0x1C0050900 (UsbhQueryGlobalHubValue.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C0050E00 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C0050EB0 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C0050F60 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C0051010 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C00510E0 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C00511A0 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C0051260 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C0051330 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C00513F0 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C00514A0 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C0051560 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C0051640 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C0051730 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C00517E0 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C0051890 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C0051940 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C0051A00 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C0051AB0 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C0051B60 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005BB70 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005BC20 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005BDE4 (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x1C005C610 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0049AD4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0049AD4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0049AD4: mov     rax, rsp
 * 00000001C0049AD7: mov     [rax+8], rbx
 * 00000001C0049ADB: mov     [rax+10h], rbp
 * 00000001C0049ADF: mov     [rax+18h], rsi
 * 00000001C0049AE3: mov     [rax+20h], rdi
 * 00000001C0049AE7: push    r12
 * 00000001C0049AE9: push    r14
 * 00000001C0049AEB: push    r15
 * 00000001C0049AED: sub     rsp, 40h
 * 00000001C0049AF1: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0049AF8: lea     r12, aNull; "NULL"
 * 00000001C0049AFF: mov     rbx, [rsp+58h+arg_28]
 * 00000001C0049B07: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0049B0B: xor     r15d, r15d
 * 00000001C0049B0E: movzx   ebp, r9w
 * 00000001C0049B12: mov     r14, rcx
 * 00000001C0049B15: mov     edx, [rax+2Ch]
 * 00000001C0049B18: lea     esi, [rdi+0Bh]
 * 00000001C0049B1B: test    dl, 1
 * 00000001C0049B1E: jz      short loc_1C0049B81
 * 00000001C0049B20: test    rbx, rbx
 * 00000001C0049B23: jz      short loc_1C0049B3C
 * 00000001C0049B25: mov     rax, rdi
 * 00000001C0049B28: inc     rax
 * 00000001C0049B2B: cmp     [rbx+rax*2], r15w
 * 00000001C0049B30: jnz     short loc_1C0049B28
 * 00000001C0049B32: lea     rdx, ds:2[rax*2]
 * 00000001C0049B3A: jmp     short loc_1C0049B3F
 * 00000001C0049B3C: mov     rdx, rsi
 * 00000001C0049B3F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0049B46: test    rbx, rbx
 * 00000001C0049B49: mov     r8, [rsp+58h+arg_20]
 * 00000001C0049B51: mov     rcx, rbx
 * 00000001C0049B54: cmovz   rcx, r12
 * 00000001C0049B58: mov     [rsp+58h+var_28], r15
 * 00000001C0049B5D: mov     [rsp+58h+var_30], rdx
 * 00000001C0049B62: mov     edx, 2Bh ; '+'
 * 00000001C0049B67: mov     [rsp+58h+var_38], rcx
 * 00000001C0049B6C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0049B73: movzx   r9d, bp
 * 00000001C0049B77: mov     rcx, [rcx+18h]
 * 00000001C0049B7B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0049B81: test    rbx, rbx
 * 00000001C0049B84: jz      short loc_1C0049B9B
 * 00000001C0049B86: inc     rdi
 * 00000001C0049B89: cmp     [rbx+rdi*2], r15w
 * 00000001C0049B8E: jnz     short loc_1C0049B86
 * 00000001C0049B90: lea     rsi, ds:2[rdi*2]
 * 00000001C0049B98: test    rbx, rbx
 * 00000001C0049B9B: mov     r9, [rsp+58h+arg_20]
 * 00000001C0049BA3: cmovz   rbx, r12
 * 00000001C0049BA7: mov     [rsp+58h+var_20], r15
 * 00000001C0049BAC: xor     edx, edx
 * 00000001C0049BAE: mov     [rsp+58h+var_28], rsi
 * 00000001C0049BB3: mov     rcx, r14
 * 00000001C0049BB6: mov     [rsp+58h+var_30], rbx
 * 00000001C0049BBB: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0049BC0: lea     r8d, [rdx+1]
 * 00000001C0049BC4: call    cs:__imp_WppAutoLogTrace
 * 00000001C0049BCB: nop     dword ptr [rax+rax+00h]
 * 00000001C0049BD0: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0049BD5: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0049BDA: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0049BDF: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0049BE4: add     rsp, 40h
 * 00000001C0049BE8: pop     r15
 * 00000001C0049BEA: pop     r14
 * 00000001C0049BEC: pop     r12
 * 00000001C0049BEE: retn
 */
