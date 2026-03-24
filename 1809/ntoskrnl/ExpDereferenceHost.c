/*
 * XREFs of ExpDereferenceHost @ 0x1408D6F88
 * Callers:
 *     ExRegisterExtension @ 0x1407273C0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407275BC (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x1408D6EA0 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
