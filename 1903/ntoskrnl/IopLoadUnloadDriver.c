/*
 * XREFs of IopLoadUnloadDriver @ 0x1407087B0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400B40A4 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x1401538AC (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IopOpenRegistryKey @ 0x140708754 (IopOpenRegistryKey.c)
 *     IopCallDriverReinitializationRoutines @ 0x140708844 (IopCallDriverReinitializationRoutines.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  NTSTATUS Driver; // ebx
  ULONG v5; // [rsp+20h] [rbp-18h]
  NTSTATUS v6; // [rsp+40h] [rbp+8h]
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    Driver = 0;
  }
  else
  {
    LOBYTE(v5) = 0;
    Driver = IopOpenRegistryKey(&KeyHandle, 0LL, *(UNICODE_STRING **)(a1 + 64), 0x20019u, v5);
    if ( Driver >= 0 )
    {
      Driver = IopLoadDriver(KeyHandle);
      if ( Driver == -1073740955 )
      {
        Driver = v6;
      }
      else if ( Driver == -1073740914 )
      {
        Driver = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = Driver;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
