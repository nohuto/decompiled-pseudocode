/*
 * XREFs of ndisRejectUnsupportedPMOffloads @ 0x1C00761BC
 * Callers:
 *     ndisIndicatePMCapabilities @ 0x1C0073210 (ndisIndicatePMCapabilities.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C0023838 (ndisIsPMProtocolOffloadSupported.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

LONG __fastcall ndisRejectUnsupportedPMOffloads(__int64 a1)
{
  __int64 i; // r8
  int v3; // edx
  __int64 *v4; // r8
  int v5; // r9d
  int v6; // ecx
  int v7; // edi
  int SetMiniport; // eax
  int v9; // edx
  _DWORD v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-C0h] BYREF
  char v13[256]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v13, 0, 0xF8uLL);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v11[0] = 0;
  KeWaitForSingleObject((PVOID)(a1 + 3952), Executive, 0, 0, 0LL);
LABEL_2:
  v11[0] = 0;
  for ( i = *(_QWORD *)(a1 + 976); i; i = *v4 )
  {
    if ( !ndisIsPMProtocolOffloadSupported(*(_DWORD *)(i + 60), a1) )
    {
      v6 = *((_DWORD *)v4 + 49);
      v11[0] = v6;
      v7 = *((_DWORD *)v4 + 11);
      if ( !v6 )
        return KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 3952), 0, 1, 0);
      if ( v6 == v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v3,
            14,
            122,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            v6);
        }
      }
      else
      {
        memset(v13, 0, 0xF8uLL);
        *(_DWORD *)&v13[88] |= 0x1800008u;
        *(_QWORD *)&v13[104] = &ndisIntReqGeneric;
        *(_DWORD *)v13 = 15466902;
        *(_QWORD *)&v13[40] = v11;
        *(_DWORD *)&v13[32] = -50265841;
        *(_DWORD *)&v13[4] = 1;
        *(_DWORD *)&v13[8] = v7;
        *(_DWORD *)&v13[48] = 4;
        SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, (__int64)v13, 0, 0LL, 0LL);
        if ( !SetMiniport )
        {
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusBuffer = v11;
          StatusIndication.SourceHandle = (void *)a1;
          StatusIndication.StatusCode = 1073938514;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx((NDIS_HANDLE)a1, &StatusIndication);
          goto LABEL_2;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            123,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            SetMiniport);
        }
      }
      return KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 3952), 0, 1, 0);
    }
  }
  return KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 3952), 0, 1, 0);
}
