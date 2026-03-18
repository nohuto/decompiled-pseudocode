/*
 * XREFs of ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C00244E8
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C00243E0 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C007F658 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C00245F8 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C029D850 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFEOBJ::bFilteredOut(PFEOBJ *this, struct _EFFILTER_INFO *a2)
{
  int v4; // r9d
  _DWORD *v5; // r8
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int v10; // edi
  struct tagPvtData *v11; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v5 = *(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (v4 & 2) != 0 )
    return 1;
  v6 = v5[12];
  if ( (v6 & 0x800000) != 0 )
    return 1;
  if ( (v4 & 8) != 0 )
    return 1;
  v7 = 0;
  if ( *((_DWORD *)a2 + 6) )
  {
    if ( (v6 & 2) != 0 )
      return 1;
  }
  if ( *((_DWORD *)a2 + 3) && (v6 & 1) != 0
    || *((_DWORD *)a2 + 4) && (v6 & 1) == 0
    || *(_DWORD *)a2
    && (v6 & 2) != 0
    && (v4 & 1) == 0
    && (*((_DWORD *)a2 + 1) != v5[32] || *((_DWORD *)a2 + 2) != v5[33])
    || *((_DWORD *)a2 + 7) && *((_DWORD *)a2 + 8) && (v6 & 2) != 0 )
  {
    return 1;
  }
  v9 = **(_QWORD **)this;
  v12[0] = v9;
  if ( *(struct PFT **const *)(v9 + 128) == gpPFTPrivate )
  {
    v11 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v12);
    if ( v11 && !*((_DWORD *)v11 + 1) )
      goto LABEL_20;
    return 1;
  }
  if ( !*(_DWORD *)(v9 + 56) )
    return 1;
LABEL_20:
  if ( *((_DWORD *)a2 + 5) && (*(_DWORD *)(*(_QWORD *)this + 12LL) & 1) == 0 )
    return 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x44) != 0 )
    return 1;
  v10 = *((_DWORD *)a2 + 9);
  if ( v10 != 1 && jMapCharset(v10, this) != (_BYTE)v10 )
    return 1;
  return v7;
}
