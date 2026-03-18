/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C00F3CA8
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00F7A6C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 72) )
    {
      Win32FreePool(*(_QWORD *)(v2 + 72));
      v2 = *(_QWORD *)(a1 + 384);
    }
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 384) = 0LL;
  }
  return result;
}
