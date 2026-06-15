/*
 * XREFs of WPP_SF_Sddd @ 0x1800E6718
 * Callers:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@@Z @ 0x18003EF00 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sddd(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_90c60c8fd90d303e3f3317430dfe8a72_Traceguids, 10LL, a4);
}
