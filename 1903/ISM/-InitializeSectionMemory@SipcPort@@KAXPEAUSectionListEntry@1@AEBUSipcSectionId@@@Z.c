/*
 * XREFs of ?InitializeSectionMemory@SipcPort@@KAXPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800D623C
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800D4FF0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

void __fastcall SipcPort::InitializeSectionMemory(
        struct SipcPort::SectionListEntry *a1,
        const struct SipcSectionId *a2)
{
  size_t v2; // rdi
  char *v5; // rbx
  size_t v6; // rsi
  unsigned __int64 v7; // rcx

  v2 = *((_QWORD *)a1 + 5);
  v5 = (char *)*((_QWORD *)a1 + 3);
  v6 = *((_QWORD *)a1 + 4) - v2;
  memset_0(v5, 0, v2);
  memset_0(&v5[v2], 204, v6);
  v7 = *((_QWORD *)a1 + 3) + ((*((_QWORD *)a1 + 4) - 40LL) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)v7 = *((_QWORD *)a1 + 5);
  *(_OWORD *)(v7 + 8) = *(_OWORD *)a2;
  *(_OWORD *)(v7 + 24) = *((_OWORD *)a2 + 1);
}
