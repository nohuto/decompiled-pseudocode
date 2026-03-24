/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x1406FBDDC
 * Callers:
 *     IopQueryDeviceResources @ 0x1406FB4F4 (IopQueryDeviceResources.c)
 *     PiQueryResourceRequirements @ 0x1406FBBF8 (PiQueryResourceRequirements.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     IopSynchronousCall @ 0x1405A2CE0 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(struct _DEVICE_OBJECT *a1, ULONG_PTR *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset(v5, 0, 0x48uLL);
  v5[0] = 2843;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, a2);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else if ( !*a2 )
  {
    return 3221225659LL;
  }
  return result;
}
