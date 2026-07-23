/*
 * XREFs of VfWmiTestStartedPdoStack @ 0x140941F80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     VfIrpSendSynchronousIrp @ 0x140931534 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfWmiTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  __int64 result; // rax
  _QWORD v3[11]; // [rsp+40h] [rbp-58h] BYREF

  memset(v3, 0, 0x48uLL);
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    LOWORD(v3[0]) = -233;
    v3[1] = a1;
    return VfIrpSendSynchronousIrp(a1, (__int64)v3, 1, -1073741637, 0LL, 0LL, 0LL);
  }
  return result;
}
