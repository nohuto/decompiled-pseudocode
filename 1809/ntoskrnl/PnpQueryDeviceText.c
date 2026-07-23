/*
 * XREFs of PnpQueryDeviceText @ 0x1406FEF04
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 *     PiNormalizeDeviceText @ 0x1406FEFE0 (PiNormalizeDeviceText.c)
 */

__int64 __fastcall PnpQueryDeviceText(struct _DEVICE_OBJECT *a1, int a2, __int64 a3, PVOID *a4)
{
  int v7; // eax
  PVOID v8; // rbx
  int v9; // edi
  _DWORD v11[20]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  P = 0LL;
  *a4 = 0LL;
  memset(v11, 0, 0x48uLL);
  v11[4] = PsDefaultSystemLocaleId;
  LOWORD(v11[0]) = 3099;
  v11[2] = a2;
  v7 = IopSynchronousCall(a1, (__int64)v11, -1073741637, 0LL, (ULONG_PTR *)&P);
  v8 = P;
  v9 = v7;
  if ( !P )
    v9 = -1073741637;
  if ( v9 >= 0 )
  {
    *a4 = P;
    if ( (int)PiNormalizeDeviceText(v8) >= 0 )
    {
      if ( P )
      {
        *a4 = P;
        ExFreePoolWithTag(v8, 0);
      }
    }
  }
  return (unsigned int)v9;
}
