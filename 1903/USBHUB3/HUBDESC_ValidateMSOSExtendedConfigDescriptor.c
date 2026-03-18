/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C0038A60
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001E8B0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptor(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  char v7; // di
  _BYTE *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned __int8 v11; // al
  _BYTE *v12; // rcx
  unsigned int v13; // edx
  unsigned __int8 v14; // al

  v5 = a3;
  v7 = 1;
  if ( a2 != *a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x10Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, a2, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(v5 + 24))(*(_QWORD *)(v5 + 40), 126LL);
    if ( *(_WORD *)v5 > 0x200u || *(_BYTE *)(v5 + 12) )
      v7 = 0;
  }
  LOBYTE(a3) = 0;
  v8 = (char *)a1 + 18;
  v9 = 0;
  v10 = 0x87FFFFFE03FFLL;
  do
  {
    if ( *v8 )
    {
      if ( (_BYTE)a3 || (v11 = *v8 - 48, v11 > 0x2Fu) || !_bittest64(&v10, v11) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a4, 2u, 5u, 0x110u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v5 + 24))(*(_QWORD *)(v5 + 40), 123LL, a3, v10);
        v7 = 0;
        goto LABEL_30;
      }
    }
    else
    {
      LOBYTE(a3) = 1;
    }
    ++v9;
    ++v8;
  }
  while ( v9 < 8 );
  LOBYTE(a3) = 0;
  v12 = (char *)a1 + 26;
  v13 = 0;
  while ( !*v12 )
  {
    LOBYTE(a3) = 1;
LABEL_20:
    ++v13;
    ++v12;
    if ( v13 >= 8 )
      goto LABEL_25;
  }
  if ( !(_BYTE)a3 )
  {
    v14 = *v12 - 48;
    if ( v14 <= 0x2Fu )
    {
      if ( _bittest64(&v10, v14) )
        goto LABEL_20;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x111u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v5 + 24))(*(_QWORD *)(v5 + 40), 124LL, a3, v10);
  v7 = 0;
LABEL_25:
  if ( !v7 )
  {
LABEL_30:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x112u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v7;
}
