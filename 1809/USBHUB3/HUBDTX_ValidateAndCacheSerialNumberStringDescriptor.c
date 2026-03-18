/*
 * XREFs of HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0026A7C
 * Callers:
 *     HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x1C001CDB0 (HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C00347B4 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // r9d
  char v4; // al
  int v5; // ecx
  unsigned __int8 *v6; // rbx
  char v7; // al
  bool v8; // cf
  __int64 v9; // rcx
  char v10; // al
  bool v11; // zf
  char v12; // al
  unsigned int v13; // esi
  struct _MCGEN_TRACE_CONTEXT *v14; // rcx
  char v15; // r12
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  __int64 v18; // rdi
  unsigned __int16 *v19; // rbx
  unsigned int v20; // ebx
  void *v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ebx
  PVOID PoolWithTag; // rax
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v28; // [rsp+28h] [rbp-41h]
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-39h]
  SIZE_T NumberOfBytes_4; // [rsp+34h] [rbp-35h] BYREF
  __int64 v31; // [rsp+38h] [rbp-31h]
  _QWORD v32[16]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v34; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  memset(v32, 0, 0x38uLL);
  v4 = BYTE5(v32[1]);
  LOWORD(v32[0]) = *(_WORD *)(v1 + 1990);
  HIDWORD(v32[0]) = *(_DWORD *)(v1 + 172);
  v5 = *(_DWORD *)(v2 + 4);
  v6 = (unsigned __int8 *)(v1 + 1732);
  v32[5] = v1;
  if ( (v5 & 0x20) != 0 )
    v4 = 1;
  BYTE5(v32[1]) = v4;
  v7 = HIBYTE(v32[1]);
  if ( (v5 & 0x2000) != 0 )
    v7 = 1;
  v8 = (v5 & 0x4000) != 0;
  v9 = *(_QWORD *)(v1 + 8);
  HIBYTE(v32[1]) = v7;
  v10 = BYTE4(v32[1]);
  if ( v8 )
    v10 = 1;
  v11 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v32[1]) = v10;
  v12 = v32[6];
  if ( !v11 )
    v12 = 1;
  LOBYTE(v32[6]) = v12;
  LODWORD(v32[2]) = *(_DWORD *)(v9 + 220);
  v32[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v32[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v13 = *(_DWORD *)(v1 + 256);
  NumberOfBytes = v13;
  v34 = v13;
  v31 = *(_QWORD *)(v9 + 1432);
  v15 = HUBDESC_InternalValidateStringDescriptor(
          (int)v1 + 1732,
          v13,
          (unsigned int)&NumberOfBytes_4,
          v3,
          v31,
          (__int64)v32);
  if ( !v15 )
    goto LABEL_20;
  v16 = *v6;
  v17 = 0;
  v13 = v16 - 2;
  if ( (v16 - 2) >> 1 )
  {
    v18 = v31;
    v19 = (unsigned __int16 *)(v6 + 2);
    do
    {
      v14 = (struct _MCGEN_TRACE_CONTEXT *)*v19;
      if ( !(_WORD)v14 )
        break;
      if ( (unsigned __int16)((_WORD)v14 - 32) > 0x5Fu || (_WORD)v14 == 44 )
      {
        v15 = 0;
        LODWORD(v28) = (unsigned __int16)v14;
        WPP_RECORDER_SF_d(v18, 2u, 5u, 0x119u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
        ((void (__fastcall *)(_QWORD, __int64))v32[3])(v32[5], 132LL);
      }
      ++v17;
      ++v19;
    }
    while ( v17 < (v16 - 2) >> 1 );
    v1 = a1;
    v13 = v16 - 2;
  }
  if ( v15 )
    v13 = v16;
  else
LABEL_20:
    WPP_RECORDER_SF_(v31, 2u, 5u, 0x11Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  if ( v15 )
  {
    v22 = *(void **)(v1 + 2152);
    if ( v22 )
      ExFreePoolWithTag(v22, 0x64334855u);
    v23 = v34 + 12;
    if ( (*(_DWORD *)(v1 + 1636) & 0x800) == 0 )
      v23 = NumberOfBytes;
    v24 = v23;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v23, 0x64334855u);
    *(_QWORD *)(v1 + 2152) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_23;
    *(_DWORD *)(v1 + 2148) = v24;
    memset(PoolWithTag, 0, v24);
    v26 = *(_DWORD **)(v1 + 2152);
    if ( (*(_DWORD *)(v1 + 1632) & 2) != 0 )
    {
      if ( *(_WORD *)(v1 + 1990) < 0x300u )
      {
        *(_QWORD *)v26 = *(_QWORD *)L"MSFT20";
        v27 = *(_DWORD *)L"20";
LABEL_36:
        v26[2] = v27;
        v26 += 3;
        goto LABEL_37;
      }
    }
    else if ( (*(_DWORD *)(v1 + 1636) & 0x800) == 0 )
    {
LABEL_37:
      memmove(v26, (const void *)(v1 + 1734), v13 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 0x40u);
      return 4077;
    }
    *(_QWORD *)v26 = *(_QWORD *)L"MSFT30";
    v27 = *(_DWORD *)L"30";
    goto LABEL_36;
  }
  *(_DWORD *)(v1 + 2432) = 1073807384;
LABEL_23:
  v20 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p(
      v14,
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  return v20;
}
