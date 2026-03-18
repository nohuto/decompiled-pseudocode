/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C006EDAC
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C006EC88 (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C0148AD8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 72) )
    {
      Win32FreePool(*(_QWORD *)(v2 + 72));
      v2 = *(_QWORD *)(a1 + 384);
    }
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 384) = 0LL;
  }
}
