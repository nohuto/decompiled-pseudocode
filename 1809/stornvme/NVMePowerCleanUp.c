/*
 * XREFs of NVMePowerCleanUp @ 0x1C000EB94
 * Callers:
 *     NVMeControllerRemove @ 0x1C000DF24 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E2F8 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerCleanUp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // r8

  *(_DWORD *)(a1 + 1568) &= 0xFFFFFFFA;
  result = StorPortExtendedFunction(34LL, a1, *(_QWORD *)(a1 + 1608), a4);
  v7 = *(_QWORD *)(a1 + 1552);
  if ( v7 )
  {
    result = StorPortExtendedFunction(1LL, a1, v7, v6);
    *(_QWORD *)(a1 + 1552) = 0LL;
  }
  return result;
}
