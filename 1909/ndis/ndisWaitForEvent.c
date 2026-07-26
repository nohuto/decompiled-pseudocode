/*
 * XREFs of ndisWaitForEvent @ 0x1C0123DC4
 * Callers:
 *     ndisWaitForExternalDriver @ 0x1C0123E84 (ndisWaitForExternalDriver.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

char __fastcall ndisWaitForEvent(void *a1, __int64 a2)
{
  NTSTATUS v2; // eax
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = -10000 * a2;
  v2 = KeWaitForSingleObject(a1, Executive, 0, 0, &Timeout);
  if ( !v2 )
    return 1;
  if ( v2 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v2, 0LL);
  return 0;
}
