/*
 * XREFs of HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0024164
 * Callers:
 *     HUBHSM_GettingRootHub20PortsInfo @ 0x1C0009310 (HUBHSM_GettingRootHub20PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void __fastcall HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rsi
  int v4; // eax
  int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v7; // rbx
  _QWORD *v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // [rsp+28h] [rbp-61h]
  _QWORD v13[16]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v14; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v15; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+100h] [rbp+77h] BYREF
  __int64 v17; // [rsp+108h] [rbp+7Fh] BYREF

  memset(v13, 0, 0x38uLL);
  v16 = 0LL;
  v14 = 0LL;
  if ( !*(_WORD *)(a1 + 112) )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    v2 = 2042;
    goto LABEL_27;
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  memset(v13, 0, 0x38uLL);
  v13[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v13[0]) = 56;
  v13[3] = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v13,
         v3,
         &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = 28LL * *(unsigned __int16 *)(a1 + 112);
    memset(v13, 0, 0x38uLL);
    v13[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v13[0]) = 56;
    v13[3] = 0x100000001LL;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v13,
           (unsigned int)ExDefaultNonPagedPoolType,
           1882409045LL,
           v7,
           &v16,
           a1 + 128);
    v5 = v4;
    if ( v4 >= 0 )
    {
      memset(v13, 0, 0x38uLL);
      v13[4] = v14;
      LODWORD(v13[0]) = 56;
      v13[3] = 0x100000001LL;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             v13,
             (unsigned int)ExDefaultNonPagedPoolType,
             1882409045LL,
             16LL,
             &v17,
             &v15);
      v5 = v4;
      if ( v4 >= 0 )
      {
        v8 = *(_QWORD **)(a1 + 128);
        v9 = 0;
        *(_DWORD *)v15 = 16;
        *(_WORD *)(v15 + 4) = *(_WORD *)(a1 + 112);
        *(_WORD *)(v15 + 6) = 20;
        *(_QWORD *)(v15 + 8) = v8;
        v10 = *(unsigned __int16 *)(v15 + 4);
        v11 = &v8[v10];
        if ( (_WORD)v10 )
        {
          do
          {
            *v8 = v11;
            ++v9;
            *((_WORD *)v11 + 1) = 0;
            ++v8;
            v11 = (_QWORD *)((char *)v11 + 20);
          }
          while ( v9 < *(unsigned __int16 *)(v15 + 4) );
        }
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
               WdfDriverGlobals,
               v3,
               v14,
               4788239LL,
               v17,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL);
        v5 = v4;
        if ( v4 >= 0 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
            WdfDriverGlobals,
            v14,
            HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete,
            a1);
          if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015
                                                                                                + 2024))(
                 WdfDriverGlobals,
                 v14,
                 v3,
                 0LL) )
          {
            goto LABEL_21;
          }
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                 WdfDriverGlobals,
                 v14);
          v5 = v4;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_21;
          v6 = 48;
          goto LABEL_20;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 47;
          goto LABEL_20;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 46;
        goto LABEL_20;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 45;
      goto LABEL_20;
    }
  }
  else
  {
    v14 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 44;
LABEL_20:
      LODWORD(v12) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v6,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
        v12);
    }
  }
LABEL_21:
  if ( v5 >= 0 )
    return;
  if ( v14 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v16 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v2 = 2038;
LABEL_27:
  HUBSM_AddEvent(a1 + 1264, v2);
}
