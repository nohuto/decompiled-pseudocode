/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x14034AD7C
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x14084FE20 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  RtlpSysVolFree(a1);
}
