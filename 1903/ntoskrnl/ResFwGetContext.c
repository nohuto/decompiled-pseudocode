/*
 * XREFs of ResFwGetContext @ 0x14098E080
 * Callers:
 *     BgGetContext @ 0x14098E034 (BgGetContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x1400EF2A0 (MmAllocatePagesForMdlEx.c)
 */

__int64 __fastcall ResFwGetContext(__int64 *a1)
{
  char *v1; // rbx
  char v3; // al
  int v4; // ecx
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  PMDL PagesForMdl; // rax
  PMDL v8; // rdi
  char *MappedSystemVa; // rdx
  __int64 v10; // r8
  __int64 result; // rax

  v1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v3 = dword_14042C030;
  *a1 = 0LL;
  if ( (v3 & 1) == 0 )
    return 3221225473LL;
  v4 = dword_14042C04C;
  if ( dword_14042C050 >= (unsigned int)dword_14042C04C )
    v4 = dword_14042C050;
  v5 = (dword_14042C05C + v4 + dword_14042C058 + 20479) & 0xFFFFF000;
  v6 = ((v5 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6 + v5, MmCached, 5u);
  v8 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  }
  else
  {
    MappedSystemVa = 0LL;
  }
  v10 = qword_14042C060;
  *(_QWORD *)(qword_14042C060 + 8) = v8;
  *(_QWORD *)(v10 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
    v1 = &MappedSystemVa[v6];
  *(_DWORD *)(v10 + 24) = MappedSystemVa != 0LL ? v6 + v5 : 0;
  *(_DWORD *)(v10 + 248) = MappedSystemVa != 0LL ? v5 : 0;
  *(_QWORD *)(v10 + 240) = v1;
  BgpAnimationRegionSave = qword_14042C0F0;
  BgpTextRegionSave = qword_14042C0F8;
  result = 0LL;
  *a1 = v10;
  return result;
}
