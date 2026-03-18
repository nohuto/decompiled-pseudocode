/*
 * XREFs of GreSetPaletteEntries @ 0x1C029B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00118D8 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00127A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C029EF8C (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 *v14; // rcx
  HDC v15; // rdi
  __int64 v16; // rbp
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v18, a1);
  v8 = v18;
  if ( v18 )
  {
    v19 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v18, a2, a3, a4);
    GreAcquireHmgrSemaphore(v10, v9, v11, v12);
    v15 = *(HDC *)(v8 + 40);
    while ( v15 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v20, v15);
      v14 = (__int64 *)v20[0];
      if ( !v20[0] )
        break;
      *(_DWORD *)(v20[0] + 316LL) |= 0xFu;
      LODWORD(v18) = 0;
      v15 = (HDC)v14[123];
      v16 = *v14;
      HmgDecrementShareReferenceCountEx(v14, &v18);
      if ( (_DWORD)v18 )
        bDeleteDCInternalEx(v16, 0LL);
    }
    GreReleaseHmgrSemaphore(v14, v13);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    DEC_SHARE_REF_CNT(v8);
  }
  return v7;
}
