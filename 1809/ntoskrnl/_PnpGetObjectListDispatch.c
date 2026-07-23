/*
 * XREFs of _PnpGetObjectListDispatch @ 0x14059E2BC
 * Callers:
 *     _PnpGetObjectList @ 0x14059E398 (_PnpGetObjectList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x14059B400 (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpGetObjectListDispatch(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int16 a8)
{
  __int64 result; // rax
  int v13; // r10d
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-48h] BYREF

  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a8 )
    return 3221225485LL;
  result = PnpCtxGetObjectDispatchCallback(a1, a2, &v14);
  if ( (int)result >= 0 )
  {
    if ( v14 )
    {
      v15[2] = a5;
      LODWORD(v15[3]) = a6;
      v15[4] = a7;
      v15[0] = a3;
      v15[1] = a4;
      LODWORD(v15[5]) = v13;
      return v14(a1, 0LL, a2, 5LL, v15);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
