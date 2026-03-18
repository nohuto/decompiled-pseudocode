/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C0034E38
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001CBF0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptor(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  char v7; // bl
  char v8; // r8
  _BYTE *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned __int8 v12; // al
  char v13; // r8
  _BYTE *v14; // rcx
  unsigned int v15; // edx
  unsigned __int8 v16; // al

  v7 = 1;
  if ( a2 != *a1 )
  {
    WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x10Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, a2, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 126LL);
    if ( *(_WORD *)a3 > 0x200u || *(_BYTE *)(a3 + 12) )
      v7 = 0;
  }
  v8 = 0;
  v9 = (char *)a1 + 18;
  v10 = 0;
  v11 = 0x87FFFFFE03FFLL;
  do
  {
    if ( *v9 )
    {
      if ( v8 || (v12 = *v9 - 48, v12 > 0x2Fu) || !_bittest64(&v11, v12) )
      {
        WPP_RECORDER_SF_(a4, 2u, 5u, 0x110u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 123LL);
        v7 = 0;
        goto LABEL_24;
      }
    }
    else
    {
      v8 = 1;
    }
    ++v10;
    ++v9;
  }
  while ( v10 < 8 );
  v13 = 0;
  v14 = (char *)a1 + 26;
  v15 = 0;
  while ( !*v14 )
  {
    v13 = 1;
LABEL_18:
    ++v15;
    ++v14;
    if ( v15 >= 8 )
      goto LABEL_21;
  }
  if ( !v13 )
  {
    v16 = *v14 - 48;
    if ( v16 <= 0x2Fu )
    {
      if ( _bittest64(&v11, v16) )
        goto LABEL_18;
    }
  }
  WPP_RECORDER_SF_(a4, 2u, 5u, 0x111u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 124LL);
  v7 = 0;
LABEL_21:
  if ( !v7 )
LABEL_24:
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x112u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v7;
}
