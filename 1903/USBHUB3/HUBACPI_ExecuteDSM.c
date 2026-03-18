/*
 * XREFs of HUBACPI_ExecuteDSM @ 0x1C007F670
 * Callers:
 *     HUBPSM20_DisengagingSDM845HighSpeedWorkaround @ 0x1C000FE30 (HUBPSM20_DisengagingSDM845HighSpeedWorkaround.c)
 *     HUBPSM20_EngagingSDM845HighSpeedWorkaround @ 0x1C000FEA0 (HUBPSM20_EngagingSDM845HighSpeedWorkaround.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_d @ 0x1C003B2AC (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_q_guid_L @ 0x1C003B38C (WPP_RECORDER_SF_q_guid_L.c)
 *     WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C003B490 (WPP_RECORDER_SF_q_guid_LLLLL.c)
 *     WPP_RECORDER_SF_q_guid_Ld @ 0x1C003B624 (WPP_RECORDER_SF_q_guid_Ld.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBACPI_ExecuteDSM(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  unsigned int v7; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // cl
  int v17; // [rsp+20h] [rbp-79h]
  __int64 v18; // [rsp+60h] [rbp-39h] BYREF
  _BYTE *v19; // [rsp+68h] [rbp-31h]
  __int64 v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h] BYREF
  _DWORD *v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  char v24[8]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v25[20]; // [rsp+98h] [rbp-1h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v25, 0, sizeof(v25));
  v18 = 0LL;
  v7 = 0;
  v19 = 0LL;
  v20 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x3CuLL, 0x70334855u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3CuLL);
    v9[2] = 60;
    *v9 = 1130980673;
    v9[1] = 1297302623;
    v9[3] = 4;
    v9[4] = 1048578;
    memcpy_s(v9 + 5, 0x10uLL, &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND, 0x10uLL);
    LOWORD(v10) = *((_WORD *)v9 + 9);
    if ( (unsigned __int16)v10 >= 4u )
      v10 = (unsigned __int16)v10;
    else
      v10 = 4LL;
    *(_DWORD *)((char *)v9 + v10 + 20) = 0x40000;
    *(_DWORD *)((char *)v9 + v10 + 24) = 1;
    *(_DWORD *)((char *)v9 + v10 + 28) = 0x40000;
    *(_DWORD *)((char *)v9 + v10 + 32) = a4;
    *(_DWORD *)((char *)v9 + v10 + 36) = 2;
    memcpy_s((char *)v9 + v10 + 40, 0LL, 0LL, 0LL);
    v19 = v25;
    v21 = 1LL;
    v23 = 60LL;
    v22 = v9;
    *(_OWORD *)&v25[4] = 0LL;
    *(_DWORD *)v25 = 1114596673;
    v18 = 1LL;
    v20 = 20LL;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v4);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, __int64 *, __int64 *, _QWORD, char *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v11,
           0LL,
           3325956LL,
           &v21,
           &v18,
           0LL,
           v24) >= 0 )
    {
      if ( *(_DWORD *)v25 == 1114596673 )
      {
        if ( *(_DWORD *)&v25[8] && *(_WORD *)&v25[14] )
        {
          v13 = *(unsigned __int16 *)&v25[14];
          v15 = 3;
          if ( (unsigned __int64)*(unsigned __int16 *)&v25[14] - 1 <= 3 )
            v15 = v25[14] - 1;
          v7 = *(_DWORD *)&v25[16] & ((256 << (8 * v15)) - 1);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q_guid_LLLLL(
            *(_QWORD *)(a1 + 2520),
            *(unsigned __int16 *)&v25[14],
            v13,
            *(unsigned int *)&v25[8],
            v17);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q_guid_L(*(_QWORD *)(a1 + 2520), v12, v13, v14, v17);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q_guid_Ld(*(_QWORD *)(a1 + 2520), v12, v13, v14, v17);
    }
    ExFreePoolWithTag(v9, 0x70334855u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_d(*(_QWORD *)(a1 + 2520));
  }
  return v7;
}
