/*
 * XREFs of FreeProcessorInfo @ 0x1C0008EAC
 * Callers:
 *     GetProcessorInformation @ 0x1C00092E4 (GetProcessorInformation.c)
 *     NVMeControllerRemove @ 0x1C000B684 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B984 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 224);
  if ( v1 )
  {
    result = StorPortExtendedFunction(1LL, a1, v1);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  return result;
}
