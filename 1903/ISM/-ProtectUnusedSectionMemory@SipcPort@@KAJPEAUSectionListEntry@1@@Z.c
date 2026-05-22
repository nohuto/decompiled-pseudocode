/*
 * XREFs of ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x1800D67DC
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800D4FF0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D5C20 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcPort::ProtectUnusedSectionMemory(struct SipcPort::SectionListEntry *a1)
{
  return SipcPort::ProtectSectionMemory(
           (void *)(*((_QWORD *)a1 + 5) + *((_QWORD *)a1 + 3)),
           ((*((_QWORD *)a1 + 4) - 40LL) & 0xFFFFFFFFFFFFFFF8uLL) - *((_QWORD *)a1 + 5),
           1u);
}
