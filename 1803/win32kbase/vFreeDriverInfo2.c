/*
 * XREFs of vFreeDriverInfo2 @ 0x1C00739A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C001E1D0 (PopThreadGuardedObject.c)
 */

__int64 __fastcall vFreeDriverInfo2(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1 - 32;
    PopThreadGuardedObject((_QWORD *)(a1 - 32));
    return Win32FreePool(v1);
  }
  return result;
}
