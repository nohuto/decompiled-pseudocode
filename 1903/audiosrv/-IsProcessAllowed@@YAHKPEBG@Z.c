/*
 * XREFs of ?IsProcessAllowed@@YAHKPEBG@Z @ 0x180028700
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180028320 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800C889C (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsProcessAllowed(DWORD dwProcessId, const unsigned __int16 *a2)
{
  unsigned int v4; // edi
  int v5; // esi
  int v6; // r12d
  RPC_STATUS v7; // eax
  signed int v8; // ebx
  unsigned int v9; // eax
  DWORD pSessionId; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h] BYREF
  __int64 v15; // [rsp+50h] [rbp-39h] BYREF
  PROPVARIANT pvar; // [rsp+58h] [rbp-31h] BYREF
  __int64 v17; // [rsp+60h] [rbp-29h]
  __int64 v18; // [rsp+68h] [rbp-21h]
  PROPVARIANT v19; // [rsp+70h] [rbp-19h] BYREF
  __int64 v20; // [rsp+78h] [rbp-11h]
  __int64 v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  DEVPROPGUID fmtid; // [rsp+90h] [rbp+7h] BYREF
  int v24; // [rsp+A0h] [rbp+17h]

  v22 = -2LL;
  v4 = 0;
  v5 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v6 = 0;
  pSessionId = 0;
  pvar = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v7 = RpcImpersonateClient(0LL);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 0x20Fu, v8);
      goto LABEL_16;
    }
  }
  v5 = 1;
  if ( !ProcessIdToSessionId(dwProcessId, &pSessionId) )
    pSessionId = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v15);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, &v14);
    if ( v8 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
              v14,
              &PKEY_Endpoint_Devnode,
              &pvar) )
      {
        if ( (_WORD)pvar == 31 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                 *(_QWORD *)&g_DeviceEnumerator,
                 v17,
                 &v12);
          if ( v8 < 0 )
            goto LABEL_16;
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v13);
          if ( v8 < 0 )
            goto LABEL_16;
          fmtid = DEVPKEY_Device_SessionId.fmtid;
          v24 = 6;
          if ( (*(int (__fastcall **)(__int64, DEVPROPGUID *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(v13, &fmtid, &v19) >= 0
            && (_WORD)v19 == 19 )
          {
            v6 = v20;
          }
        }
        else
        {
          v6 = 0;
        }
      }
      if ( pSessionId && v6 && pSessionId != v6 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            10LL,
            &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
            pSessionId,
            v6);
        }
      }
      else
      {
        v4 = 1;
      }
    }
  }
LABEL_16:
  PropVariantClear(&pvar);
  PropVariantClear(&v19);
  if ( v5 )
  {
    v9 = RpcRevertToSelf();
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, v9);
      }
    }
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 0x261u, v8);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v4;
}
