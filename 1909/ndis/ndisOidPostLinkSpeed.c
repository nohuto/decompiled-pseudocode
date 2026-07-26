/*
 * XREFs of ndisOidPostLinkSpeed @ 0x1C006C140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

_DWORD *__fastcall ndisOidPostLinkSpeed(__int64 a1)
{
  __int64 v1; // rdi
  _DWORD *v3; // rbx
  _DWORD *result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v8[4]; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+27h]
  __int64 v10; // [rsp+D0h] [rbp+2Fh]
  int v11; // [rsp+D8h] [rbp+37h]
  int v12; // [rsp+DCh] [rbp+3Bh]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_DWORD **)a1;
  result = *(_DWORD **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      62,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v3,
      v1);
    result = *(_DWORD **)a1;
  }
  if ( result && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*(_DWORD *)(a1 + 40) && *((_BYTE *)v3 + 32) < 6u )
  {
    v5 = 100LL * **(unsigned int **)(v1 + 40);
    if ( v5 != *((_QWORD *)v3 + 345) )
    {
      v8[3] = 0;
      v10 = v5;
      v9 = v5;
      *((_QWORD *)v3 + 284) = v5;
      *((_QWORD *)v3 + 285) = v5;
      v8[1] = v3[86];
      v8[2] = v3[87];
      v11 = v3[202];
      v12 = v3[117];
      v8[0] = 2621824;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = &ndisIntReqGeneric;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBuffer = v8;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx(v3, &StatusIndication);
    }
    if ( (v3[30] & 0x20000000) != 0 )
      v6 = *((_QWORD *)v3 + 99);
    else
      v6 = *((_QWORD *)v3 + 378);
    result = *(_DWORD **)(v1 + 40);
    *result = v6 / 0x64;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_DWORD *)WPP_RECORDER_SF_qq(
                       *((_QWORD *)WPP_GLOBAL_Control + 8),
                       4,
                       11,
                       63,
                       (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                       (char)v3,
                       v1);
  return result;
}
