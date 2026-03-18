/*
 * XREFs of HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C00397E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1C0039658 (HUBDESC_GetNextMsOs20Descriptor.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

char __fastcall HUBDESC_ValidateMsOs20ConfigurationSubset(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  char v8; // r12
  __int64 v9; // rdx
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // r13
  unsigned __int16 *v13; // r15
  unsigned int v14; // ecx
  __int64 (__fastcall **v15)(); // r8
  bool v16; // zf
  __int64 v17; // [rsp+28h] [rbp-D0h]
  unsigned __int16 *v18; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 (__fastcall *v19)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // [rsp+38h] [rbp-C0h]
  _BYTE v20[112]; // [rsp+40h] [rbp-B8h] BYREF

  v8 = 0;
  memset(v20, 0, 0x68uLL);
  if ( *a3 != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x137u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        *a3);
    v9 = 156LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v9);
    goto LABEL_6;
  }
  v11 = a3[3];
  if ( v11 < 0xCu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x138u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v11);
    v9 = 157LL;
    goto LABEL_5;
  }
  v12 = (unsigned __int64)a3 + v11;
  if ( v12 > a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x139u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v11);
    v9 = 158LL;
    goto LABEL_5;
  }
  v13 = a3 + 4;
  v8 = 1;
  v18 = a3 + 4;
  while ( 1 )
  {
    v14 = v13[1];
    v15 = &MsOs20DispatchTable;
    if ( v14 >= 9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v13[1];
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x13Bu,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v17);
      }
    }
    else
    {
      v16 = *((_BYTE *)&MsOs20DispatchTable + 16 * v13[1] + 8) == 0;
      v19 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v13[1]);
      if ( v16 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = v14;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a2 + 96),
            2u,
            5u,
            0x13Au,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
            v17);
        }
        (*(void (__fastcall **)(_QWORD, __int64, __int64 (__fastcall **)()))(a1 + 32))(*(_QWORD *)(a1 + 40), 159LL, v15);
      }
      if ( !v19(a1, v20, v13, v12) )
        v8 = 0;
    }
    if ( !HUBDESC_GetNextMsOs20Descriptor(v12, &v18) )
      break;
    v13 = v18;
    if ( !v18 )
      goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x13Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 160LL);
  v8 = 0;
LABEL_33:
  if ( v8 == 1 )
  {
    *(_DWORD *)a2 |= 8u;
    return v8;
  }
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x13Du, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v8;
}
