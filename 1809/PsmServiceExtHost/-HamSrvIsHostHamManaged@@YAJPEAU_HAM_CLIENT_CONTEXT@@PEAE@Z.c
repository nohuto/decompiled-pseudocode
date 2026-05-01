/*
 * XREFs of ?HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z @ 0x18003C43C
 * Callers:
 *     HamRpcSrvIsHostHamManaged @ 0x18003C430 (HamRpcSrvIsHostHamManaged.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800101B0 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     HamOptInIsPsmKeyEnabledEx @ 0x18003931C (HamOptInIsPsmKeyEnabledEx.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvIsHostHamManaged(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int8 *a2)
{
  unsigned int v4; // r9d
  signed int IsPsmKeyEnabled; // eax
  unsigned __int8 v7; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessPsmInfo; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t v10[280]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+270h] [rbp+170h] BYREF
  int *p_ProcessPsmInfo; // [rsp+290h] [rbp+190h]
  int v13; // [rsp+298h] [rbp+198h]
  int v14; // [rsp+29Ch] [rbp+19Ch]
  int *v15; // [rsp+2A0h] [rbp+1A0h]
  int v16; // [rsp+2A8h] [rbp+1A8h]
  int v17; // [rsp+2ACh] [rbp+1ACh]
  unsigned __int8 *v18; // [rsp+2B0h] [rbp+1B0h]
  int v19; // [rsp+2B8h] [rbp+1B8h]
  int v20; // [rsp+2BCh] [rbp+1BCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089C95, 0LL, 0LL, 2u, &pData);
  ProcessPsmInfo = RmpSystemGetProcessPsmInfo(*((_DWORD *)a1 + 34), v10);
  v4 = ProcessPsmInfo;
  if ( ProcessPsmInfo >= 0 )
  {
    IsPsmKeyEnabled = HamOptInIsPsmKeyEnabledEx((__int64)v10);
    v4 = IsPsmKeyEnabled;
    if ( IsPsmKeyEnabled )
    {
      if ( IsPsmKeyEnabled > 0 )
        v4 = (unsigned __int16)IsPsmKeyEnabled | 0xC0070000;
    }
    else
    {
      *a2 = v7;
    }
    ProcessPsmInfo = v4;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    p_ProcessPsmInfo = &ProcessPsmInfo;
    v9 = *((_DWORD *)a1 + 34);
    v15 = &v9;
    v18 = &v7;
    v13 = 4;
    v16 = 4;
    v19 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089964, 0LL, 0LL, 5u, &v11);
    return (unsigned int)ProcessPsmInfo;
  }
  return v4;
}
