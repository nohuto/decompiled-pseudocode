/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001BB3C
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0075BF0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 *     GreSelectPalette @ 0x1C0106150 (GreSelectPalette.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E580 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C006322C (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00632B8 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0087740 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // r9
  struct OBJECT *v8; // rbx
  HPALETTE v9; // rdi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  HSEMAPHORE v14[5]; // [rsp+20h] [rbp-28h] BYREF
  struct OBJECT *v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v14[0] = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v15, a2);
  v7 = *(_QWORD **)a1;
  v8 = v15;
  if ( !*(_QWORD *)a1 || !v15 || (*((_DWORD *)v15 + 6) & 0x100) == 0 )
    goto LABEL_2;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v6);
    hForePalette = a2;
    v7 = *(_QWORD **)a1;
  }
  v9 = (HPALETTE)v7[10];
  if ( v9 != a2 )
  {
    v16 = v7[11];
    if ( v8 == ppalDefault )
      goto LABEL_12;
    v11 = v7[6];
    if ( *((_QWORD *)v8 + 6) == v11 )
      goto LABEL_12;
    if ( !*((_DWORD *)v8 + 14) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v15);
      *((_QWORD *)v8 + 6) = v11;
LABEL_12:
      GreAcquireHmgrSemaphore(v6);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v16, a1);
      *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xFu;
      v12 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v12 && v8 != ppalDefault )
        *(_QWORD *)(v12 + 176) = a2;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v15, a1);
      GreReleaseHmgrSemaphore(v13);
      goto LABEL_3;
    }
LABEL_2:
    v9 = 0LL;
  }
LABEL_3:
  if ( v8 )
    HmgDecrementShareReferenceCountEx(v8);
  SEMOBJ::vUnlock((SEMOBJ *)v14);
  return v9;
}
