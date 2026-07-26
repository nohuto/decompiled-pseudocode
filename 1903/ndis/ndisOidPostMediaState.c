/*
 * XREFs of ndisOidPostMediaState @ 0x1C006C250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisOidPostMediaState(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v4; // edx
  __int64 v5; // rax
  int *v6; // r8
  unsigned int v7; // edx
  int v8; // r9d
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v10[4]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v11; // [rsp+C0h] [rbp+17h]
  __int64 v12; // [rsp+C8h] [rbp+1Fh]
  int v13; // [rsp+D0h] [rbp+27h]
  int v14; // [rsp+D4h] [rbp+2Bh]

  v1 = a1[4];
  v2 = *a1;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v5 = v2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      64,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v2,
      v1);
    v5 = *a1;
  }
  if ( v5 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v2 + 32) < 6u )
  {
    v6 = *(int **)(v1 + 40);
    v7 = *(_DWORD *)(v2 + 120);
    v8 = *v6;
    if ( (*v6 == 0) != ((v7 >> 29) & 1) )
    {
      v10[3] = 0;
      v10[0] = 2621824;
      v10[1] = (v8 != 0) + 1;
      v12 = *(_QWORD *)(v2 + 2768);
      v11 = *(_QWORD *)(v2 + 2760);
      v10[2] = *(_DWORD *)(v2 + 348);
      v13 = *(_DWORD *)(v2 + 808);
      v14 = *(_DWORD *)(v2 + 468);
      StatusIndication.StatusBuffer = v10;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = (void *)v2;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v2, &StatusIndication);
      v7 = *(_DWORD *)(v2 + 120);
      v6 = *(int **)(v1 + 40);
    }
    v4 = (v7 & 0x20000000) == 0;
    *v6 = v4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      65,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v2,
      v1);
  }
}
