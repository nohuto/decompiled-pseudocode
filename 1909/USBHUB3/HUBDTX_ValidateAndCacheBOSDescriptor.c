/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002726C
 * Callers:
 *     HUBDSM_ValidatingBOSDescriptor @ 0x1C001F4D0 (HUBDSM_ValidatingBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBDTX_CacheBillboardInfo @ 0x1C00292CC (HUBDTX_CacheBillboardInfo.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0037C88 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003F994 (UsbDualRoleFeaturesQueryLocalMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x1C0081D0C (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptor(__int64 a1)
{
  unsigned __int16 *v2; // r14
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rbx
  char v6; // r12
  volatile signed __int32 *v7; // rsi
  int v8; // ecx
  bool v9; // zf
  char v10; // r12
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  unsigned int v12; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // al
  int v19; // ecx
  char v20; // dl
  PVOID v21; // rax
  __int64 v23; // [rsp+70h] [rbp-51h]
  _WORD v24[2]; // [rsp+78h] [rbp-49h] BYREF
  int v25; // [rsp+7Ch] [rbp-45h]
  int v26; // [rsp+80h] [rbp-41h]
  int v27; // [rsp+84h] [rbp-3Dh]
  int v28; // [rsp+88h] [rbp-39h]
  int v29; // [rsp+8Ch] [rbp-35h]
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // [rsp+90h] [rbp-31h]
  void *v31; // [rsp+98h] [rbp-29h]
  __int64 v32; // [rsp+A0h] [rbp-21h]
  _BOOL8 v33; // [rsp+A8h] [rbp-19h]
  _QWORD v34[8]; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v35; // [rsp+128h] [rbp+67h] BYREF

  memset(v34, 0, sizeof(v34));
  v2 = *(unsigned __int16 **)(a1 + 2056);
  LOBYTE(v35) = 0;
  if ( !v2 )
    v2 = (unsigned __int16 *)(a1 + 1732);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  v4 = *(_DWORD *)(a1 + 172);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(a1 + 2464);
  v27 = 0;
  v25 = v4;
  v7 = (volatile signed __int32 *)(a1 + 1632);
  v8 = *(_DWORD *)(v3 + 4);
  v33 = 0LL;
  v24[1] = 0;
  *(_WORD *)((char *)&v27 + 1) = (v8 & 0x20) != 0;
  v29 = 0;
  HIBYTE(v27) = (v8 & 0x2000) != 0;
  v32 = a1;
  v9 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  LOBYTE(v27) = (v8 & 0x4000) != 0;
  v10 = v6 & 1;
  v33 = !v9;
  v28 = *(_DWORD *)(v5 + 220);
  v30 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v31 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v24[0] = *(_WORD *)(a1 + 1990);
  v23 = *(_QWORD *)(v5 + 1432);
  v26 = *(_DWORD *)(*(_QWORD *)a1 + 92LL);
  if ( !(unsigned __int8)HUBDESC_ValidateBOSDescriptorSet(
                           a1,
                           (int)v2,
                           (int)a1 + 1988,
                           *(_DWORD *)(a1 + 256),
                           (__int64)v24,
                           v34,
                           a1 + 2192,
                           a1 + 2194,
                           (__int64)&v35,
                           a1 + 2440,
                           a1 + 1632,
                           a1 + 2704,
                           a1 + 2705,
                           v23) )
  {
    if ( (*(_DWORD *)(a1 + 1644) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 2432) = 1073807378;
LABEL_15:
      v14 = 4065;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0p(v11, &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR, (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
      return v14;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x39u,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids);
  }
  if ( (_BYTE)v35 )
    _InterlockedOr(v7, 0x100000u);
  if ( v34[2] && !*(_QWORD *)(a1 + 2568) )
  {
    v12 = (*(_DWORD *)(v34[2] + 4LL) & 0x1F) + 1;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 4LL * v12, 0x64334855u);
    *(_QWORD *)(a1 + 2568) = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x3Au,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids);
      goto LABEL_15;
    }
    memmove(PoolWithTag, (const void *)(v34[2] + 12LL), 4LL * v12);
    *(_DWORD *)(a1 + 2576) = v12;
  }
  if ( v34[3] )
  {
    _InterlockedOr(v7, 0x10u);
    if ( (*v7 & 8) == 0 )
      *(_OWORD *)(a1 + 2064) = *(_OWORD *)(v34[3] + 4LL);
  }
  if ( v34[4] )
    HUBDTX_CacheBillboardInfo(a1);
  if ( v34[7] )
  {
    _InterlockedOr(v7, 0x40000u);
    *(_BYTE *)(a1 + 2665) = *(_BYTE *)(v34[7] + 21LL);
    UsbDualRoleFeaturesQueryLocalMachine(a1 + 2657);
    v15 = v34[7];
    v16 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 2661) = *(_DWORD *)(v34[7] + 22LL);
    v17 = *(unsigned int *)(v15 + 22);
    LOBYTE(v15) = 1;
    HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(v16 + 1416), v15, v17);
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 2016) + 4LL) > 1u && LOBYTE(v34[5]) == 1 )
  {
    v18 = *(_BYTE *)(a1 + 1992);
    if ( !v18 || v18 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
      _InterlockedOr(v7, 4u);
  }
  if ( !v10 )
  {
    if ( v34[6] )
    {
      v19 = *(_DWORD *)(a1 + 2464) | 1;
      *(_QWORD *)(a1 + 2480) = *(_QWORD *)v34[6];
      v20 = *(_BYTE *)(a1 + 2487);
      *(_DWORD *)(a1 + 2464) = v19;
      if ( v20 )
      {
        if ( (*(_DWORD *)(a1 + 2468) & 4) == 0 )
        {
          *(_BYTE *)(a1 + 2052) = *(_BYTE *)(a1 + 2486);
          *(_DWORD *)(a1 + 2464) = v19 | 4;
          *(_BYTE *)(a1 + 2472) = v20;
        }
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 2056) )
  {
    v21 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v2[1], 0x64334855u);
    *(_QWORD *)(a1 + 2056) = v21;
    if ( !v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x3Bu,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids);
      goto LABEL_15;
    }
    memmove(v21, v2, v2[1]);
  }
  if ( (*v7 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x200u);
  v14 = 4077;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x20u);
  return v14;
}
