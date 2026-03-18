/*
 * XREFs of FreeProcessorInfo @ 0x1C000BA48
 * Callers:
 *     GetProcessorInformation @ 0x1C000BE24 (GetProcessorInformation.c)
 *     NVMeControllerRemove @ 0x1C000DF24 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E2F8 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v7; // r8

  v4 = *(_QWORD *)(a1 + 216);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4, a4);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 224);
  if ( v7 )
  {
    result = StorPortExtendedFunction(1LL, a1, v7, a4);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  return result;
}
