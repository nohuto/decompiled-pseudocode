/*
 * XREFs of ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C00EA1B4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisPnpInvokeTdi(int a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h] BYREF
  int *v6; // [rsp+50h] [rbp-18h]

  if ( !ndisTdiPnPHandler )
    return 3221225473LL;
  if ( a1 && (unsigned int)(a1 - 1) >= 2 )
    return 3221225485LL;
  v4 = 0;
  v6 = &v4;
  v5 = 262146;
  return ((__int64 (__fastcall *)(__int64, __int64, int *))ndisTdiPnPHandler)(a3, a2, &v5);
}
