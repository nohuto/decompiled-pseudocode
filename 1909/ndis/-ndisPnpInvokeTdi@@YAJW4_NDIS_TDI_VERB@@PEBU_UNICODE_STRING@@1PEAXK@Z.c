/*
 * XREFs of ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C0115DE4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisPnpInvokeTdi(int a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v5[4]; // [rsp+48h] [rbp-20h] BYREF

  if ( !ndisTdiPnPHandler )
    return 3221225473LL;
  if ( a1 && (unsigned int)(a1 - 1) >= 2 )
    return 3221225485LL;
  v4 = 0;
  v5[1] = &v4;
  v5[0] = 262146LL;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))ndisTdiPnPHandler)(a3, a2, v5);
}
