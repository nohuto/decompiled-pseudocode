/*
 * XREFs of EtwpGetHostPerfCounter @ 0x140310E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 EtwpGetHostPerfCounter()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  ((void (__fastcall *)(__int64 *))off_1403FE720[0])(&v1);
  return v1;
}
