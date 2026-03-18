/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0076B9C
 * Callers:
 *     GreSelectPalette @ 0x1C0076B30 (GreSelectPalette.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020E70 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00769B4 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0076A54 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0076D60 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  HPALETTE v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rsi
  char v15; // cl
  __int64 v17; // r15
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _ERESOURCE *v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  int v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+98h] [rbp+48h] BYREF

  v3 = (struct _ERESOURCE *)ghsemPalette;
  v23 = (struct _ERESOURCE *)ghsemPalette;
  if ( ghsemPalette )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  v7 = HmgShareLockCheck((unsigned int)a2, 8);
  v10 = *(_QWORD **)a1;
  v11 = v7;
  v26 = v7;
  if ( !v10 || !v7 || (*(_DWORD *)(v7 + 24) & 0x100) == 0 )
    goto LABEL_23;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v10);
    hForePalette = a2;
    v10 = *(_QWORD **)a1;
  }
  v12 = (HPALETTE)v10[10];
  if ( v12 != a2 )
  {
    v27 = v10[11];
    if ( (struct PALETTE *)v11 == ppalDefault )
      goto LABEL_17;
    v17 = v10[6];
    if ( *(_QWORD *)(v11 + 48) == v17 )
      goto LABEL_17;
    if ( !*(_DWORD *)(v11 + 56) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v26);
      *(_QWORD *)(v11 + 48) = v17;
LABEL_17:
      GreAcquireHmgrSemaphore((int)v10, v8, v9);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v27, a1, v18);
      *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v11;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xFu;
      v19 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v19 && (struct PALETTE *)v11 != ppalDefault )
        *(_QWORD *)(v19 + 176) = a2;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v26, (__int64 **)a1);
      GreReleaseHmgrSemaphore(v21, v20, v22);
      goto LABEL_9;
    }
LABEL_23:
    v12 = 0LL;
  }
LABEL_9:
  if ( v11 )
  {
    v13 = *(_DWORD *)v11;
    v24 = 0LL;
    v25 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v24, (unsigned __int16)v13 | (v13 >> 8) & 0xFF0000, 0, 0, 1);
    if ( v25 )
    {
      v14 = v24;
      v15 = *(_BYTE *)(v24 + 14);
      if ( v15 == 5 )
      {
        v15 = 5;
        if ( gbGdiHmgrAltStacks )
        {
          if ( gpentHmgrAltStacks )
          {
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v11);
            v15 = *(_BYTE *)(v14 + 14);
          }
        }
      }
      TrackHmgrReferenceDecrement(v15, (struct OBJECT *)v11);
      --*(_DWORD *)(v11 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
      if ( v25 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
    }
  }
  SEMOBJ::vUnlock(&v23, v8, v9);
  return v12;
}
