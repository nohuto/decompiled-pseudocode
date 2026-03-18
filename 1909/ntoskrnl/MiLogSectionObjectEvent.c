/*
 * XREFs of MiLogSectionObjectEvent @ 0x14088A170
 * Callers:
 *     MiCreateSection @ 0x1405D7770 (MiCreateSection.c)
 *     MiSectionDelete @ 0x140609480 (MiSectionDelete.c)
 * Callees:
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x1402BF360 (MiLogPerfMemoryEvent.c)
 */

void __fastcall MiLogSectionObjectEvent(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]

  v5 = 0LL;
  v1 = MiSectionControlArea(a1);
  v4 = v2;
  v5 = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  MiLogPerfMemoryEvent((v3 != 1) + 647, 0x20400001u, (__int64)&v4, 16, 4200706);
}
