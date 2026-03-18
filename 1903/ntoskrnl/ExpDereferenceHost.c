/*
 * XREFs of ExpDereferenceHost @ 0x140914218
 * Callers:
 *     ExRegisterExtension @ 0x140758600 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140758824 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140914130 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
