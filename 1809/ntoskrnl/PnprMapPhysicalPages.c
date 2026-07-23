/*
 * XREFs of PnprMapPhysicalPages @ 0x14057ABCC
 * Callers:
 *     PnprMapTargetSparePhysicalPages @ 0x14057AD90 (PnprMapTargetSparePhysicalPages.c)
 * Callees:
 *     MmMapLockedPagesWithReservedMapping @ 0x14018EA60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1402A9A10 (MmUnmapReservedMapping.c)
 */

__int64 __fastcall PnprMapPhysicalPages(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rdx
  int v9; // eax
  int v10; // eax
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  PMDL v13; // rcx
  PMDL v14; // rcx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r8
  _QWORD *v17; // rax
  PVOID v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v6 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 4) != 0 )
  {
    if ( (a2 & 0xFFF) != 0 || (v12 = *a3) == 0 || (v12 & 0xFFF) != 0 )
    {
      v22 = *(_DWORD *)(PnprContext + 20984);
      if ( !v22 )
        v22 = 4083;
      *(_DWORD *)(PnprContext + 20984) = v22;
      v23 = *(_DWORD *)(v6 + 20988);
      if ( !v23 )
        v23 = 8;
      *(_DWORD *)(v6 + 20988) = v23;
      return 3221225485LL;
    }
    else
    {
      v13 = *(PMDL *)a1;
      if ( v12 > 0x10000 )
        v12 = 0x10000LL;
      if ( (v13->MdlFlags & 1) != 0 )
      {
        MmUnmapReservedMapping(*(PVOID *)(a1 + 8), 0x51706E50u, v13);
        v13 = *(PMDL *)a1;
      }
      v13->Next = 0LL;
      v13->MdlFlags = 0;
      v13->Size = 8 * (((v12 + 4095) >> 12) + 6);
      v13->StartVa = 0LL;
      v13->ByteOffset = 0;
      v13->ByteCount = v12;
      v14 = *(PMDL *)a1;
      v15 = a2 >> 12;
      v16 = v12 >> 12;
      v17 = (_QWORD *)(*(_QWORD *)a1 + 48LL);
      if ( v12 >> 12 )
      {
        do
        {
          *v17++ = v15++;
          --v16;
        }
        while ( v16 );
        v14 = *(PMDL *)a1;
      }
      v14->MdlFlags |= *(_WORD *)(a1 + 16);
      v18 = MmMapLockedPagesWithReservedMapping(*(PVOID *)(a1 + 8), 0x51706E50u, *(PMDL *)a1, MmCached);
      if ( v18 )
      {
        *a4 = v18;
        result = 0LL;
        *a3 = v12;
      }
      else
      {
        v19 = PnprContext;
        v20 = *(_DWORD *)(PnprContext + 20984);
        if ( !v20 )
          v20 = 4138;
        *(_DWORD *)(PnprContext + 20984) = v20;
        v21 = *(_DWORD *)(v19 + 20988);
        if ( !v21 )
          v21 = 10;
        *(_DWORD *)(v19 + 20988) = v21;
        return 3221225626LL;
      }
    }
  }
  else
  {
    v9 = *(_DWORD *)(PnprContext + 20984);
    if ( !v9 )
      v9 = 4075;
    *(_DWORD *)(PnprContext + 20984) = v9;
    v10 = *(_DWORD *)(v6 + 20988);
    if ( !v10 )
      v10 = 8;
    *(_DWORD *)(v6 + 20988) = v10;
    return 3221225498LL;
  }
  return result;
}
