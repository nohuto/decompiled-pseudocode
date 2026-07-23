/*
 * XREFs of ExpDereferenceHost @ 0x1408D8248
 * Callers:
 *     ExRegisterExtension @ 0x140728660 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x1408D8160 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
