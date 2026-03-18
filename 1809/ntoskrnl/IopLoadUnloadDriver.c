/*
 * XREFs of IopLoadUnloadDriver @ 0x1406C6770
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA8EC (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x140135480 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406C6810 (IopCallDriverReinitializationRoutines.c)
 *     IopOpenRegistryKey @ 0x1406C68D0 (IopOpenRegistryKey.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    v3 = 0;
  }
  else
  {
    v3 = IopOpenRegistryKey(&KeyHandle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( v3 >= 0 )
    {
      v3 = IopLoadDriver(KeyHandle, 1, 0, &v5);
      if ( v3 == -1073740955 )
      {
        v3 = v5;
      }
      else if ( v3 == -1073740914 )
      {
        v3 = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
