/*
 * XREFs of RmgrSrv_RmSetMemoryUsageLimit @ 0x180061650
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18000A4C4 (CempRpcQueryClientInformation.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x1800675E8 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 */

__int64 __fastcall RmgrSrv_RmSetMemoryUsageLimit(void *a1, unsigned __int64 a2, BOOL *a3)
{
  BOOL v5; // eax
  unsigned int v6; // r9d
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  int v8; // r9d
  const struct _TlgProvider_t *v9; // rcx
  int v11; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  int *v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]

  if ( a3 )
  {
    v11 = CempRpcQueryClientInformation(a1, 0LL, 0LL, &v12, (__int64)&v13, 0LL);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v5 = (int)RmSrvHostTrySetCommitTargetForPple(v7, v13, v12, a2) >= 0;
      v6 = 0;
    }
    else
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
      {
        v17 = 0;
        v15 = &v11;
        v16 = 4;
        TlgWrite(v9, &unk_180092591, 0LL, 0LL, 3u, &pData);
        v8 = v11;
      }
      v5 = 0;
      v6 = v8 | 0x10000000;
    }
  }
  else
  {
    v5 = 0;
    v6 = -2147024809;
  }
  *a3 = v5;
  return v6;
}
