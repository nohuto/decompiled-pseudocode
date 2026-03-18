/*
 * XREFs of FreeProcessorGroupInfo @ 0x1C000B9FC
 * Callers:
 *     GetProcessorGroupInformation @ 0x1C000BC94 (GetProcessorGroupInformation.c)
 *     NVMeControllerRemove @ 0x1C000DF24 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorGroupInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4, a4);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  *(_DWORD *)(a1 + 192) = 0;
  return result;
}
