/*
 * XREFs of PnprCopyReservedMapping @ 0x14028A170
 * Callers:
 *     PnprRecopyMirrorPages @ 0x14028A948 (PnprRecopyMirrorPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14018EA60 (MmMapLockedPagesWithReservedMapping.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PnprGetPageDestination @ 0x14028A55C (PnprGetPageDestination.c)
 *     MmUnmapReservedMapping @ 0x1402A9A10 (MmUnmapReservedMapping.c)
 */

__int64 PnprCopyReservedMapping()
{
  __int64 v0; // rax
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned int v4; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rsi
  PHYSICAL_ADDRESS v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  size_t v26; // rbx
  char *v27; // rdi
  char *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  unsigned __int64 v33; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v36[16]; // [rsp+B8h] [rbp-50h] BYREF

  v0 = *(unsigned int *)(PnprContext + 180);
  v1 = *(_QWORD *)(PnprContext + 144);
  v2 = 3 * v0;
  v3 = *(_QWORD *)(v1 + 24 * v0);
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
  {
    MmUnmapReservedMapping(*(PVOID *)(v1 + 24 * v0 + 8), 0x51706E50u, *(PMDL *)(v1 + 24 * v0));
    v3 = *(_QWORD *)(v1 + 8 * v2);
  }
  memset(Src, 0, sizeof(Src));
  memset(v36, 0, sizeof(v36));
  v4 = 0;
  PhysicalAddress = MmGetPhysicalAddress((PVOID)(v3 & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)(
              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
              &v33) >= 0
    && v33 != 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = 1;
    v36[0] = v33 >> 12;
    Src[0] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  v6 = *(_QWORD *)(v1 + 8 * v2 + 8);
  v7 = v6 + 0x10000;
  while ( v6 < v7 )
  {
    v34 = MI_READ_PTE_LOCK_FREE(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34);
    v10 = v9 & (v8 >> 12);
    if ( (!v4 || v10 != Src[v4 - 1]) && (int)PnprGetPageDestination(v10 << 12, &v33) >= 0 && v33 != 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v4 >= 0x10 )
        return 3221225485LL;
      v11 = v4;
      v12 = v33 >> 12;
      ++v4;
      Src[v11] = v10;
      v36[v11] = v12;
    }
    v6 += 4096LL;
  }
  v13 = *(unsigned int *)(PnprContext + 180);
  v14 = *(_QWORD *)(PnprContext + 136);
  v15 = 3 * v13;
  v16 = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v14 + 24 * v13) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)((PHYSICAL_ADDRESS)v16.QuadPart, &v33) >= 0
    && v33 != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v4 >= 0x10 )
      return 3221225485LL;
    v17 = v4;
    v18 = v33 >> 12;
    ++v4;
    Src[v17] = (unsigned __int64)v16.QuadPart >> 12;
    v36[v17] = v18;
  }
  v19 = *(_QWORD *)(v14 + 8 * v15 + 8);
  v20 = v19 + 0x10000;
  while ( v19 < v20 )
  {
    v34 = MI_READ_PTE_LOCK_FREE(((v19 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v21 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFLL;
    if ( v4 > 0x10 )
      return 3221225485LL;
    if ( (!v4 || v21 != Src[v4 - 1]) && (int)PnprGetPageDestination(v21 << 12, &v33) >= 0 && v33 != 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v4 >= 0x10 )
        return 3221225485LL;
      v22 = v4;
      v23 = v33 >> 12;
      ++v4;
      Src[v22] = v21;
      v36[v22] = v23;
    }
    v19 += 4096LL;
  }
  if ( !v4 )
    return 0LL;
  v24 = *(_QWORD *)(v1 + 8 * v2);
  v25 = v4;
  *(_DWORD *)(v24 + 40) = v4 << 13;
  v26 = v4;
  *(_QWORD *)v24 = 0LL;
  *(_WORD *)(v24 + 10) = 0;
  *(_QWORD *)(v24 + 32) = 0LL;
  *(_DWORD *)(v24 + 44) = 0;
  *(_WORD *)(v24 + 8) = 8 * (2 * v4 + 6);
  v27 = (char *)(*(_QWORD *)(v1 + 8 * v2) + 48LL);
  v26 *= 8LL;
  memmove(v27, Src, v26);
  memmove(&v27[v26], v36, v26);
  *(_WORD *)(*(_QWORD *)(v1 + 8 * v2) + 10LL) |= *(_WORD *)(v1 + 8 * v2 + 16);
  v28 = (char *)MmMapLockedPagesWithReservedMapping(
                  *(PVOID *)(v1 + 8 * v2 + 8),
                  0x51706E50u,
                  *(PMDL *)(v1 + 8 * v2),
                  MmCached);
  if ( v28 )
  {
    memmove(&v28[4096 * v25], v28, v25 << 12);
    return 0LL;
  }
  v29 = PnprContext;
  v30 = *(_DWORD *)(PnprContext + 20984);
  if ( !v30 )
    v30 = 5978;
  *(_DWORD *)(PnprContext + 20984) = v30;
  v31 = *(_DWORD *)(v29 + 20988);
  if ( !v31 )
    v31 = 10;
  *(_DWORD *)(v29 + 20988) = v31;
  return 3221225626LL;
}
