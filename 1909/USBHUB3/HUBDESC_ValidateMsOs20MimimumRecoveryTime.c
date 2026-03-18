/*
 * XREFs of HUBDESC_ValidateMsOs20MimimumRecoveryTime @ 0x1C003A250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20MimimumRecoveryTime(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v6; // di
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl
  __int64 v10; // [rsp+28h] [rbp-20h]

  v6 = 1;
  if ( *(char *)a2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x153u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 175LL);
    v6 = 0;
  }
  if ( *a3 == 6 )
  {
    v8 = *((_BYTE *)a3 + 4);
    if ( v8 > 0xAu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x155u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v8);
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 177LL);
      v6 = 0;
    }
    v9 = *((_BYTE *)a3 + 5);
    if ( (unsigned __int8)(v9 - 1) > 0x13u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v10) = v9;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x156u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v10);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 32))(*(_QWORD *)(a1 + 40), 178LL);
    }
    if ( v6 == 1 )
    {
      *(_DWORD *)a2 |= 0x80u;
      *(_QWORD *)(a2 + 40) = a3;
      return v6;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x154u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 176LL);
    v6 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x157u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v6;
}
