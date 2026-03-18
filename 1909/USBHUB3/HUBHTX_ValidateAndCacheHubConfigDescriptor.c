/*
 * XREFs of HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003048
 * Callers:
 *     HUBHSM_ValidatingHubConfigurationDescriptor @ 0x1C00092B0 (HUBHSM_ValidatingHubConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0034BA4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 */

__int64 __fastcall HUBHTX_ValidateAndCacheHubConfigDescriptor(__int64 a1)
{
  __int16 v1; // ax
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rcx
  unsigned __int16 v5; // ax
  PVOID PoolWithTag; // rax
  int v7; // ebx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  void *v10; // rcx
  int v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+30h] [rbp-58h]
  _WORD v14[2]; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+44h] [rbp-44h]
  __int128 v16; // [rsp+48h] [rbp-40h]
  __int64 (__fastcall *v17)(); // [rsp+58h] [rbp-30h]
  __int64 (__fastcall *v18)(); // [rsp+60h] [rbp-28h]
  __int64 v19; // [rsp+68h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 2458);
  v14[1] = 0;
  v16 = 0LL;
  v20 = 0LL;
  v14[0] = v1;
  v3 = 0LL;
  v15 = *(_DWORD *)(a1 + 256);
  v17 = HUBMISC_LogDescriptorValidationErrorForHub;
  v19 = a1;
  v4 = *(unsigned __int16 **)(a1 + 1256);
  v18 = HUBMISC_LogDescriptorValidationWarningForHub;
  v5 = v4[1];
  if ( v5 >= 0xFFu )
  {
LABEL_7:
    if ( (unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                            (_DWORD)v4,
                            v4[1],
                            (unsigned int)v14,
                            *(_QWORD *)(a1 + 2520),
                            0LL) )
    {
      v8 = *(_WORD *)(a1 + 2604);
      v9 = *(_WORD *)(*(_QWORD *)(a1 + 1256) + 2LL);
      if ( v9 == v8 )
      {
        v7 = 0;
        goto LABEL_14;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = v8;
        v12 = v9;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          0x16u,
          (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
          v12,
          v13);
      }
      ((void (__fastcall *)(__int64, __int64))v17)(v19, 61LL);
    }
    v7 = -1073741823;
    goto LABEL_14;
  }
  v3 = v4;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v5, 0x68334855u);
  *(_QWORD *)(a1 + 1256) = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v3, v3[1]);
    v4 = *(unsigned __int16 **)(a1 + 1256);
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x15u, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
  v7 = -1073741670;
LABEL_14:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x68334855u);
  if ( v7 < 0 )
  {
    v10 = *(void **)(a1 + 1256);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x68334855u);
      *(_QWORD *)(a1 + 1256) = 0LL;
    }
  }
  return ((v7 >> 31) & 0xFFFFFFF8) + 2053;
}
