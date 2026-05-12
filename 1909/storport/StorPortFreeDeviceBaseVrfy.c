/*
 * XREFs of StorPortFreeDeviceBaseVrfy @ 0x1C00781D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorPortFreeDeviceBaseVrfy(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 - 16);
  if ( (*(_BYTE *)(result + 248) & 1) == 0 )
    KeBugCheckEx(0xF1u, 0x2002uLL, 0LL, 0LL, 0LL);
  return result;
}
