/*
 * XREFs of FreeMsiInfo @ 0x1C0008DEC
 * Callers:
 *     GetInterruptMessageInformation @ 0x1C0008F20 (GetInterruptMessageInformation.c)
 *     NVMeControllerRemove @ 0x1C000B684 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B984 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeMsiInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 256);
  if ( v1 )
  {
    result = StorPortExtendedFunction(1LL, a1, v1);
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 248);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 248) = 0LL;
  }
  *(_WORD *)(a1 + 240) = 0;
  return result;
}
