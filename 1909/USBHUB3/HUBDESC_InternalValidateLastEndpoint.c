/*
 * XREFs of HUBDESC_InternalValidateLastEndpoint @ 0x1C0032018
 * Callers:
 *     HUBDESC_InternalValidateLastInterface @ 0x1C0032134 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0032264 (HUBDESC_InternalValidateEndpointDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall HUBDESC_InternalValidateLastEndpoint(__int64 a1, int *a2, __int64 a3)
{
  int *v4; // rdi
  int v6; // eax
  int v7; // ecx
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v9 = 0;
    v4 = &v9;
  }
  v6 = *(_DWORD *)(a1 + 256);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) == 3 )
    {
      v7 = *(_DWORD *)(a1 + 256);
      if ( (v6 & 0x10) == 0 )
      {
        *v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a3, 2u, 5u, 0x19u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 59LL);
        v7 = *(_DWORD *)(a1 + 256);
      }
      v6 = v7;
      if ( (v7 & 8) != 0 && (v7 & 0x20) == 0 )
      {
        *v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a3, 2u, 5u, 0x1Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 212LL);
        v6 = *(_DWORD *)(a1 + 256);
      }
    }
  }
  else
  {
    v6 |= 2u;
  }
  *(_DWORD *)(a1 + 256) = v6 & 0xFFFFFFC3;
  return *v4 == 0;
}
