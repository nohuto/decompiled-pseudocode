/*
 * XREFs of HUBDESC_ValidateMsOs20CompatibleId @ 0x1C0039D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CompatibleId(__int64 a1, __int64 a2, _WORD *a3)
{
  char v6; // si
  int v7; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rdx
  char v11; // r9
  unsigned __int8 *v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // r10
  unsigned __int8 v15; // cl
  char v16; // r9
  unsigned __int8 *v17; // rdx
  __int64 v18; // r8
  unsigned __int8 v19; // cl
  unsigned __int16 v20; // r9

  v6 = 1;
  if ( (*(_BYTE *)a2 & 0x20) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x145u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 166LL);
    v6 = 0;
  }
  LOWORD(v7) = *a3;
  if ( *a3 != 20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = (unsigned __int16)v7;
      v8 = 326;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  v11 = 0;
  v12 = (unsigned __int8 *)(a3 + 2);
  v13 = 0;
  v14 = 0x87FFFFFE03FFLL;
  while ( 1 )
  {
    v15 = *v12;
    if ( !*v12 )
    {
      v11 = 1;
      goto LABEL_22;
    }
    if ( v11 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 327;
        goto LABEL_35;
      }
LABEL_36:
      v9 = 168LL;
      goto LABEL_10;
    }
    if ( (unsigned __int8)(v15 - 48) > 0x2Fu || !_bittest64(&v14, (unsigned __int8)(v15 - 48)) )
      break;
LABEL_22:
    ++v13;
    ++v12;
    if ( v13 >= 8 )
    {
      v16 = 0;
      v17 = (unsigned __int8 *)(a3 + 6);
      v18 = 0LL;
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          if ( v16 == 1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_36;
            v20 = 329;
LABEL_35:
            WPP_RECORDER_SF_(
              *(_QWORD *)(a2 + 96),
              2u,
              5u,
              v20,
              (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
            goto LABEL_36;
          }
          if ( (unsigned __int8)(v19 - 48) > 0x2Fu || !_bittest64(&v14, (unsigned __int8)(v19 - 48)) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x14Au,
                (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                v19);
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 167LL, v18);
            v6 = 0;
LABEL_31:
            if ( v6 != 1 )
              goto LABEL_11;
            *(_DWORD *)a2 |= 0x20u;
            *(_QWORD *)(a2 + 32) = a3;
            return v6;
          }
        }
        else
        {
          v16 = 1;
        }
        v18 = (unsigned int)(v18 + 1);
        ++v17;
        if ( (unsigned int)v18 >= 8 )
          goto LABEL_31;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_9;
  v7 = v15;
  v8 = 328;
LABEL_8:
  WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 96), 2u, 5u, v8, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v7);
LABEL_9:
  v9 = 167LL;
LABEL_10:
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v9);
  v6 = 0;
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x14Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v6;
}
