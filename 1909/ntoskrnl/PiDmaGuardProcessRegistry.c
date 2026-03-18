/*
 * XREFs of PiDmaGuardProcessRegistry @ 0x140A18210
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmaGuardGetRegistryPolicy @ 0x140195250 (PipDmaGuardGetRegistryPolicy.c)
 */

__int64 __fastcall PiDmaGuardProcessRegistry(void *a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  result = PipDmaGuardGetRegistryPolicy(a1, (__int64)L"DmaGuardTestMode", &v2);
  if ( (int)result >= 0 && v2 == 1 )
    PipDmaGuardTestMode = 1;
  return result;
}
