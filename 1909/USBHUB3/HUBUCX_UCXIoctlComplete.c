/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x1C0022060
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000B478 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_q @ 0x1C0012C28 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0013610 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 */

void __fastcall HUBUCX_UCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v6; // r14d
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  _QWORD *v15; // r8
  __int64 v16; // rdx
  unsigned int j; // ecx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r8
  _QWORD *k; // rax
  unsigned int m; // edx
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  unsigned int n; // r8d
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned __int16 v30; // r9
  unsigned __int8 v31; // dl
  int v32; // esi
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // r8
  _QWORD *ii; // rax
  unsigned int jj; // edx
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  struct _MCGEN_TRACE_CONTEXT *v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int i; // edx
  __int64 v52; // rax
  __int64 v53; // rdx
  int USBDErrorFromNTStatus; // eax
  __int64 v55; // [rsp+20h] [rbp-48h]
  __int64 v56; // [rsp+28h] [rbp-40h]
  __int64 v57; // [rsp+30h] [rbp-38h]

  v4 = *(_DWORD *)(a3 + 8);
  v6 = 0;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        a2,
        5u,
        0xBu,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
        *(_DWORD *)(a4 + 440),
        *(_DWORD *)(a3 + 8));
    v7 = *(unsigned int *)(a4 + 440);
    v8 = (unsigned int)(v7 - 4788231);
    if ( (unsigned int)v8 > 0x38 || (v9 = 0x100000001000001LL, !_bittest64(&v9, v8)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v57) = v4;
        LODWORD(v56) = *(_DWORD *)(a4 + 440);
        WPP_RECORDER_SF_Ld(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          v7,
          5u,
          0xCu,
          (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
          v56,
          v57);
      }
      v10 = *(_QWORD *)(a4 + 8);
      v11 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(*(_QWORD *)v10 + 2592LL);
      if ( (char)v11 < 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", v10 + 272);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
      {
        LODWORD(v56) = v4;
        LODWORD(v55) = *(_DWORD *)(a4 + 440);
        McTemplateK0pqq(
          v11,
          &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
          (const GUID *)(a4 + 1516),
          *(_QWORD *)(a4 + 24),
          v55,
          v56);
      }
    }
  }
  switch ( *(_DWORD *)(a4 + 440) )
  {
    case 0x491017:
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a4 + 432),
                          0LL)
                      + 32) & 3) != 0 )
      {
        v53 = *(_QWORD *)(a4 + 2416);
        *(_DWORD *)(a4 + 1564) = -2147481856;
        v4 = -1073741823;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
          WdfDriverGlobals,
          v53,
          -10000000LL);
      }
      else if ( v4 < 0 )
      {
        if ( v4 == -1073741823 )
        {
          v4 = -1073741670;
LABEL_109:
          *(_DWORD *)(a4 + 1560) = v4;
          if ( !*(_DWORD *)(a4 + 1564) )
          {
            if ( v4 == -1073741667 )
              USBDErrorFromNTStatus = -1073713152;
            else
              USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v4);
            *(_DWORD *)(a4 + 1564) = USBDErrorFromNTStatus;
          }
LABEL_114:
          v32 = ((v4 >> 31) & 0xFFFFFFF8) + 4028;
          if ( v6 )
            return;
          goto LABEL_115;
        }
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2416),
          0LL);
      }
LABEL_108:
      if ( v4 >= 0 )
        goto LABEL_114;
      goto LABEL_109;
    case 0x49101B:
      v47 = *(_QWORD *)(a4 + 48);
      if ( v47 )
      {
        v48 = v47 + 16;
        v49 = *(_QWORD *)(v47 + 16);
        v50 = v49 - 8;
        if ( v48 != v49 )
        {
          do
          {
            for ( i = 0; i < *(_DWORD *)(v50 + 24); ++i )
            {
              if ( *(_DWORD *)(v50 + 72LL * i + 48) == 5 )
                *(_DWORD *)(v50 + 72LL * i + 48) = 6;
            }
            v52 = *(_QWORD *)(v50 + 8);
            v50 = v52 - 8;
          }
          while ( v48 != v52 );
        }
      }
      goto LABEL_108;
    case 0x49101F:
      v46 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C0064130);
      if ( v4 < 0 )
      {
        *(_DWORD *)(a4 + 2432) = 1073807361;
        if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
        {
          LODWORD(v55) = v4;
          McTemplateK0pq(
            v45,
            &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
            (const GUID *)(a4 + 1516),
            *(_QWORD *)(a4 + 24),
            v55);
        }
        if ( (*(_DWORD *)(a4 + 1456) & 0x20000) != 0 && (*(_DWORD *)(a4 + 1636) & 0x10000) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x13u,
              (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
          _InterlockedOr((volatile signed __int32 *)(a4 + 1636), 0x10000u);
          _InterlockedIncrement((volatile signed __int32 *)(v46 + 88));
        }
      }
      else
      {
        *(_DWORD *)(a4 + 1648) = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                                               WdfDriverGlobals,
                                               *(_QWORD *)(a4 + 432),
                                               0LL)
                                           + 28);
        if ( (*(_DWORD *)(a4 + 1636) & 0x10000) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x12u,
              (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
          _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFEFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(v46 + 88));
        }
      }
      goto LABEL_108;
    case 0x491023:
      if ( v4 < 0 )
      {
        if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            *(_QWORD *)(a4 + 432),
                            0LL)
                        + 56) & 1) != 0 )
        {
          v32 = 4024;
          goto LABEL_115;
        }
      }
      else
      {
        *(_WORD *)(a4 + 2208) = *(_WORD *)(a4 + 2210);
      }
      goto LABEL_108;
    case 0x49102B:
      if ( (*(_DWORD *)(a4 + 1644) & 0x4000000) != 0 )
      {
        v40 = *(_QWORD *)(a4 + 16);
        if ( v40 )
        {
          if ( *(_DWORD *)(v40 + 4) == 1 )
          {
            v41 = v40 + 456;
            if ( *(_QWORD *)(v40 + 488) && (*(_DWORD *)(v40 + 496) & 2) != 0 )
            {
              *(_BYTE *)(v40 + 512) = 1;
              v42 = *(_QWORD *)(v40 + 520);
              v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v42,
                      off_1C0064068);
              *(_QWORD *)v43 = v41;
              *(_QWORD *)(v43 + 16) = a4;
              *(_DWORD *)(v43 + 8) = 1;
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v42);
              v6 = 1;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
              WPP_RECORDER_SF_q(
                *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                4u,
                2u,
                0xDu,
                (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
                v44);
            }
          }
        }
      }
      goto LABEL_108;
  }
  if ( *(_DWORD *)(a4 + 440) != 4788279 )
    goto LABEL_108;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 432),
          0LL);
  v13 = *(_QWORD *)(a4 + 48);
  v14 = v12;
  if ( v13 )
  {
    v15 = (_QWORD *)(v13 + 16);
    v16 = *v15 - 8LL;
    if ( v15 != (_QWORD *)*v15 )
    {
      do
      {
        for ( j = 0; j < *(_DWORD *)(v16 + 24); ++j )
        {
          if ( *(_DWORD *)(v16 + 72LL * j + 48) == 5 )
            *(_DWORD *)(v16 + 72LL * j + 48) = 6;
        }
        v18 = *(_QWORD **)(v16 + 8);
        v16 = (__int64)(v18 - 1);
      }
      while ( v15 != v18 );
    }
  }
  v19 = *(_QWORD *)(a4 + 56);
  if ( v19 )
  {
    v20 = (_QWORD *)(v19 + 16);
    for ( k = *(_QWORD **)(v19 + 16); ; k = (_QWORD *)*k )
    {
      v23 = k - 1;
      if ( v20 == k )
        break;
      for ( m = 0; m < *((_DWORD *)v23 + 6); ++m )
      {
        if ( LODWORD(v23[9 * m + 6]) == 5 )
          LODWORD(v23[9 * m + 6]) = 6;
      }
    }
  }
  v24 = *(_QWORD *)(a4 + 72);
  if ( v24 )
  {
    for ( n = 0; n < *(_DWORD *)(v24 + 24); *(_DWORD *)(v24 + 72 * v26 + 48) = 6 )
      v26 = n++;
  }
  v27 = *(_DWORD *)(v14 + 76);
  if ( v27 )
  {
    if ( (*(_DWORD *)(v14 + 72) & 4) != 0 )
    {
      v28 = *(unsigned __int16 *)(a4 + 2208);
      if ( v28 <= v27 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v57) = *(unsigned __int16 *)(a4 + 2208);
          v30 = 15;
          LODWORD(v56) = *(_DWORD *)(v14 + 76);
          v31 = 2;
          goto LABEL_43;
        }
      }
      else
      {
        v29 = v28 - v27;
        *(_DWORD *)(a4 + 2584) = v29;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v57) = v29;
          v30 = 14;
          v31 = 4;
          LODWORD(v56) = *(_DWORD *)(v14 + 76);
LABEL_43:
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            v31,
            5u,
            v30,
            (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
            v56,
            v57);
        }
      }
LABEL_44:
      *(_DWORD *)(a4 + 2584) = 0;
      goto LABEL_45;
    }
    if ( v4 < 0 )
      goto LABEL_44;
    v33 = v27 + *(unsigned __int16 *)(a4 + 2208);
    *(_DWORD *)(a4 + 2584) = v33;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v57) = v33;
      LODWORD(v56) = *(_DWORD *)(v14 + 76);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        4u,
        5u,
        0x10u,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
        v56,
        v57);
    }
  }
LABEL_45:
  if ( (*(_DWORD *)(v14 + 72) & 7) == 0 )
  {
LABEL_52:
    if ( (*(_DWORD *)(a4 + 1636) & 0x8000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFF7FFF);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          4u,
          5u,
          0x11u,
          (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
      v34 = *(_QWORD *)(a4 + 2416);
      *(_DWORD *)(a4 + 1564) = -2147481856;
      v4 = -1073741823;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
        WdfDriverGlobals,
        v34,
        -10000000LL);
    }
    else if ( *(_DWORD *)(a4 + 112) && v4 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a4 + 2416),
        0LL);
    }
    else if ( v4 == -1073741823 )
    {
      v4 = -1073741670;
    }
    v35 = *(_QWORD *)(a4 + 48);
    if ( v35 )
    {
      v36 = (_QWORD *)(v35 + 16);
      for ( ii = *(_QWORD **)(v35 + 16); ; ii = (_QWORD *)*ii )
      {
        v39 = ii - 1;
        if ( v36 == ii )
          break;
        for ( jj = 0; jj < *((_DWORD *)v39 + 6); ++jj )
        {
          if ( LODWORD(v39[9 * jj + 6]) == 3 )
            LODWORD(v39[9 * jj + 6]) = ((v4 >> 31) & 2) + 4;
        }
      }
    }
    *(_DWORD *)(a4 + 128) = 0;
    *(_DWORD *)(a4 + 112) = 0;
    *(_DWORD *)(a4 + 144) = 0;
    goto LABEL_108;
  }
  v4 = -1073741823;
  *(_DWORD *)(a4 + 1564) = -2147481856;
  if ( !*(_WORD *)(a4 + 2208) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a4 + 2416),
      -10000000LL);
    goto LABEL_52;
  }
  memmove(
    (void *)(*(_QWORD *)(a4 + 136) + 8LL * *(unsigned int *)(a4 + 144)),
    *(const void **)(a4 + 120),
    8LL * *(unsigned int *)(a4 + 128));
  *(_DWORD *)(a4 + 144) += *(_DWORD *)(a4 + 128);
  v32 = 4024;
  *(_DWORD *)(a4 + 128) = 0;
  *(_DWORD *)(a4 + 1560) = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
LABEL_115:
  HUBSM_AddEvent(a4 + 504, v32);
}
