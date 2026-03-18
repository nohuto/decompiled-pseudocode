/*
 * XREFs of ExpDereferenceHost @ 0x140913C78
 * Callers:
 *     ExRegisterExtension @ 0x14075CE90 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14075D0B4 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140913B90 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
