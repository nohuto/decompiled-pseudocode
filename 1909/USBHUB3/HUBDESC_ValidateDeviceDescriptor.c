/*
 * XREFs of HUBDESC_ValidateDeviceDescriptor @ 0x1C00383C0
 * Callers:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0028314 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0028598 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C00317D4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateDeviceDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  int v5; // r13d
  unsigned int v7; // eax
  __int64 v9; // r14
  __int64 v10; // rdx
  char v11; // di
  unsigned __int16 v13; // r9
  unsigned __int8 v14; // al
  unsigned __int16 v15; // cx
  int v16; // edx
  unsigned __int16 v17; // cx
  int v18; // eax
  unsigned __int8 v19; // al
  bool v20; // al
  __int64 v21; // rcx
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  bool ShouldEnforceWin8ValidationMutable; // al
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  __int64 v28; // [rsp+28h] [rbp-40h]

  v5 = 0;
  v7 = a2;
  if ( !a1 )
  {
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a5, 2u, 5u, 0xF8u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v10 = 79LL;
    goto LABEL_5;
  }
  if ( a2 < 2 )
  {
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_13:
      v10 = 71LL;
LABEL_5:
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v10);
      goto LABEL_6;
    }
    v13 = 249;
LABEL_12:
    LODWORD(v28) = v7;
    WPP_RECORDER_SF_d(v9, 2u, 5u, v13, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
    goto LABEL_13;
  }
  v9 = a5;
  if ( *a1 < 0x12u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 70LL);
    v5 = 2;
  }
  v14 = a1[1];
  if ( v14 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = v14;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 77LL);
    v5 = 2;
  }
  v7 = a2;
  if ( a2 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = 252;
    goto LABEL_12;
  }
  v15 = *((_WORD *)a1 + 6);
  if ( (v15 & 0xF000u) > 0x9000
    || (v15 & 0xF00u) > 0x900
    || (v16 = 144, (*((_WORD *)a1 + 6) & 0xF0u) > 0x90)
    || (v15 & 0xFu) > 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = v15;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFDu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 69LL);
  }
  if ( a1[4] == 17 && !a1[5] && !a1[6] )
  {
    v17 = *((_WORD *)a1 + 1);
    v16 = 513;
    if ( (unsigned __int16)(v17 - 513) > 0xFEu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = v17;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 246LL);
      v5 = 2;
    }
    else if ( a4 )
    {
      *a4 = 1;
    }
  }
  v18 = *(_DWORD *)(a3 + 4);
  if ( v18 )
  {
    switch ( v18 )
    {
      case 1:
        LOBYTE(v16) = a1[7];
        if ( (unsigned __int8)(v16 - 8) > 0x38u
          || (v23 = 0x100000001000101LL, !_bittest64(&v23, (unsigned int)(v16 - 8))) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = 257;
            goto LABEL_66;
          }
LABEL_67:
          (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
          v5 = 2;
        }
        break;
      case 2:
        v24 = a1[7];
        if ( v24 != 64 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v28) = v24;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0x102u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
          ShouldEnforceWin8ValidationMutable = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
          LOBYTE(v16) = a1[7];
          if ( ShouldEnforceWin8ValidationMutable )
            v5 = 2;
          if ( (unsigned __int8)(v16 - 8) > 0x38u
            || (v26 = 0x100000001000101LL, !_bittest64(&v26, (unsigned int)(v16 - 8))) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v22 = 259;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
        }
        break;
      case 3:
        v27 = a1[7];
        if ( v27 != 9 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v28) = v27;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0x104u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
            v5 = 2;
        }
        break;
    }
  }
  else
  {
    v19 = a1[7];
    if ( v19 != 8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = v19;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFFu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
      v20 = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
      LOBYTE(v16) = a1[7];
      if ( v20 )
        v5 = 2;
      if ( (unsigned __int8)(v16 - 8) > 0x38u || (v21 = 0x100000001000101LL, !_bittest64(&v21, (unsigned int)(v16 - 8))) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = 256;
LABEL_66:
          LODWORD(v28) = (unsigned __int8)v16;
          WPP_RECORDER_SF_d(a5, 2u, 5u, v22, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
          goto LABEL_67;
        }
        goto LABEL_67;
      }
    }
  }
  if ( !v5 )
    return 1;
LABEL_6:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v9, 2u, 5u, 0x105u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v11;
}
