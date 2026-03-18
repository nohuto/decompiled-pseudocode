/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x1C0035710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSetHeader(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v6; // di

  v6 = 1;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x134u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 154LL);
    v6 = 0;
  }
  if ( *a3 != 10 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 96),
      2u,
      5u,
      0x135u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 155LL);
    v6 = 0;
  }
  if ( v6 == 1 )
    *(_DWORD *)a2 |= 2u;
  else
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x136u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v6;
}
