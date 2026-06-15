/*
 * XREFs of ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18005DC44
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005D4C8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18005DB50 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 */

char __fastcall ServerEndpointIsStarted(const unsigned __int16 *a1)
{
  char v2; // si
  RPC_STATUS v3; // eax
  __int64 v4; // rdi
  RPC_WSTR String[2]; // [rsp+30h] [rbp-10h] BYREF
  RPC_BINDING_VECTOR *BindingVector; // [rsp+78h] [rbp+38h] BYREF
  RPC_WSTR StringBinding; // [rsp+80h] [rbp+40h] BYREF
  RPC_WSTR Protseq; // [rsp+88h] [rbp+48h] BYREF

  BindingVector = 0LL;
  v2 = 0;
  v3 = RpcServerInqBindings(&BindingVector);
  if ( !v3 || v3 == 1718 )
  {
    if ( v3 != 1718 )
    {
      v4 = 0LL;
      if ( !BindingVector->Count )
        goto LABEL_15;
      while ( 1 )
      {
        if ( !RpcBindingToStringBindingW(BindingVector->BindingH[v4], &StringBinding) )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              10LL,
              &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids,
              StringBinding);
          }
          if ( !RpcStringBindingParseW(StringBinding, 0LL, &Protseq, 0LL, String, 0LL) )
          {
            if ( !(unsigned int)_o__wcsicmp(Protseq, L"ncalrpc") )
            {
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids);
              }
              if ( !(unsigned int)_o__wcsicmp(String[0], a1) )
              {
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_S(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    12LL,
                    &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids,
                    a1);
                }
                v2 = 1;
                RpcStringFreeW(&Protseq);
                RpcStringFreeW(&StringBinding);
                RpcStringFreeW(String);
                goto LABEL_15;
              }
            }
            RpcStringFreeW(&Protseq);
            RpcStringFreeW(String);
          }
          RpcStringFreeW(&StringBinding);
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= BindingVector->Count )
          goto LABEL_15;
      }
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, a1);
    }
LABEL_15:
    if ( BindingVector )
      RpcBindingVectorFree(&BindingVector);
  }
  return v2;
}
