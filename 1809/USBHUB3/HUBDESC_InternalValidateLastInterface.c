/*
 * XREFs of HUBDESC_InternalValidateLastInterface @ 0x1C002F3AC
 * Callers:
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C0031048 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x1C002F2A0 (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateLastInterface(__int64 a1, int *a2, __int64 a3)
{
  int *v4; // rdi
  int v6; // eax
  char v7; // si
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // dl
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v13 = 0;
    v4 = &v13;
  }
  v6 = *(_DWORD *)(a1 + 256);
  v7 = 1;
  if ( (v6 & 1) != 0 )
  {
    HUBDESC_InternalValidateLastEndpoint(a1, v4, a3);
    if ( *v4 != 1 )
    {
      v8 = *(_BYTE *)(a1 + 185);
      v9 = *(_BYTE *)(a1 + 184);
      if ( v8 != v9 )
      {
        if ( *(_WORD *)a1 > 0x200u || *(_BYTE *)(a1 + 12) || *(_BYTE *)(a1 + 13) != 0 )
        {
          *v4 = 2;
          v9 = *(_BYTE *)(a1 + 184);
          v8 = *(_BYTE *)(a1 + 185);
        }
        WPP_RECORDER_SF_DDDD(a3, v9, v8, 0x1Bu, v12);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 107LL);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 256) = v6 | 1;
  }
  if ( *v4 )
  {
    v7 = 0;
    WPP_RECORDER_SF_(a3, 2u, 5u, 0x1Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v7;
}
