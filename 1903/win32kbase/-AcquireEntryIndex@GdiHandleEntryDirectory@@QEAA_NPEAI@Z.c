/*
 * XREFs of ?AcquireEntryIndex@GdiHandleEntryDirectory@@QEAA_NPEAI@Z @ 0x1C0029A30
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0029910 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 * Callees:
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C005EF40 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C007917C (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 */

char __fastcall GdiHandleEntryDirectory::AcquireEntryIndex(GdiHandleEntryDirectory *this, unsigned int *a2)
{
  GdiHandleEntryTable *v4; // rcx
  unsigned int v6; // eax
  unsigned int v7; // esi
  GdiHandleEntryTable *v8; // rbp
  GdiHandleEntryTable *v9; // rcx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
    return 0;
  v4 = (GdiHandleEntryTable *)*((_QWORD *)this + 1);
  v10 = 0;
  if ( GdiHandleEntryTable::AcquireEntryIndex(v4, &v10) )
  {
    *a2 = v10;
    return 1;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 16LL) != *(_DWORD *)(*((_QWORD *)this + 1) + 8LL) )
    return 0;
  LOWORD(v6) = *((_WORD *)this + 1);
  v7 = 1;
  if ( (unsigned __int16)v6 > 1u )
  {
    do
    {
      v8 = (GdiHandleEntryTable *)*((_QWORD *)this + v7 + 1);
      if ( GdiHandleEntryTable::AcquireEntryIndex(v8, &v10) )
        goto LABEL_14;
      if ( *((_DWORD *)v8 + 4) != *((_DWORD *)v8 + 2) )
        return 0;
      v6 = *((unsigned __int16 *)this + 1);
    }
    while ( ++v7 < v6 );
  }
  if ( (_WORD)v6 == 256 )
  {
    *(_BYTE *)this = 1;
    return 0;
  }
  *((_QWORD *)this + *((unsigned __int16 *)this + 1) + 1) = GdiHandleEntryTable::_Create(0x10000u, 1);
  v9 = (GdiHandleEntryTable *)*((_QWORD *)this + *((unsigned __int16 *)this + 1) + 1);
  if ( !v9 )
    return 0;
  GdiHandleEntryTable::AcquireEntryIndex(v9, &v10);
  v7 = *((unsigned __int16 *)this + 1);
  *((_WORD *)this + 1) = v7 + 1;
LABEL_14:
  *a2 = v10 + *((_DWORD *)this + 514) + ((v7 + 0xFFFF) << 16);
  return 1;
}
