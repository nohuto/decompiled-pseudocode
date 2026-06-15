/*
 * XREFs of ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800B1100
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800572A0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::ProcessAwayModeStateChange(CAudioSrv *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r15d
  __int64 v6; // r9
  struct IVolumeProvider *v7; // r12
  unsigned int i; // r14d
  unsigned int v9; // edi
  CAudioSessionManager *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-38h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-18h]
  unsigned int v20; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+60h] BYREF

  v16[1] = -2LL;
  v4 = 0LL;
  v16[0] = 0LL;
  v5 = a2;
  v6 = *((unsigned int *)this + 24);
  if ( a2 != (_DWORD)v6 )
  {
    *((_DWORD *)this + 24) = a2;
    v7 = g_pVolumeProvider;
    if ( !g_pVolumeProvider )
      goto LABEL_49;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           0LL,
           1LL,
           v16) >= 0
      && (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v16[0] + 24LL))(v16[0], &v20) >= 0 )
    {
      for ( i = 0; i < v20; ++i )
      {
        v14 = 0LL;
        v23 = 0LL;
        v22 = 0LL;
        v9 = v5;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v16[0] + 32LL))(v16[0], i, &v22) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v22 + 40LL))(v22, &pv) < 0
            || (*(int (__fastcall **)(struct IVolumeProvider *, LPVOID, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, pv, &v14) < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, pv);
            }
            CoTaskMemFree(pv);
            if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, 2LL, &v23) >= 0 )
            {
              pvar = 0LL;
              v18 = 0LL;
              v19 = 0LL;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
                     v23,
                     &PKEY_Endpoint_Flags,
                     &pvar) < 0
                || (_WORD)pvar != 19 && (_WORD)pvar )
              {
                PropVariantClear(&pvar);
              }
              else if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 152LL))(v14, &v21) >= 0 )
              {
                v10 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    35LL,
                    &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids,
                    v21);
                  v10 = WPP_GLOBAL_Control;
                }
                if ( a2 )
                {
                  LOWORD(pvar) = 19;
                  if ( v21 )
                    LODWORD(v18) = v18 | 4;
                  else
                    LODWORD(v18) = v18 & 0xFFFFFFFB;
                  v11 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 48LL))(
                          v23,
                          &PKEY_Endpoint_Flags,
                          &pvar);
                  if ( v11 < 0 )
                    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1470, v11);
                }
                else
                {
                  v9 = ((unsigned int)v18 >> 2) & 1;
                  if ( v10 != (CAudioSessionManager *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)v10 + 28) & 0x10) != 0
                    && *((_BYTE *)v10 + 25) >= 4u )
                  {
                    WPP_SF_d(
                      *((_QWORD *)v10 + 2),
                      36LL,
                      &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids,
                      ((unsigned int)v18 >> 2) & 1);
                  }
                }
                PropVariantClear(&pvar);
                if ( v21 != v9 )
                {
                  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD))(*(_QWORD *)v14 + 144LL))(
                          v14,
                          v9,
                          &EVENTCONTEXT_POWEREVENT,
                          0LL);
                  if ( v12 < 0 )
                    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1493, v12);
                }
              }
            }
          }
        }
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    goto LABEL_48;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, v6);
LABEL_48:
    v4 = v16[0];
  }
LABEL_49:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
