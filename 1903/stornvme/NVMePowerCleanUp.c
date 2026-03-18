/*
 * XREFs of NVMePowerCleanUp @ 0x1C000CDC0
 * Callers:
 *     NVMeControllerRemove @ 0x1C000B684 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B984 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerCleanUp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  *(_DWORD *)(a1 + 1576) &= 0xFFFFFFFA;
  result = StorPortExtendedFunction(34LL, a1, *(_QWORD *)(a1 + 1616));
  v3 = *(_QWORD *)(a1 + 1560);
  if ( v3 )
  {
    result = StorPortExtendedFunction(1LL, a1, v3);
    *(_QWORD *)(a1 + 1560) = 0LL;
  }
  return result;
}
