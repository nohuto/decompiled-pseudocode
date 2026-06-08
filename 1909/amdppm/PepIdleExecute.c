/*
 * XREFs of PepIdleExecute @ 0x1C000BDF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepIdleExecute(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v7 = 11LL * a3;
  if ( LOBYTE(a1[v7 + 18]) )
  {
    ((void (__fastcall *)(__int64 *, _QWORD))a1[v7 + 11])(&a1[v7 + 12], a5);
    return 0LL;
  }
  else
  {
    v9 = *a1;
    v12 = a7;
    HIDWORD(v10) = a3;
    v11 = __PAIR64__(a6, a4);
    result = PoFxProcessorNotification(v9, 5LL, &v10);
    if ( (int)result >= 0 && (int)v10 < 0 )
      return (unsigned int)v10;
  }
  return result;
}
