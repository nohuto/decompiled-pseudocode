/*
 * XREFs of EngQueryPalette @ 0x1C025EC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00092F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C0017DE4 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall EngQueryPalette(HPALETTE hPal, ULONG *piMode, ULONG cColors, ULONG *pulColors)
{
  ULONG Entries; // edi
  __int64 v8; // rbx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  Entries = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v10, hPal);
  v8 = v10[0];
  if ( v10[0] )
  {
    *piMode = *(_DWORD *)(v10[0] + 24LL) & 0xF;
    if ( *(_DWORD *)(v8 + 28) )
    {
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)v10, 0, cColors, (struct tagPALETTEENTRY *)pulColors, 1);
    }
    else
    {
      Entries = 3;
      if ( cColors >= 3 && pulColors )
      {
        *pulColors = **(_DWORD **)(v8 + 112);
        pulColors[1] = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 4LL);
        pulColors[2] = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 8LL);
      }
    }
    DEC_SHARE_REF_CNT(v8);
  }
  return Entries;
}
