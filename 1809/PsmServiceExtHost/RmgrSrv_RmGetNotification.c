/*
 * XREFs of RmgrSrv_RmGetNotification @ 0x180005F10
 * Callers:
 *     <none>
 * Callees:
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x180006050 (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmGetNotification(
        struct ExecutionModel::ResourceHandle__ *a1,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  unsigned int Notification; // r9d
  unsigned int v6; // [rsp+30h] [rbp-9h] BYREF
  struct ExecutionModel::ResourceHandle__ *v7; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  struct ExecutionModel::ResourceHandle__ **v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  struct ExecutionModel::ResourceHandle__ **v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v6 = 0;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 2uLL) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = a1;
    v10 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800846F0, 0LL, 0LL, 3u, &pData);
  }
  Notification = ExecutionModel::ResourceManager::RmGetNotification(a1, a1, a2);
  v6 = Notification;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 2uLL) )
  {
    v11 = 0;
    v14 = 0;
    v9 = (struct ExecutionModel::ResourceHandle__ **)&v6;
    LODWORD(v7) = *(_DWORD *)a2;
    v12 = &v7;
    v10 = 4;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008445A, 0LL, 0LL, 4u, &pData);
    return v6;
  }
  return Notification;
}
