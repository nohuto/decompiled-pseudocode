/*
 * XREFs of HUBDESC_ValidateMsOs20CcgpDevice @ 0x1C003A580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CcgpDevice(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v3; // eax
  char v6; // di
  __int64 v7; // rdx

  v3 = *a2;
  v6 = 1;
  if ( (*a2 & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x15Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v7 = 201LL;
  }
  else
  {
    if ( *a3 == 4 )
    {
      *((_QWORD *)a2 + 7) = a3;
      *a2 = v3 | 0x200;
      return v6;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x15Du,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        *a3);
    v7 = 202LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x15Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v6;
}
