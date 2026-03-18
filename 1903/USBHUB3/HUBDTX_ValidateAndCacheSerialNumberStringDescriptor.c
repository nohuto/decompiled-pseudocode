/*
 * XREFs of HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0028CAC
 * Callers:
 *     HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x1C001EBB0 (HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002FFA0 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C0038130 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  bool v5; // cf
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // r14
  unsigned int v9; // esi
  int v10; // r9d
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  char v12; // r12
  unsigned int v13; // r13d
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  __int64 v16; // r13
  unsigned __int16 *v17; // rdi
  unsigned int v18; // edi
  void *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // edi
  PVOID PoolWithTag; // rax
  _DWORD *v24; // rcx
  int v25; // eax
  __int64 v26; // [rsp+28h] [rbp-41h]
  char v27; // [rsp+30h] [rbp-39h] BYREF
  __int64 v28; // [rsp+38h] [rbp-31h]
  _WORD v29[2]; // [rsp+40h] [rbp-29h] BYREF
  int v30; // [rsp+44h] [rbp-25h]
  __int64 v31; // [rsp+48h] [rbp-21h]
  int v32; // [rsp+50h] [rbp-19h]
  int v33; // [rsp+54h] [rbp-15h]
  __int64 (__fastcall *v34)(_QWORD, _QWORD); // [rsp+58h] [rbp-11h]
  void *v35; // [rsp+60h] [rbp-9h]
  __int64 v36; // [rsp+68h] [rbp-1h]
  _BOOL8 v37; // [rsp+70h] [rbp+7h]
  unsigned int v38; // [rsp+D0h] [rbp+67h]
  unsigned int v39; // [rsp+D8h] [rbp+6Fh]
  unsigned int v40; // [rsp+E0h] [rbp+77h]
  unsigned int NumberOfBytes; // [rsp+E8h] [rbp+7Fh]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  v29[0] = *(_WORD *)(a1 + 1990);
  v3 = *(_DWORD *)(a1 + 172);
  v31 = 0LL;
  v30 = v3;
  v4 = *(_DWORD *)(v2 + 4);
  v37 = 0LL;
  v29[1] = 0;
  *(_WORD *)((char *)&v31 + 5) = (v4 & 0x20) != 0;
  v33 = 0;
  HIBYTE(v31) = (v4 & 0x2000) != 0;
  v5 = (v4 & 0x4000) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v36 = a1;
  v7 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  v8 = *(_QWORD *)(v6 + 1432);
  BYTE4(v31) = v5;
  v28 = v8;
  v37 = !v7;
  v32 = *(_DWORD *)(v6 + 220);
  v34 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v35 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v9 = *(_DWORD *)(a1 + 256);
  NumberOfBytes = v9;
  v40 = v9;
  v12 = HUBDESC_InternalValidateStringDescriptor((int)a1 + 1732, v9, (unsigned int)&v27, v10, v8, (__int64)v29);
  if ( v12 )
  {
    v13 = *(unsigned __int8 *)(a1 + 1732);
    v14 = 0;
    v39 = v13;
    v9 = v13 - 2;
    v38 = v13 - 2;
    v15 = (v13 - 2) >> 1;
    if ( v15 )
    {
      v16 = v28;
      v17 = (unsigned __int16 *)(a1 + 1734);
      do
      {
        v11 = (struct _MCGEN_TRACE_CONTEXT *)*v17;
        if ( !(_WORD)v11 )
          break;
        if ( (unsigned __int16)((_WORD)v11 - 32) > 0x5Fu || (_WORD)v11 == 44 )
        {
          v12 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v26) = (unsigned __int16)v11;
            WPP_RECORDER_SF_d(v16, 2u, 5u, 0x119u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v26);
          }
          HUBMISC_LogDescriptorValidationErrorForDevice(a1, 132LL);
        }
        ++v14;
        ++v17;
      }
      while ( v14 < v15 );
      v9 = v38;
      v13 = v39;
    }
    if ( v12 )
    {
      v9 = v13;
      goto LABEL_17;
    }
    v8 = v28;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v8, 2u, 5u, 0x11Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
LABEL_17:
  if ( v12 )
  {
    v20 = *(void **)(a1 + 2152);
    if ( v20 )
      ExFreePoolWithTag(v20, 0x64334855u);
    v21 = v40 + 12;
    if ( (*(_DWORD *)(a1 + 1636) & 0x800) == 0 )
      v21 = NumberOfBytes;
    v22 = v21;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v21, 0x64334855u);
    *(_QWORD *)(a1 + 2152) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_19;
    *(_DWORD *)(a1 + 2148) = v22;
    memset(PoolWithTag, 0, v22);
    v24 = *(_DWORD **)(a1 + 2152);
    if ( (*(_DWORD *)(a1 + 1632) & 2) != 0 )
    {
      if ( *(_WORD *)(a1 + 1990) < 0x300u )
      {
        *(_QWORD *)v24 = *(_QWORD *)L"MSFT20";
        v25 = *(_DWORD *)L"20";
LABEL_32:
        v24[2] = v25;
        v24 += 3;
        goto LABEL_33;
      }
    }
    else if ( (*(_DWORD *)(a1 + 1636) & 0x800) == 0 )
    {
LABEL_33:
      memmove(v24, (const void *)(a1 + 1734), v9 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x40u);
      return 4077;
    }
    *(_QWORD *)v24 = *(_QWORD *)L"MSFT30";
    v25 = *(_DWORD *)L"30";
    goto LABEL_32;
  }
  *(_DWORD *)(a1 + 2432) = 1073807384;
LABEL_19:
  v18 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p(
      v11,
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  return v18;
}
