/*
 * XREFs of _PnpSetMappedPropertyDispatch @ 0x1406E6BF8
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x1406E6A3C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x14059B400 (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpSetMappedPropertyDispatch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 result; // rax
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[8]; // [rsp+40h] [rbp-40h] BYREF

  v15 = 0LL;
  memset(v16, 0, sizeof(v16));
  result = PnpCtxGetObjectDispatchCallback(a1, a3, &v15);
  if ( (int)result >= 0 )
  {
    if ( v15 )
    {
      v16[1] = a5;
      v16[2] = a6;
      v16[4] = a8;
      LODWORD(v16[3]) = a7;
      v16[5] = __PAIR64__(a10, a9);
      v16[0] = a4;
      return v15(a1, a2, a3, 9LL, v16);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
