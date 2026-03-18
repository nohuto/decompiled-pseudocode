/*
 * XREFs of DpiMiracastStopSessionRequestCallback @ 0x1C02A5E10
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF90 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DCB0 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastStopSessionRequestCallback(PVOID P, int *a2, __int64 a3)
{
  if ( *a2 < 0 )
    DpiMiracastTearDownAssociation((char *)P, *((_DWORD *)P + 110), -2147483647, 0x83u, 0);
  DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopSessionRequestCallback, a3);
}
