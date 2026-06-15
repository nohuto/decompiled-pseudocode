/*
 * XREFs of ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x140059EB4
 * Callers:
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C328 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C40C (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x14002C0B8 (_TlgCreateSz.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGetAvailableObjectCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2,
        int a3)
{
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  char *v5; // [rsp+50h] [rbp-48h]
  int v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+5Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]
  int v12; // [rsp+B0h] [rbp+18h] BYREF

  v12 = a3;
  if ( (unsigned int)dword_140086100 > 5 )
  {
    v7 = 0;
    v5 = (char *)this + 8;
    v6 = 16;
    TlgCreateSz(&pDesc, a2);
    v11 = 0;
    v9 = &v12;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_140086100, &unk_14007095E, 0LL, v3, 5u, &pData);
  }
}
