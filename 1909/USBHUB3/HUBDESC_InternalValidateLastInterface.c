/*
 * XREFs of HUBDESC_InternalValidateLastInterface @ 0x1C0032134
 * Callers:
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C00341F8 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0034BA4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x1C0032018 (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateLastInterface(__int64 a1, int *a2, __int64 a3)
{
  int *v4; // rdi
  int v6; // eax
  char v7; // si
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v10 = 0;
    v4 = &v10;
  }
  v6 = *(_DWORD *)(a1 + 256);
  v7 = 1;
  if ( (v6 & 1) != 0 )
  {
    HUBDESC_InternalValidateLastEndpoint(a1, v4, a3);
    if ( *v4 != 1 && *(_BYTE *)(a1 + 185) != *(_BYTE *)(a1 + 184) )
    {
      if ( *(_WORD *)a1 > 0x200u || *(_BYTE *)(a1 + 12) || *(_BYTE *)(a1 + 13) )
        *v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(a3, *(unsigned __int8 *)(a1 + 184), *(unsigned __int8 *)(a1 + 185), 0x1Bu, v9);
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 107LL);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 256) = v6 | 1;
  }
  if ( *v4 )
  {
    v7 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a3, 2u, 5u, 0x1Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v7;
}
